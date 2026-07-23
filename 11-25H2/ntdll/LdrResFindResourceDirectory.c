/*
 * XREFs of LdrResFindResourceDirectory @ 0x180003990
 * Callers:
 *     LdrpFindDllActivationContext @ 0x180003670 (LdrpFindDllActivationContext.c)
 * Callees:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 */

__int64 __fastcall LdrResFindResourceDirectory(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7)
{
  _QWORD Src[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (a7 & 0xC00) != 0 )
    return 3221225485LL;
  if ( a2 )
    Src[0] = a2;
  if ( a3 )
    Src[1] = a3;
  return LdrResSearchResource(a1, Src, a4, 0LL, a5, a6);
}
