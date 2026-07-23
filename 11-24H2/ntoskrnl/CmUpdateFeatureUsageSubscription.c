/*
 * XREFs of CmUpdateFeatureUsageSubscription @ 0x1407D6388
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     CmpAllocatePoolWithQuota @ 0x14044E3DC (CmpAllocatePoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A2AD64 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 */

__int64 __fastcall CmUpdateFeatureUsageSubscription(void *Src, size_t Size, KPROCESSOR_MODE AccessMode)
{
  ULONG_PTR v4; // rsi
  struct _PRIVILEGE_SET *v6; // rdi
  BOOLEAN v7; // bl
  unsigned int updated; // ebx
  struct _PRIVILEGE_SET *PoolWithQuota; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  ACCESS_MASK GrantedAccess[3]; // [rsp+54h] [rbp-44h] BYREF
  struct _PRIVILEGE_SET *v14; // [rsp+60h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+68h] [rbp-30h] BYREF
  NTSTATUS AccessStatus; // [rsp+B8h] [rbp+20h] BYREF

  v4 = (unsigned int)Size;
  AccessStatus = 0;
  GrantedAccess[0] = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v6 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v7 = SeAccessCheck(
         CmFcFeatureConfigSecurityDescriptor,
         &SubjectSecurityContext,
         0,
         2u,
         0,
         0LL,
         &CmFcFeatureConfigMapping,
         AccessMode,
         GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  if ( !v7 )
  {
    updated = AccessStatus;
    goto LABEL_12;
  }
  if ( (unsigned int)v4 < 4 )
    goto LABEL_4;
  PoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocatePoolWithQuota(256LL, v4, 0x63466D43u);
  v6 = PoolWithQuota;
  v14 = PoolWithQuota;
  if ( PoolWithQuota )
  {
    memmove(PoolWithQuota, Src, v4);
    v10 = 20LL * v6->PrivilegeCount;
    if ( v10 > 0xFFFFFFFF || (v11 = (unsigned int)(v10 + 4), (unsigned int)v11 < (unsigned int)v10) )
    {
      updated = -1073741811;
    }
    else
    {
      if ( (_DWORD)v11 != (_DWORD)v4 )
      {
LABEL_4:
        updated = -1073741820;
        goto LABEL_12;
      }
      updated = CmFcManagerUpdateFeatureUsageSubscriptions(v11, &v6->Control);
    }
  }
  else
  {
    updated = -1073741670;
  }
LABEL_12:
  if ( v6 )
    CmSiFreeMemory(v6);
  return updated;
}
