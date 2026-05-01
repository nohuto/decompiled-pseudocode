/*
 * XREFs of AslpFileVerBlockGetValueOffset @ 0x1800A3310
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1800A29B8 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x1800A3380 (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x1800A3574 (AslpFileVerStringBlockGetValue.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1800A38B0 (RtlStringCbLengthW.c)
 */

__int64 __fastcall AslpFileVerBlockGetValueOffset(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  *a1 = 0LL;
  if ( (unsigned __int64)(a3 - 8) > 0x7FF7 )
    return 3221225485LL;
  result = RtlStringCbLengthW(a2 + 6, a3 - 6, &v5);
  if ( (int)result >= 0 )
  {
    if ( v5 + 8 < v5 )
    {
      return 3221225621LL;
    }
    else
    {
      *a1 = (v5 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
      return 0LL;
    }
  }
  return result;
}
