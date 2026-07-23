/*
 * XREFs of ApiSetResolveToHost2 @ 0x180136CD0
 * Callers:
 *     ApiSetGetImplementationHost @ 0x18015F7E0 (ApiSetGetImplementationHost.c)
 * Callees:
 *     ApiSetResolveToHost @ 0x180016CA0 (ApiSetResolveToHost.c)
 *     RtlAnsiStringToUnicodeString @ 0x18004BE00 (RtlAnsiStringToUnicodeString.c)
 *     RtlInitAnsiString @ 0x1800E0910 (RtlInitAnsiString.c)
 *     ApiSetResolveToHostA_V7 @ 0x180137548 (ApiSetResolveToHostA_V7.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall ApiSetResolveToHost2(__int64 a1, const CHAR *a2, char *a3, _OWORD *a4)
{
  NTSTATUS result; // eax
  _UNICODE_STRING v8; // [rsp+30h] [rbp-268h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-258h] BYREF
  _BYTE v10[528]; // [rsp+50h] [rbp-248h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  if ( *(_BYTE *)a1 == 7 || *(_DWORD *)a1 == 6 && *(_DWORD *)(a1 + 16) > 8u && *(_BYTE *)(a1 + 28) == 7 )
    return ApiSetResolveToHostA_V7();
  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, a2);
  if ( DestinationString.Length > 0x104u )
    return -1073741562;
  memset_thunk_772440563353939046(v10, 0, 0x20AuLL);
  *(_QWORD *)&v8.Length = 34209792LL;
  v8.Buffer = (wchar_t *)v10;
  result = RtlAnsiStringToUnicodeString(&v8, &DestinationString, 0);
  if ( result >= 0 )
    return ApiSetResolveToHost(a1, &v8.Length, 0LL, a3, (__int64)a4);
  return result;
}
