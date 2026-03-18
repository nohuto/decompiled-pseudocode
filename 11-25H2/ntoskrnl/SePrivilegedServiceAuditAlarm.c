/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x14089F8F0
 * Callers:
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x140862780 (ObpAdjustCreatorAccessState.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 * Callees:
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14089FC40 (SepAdtPrivilegedServiceAuditAlarm.c)
 */

char __fastcall SePrivilegedServiceAuditAlarm(int a1, __int64 *a2, _DWORD *a3, char a4)
{
  __int64 v4; // rax
  void *v9; // rdi
  LUID *v10; // rax
  PSE_EXPORTS v11; // r15
  int v12; // edx
  _DWORD *v13; // r9
  __int64 v14; // r11
  __int64 **v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // r8
  _DWORD *v18; // rcx
  LUID **v19; // r9

  v4 = *a2;
  if ( !*a2 )
    v4 = a2[2];
  v9 = **(void ***)(v4 + 152);
  LOBYTE(v10) = RtlEqualSid(SeLocalSystemSid, v9);
  if ( !(_BYTE)v10 )
  {
    v11 = SeExports;
    LOBYTE(v10) = RtlEqualSid(SeExports->SeNetworkServiceSid, v9);
    if ( !(_BYTE)v10 )
    {
      LOBYTE(v10) = RtlEqualSid(v11->SeLocalServiceSid, v9);
      if ( !(_BYTE)v10 )
        goto LABEL_6;
    }
    v12 = 0;
    if ( a3 )
    {
      LODWORD(v10) = *a3;
      if ( *a3 )
      {
        v13 = a3 + 2;
        v14 = (unsigned int)v10;
        do
        {
          v15 = SepFilterPrivileges;
          v16 = *SepFilterPrivileges;
          while ( *v13 != *(_DWORD *)v16 || v13[1] != *((_DWORD *)v16 + 1) )
          {
            v16 = v15[1];
            ++v15;
            if ( !v16 )
              goto LABEL_17;
          }
          ++v12;
LABEL_17:
          v13 += 3;
          --v14;
        }
        while ( v14 );
        v17 = (unsigned int)*a3;
        v18 = a3 + 2;
        do
        {
          v19 = &SepServicesFilterPrivileges;
          v10 = SepServicesFilterPrivileges;
          while ( 1 )
          {
            if ( *v18 == v10->LowPart )
            {
              LODWORD(v10) = v10->HighPart;
              if ( v18[1] == (_DWORD)v10 )
                break;
            }
            v10 = v19[1];
            ++v19;
            if ( !v10 )
              goto LABEL_22;
          }
          ++v12;
LABEL_22:
          v18 += 3;
          --v17;
        }
        while ( v17 );
        if ( v12 != *a3 )
LABEL_6:
          LOBYTE(v10) = SepAdtPrivilegedServiceAuditAlarm(
                          (_DWORD)a2,
                          (unsigned int)&SeSubsystemName,
                          a1,
                          *a2,
                          a2[2],
                          (__int64)a3,
                          a4);
      }
    }
  }
  return (char)v10;
}
