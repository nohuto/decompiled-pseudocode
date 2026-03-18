/*
 * XREFs of NtCreateEvent @ 0x140856FC0
 * Callers:
 *     PfSnPrefetchMetadata @ 0x140954444 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x14096A9C0 (PfSnPopulateReadList.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14096BF6C (PfSnOpenVolumesForPrefetch.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140AAC2F4 (SepAdtOpenEtwReadyEvent.c)
 *     FsRtlInitializeSmssEvent @ 0x140C18ECC (FsRtlInitializeSmssEvent.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x140403670 (SepPrivilegeCheck.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObpAllocateObject @ 0x14089B290 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14089CCA0 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140AB735C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateEvent(unsigned __int64 a1, __int64 a2, int a3, EVENT_TYPE a4, BOOLEAN a5)
{
  unsigned __int8 PreviousMode; // r14
  __int64 v9; // rcx
  POBJECT_TYPE *v10; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  struct _SLIST_ENTRY *v13; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 v15; // r9
  int Information; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  struct _KPRCB *v20; // rdx
  _GENERAL_LOOKASIDE *v21; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  struct _KEVENT *v25; // rdi
  LUID v27; // rbx
  unsigned int v28; // esi
  PACCESS_TOKEN ClientToken; // rbx
  char v30; // r13
  PACCESS_TOKEN PrimaryToken; // rcx
  void (__stdcall *FreeEx)(PVOID); // rax
  __int64 v33; // rdi
  int v34; // r10d
  LUID *v35; // rdx
  __int64 v36; // r9
  __int64 **v37; // rcx
  LUID *v38; // rcx
  __int64 v39; // r8
  LUID **v40; // rdx
  LUID *v41; // rax
  __int64 v42; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-B0h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+60h] [rbp-A8h] BYREF
  PSID Sid2; // [rsp+70h] [rbp-98h]
  _QWORD *v46; // [rsp+78h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-88h] BYREF
  PSE_EXPORTS v48; // [rsp+A0h] [rbp-68h]
  unsigned int v49[2]; // [rsp+A8h] [rbp-60h] BYREF
  LUID v50; // [rsp+B0h] [rbp-58h] BYREF
  int v51; // [rsp+B8h] [rbp-50h]

  v46 = (_QWORD *)a1;
  v43 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v9 = a1;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( (unsigned int)a4 > SynchronizationEvent )
    return 3221225485LL;
  v10 = ExEventObjectType;
  *(_OWORD *)ListEntry = 0LL;
  v42 = 0LL;
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
      v13 = (struct _SLIST_ENTRY *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size, L->Tag, v15);
    }
  }
  if ( !v13 )
  {
    Information = -1073741670;
    v25 = 0LL;
    goto LABEL_25;
  }
  LODWORD(v13->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(
                  PreviousMode,
                  PreviousMode,
                  a3,
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
      v19 = *((_DWORD *)v10 + 27);
      HIDWORD(v13[1].Next) = *((_DWORD *)v10 + 26);
      *((_DWORD *)&v13[1].Next + 2) = v19;
      Information = ObpAllocateObject(
                      (_DWORD)v13,
                      PreviousMode,
                      (_DWORD)v10,
                      (unsigned int)ListEntry,
                      24,
                      (__int64)&v42,
                      0LL);
      if ( Information >= 0 )
      {
        v33 = v42;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(v42);
          ObpPushStackInfo(v33, 1, 1u, 0x746C6644u);
        }
        v25 = (struct _KEVENT *)(v33 + 48);
        goto LABEL_25;
      }
LABEL_14:
      if ( ListEntry[1] )
      {
        if ( WORD1(ListEntry[0]) == 248 )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->PPLookasideList[5].P;
          ++v21->TotalFrees;
          if ( LOWORD(v21->ListHead.Alignment) < v21->Depth
            || (++v21->FreeMisses,
                v21 = v20->PPLookasideList[5].L,
                ++v21->TotalFrees,
                LOWORD(v21->ListHead.Alignment) < v21->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v21->ListHead, ListEntry[1]);
          }
          else
          {
            ++v21->FreeMisses;
            if ( (void (__stdcall *)(PVOID))v21->FreeEx == ExFreePool )
              ExFreePool(ListEntry[1]);
            else
              guard_dispatch_icall_no_overrides(ListEntry[1], v20, v17, v18);
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
      v23 = KeGetCurrentPrcb();
      v24 = v23->PPLookasideList[4].P;
      ++v24->TotalFrees;
      if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
      {
        ++v24->FreeMisses;
        v24 = v23->PPLookasideList[4].L;
        ++v24->TotalFrees;
        if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
          goto LABEL_41;
      }
      goto LABEL_23;
    }
    v27 = SeCreatePermanentPrivilege;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v28 = 1;
    v49[0] = 1;
    v49[1] = 1;
    v50 = v27;
    v51 = 0;
    ClientToken = SubjectContext.ClientToken;
    if ( PreviousMode )
    {
      if ( !SubjectContext.ClientToken )
      {
        ClientToken = SubjectContext.PrimaryToken;
LABEL_32:
        v30 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v50, 1u, 1, PreviousMode);
        ClientToken = SubjectContext.ClientToken;
        v28 = v49[0];
        goto LABEL_33;
      }
      if ( SubjectContext.ImpersonationLevel >= SecurityImpersonation )
        goto LABEL_32;
      v30 = 0;
    }
    else
    {
      v30 = 1;
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
        v48 = SeExports;
        if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, Sid2) && !RtlEqualSid(v48->SeLocalServiceSid, Sid2) )
          goto LABEL_46;
        v34 = 0;
        if ( v28 )
        {
          v35 = &v50;
          v36 = v28;
          do
          {
            v37 = SepFilterPrivileges;
            while ( v35->LowPart != *(_DWORD *)*v37 || v35->HighPart != *((_DWORD *)*v37 + 1) )
            {
              if ( !*++v37 )
                goto LABEL_61;
            }
            ++v34;
LABEL_61:
            v35 = (LUID *)((char *)v35 + 12);
            --v36;
          }
          while ( v36 );
          v38 = &v50;
          v39 = v28;
          do
          {
            v40 = &SepServicesFilterPrivileges;
            v41 = SepServicesFilterPrivileges;
            while ( v38->LowPart != v41->LowPart || v38->HighPart != v41->HighPart )
            {
              v41 = *++v40;
              if ( !*v40 )
                goto LABEL_66;
            }
            ++v34;
LABEL_66:
            v38 = (LUID *)((char *)v38 + 12);
            --v39;
          }
          while ( v39 );
          if ( v34 != v28 )
LABEL_46:
            SepAdtPrivilegedServiceAuditAlarm(
              &SubjectContext,
              &SeSubsystemName,
              0LL,
              (__int64)ClientToken,
              (__int64)SubjectContext.PrimaryToken,
              v49,
              v30);
        }
      }
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( !v30 )
    {
      Information = -1073741727;
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v23 = KeGetCurrentPrcb();
  v24 = v23->PPLookasideList[4].P;
  ++v24->TotalFrees;
  if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
  {
    ++v24->FreeMisses;
    v24 = v23->PPLookasideList[4].L;
    ++v24->TotalFrees;
    if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
    {
LABEL_41:
      FreeEx = (void (__stdcall *)(PVOID))v24->FreeEx;
      ++v24->FreeMisses;
      if ( FreeEx == ExFreePool )
        ExFreePool(v13);
      else
        guard_dispatch_icall_no_overrides(v13, v23, v17, v18);
      goto LABEL_24;
    }
  }
LABEL_23:
  RtlpInterlockedPushEntrySList(&v24->ListHead, v13);
LABEL_24:
  v25 = 0LL;
LABEL_25:
  if ( Information >= 0 )
  {
    KeInitializeEvent(v25, a4, a5);
    Information = ObInsertObjectEx(v25, 0, 0LL, (__int64)&v43);
    if ( Information >= 0 )
      *v46 = v43;
  }
  return (unsigned int)Information;
}
