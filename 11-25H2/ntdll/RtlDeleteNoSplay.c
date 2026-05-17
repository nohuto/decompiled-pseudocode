/*
 * XREFs of RtlDeleteNoSplay @ 0x1800C40D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSubtreePredecessor @ 0x1800C4320 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x1800C4350 (SwapSplayLinks.c)
 */

_QWORD *__fastcall RtlDeleteNoSplay(_QWORD *a1, __int64 *a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( a1[1] && a1[2] )
  {
    v6 = RtlSubtreePredecessor();
    if ( (_QWORD *)*a1 == a1 )
      *a2 = v6;
    SwapSplayLinks(v6, a1);
  }
  result = (_QWORD *)a1[1];
  if ( result || (result = (_QWORD *)a1[2]) != 0LL )
  {
    v5 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
    {
      *result = result;
      *a2 = (__int64)result;
    }
    else
    {
      v7 = 1LL;
      if ( (_QWORD *)v5[1] != a1 )
        v7 = 2LL;
      v5[v7] = result;
      *result = *a1;
    }
  }
  else
  {
    result = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
    {
      *a2 = 0LL;
    }
    else
    {
      v8 = 1LL;
      if ( (_QWORD *)result[1] != a1 )
        v8 = 2LL;
      result[v8] = 0LL;
    }
  }
  return result;
}
