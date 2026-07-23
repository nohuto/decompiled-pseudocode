/*
 * XREFs of NtCreateEvent @ 0x14089FF70
 * Callers:
 *     PfSnPopulateReadList @ 0x1408C1D90 (PfSnPopulateReadList.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1408ECD5C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x1409C7D14 (PfSnPrefetchMetadata.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140AA6D34 (SepAdtOpenEtwReadyEvent.c)
 *     FsRtlInitializeSmssEvent @ 0x140C07E2C (FsRtlInitializeSmssEvent.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x140400B10 (SepPrivilegeCheck.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ObpAllocateObject @ 0x14085AAF0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14085C5F0 (ObpCaptureObjectCreateInformation.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14089FC40 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     ObpRegisterObject @ 0x140AB24BC (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  char PreviousMode; // r14
  __int64 v9; // rcx
  POBJECT_TYPE *v10; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  __int64 v13; // rdi
  NTSTATUS Information; // ebx
  int v15; // ecx
  struct _KPRCB *v16; // rdx
  _GENERAL_LOOKASIDE *v17; // rcx
  void *v18; // rcx
  struct _KPRCB *v19; // rdx
  _GENERAL_LOOKASIDE *v20; // rcx
  struct _KEVENT *v21; // rdi
  LUID v23; // rbx
  unsigned int v24; // esi
  PACCESS_TOKEN ClientToken; // rbx
  char v26; // r12
  PACCESS_TOKEN PrimaryToken; // rcx
  struct _KPRCB *v28; // rdx
  void (__stdcall *FreeEx)(PVOID); // rax
  _GENERAL_LOOKASIDE *L; // rbx
  int v31; // r10d
  LUID *v32; // rdx
  __int64 v33; // r9
  __int64 **v34; // rcx
  __int64 v35; // rdi
  LUID *v36; // rcx
  __int64 v37; // r8
  LUID **v38; // rdx
  LUID *v39; // rax
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+60h] [rbp-A8h] BYREF
  PSID Sid2; // [rsp+70h] [rbp-98h]
  PHANDLE v44; // [rsp+78h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-88h] BYREF
  PSE_EXPORTS v46; // [rsp+A0h] [rbp-68h]
  unsigned int v47[2]; // [rsp+A8h] [rbp-60h] BYREF
  LUID v48; // [rsp+B0h] [rbp-58h] BYREF
  int v49; // [rsp+B8h] [rbp-50h]

  v44 = EventHandle;
  v41 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EventHandle < 0x7FFFFFFF0000LL )
      v9 = (__int64)EventHandle;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( (unsigned int)EventType > SynchronizationEvent )
    return -1073741811;
  v10 = ExEventObjectType;
  *(_OWORD *)ListEntry = 0LL;
  v40 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v13 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v13 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v13 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v13 )
    {
      ++L->AllocateMisses;
      v13 = guard_dispatch_icall_no_overrides((unsigned int)L->Type);
    }
  }
  if ( !v13 )
  {
    Information = -1073741670;
    v21 = 0LL;
    goto LABEL_23;
  }
  *(_DWORD *)v13 = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(
                  PreviousMode,
                  PreviousMode,
                  (__int64)ObjectAttributes,
                  ListEntry,
                  v13,
                  0);
  if ( Information >= 0 )
  {
    if ( (*(_DWORD *)v13 & (_DWORD)v10[9]) != 0 )
    {
      Information = -1073741811;
      goto LABEL_12;
    }
    if ( (*(_DWORD *)v13 & 0x10) == 0 )
    {
LABEL_11:
      v15 = *((_DWORD *)v10 + 27);
      *(_DWORD *)(v13 + 20) = *((_DWORD *)v10 + 26);
      *(_DWORD *)(v13 + 24) = v15;
      Information = ObpAllocateObject((_DWORD *)v13, PreviousMode, (__int64)v10, ListEntry, 24, &v40, 0LL);
      if ( Information >= 0 )
      {
        v35 = v40;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(v40);
          ObpPushStackInfo(v35, 1, 1u, 0x746C6644u);
        }
        v21 = (struct _KEVENT *)(v35 + 48);
        goto LABEL_23;
      }
LABEL_12:
      if ( ListEntry[1] )
      {
        if ( WORD1(ListEntry[0]) == 248 )
        {
          v16 = KeGetCurrentPrcb();
          v17 = v16->PPLookasideList[5].P;
          ++v17->TotalFrees;
          if ( LOWORD(v17->ListHead.Alignment) < v17->Depth
            || (++v17->FreeMisses,
                v17 = v16->PPLookasideList[5].L,
                ++v17->TotalFrees,
                LOWORD(v17->ListHead.Alignment) < v17->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v17->ListHead, ListEntry[1]);
          }
          else
          {
            ++v17->FreeMisses;
            if ( (void (__stdcall *)(PVOID))v17->FreeEx == ExFreePool )
              ExFreePool(ListEntry[1]);
            else
              guard_dispatch_icall_no_overrides(ListEntry[1]);
          }
        }
        else
        {
          ExFreePoolWithTag(ListEntry[1], 0);
        }
      }
      v18 = *(void **)(v13 + 32);
      if ( v18 )
      {
        if ( *(_BYTE *)(v13 + 16) <= 1u )
          ExFreePoolWithTag(v18, 0);
        *(_QWORD *)(v13 + 32) = 0LL;
      }
      v19 = KeGetCurrentPrcb();
      v20 = v19->PPLookasideList[4].P;
      ++v20->TotalFrees;
      if ( LOWORD(v20->ListHead.Alignment) >= v20->Depth )
      {
        ++v20->FreeMisses;
        v20 = v19->PPLookasideList[4].L;
        ++v20->TotalFrees;
        if ( LOWORD(v20->ListHead.Alignment) >= v20->Depth )
          goto LABEL_39;
      }
      goto LABEL_21;
    }
    v23 = SeCreatePermanentPrivilege;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v24 = 1;
    v47[0] = 1;
    v47[1] = 1;
    v48 = v23;
    v49 = 0;
    ClientToken = SubjectContext.ClientToken;
    if ( PreviousMode )
    {
      if ( !SubjectContext.ClientToken )
      {
        ClientToken = SubjectContext.PrimaryToken;
LABEL_30:
        v26 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v48, 1u, 1, PreviousMode);
        ClientToken = SubjectContext.ClientToken;
        v24 = v47[0];
        goto LABEL_31;
      }
      if ( SubjectContext.ImpersonationLevel >= SecurityImpersonation )
        goto LABEL_30;
      v26 = 0;
    }
    else
    {
      v26 = 1;
    }
LABEL_31:
    if ( PreviousMode )
    {
      PrimaryToken = SubjectContext.PrimaryToken;
      if ( ClientToken )
        PrimaryToken = ClientToken;
      Sid2 = (PSID)**((_QWORD **)PrimaryToken + 19);
      if ( !RtlEqualSid(SeLocalSystemSid, Sid2) )
      {
        v46 = SeExports;
        if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, Sid2) && !RtlEqualSid(v46->SeLocalServiceSid, Sid2) )
          goto LABEL_44;
        v31 = 0;
        if ( v24 )
        {
          v32 = &v48;
          v33 = v24;
          do
          {
            v34 = SepFilterPrivileges;
            while ( v32->LowPart != *(_DWORD *)*v34 || v32->HighPart != *((_DWORD *)*v34 + 1) )
            {
              if ( !*++v34 )
                goto LABEL_60;
            }
            ++v31;
LABEL_60:
            v32 = (LUID *)((char *)v32 + 12);
            --v33;
          }
          while ( v33 );
          v36 = &v48;
          v37 = v24;
          do
          {
            v38 = &SepServicesFilterPrivileges;
            v39 = SepServicesFilterPrivileges;
            while ( v36->LowPart != v39->LowPart || v36->HighPart != v39->HighPart )
            {
              v39 = *++v38;
              if ( !*v38 )
                goto LABEL_65;
            }
            ++v31;
LABEL_65:
            v36 = (LUID *)((char *)v36 + 12);
            --v37;
          }
          while ( v37 );
          if ( v31 != v24 )
LABEL_44:
            SepAdtPrivilegedServiceAuditAlarm(
              &SubjectContext,
              &SeSubsystemName,
              0LL,
              (__int64)ClientToken,
              (__int64)SubjectContext.PrimaryToken,
              v47,
              v26);
        }
      }
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( !v26 )
    {
      Information = -1073741727;
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v28 = KeGetCurrentPrcb();
  v20 = v28->PPLookasideList[4].P;
  ++v20->TotalFrees;
  if ( LOWORD(v20->ListHead.Alignment) >= v20->Depth )
  {
    ++v20->FreeMisses;
    v20 = v28->PPLookasideList[4].L;
    ++v20->TotalFrees;
    if ( LOWORD(v20->ListHead.Alignment) >= v20->Depth )
    {
LABEL_39:
      FreeEx = (void (__stdcall *)(PVOID))v20->FreeEx;
      ++v20->FreeMisses;
      if ( FreeEx == ExFreePool )
        ExFreePool((PVOID)v13);
      else
        guard_dispatch_icall_no_overrides(v13);
      goto LABEL_22;
    }
  }
LABEL_21:
  RtlpInterlockedPushEntrySList(&v20->ListHead, (PSLIST_ENTRY)v13);
LABEL_22:
  v21 = 0LL;
LABEL_23:
  if ( Information >= 0 )
  {
    KeInitializeEvent(v21, EventType, InitialState);
    Information = ObInsertObjectEx(v21, 0LL, 0, 0LL, (__int64)&v41);
    if ( Information >= 0 )
      *v44 = (HANDLE)v41;
  }
  return Information;
}
