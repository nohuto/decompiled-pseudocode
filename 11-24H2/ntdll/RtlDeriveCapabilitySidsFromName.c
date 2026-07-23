/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x18001AAA0
 * Callers:
 *     RtlCapabilityCheck @ 0x18001A270 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlPrefixUnicodeString @ 0x1800A64C0 (RtlPrefixUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1800CDC50 (RtlUpcaseUnicodeString.c)
 *     SymCryptSha256 @ 0x180158618 (SymCryptSha256.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  NTSTATUS result; // eax
  unsigned int Length; // ebx
  wchar_t *Buffer; // r14
  __int128 v9; // xmm0
  size_t v10; // rbp
  const void **v11; // rbx
  __int128 v12; // xmm0
  unsigned int v13; // edi
  BOOLEAN v14; // al
  int v15; // ecx
  __int128 v16; // xmm1
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-88h] BYREF
  __int128 v18; // [rsp+30h] [rbp-78h]
  __int128 v19; // [rsp+40h] [rbp-68h]
  __int128 v20; // [rsp+50h] [rbp-58h] BYREF
  __int128 v21; // [rsp+60h] [rbp-48h]

  DestinationString = 0LL;
  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  *(_OWORD *)CapabilitySid = 0LL;
  *((_OWORD *)CapabilitySid + 1) = 0LL;
  *((_OWORD *)CapabilitySid + 2) = 0LL;
  *(_OWORD *)CapabilityGroupSid = 0LL;
  *((_OWORD *)CapabilityGroupSid + 1) = 0LL;
  *((_QWORD *)CapabilityGroupSid + 4) = 0LL;
  *((_DWORD *)CapabilityGroupSid + 10) = 0;
  result = RtlUpcaseUnicodeString(&DestinationString, UnicodeString, 1u);
  if ( result >= 0 )
  {
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
    SymCryptSha256(DestinationString.Buffer, DestinationString.Length, &v20);
    v9 = v20;
    *(_WORD *)CapabilityGroupSid = 2305;
    v10 = Length;
    v11 = (const void **)&RtlpLegacyApplicationCapabilityNames;
    *(_DWORD *)((char *)CapabilityGroupSid + 2) = RtlpNtAuthority;
    *((_WORD *)CapabilityGroupSid + 3) = 1280;
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    *(_OWORD *)((char *)CapabilityGroupSid + 12) = v9;
    v18 = v9;
    v12 = v21;
    *(_OWORD *)((char *)CapabilityGroupSid + 28) = v21;
    v13 = 0;
    v19 = v12;
    while ( (_DWORD)v10 != *(unsigned __int16 *)v11 || memcmp(Buffer, v11[1], v10) )
    {
      ++v13;
      v11 += 2;
      if ( v13 >= 0xC )
        goto LABEL_11;
    }
    *(_WORD *)CapabilitySid = 513;
    *(_SID_IDENTIFIER_AUTHORITY *)((char *)CapabilitySid + 2) = RtlpAppPackageAuthority;
    *((_DWORD *)CapabilitySid + 2) = 3;
    *((_DWORD *)CapabilitySid + 3) = v13 + 1;
LABEL_11:
    if ( Buffer )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, DestinationString.Buffer);
      v19 = v21;
      v18 = v20;
    }
    if ( v13 == 12 )
    {
      *(_WORD *)CapabilitySid = 2561;
      *(_SID_IDENTIFIER_AUTHORITY *)((char *)CapabilitySid + 2) = RtlpAppPackageAuthority;
      *((_DWORD *)CapabilitySid + 2) = 3;
      v14 = RtlPrefixUnicodeString((PUNICODE_STRING)&String1, UnicodeString, 1u);
      v15 = 0x10000;
      if ( !v14 )
        v15 = 1024;
      *((_DWORD *)CapabilitySid + 3) = v15;
      v16 = v19;
      *((_OWORD *)CapabilitySid + 1) = v18;
      *((_OWORD *)CapabilitySid + 2) = v16;
    }
    return 0;
  }
  return result;
}
