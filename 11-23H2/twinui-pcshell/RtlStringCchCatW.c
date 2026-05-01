/*
 * XREFs of RtlStringCchCatW @ 0x180738E08
 * Callers:
 *     AslpEnvResolveVars @ 0x1800EDEB0 (AslpEnvResolveVars.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1800EF414 (RtlStringLengthWorkerW.c)
 *     RtlStringCopyWorkerW @ 0x1800EF45C (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCatW(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 3221225485LL;
  result = RtlStringLengthWorkerW(a1, a2, &v8);
  if ( (int)result >= 0 )
    return RtlStringCopyWorkerW(&a1[v8], v7 - v8, v6, a3);
  return result;
}
