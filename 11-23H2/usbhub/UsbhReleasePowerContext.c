/*
 * XREFs of UsbhReleasePowerContext @ 0x1C001BA68
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003200 (UsbhPdoSetD0.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C000B5D0 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoD0Worker_Action @ 0x1C000CE60 (UsbhFdoD0Worker_Action.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C001A910 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhSet_D0_wQueued_Action @ 0x1C001E1B0 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C003C0B8 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

void __fastcall UsbhReleasePowerContext(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rbx
  _DWORD *v5; // rsi
  __int64 v6; // r9
  _QWORD *v7; // r8

  v3 = FdoExt(a1);
  v4 = *(_QWORD *)(a2 + 72);
  v5 = v3;
  *(_BYTE *)(v4 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v4 + 136) = 1;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( *(_BYTE *)(a2 + 136) )
    *((_QWORD *)v5 + 114) = 0LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v6 + 8) != a2 + 8 || (v7 = *(_QWORD **)(a2 + 16), *v7 != a2 + 8) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  ExFreePoolWithTag((PVOID)a2, 0);
  *(_DWORD *)(v4 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v4 + 132));
}
