/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40
 * Callers:
 *     NtQueryKey @ 0x140849760 (NtQueryKey.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1409790C0 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x140AE3CA0 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403EBC80 (SepCreateAccessStateFromSubjectContext.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x14046DC50 (VrpOriginalKeyNameParameterCleanup.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpReparseToVirtualPath @ 0x1407DBB68 (CmpReparseToVirtualPath.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x14090D640 (CmpIsKcbInsideVirtualizedHive.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     CmVirtualKCBToRealPath @ 0x140A5F3C0 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
 *     CmObReferenceObjectByName @ 0x140BB9CF8 (CmObReferenceObjectByName.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(PVOID *a1, char a2, int a3, PVOID *a4)
{
  int v6; // ebx
  _QWORD *v7; // r13
  PVOID v8; // r8
  __int64 v9; // r9
  char v10; // r12
  ULONG_PTR v11; // r15
  int v12; // edx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r14
  _QWORD *v15; // rsi
  ULONG_PTR v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  int v20; // edi
  char v21; // r15
  _KPROCESS *v22; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v24; // rtt
  wchar_t *Buffer; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rax
  void (__fastcall *v29)(__int64, _QWORD *); // rax
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // edx
  int v37; // r15d
  _DWORD *v38; // rdi
  int v39; // r9d
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  char v46; // al
  char v47; // [rsp+48h] [rbp-C0h]
  char v48; // [rsp+49h] [rbp-BFh]
  char v50; // [rsp+4Bh] [rbp-BDh]
  PVOID v51; // [rsp+50h] [rbp-B8h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *Object; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object_8[2]; // [rsp+68h] [rbp-A0h]
  __int64 v55; // [rsp+78h] [rbp-90h]
  PVOID *v56; // [rsp+80h] [rbp-88h]
  PVOID *v57; // [rsp+88h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _KTHREAD *v59; // [rsp+A0h] [rbp-68h]
  _DWORD v60[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-50h]
  UNICODE_STRING *p_DestinationString; // [rsp+C0h] [rbp-48h]
  int v63; // [rsp+C8h] [rbp-40h]
  int v64; // [rsp+CCh] [rbp-3Ch]
  __int128 v65; // [rsp+D0h] [rbp-38h]
  __int128 v66; // [rsp+E0h] [rbp-28h]
  __int128 v67; // [rsp+F0h] [rbp-18h]
  _DWORD v68[4]; // [rsp+108h] [rbp+0h] BYREF
  int v69; // [rsp+118h] [rbp+10h]
  __int64 v70; // [rsp+150h] [rbp+48h]
  ULONG_PTR BugCheckParameter2; // [rsp+160h] [rbp+58h]
  int v72; // [rsp+168h] [rbp+60h]
  _QWORD v73[30]; // [rsp+198h] [rbp+90h] BYREF
  __int128 v74; // [rsp+288h] [rbp+180h]
  __int128 v75; // [rsp+298h] [rbp+190h]
  __int128 v76; // [rsp+2A8h] [rbp+1A0h]
  __int128 v77; // [rsp+2B8h] [rbp+1B0h]
  __int128 v78; // [rsp+2C8h] [rbp+1C0h]
  struct _KAPC_STATE ApcState; // [rsp+2D8h] [rbp+1D0h] BYREF
  _QWORD v80[20]; // [rsp+308h] [rbp+200h] BYREF
  _QWORD v81[28]; // [rsp+3A8h] [rbp+2A0h] BYREF

  HIDWORD(TokenInformation) = a3;
  v56 = a1;
  DestinationString = 0LL;
  v57 = a4;
  memset_0(v80, 0, sizeof(v80));
  memset_0(v81, 0, sizeof(v81));
  v6 = 0;
  v50 = 0;
  v60[1] = 0;
  v64 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = *a1;
  v51 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v68, 0, 0x1D0uLL);
  v72 = -1;
  *a4 = 0LL;
  v73[1] = v73;
  v10 = 0;
  v74 = 0LL;
  v48 = 0;
  v73[0] = v73;
  v75 = 0LL;
  v47 = 0;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v11 = v7[1];
  *(_OWORD *)Object_8 = 0LL;
  if ( *(_WORD *)(v11 + 66) || (v7[6] & 0x10) != 0 || !CmpVEEnabled )
    goto LABEL_76;
  v12 = *(_DWORD *)(v11 + 184);
  if ( (v12 & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v11) )
  {
    v48 = 1;
    goto LABEL_7;
  }
  if ( (v12 & 0x1000000) == 0 )
  {
LABEL_76:
    v20 = 0;
    goto LABEL_33;
  }
  v10 = 1;
  v47 = 1;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v55 = *(_QWORD *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v59 = KeGetCurrentThread();
    --v59->KernelApcDisable;
    v33 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v33,
        (__int64)&CurrentThread[1].WaitBlockList);
    if ( v33 )
      *((_BYTE *)v33 + 10) = 1;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v15 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v15, 0x75536553u);
      LODWORD(Object_8[0]) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v15 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread();
    v10 = v47;
  }
  else
  {
    v15 = 0LL;
  }
  Object = v15;
  v16 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
  Object_8[1] = (PVOID)v16;
  if ( SeTokenLeakTracking )
  {
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 1144) + 284LL));
      if ( v16 == SepTokenLeakToken )
        __debugbreak();
      v15 = Object;
    }
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15[143] + 284LL));
      v15 = Object;
      if ( Object == (_QWORD *)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v66 = 0LL;
  v67 = 0LL;
  if ( !CmpVEEnabled )
    goto LABEL_18;
  v19 = v69;
  if ( (v69 & 1) != 0 )
  {
    if ( (v69 & 2) != 0 )
      goto LABEL_18;
  }
  else
  {
    if ( !a2 )
    {
LABEL_18:
      v20 = 0;
LABEL_19:
      v21 = 0;
      goto LABEL_20;
    }
    LODWORD(TokenInformation) = 0;
    if ( v15 )
    {
LABEL_16:
      v69 = v19 | 3;
      goto LABEL_18;
    }
    SeQueryInformationToken(Object_8[1], TokenVirtualizationEnabled, &TokenInformation);
    if ( !(_DWORD)TokenInformation )
    {
      v19 = v69;
      goto LABEL_16;
    }
    v69 |= 5u;
  }
  if ( v48 && (*(_DWORD *)(v11 + 184) & 0x800000) == 0 )
    goto LABEL_18;
  CmpAttachToRegistryProcess(&ApcState);
  v50 = 1;
  CmpLockRegistry(v34);
  CmpLockKcbShared(v11);
  if ( !v48 )
  {
    if ( (int)CmVirtualKCBToRealPath(v11, &DestinationString) >= 0 )
      goto LABEL_64;
    goto LABEL_98;
  }
  v20 = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
  if ( v20 < 0 )
  {
LABEL_99:
    CmpUnlockKcb(v11);
    v21 = 0;
LABEL_75:
    CmpUnlockRegistry(v43);
    goto LABEL_20;
  }
  v46 = CmpReparseToVirtualPath(v11, v45, (__int64)&Object, &DestinationString);
  v15 = Object;
  if ( !v46 )
  {
LABEL_98:
    v20 = 0;
    goto LABEL_99;
  }
LABEL_64:
  CmpUnlockKcb(v11);
  CmpUnlockRegistry(v35);
  v36 = 8;
  v37 = HIDWORD(TokenInformation);
  v68[0] = 8;
  if ( !HIDWORD(TokenInformation) )
    v36 = 4104;
  v70 = *((_QWORD *)*v56 + 7);
  v38 = (_DWORD *)CmKeyObjectType + 19;
  v68[0] = v36;
  if ( v15 )
    PsReferenceSiloContext(v15);
  PsReferenceSiloContext(Object_8[1]);
  v20 = SepCreateAccessStateFromSubjectContext(&Object, v80, v81, v37, v38);
  if ( v20 < 0 )
  {
    if ( v15 )
      ObfDereferenceObject(v15);
    ObfDereferenceObject(Object_8[1]);
    goto LABEL_19;
  }
  v40 = 1600;
  v60[0] = 48;
  v61 = 0LL;
  v21 = 1;
  v65 = 0LL;
  if ( a2 != 1 )
    v40 = 576;
  v63 = v40;
  p_DestinationString = &DestinationString;
  v41 = CmObReferenceObjectByName(
          (unsigned int)v60,
          (unsigned int)v80,
          HIDWORD(TokenInformation),
          v39,
          0,
          (__int64)v68,
          (__int64)&v51);
  v20 = v41;
  if ( v41 >= 0 )
  {
    CmpLockRegistry(v42);
    v43 = *((_QWORD *)v51 + 1);
    if ( !*(_WORD *)(v43 + 66) )
    {
      CmpUnlockRegistry(v43);
      if ( v48 )
      {
        *v57 = v51;
      }
      else
      {
        *v56 = v51;
        *v57 = v7;
      }
      v51 = 0LL;
      v20 = 0;
LABEL_103:
      SeDeleteAccessState((__int64)v80, v17, v18, v9);
      goto LABEL_23;
    }
    if ( v10 )
      v20 = 0;
    goto LABEL_75;
  }
  if ( !v10 )
    v6 = v41;
  v20 = v6;
LABEL_20:
  if ( v51 )
    ObfDereferenceObject(v51);
  if ( v21 )
    goto LABEL_103;
LABEL_23:
  if ( v50 )
    CmpDetachFromRegistryProcess(&ApcState);
  if ( SeTokenLeakTracking )
  {
    if ( Object_8[1] )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Object_8[1] + 143) + 284LL));
      if ( Object_8[1] == (PVOID)SepTokenLeakToken )
        __debugbreak();
      v15 = Object;
    }
    if ( v15 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v15[143] + 284LL));
      if ( Object == (_QWORD *)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v22 = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&v22[1].ActiveProcessors);
  ActiveProcessors = (signed __int64)v22[1].ActiveProcessors;
  do
  {
    v8 = Object_8[1];
    if ( (ActiveProcessors ^ (unsigned __int64)Object_8[1]) >= 0xF )
    {
      ObfDereferenceObjectWithTag(Object_8[1], 0x75536553u);
      goto LABEL_31;
    }
    v24 = ActiveProcessors;
    ActiveProcessors = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&v22[1].ActiveProcessors,
                         ActiveProcessors + 1,
                         ActiveProcessors);
  }
  while ( v24 != ActiveProcessors );
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
    CmpUnlockRegistry(v44);
  }
  v26 = (_QWORD *)v73[0];
  v27 = *(_QWORD *)v73[0];
  if ( *(_QWORD **)(v73[0] + 8LL) != v73 || *(_QWORD *)(v27 + 8) != v73[0] )
    goto LABEL_58;
  v73[0] = *(_QWORD *)v73[0];
  *(_QWORD *)(v27 + 8) = v73;
  if ( v26 != v73 )
  {
    while ( 1 )
    {
      v29 = (void (__fastcall *)(__int64, _QWORD *))v26[4];
      if ( v29 )
      {
        v30 = v26 + 6;
        v31 = (__int64)(v26 + 2);
        if ( v29 == VrpOriginalKeyNameParameterCleanup )
          VrpOriginalKeyNameParameterCleanup(v31, v30);
        else
          guard_dispatch_icall_no_overrides(v31, v30, v8, v9);
      }
      CmpFreeTransientPoolWithTag(v26, 0x50454D43u);
      v26 = (_QWORD *)v73[0];
      v32 = *(_QWORD *)v73[0];
      if ( *(_QWORD **)(v73[0] + 8LL) != v73 || *(_QWORD *)(v32 + 8) != v73[0] )
        break;
      v73[0] = *(_QWORD *)v73[0];
      *(_QWORD *)(v32 + 8) = v73;
      if ( v26 == v73 )
        return (unsigned int)v20;
    }
LABEL_58:
    __fastfail(3u);
  }
  return (unsigned int)v20;
}
