/*
 * XREFs of RtlStringCchCatW @ 0x18013F06C
 * Callers:
 *     RtlpOpenAndMapCustomCultureFile @ 0x1801157D4 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1800DC480 (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW_0 @ 0x18013F0D4 (RtlStringLengthWorkerW_0.c)
 */

__int64 __fastcall RtlStringCchCatW(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 3221225485LL;
  result = RtlStringLengthWorkerW_0(a1, a2, &v7);
  if ( (int)result >= 0 )
    return RtlStringCopyWorkerW((_WORD *)(a1 + 2 * v7), v6 - v7, 0LL, a3);
  return result;
}
