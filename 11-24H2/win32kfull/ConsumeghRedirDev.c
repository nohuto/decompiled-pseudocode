/*
 * XREFs of ConsumeghRedirDev @ 0x1402FEB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ConsumeghRedirDev(int a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  result = *(_QWORD *)(v2 + 4728);
  *(_QWORD *)(v2 + 4728) = 0LL;
  return result;
}
