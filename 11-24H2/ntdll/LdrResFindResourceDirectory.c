/*
 * XREFs of LdrResFindResourceDirectory @ 0x180098320
 * Callers:
 *     LdrpFindDllActivationContext @ 0x180098000 (LdrpFindDllActivationContext.c)
 * Callees:
 *     LdrResSearchResource @ 0x1800983B0 (LdrResSearchResource.c)
 */

__int64 __fastcall LdrResFindResourceDirectory(
        wchar_t *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7)
{
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (a7 & 0xC00) != 0 )
    return 3221225485LL;
  if ( a2 )
    v8[0] = a2;
  if ( a3 )
    v8[1] = a3;
  return LdrResSearchResource(a1, v8, a4, 0LL, a5, a6);
}
