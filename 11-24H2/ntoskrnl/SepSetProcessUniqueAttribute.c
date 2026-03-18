/*
 * XREFs of SepSetProcessUniqueAttribute @ 0x140A32FD4
 * Callers:
 *     SeSubProcessToken @ 0x140A30C24 (SeSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140357454 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     SepDereferenceLuidToIndexEntry @ 0x1404561B8 (SepDereferenceLuidToIndexEntry.c)
 *     SepAddLuidToIndexEntry @ 0x140A330CC (SepAddLuidToIndexEntry.c)
 */

__int64 __fastcall SepSetProcessUniqueAttribute(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  _BYTE v6[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h] BYREF
  _DWORD v8[2]; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+38h] [rbp-38h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h]
  _BYTE *v12; // [rsp+60h] [rbp-10h]
  __int64 v13; // [rsp+80h] [rbp+10h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  v11 = 0LL;
  v7 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  result = SepAddLuidToIndexEntry(&v7, v6, &v13);
  if ( (int)result >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 1136);
    if ( v3 )
      SepDereferenceLuidToIndexEntry(v3);
    *(_QWORD *)(a1 + 1136) = v13;
    RtlInitUnicodeString(&DestinationString, L"TSA://ProcUnique");
    v4 = *(_QWORD *)(a1 + 776);
    LODWORD(v11) = 2;
    *(_QWORD *)((char *)&v11 + 4) = 0x200000041LL;
    v12 = v6;
    v8[0] = 1;
    v8[1] = 1;
    p_DestinationString = &DestinationString;
    LODWORD(v13) = 4;
    return AuthzBasepSetSecurityAttributesToken(v4, (int *)&v13, (__int64)v8, v5);
  }
  return result;
}
