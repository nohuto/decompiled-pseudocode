/*
 * XREFs of SepDuplicateToken @ 0x140856520
 * Callers:
 *     SepGetAnonymousToken @ 0x14035F4BC (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x1404A1250 (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x1406083E4 (SepOneWayLinkLogonSessions.c)
 *     SeDuplicateTokenWithPredictedClaims @ 0x140792B0C (SeDuplicateTokenWithPredictedClaims.c)
 *     NtOpenThreadTokenEx @ 0x1408553C0 (NtOpenThreadTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x140897AC0 (SepCreateClientSecurityEx.c)
 *     NtDuplicateToken @ 0x14090F090 (NtDuplicateToken.c)
 *     SeCopyClientToken @ 0x14090FF48 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     NtImpersonateAnonymousToken @ 0x140A2F610 (NtImpersonateAnonymousToken.c)
 *     SeSubProcessToken @ 0x140A30C24 (SeSubProcessToken.c)
 *     SeGetLinkedToken @ 0x140A31A00 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x140A56F40 (SeGetLogonSessionToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140AAF038 (SeDuplicateTokenAndAddOriginClaim.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     RtlWalkFrameChain @ 0x14027DB70 (RtlWalkFrameChain.c)
 *     DbgPrint @ 0x1402CB260 (DbgPrint.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PsGetSessionObjectById @ 0x1403493A0 (PsGetSessionObjectById.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14035F940 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ExInitializeResourceLite @ 0x1403655E0 (ExInitializeResourceLite.c)
 *     RtlSidHashInitialize @ 0x140365780 (RtlSidHashInitialize.c)
 *     SepDuplicateLogonSessionReference @ 0x14043FF10 (SepDuplicateLogonSessionReference.c)
 *     SepReferenceLuidToIndexEntry @ 0x140454054 (SepReferenceLuidToIndexEntry.c)
 *     Feature_2045735225__private_IsEnabledDeviceUsageNoInline @ 0x1406082E8 (Feature_2045735225__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SepModifyTokenPolicyCounter @ 0x14078FB40 (SepModifyTokenPolicyCounter.c)
 *     SepAddTokenLogonSession @ 0x140793570 (SepAddTokenLogonSession.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     SepSetTokenCapabilities @ 0x140936380 (SepSetTokenCapabilities.c)
 *     SepSetTokenTrust @ 0x1409DF8F0 (SepSetTokenTrust.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1409F4CB4 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenPackage @ 0x140A141B0 (SepSetTokenPackage.c)
 *     SepReferenceLogonSessionSilo @ 0x140A31B44 (SepReferenceLogonSessionSilo.c)
 *     SepDuplicateTokenClaims @ 0x140A5E164 (SepDuplicateTokenClaims.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        char a7,
        _QWORD *a8)
{
  PVOID *v11; // rsi
  _DWORD *Pool2; // rax
  _DWORD *v14; // rbx
  _QWORD *v15; // rax
  PVOID *v16; // rcx
  struct _ERESOURCE *v17; // r15
  int Object; // r14d
  ULONG v19; // eax
  struct _KTHREAD *CurrentThread; // rax
  bool v21; // zf
  int v22; // eax
  unsigned int v23; // eax
  __int128 v24; // xmm0
  int v25; // r14d
  __int64 v26; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rcx
  int i; // eax
  __int64 v35; // rax
  _QWORD *v36; // rax
  int j; // ecx
  __int64 v38; // rax
  unsigned int v39; // edx
  size_t v40; // r12
  char *v41; // rax
  char *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  char *v47; // rbx
  __int64 v48; // r9
  __int64 v49; // rdx
  int v50; // ebx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // eax
  struct _ERESOURCE *v58; // rcx
  unsigned int v59; // esi
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  _KPROCESS *Process; // rdx
  __int64 v67; // rcx
  unsigned int v68; // ecx
  __int64 v69; // rdx
  int v70; // r10d
  int v71; // r9d
  int v72; // eax
  int v73; // edx
  __int64 v74; // [rsp+58h] [rbp-18h] BYREF
  __int64 v75; // [rsp+60h] [rbp-10h]
  __int64 v76; // [rsp+68h] [rbp-8h]

  v11 = 0LL;
  if ( a4 == 2 && a5 > 3 )
    return 3221225637LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v14 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 0;
  v15 = Pool2 + 2;
  v14[6] = 0;
  v15[1] = v15;
  *v15 = v15;
  *((_QWORD *)v14 + 5) = v14 + 8;
  *((_QWORD *)v14 + 4) = v14 + 8;
  if ( SeTokenLeakTracking )
  {
    v11 = (PVOID *)ExAllocatePool2(0x100uLL);
    if ( !v11 )
    {
      v16 = (PVOID *)v14;
      goto LABEL_8;
    }
  }
  v17 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL);
  if ( !v17 )
  {
    ExFreePoolWithTag(v14, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v16 = v11;
LABEL_8:
    ExFreePoolWithTag(v16, 0);
    return 3221225626LL;
  }
  if ( *(_DWORD *)(a1 + 132) >= 0xFFFFFB70 )
  {
    ExFreePoolWithTag(v14, 0);
    ExFreePoolWithTag(v17, 0);
    if ( SeTokenLeakTracking )
      ExFreePoolWithTag(v11, 0);
    return 3221225621LL;
  }
  Object = ObCreateObjectEx(a6, (_DWORD)SeTokenObjectType, a2, a6);
  if ( Object < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    ExFreePoolWithTag(v17, 0);
    if ( SeTokenLeakTracking )
      ExFreePoolWithTag(v11, 0);
    return (unsigned int)Object;
  }
  MEMORY[0x10] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  MEMORY[0xCC] = 0;
  MEMORY[0xC0] = a4;
  MEMORY[0xC4] = a5;
  MEMORY[0x30] = v17;
  ExInitializeResourceLite(v17);
  MEMORY[0x18] = *(_QWORD *)(a1 + 24);
  MEMORY[0] = *(_OWORD *)a1;
  MEMORY[0x8C] = 0;
  MEMORY[0x20] = *(_QWORD *)(a1 + 32);
  MEMORY[0x28] = *(_QWORD *)(a1 + 40);
  MEMORY[0xE0] = *(_QWORD *)(a1 + 224);
  MEMORY[0x460] = 0LL;
  MEMORY[0x468] = 0LL;
  MEMORY[0x448] = 0LL;
  MEMORY[0x478] = v11;
  MEMORY[0x78] = 0;
  MEMORY[0x488] = 0LL;
  if ( SeTokenLeakTracking )
  {
    v19 = RtlWalkFrameChain(v11 + 5, 0x1Eu, 0);
    if ( KeGetCurrentIrql() < 2u )
      RtlWalkFrameChain((PVOID *)(MEMORY[0x478] + 40LL + 8LL * v19), 30 - v19, 1u);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  MEMORY[0x38] = *(_QWORD *)(a1 + 56);
  MEMORY[0x88] = *(_DWORD *)(a1 + 136);
  MEMORY[0x90] = *(_DWORD *)(a1 + 144);
  MEMORY[0x80] = *(_DWORD *)(a1 + 128);
  MEMORY[0x84] = *(_DWORD *)(a1 + 132);
  v75 = 128LL;
  v21 = (unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline() == 0;
  v22 = *(_DWORD *)(a1 + 200);
  if ( v21 )
    v23 = v22 & 0xFFFFFBDF;
  else
    v23 = v22 & 0xEFFFFBDF;
  MEMORY[0xC8] = v23;
  if ( (v23 & 0x1000000) != 0 )
    _InterlockedIncrement(&SepLearningModeTokenCount);
  if ( MEMORY[0x78] != *(_DWORD *)(a1 + 120) )
  {
    MEMORY[0x78] = *(_DWORD *)(a1 + 120);
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( MEMORY[0x488] )
        ObfDereferenceObject(MEMORY[0x488]);
      MEMORY[0x488] = PsGetSessionObjectById();
    }
  }
  MEMORY[0x78] = *(_DWORD *)(a1 + 120);
  MEMORY[0x58] = *(_OWORD *)(a1 + 88);
  MEMORY[0x68] = *(_OWORD *)(a1 + 104);
  MEMORY[0xD0] = *(_DWORD *)(a1 + 208);
  MEMORY[0xD4] = *(_DWORD *)(a1 + 212);
  v24 = *(_OWORD *)(a1 + 64);
  v76 = 808LL;
  MEMORY[0x40] = v24;
  MEMORY[0x50] = *(_QWORD *)(a1 + 80);
  MEMORY[0x308] = v14;
  MEMORY[0x438] = 0LL;
  MEMORY[0x440] = 0LL;
  MEMORY[0x480] = 0LL;
  MEMORY[0x318] = 0LL;
  MEMORY[0x310] = 0LL;
  MEMORY[0x320] = 0;
  memset_0((void *)0x328, 0, 0x110uLL);
  MEMORY[0xB0] = 0LL;
  MEMORY[0x450] = 0LL;
  MEMORY[0x458] = 0LL;
  MEMORY[0x470] = 0LL;
  if ( MEMORY[0x77] == 2 )
    SepModifyTokenPolicyCounter(88LL, 1);
  v25 = SepDuplicateLogonSessionReference(0LL, a1);
  if ( v25 < 0 )
    goto LABEL_45;
  if ( !(unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline()
    || (*(_DWORD *)(a1 + 200) & 0x10000000) == 0 )
  {
    goto LABEL_38;
  }
  v26 = MEMORY[0xD8];
  v74 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v25 = SepReferenceLogonSessionSilo(v26 + 16, CurrentServerSilo, &v74);
  if ( v25 < 0 )
  {
LABEL_45:
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v30, v31, v32);
    ObfDereferenceObject(0LL);
    return (unsigned int)v25;
  }
  MEMORY[0xC8] |= 0x10000000u;
LABEL_38:
  v28 = *(_QWORD *)(a1 + 1136);
  if ( v28 )
    SepReferenceLuidToIndexEntry(v28);
  MEMORY[0x470] = *(_QWORD *)(a1 + 1136);
  v29 = *(_DWORD **)(a1 + 776);
  if ( *v29 )
  {
    v25 = AuthzBasepDuplicateSecurityAttributes((__int64)v29, MEMORY[0x308], a7);
    if ( v25 < 0 )
      goto LABEL_45;
  }
  memmove((void *)0x490, (const void *)(a1 + 1168), *(unsigned int *)(a1 + 132));
  if ( SepTokenSidSharingEnabled )
  {
    MEMORY[0x98] = *(_QWORD *)(a1 + 152) - a1;
    v25 = SepDuplicateTokenUserAndGroups(a1, 0LL);
    if ( v25 < 0 )
    {
      MEMORY[0x98] = 0LL;
      goto LABEL_45;
    }
  }
  else
  {
    MEMORY[0x7C] = *(_DWORD *)(a1 + 124);
    v33 = (_QWORD *)(*(_QWORD *)(a1 + 152) - a1);
    MEMORY[0x98] = v33;
    for ( i = MEMORY[0x7C]; i; --i )
    {
      *v33 -= a1;
      v33 += 2;
    }
  }
  v35 = *(_QWORD *)(a1 + 160);
  MEMORY[0xA0] = v35;
  if ( v35 )
  {
    v36 = (_QWORD *)(v35 - a1);
    MEMORY[0xA0] = v36;
    for ( j = *(_DWORD *)v75; j; --j )
    {
      *v36 -= a1;
      v36 += 2;
    }
  }
  v38 = *(_QWORD *)(a1 + 184);
  v39 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v38 )
    v39 += *(unsigned __int16 *)(v38 + 2);
  v40 = v39;
  v41 = (char *)ExAllocatePool2(0x100uLL);
  MEMORY[0xB0] = v41;
  v42 = v41;
  if ( !v41 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v43, v44, v45);
    ObfDereferenceObject(0LL);
    return 3221225626LL;
  }
  memmove(v41, *(const void **)(a1 + 176), v40);
  v46 = *(_QWORD *)(a1 + 184);
  v47 = &v42[-*(_QWORD *)(a1 + 176)];
  MEMORY[0xB8] = v46;
  if ( v46 )
    MEMORY[0xB8] = &v47[v46];
  MEMORY[0xA8] = &v47[*(_QWORD *)(a1 + 168)];
  v48 = *(unsigned int *)(a1 + 800);
  if ( (_DWORD)v48 )
    v25 = SepSetTokenCapabilities(0LL, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v48);
  if ( v25 < 0 )
    goto LABEL_45;
  v49 = *(_QWORD *)(a1 + 784);
  if ( v49 )
  {
    v50 = SepSetTokenPackage(0LL, v49);
    if ( v50 < 0 )
      goto LABEL_76;
  }
  v51 = *(_QWORD *)(a1 + 1080);
  if ( v51 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v51 + 24)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x438] = *(_QWORD *)(a1 + 1080);
  }
  v52 = *(_QWORD *)(a1 + 1088);
  if ( v52 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v52 + 24)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x440] = *(_QWORD *)(a1 + 1088);
  }
  v53 = *(_QWORD *)(a1 + 1152);
  if ( v53 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v53 + 24)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x480] = *(_QWORD *)(a1 + 1152);
  }
  if ( *(_QWORD *)(a1 + 1096) && (v50 = SepDuplicateTokenClaims(a1, 0LL), v50 < 0) )
  {
LABEL_76:
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v54, v55, v56);
    ObfDereferenceObject(0LL);
    return (unsigned int)v50;
  }
  else
  {
    v57 = SepSetTokenTrust(0LL, *(_QWORD *)(a1 + 1104));
    v58 = *(struct _ERESOURCE **)(a1 + 48);
    v59 = v57;
    if ( v57 >= 0 )
    {
      ExReleaseResourceLite(v58);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v63, v64, v65);
      if ( SeTokenLeakTracking )
      {
        *MEMORY[0x478] = KeGetCurrentThread()[1].CycleTime;
        *(_QWORD *)(MEMORY[0x478] + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(MEMORY[0x478] + 32LL) = 13;
        *(_DWORD *)(MEMORY[0x478] + 280LL) = 0;
        *(_DWORD *)(MEMORY[0x478] + 284LL) = 0;
        Process = KeGetCurrentThread()->ApcState.Process;
        v67 = MEMORY[0x478];
        *(_QWORD *)(MEMORY[0x478] + 16LL) = Process[1].SecureState.SecureHandle;
        *(_DWORD *)(v67 + 24) = Process[1].KernelWaitTime;
        *(_WORD *)(v67 + 28) = WORD2(Process[1].KernelWaitTime);
        *(_BYTE *)(v67 + 30) = BYTE6(Process[1].KernelWaitTime);
        SepAddTokenLogonSession(0LL);
      }
      if ( a3 )
      {
        MEMORY[0x40] &= MEMORY[0x48];
        MEMORY[0x50] &= MEMORY[0x48];
        v68 = 1;
        LODWORD(v69) = MEMORY[0x7C];
        if ( MEMORY[0x7C] > 1u )
        {
          do
          {
            if ( (*(_DWORD *)(MEMORY[0x98] + 16LL * v68 + 8) & 0x34) != 0 )
            {
              ++v68;
            }
            else
            {
              v70 = MEMORY[0x90];
              if ( v68 == MEMORY[0x90] )
              {
                MEMORY[0x90] = 0;
                v70 = 0;
              }
              v71 = MEMORY[0xD0];
              if ( v68 == MEMORY[0xD0] )
              {
                MEMORY[0xD0] = -1;
                v71 = -1;
              }
              v72 = v69 - 1;
              v69 = (unsigned int)(v69 - 1);
              if ( v72 == v71 )
                MEMORY[0xD0] = v68;
              if ( (_DWORD)v69 == v70 )
                MEMORY[0x90] = v68;
              *(_OWORD *)(MEMORY[0x98] + 16LL * v68) = *(_OWORD *)(MEMORY[0x98] + 16 * v69);
            }
          }
          while ( v68 < (unsigned int)v69 );
        }
        MEMORY[0x7C] = v69;
      }
      RtlSidHashInitialize(MEMORY[0x98], MEMORY[0x7C], (_QWORD *)0xE8);
      RtlSidHashInitialize(MEMORY[0xA0], MEMORY[0x80], (_QWORD *)0x1F8);
      if ( MEMORY[0x318] )
        RtlSidHashInitialize(MEMORY[0x318], MEMORY[0x320], (_QWORD *)v76);
      if ( SeTokenLeakTracking )
      {
        if ( SepTokenLeakMethodWatch == 13
          && KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
        {
          *(_DWORD *)(MEMORY[0x478] + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
          v73 = *(_DWORD *)(MEMORY[0x478] + 280LL);
          if ( v73 >= SepTokenLeakBreakCount )
          {
            DbgPrint("\nToken number 0x%x = 0x%p\n", v73, 0LL);
            __debugbreak();
          }
        }
      }
      *a8 = 0LL;
      return v59;
    }
    else
    {
      ExReleaseResourceLite(v58);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v60, v61, v62);
      ObfDereferenceObject(0LL);
      return v59;
    }
  }
}
