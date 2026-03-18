/*
 * XREFs of ObCreateObject @ 0x14098A240
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1403313A8 (PopPowerRequestCreateCommon.c)
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     KiAllocatePrcbThread @ 0x1405B7CE0 (KiAllocatePrcbThread.c)
 *     ExCreateDpcEvent @ 0x1406575E0 (ExCreateDpcEvent.c)
 *     CmpCreateRegistryRoot @ 0x140C46D74 (CmpCreateRegistryRoot.c)
 *     MiSectionInitialization @ 0x140C53724 (MiSectionInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140C66284 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x140403670 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpAllocateObject @ 0x14089B290 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14089CCA0 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140AB735C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObCreateObject(char a1, _DWORD *a2, __int64 a3, char a4, int a5, int a6, int a7, int a8, _QWORD *a9)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  struct _SLIST_ENTRY *v15; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 v17; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  int Information; // ebx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  int v25; // eax
  struct _KPRCB *v26; // rdx
  _GENERAL_LOOKASIDE *v27; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v29; // rdx
  _GENERAL_LOOKASIDE *v30; // rcx
  LUID v32; // rbx
  unsigned int v33; // esi
  _QWORD **ClientToken; // rbx
  char v35; // al
  char v36; // r15
  _QWORD **PrimaryToken; // rcx
  void *v38; // r12
  __int64 v39; // rdi
  int v40; // r11d
  LUID *v41; // rdx
  __int64 v42; // r9
  __int64 **v43; // rcx
  __int64 *v44; // rax
  LUID *v45; // rcx
  __int64 v46; // r8
  LUID **v47; // rdx
  LUID *v48; // rax
  PSLIST_ENTRY ListEntry[2]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v50; // [rsp+50h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-51h] BYREF
  PSE_EXPORTS v52; // [rsp+78h] [rbp-31h]
  _QWORD *v53; // [rsp+80h] [rbp-29h]
  unsigned int v54[2]; // [rsp+88h] [rbp-21h] BYREF
  LUID v55; // [rsp+90h] [rbp-19h] BYREF
  int v56; // [rsp+98h] [rbp-11h]

  CurrentPrcb = KeGetCurrentPrcb();
  v53 = a9;
  v50 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  *(_OWORD *)ListEntry = 0LL;
  ++P->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v15 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[4].L;
  ++L->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v15
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v15 = (struct _SLIST_ENTRY *)guard_dispatch_icall_no_overrides(Type, Size, Tag, v17)) != 0LL) )
  {
LABEL_4:
    LODWORD(v15->Next) = CurrentPrcb->Number;
  }
  if ( v15 )
  {
    Information = ObpCaptureObjectCreateInformation(a1, a4, a3, ListEntry, (__int64)v15, 0);
    if ( Information < 0 )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->PPLookasideList[4].P;
      ++v30->TotalFrees;
      if ( LOWORD(v30->ListHead.Alignment) >= v30->Depth )
      {
        ++v30->FreeMisses;
        v30 = v29->PPLookasideList[4].L;
        ++v30->TotalFrees;
        if ( LOWORD(v30->ListHead.Alignment) >= v30->Depth )
        {
LABEL_36:
          ++v30->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v30->FreeEx == ExFreePool )
            ExFreePool(v15);
          else
            guard_dispatch_icall_no_overrides(v15, v29, v22, v23);
          return (unsigned int)Information;
        }
      }
LABEL_23:
      RtlpInterlockedPushEntrySList(&v30->ListHead, v15);
      return (unsigned int)Information;
    }
    if ( ((__int64)v15->Next & a2[18]) != 0 )
    {
      Information = -1073741811;
      goto LABEL_14;
    }
    if ( ((__int64)v15->Next & 0x10) == 0 )
    {
LABEL_9:
      v24 = a7;
      if ( !a7 )
        v24 = a2[26];
      v25 = a8;
      if ( !a8 )
        v25 = a2[27];
      *((_DWORD *)&v15[1].Next + 2) = v25;
      HIDWORD(v15[1].Next) = v24;
      Information = ObpAllocateObject(v15, a4, (__int64)a2, ListEntry, a6, &v50, 0LL);
      if ( Information >= 0 )
      {
        v39 = v50;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(v50);
          ObpPushStackInfo(v39, 1, 1u, 0x746C6644u);
        }
        *v53 = v39 + 48;
        return (unsigned int)Information;
      }
LABEL_14:
      if ( ListEntry[1] )
      {
        if ( WORD1(ListEntry[0]) == 248 )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->PPLookasideList[5].P;
          ++v27->TotalFrees;
          if ( LOWORD(v27->ListHead.Alignment) < v27->Depth
            || (++v27->FreeMisses,
                v27 = v26->PPLookasideList[5].L,
                ++v27->TotalFrees,
                LOWORD(v27->ListHead.Alignment) < v27->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v27->ListHead, ListEntry[1]);
          }
          else
          {
            ++v27->FreeMisses;
            if ( (void (__stdcall *)(PVOID))v27->FreeEx == ExFreePool )
              ExFreePool(ListEntry[1]);
            else
              guard_dispatch_icall_no_overrides(ListEntry[1], v26, v22, v23);
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
      v29 = KeGetCurrentPrcb();
      v30 = v29->PPLookasideList[4].P;
      ++v30->TotalFrees;
      if ( LOWORD(v30->ListHead.Alignment) >= v30->Depth )
      {
        ++v30->FreeMisses;
        v30 = v29->PPLookasideList[4].L;
        ++v30->TotalFrees;
        if ( LOWORD(v30->ListHead.Alignment) >= v30->Depth )
          goto LABEL_36;
      }
      goto LABEL_23;
    }
    v32 = SeCreatePermanentPrivilege;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v55 = v32;
    v33 = 1;
    v54[0] = 1;
    v54[1] = 1;
    v56 = 0;
    if ( !a1 )
    {
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_9;
    }
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    if ( SubjectContext.ClientToken )
    {
      if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
      {
        v36 = 0;
        goto LABEL_29;
      }
    }
    else
    {
      ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
    }
    v35 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v55, 1u, 1, a1);
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    v36 = v35;
    v33 = v54[0];
LABEL_29:
    PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
    if ( ClientToken )
      PrimaryToken = ClientToken;
    v38 = (void *)*PrimaryToken[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v38) )
    {
      v52 = SeExports;
      if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v38) && !RtlEqualSid(v52->SeLocalServiceSid, v38) )
        goto LABEL_41;
      v40 = 0;
      if ( v33 )
      {
        v41 = &v55;
        v42 = v33;
        do
        {
          v43 = SepFilterPrivileges;
          v44 = *SepFilterPrivileges;
          while ( v41->LowPart != *(_DWORD *)v44 || v41->HighPart != *((_DWORD *)v44 + 1) )
          {
            v44 = v43[1];
            ++v43;
            if ( !v44 )
              goto LABEL_55;
          }
          ++v40;
LABEL_55:
          v41 = (LUID *)((char *)v41 + 12);
          --v42;
        }
        while ( v42 );
        v45 = &v55;
        v46 = v33;
        do
        {
          v47 = &SepServicesFilterPrivileges;
          v48 = SepServicesFilterPrivileges;
          while ( v45->LowPart != v48->LowPart || v45->HighPart != v48->HighPart )
          {
            v48 = v47[1];
            ++v47;
            if ( !v48 )
              goto LABEL_60;
          }
          ++v40;
LABEL_60:
          v45 = (LUID *)((char *)v45 + 12);
          --v46;
        }
        while ( v46 );
        if ( v40 != v33 )
LABEL_41:
          SepAdtPrivilegedServiceAuditAlarm(
            &SubjectContext,
            &SeSubsystemName,
            0LL,
            (__int64)ClientToken,
            (__int64)SubjectContext.PrimaryToken,
            v54,
            v36);
      }
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( !v36 )
    {
      Information = -1073741727;
      goto LABEL_14;
    }
    goto LABEL_9;
  }
  return 3221225626LL;
}
