/*
 * XREFs of SepDuplicateToken @ 0x1408A2910
 * Callers:
 *     SepGetAnonymousToken @ 0x1402905D8 (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x1404A1A1C (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x1405FC0DC (SepOneWayLinkLogonSessions.c)
 *     SeCopyClientToken @ 0x14089E9B0 (SeCopyClientToken.c)
 *     NtOpenThreadTokenEx @ 0x1408A17B0 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x1408A3EE0 (NtDuplicateToken.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x140A29C90 (NtImpersonateAnonymousToken.c)
 *     SeGetLinkedToken @ 0x140A2AFB0 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x140A53680 (SeGetLogonSessionToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140AA9BC4 (SeDuplicateTokenAndAddOriginClaim.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140290A60 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlWalkFrameChain @ 0x140348060 (RtlWalkFrameChain.c)
 *     RtlSidHashInitialize @ 0x14036C330 (RtlSidHashInitialize.c)
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     PsGetSessionObjectById @ 0x1403D6D20 (PsGetSessionObjectById.c)
 *     SepReferenceLuidToIndexEntry @ 0x140452C40 (SepReferenceLuidToIndexEntry.c)
 *     SepFreeTokenCapabilities @ 0x140471AA8 (SepFreeTokenCapabilities.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406EF480 (RtlIsParentOfChildAppContainer.c)
 *     SepModifyTokenPolicyCounter @ 0x140780880 (SepModifyTokenPolicyCounter.c)
 *     SepAddTokenLogonSession @ 0x1407841A0 (SepAddTokenLogonSession.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1407859A8 (SepInsertOrReferenceSharedSidEntries.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ObpAllocateObject @ 0x14085AAF0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14085C5F0 (ObpCaptureObjectCreateInformation.c)
 *     SepLengthSidAndAttributesArray @ 0x1408A3830 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1408A38E0 (SeCaptureSidAndAttributesArray.c)
 *     SepDuplicateSid @ 0x1408A3D8C (SepDuplicateSid.c)
 *     SepMakeTokenEffectiveOnly @ 0x1408A3E20 (SepMakeTokenEffectiveOnly.c)
 *     SepDuplicateClaimAttributes @ 0x140999D24 (SepDuplicateClaimAttributes.c)
 *     SepReferenceLogonSession @ 0x140A2B0BC (SepReferenceLogonSession.c)
 *     ObpRegisterObject @ 0x140AB24BC (ObpRegisterObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int128 *a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7,
        __int64 *a8)
{
  PVOID v9; // rbx
  _DWORD *Pool2; // rax
  _DWORD *v13; // rsi
  _QWORD *v14; // rax
  struct _ERESOURCE *v15; // r15
  struct _KPRCB *CurrentPrcb; // rax
  _GENERAL_LOOKASIDE *v17; // r13
  __int64 v18; // rbx
  struct _KPRCB *v19; // r13
  int Information; // r13d
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  struct _KPRCB *v24; // rdx
  _GENERAL_LOOKASIDE *v25; // rcx
  void *v26; // rcx
  struct _KPRCB *v27; // rdx
  _GENERAL_LOOKASIDE *v28; // rcx
  PVOID *v29; // rcx
  __int128 v30; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v32; // eax
  int v33; // r15d
  void *v34; // rcx
  __int64 v35; // xmm1_8
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // rcx
  _DWORD *v39; // rcx
  __int64 v40; // r14
  __int64 v41; // rcx
  unsigned int v42; // esi
  int v43; // r15d
  int v45; // ecx
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // ecx
  unsigned int v50; // r14d
  char *v51; // rax
  char *v52; // rsi
  __int64 v53; // rax
  char *v54; // rsi
  unsigned int v55; // esi
  __int64 v56; // r12
  void *v57; // rdx
  int v58; // eax
  int v59; // r15d
  unsigned int **v60; // rax
  _SID_AND_ATTRIBUTES *v61; // r14
  int v62; // eax
  unsigned int v63; // r13d
  struct _KPRCB *v64; // rdx
  void *v65; // rcx
  _GENERAL_LOOKASIDE *L; // rcx
  struct _KPRCB *v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rbx
  int v70; // ecx
  _QWORD *v71; // rax
  unsigned __int8 *v72; // rsi
  void *v73; // rcx
  unsigned int v74; // r14d
  void *v75; // r15
  unsigned int v76; // eax
  void *v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  unsigned __int8 *v82; // rsi
  void *v83; // r14
  void *v84; // rcx
  _SID_AND_ATTRIBUTES *v85; // rcx
  unsigned int v86; // r15d
  unsigned int v87; // eax
  int v88; // esi
  __int64 v89; // rax
  ULONG v90; // eax
  void *v91; // rcx
  unsigned int v92; // r8d
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  _KPROCESS *Process; // rcx
  int v98; // edx
  unsigned int v99; // [rsp+50h] [rbp-49h] BYREF
  PVOID P; // [rsp+58h] [rbp-41h]
  struct _KPRCB *v101; // [rsp+60h] [rbp-39h]
  POBJECT_TYPE *v102; // [rsp+68h] [rbp-31h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v104; // [rsp+80h] [rbp-19h] BYREF
  __int64 v105; // [rsp+88h] [rbp-11h]
  _QWORD v106[2]; // [rsp+90h] [rbp-9h] BYREF
  int v108; // [rsp+F8h] [rbp+5Fh]
  unsigned int v109; // [rsp+F8h] [rbp+5Fh]

  v9 = 0LL;
  P = 0LL;
  if ( a5 > 3 && a4 == 2 )
    return 3221225637LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v13 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 0;
  v14 = Pool2 + 2;
  v14[1] = v14;
  *v14 = v14;
  v13[6] = 0;
  *((_QWORD *)v13 + 5) = v13 + 8;
  *((_QWORD *)v13 + 4) = v13 + 8;
  if ( SeTokenLeakTracking )
  {
    P = (PVOID)ExAllocatePool2(0x100uLL);
    v9 = P;
    if ( !P )
    {
      v65 = v13;
      goto LABEL_185;
    }
  }
  v15 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL);
  if ( !v15 )
  {
    ExFreePoolWithTag(v13, 0);
    if ( SeTokenLeakTracking )
    {
      v65 = v9;
LABEL_185:
      ExFreePoolWithTag(v65, 0);
      return 3221225626LL;
    }
    return 3221225626LL;
  }
  v99 = *((_DWORD *)a1 + 33) + 1168;
  if ( v99 >= 0x490 )
  {
    v108 = *((_DWORD *)a1 + 34);
    CurrentPrcb = KeGetCurrentPrcb();
    v102 = SeTokenObjectType;
    v104 = 0LL;
    *(_OWORD *)ListEntry = 0LL;
    v17 = CurrentPrcb->PPLookasideList[4].P;
    v101 = CurrentPrcb;
    ++v17->TotalAllocates;
    v18 = (__int64)RtlpInterlockedPopEntrySList(&v17->ListHead);
    if ( v18 )
    {
      v19 = v101;
    }
    else
    {
      ++v17->AllocateMisses;
      v19 = v101;
      L = v101->PPLookasideList[4].L;
      v101 = (struct _KPRCB *)L;
      ++L->TotalAllocates;
      v18 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v18 )
      {
        v67 = v101;
        ++LODWORD(v101->IdleThread);
        v18 = guard_dispatch_icall_no_overrides(v67->Number);
        if ( !v18 )
        {
LABEL_10:
          if ( !v18 )
          {
            Information = -1073741670;
            goto LABEL_79;
          }
          Information = ObpCaptureObjectCreateInformation(a6, a6, a2, ListEntry, v18, 0);
          if ( Information < 0 )
          {
            v64 = KeGetCurrentPrcb();
            v28 = v64->PPLookasideList[4].P;
            ++v28->TotalFrees;
            if ( LOWORD(v28->ListHead.Alignment) >= v28->Depth )
            {
              ++v28->FreeMisses;
              v28 = v64->PPLookasideList[4].L;
              ++v28->TotalFrees;
              if ( LOWORD(v28->ListHead.Alignment) >= v28->Depth )
              {
                ++v28->FreeMisses;
                if ( (void (__stdcall *)(PVOID))v28->FreeEx == ExFreePool )
                {
LABEL_139:
                  ExFreePool((PVOID)v18);
                  goto LABEL_79;
                }
LABEL_151:
                guard_dispatch_icall_no_overrides(v18);
                goto LABEL_79;
              }
            }
LABEL_78:
            RtlpInterlockedPushEntrySList(&v28->ListHead, (PSLIST_ENTRY)v18);
LABEL_79:
            ExFreePoolWithTag(v13, 0);
            ExFreePoolWithTag(v15, 0);
            if ( SeTokenLeakTracking )
              ExFreePoolWithTag(P, 0);
            return (unsigned int)Information;
          }
          v21 = (__int64)v102;
          if ( (*(_DWORD *)v18 & (_DWORD)v102[9]) != 0 )
          {
            Information = -1073741811;
            goto LABEL_17;
          }
          if ( (*(_DWORD *)v18 & 0x10) != 0 )
          {
            if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a6) )
            {
              Information = -1073741727;
              goto LABEL_17;
            }
            v21 = (__int64)v102;
          }
          v22 = v108;
          if ( !v108 )
            v22 = *(_DWORD *)(v21 + 104);
          *(_DWORD *)(v18 + 20) = v22;
          v23 = v99;
          *(_DWORD *)(v18 + 24) = v99;
          Information = ObpAllocateObject((_DWORD *)v18, a6, v21, ListEntry, v23, &v104, 0LL);
          if ( Information < 0 )
          {
LABEL_17:
            if ( ListEntry[1] )
            {
              if ( WORD1(ListEntry[0]) == 248 )
              {
                v24 = KeGetCurrentPrcb();
                v25 = v24->PPLookasideList[5].P;
                ++v25->TotalFrees;
                if ( LOWORD(v25->ListHead.Alignment) < v25->Depth
                  || (++v25->FreeMisses,
                      v25 = v24->PPLookasideList[5].L,
                      ++v25->TotalFrees,
                      LOWORD(v25->ListHead.Alignment) < v25->Depth) )
                {
                  RtlpInterlockedPushEntrySList(&v25->ListHead, ListEntry[1]);
                }
                else
                {
                  ++v25->FreeMisses;
                  if ( (void (__stdcall *)(PVOID))v25->FreeEx == ExFreePool )
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
            v26 = *(void **)(v18 + 32);
            if ( v26 )
            {
              if ( *(_BYTE *)(v18 + 16) <= 1u )
                ExFreePoolWithTag(v26, 0);
              *(_QWORD *)(v18 + 32) = 0LL;
            }
            v27 = KeGetCurrentPrcb();
            v28 = v27->PPLookasideList[4].P;
            ++v28->TotalFrees;
            if ( LOWORD(v28->ListHead.Alignment) >= v28->Depth )
            {
              ++v28->FreeMisses;
              v28 = v27->PPLookasideList[4].L;
              ++v28->TotalFrees;
              if ( LOWORD(v28->ListHead.Alignment) >= v28->Depth )
              {
                ++v28->FreeMisses;
                if ( (void (__stdcall *)(PVOID))v28->FreeEx == ExFreePool )
                  goto LABEL_139;
                goto LABEL_151;
              }
            }
            goto LABEL_78;
          }
          v68 = v104;
          if ( ObpTraceFlags )
          {
            ObpRegisterObject(v104);
            ObpPushStackInfo(v68, 1, 1u, 0x746C6644u);
          }
          v69 = v68 + 48;
          *(_QWORD *)(v69 + 16) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          *(_DWORD *)(v69 + 196) = a5;
          *(_BYTE *)(v69 + 204) = 0;
          *(_DWORD *)(v69 + 192) = a4;
          *(_QWORD *)(v69 + 48) = v15;
          ExInitializeResourceLite(v15);
          v29 = (PVOID *)P;
          *(_QWORD *)(v69 + 24) = *((_QWORD *)a1 + 3);
          v30 = *a1;
          *(_DWORD *)(v69 + 140) = 0;
          *(_OWORD *)v69 = v30;
          *(_QWORD *)(v69 + 32) = *((_QWORD *)a1 + 4);
          *(_QWORD *)(v69 + 40) = *((_QWORD *)a1 + 5);
          *(_QWORD *)(v69 + 224) = *((_QWORD *)a1 + 28);
          *(_QWORD *)(v69 + 1120) = 0LL;
          *(_QWORD *)(v69 + 1128) = 0LL;
          *(_QWORD *)(v69 + 1096) = 0LL;
          *(_QWORD *)(v69 + 1144) = v29;
          *(_DWORD *)(v69 + 120) = 0;
          *(_QWORD *)(v69 + 1160) = 0LL;
          if ( SeTokenLeakTracking )
          {
            v90 = RtlWalkFrameChain(v29 + 5, 0x1Eu, 0);
            if ( KeGetCurrentIrql() < 2u )
              RtlWalkFrameChain((PVOID *)(*(_QWORD *)(v69 + 1144) + 8 * (v90 + 5LL)), 30 - v90, 1u);
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(*((PERESOURCE *)a1 + 6), 1u);
          *(_QWORD *)(v69 + 56) = *((_QWORD *)a1 + 7);
          *(_DWORD *)(v69 + 136) = *((_DWORD *)a1 + 34);
          *(_DWORD *)(v69 + 144) = *((_DWORD *)a1 + 36);
          *(_DWORD *)(v69 + 128) = *((_DWORD *)a1 + 32);
          *(_DWORD *)(v69 + 132) = *((_DWORD *)a1 + 33);
          v32 = *((_DWORD *)a1 + 50) & 0xFFFFFBDF;
          *(_DWORD *)(v69 + 200) = v32;
          if ( (v32 & 0x1000000) != 0 )
            _InterlockedIncrement(&SepLearningModeTokenCount);
          v33 = *((_DWORD *)a1 + 30);
          if ( *(_DWORD *)(v69 + 120) != v33 )
          {
            *(_DWORD *)(v69 + 120) = v33;
            if ( !SeTokenDoesNotTrackSessionObject )
            {
              v34 = *(void **)(v69 + 1160);
              if ( v34 )
                ObfDereferenceObject(v34);
              *(_QWORD *)(v69 + 1160) = PsGetSessionObjectById();
            }
          }
          *(_DWORD *)(v69 + 120) = *((_DWORD *)a1 + 30);
          *(_OWORD *)(v69 + 88) = *(__int128 *)((char *)a1 + 88);
          *(_OWORD *)(v69 + 104) = *(__int128 *)((char *)a1 + 104);
          *(_DWORD *)(v69 + 208) = *((_DWORD *)a1 + 52);
          *(_DWORD *)(v69 + 212) = *((_DWORD *)a1 + 53);
          *(_OWORD *)(v69 + 64) = a1[4];
          v35 = *((_QWORD *)a1 + 10);
          *(_QWORD *)(v69 + 776) = v13;
          *(_QWORD *)(v69 + 1080) = 0LL;
          *(_QWORD *)(v69 + 1088) = 0LL;
          *(_QWORD *)(v69 + 1152) = 0LL;
          *(_QWORD *)(v69 + 792) = 0LL;
          *(_QWORD *)(v69 + 784) = 0LL;
          *(_DWORD *)(v69 + 800) = 0;
          *(_QWORD *)(v69 + 80) = v35;
          memset_0((void *)(v69 + 808), 0, 0x110uLL);
          v36 = *(_BYTE *)(v69 + 119) == 2;
          *(_QWORD *)(v69 + 176) = 0LL;
          *(_QWORD *)(v69 + 1104) = 0LL;
          *(_QWORD *)(v69 + 1112) = 0LL;
          *(_QWORD *)(v69 + 1136) = 0LL;
          if ( v36 )
            SepModifyTokenPolicyCounter(v69 + 88, 1);
          if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 )
          {
            v43 = SepReferenceLogonSession((char *)a1 + 24, v69 + 216);
            if ( v43 < 0 )
            {
              *(_DWORD *)(v69 + 200) |= 0x20u;
              *(_QWORD *)(v69 + 216) = 0LL;
              goto LABEL_46;
            }
          }
          else
          {
            v37 = *((_QWORD *)a1 + 27);
            *(_QWORD *)(v69 + 216) = v37;
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v37 + 24)) <= 1 )
              __fastfail(0xEu);
          }
          v38 = *((_QWORD *)a1 + 142);
          if ( v38 )
            SepReferenceLuidToIndexEntry(v38);
          *(_QWORD *)(v69 + 1136) = *((_QWORD *)a1 + 142);
          v39 = (_DWORD *)*((_QWORD *)a1 + 97);
          if ( *v39 )
          {
            v43 = AuthzBasepDuplicateSecurityAttributes((__int64)v39, *(_QWORD *)(v69 + 776), a7);
            if ( v43 < 0 )
              goto LABEL_46;
          }
          memmove((void *)(v69 + 1168), a1 + 73, *((unsigned int *)a1 + 33));
          v40 = v69 - (_QWORD)a1;
          if ( SepTokenSidSharingEnabled )
          {
            v41 = v40 + *((_QWORD *)a1 + 19);
            v105 = 0LL;
            *(_QWORD *)(v69 + 152) = v41;
            v42 = *((_DWORD *)a1 + 52);
            if ( v42 != -1 )
            {
              v43 = SepDuplicateSid(*(void **)(*((_QWORD *)a1 + 19) + 16LL * v42));
              if ( v43 < 0 )
              {
                *(_QWORD *)(v69 + 152) = 0LL;
LABEL_46:
                ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                ObfDereferenceObject((PVOID)v69);
                return (unsigned int)v43;
              }
              *(_QWORD *)(v69 + 1120) = v105;
            }
            if ( _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a1 + 141) + 8LL)) <= 1 )
              __fastfail(0xEu);
            v92 = 0;
            *(_QWORD *)(v69 + 1128) = *((_QWORD *)a1 + 141);
            v93 = *((_DWORD *)a1 + 31);
            *(_DWORD *)(v69 + 124) = v93;
            if ( v93 )
            {
              do
              {
                v94 = 2LL * v92;
                if ( v92 == v42 )
                  v95 = *(_QWORD *)(v69 + 1120);
                else
                  v95 = *(_QWORD *)(*((_QWORD *)a1 + 19) + 16LL * v92);
                *(_QWORD *)(*(_QWORD *)(v69 + 152) + 16LL * v92++) = v95;
                *(_DWORD *)(*(_QWORD *)(v69 + 152) + 8 * v94 + 8) = *(_DWORD *)(*((_QWORD *)a1 + 19) + 8 * v94 + 8);
              }
              while ( v92 < *(_DWORD *)(v69 + 124) );
            }
          }
          else
          {
            v45 = *((_DWORD *)a1 + 31);
            *(_DWORD *)(v69 + 124) = v45;
            v46 = (_QWORD *)(v40 + *((_QWORD *)a1 + 19));
            for ( *(_QWORD *)(v69 + 152) = v46; v45; --v45 )
            {
              *v46 += v40;
              v46 += 2;
            }
          }
          v47 = *((_QWORD *)a1 + 20);
          *(_QWORD *)(v69 + 160) = v47;
          if ( v47 )
          {
            v70 = *(_DWORD *)(v69 + 128);
            v71 = (_QWORD *)(v40 + v47);
            for ( *(_QWORD *)(v69 + 160) = v71; v70; --v70 )
            {
              *v71 += v40;
              v71 += 2;
            }
          }
          v48 = *((_QWORD *)a1 + 23);
          v49 = 4 * *(unsigned __int8 *)(*((_QWORD *)a1 + 21) + 1LL) + 8;
          if ( v48 )
            v49 += *(unsigned __int16 *)(v48 + 2);
          v50 = v49;
          v51 = (char *)ExAllocatePool2(0x100uLL);
          *(_QWORD *)(v69 + 176) = v51;
          v52 = v51;
          if ( !v51 )
          {
LABEL_72:
            ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            ObfDereferenceObject((PVOID)v69);
            return 3221225626LL;
          }
          memmove(v51, *((const void **)a1 + 22), v50);
          v53 = *((_QWORD *)a1 + 23);
          v54 = &v52[-*((_QWORD *)a1 + 22)];
          *(_QWORD *)(v69 + 184) = v53;
          if ( v53 )
            *(_QWORD *)(v69 + 184) = &v54[v53];
          *(_QWORD *)(v69 + 168) = &v54[*((_QWORD *)a1 + 21)];
          v55 = *((_DWORD *)a1 + 200);
          if ( v55 )
          {
            v56 = *((_QWORD *)a1 + 99);
            v57 = (void *)*((_QWORD *)a1 + 98);
            v99 = 0;
            LODWORD(P) = 0;
            v106[1] = 0LL;
            if ( *(_QWORD *)(v69 + 792) )
            {
              if ( !v57 )
                goto LABEL_75;
              v91 = *(void **)(v69 + 784);
              if ( v91 )
              {
                if ( !RtlIsParentOfChildAppContainer(v91, v57) )
                  goto LABEL_75;
              }
            }
            if ( v55 > 0x1000 )
            {
              v63 = -1073741811;
              goto LABEL_76;
            }
            if ( SepTokenCapabilitySidSharingEnabled )
            {
              v59 = 32 * v55;
              v99 = 32 * v55;
            }
            else
            {
              v58 = SepLengthSidAndAttributesArray(v56, v55, &v99);
              if ( v58 < 0 )
              {
                v63 = v58;
                goto LABEL_76;
              }
              v59 = v99;
            }
            v60 = (unsigned int **)ExAllocatePool2(0x100uLL);
            v61 = (_SID_AND_ATTRIBUTES *)v60;
            if ( !v60 )
              goto LABEL_93;
            if ( SepTokenCapabilitySidSharingEnabled )
              v62 = SepInsertOrReferenceSharedSidEntries(v56, v60, v55);
            else
              v62 = SeCaptureSidAndAttributesArray(v56, v55, 0LL, v60, v59);
            v109 = v62;
            if ( v62 < 0 )
            {
              ExFreePoolWithTag(v61, 0);
              v63 = v109;
              goto LABEL_76;
            }
            if ( *(_QWORD *)(v69 + 792) )
              SepFreeTokenCapabilities(v69);
            *(_QWORD *)(v69 + 792) = v61;
            *(_DWORD *)(v69 + 800) = v55;
            RtlSidHashInitialize(v61, v55, (PSID_AND_ATTRIBUTES_HASH)(v69 + 808));
          }
          v72 = (unsigned __int8 *)*((_QWORD *)a1 + 98);
          if ( !v72 )
          {
LABEL_111:
            v78 = *((_QWORD *)a1 + 135);
            if ( v78 )
            {
              if ( _InterlockedIncrement64((volatile signed __int64 *)(v78 + 24)) <= 1 )
                __fastfail(0xEu);
              *(_QWORD *)(v69 + 1080) = *((_QWORD *)a1 + 135);
            }
            v79 = *((_QWORD *)a1 + 136);
            if ( v79 )
            {
              if ( _InterlockedIncrement64((volatile signed __int64 *)(v79 + 24)) <= 1 )
                __fastfail(0xEu);
              *(_QWORD *)(v69 + 1088) = *((_QWORD *)a1 + 136);
            }
            v80 = *((_QWORD *)a1 + 144);
            if ( v80 )
            {
              if ( _InterlockedIncrement64((volatile signed __int64 *)(v80 + 24)) <= 1 )
                __fastfail(0xEu);
              *(_QWORD *)(v69 + 1152) = *((_QWORD *)a1 + 144);
            }
            v81 = *((_QWORD *)a1 + 137);
            if ( v81 )
            {
              v36 = (*((_DWORD *)a1 + 50) & 0x8000) == 0;
              v106[0] = 0LL;
              if ( v36 )
              {
                *(_QWORD *)(v69 + 1096) = v81;
              }
              else
              {
                v88 = SepDuplicateClaimAttributes(v81, v106);
                if ( v88 < 0 )
                {
                  ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  ObfDereferenceObject((PVOID)v69);
                  return (unsigned int)v88;
                }
                v89 = v106[0];
                *(_DWORD *)(v69 + 200) |= 0x8000u;
                *(_QWORD *)(v69 + 1096) = v89;
              }
            }
            v82 = (unsigned __int8 *)*((_QWORD *)a1 + 138);
            v83 = 0LL;
            if ( !v82 )
              goto LABEL_120;
            v86 = 4 * v82[1] + 8;
            v83 = (void *)ExAllocatePool2(0x100uLL);
            if ( v83 )
            {
              v87 = 4 * v82[1] + 8;
              if ( v87 <= v86 )
                memmove(v83, v82, v87);
LABEL_120:
              v84 = *(void **)(v69 + 1104);
              if ( v84 )
              {
                ExFreePoolWithTag(v84, 0);
                *(_QWORD *)(v69 + 1104) = 0LL;
              }
              *(_QWORD *)(v69 + 1104) = v83;
              ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              if ( SeTokenLeakTracking )
              {
                **(_QWORD **)(v69 + 1144) = KeGetCurrentThread()[1].CycleTime;
                *(_QWORD *)(*(_QWORD *)(v69 + 1144) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
                *(_DWORD *)(*(_QWORD *)(v69 + 1144) + 32LL) = 13;
                *(_DWORD *)(*(_QWORD *)(v69 + 1144) + 280LL) = 0;
                *(_DWORD *)(*(_QWORD *)(v69 + 1144) + 284LL) = 0;
                v96 = *(_QWORD *)(v69 + 1144);
                Process = KeGetCurrentThread()->ApcState.Process;
                *(_QWORD *)(v96 + 16) = Process[1].SecureState.SecureHandle;
                *(_DWORD *)(v96 + 24) = Process[1].KernelWaitTime;
                *(_WORD *)(v96 + 28) = WORD2(Process[1].KernelWaitTime);
                *(_BYTE *)(v96 + 30) = BYTE6(Process[1].KernelWaitTime);
                SepAddTokenLogonSession(v69);
              }
              if ( a3 )
                SepMakeTokenEffectiveOnly(v69);
              RtlSidHashInitialize(
                *(PSID_AND_ATTRIBUTES *)(v69 + 152),
                *(_DWORD *)(v69 + 124),
                (PSID_AND_ATTRIBUTES_HASH)(v69 + 232));
              RtlSidHashInitialize(
                *(PSID_AND_ATTRIBUTES *)(v69 + 160),
                *(_DWORD *)(v69 + 128),
                (PSID_AND_ATTRIBUTES_HASH)(v69 + 504));
              v85 = *(_SID_AND_ATTRIBUTES **)(v69 + 792);
              if ( v85 )
                RtlSidHashInitialize(v85, *(_DWORD *)(v69 + 800), (PSID_AND_ATTRIBUTES_HASH)(v69 + 808));
              if ( SeTokenLeakTracking )
              {
                if ( SepTokenLeakMethodWatch == 13
                  && KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                {
                  *(_DWORD *)(*(_QWORD *)(v69 + 1144) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                  v98 = *(_DWORD *)(*(_QWORD *)(v69 + 1144) + 280LL);
                  if ( v98 >= SepTokenLeakBreakCount )
                  {
                    DbgPrint("\nToken number 0x%x = 0x%p\n", v98, (const void *)v69);
                    __debugbreak();
                  }
                }
              }
              *a8 = v69;
              return 0LL;
            }
            goto LABEL_72;
          }
          v73 = *(void **)(v69 + 784);
          if ( v73 && !RtlIsParentOfChildAppContainer(v73, *((PSID *)a1 + 98)) )
          {
LABEL_75:
            v63 = -1073741790;
LABEL_76:
            ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            ObfDereferenceObject((PVOID)v69);
            return v63;
          }
          v74 = (4 * v72[1] + 11) & 0xFFFFFFFC;
          v75 = (void *)ExAllocatePool2(0x100uLL);
          if ( v75 )
          {
            v76 = 4 * v72[1] + 8;
            if ( v76 <= v74 )
              memmove(v75, v72, v76);
            v77 = *(void **)(v69 + 784);
            if ( v77 )
            {
              ExFreePoolWithTag(v77, 0);
              *(_QWORD *)(v69 + 784) = 0LL;
            }
            *(_QWORD *)(v69 + 784) = v75;
            goto LABEL_111;
          }
LABEL_93:
          v63 = -1073741670;
          goto LABEL_76;
        }
      }
    }
    *(_DWORD *)v18 = v19->Number;
    goto LABEL_10;
  }
  ExFreePoolWithTag(v13, 0);
  ExFreePoolWithTag(v15, 0);
  if ( SeTokenLeakTracking )
    ExFreePoolWithTag(v9, 0);
  return 3221225621LL;
}
