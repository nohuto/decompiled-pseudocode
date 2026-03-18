/*
 * XREFs of Isoch_MapStage @ 0x14001EC00
 * Callers:
 *     Isoch_MappingLoop @ 0x14001CC20 (Isoch_MappingLoop.c)
 * Callees:
 *     Isoch_Stage_MapIntoRing @ 0x140006F00 (Isoch_Stage_MapIntoRing.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140017F80 (Isoch_Transfer_CompleteCancelable.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     Isoch_Stage_Release @ 0x140025A1C (Isoch_Stage_Release.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1400360C8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Isoch_MapStage(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // r14
  __int64 v4; // rbp
  _QWORD *v5; // rcx
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // r12
  int v9; // esi
  int v11; // r8d
  bool v12; // zf
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // ecx
  __int128 v18; // xmm0
  bool v19; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 376);
  v2 = 0;
  v4 = *(_QWORD *)v1;
  *(_DWORD *)(a1 + 360) = 0;
  if ( !*(_BYTE *)(a1 + 288) )
  {
    v5 = *(_QWORD **)(a1 + 40);
    v6 = *(_QWORD *)(v4 + 48);
    v7 = *(_QWORD *)(v5[12] + 24LL);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 248))(WdfDriverGlobals, *v5);
    if ( KeGetCurrentIrql() != 2 )
      v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v19 = (*(_BYTE *)(v6 + 32) & 1) == 0;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), __int64, bool))(*(_QWORD *)(v7 + 8) + 88LL))(
           v7,
           v8,
           *(_QWORD *)(v1 + 64),
           *(_QWORD *)(*(_QWORD *)(v1 + 64) + 32LL) + *(unsigned int *)(*(_QWORD *)(v1 + 64) + 44LL),
           *(_DWORD *)(v1 + 52),
           Isoch_EvtDmaCallback,
           v1,
           v19);
    if ( v2 && KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
    if ( v9 < 0 )
      goto LABEL_6;
    if ( _InterlockedXor((volatile signed __int32 *)(a1 + 348), 1u) )
      return 2LL;
    return *(_DWORD *)(a1 + 360) != 0 ? 4 : 0;
  }
  v11 = *(_DWORD *)(a1 + 304);
  v12 = v11 == -1;
  v13 = v11 + 1;
  *(_DWORD *)(a1 + 304) = v13;
  if ( v12 )
  {
    *(_DWORD *)(a1 + 304) = 1;
    v13 = 1;
  }
  *(_DWORD *)(v1 + 160) = v13;
  v14 = *(_QWORD *)(v4 + 48);
  if ( *(_WORD *)(v14 + 2) != 56 )
  {
    switch ( *(_WORD *)(v14 + 2) )
    {
      case '9':
      case ':':
        v15 = *(_QWORD *)(v1 + 72);
        v16 = (unsigned int)(*(_DWORD *)(v4 + 88) + *(_DWORD *)(v4 + 92));
        v17 = *(_DWORD *)(v1 + 52);
        *(_OWORD *)(v1 + 128) = 0LL;
        *(_OWORD *)(v1 + 144) = 0LL;
        *(_DWORD *)(v1 + 136) = v17;
        *(_DWORD *)(v1 + 132) = v16;
        *(_DWORD *)v15 = 1;
        *(_QWORD *)(v15 + 16) = v16;
        *(_DWORD *)(v15 + 24) = v17;
        *(_DWORD *)(v1 + 140) = v13;
        v18 = *(_OWORD *)(v14 + 36);
        *(_DWORD *)(v1 + 128) = 2;
        *(_OWORD *)(v1 + 144) = v18;
        goto LABEL_17;
      default:
        break;
    }
  }
  if ( (int)SecureDmaEnabler_PrepareMemoryForDma(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
              *(_QWORD *)(v1 + 64),
              v13,
              *(_DWORD *)(v1 + 52),
              v13,
              v1 + 128,
              *(_QWORD *)(v1 + 72)) >= 0 )
  {
LABEL_17:
    Debug_FreAssertMsg(
      (__int64)"ScatterGatherList->NumberOfElements must be 1",
      **(_DWORD **)(v1 + 72) == 1,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
      3868);
    Isoch_Stage_MapIntoRing((__int64 *)v1);
    return *(_DWORD *)(a1 + 360) != 0 ? 4 : 0;
  }
  *(_DWORD *)(v1 + 160) = 0;
LABEL_6:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  Isoch_Stage_Release(a1, v1);
  if ( *(_DWORD *)(v4 + 112) == *(_DWORD *)(v4 + 116) )
    Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v4, -1, -1073737728, 0, 0);
  else
    *(_DWORD *)(v4 + 108) = *(_DWORD *)(v4 + 96) - *(_DWORD *)(v4 + 104);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 1LL;
}
