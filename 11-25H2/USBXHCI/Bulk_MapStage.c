/*
 * XREFs of Bulk_MapStage @ 0x14001C3D0
 * Callers:
 *     Bulk_MapTransfers @ 0x14001AB60 (Bulk_MapTransfers.c)
 * Callees:
 *     Bulk_Stage_MapIntoRing @ 0x1400058A0 (Bulk_Stage_MapIntoRing.c)
 *     Bulk_Stage_Release @ 0x140018DCC (Bulk_Stage_Release.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140018F80 (Bulk_Transfer_CompleteCancelable.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1400360C8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     WPP_RECORDER_SF_sds @ 0x14004577C (WPP_RECORDER_SF_sds.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Bulk_MapStage(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // bp
  __int64 v4; // rsi
  _QWORD *v6; // rcx
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r12
  int v10; // r14d
  unsigned int v11; // ebp
  int v12; // r8d
  bool v13; // zf
  int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  __int128 v19; // xmm0
  bool v20; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 368);
  v2 = 0;
  v4 = *(_QWORD *)v1;
  if ( *(_DWORD *)(*(_QWORD *)v1 + 76LL) != 3 )
  {
    Bulk_Stage_MapIntoRing(*(_QWORD *)(a1 + 368));
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 288) )
  {
    v6 = *(_QWORD **)(a1 + 40);
    v7 = *(_QWORD *)(v4 + 48);
    v8 = *(_QWORD *)(v6[12] + 24LL);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 248))(WdfDriverGlobals, *v6);
    if ( KeGetCurrentIrql() != 2 )
      v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v20 = (*(_BYTE *)(v7 + 32) & 1) == 0;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), __int64, bool))(*(_QWORD *)(v8 + 8) + 88LL))(
            v8,
            v9,
            *(_QWORD *)(v1 + 48),
            *(_QWORD *)(*(_QWORD *)(v1 + 48) + 32LL) + *(unsigned int *)(*(_QWORD *)(v1 + 48) + 44LL),
            *(_DWORD *)(v1 + 40),
            Bulk_EvtDmaCallback,
            v1,
            v20);
    if ( v2 && KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
    if ( v10 >= 0 )
      return _InterlockedXor((volatile signed __int32 *)(a1 + 344), 1u) != 0 ? 2 : 0;
    v11 = 1;
    goto LABEL_9;
  }
  v12 = *(_DWORD *)(a1 + 304);
  v11 = 1;
  v13 = v12 == -1;
  v14 = v12 + 1;
  *(_DWORD *)(a1 + 304) = v14;
  if ( v13 )
  {
    *(_DWORD *)(a1 + 304) = 1;
    v14 = 1;
  }
  *(_DWORD *)(v1 + 160) = v14;
  v15 = *(_QWORD *)(v4 + 48);
  if ( *(_WORD *)(v15 + 2) != 56 )
  {
    switch ( *(_WORD *)(v15 + 2) )
    {
      case '9':
      case ':':
        v16 = *(_QWORD *)(v1 + 56);
        v17 = *(_DWORD *)(v1 + 40);
        v18 = *(unsigned int *)(v4 + 112);
        *(_OWORD *)(v1 + 128) = 0LL;
        *(_OWORD *)(v1 + 144) = 0LL;
        *(_DWORD *)(v1 + 136) = v17;
        *(_DWORD *)(v1 + 132) = v18;
        *(_DWORD *)v16 = 1;
        *(_QWORD *)(v16 + 16) = v18;
        *(_DWORD *)(v16 + 24) = v17;
        *(_DWORD *)(v1 + 140) = v14;
        v19 = *(_OWORD *)(v15 + 36);
        *(_DWORD *)(v1 + 128) = 2;
        *(_OWORD *)(v1 + 144) = v19;
        goto LABEL_20;
      default:
        break;
    }
  }
  if ( (int)SecureDmaEnabler_PrepareMemoryForDma(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
              *(_QWORD *)(v1 + 48),
              v14,
              *(_DWORD *)(v1 + 40),
              v14,
              v1 + 128,
              *(_QWORD *)(v1 + 56)) < 0 )
  {
    *(_DWORD *)(v1 + 160) = 0;
LABEL_9:
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    Bulk_Stage_Release(a1, (unsigned __int8 *)v1);
    if ( *(_DWORD *)(v4 + 120) == *(_DWORD *)(v4 + 116) )
    {
      Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v4, -1073737728, 1);
      v11 = 3;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    return v11;
  }
LABEL_20:
  if ( **(_DWORD **)(v1 + 56) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v16, v14, v15);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  Bulk_Stage_MapIntoRing(v1);
  return 0LL;
}
