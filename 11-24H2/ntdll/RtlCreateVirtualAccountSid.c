/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x1800CDAF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlUpcaseUnicodeString @ 0x1800CDC50 (RtlUpcaseUnicodeString.c)
 *     SymCryptSha1Append @ 0x180157290 (SymCryptSha1Append.c)
 *     SymCryptSha1Init @ 0x180158490 (SymCryptSha1Init.c)
 *     SymCryptSha1Result @ 0x1801584C0 (SymCryptSha1Result.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlCreateVirtualAccountSid(PUNICODE_STRING Name, ULONG BaseSubAuthority, PSID Sid, PULONG SidLength)
{
  ULONG v8; // eax
  NTSTATUS result; // eax
  wchar_t *Buffer; // rdi
  int v11; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v13[4]; // [rsp+30h] [rbp-B8h] BYREF
  int v14; // [rsp+34h] [rbp-B4h]
  _DWORD v15[6]; // [rsp+B0h] [rbp-38h] BYREF

  v14 = 0;
  DestinationString = 0LL;
  memset_thunk_772440563353939046(v13, 0, 0x7CuLL);
  if ( !Name || !SidLength || BaseSubAuthority - 80 > 0x1F )
    return -1073741811;
  v8 = *SidLength;
  *SidLength = 32;
  if ( v8 < 0x20 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, Name, 1u);
  if ( result >= 0 )
  {
    SymCryptSha1Init(v13);
    Buffer = DestinationString.Buffer;
    SymCryptSha1Append(v13, DestinationString.Buffer, DestinationString.Length);
    SymCryptSha1Result(v13, v15);
    if ( Buffer )
      RtlpSysVolFree(Buffer);
    *(_WORD *)Sid = 1537;
    *(_DWORD *)((char *)Sid + 2) = RtlpNtAuthority;
    *((_WORD *)Sid + 3) = 1280;
    v11 = v15[0];
    *((_DWORD *)Sid + 2) = BaseSubAuthority;
    *((_DWORD *)Sid + 3) = v11;
    *((_DWORD *)Sid + 4) = v15[1];
    *((_DWORD *)Sid + 5) = v15[2];
    *((_DWORD *)Sid + 6) = v15[3];
    *((_DWORD *)Sid + 7) = v15[4];
    return 0;
  }
  return result;
}
