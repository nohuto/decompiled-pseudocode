/*
 * XREFs of MWaitIdle @ 0x140004180
 * Callers:
 *     <none>
 * Callees:
 *     IssueVerw @ 0x14000E380 (IssueVerw.c)
 */

__int64 __fastcall MWaitIdle(const void **a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = HIWORD(a2);
  if ( (_WORD)v2 )
    IssueVerw((unsigned __int16)v2, v2);
  _mm_monitor(a1[1], 0, 0);
  result = *(unsigned int *)a1;
  _mm_mwait(*((_DWORD *)a1 + 1), result);
  return result;
}
