/*
 * XREFs of IsKSTThread @ 0x1400BB410
 * Callers:
 *     NtKSTWait @ 0x1400BB2E0 (NtKSTWait.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1400BB320 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     InvokeMouseCursorPositionCallout @ 0x140189720 (InvokeMouseCursorPositionCallout.c)
 *     NtKSTInitialize @ 0x1401B7BB0 (NtKSTInitialize.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1400BB438 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 */

bool __fastcall IsKSTThread(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  return CInputThreadBase::IsInputThread(*(CInputThreadBase **)(UserSessionState + 3112));
}
