/*
 * XREFs of Controller_RemoveControllerFromGlobalControllerList @ 0x14003C344
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x140043C80 (Controller_WdfEvtCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_RemoveControllerFromGlobalControllerList(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  KIRQL v4; // al
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rcx

  v1 = a1 + 3;
  result = a1[3];
  if ( (result || a1[4]) && (_QWORD *)result != v1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(g_WdfDriverUsbXhciContext + 16));
    v5 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v6 = (_QWORD *)v1[1], (_QWORD *)*v6 != v1) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    v7 = g_WdfDriverUsbXhciContext;
    --*(_DWORD *)(g_WdfDriverUsbXhciContext + 24);
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 16), v4);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01033 + 1648))(
             WdfDriverGlobals,
             a1[1],
             Controller_AddControllerToGlobalControllerList,
             8414LL,
             "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  }
  return result;
}
