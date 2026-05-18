/*
 * XREFs of sub_18000F6D4 @ 0x18000F6D4
 * Callers:
 *     sub_18000DA9C @ 0x18000DA9C (sub_18000DA9C.c)
 *     sub_18000F61C @ 0x18000F61C (sub_18000F61C.c)
 *     sub_18000F7EC @ 0x18000F7EC (sub_18000F7EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F6D4(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD *v4; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  __int16 v7; // cx
  _WORD *v8; // rcx
  __int64 result; // rax

  v4 = a1;
  if ( a2 )
  {
    v5 = 2147483646LL;
    v6 = a4 - (_QWORD)a1;
    do
    {
      if ( !v5 )
        break;
      v7 = *(_WORD *)((char *)v4 + v6);
      if ( !v7 )
        break;
      *v4 = v7;
      --v5;
      ++v4;
      --a2;
    }
    while ( a2 );
  }
  v8 = v4 - 1;
  result = a2 == 0 ? 0x8007007A : 0;
  if ( a2 )
    v8 = v4;
  *v8 = 0;
  return result;
}
