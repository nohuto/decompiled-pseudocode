/*
 * XREFs of sub_140008A10 @ 0x140008A10
 * Callers:
 *     sub_1400087F4 @ 0x1400087F4 (sub_1400087F4.c)
 *     sub_140008954 @ 0x140008954 (sub_140008954.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140008A10(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // r9

  v2 = a1;
  v3 = a1 + 1;
  v4 = 0LL;
  while ( (unsigned __int64)v3 <= a2 && !*v2 )
    v3 = ++v2 + 1;
  if ( (unsigned __int64)v2 >= a2 )
    return (_QWORD *)a2;
  if ( (unsigned __int64)(v2 + 10) > a2 )
    return 0LL;
  if ( *(_DWORD *)v2 == 80 )
    return v2;
  return (_QWORD *)v4;
}
