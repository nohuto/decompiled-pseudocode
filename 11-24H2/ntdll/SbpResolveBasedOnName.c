/*
 * XREFs of SbpResolveBasedOnName @ 0x180113358
 * Callers:
 *     SbSelectProcedure @ 0x18000B080 (SbSelectProcedure.c)
 *     SbpUpdateCache @ 0x18000BBE0 (SbpUpdateCache.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1800044C0 (RtlInitUnicodeStringEx.c)
 *     LdrGetDllHandleEx @ 0x180037360 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x18006EDE0 (LdrLoadDll.c)
 *     SbpLookup @ 0x18015AE28 (SbpLookup.c)
 *     SbpParseFuncName @ 0x18015AF28 (SbpParseFuncName.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall SbpResolveBasedOnName(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  PVOID DllHandle; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR SourceString[256]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v8[2048]; // [rsp+250h] [rbp+150h] BYREF

  v3 = 0LL;
  DllHandle = 0LL;
  DestinationString = 0LL;
  if ( a1
    && (unsigned int)SbpParseFuncName(a1, SourceString, a3, v8)
    && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
    && (LdrGetDllHandleEx(1u, (PWSTR)1, 0LL, &DestinationString, &DllHandle) >= 0
     || LdrLoadDll(0LL, 0LL, &DestinationString, &DllHandle) >= 0) )
  {
    return SbpLookup(DllHandle, v8);
  }
  return v3;
}
