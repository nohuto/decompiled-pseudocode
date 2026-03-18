/*
 * XREFs of SeSinglePrivilegeCheckEx @ 0x140853CA0
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1409174CC (CmpSetAccessStateForBackupRestore.c)
 *     SepValidOwnerSubjectContext @ 0x140A2D638 (SepValidOwnerSubjectContext.c)
 * Callees:
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x140403670 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
 */

__int64 __fastcall SeSinglePrivilegeCheckEx(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // edi
  int v4; // r15d
  __int64 v6; // rcx
  unsigned __int8 v7; // bp
  __int64 v8; // rax
  void *v9; // rsi
  PSE_EXPORTS v11; // r14
  __int64 *v12; // r8
  __int64 v13; // r9
  __int64 **v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // r8
  LUID **v18; // rdx
  LUID *v19; // rax
  unsigned int v20[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h] BYREF
  int v22; // [rsp+50h] [rbp-38h]

  v3 = 1;
  v4 = 0;
  v20[0] = 1;
  v20[1] = 1;
  v21 = a1;
  v22 = 0;
  if ( !a3 )
    return 1LL;
  v6 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
  {
    v6 = *(_QWORD *)(a2 + 16);
LABEL_4:
    v3 = v20[0];
    v7 = SepPrivilegeCheck(v6, (__int64)&v21, 1u, 1, a3);
    goto LABEL_5;
  }
  if ( *(int *)(a2 + 8) >= 2 )
    goto LABEL_4;
  v7 = 0;
LABEL_5:
  v8 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    v8 = *(_QWORD *)(a2 + 16);
  v9 = **(void ***)(v8 + 152);
  if ( RtlEqualSid(SeLocalSystemSid, v9) )
    return v7;
  v11 = SeExports;
  if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v9) && !RtlEqualSid(v11->SeLocalServiceSid, v9) )
    goto LABEL_11;
  v12 = &v21;
  v13 = v3;
  do
  {
    v14 = SepFilterPrivileges;
    v15 = *SepFilterPrivileges;
    while ( *(_DWORD *)v12 != *(_DWORD *)v15 || *((_DWORD *)v12 + 1) != *((_DWORD *)v15 + 1) )
    {
      v15 = v14[1];
      ++v14;
      if ( !v15 )
        goto LABEL_22;
    }
    ++v4;
LABEL_22:
    v12 = (__int64 *)((char *)v12 + 12);
    --v13;
  }
  while ( v13 );
  v16 = &v21;
  v17 = v3;
  do
  {
    v18 = &SepServicesFilterPrivileges;
    v19 = SepServicesFilterPrivileges;
    while ( *(_DWORD *)v16 != v19->LowPart || *((_DWORD *)v16 + 1) != v19->HighPart )
    {
      v19 = v18[1];
      ++v18;
      if ( !v19 )
        goto LABEL_27;
    }
    ++v4;
LABEL_27:
    v16 = (__int64 *)((char *)v16 + 12);
    --v17;
  }
  while ( v17 );
  if ( v4 != v3 )
LABEL_11:
    SepAdtPrivilegedServiceAuditAlarm(
      (struct _SECURITY_SUBJECT_CONTEXT *)a2,
      &SeSubsystemName,
      0LL,
      *(_QWORD *)a2,
      *(_QWORD *)(a2 + 16),
      v20,
      v7);
  return v7;
}
