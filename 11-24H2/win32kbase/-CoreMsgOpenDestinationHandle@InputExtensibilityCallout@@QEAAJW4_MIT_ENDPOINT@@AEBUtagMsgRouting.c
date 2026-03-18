/*
 * XREFs of ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x140148F34
 * Callers:
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140126F90 (NtMITCoreMsgKOpenConnectionTo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     CoreMsgOpenConnection @ 0x1400FCB98 (CoreMsgOpenConnection.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgOpenDestinationHandle(
        __int64 a1,
        __int64 a2,
        const struct tagMsgRoutingInfo *a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // r14
  __int64 v8; // rbp
  void **v9; // r8
  int v10; // edi
  __int128 v12; // [rsp+20h] [rbp-48h]

  v4 = (int)a2;
  if ( (unsigned __int64)(int)a2 >= 0x17 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 209LL);
  if ( !(unsigned int)IsCurrentProcessDwm(a1, a2, (__int64)a3, a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 211LL);
  v7 = 0LL;
  v12 = 0LL;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8), 0);
  v8 = 5 * v4;
  v9 = (void **)(a1 + 24 + 40 * v4);
  if ( *v9 )
  {
    v10 = -2147020579;
  }
  else
  {
    v10 = CoreMsgOpenConnection(0, a3, v9);
    if ( v10 >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 8 * v8 + 56);
      v12 = *(_OWORD *)(a1 + 8 * v8 + 40);
    }
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8), 0LL);
  if ( *((_QWORD *)&v12 + 1) && (v12 & 1) != 0 )
    (*((void (__fastcall **)(__int64, __int64))&v12 + 1))(1LL, v7);
  return (unsigned int)v10;
}
