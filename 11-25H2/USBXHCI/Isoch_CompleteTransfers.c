/*
 * XREFs of Isoch_CompleteTransfers @ 0x140025880
 * Callers:
 *     Isoch_ProcessTransferCompletion @ 0x14004CCC0 (Isoch_ProcessTransferCompletion.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1400164C0 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140017F80 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_Release @ 0x140025A1C (Isoch_Stage_Release.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x140025BC8 (Isoch_Stage_FreeScatterGatherList.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall Isoch_CompleteTransfers(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  KIRQL v6; // bl
  int v7; // r12d
  unsigned __int8 *i; // rax
  unsigned __int8 *v9; // rbp
  KIRQL v10; // dl

  while ( 1 )
  {
    v4 = (_QWORD *)*a2;
    if ( (_QWORD *)*a2 == a2 )
      break;
    if ( (_QWORD *)v4[1] != a2 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *a2 = v5;
    *(_QWORD *)(v5 + 8) = a2;
    v4[1] = v4;
    *v4 = v4;
    if ( *((_DWORD *)v4 + 17) == 259 )
    {
      *((_BYTE *)v4 + 133) = *((_BYTE *)v4 + 132);
      v7 = 0;
      *((_BYTE *)v4 + 134) = *((_BYTE *)v4 + 130);
      for ( i = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v4 + 128);
            ;
            i = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v4 + 128) )
      {
        v9 = i;
        if ( !i )
          break;
        Isoch_Stage_FreeScatterGatherList(a1, i);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        Isoch_Stage_Release(a1, v9);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        ++*((_DWORD *)v4 + 28);
        ++v7;
      }
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      Isoch_Transfer_CompleteCancelable(a1, v4, -1, -1073676288, 1, 0);
      v10 = *(_BYTE *)(a1 + 104);
      *(_DWORD *)(a1 + 384) -= v7;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v10);
    }
    else
    {
      v6 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
        WdfDriverGlobals,
        v4[3],
        *((unsigned int *)v4 + 17));
      KeLowerIrql(v6);
    }
  }
}
