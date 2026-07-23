/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x14084FDF0
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x14087EBB0 (ObpAdjustCreatorAccessState.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 */

void __fastcall SePrivilegedServiceAuditAlarm(
        unsigned __int16 *a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        unsigned int *a3,
        char a4)
{
  _QWORD **ClientToken; // rax
  void *v9; // rdi
  PSE_EXPORTS v10; // r15
  int v11; // edx
  _DWORD *v12; // r10
  __int64 v13; // r11
  __int64 **v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // r9
  _DWORD *v17; // rcx
  LUID **v18; // r8
  LUID *v19; // rax

  ClientToken = (_QWORD **)a2->ClientToken;
  if ( !a2->ClientToken )
    ClientToken = (_QWORD **)a2->PrimaryToken;
  v9 = (void *)*ClientToken[19];
  if ( !RtlEqualSid(SeLocalSystemSid, v9) )
  {
    v10 = SeExports;
    if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v9) && !RtlEqualSid(v10->SeLocalServiceSid, v9) )
      goto LABEL_6;
    v11 = 0;
    if ( a3 && *a3 )
    {
      v12 = a3 + 2;
      v13 = *a3;
      do
      {
        v14 = SepFilterPrivileges;
        v15 = *SepFilterPrivileges;
        while ( *v12 != *(_DWORD *)v15 || v12[1] != *((_DWORD *)v15 + 1) )
        {
          v15 = v14[1];
          ++v14;
          if ( !v15 )
            goto LABEL_17;
        }
        ++v11;
LABEL_17:
        v12 += 3;
        --v13;
      }
      while ( v13 );
      v16 = *a3;
      v17 = a3 + 2;
      do
      {
        v18 = &SepServicesFilterPrivileges;
        v19 = SepServicesFilterPrivileges;
        while ( *v17 != v19->LowPart || v17[1] != v19->HighPart )
        {
          v19 = v18[1];
          ++v18;
          if ( !v19 )
            goto LABEL_22;
        }
        ++v11;
LABEL_22:
        v17 += 3;
        --v16;
      }
      while ( v16 );
      if ( v11 != *a3 )
LABEL_6:
        SepAdtPrivilegedServiceAuditAlarm(
          a2,
          &SeSubsystemName,
          a1,
          (__int64)a2->ClientToken,
          (__int64)a2->PrimaryToken,
          a3,
          a4);
    }
  }
}
