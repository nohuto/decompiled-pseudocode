/*
 * XREFs of NtCreateEvent @ 0x1408532A0
 * Callers:
 *     PfSnPrefetchMetadata @ 0x140937DF4 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x140953450 (PfSnPopulateReadList.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1409549CC (PfSnOpenVolumesForPrefetch.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140AA732C (SepAdtOpenEtwReadyEvent.c)
 *     FsRtlInitializeSmssEvent @ 0x140C1AEC0 (FsRtlInitializeSmssEvent.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x1403FE430 (SepPrivilegeCheck.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObpAllocateObject @ 0x1408A3930 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140AB162C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  int v6; // r13d
  unsigned __int8 PreviousMode; // r14
  __int64 v9; // rcx
  POBJECT_TYPE *v10; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  _SLIST_ENTRY *v13; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  NTSTATUS Information; // ebx
  int v16; // ecx
  struct _KPRCB *v17; // rdx
  _GENERAL_LOOKASIDE *v18; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v20; // rdx
  _GENERAL_LOOKASIDE *v21; // rcx
  struct _KEVENT *v22; // rdi
  LUID v24; // rbx
  unsigned int v25; // esi
  PACCESS_TOKEN ClientToken; // rbx
  char v27; // r13
  PACCESS_TOKEN PrimaryToken; // rcx
  void (__stdcall *FreeEx)(PVOID); // rax
  __int64 v30; // rdi
  int v31; // r10d
  LUID *v32; // rdx
  __int64 v33; // r9
  __int64 **v34; // rcx
  LUID *v35; // rcx
  __int64 v36; // r8
  LUID **v37; // rdx
  LUID *v38; // rax
  __int64 v39; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+60h] [rbp-A8h] BYREF
  PSID Sid2; // [rsp+70h] [rbp-98h]
  PHANDLE v43; // [rsp+78h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-88h] BYREF
  PSE_EXPORTS v45; // [rsp+A0h] [rbp-68h]
  unsigned int v46[2]; // [rsp+A8h] [rbp-60h] BYREF
  LUID v47; // [rsp+B0h] [rbp-58h] BYREF
  int v48; // [rsp+B8h] [rbp-50h]

  v6 = (int)ObjectAttributes;
  v43 = EventHandle;
  v40 = 0LL;
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
  v39 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v13 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v13 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v13 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v13 )
    {
      ++L->AllocateMisses;
      v13 = (_SLIST_ENTRY *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
    }
  }
  if ( !v13 )
  {
    Information = -1073741670;
    v22 = 0LL;
    goto LABEL_25;
  }
  LODWORD(v13->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(
                  PreviousMode,
                  PreviousMode,
                  v6,
                  (unsigned int)ListEntry,
                  (__int64)v13,
                  0);
  if ( Information >= 0 )
  {
    if ( ((__int64)v13->Next & (_DWORD)v10[9]) != 0 )
    {
      Information = -1073741811;
      goto LABEL_14;
    }
    if ( ((__int64)v13->Next & 0x10) == 0 )
    {
LABEL_13:
      v16 = *((_DWORD *)v10 + 27);
      HIDWORD(v13[1].Next) = *((_DWORD *)v10 + 26);
      *((_DWORD *)&v13[1].Next + 2) = v16;
      Information = ObpAllocateObject(
                      (_DWORD)v13,
                      PreviousMode,
                      (_DWORD)v10,
                      (unsigned int)ListEntry,
                      24,
                      (__int64)&v39,
                      0LL);
      if ( Information >= 0 )
      {
        v30 = v39;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(v39);
          ObpPushStackInfo(v30, 1, 1u, 0x746C6644u);
        }
        v22 = (struct _KEVENT *)(v30 + 48);
        goto LABEL_25;
      }
LABEL_14:
      if ( ListEntry[1] )
      {
        if ( WORD1(ListEntry[0]) == 248 )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->PPLookasideList[5].P;
          ++v18->TotalFrees;
          if ( LOWORD(v18->ListHead.Alignment) < v18->Depth
            || (++v18->FreeMisses,
                v18 = v17->PPLookasideList[5].L,
                ++v18->TotalFrees,
                LOWORD(v18->ListHead.Alignment) < v18->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v18->ListHead, ListEntry[1]);
          }
          else
          {
            ++v18->FreeMisses;
            if ( (void (__stdcall *)(PVOID))v18->FreeEx == ExFreePool )
              ExFreePool(ListEntry[1]);
            else
              guard_dispatch_icall_no_overrides(ListEntry[1], v17);
          }
        }
        else
        {
          ExFreePoolWithTag(ListEntry[1], 0);
        }
      }
      Next = v13[2].Next;
      if ( Next )
      {
        if ( LOBYTE(v13[1].Next) <= 1u )
          ExFreePoolWithTag(Next, 0);
        v13[2].Next = 0LL;
      }
      v20 = KeGetCurrentPrcb();
      v21 = v20->PPLookasideList[4].P;
      ++v21->TotalFrees;
      if ( LOWORD(v21->ListHead.Alignment) >= v21->Depth )
      {
        ++v21->FreeMisses;
        v21 = v20->PPLookasideList[4].L;
        ++v21->TotalFrees;
        if ( LOWORD(v21->ListHead.Alignment) >= v21->Depth )
          goto LABEL_41;
      }
      goto LABEL_23;
    }
    v24 = SeCreatePermanentPrivilege;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v25 = 1;
    v46[0] = 1;
    v46[1] = 1;
    v47 = v24;
    v48 = 0;
    ClientToken = SubjectContext.ClientToken;
    if ( PreviousMode )
    {
      if ( !SubjectContext.ClientToken )
      {
        ClientToken = SubjectContext.PrimaryToken;
LABEL_32:
        v27 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v47, 1u, 1, PreviousMode);
        ClientToken = SubjectContext.ClientToken;
        v25 = v46[0];
        goto LABEL_33;
      }
      if ( SubjectContext.ImpersonationLevel >= SecurityImpersonation )
        goto LABEL_32;
      v27 = 0;
    }
    else
    {
      v27 = 1;
    }
LABEL_33:
    if ( PreviousMode )
    {
      PrimaryToken = SubjectContext.PrimaryToken;
      if ( ClientToken )
        PrimaryToken = ClientToken;
      Sid2 = (PSID)**((_QWORD **)PrimaryToken + 19);
      if ( !RtlEqualSid(SeLocalSystemSid, Sid2) )
      {
        v45 = SeExports;
        if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, Sid2) && !RtlEqualSid(v45->SeLocalServiceSid, Sid2) )
          goto LABEL_46;
        v31 = 0;
        if ( v25 )
        {
          v32 = &v47;
          v33 = v25;
          do
          {
            v34 = SepFilterPrivileges;
            while ( v32->LowPart != *(_DWORD *)*v34 || v32->HighPart != *((_DWORD *)*v34 + 1) )
            {
              if ( !*++v34 )
                goto LABEL_61;
            }
            ++v31;
LABEL_61:
            v32 = (LUID *)((char *)v32 + 12);
            --v33;
          }
          while ( v33 );
          v35 = &v47;
          v36 = v25;
          do
          {
            v37 = &SepServicesFilterPrivileges;
            v38 = SepServicesFilterPrivileges;
            while ( v35->LowPart != v38->LowPart || v35->HighPart != v38->HighPart )
            {
              v38 = *++v37;
              if ( !*v37 )
                goto LABEL_66;
            }
            ++v31;
LABEL_66:
            v35 = (LUID *)((char *)v35 + 12);
            --v36;
          }
          while ( v36 );
          if ( v31 != v25 )
LABEL_46:
            SepAdtPrivilegedServiceAuditAlarm(
              &SubjectContext,
              &SeSubsystemName,
              0LL,
              (__int64)ClientToken,
              (__int64)SubjectContext.PrimaryToken,
              v46,
              v27);
        }
      }
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( !v27 )
    {
      Information = -1073741727;
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v20 = KeGetCurrentPrcb();
  v21 = v20->PPLookasideList[4].P;
  ++v21->TotalFrees;
  if ( LOWORD(v21->ListHead.Alignment) >= v21->Depth )
  {
    ++v21->FreeMisses;
    v21 = v20->PPLookasideList[4].L;
    ++v21->TotalFrees;
    if ( LOWORD(v21->ListHead.Alignment) >= v21->Depth )
    {
LABEL_41:
      FreeEx = (void (__stdcall *)(PVOID))v21->FreeEx;
      ++v21->FreeMisses;
      if ( FreeEx == ExFreePool )
        ExFreePool(v13);
      else
        guard_dispatch_icall_no_overrides(v13, v20);
      goto LABEL_24;
    }
  }
LABEL_23:
  RtlpInterlockedPushEntrySList(&v21->ListHead, v13);
LABEL_24:
  v22 = 0LL;
LABEL_25:
  if ( Information >= 0 )
  {
    KeInitializeEvent(v22, EventType, InitialState);
    Information = ObInsertObjectEx(v22, 0, 0LL, (__int64)&v40);
    if ( Information >= 0 )
      *v43 = (HANDLE)v40;
  }
  return Information;
}
