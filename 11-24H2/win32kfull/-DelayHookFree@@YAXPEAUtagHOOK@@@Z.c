/*
 * XREFs of ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x140283A7C
 * Callers:
 *     FreeHook @ 0x1400837F0 (FreeHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x140083B14 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400840AC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140084510 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall DelayHookFree(struct tagHOOK *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rcx
  PERESOURCE v14; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v15[48]; // [rsp+30h] [rbp-48h] BYREF

  v14 = *(PERESOURCE *)(W32GetUserSessionState(a1, a2) + 42376);
  if ( !tagDomLock::IsLockedShared(&v14) )
    __int2c();
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v15);
  if ( !*(_DWORD *)(W32GetUserSessionState(v4, v3) + 19816) && !IS_USERCRIT_OWNED_SHAREDONLY(v6, v5, v7) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3469);
  if ( !PtiCurrent(v6, v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3470);
  if ( (*((_DWORD *)a1 + 16) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3471);
  v8 = *((_DWORD *)a1 + 16);
  if ( (v8 & 0x1000) == 0 )
  {
    *((_DWORD *)a1 + 16) = v8 | 0x1000;
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v9 = _HMPheFromObjectWorker(a1);
    *(_BYTE *)(v9 + 25) &= ~2u;
    v12 = PtiCurrent(v11, v10);
    v13 = *((_QWORD *)v12 + 136);
    if ( v13 )
      *((_QWORD *)a1 + 11) = v13;
    *((_QWORD *)v12 + 136) = a1;
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v15);
}
