/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x14083448C
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x140833714 (ExpWnfLookupPermanentName.c)
 *     NtCreateWnfStateName @ 0x1408340B0 (NtCreateWnfStateName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140449130 (RtlGetDaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x140833230 (RtlpApplyAclToObject.c)
 */

void __fastcall ExpWnfSpecializeSecurityDescriptor(_BYTE *a1)
{
  NTSTATUS DaclSecurityDescriptor; // eax
  PACL v3; // rbx
  __int16 v4; // cx
  __int64 v5; // rax
  BOOLEAN v6; // [rsp+40h] [rbp+8h] BYREF
  BOOLEAN v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  v8 = 0LL;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(a1, &v6, (PACL *)&v8, &v7);
  v3 = (PACL)v8;
  if ( DaclSecurityDescriptor >= 0 && v6 && v8 )
    RtlpApplyAclToObject(v8, &ExpWnfNotificationMapping);
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
        v5 = *((unsigned int *)a1 + 3);
        if ( (_DWORD)v5 )
          v3 = (PACL)&a1[v5];
        else
          v3 = 0LL;
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      if ( v3 )
        RtlpApplyAclToObject((__int64)v3, &ExpWnfNotificationMapping);
    }
  }
}
