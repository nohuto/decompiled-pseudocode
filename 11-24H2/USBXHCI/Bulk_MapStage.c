/*
 * XREFs of Bulk_MapStage @ 0x1400176E0
 * Callers:
 *     Bulk_MappingLoop @ 0x140038CF0 (Bulk_MappingLoop.c)
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140015D30 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Stage_Release @ 0x1400163D8 (Bulk_Stage_Release.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x140017A08 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     Bulk_Stage_MapIntoRing @ 0x140017BC0 (Bulk_Stage_MapIntoRing.c)
 *     WPP_RECORDER_SF_sds @ 0x140045A8C (WPP_RECORDER_SF_sds.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Bulk_MapStage(__int64 a1)
{
  __int64 *v1; // rbx
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

  v1 = *(__int64 **)(a1 + 368);
  v2 = 0;
  v4 = *v1;
  if ( *(_DWORD *)(*v1 + 76) != 3 )
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
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _DWORD, __int64 (__fastcall *)(), __int64 *, bool))(*(_QWORD *)(v8 + 8) + 88LL))(
            v8,
            v9,
            v1[6],
            *(_QWORD *)(v1[6] + 32) + *(unsigned int *)(v1[6] + 44),
            *((_DWORD *)v1 + 10),
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
  *((_DWORD *)v1 + 40) = v14;
  v15 = *(_QWORD *)(v4 + 48);
  if ( *(_WORD *)(v15 + 2) != 56 )
  {
    switch ( *(_WORD *)(v15 + 2) )
    {
      case '9':
      case ':':
        v16 = v1[7];
        v17 = *((_DWORD *)v1 + 10);
        v18 = *(unsigned int *)(v4 + 112);
        *((_OWORD *)v1 + 8) = 0LL;
        *((_OWORD *)v1 + 9) = 0LL;
        *((_DWORD *)v1 + 34) = v17;
        *((_DWORD *)v1 + 33) = v18;
        *(_DWORD *)v16 = 1;
        *(_QWORD *)(v16 + 16) = v18;
        *(_DWORD *)(v16 + 24) = v17;
        *((_DWORD *)v1 + 35) = v14;
        v19 = *(_OWORD *)(v15 + 36);
        *((_DWORD *)v1 + 32) = 2;
        *((_OWORD *)v1 + 9) = v19;
        goto LABEL_20;
      default:
        break;
    }
  }
  if ( (int)SecureDmaEnabler_PrepareMemoryForDma(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
              v1[6],
              v14,
              *((_DWORD *)v1 + 10),
              v14,
              (__int64)(v1 + 16),
              v1[7]) < 0 )
  {
    *((_DWORD *)v1 + 40) = 0;
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
  if ( *(_DWORD *)v1[7] != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v16, v14, v15);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  Bulk_Stage_MapIntoRing(v1);
  return 0LL;
}
