/*
 * XREFs of RtlCreateServiceSid @ 0x1800CD150
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180133630 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlUpcaseUnicodeString @ 0x1800CD400 (RtlUpcaseUnicodeString.c)
 *     SymCryptSha1Append @ 0x18015A480 (SymCryptSha1Append.c)
 *     SymCryptSha1Init @ 0x18015B680 (SymCryptSha1Init.c)
 *     SymCryptSha1Result @ 0x18015B6B0 (SymCryptSha1Result.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlCreateServiceSid(PUNICODE_STRING ServiceName, PSID ServiceSid, PULONG ServiceSidLength)
{
  ULONG v6; // eax
  NTSTATUS result; // eax
  wchar_t *Buffer; // rdi
  int v9; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v11[4]; // [rsp+30h] [rbp-B8h] BYREF
  int v12; // [rsp+34h] [rbp-B4h]
  _DWORD v13[6]; // [rsp+B0h] [rbp-38h] BYREF

  v12 = 0;
  DestinationString = 0LL;
  memset_thunk_772440563353939046(v11, 0, 0x7CuLL);
  if ( !ServiceName || !ServiceSidLength )
    return -1073741811;
  v6 = *ServiceSidLength;
  *ServiceSidLength = 32;
  if ( v6 < 0x20 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, ServiceName, 1u);
  if ( result >= 0 )
  {
    SymCryptSha1Init(v11);
    Buffer = DestinationString.Buffer;
    SymCryptSha1Append(v11, DestinationString.Buffer, DestinationString.Length);
    SymCryptSha1Result(v11, v13);
    if ( Buffer )
      RtlpSysVolFree(Buffer);
    *(_WORD *)ServiceSid = 1537;
    *(_DWORD *)((char *)ServiceSid + 2) = RtlpNtAuthority;
    *((_WORD *)ServiceSid + 3) = 1280;
    v9 = v13[0];
    *((_DWORD *)ServiceSid + 2) = 80;
    *((_DWORD *)ServiceSid + 3) = v9;
    *((_DWORD *)ServiceSid + 4) = v13[1];
    *((_DWORD *)ServiceSid + 5) = v13[2];
    *((_DWORD *)ServiceSid + 6) = v13[3];
    *((_DWORD *)ServiceSid + 7) = v13[4];
    return 0;
  }
  return result;
}
