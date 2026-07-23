/*
 * XREFs of SepDuplicateToken @ 0x1408527E0
 * Callers:
 *     SepGetAnonymousToken @ 0x1403B977C (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x14049BAB0 (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x140605AE8 (SepOneWayLinkLogonSessions.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     SeDuplicateTokenWithPredictedClaims @ 0x140792ADC (SeDuplicateTokenWithPredictedClaims.c)
 *     NtOpenThreadTokenEx @ 0x140851680 (NtOpenThreadTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     NtDuplicateToken @ 0x1408E67E0 (NtDuplicateToken.c)
 *     SeCopyClientToken @ 0x1408E7698 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     NtImpersonateAnonymousToken @ 0x140A24050 (NtImpersonateAnonymousToken.c)
 *     SeGetLinkedToken @ 0x140A25970 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x140A4EDD0 (SeGetLogonSessionToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140AA9F14 (SeDuplicateTokenAndAddOriginClaim.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403BA310 (AuthzBasepDuplicateSecurityAttributes.c)
 *     PsGetSessionObjectById @ 0x1403C2DE0 (PsGetSessionObjectById.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     ExInitializeResourceLite @ 0x1403EAC90 (ExInitializeResourceLite.c)
 *     RtlSidHashInitialize @ 0x1403EAE30 (RtlSidHashInitialize.c)
 *     SepDuplicateLogonSessionReference @ 0x1404361D0 (SepDuplicateLogonSessionReference.c)
 *     SepReferenceLuidToIndexEntry @ 0x140449104 (SepReferenceLuidToIndexEntry.c)
 *     Feature_2045735225__private_IsEnabledDeviceUsageNoInline @ 0x1406059EC (Feature_2045735225__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline @ 0x140605A40 (Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepModifyTokenPolicyCounter @ 0x14078FB10 (SepModifyTokenPolicyCounter.c)
 *     SepAddTokenLogonSession @ 0x140793610 (SepAddTokenLogonSession.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     SepSetTokenCapabilities @ 0x1409854B8 (SepSetTokenCapabilities.c)
 *     SepSetTokenTrust @ 0x1409D96A0 (SepSetTokenTrust.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1409E9014 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenPackage @ 0x140A0C9C0 (SepSetTokenPackage.c)
 *     SepReferenceLogonSessionSilo @ 0x140A25AB4 (SepReferenceLogonSessionSilo.c)
 *     SepDuplicateTokenClaims @ 0x140A56584 (SepDuplicateTokenClaims.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  int v24; // r14d
  __int64 v25; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rcx
  _QWORD *v29; // rcx
  int i; // eax
  __int64 v31; // rax
  _QWORD *v32; // rax
  int j; // ecx
  __int64 v34; // rax
  ULONG_PTR v35; // rdx
  size_t v36; // r15
  char *v37; // rax
  char *v38; // rbx
  __int64 v39; // rax
  char *v40; // rbx
  __int64 v41; // r9
  __int64 v42; // rdx
  int v43; // ebx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // eax
  struct _ERESOURCE *v48; // rcx
  unsigned int v49; // esi
  _KPROCESS *Process; // rdx
  __int64 v51; // rcx
  unsigned int v52; // ecx
  __int64 v53; // rdx
  int v54; // r10d
  int v55; // r9d
  int v56; // eax
  int v57; // edx
  __int64 v58; // [rsp+58h] [rbp-18h] BYREF
  __int64 v59; // [rsp+60h] [rbp-10h]
  __int64 v60; // [rsp+68h] [rbp-8h]

  v11 = 0LL;
  if ( a4 == 2 && a5 > 3 )
    return 3221225637LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x30uLL, 0x74416553u);
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
    v11 = (PVOID *)ExAllocatePool2(0x100uLL, 0x120uLL, 0x74416553u);
    if ( !v11 )
    {
      v16 = (PVOID *)v14;
      goto LABEL_8;
    }
  }
  v17 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL, 0x68uLL, 0x6C546553u);
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
  if ( *(_DWORD *)(a1 + 132) >= 0xFFFFFB68 )
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
  v60 = 128LL;
  v21 = (unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline() == 0;
  v22 = *(_DWORD *)(a1 + 200);
  if ( v21 )
    v23 = v22 & 0xFFFFFBDF;
  else
    v23 = v22 & 0xEFFFFBDF;
  MEMORY[0xC8] = v23;
  v59 = 200LL;
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
  MEMORY[0x40] = *(_OWORD *)(a1 + 64);
  MEMORY[0x50] = *(_QWORD *)(a1 + 80);
  if ( (unsigned int)Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline() )
    MEMORY[0x490] = *(_QWORD *)(a1 + 1168);
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
  v24 = SepDuplicateLogonSessionReference(0LL, a1);
  if ( v24 < 0 )
    goto LABEL_47;
  if ( !(unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline()
    || (*(_DWORD *)(a1 + 200) & 0x10000000) == 0 )
  {
    goto LABEL_40;
  }
  v58 = 0LL;
  v25 = MEMORY[0xD8];
  CurrentServerSilo = PsGetCurrentServerSilo();
  v24 = SepReferenceLogonSessionSilo(v25 + 16, CurrentServerSilo, &v58);
  if ( v24 < 0 )
  {
LABEL_47:
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(0LL);
    return (unsigned int)v24;
  }
  *(_DWORD *)v59 |= 0x10000000u;
LABEL_40:
  v27 = *(_QWORD *)(a1 + 1136);
  if ( v27 )
    SepReferenceLuidToIndexEntry(v27);
  MEMORY[0x470] = *(_QWORD *)(a1 + 1136);
  v28 = *(_DWORD **)(a1 + 776);
  if ( *v28 )
  {
    v24 = AuthzBasepDuplicateSecurityAttributes((__int64)v28, MEMORY[0x308], a7);
    if ( v24 < 0 )
      goto LABEL_47;
  }
  memmove((void *)0x498, (const void *)(a1 + 1176), *(unsigned int *)(a1 + 132));
  if ( SepTokenSidSharingEnabled )
  {
    MEMORY[0x98] = *(_QWORD *)(a1 + 152) - a1;
    v24 = SepDuplicateTokenUserAndGroups(a1, 0LL);
    if ( v24 < 0 )
    {
      MEMORY[0x98] = 0LL;
      goto LABEL_47;
    }
  }
  else
  {
    MEMORY[0x7C] = *(_DWORD *)(a1 + 124);
    v29 = (_QWORD *)(*(_QWORD *)(a1 + 152) - a1);
    MEMORY[0x98] = v29;
    for ( i = MEMORY[0x7C]; i; --i )
    {
      *v29 -= a1;
      v29 += 2;
    }
  }
  v31 = *(_QWORD *)(a1 + 160);
  MEMORY[0xA0] = v31;
  if ( v31 )
  {
    v32 = (_QWORD *)(v31 - a1);
    MEMORY[0xA0] = v32;
    for ( j = *(_DWORD *)v60; j; --j )
    {
      *v32 -= a1;
      v32 += 2;
    }
  }
  v34 = *(_QWORD *)(a1 + 184);
  v35 = 4 * (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v34 )
    v35 = *(unsigned __int16 *)(v34 + 2) + (unsigned int)v35;
  v36 = (unsigned int)v35;
  v37 = (char *)ExAllocatePool2(0x100uLL, v35, 0x64546553u);
  MEMORY[0xB0] = v37;
  v38 = v37;
  if ( !v37 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(0LL);
    return 3221225626LL;
  }
  memmove(v37, *(const void **)(a1 + 176), v36);
  v39 = *(_QWORD *)(a1 + 184);
  v40 = &v38[-*(_QWORD *)(a1 + 176)];
  MEMORY[0xB8] = v39;
  if ( v39 )
    MEMORY[0xB8] = &v40[v39];
  MEMORY[0xA8] = &v40[*(_QWORD *)(a1 + 168)];
  v41 = *(unsigned int *)(a1 + 800);
  if ( (_DWORD)v41 )
    v24 = SepSetTokenCapabilities(0LL, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v41);
  if ( v24 < 0 )
    goto LABEL_47;
  v42 = *(_QWORD *)(a1 + 784);
  if ( v42 )
  {
    v43 = SepSetTokenPackage(0LL, v42);
    if ( v43 < 0 )
      goto LABEL_78;
  }
  v44 = *(_QWORD *)(a1 + 1080);
  if ( v44 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v44 + 24)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x438] = *(_QWORD *)(a1 + 1080);
  }
  v45 = *(_QWORD *)(a1 + 1088);
  if ( v45 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v45 + 24)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x440] = *(_QWORD *)(a1 + 1088);
  }
  v46 = *(_QWORD *)(a1 + 1152);
  if ( v46 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v46 + 24)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x480] = *(_QWORD *)(a1 + 1152);
  }
  if ( *(_QWORD *)(a1 + 1096) && (v43 = SepDuplicateTokenClaims(a1, 0LL), v43 < 0) )
  {
LABEL_78:
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(0LL);
    return (unsigned int)v43;
  }
  else
  {
    v47 = SepSetTokenTrust(0LL, *(_QWORD *)(a1 + 1104));
    v48 = *(struct _ERESOURCE **)(a1 + 48);
    v49 = v47;
    if ( v47 >= 0 )
    {
      ExReleaseResourceLite(v48);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( SeTokenLeakTracking )
      {
        *MEMORY[0x478] = KeGetCurrentThread()[1].CycleTime;
        *(_QWORD *)(MEMORY[0x478] + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(MEMORY[0x478] + 32LL) = 13;
        *(_DWORD *)(MEMORY[0x478] + 280LL) = 0;
        *(_DWORD *)(MEMORY[0x478] + 284LL) = 0;
        Process = KeGetCurrentThread()->ApcState.Process;
        v51 = MEMORY[0x478];
        *(_QWORD *)(MEMORY[0x478] + 16LL) = Process[1].SecureState.SecureHandle;
        *(_DWORD *)(v51 + 24) = Process[1].KernelWaitTime;
        *(_WORD *)(v51 + 28) = WORD2(Process[1].KernelWaitTime);
        *(_BYTE *)(v51 + 30) = BYTE6(Process[1].KernelWaitTime);
        SepAddTokenLogonSession(0LL);
      }
      if ( a3 )
      {
        MEMORY[0x40] &= MEMORY[0x48];
        MEMORY[0x50] &= MEMORY[0x48];
        v52 = 1;
        LODWORD(v53) = MEMORY[0x7C];
        if ( MEMORY[0x7C] > 1u )
        {
          do
          {
            if ( (*(_DWORD *)(MEMORY[0x98] + 16LL * v52 + 8) & 0x34) != 0 )
            {
              ++v52;
            }
            else
            {
              v54 = MEMORY[0x90];
              if ( v52 == MEMORY[0x90] )
              {
                MEMORY[0x90] = 0;
                v54 = 0;
              }
              v55 = MEMORY[0xD0];
              if ( v52 == MEMORY[0xD0] )
              {
                MEMORY[0xD0] = -1;
                v55 = -1;
              }
              v56 = v53 - 1;
              v53 = (unsigned int)(v53 - 1);
              if ( v56 == v55 )
                MEMORY[0xD0] = v52;
              if ( (_DWORD)v53 == v54 )
                MEMORY[0x90] = v52;
              *(_OWORD *)(MEMORY[0x98] + 16LL * v52) = *(_OWORD *)(MEMORY[0x98] + 16 * v53);
            }
          }
          while ( v52 < (unsigned int)v53 );
        }
        MEMORY[0x7C] = v53;
      }
      RtlSidHashInitialize(MEMORY[0x98], MEMORY[0x7C], (PSID_AND_ATTRIBUTES_HASH)0xE8);
      RtlSidHashInitialize(MEMORY[0xA0], MEMORY[0x80], (PSID_AND_ATTRIBUTES_HASH)0x1F8);
      if ( MEMORY[0x318] )
        RtlSidHashInitialize(MEMORY[0x318], MEMORY[0x320], (PSID_AND_ATTRIBUTES_HASH)0x328);
      if ( SeTokenLeakTracking )
      {
        if ( SepTokenLeakMethodWatch == 13
          && KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
        {
          *(_DWORD *)(MEMORY[0x478] + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
          v57 = *(_DWORD *)(MEMORY[0x478] + 280LL);
          if ( v57 >= SepTokenLeakBreakCount )
          {
            DbgPrint("\nToken number 0x%x = 0x%p\n", v57, 0LL);
            __debugbreak();
          }
        }
      }
      *a8 = 0LL;
      return v49;
    }
    else
    {
      ExReleaseResourceLite(v48);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(0LL);
      return v49;
    }
  }
}
