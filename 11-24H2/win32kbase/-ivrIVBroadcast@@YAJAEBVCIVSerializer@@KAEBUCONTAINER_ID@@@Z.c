/*
 * XREFs of ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140217710
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140213C58 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground @ 0x140217FD4 (IVForegroundSync--_anonymous_namespace_--ivBroadcastSetNullForeground.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x140218868 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x14021A304 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x14021AAB0 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ivrIVBroadcast(const struct CIVSerializer *a1, unsigned int a2, const struct CONTAINER_ID *a3)
{
  __int64 (__fastcall *v6)(_QWORD, _QWORD, struct _KTHREAD *, _QWORD, const struct CONTAINER_ID *); // rax

  v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _KTHREAD *, _QWORD, const struct CONTAINER_ID *))(W32GetUserSessionState(a1) + 19640);
  if ( v6 )
    return v6(*((_QWORD *)a1 + 3), *((unsigned int *)a1 + 8), KeGetCurrentThread(), a2, a3);
  else
    return 3221225659LL;
}
