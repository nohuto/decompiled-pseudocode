/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x140836D2C
 * Callers:
 *     NtCreateWnfStateName @ 0x140836950 (NtCreateWnfStateName.c)
 *     ExpWnfLookupPermanentName @ 0x14085ACA8 (ExpWnfLookupPermanentName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140454080 (RtlGetDaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x1409AAF50 (RtlpApplyAclToObject.c)
 */

int __fastcall ExpWnfSpecializeSecurityDescriptor(_BYTE *a1)
{
  __int64 v2; // rax
  PACL v3; // rbx
  __int16 v4; // cx
  BOOLEAN v6; // [rsp+40h] [rbp+8h] BYREF
  BOOLEAN v7; // [rsp+48h] [rbp+10h] BYREF
  PACL v8; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  v8 = 0LL;
  LODWORD(v2) = RtlGetDaclSecurityDescriptor(a1, &v6, &v8, &v7);
  v3 = v8;
  if ( (int)v2 >= 0 && v6 && v8 )
    LODWORD(v2) = RtlpApplyAclToObject(v8, &ExpWnfNotificationMapping);
  if ( *a1 == 1 )
  {
    v4 = *((_WORD *)a1 + 1);
    if ( (v4 & 0x10) != 0 )
    {
      if ( v4 >= 0 )
      {
        v3 = (PACL)*((_QWORD *)a1 + 3);
      }
      else
      {
        v2 = *((unsigned int *)a1 + 3);
        if ( (_DWORD)v2 )
          v3 = (PACL)&a1[v2];
        else
          v3 = 0LL;
      }
    }
    if ( (v4 & 0x10) != 0 && v3 )
      LODWORD(v2) = RtlpApplyAclToObject(v3, &ExpWnfNotificationMapping);
  }
  return v2;
}
