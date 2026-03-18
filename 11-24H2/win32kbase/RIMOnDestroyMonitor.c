/*
 * XREFs of RIMOnDestroyMonitor @ 0x140063AA8
 * Callers:
 *     DestroyMonitor @ 0x1400638E0 (DestroyMonitor.c)
 * Callees:
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1401D4394 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1401E3540 (RawInputManagerObjectCreateKernelHandle.c)
 */

int __fastcall RIMOnDestroyMonitor(struct tagMONITOR *a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx

  UserSessionState = W32GetUserSessionState(a1);
  v3 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 16840) + 16LL);
  if ( v3 )
  {
    LODWORD(UserSessionState) = RawInputManagerObjectCreateKernelHandle(v3, 3LL, 0LL);
    if ( (int)UserSessionState >= 0 )
    {
      rimOnCheckPointerDeviceMonitors(0LL, a1);
      LODWORD(UserSessionState) = ZwClose(0LL);
    }
  }
  return UserSessionState;
}
