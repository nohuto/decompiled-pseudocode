/*
 * XREFs of FreeDelayedHooks @ 0x14011B7C0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140078964 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400840AC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void FreeDelayedHooks()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct tagTHREADINFO *v2; // rbx
  __int64 i; // rcx
  _QWORD *v4; // rdi
  _BYTE v5[48]; // [rsp+28h] [rbp-40h] BYREF

  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>((__int64)v5);
  v2 = PtiCurrent(v1, v0);
  for ( i = *((_QWORD *)v2 + 136); i; i = *((_QWORD *)v2 + 136) )
  {
    *((_QWORD *)v2 + 136) = *(_QWORD *)(i + 88);
    v4 = (_QWORD *)_HMPkheFromObject(i);
    if ( !*(_DWORD *)(*v4 + 8LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3522LL);
    HMUnlockObject(*v4);
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v5);
}
