/*
 * XREFs of FilterConvertToString @ 0x140824370
 * Callers:
 *     PiDqTraceQueryCreate @ 0x1409F9FD4 (PiDqTraceQueryCreate.c)
 * Callees:
 *     ExpressionConvertToString @ 0x140ABEBA8 (ExpressionConvertToString.c)
 */

__int64 __fastcall FilterConvertToString(unsigned int a1, __int64 a2, unsigned int a3, _WORD *a4, unsigned int *a5)
{
  _WORD *v5; // r14
  unsigned int v6; // edi
  unsigned int v10; // ebx
  unsigned int i; // esi
  __int64 result; // rax
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = a4;
  v6 = a3;
  v13 = 0;
  v10 = 2;
  if ( a3 >= 2 )
    *a4 = 0;
  for ( i = 0; i < a1; ++i )
  {
    result = ExpressionConvertToString(a2 + 56LL * i, v6, v5, &v13);
    if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
      return result;
    if ( v10 + v13 - 2 < v10 )
      return 3221225621LL;
    v10 += v13 - 2;
    if ( v6 >= (unsigned __int64)v13 - 2 )
    {
      v6 += 2 - v13;
      v5 += ((unsigned __int64)v13 - 2) >> 1;
    }
  }
  result = 0LL;
  if ( a5 )
    *a5 = v10;
  if ( v10 > a3 )
    return 3221225507LL;
  return result;
}
