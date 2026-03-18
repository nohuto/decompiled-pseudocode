/*
 * XREFs of CmUpdateFeatureConfiguration @ 0x1407C64D0
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     CmpAllocatePoolWithQuota @ 0x140458B14 (CmpAllocatePoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407D4800 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140AD4F6C (CmFcManagerUpdateFeatureConfigurations.c)
 */

__int64 __fastcall CmUpdateFeatureConfiguration(void *Src, size_t Size, KPROCESSOR_MODE AccessMode)
{
  size_t v4; // r14
  unsigned int *v6; // rdi
  struct _PRIVILEGE_SET *v7; // rsi
  BOOLEAN v8; // bl
  unsigned int v9; // ebx
  unsigned int *PoolWithQuota; // rax
  __int64 v11; // rcx
  struct _PRIVILEGE_SET *v12; // rax
  unsigned int updated; // eax
  unsigned __int64 v14; // rax
  int v15; // ecx
  ACCESS_MASK GrantedAccess; // [rsp+60h] [rbp-68h] BYREF
  unsigned int *v18; // [rsp+68h] [rbp-60h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+88h] [rbp-40h] BYREF
  NTSTATUS AccessStatus; // [rsp+E8h] [rbp+20h] BYREF

  v4 = (unsigned int)Size;
  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v6 = 0LL;
  v7 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v8 = SeAccessCheck(
         CmFcFeatureConfigSecurityDescriptor,
         &SubjectSecurityContext,
         0,
         1u,
         0,
         0LL,
         &CmFcFeatureConfigMapping,
         AccessMode,
         &GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  if ( !v8 )
  {
    v9 = AccessStatus;
    goto LABEL_27;
  }
  if ( (unsigned int)v4 < 4 )
    goto LABEL_4;
  PoolWithQuota = (unsigned int *)CmpAllocatePoolWithQuota(256LL);
  v6 = PoolWithQuota;
  v18 = PoolWithQuota;
  if ( !PoolWithQuota )
    goto LABEL_6;
  memmove(PoolWithQuota, Src, v4);
  v11 = *v6;
  if ( (_DWORD)v11 )
  {
    if ( (_DWORD)v11 != 1 )
      goto LABEL_26;
    if ( (_DWORD)v4 == 40 )
    {
      if ( v6[4] == 1 )
      {
        if ( AccessMode )
        {
          v11 = *((_QWORD *)v6 + 3);
          if ( v11 )
          {
            if ( (*((_QWORD *)v6 + 4) & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = 0x7FFFFFFF0000LL;
          }
        }
        if ( *((_QWORD *)v6 + 3) )
        {
          v12 = (struct _PRIVILEGE_SET *)CmpAllocatePoolWithQuota(256LL);
          v7 = v12;
          if ( !v12 )
          {
LABEL_6:
            v9 = -1073741670;
            goto LABEL_27;
          }
          memmove(v12, *((const void **)v6 + 4), *((_QWORD *)v6 + 3));
        }
        updated = CmFcManagerOverwriteFeatureConfigurationSection(
                    v11,
                    *((_QWORD *)v6 + 1),
                    v6[4],
                    v7,
                    *((_QWORD *)v6 + 3));
        goto LABEL_25;
      }
      goto LABEL_26;
    }
LABEL_4:
    v9 = -1073741820;
    goto LABEL_27;
  }
  v14 = 32LL * v6[5];
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_26;
  v15 = v14 + 24;
  if ( (int)v14 + 24 < (unsigned int)v14 )
    goto LABEL_26;
  if ( v15 != (_DWORD)v4 )
    goto LABEL_4;
  if ( v6[4] == 1 )
  {
    updated = CmFcManagerUpdateFeatureConfigurations(v15, *((_QWORD *)v6 + 1), 1, (int)v6 + 24, v6[5]);
LABEL_25:
    v9 = updated;
    goto LABEL_27;
  }
LABEL_26:
  v9 = -1073741811;
LABEL_27:
  if ( v6 )
    CmSiFreeMemory((PPRIVILEGE_SET)v6);
  if ( v7 )
    CmSiFreeMemory(v7);
  return v9;
}
