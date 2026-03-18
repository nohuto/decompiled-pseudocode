/*
 * XREFs of GetInputThreadKernelThread @ 0x1402127A4
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021D9E8 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall GetInputThreadKernelThread(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rdi

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 18808);
  v2 = v1 + 8;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(v1 + 8), 0);
  v3 = *(_QWORD *)(v1 + 32);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
