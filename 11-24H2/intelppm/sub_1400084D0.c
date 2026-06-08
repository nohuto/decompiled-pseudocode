/*
 * XREFs of sub_1400084D0 @ 0x1400084D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400102A0 @ 0x1400102A0 (sub_1400102A0.c)
 */

__int64 __fastcall sub_1400084D0(const void **a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = a2;
  if ( (_WORD)a2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(v2) )
    sub_1400102A0(HIWORD(v2), a2);
  _mm_monitor(a1[1], 0, 0);
  result = *(unsigned int *)a1;
  _mm_mwait(*((_DWORD *)a1 + 1), result);
  if ( (_WORD)v2 )
  {
    result = (unsigned __int16)v2;
    __writemsr(0x48u, (unsigned __int16)v2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
