/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C0062BBC
 * Callers:
 *     zzzDestroyCaret @ 0x1C0005F9C (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C000FD54 (xxxCreateCaret.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 * Callees:
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 *     zzzInternalHideCaret @ 0x1C0062CA4 (zzzInternalHideCaret.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 */

__int64 zzzInternalDestroyCaret()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v8[2] = 0LL;
  result = zzzInternalHideCaret();
  v1 = *(_QWORD *)(gptiCurrent + 432LL);
  v2 = (__int64 *)(v1 + 304);
  if ( *(_QWORD *)(v1 + 352) )
  {
    result = FindTimer(*v2, 0xFFFFLL, 2u, 1, 0LL);
    *(_QWORD *)(v1 + 352) = 0LL;
  }
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_DWORD *)(v1 + 316) = 0;
  v3 = *v2;
  if ( *v2 )
  {
    v4 = *v2;
    v8[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v8;
    v8[1] = v3;
    HMLockObject(v4);
    HMAssignmentUnlock(v2);
    xxxWindowEvent(0x8001u, gdwDeferWinEvent != 0 ? 2 : 0);
    return ThreadUnlock1(v6, v5, v7);
  }
  return result;
}
