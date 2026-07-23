/*
 * XREFs of ObCreateObject @ 0x140858920
 * Callers:
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     PopPowerRequestCreateCommon @ 0x140425C44 (PopPowerRequestCreateCommon.c)
 *     KiAllocatePrcbThread @ 0x1405B3DF0 (KiAllocatePrcbThread.c)
 *     ExCreateDpcEvent @ 0x14064B680 (ExCreateDpcEvent.c)
 *     CmpCreateRegistryRoot @ 0x140C35AB8 (CmpCreateRegistryRoot.c)
 *     MiSectionInitialization @ 0x140C424F4 (MiSectionInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140C54388 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x140400B10 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ObpAllocateObject @ 0x14085AAF0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14085C5F0 (ObpCaptureObjectCreateInformation.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14089FC40 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpRegisterObject @ 0x140AB24BC (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObCreateObject(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _GENERAL_LOOKASIDE *P; // r14
  _SLIST_ENTRY *v15; // rdi
  int Information; // ebx
  int v17; // ecx
  int v18; // eax
  struct _KPRCB *v19; // rdx
  _GENERAL_LOOKASIDE *v20; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v22; // rdx
  _GENERAL_LOOKASIDE *v23; // rcx
  LUID v25; // rbx
  unsigned int v26; // r14d
  _QWORD **ClientToken; // rbx
  char v28; // al
  char v29; // r15
  _QWORD **PrimaryToken; // rcx
  void *v31; // r12
  struct _KPRCB *v32; // rdx
  _GENERAL_LOOKASIDE *L; // r14
  __int64 Type; // rcx
  int v35; // r11d
  LUID *v36; // rdx
  __int64 v37; // r9
  __int64 **v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // rdi
  LUID *v41; // rcx
  __int64 v42; // r8
  LUID **v43; // rdx
  LUID *v44; // rax
  PSLIST_ENTRY ListEntry[2]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v46; // [rsp+50h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-51h] BYREF
  PSE_EXPORTS v48; // [rsp+78h] [rbp-31h]
  _QWORD *v49; // [rsp+80h] [rbp-29h]
  _DWORD v50[2]; // [rsp+88h] [rbp-21h] BYREF
  LUID v51; // [rsp+90h] [rbp-19h] BYREF
  int v52; // [rsp+98h] [rbp-11h]

  CurrentPrcb = KeGetCurrentPrcb();
  v49 = a9;
  v46 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  *(_OWORD *)ListEntry = 0LL;
  ++P->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v15
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[4].L,
        ++L->TotalAllocates,
        (v15 = RtlpInterlockedPopEntrySList(&L->ListHead)) != 0LL)
    || (Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v15 = (_SLIST_ENTRY *)guard_dispatch_icall_no_overrides(Type)) != 0LL) )
  {
    LODWORD(v15->Next) = CurrentPrcb->Number;
  }
  if ( v15 )
  {
    Information = ObpCaptureObjectCreateInformation(a1, a4, a3, (unsigned int)ListEntry, (__int64)v15, 0);
    if ( Information < 0 )
    {
      v32 = KeGetCurrentPrcb();
      v23 = v32->PPLookasideList[4].P;
      ++v23->TotalFrees;
      if ( LOWORD(v23->ListHead.Alignment) >= v23->Depth )
      {
        ++v23->FreeMisses;
        v23 = v32->PPLookasideList[4].L;
        ++v23->TotalFrees;
        if ( LOWORD(v23->ListHead.Alignment) >= v23->Depth )
        {
LABEL_34:
          ++v23->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v23->FreeEx == ExFreePool )
            ExFreePool(v15);
          else
            guard_dispatch_icall_no_overrides(v15);
          return (unsigned int)Information;
        }
      }
LABEL_21:
      RtlpInterlockedPushEntrySList(&v23->ListHead, v15);
      return (unsigned int)Information;
    }
    if ( ((__int64)v15->Next & a2[18]) != 0 )
    {
      Information = -1073741811;
      goto LABEL_12;
    }
    if ( ((__int64)v15->Next & 0x10) == 0 )
    {
LABEL_7:
      v17 = a7;
      if ( !a7 )
        v17 = a2[26];
      v18 = a8;
      if ( !a8 )
        v18 = a2[27];
      *((_DWORD *)&v15[1].Next + 2) = v18;
      HIDWORD(v15[1].Next) = v17;
      Information = ObpAllocateObject((_DWORD)v15, a4, (_DWORD)a2, (unsigned int)ListEntry, a6, (__int64)&v46, 0LL);
      if ( Information >= 0 )
      {
        v40 = v46;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(v46);
          ObpPushStackInfo(v40, 1, 1u, 0x746C6644u);
        }
        *v49 = v40 + 48;
        return (unsigned int)Information;
      }
LABEL_12:
      if ( ListEntry[1] )
      {
        if ( WORD1(ListEntry[0]) == 248 )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->PPLookasideList[5].P;
          ++v20->TotalFrees;
          if ( LOWORD(v20->ListHead.Alignment) < v20->Depth
            || (++v20->FreeMisses,
                v20 = v19->PPLookasideList[5].L,
                ++v20->TotalFrees,
                LOWORD(v20->ListHead.Alignment) < v20->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v20->ListHead, ListEntry[1]);
          }
          else
          {
            ++v20->FreeMisses;
            if ( (void (__stdcall *)(PVOID))v20->FreeEx == ExFreePool )
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
      Next = v15[2].Next;
      if ( Next )
      {
        if ( LOBYTE(v15[1].Next) <= 1u )
          ExFreePoolWithTag(Next, 0);
        v15[2].Next = 0LL;
      }
      v22 = KeGetCurrentPrcb();
      v23 = v22->PPLookasideList[4].P;
      ++v23->TotalFrees;
      if ( LOWORD(v23->ListHead.Alignment) >= v23->Depth )
      {
        ++v23->FreeMisses;
        v23 = v22->PPLookasideList[4].L;
        ++v23->TotalFrees;
        if ( LOWORD(v23->ListHead.Alignment) >= v23->Depth )
          goto LABEL_34;
      }
      goto LABEL_21;
    }
    v25 = SeCreatePermanentPrivilege;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v51 = v25;
    v26 = 1;
    v50[0] = 1;
    v50[1] = 1;
    v52 = 0;
    if ( !a1 )
    {
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_7;
    }
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    if ( SubjectContext.ClientToken )
    {
      if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
      {
        v29 = 0;
        goto LABEL_27;
      }
    }
    else
    {
      ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
    }
    v28 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v51, 1u, 1, a1);
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    v29 = v28;
    v26 = v50[0];
LABEL_27:
    PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
    if ( ClientToken )
      PrimaryToken = ClientToken;
    v31 = (void *)*PrimaryToken[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v31) )
    {
      v48 = SeExports;
      if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v31) && !RtlEqualSid(v48->SeLocalServiceSid, v31) )
        goto LABEL_39;
      v35 = 0;
      if ( v26 )
      {
        v36 = &v51;
        v37 = v26;
        do
        {
          v38 = SepFilterPrivileges;
          v39 = *SepFilterPrivileges;
          while ( v36->LowPart != *(_DWORD *)v39 || v36->HighPart != *((_DWORD *)v39 + 1) )
          {
            v39 = v38[1];
            ++v38;
            if ( !v39 )
              goto LABEL_56;
          }
          ++v35;
LABEL_56:
          v36 = (LUID *)((char *)v36 + 12);
          --v37;
        }
        while ( v37 );
        v41 = &v51;
        v42 = v26;
        do
        {
          v43 = &SepServicesFilterPrivileges;
          v44 = SepServicesFilterPrivileges;
          while ( v41->LowPart != v44->LowPart || v41->HighPart != v44->HighPart )
          {
            v44 = v43[1];
            ++v43;
            if ( !v44 )
              goto LABEL_61;
          }
          ++v35;
LABEL_61:
          v41 = (LUID *)((char *)v41 + 12);
          --v42;
        }
        while ( v42 );
        if ( v35 != v26 )
LABEL_39:
          SepAdtPrivilegedServiceAuditAlarm(
            (unsigned int)&SubjectContext,
            (unsigned int)&SeSubsystemName,
            0,
            (_DWORD)ClientToken,
            (__int64)SubjectContext.PrimaryToken,
            (__int64)v50,
            v29);
      }
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( !v29 )
    {
      Information = -1073741727;
      goto LABEL_12;
    }
    goto LABEL_7;
  }
  return 3221225626LL;
}
