/*
 * XREFs of AslpFileVerBlockGetValueOffset @ 0x1404A4D8C
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x14080FBCC (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerStringBlockGetValue @ 0x140810450 (AslpFileVerStringBlockGetValue.c)
 *     AslpFileVerQueryBlock @ 0x14094329C (AslpFileVerQueryBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslpFileVerBlockGetValueOffset(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  _WORD *v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rdx

  *a1 = 0LL;
  if ( (unsigned __int64)(a3 - 8) > 0x7FF7 )
    return 3221225485LL;
  v4 = (_WORD *)(a2 + 6);
  v5 = (unsigned __int64)(a3 - 6) >> 1;
  if ( !v4 || v5 > 0x7FFFFFFF )
    return 3221225485LL;
  v6 = (unsigned __int64)(a3 - 6) >> 1;
  if ( v5 )
  {
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v6;
    }
    while ( v6 );
  }
  result = v6 == 0 ? 0xC000000D : 0;
  if ( v6 )
    v8 = v5 - v6;
  else
    v8 = 0LL;
  if ( v6 )
  {
    if ( 2 * v8 + 8 >= 2 * v8 )
    {
      *a1 = (2 * v8 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
      return 0LL;
    }
    else
    {
      return 3221225621LL;
    }
  }
  return result;
}
