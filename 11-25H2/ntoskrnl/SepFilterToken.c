/*
 * XREFs of SepFilterToken @ 0x140997EFC
 * Callers:
 *     SeFilterToken @ 0x1407803A0 (SeFilterToken.c)
 *     NtFilterToken @ 0x1409970E0 (NtFilterToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140290A60 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlWalkFrameChain @ 0x140348060 (RtlWalkFrameChain.c)
 *     RtlSidHashInitialize @ 0x14036C330 (RtlSidHashInitialize.c)
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     PsGetSessionObjectById @ 0x1403D6D20 (PsGetSessionObjectById.c)
 *     SepDuplicateLogonSessionReference @ 0x140440020 (SepDuplicateLogonSessionReference.c)
 *     SepReferenceLuidToIndexEntry @ 0x140452C40 (SepReferenceLuidToIndexEntry.c)
 *     SeIsSystemContext @ 0x1405FCBFC (SeIsSystemContext.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SepModifyTokenPolicyCounter @ 0x140780880 (SepModifyTokenPolicyCounter.c)
 *     SepAddTokenLogonSession @ 0x1407841A0 (SepAddTokenLogonSession.c)
 *     RtlIsSandboxedToken @ 0x140840280 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     RtlCopySidAndAttributesArray @ 0x140998A50 (RtlCopySidAndAttributesArray.c)
 *     RtlIsPackageSid @ 0x140998B14 (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x140998B5C (RtlIsCapabilitySid.c)
 *     SepSetTokenTrust @ 0x140998BB0 (SepSetTokenTrust.c)
 *     SepSetTokenPackage @ 0x140998C54 (SepSetTokenPackage.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140998D28 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x140998F08 (SepSidInSidAndAttributes.c)
 *     SepDuplicateTokenUserAndGroups @ 0x140999B80 (SepDuplicateTokenUserAndGroups.c)
 *     SepDuplicateTokenClaims @ 0x140999CB8 (SepDuplicateTokenClaims.c)
 *     SepSetTokenCapabilities @ 0x140A08CB8 (SepSetTokenCapabilities.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A098B8 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepStopReferencingLogonSession @ 0x140A744C0 (SepStopReferencingLogonSession.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepFilterToken(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        _QWORD *a9,
        int a10,
        char **a11)
{
  PVOID *v13; // rdi
  unsigned int i; // ebx
  __int64 Pool2; // rax
  PVOID *v16; // r14
  struct _ERESOURCE *v17; // r15
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // eax
  int v21; // r8d
  ULONG v22; // r13d
  signed int v23; // ebx
  int v24; // eax
  _QWORD *v25; // rbx
  _QWORD *v26; // rdx
  _BYTE *v27; // r15
  struct _KTHREAD *CurrentThread; // rax
  char *v29; // rdi
  int v30; // ebx
  void *v31; // rcx
  _DWORD *v32; // r12
  unsigned int v33; // eax
  __int64 v34; // rcx
  _DWORD *v35; // rcx
  _SID_AND_ATTRIBUTES *v36; // r14
  int v37; // eax
  unsigned int v38; // r12d
  _SID_AND_ATTRIBUTES *v39; // r12
  ULONG v40; // r8d
  NTSTATUS v41; // eax
  __int64 v42; // r8
  unsigned int v43; // r13d
  _SID_AND_ATTRIBUTES *v44; // r14
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // r14d
  __int64 v49; // rax
  char *v50; // r15
  char v51; // al
  __int64 v52; // rax
  unsigned int v53; // r12d
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rdx
  int v59; // eax
  struct _ERESOURCE *v60; // rcx
  int v61; // r14d
  char v62; // bl
  _SID_AND_ATTRIBUTES *v63; // rcx
  bool v65; // zf
  PVOID *v66; // rcx
  ULONG v67; // eax
  void *v68; // rbx
  __int64 v69; // rdx
  _KPROCESS *Process; // rcx
  struct _KTHREAD *v71; // rax
  PERESOURCE *PrimaryToken; // rbx
  int v73; // edx
  PSID SidArea; // [rsp+28h] [rbp-E0h]
  __int64 v75; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  ULONG SidAreaSize[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v78; // [rsp+70h] [rbp-98h] BYREF
  PSID RemainingSidArea; // [rsp+78h] [rbp-90h] BYREF
  __int64 v80; // [rsp+80h] [rbp-88h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-80h] BYREF
  __int128 v82; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v83; // [rsp+B8h] [rbp-50h]
  __int128 v84; // [rsp+C8h] [rbp-40h]
  int v85; // [rsp+D8h] [rbp-30h]
  int v86; // [rsp+DCh] [rbp-2Ch]
  __int64 v87; // [rsp+E0h] [rbp-28h]
  __int64 v88; // [rsp+E8h] [rbp-20h]
  int v89; // [rsp+F0h] [rbp-18h]
  int v90; // [rsp+F4h] [rbp-14h]
  __int128 v91; // [rsp+F8h] [rbp-10h]
  struct _SECURITY_SUBJECT_CONTEXT v92; // [rsp+108h] [rbp+0h] BYREF

  Object = 0LL;
  v86 = 0;
  v90 = 0;
  LOBYTE(SidAreaSize[0]) = KeGetCurrentThread()->PreviousMode;
  v13 = 0LL;
  LOWORD(v75) = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  memset(&v92, 0, sizeof(v92));
  if ( (a3 & 8) != 0 && (*(_DWORD *)(a1 + 200) & 0x58) != 0 )
    return 3221225485LL;
  for ( i = 0; i < a8; ++i )
  {
    if ( RtlIsPackageSid((PSID)a9[2 * i]) || RtlIsCapabilitySid((PSID)a9[2 * i]) )
      return 3221225485LL;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v16 = (PVOID *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = 0;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
  *(_DWORD *)(Pool2 + 24) = 0;
  *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
  *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
  if ( SeTokenLeakTracking )
  {
    v13 = (PVOID *)ExAllocatePool2(0x100uLL);
    if ( !v13 )
    {
      v66 = v16;
      goto LABEL_115;
    }
  }
  v17 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL);
  if ( !v17 )
  {
    ExFreePoolWithTag(v16, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v66 = v13;
LABEL_115:
    ExFreePoolWithTag(v66, 0);
    return 3221225626LL;
  }
  v18 = *(_DWORD *)(a1 + 132);
  v19 = v18 + a10;
  if ( v18 + a10 < v18 )
  {
    v23 = -1073741675;
LABEL_73:
    ExFreePoolWithTag(v17, 0);
    ExFreePoolWithTag(v16, 0);
    v65 = SeTokenLeakTracking == 0;
    goto LABEL_74;
  }
  v20 = v19 + 4;
  v21 = -1;
  v22 = -1;
  if ( v19 + 4 >= v19 )
    v22 = v19 + 4;
  v23 = v20 < v19 ? 0xC0000095 : 0;
  SidAreaSize[1] = v22;
  if ( v20 < v19 )
    goto LABEL_73;
  if ( v22 < 0xFFFFFB70 )
    v21 = v22 + 1168;
  v23 = v22 >= 0xFFFFFB70 ? 0xC0000095 : 0;
  if ( v22 + 1168 < 0x490 )
    goto LABEL_73;
  v24 = *(_DWORD *)(a1 + 136);
  v87 = 0LL;
  v89 = 0;
  v88 = 0LL;
  v85 = 48;
  v91 = 0LL;
  v23 = ObCreateObjectEx(a2, SeTokenObjectType, 0, a2, (__int64)SidArea, v21, v24, v21, &Object, 0LL);
  if ( v23 < 0 )
  {
    ExFreePoolWithTag(v17, 0);
    ExFreePoolWithTag(v16, 0);
    v65 = SeTokenLeakTracking == 0;
LABEL_74:
    if ( !v65 )
      ExFreePoolWithTag(v13, 0);
    return (unsigned int)v23;
  }
  v25 = Object;
  *((_QWORD *)Object + 6) = v17;
  ExInitializeResourceLite(v17);
  v26 = Object;
  v25[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  v27 = Object;
  v26[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  v27[204] = 0;
  *((_QWORD *)v27 + 3) = *(_QWORD *)(a1 + 24);
  *(_OWORD *)v27 = *(_OWORD *)a1;
  *((_DWORD *)v27 + 35) = 0;
  *((_DWORD *)v27 + 32) = 0;
  *((_DWORD *)v27 + 33) = v22;
  *((_QWORD *)v27 + 4) = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v27 + 48) = *(_DWORD *)(a1 + 192);
  *((_DWORD *)v27 + 49) = *(_DWORD *)(a1 + 196);
  *((_QWORD *)v27 + 5) = *(_QWORD *)(a1 + 40);
  *((_QWORD *)v27 + 28) = *(_QWORD *)(a1 + 224);
  *((_QWORD *)v27 + 140) = 0LL;
  *((_QWORD *)v27 + 141) = 0LL;
  *((_QWORD *)v27 + 137) = 0LL;
  *((_QWORD *)v27 + 143) = v13;
  *((_DWORD *)v27 + 30) = 0;
  *((_QWORD *)v27 + 145) = 0LL;
  if ( SeTokenLeakTracking )
  {
    v67 = RtlWalkFrameChain(v13 + 5, 0x1Eu, 0);
    if ( KeGetCurrentIrql() < 2u )
      RtlWalkFrameChain((PVOID *)(*((_QWORD *)v27 + 143) + 40LL + 8LL * v67), 30 - v67, 1u);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v29 = (char *)Object;
  *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
  *((_DWORD *)v29 + 36) = *(_DWORD *)(a1 + 144);
  v30 = *(_DWORD *)(a1 + 120);
  if ( *((_DWORD *)v27 + 30) != v30 )
  {
    *((_DWORD *)v27 + 30) = v30;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      v31 = (void *)*((_QWORD *)v27 + 145);
      if ( v31 )
        ObfDereferenceObject(v31);
      *((_QWORD *)v27 + 145) = PsGetSessionObjectById();
    }
  }
  v32 = v29 + 200;
  *((_DWORD *)v27 + 30) = *(_DWORD *)(a1 + 120);
  v33 = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
  *((_DWORD *)v29 + 50) = v33;
  if ( (v33 & 0x1000000) != 0 )
  {
    _InterlockedIncrement(&SepLearningModeTokenCount);
    v29 = (char *)Object;
  }
  *(_OWORD *)(v29 + 88) = *(_OWORD *)(a1 + 88);
  *(_OWORD *)(v29 + 104) = *(_OWORD *)(a1 + 104);
  *((_DWORD *)v29 + 52) = *(_DWORD *)(a1 + 208);
  *((_DWORD *)v29 + 53) = *(_DWORD *)(a1 + 212);
  *((_OWORD *)v29 + 4) = *(_OWORD *)(a1 + 64);
  *((_QWORD *)v29 + 10) = *(_QWORD *)(a1 + 80);
  *((_QWORD *)v29 + 97) = v16;
  if ( v29[119] == 2 )
    SepModifyTokenPolicyCounter((__int64)(v29 + 88), 1);
  *((_QWORD *)v29 + 135) = 0LL;
  *((_QWORD *)v29 + 136) = 0LL;
  *((_QWORD *)v29 + 144) = 0LL;
  *((_QWORD *)v29 + 99) = 0LL;
  *((_QWORD *)v29 + 98) = 0LL;
  *((_DWORD *)v29 + 200) = 0;
  memset_0(v29 + 808, 0, 0x110uLL);
  *((_QWORD *)v29 + 22) = 0LL;
  *((_QWORD *)v29 + 138) = 0LL;
  *((_QWORD *)v29 + 139) = 0LL;
  *((_QWORD *)v29 + 142) = 0LL;
  v23 = SepDuplicateLogonSessionReference((__int64)v29, a1);
  if ( v23 < 0 )
    goto LABEL_77;
  v34 = *(_QWORD *)(a1 + 1136);
  if ( v34 )
    SepReferenceLuidToIndexEntry(v34);
  *((_QWORD *)v29 + 142) = *(_QWORD *)(a1 + 1136);
  v35 = *(_DWORD **)(a1 + 776);
  if ( *v35 )
  {
    v23 = AuthzBasepDuplicateSecurityAttributes((__int64)v35, *((_QWORD *)v29 + 97), 0);
    if ( v23 < 0 )
      goto LABEL_77;
  }
  if ( *(_QWORD *)(a1 + 1096) )
  {
    v23 = SepDuplicateTokenClaims(a1, v29);
    if ( v23 < 0 )
      goto LABEL_77;
  }
  if ( SeTokenLeakTracking )
  {
    **((_QWORD **)v27 + 143) = KeGetCurrentThread()[1].CycleTime;
    *(_QWORD *)(*((_QWORD *)v27 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    *(_DWORD *)(*((_QWORD *)v27 + 143) + 32LL) = 15;
    *(_DWORD *)(*((_QWORD *)v27 + 143) + 280LL) = 0;
    *(_DWORD *)(*((_QWORD *)v27 + 143) + 284LL) = 0;
    v69 = *((_QWORD *)v27 + 143);
    v29 = (char *)Object;
    Process = KeGetCurrentThread()->ApcState.Process;
    *(_QWORD *)(v69 + 16) = Process[1].SecureState.SecureHandle;
    *(_DWORD *)(v69 + 24) = Process[1].KernelWaitTime;
    *(_WORD *)(v69 + 28) = WORD2(Process[1].KernelWaitTime);
    *(_BYTE *)(v69 + 30) = BYTE6(Process[1].KernelWaitTime);
    SepAddTokenLogonSession((__int64)v29);
  }
  if ( (a3 & 2) != 0 )
  {
    v68 = (void *)PsReferencePrimaryTokenWithTag((__int64)KeGetCurrentThread()->ApcState.Process, 0x746C6644u);
    if ( (int)SeIsSystemContext(v68, &v75) >= 0 && (_BYTE)v75 )
      *v32 |= 0x40u;
    ObfDereferenceObject(v68);
    v29 = (char *)Object;
  }
  v36 = (_SID_AND_ATTRIBUTES *)(v29 + 1168);
  v37 = ((_BYTE)v29 - 112) & 7;
  if ( (((_BYTE)v29 - 112) & 7) != 0 )
  {
    v36 = (_SID_AND_ATTRIBUTES *)((char *)v36 + (unsigned int)(8 - v37));
    SidAreaSize[1] = v22 - (8 - v37);
  }
  v38 = a8;
  if ( *(_DWORD *)(a1 + 128) > a8 )
    v38 = *(_DWORD *)(a1 + 128);
  v39 = &v36[*(_DWORD *)(a1 + 124) + v38];
  *((_QWORD *)v29 + 19) = v36;
  RemainingSidArea = v39;
  if ( SepTokenSidSharingEnabled )
  {
    v23 = SepDuplicateTokenUserAndGroups(a1, v29);
    if ( v23 < 0 )
    {
      *((_QWORD *)v29 + 19) = 0LL;
LABEL_77:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
LABEL_79:
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v29);
      return (unsigned int)v23;
    }
  }
  else
  {
    v40 = SidAreaSize[1];
    *((_DWORD *)v29 + 31) = *(_DWORD *)(a1 + 124);
    v41 = RtlCopySidAndAttributesArray(
            *(_DWORD *)(a1 + 124),
            *(PSID_AND_ATTRIBUTES *)(a1 + 152),
            v40,
            v36,
            v39,
            &RemainingSidArea,
            &SidAreaSize[1]);
    v39 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
    v23 = v41;
  }
  v43 = 0;
  v44 = (_SID_AND_ATTRIBUTES *)((char *)v36 + (unsigned int)(16 * *(_DWORD *)(a1 + 124)));
  *((_QWORD *)v29 + 20) = v44;
  if ( a8 )
  {
    v45 = a9;
    v80 = (__int64)a9;
    do
    {
      v46 = *(unsigned int *)(a1 + 128);
      if ( !(_DWORD)v46 || (unsigned __int8)SepSidInSidAndAttributes(*(_QWORD *)(a1 + 160), v46, v42, *v45) )
      {
        v23 = RtlCopySidAndAttributesArray(
                1u,
                (PSID_AND_ATTRIBUTES)&a9[2 * v43],
                SidAreaSize[1],
                v44,
                v39,
                &RemainingSidArea,
                &SidAreaSize[1]);
        v39 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
        ++v44;
        *(_DWORD *)(*((_QWORD *)v29 + 20) + 16LL * (unsigned int)(*((_DWORD *)v27 + 32))++ + 8) = 7;
      }
      ++v43;
      v45 = (_QWORD *)(v80 + 16);
      v80 += 16LL;
    }
    while ( v43 < a8 );
  }
  v47 = *(_QWORD *)(a1 + 184);
  v48 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v47 )
    v48 += *(unsigned __int16 *)(v47 + 2);
  v49 = ExAllocatePool2(0x100uLL);
  *((_QWORD *)v29 + 22) = v49;
  v50 = (char *)v49;
  if ( !v49 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    v23 = -1073741670;
    goto LABEL_79;
  }
  if ( *(_DWORD *)(a1 + 128) && !*((_DWORD *)v29 + 32) )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    v23 = -1073741811;
    goto LABEL_79;
  }
  v51 = 0;
  if ( *((_DWORD *)v29 + 32) )
  {
    *((_DWORD *)v29 + 50) |= 0x810u;
    v51 = 1;
  }
  else
  {
    *((_QWORD *)v29 + 20) = 0LL;
  }
  if ( (a3 & 8) != 0 )
  {
    *((_DWORD *)v29 + 50) |= 0x18u;
  }
  else if ( !v51 )
  {
    goto LABEL_56;
  }
  v78 = 0LL;
  *(_QWORD *)&v84 = 0LL;
  DWORD2(v84) = 0;
  v52 = *(_QWORD *)(a1 + 216);
  v82 = 0LL;
  v83 = 0LL;
  if ( !*(_QWORD *)(v52 + 48) && (*(_DWORD *)(a1 + 200) & 0x18) == 0 )
  {
    LODWORD(v82) = 48;
    *((_QWORD *)&v82 + 1) = 0LL;
    DWORD2(v83) = 0;
    *(_QWORD *)&v83 = 0LL;
    v84 = 0LL;
    if ( (int)SepDuplicateToken((__int128 *)a1, (__int64)&v82, 0, 1, 0, 0, 0, (__int64 *)&v78) >= 0 )
    {
      if ( (int)SepStopReferencingLogonSession(v78) >= 0 )
      {
        if ( _InterlockedCompareExchange64(
               (volatile signed __int64 *)(*(_QWORD *)(a1 + 216) + 48LL),
               (signed __int64)v78,
               0LL) )
        {
          ObfDereferenceObject(v78);
        }
        v29 = (char *)Object;
      }
      else
      {
        ObfDereferenceObject(v78);
      }
    }
  }
LABEL_56:
  memmove(v50, *(const void **)(a1 + 176), v48);
  if ( *(_QWORD *)(a1 + 184) )
    *((_QWORD *)v29 + 23) = &v50[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
  else
    *((_QWORD *)v29 + 23) = 0LL;
  v53 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
  v54 = *(unsigned int *)(a1 + 800);
  if ( (_DWORD)v54 )
    v23 = SepSetTokenCapabilities(v29, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v54);
  if ( v23 < 0 )
    goto LABEL_77;
  v55 = *(_QWORD *)(a1 + 784);
  if ( v55 )
  {
    v23 = SepSetTokenPackage(v29, v55);
    if ( v23 < 0 )
      goto LABEL_77;
  }
  v56 = *(_QWORD *)(a1 + 1080);
  if ( v56 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v56 + 24)) <= 1 )
      __fastfail(0xEu);
    v29 = (char *)Object;
    *((_QWORD *)Object + 135) = *(_QWORD *)(a1 + 1080);
  }
  v57 = *(_QWORD *)(a1 + 1088);
  if ( v57 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v57 + 24)) <= 1 )
      __fastfail(0xEu);
    v29 = (char *)Object;
    *((_QWORD *)Object + 136) = *(_QWORD *)(a1 + 1088);
  }
  v58 = *(_QWORD *)(a1 + 1152);
  if ( v58 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v58 + 24)) <= 1 )
      __fastfail(0xEu);
    v29 = (char *)Object;
    *((_QWORD *)Object + 144) = *(_QWORD *)(a1 + 1152);
  }
  v59 = SepSetTokenTrust(v29, *(_QWORD *)(a1 + 1104));
  v60 = *(struct _ERESOURCE **)(a1 + 48);
  v61 = v59;
  if ( v59 < 0 )
  {
    ExReleaseResourceLite(v60);
    v23 = v61;
    goto LABEL_79;
  }
  ExReleaseResourceLite(v60);
  KeLeaveCriticalRegion();
  *((_QWORD *)v29 + 21) = &v50[v53];
  SepRemoveDisabledGroupsAndPrivileges((_DWORD)v29, a3, a4, a5, a6, a7);
  RtlSidHashInitialize(*((PSID_AND_ATTRIBUTES *)v29 + 19), *((_DWORD *)v29 + 31), (PSID_AND_ATTRIBUTES_HASH)(v29 + 232));
  RtlSidHashInitialize(*((PSID_AND_ATTRIBUTES *)v29 + 20), *((_DWORD *)v29 + 32), (PSID_AND_ATTRIBUTES_HASH)(v29 + 504));
  SeCaptureSubjectContext(&SubjectContext);
  v62 = SidAreaSize[0];
  v92.PrimaryToken = SubjectContext.PrimaryToken;
  if ( !RtlIsSandboxedToken(&SubjectContext, SidAreaSize[0]) )
    goto LABEL_67;
  if ( !RtlIsSandboxedToken(&v92, v62) )
    goto LABEL_67;
  v71 = KeGetCurrentThread();
  PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
  --v71->KernelApcDisable;
  ExAcquireResourceSharedLite(PrimaryToken[6], 1u);
  v29 = (char *)Object;
  v61 = SepNewTokenAsRestrictedAsProcessToken(Object, PrimaryToken);
  ExReleaseResourceLite(PrimaryToken[6]);
  KeLeaveCriticalRegion();
  if ( v61 < 0 || !BYTE1(v75) )
  {
    ObfDereferenceObject(v29);
    SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
LABEL_67:
    SeReleaseSubjectContext(&SubjectContext);
    v63 = (_SID_AND_ATTRIBUTES *)*((_QWORD *)v29 + 99);
    if ( v63 )
      RtlSidHashInitialize(v63, *((_DWORD *)v29 + 200), (PSID_AND_ATTRIBUTES_HASH)(v29 + 808));
    if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 15 )
    {
      if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
      {
        v29 = (char *)Object;
        *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
        v73 = *(_DWORD *)(*((_QWORD *)v29 + 143) + 280LL);
        if ( v73 >= SepTokenLeakBreakCount )
        {
          DbgPrint("\nToken number 0x%x = 0x%p\n", v73, v29);
          __debugbreak();
        }
      }
      else
      {
        v29 = (char *)Object;
      }
    }
    *a11 = v29;
  }
  return (unsigned int)v61;
}
