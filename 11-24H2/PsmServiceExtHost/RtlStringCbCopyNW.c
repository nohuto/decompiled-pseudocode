/*
 * XREFs of RtlStringCbCopyNW @ 0x18009ED04
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1800A4510 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1800A4B44 (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyNW(_WORD *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  __int16 v9; // ax
  _WORD *v10; // rax

  v4 = a2 >> 1;
  if ( v4 - 1 > 0x7FFFFFFE )
    return 3221225485LL;
  v5 = a4 >> 1;
  if ( v5 > 0x7FFFFFFE )
  {
    *a1 = 0;
    return 3221225485LL;
  }
  v7 = v5 - v4;
  v8 = a3 - (_QWORD)a1;
  do
  {
    if ( !(v7 + v4) )
      break;
    v9 = *(_WORD *)((char *)a1 + v8);
    if ( !v9 )
      break;
    *a1++ = v9;
    --v4;
  }
  while ( v4 );
  v10 = a1 - 1;
  if ( v4 )
    v10 = a1;
  *v10 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}
