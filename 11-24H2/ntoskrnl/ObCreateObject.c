/*
 * XREFs of ObCreateObject @ 0x140973930
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1402BAAB0 (PopPowerRequestCreateCommon.c)
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     KiAllocatePrcbThread @ 0x1405B52C0 (KiAllocatePrcbThread.c)
 *     ExCreateDpcEvent @ 0x140655CE0 (ExCreateDpcEvent.c)
 *     CmpCreateRegistryRoot @ 0x140C48EC4 (CmpCreateRegistryRoot.c)
 *     MiSectionInitialization @ 0x140C558B4 (MiSectionInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x1403FE430 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpAllocateObject @ 0x1408A3930 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140AB162C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObCreateObject(char a1, _DWORD *a2, __int64 a3, char a4, int a5, int a6, int a7, int a8, _QWORD *a9)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  _SLIST_ENTRY *v15; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Size; // rdx
  __int64 Type; // rcx
  int Information; // ebx
  int v20; // ecx
  int v21; // eax
  struct _KPRCB *v22; // rdx
  _GENERAL_LOOKASIDE *v23; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v25; // rdx
  _GENERAL_LOOKASIDE *v26; // rcx
  LUID v28; // rbx
  unsigned int v29; // esi
  _QWORD **ClientToken; // rbx
  char v31; // al
  char v32; // r15
  _QWORD **PrimaryToken; // rcx
  void *v34; // r12
  __int64 v35; // rdi
  int v36; // r11d
  LUID *v37; // rdx
  __int64 v38; // r9
  __int64 **v39; // rcx
  __int64 *v40; // rax
  LUID *v41; // rcx
  __int64 v42; // r8
  LUID **v43; // rdx
  LUID *v44; // rax
  PSLIST_ENTRY ListEntry[2]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v46; // [rsp+50h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-51h] BYREF
  PSE_EXPORTS v48; // [rsp+78h] [rbp-31h]
  _QWORD *v49; // [rsp+80h] [rbp-29h]
  unsigned int v50[2]; // [rsp+88h] [rbp-21h] BYREF
  LUID v51; // [rsp+90h] [rbp-19h] BYREF
  int v52; // [rsp+98h] [rbp-11h]

  CurrentPrcb = KeGetCurrentPrcb();
  v49 = a9;
  v46 = 0LL;
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
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v15 = (_SLIST_ENTRY *)guard_dispatch_icall_no_overrides(Type, Size)) != 0LL) )
  {
LABEL_4:
    LODWORD(v15->Next) = CurrentPrcb->Number;
  }
  if ( v15 )
  {
    Information = ObpCaptureObjectCreateInformation(a1, a4, a3, ListEntry, (__int64)v15, 0);
    if ( Information < 0 )
    {
      v25 = KeGetCurrentPrcb();
      v26 = v25->PPLookasideList[4].P;
      ++v26->TotalFrees;
      if ( LOWORD(v26->ListHead.Alignment) >= v26->Depth )
      {
        ++v26->FreeMisses;
        v26 = v25->PPLookasideList[4].L;
        ++v26->TotalFrees;
        if ( LOWORD(v26->ListHead.Alignment) >= v26->Depth )
        {
LABEL_36:
          ++v26->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v26->FreeEx == ExFreePool )
            ExFreePool(v15);
          else
            guard_dispatch_icall_no_overrides(v15, v25);
          return (unsigned int)Information;
        }
      }
LABEL_23:
      RtlpInterlockedPushEntrySList(&v26->ListHead, v15);
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
      v20 = a7;
      if ( !a7 )
        v20 = a2[26];
      v21 = a8;
      if ( !a8 )
        v21 = a2[27];
      *((_DWORD *)&v15[1].Next + 2) = v21;
      HIDWORD(v15[1].Next) = v20;
      Information = ObpAllocateObject(v15, a4, (__int64)a2, ListEntry, a6, &v46, 0LL);
      if ( Information >= 0 )
      {
        v35 = v46;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(v46);
          ObpPushStackInfo(v35, 1, 1u, 0x746C6644u);
        }
        *v49 = v35 + 48;
        return (unsigned int)Information;
      }
LABEL_14:
      if ( ListEntry[1] )
      {
        if ( WORD1(ListEntry[0]) == 248 )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->PPLookasideList[5].P;
          ++v23->TotalFrees;
          if ( LOWORD(v23->ListHead.Alignment) < v23->Depth
            || (++v23->FreeMisses,
                v23 = v22->PPLookasideList[5].L,
                ++v23->TotalFrees,
                LOWORD(v23->ListHead.Alignment) < v23->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v23->ListHead, ListEntry[1]);
          }
          else
          {
            ++v23->FreeMisses;
            if ( (void (__stdcall *)(PVOID))v23->FreeEx == ExFreePool )
              ExFreePool(ListEntry[1]);
            else
              guard_dispatch_icall_no_overrides(ListEntry[1], v22);
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
      v25 = KeGetCurrentPrcb();
      v26 = v25->PPLookasideList[4].P;
      ++v26->TotalFrees;
      if ( LOWORD(v26->ListHead.Alignment) >= v26->Depth )
      {
        ++v26->FreeMisses;
        v26 = v25->PPLookasideList[4].L;
        ++v26->TotalFrees;
        if ( LOWORD(v26->ListHead.Alignment) >= v26->Depth )
          goto LABEL_36;
      }
      goto LABEL_23;
    }
    v28 = SeCreatePermanentPrivilege;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v51 = v28;
    v29 = 1;
    v50[0] = 1;
    v50[1] = 1;
    v52 = 0;
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
        v32 = 0;
        goto LABEL_29;
      }
    }
    else
    {
      ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
    }
    v31 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v51, 1u, 1, a1);
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    v32 = v31;
    v29 = v50[0];
LABEL_29:
    PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
    if ( ClientToken )
      PrimaryToken = ClientToken;
    v34 = (void *)*PrimaryToken[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v34) )
    {
      v48 = SeExports;
      if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v34) && !RtlEqualSid(v48->SeLocalServiceSid, v34) )
        goto LABEL_41;
      v36 = 0;
      if ( v29 )
      {
        v37 = &v51;
        v38 = v29;
        do
        {
          v39 = SepFilterPrivileges;
          v40 = *SepFilterPrivileges;
          while ( v37->LowPart != *(_DWORD *)v40 || v37->HighPart != *((_DWORD *)v40 + 1) )
          {
            v40 = v39[1];
            ++v39;
            if ( !v40 )
              goto LABEL_55;
          }
          ++v36;
LABEL_55:
          v37 = (LUID *)((char *)v37 + 12);
          --v38;
        }
        while ( v38 );
        v41 = &v51;
        v42 = v29;
        do
        {
          v43 = &SepServicesFilterPrivileges;
          v44 = SepServicesFilterPrivileges;
          while ( v41->LowPart != v44->LowPart || v41->HighPart != v44->HighPart )
          {
            v44 = v43[1];
            ++v43;
            if ( !v44 )
              goto LABEL_60;
          }
          ++v36;
LABEL_60:
          v41 = (LUID *)((char *)v41 + 12);
          --v42;
        }
        while ( v42 );
        if ( v36 != v29 )
LABEL_41:
          SepAdtPrivilegedServiceAuditAlarm(
            &SubjectContext,
            &SeSubsystemName,
            0LL,
            (__int64)ClientToken,
            (__int64)SubjectContext.PrimaryToken,
            v50,
            v32);
      }
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( !v32 )
    {
      Information = -1073741727;
      goto LABEL_14;
    }
    goto LABEL_9;
  }
  return 3221225626LL;
}
