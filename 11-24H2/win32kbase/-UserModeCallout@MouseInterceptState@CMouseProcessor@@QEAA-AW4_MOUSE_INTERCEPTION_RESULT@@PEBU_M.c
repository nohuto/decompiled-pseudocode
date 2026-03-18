/*
 * XREFs of ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021EC54
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021BF64 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x14021D894 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     IsInputProcessingActivated @ 0x140048E30 (IsInputProcessingActivated.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1400BB320 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ??0?$CAutoUnlockPushLockEx@$00@@QEAA@PEAVW32_PUSH_LOCK@@@Z @ 0x14021B678 (--0-$CAutoUnlockPushLockEx@$00@@QEAA@PEAVW32_PUSH_LOCK@@@Z.c)
 *     ??1?$CAutoUnlockPushLockEx@$00@@QEAA@XZ @ 0x14021B884 (--1-$CAutoUnlockPushLockEx@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::UserModeCallout(struct W32_PUSH_LOCK *a1, _OWORD *a2, int *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // xmm1_8
  unsigned int v13; // ebx
  struct W32_PUSH_LOCK *v15; // [rsp+20h] [rbp-99h] BYREF
  __int64 *v16[5]; // [rsp+28h] [rbp-91h] BYREF
  _QWORD v17[20]; // [rsp+50h] [rbp-69h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v16, "MouseInterceptionCallout", 0LL);
  CAutoUnlockPushLockEx<1>::CAutoUnlockPushLockEx<1>(&v15, a1);
  memset(v17, 0, sizeof(v17));
  v6 = a2[1];
  *(_OWORD *)&v17[1] = *a2;
  memset(&v16[1], 0, 24);
  v7 = a2[2];
  *(_OWORD *)&v17[3] = v6;
  v17[0] = 0x100000000LL;
  *(_OWORD *)&v17[5] = v7;
  *(_OWORD *)&v17[7] = *(_OWORD *)&v16[1];
  v17[9] = 0LL;
  if ( IsInputProcessingActivated(v8) && *(_QWORD *)(W32GetUserSessionState(v9) + 16408) )
  {
    UserSessionState = W32GetUserSessionState(v10);
    InputExtensibilityCallout::CallUserModeLockFree(
      *(InputExtensibilityCallout **)(UserSessionState + 16408),
      (struct _CLIENT_DEVICE_NOTIFICATION *)v17);
  }
  v12 = v17[9];
  *(_OWORD *)a3 = *(_OWORD *)&v17[7];
  *((_QWORD *)a3 + 2) = v12;
  v13 = *a3;
  CAutoUnlockPushLockEx<1>::~CAutoUnlockPushLockEx<1>(&v15);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v16);
  return v13;
}
