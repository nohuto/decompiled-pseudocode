/*
 * XREFs of SepSetTokenAllApplicationPackagesPolicy @ 0x140607388
 * Callers:
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 */

__int64 __fastcall SepSetTokenAllApplicationPackagesPolicy(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  _DWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+28h] [rbp-38h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h]
  __int64 *v10; // [rsp+50h] [rbp-10h]
  __int64 v11; // [rsp+70h] [rbp+10h] BYREF
  int v12; // [rsp+78h] [rbp+18h] BYREF

  v10 = 0LL;
  v11 = a2;
  DestinationString = 0LL;
  v9 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WIN://NOALLAPPPKG");
  *(_QWORD *)&v9 = 2LL;
  DWORD2(v9) = 1;
  v10 = &v11;
  v6[0] = 1;
  v6[1] = 1;
  v3 = *(_QWORD *)(a1 + 776);
  p_DestinationString = &DestinationString;
  v12 = 4;
  return AuthzBasepSetSecurityAttributesToken(v3, &v12, (__int64)v6, v4);
}
