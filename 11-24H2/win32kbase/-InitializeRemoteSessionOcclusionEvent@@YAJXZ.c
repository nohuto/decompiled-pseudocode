/*
 * XREFs of ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x14014A1D0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     CreateKernelEventObject @ 0x14014A22C (CreateKernelEventObject.c)
 */

__int64 __fastcall InitializeRemoteSessionOcclusionEvent(__int64 a1, __int64 a2)
{
  __int64 KernelEventObject; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  LOBYTE(a2) = 1;
  KernelEventObject = CreateKernelEventObject(a1, a2);
  *(_QWORD *)(W32GetUserSessionState(v3) + 68696) = KernelEventObject;
  W32GetUserSessionState(v4);
  return *(_QWORD *)(W32GetUserSessionState(v5) + 68696) == 0LL ? 0xC0000017 : 0;
}
