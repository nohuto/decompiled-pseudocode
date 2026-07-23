/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560
 * Callers:
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1409618D0 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x140AE5580 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E0270 (SepCreateAccessStateFromSubjectContext.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x140468510 (VrpOriginalKeyNameParameterCleanup.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpReparseToVirtualPath @ 0x1407DC0B8 (CmpReparseToVirtualPath.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x1408E4D60 (CmpIsKcbInsideVirtualizedHive.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     CmVirtualKCBToRealPath @ 0x140A57538 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmObReferenceObjectByName @ 0x140BBBCF8 (CmObReferenceObjectByName.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(PVOID *a1, char a2, int a3, PVOID *a4)
{
  int v6; // ebx
  _QWORD *v7; // r13
  char v8; // r12
  ULONG_PTR v9; // r15
  int v10; // edx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r14
  _QWORD *v13; // rsi
  ULONG_PTR v14; // rax
  int v15; // eax
  int v16; // edi
  char v17; // r15
  _KPROCESS *v18; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v20; // rtt
  wchar_t *Buffer; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rax
  void (__fastcall *v25)(__int64, _QWORD *); // rax
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  char *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // edx
  int v33; // r15d
  _DWORD *v34; // rdi
  int v35; // r9d
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  char v42; // al
  char v43; // [rsp+48h] [rbp-C0h]
  char v44; // [rsp+49h] [rbp-BFh]
  char v46; // [rsp+4Bh] [rbp-BDh]
  PVOID v47; // [rsp+50h] [rbp-B8h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *Object; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object_8[2]; // [rsp+68h] [rbp-A0h]
  __int64 v51; // [rsp+78h] [rbp-90h]
  PVOID *v52; // [rsp+80h] [rbp-88h]
  PVOID *v53; // [rsp+88h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _KTHREAD *v55; // [rsp+A0h] [rbp-68h]
  _DWORD v56[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-50h]
  UNICODE_STRING *p_DestinationString; // [rsp+C0h] [rbp-48h]
  int v59; // [rsp+C8h] [rbp-40h]
  int v60; // [rsp+CCh] [rbp-3Ch]
  __int128 v61; // [rsp+D0h] [rbp-38h]
  __int128 v62; // [rsp+E0h] [rbp-28h]
  __int128 v63; // [rsp+F0h] [rbp-18h]
  _DWORD v64[4]; // [rsp+108h] [rbp+0h] BYREF
  int v65; // [rsp+118h] [rbp+10h]
  __int64 v66; // [rsp+150h] [rbp+48h]
  ULONG_PTR BugCheckParameter2; // [rsp+160h] [rbp+58h]
  int v68; // [rsp+168h] [rbp+60h]
  _QWORD v69[30]; // [rsp+198h] [rbp+90h] BYREF
  __int128 v70; // [rsp+288h] [rbp+180h]
  __int128 v71; // [rsp+298h] [rbp+190h]
  __int128 v72; // [rsp+2A8h] [rbp+1A0h]
  __int128 v73; // [rsp+2B8h] [rbp+1B0h]
  __int128 v74; // [rsp+2C8h] [rbp+1C0h]
  struct _KAPC_STATE ApcState; // [rsp+2D8h] [rbp+1D0h] BYREF
  _QWORD v76[20]; // [rsp+308h] [rbp+200h] BYREF
  _QWORD v77[28]; // [rsp+3A8h] [rbp+2A0h] BYREF

  HIDWORD(TokenInformation) = a3;
  v52 = a1;
  DestinationString = 0LL;
  v53 = a4;
  memset_0(v76, 0, sizeof(v76));
  memset_0(v77, 0, sizeof(v77));
  v6 = 0;
  v46 = 0;
  v56[1] = 0;
  v60 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = *a1;
  v47 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v64, 0, 0x1D0uLL);
  v68 = -1;
  *a4 = 0LL;
  v69[1] = v69;
  v8 = 0;
  v70 = 0LL;
  v44 = 0;
  v69[0] = v69;
  v71 = 0LL;
  v43 = 0;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v9 = v7[1];
  *(_OWORD *)Object_8 = 0LL;
  if ( *(_WORD *)(v9 + 66) || (v7[6] & 0x10) != 0 || !CmpVEEnabled )
    goto LABEL_76;
  v10 = *(_DWORD *)(v9 + 184);
  if ( (v10 & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v9) )
  {
    v44 = 1;
    goto LABEL_7;
  }
  if ( (v10 & 0x1000000) == 0 )
  {
LABEL_76:
    v16 = 0;
    goto LABEL_33;
  }
  v8 = 1;
  v43 = 1;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v51 = *(_QWORD *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v55 = KeGetCurrentThread();
    --v55->KernelApcDisable;
    v29 = (char *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v29,
        (__int64)&CurrentThread[1].WaitBlockList);
    if ( v29 )
      v29[10] = 1;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v13 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v13, 0x75536553u);
      LODWORD(Object_8[0]) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v13 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread();
    v8 = v43;
  }
  else
  {
    v13 = 0LL;
  }
  Object = v13;
  v14 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
  Object_8[1] = (PVOID)v14;
  if ( SeTokenLeakTracking )
  {
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 1144) + 284LL));
      if ( v14 == SepTokenLeakToken )
        __debugbreak();
      v13 = Object;
    }
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13[143] + 284LL));
      v13 = Object;
      if ( Object == (_QWORD *)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v62 = 0LL;
  v63 = 0LL;
  if ( !CmpVEEnabled )
    goto LABEL_18;
  v15 = v65;
  if ( (v65 & 1) != 0 )
  {
    if ( (v65 & 2) != 0 )
      goto LABEL_18;
  }
  else
  {
    if ( !a2 )
    {
LABEL_18:
      v16 = 0;
LABEL_19:
      v17 = 0;
      goto LABEL_20;
    }
    LODWORD(TokenInformation) = 0;
    if ( v13 )
    {
LABEL_16:
      v65 = v15 | 3;
      goto LABEL_18;
    }
    SeQueryInformationToken(Object_8[1], TokenVirtualizationEnabled, &TokenInformation);
    if ( !(_DWORD)TokenInformation )
    {
      v15 = v65;
      goto LABEL_16;
    }
    v65 |= 5u;
  }
  if ( v44 && (*(_DWORD *)(v9 + 184) & 0x800000) == 0 )
    goto LABEL_18;
  CmpAttachToRegistryProcess(&ApcState);
  v46 = 1;
  CmpLockRegistry(v30);
  CmpLockKcbShared(v9);
  if ( !v44 )
  {
    if ( (int)CmVirtualKCBToRealPath(v9, &DestinationString) >= 0 )
      goto LABEL_64;
    goto LABEL_98;
  }
  v16 = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
  if ( v16 < 0 )
  {
LABEL_99:
    CmpUnlockKcb(v9);
    v17 = 0;
LABEL_75:
    CmpUnlockRegistry(v39);
    goto LABEL_20;
  }
  v42 = CmpReparseToVirtualPath(v9, v41, (__int64)&Object, &DestinationString);
  v13 = Object;
  if ( !v42 )
  {
LABEL_98:
    v16 = 0;
    goto LABEL_99;
  }
LABEL_64:
  CmpUnlockKcb(v9);
  CmpUnlockRegistry(v31);
  v32 = 8;
  v33 = HIDWORD(TokenInformation);
  v64[0] = 8;
  if ( !HIDWORD(TokenInformation) )
    v32 = 4104;
  v66 = *((_QWORD *)*v52 + 7);
  v34 = (_DWORD *)CmKeyObjectType + 19;
  v64[0] = v32;
  if ( v13 )
    PsReferenceSiloContext(v13);
  PsReferenceSiloContext(Object_8[1]);
  v16 = SepCreateAccessStateFromSubjectContext(&Object, v76, v77, v33, v34);
  if ( v16 < 0 )
  {
    if ( v13 )
      ObfDereferenceObject(v13);
    ObfDereferenceObject(Object_8[1]);
    goto LABEL_19;
  }
  v36 = 1600;
  v56[0] = 48;
  v57 = 0LL;
  v17 = 1;
  v61 = 0LL;
  if ( a2 != 1 )
    v36 = 576;
  v59 = v36;
  p_DestinationString = &DestinationString;
  v37 = CmObReferenceObjectByName(
          (unsigned int)v56,
          (unsigned int)v76,
          HIDWORD(TokenInformation),
          v35,
          0,
          (__int64)v64,
          (__int64)&v47);
  v16 = v37;
  if ( v37 >= 0 )
  {
    CmpLockRegistry(v38);
    v39 = *((_QWORD *)v47 + 1);
    if ( !*(_WORD *)(v39 + 66) )
    {
      CmpUnlockRegistry(v39);
      if ( v44 )
      {
        *v53 = v47;
      }
      else
      {
        *v52 = v47;
        *v53 = v7;
      }
      v47 = 0LL;
      v16 = 0;
LABEL_103:
      SeDeleteAccessState((__int64)v76);
      goto LABEL_23;
    }
    if ( v8 )
      v16 = 0;
    goto LABEL_75;
  }
  if ( !v8 )
    v6 = v37;
  v16 = v6;
LABEL_20:
  if ( v47 )
    ObfDereferenceObject(v47);
  if ( v17 )
    goto LABEL_103;
LABEL_23:
  if ( v46 )
    CmpDetachFromRegistryProcess(&ApcState);
  if ( SeTokenLeakTracking )
  {
    if ( Object_8[1] )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Object_8[1] + 143) + 284LL));
      if ( Object_8[1] == (PVOID)SepTokenLeakToken )
        __debugbreak();
      v13 = Object;
    }
    if ( v13 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v13[143] + 284LL));
      if ( Object == (_QWORD *)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v18 = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&v18[1].ActiveProcessors);
  ActiveProcessors = (signed __int64)v18[1].ActiveProcessors;
  do
  {
    if ( (ActiveProcessors ^ (unsigned __int64)Object_8[1]) >= 0xF )
    {
      ObfDereferenceObjectWithTag(Object_8[1], 0x75536553u);
      goto LABEL_31;
    }
    v20 = ActiveProcessors;
    ActiveProcessors = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&v18[1].ActiveProcessors,
                         ActiveProcessors + 1,
                         ActiveProcessors);
  }
  while ( v20 != ActiveProcessors );
  if ( ObpTraceFlags )
    ObpPushStackInfo((__int64)Object_8[1] - 48, 0, 1u, 0x75536553u);
LABEL_31:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x75536553u);
LABEL_33:
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( BugCheckParameter2 )
  {
    CmpLockRegistry(Buffer);
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
    CmpUnlockRegistry(v40);
  }
  v22 = (_QWORD *)v69[0];
  v23 = *(_QWORD *)v69[0];
  if ( *(_QWORD **)(v69[0] + 8LL) != v69 || *(_QWORD *)(v23 + 8) != v69[0] )
    goto LABEL_58;
  v69[0] = *(_QWORD *)v69[0];
  *(_QWORD *)(v23 + 8) = v69;
  if ( v22 != v69 )
  {
    while ( 1 )
    {
      v25 = (void (__fastcall *)(__int64, _QWORD *))v22[4];
      if ( v25 )
      {
        v26 = v22 + 6;
        v27 = (__int64)(v22 + 2);
        if ( v25 == VrpOriginalKeyNameParameterCleanup )
          VrpOriginalKeyNameParameterCleanup(v27, v26);
        else
          guard_dispatch_icall_no_overrides(v27, v26);
      }
      CmpFreeTransientPoolWithTag(v22, 0x50454D43u);
      v22 = (_QWORD *)v69[0];
      v28 = *(_QWORD *)v69[0];
      if ( *(_QWORD **)(v69[0] + 8LL) != v69 || *(_QWORD *)(v28 + 8) != v69[0] )
        break;
      v69[0] = *(_QWORD *)v69[0];
      *(_QWORD *)(v28 + 8) = v69;
      if ( v22 == v69 )
        return (unsigned int)v16;
    }
LABEL_58:
    __fastfail(3u);
  }
  return (unsigned int)v16;
}
