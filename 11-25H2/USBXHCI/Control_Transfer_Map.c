/*
 * XREFs of Control_Transfer_Map @ 0x140004C90
 * Callers:
 *     Control_MapTransfer @ 0x140004680 (Control_MapTransfer.c)
 * Callees:
 *     Control_Transfer_MapIntoRing @ 0x140004F80 (Control_Transfer_MapIntoRing.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     TR_EnsureInputBufferForTrbs @ 0x1400354F8 (TR_EnsureInputBufferForTrbs.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1400360C8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     WPP_RECORDER_SF_DDd @ 0x140049AD8 (WPP_RECORDER_SF_DDd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Control_Transfer_Map(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // esi
  char v3; // r14
  __int64 v5; // rbp
  __int64 v6; // rax
  __int16 v7; // dx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r15
  int v13; // edi
  int v14; // r8d
  bool v15; // zf
  int v16; // r8d
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // rdx
  int v20; // edx
  bool v21; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 360);
  v2 = 0;
  v3 = 0;
  v5 = *(_QWORD *)(v1 + 48);
  if ( *(_WORD *)(v5 + 2) == 50 && *(_DWORD *)(v5 + 56) )
  {
    *(_DWORD *)(v1 + 116) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 352),
      -10000LL * *(unsigned int *)(v5 + 56));
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
  if ( *(_DWORD *)(v6 + 24) <= 1u || (v9 = *(unsigned int *)(v5 + 64), (unsigned int)v9 >= *(_DWORD *)(v6 + 48)) )
    v7 = 0;
  else
    v7 = *(_WORD *)(*(_QWORD *)(v6 + 56) + 2 * v9);
  *(_WORD *)(a1 + 112) = v7;
  if ( *(_BYTE *)(a1 + 288) )
  {
    v2 = TR_EnsureInputBufferForTrbs(a1, (unsigned int)(*(_DWORD *)(a1 + 196) + 1));
    if ( v2 < 0 )
      return 3221225626LL;
  }
  if ( *(_DWORD *)(v1 + 64) != 3 )
  {
LABEL_6:
    Control_Transfer_MapIntoRing(a1);
    return (unsigned int)v2;
  }
  if ( *(_BYTE *)(a1 + 288) )
  {
    v14 = *(_DWORD *)(a1 + 304);
    v15 = v14 == -1;
    v16 = v14 + 1;
    *(_DWORD *)(a1 + 304) = v16;
    if ( v15 )
    {
      *(_DWORD *)(a1 + 304) = 1;
      v16 = 1;
    }
    v17 = *(_QWORD *)(v1 + 96);
    v18 = *(_DWORD *)(v1 + 104);
    *(_DWORD *)(v1 + 200) = v16;
    v2 = SecureDmaEnabler_PrepareMemoryForDma(
           *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
           *(_QWORD *)(v1 + 72),
           v16,
           v18,
           v16,
           v1 + 168,
           v17);
    if ( v2 >= 0 )
    {
      LOBYTE(v19) = **(_DWORD **)(v1 + 96) == 1;
      Debug_FreAssertMsg(
        "ScatterGatherList->NumberOfElements must be 1",
        v19,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\control.c",
        2631LL);
      goto LABEL_6;
    }
    *(_DWORD *)(v1 + 200) = 0;
    Debug_FreAssertMsg(
      "SecureDmaEnabler_PrepareMemoryForDma has failed",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\control.c",
      2638LL);
    return (unsigned int)v2;
  }
  else
  {
    v10 = *(_QWORD **)(a1 + 40);
    v11 = *(_QWORD *)(v10[12] + 24LL);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 248))(WdfDriverGlobals, *v10);
    if ( KeGetCurrentIrql() != 2 )
      v3 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v21 = (*(_BYTE *)(v5 + 32) & 1) == 0;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64, bool))(*(_QWORD *)(v11 + 8) + 88LL))(
            v11,
            v12,
            *(_QWORD *)(v1 + 72),
            *(_QWORD *)(*(_QWORD *)(v1 + 72) + 32LL) + *(unsigned int *)(*(_QWORD *)(v1 + 72) + 44LL),
            *(_DWORD *)(v1 + 104),
            Control_EvtDmaCallback,
            a1,
            v21);
    if ( v3 && KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD *)(a1 + 40));
    if ( v13 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_DDd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v20,
        14,
        37,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        v13);
    }
    return (unsigned int)v13;
  }
}
