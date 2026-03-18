/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x140840E80
 * Callers:
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     NtQueryMultipleValueKey @ 0x140995DD0 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E3020 (SepCreateAccessStateFromSubjectContext.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x14046F730 (VrpOriginalKeyNameParameterCleanup.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpReparseToVirtualPath @ 0x1407CC3A8 (CmpReparseToVirtualPath.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x140841680 (CmpIsKcbInsideVirtualizedHive.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmVirtualKCBToRealPath @ 0x140A5D600 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByName @ 0x140BA9D80 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(PVOID *a1, char a2, int a3, PVOID *a4)
{
  int v6; // ebx
  char v7; // r12
  _QWORD *v8; // r13
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
  _QWORD *v21; // rbx
  __int64 v22; // rax
  void (__fastcall *v24)(__int64, _QWORD *); // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // rsi
  __int64 v28; // rcx
  int v29; // edx
  int v30; // r15d
  _DWORD *v31; // rdi
  int v32; // r9d
  int v33; // eax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  char v38; // al
  char v39; // [rsp+48h] [rbp-C0h]
  char v40; // [rsp+49h] [rbp-BFh]
  PVOID v42; // [rsp+50h] [rbp-B8h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *Object; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object_8[2]; // [rsp+68h] [rbp-A0h]
  __int64 v46; // [rsp+78h] [rbp-90h]
  PVOID *v47; // [rsp+80h] [rbp-88h]
  PVOID *v48; // [rsp+88h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _KTHREAD *v50; // [rsp+A0h] [rbp-68h]
  _DWORD v51[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-50h]
  UNICODE_STRING *p_DestinationString; // [rsp+C0h] [rbp-48h]
  int v54; // [rsp+C8h] [rbp-40h]
  int v55; // [rsp+CCh] [rbp-3Ch]
  __int128 v56; // [rsp+D0h] [rbp-38h]
  __int128 v57; // [rsp+E0h] [rbp-28h]
  __int128 v58; // [rsp+F0h] [rbp-18h]
  _DWORD v59[4]; // [rsp+108h] [rbp+0h] BYREF
  int v60; // [rsp+118h] [rbp+10h]
  __int64 v61; // [rsp+150h] [rbp+48h]
  ULONG_PTR BugCheckParameter2; // [rsp+160h] [rbp+58h]
  int v63; // [rsp+168h] [rbp+60h]
  _QWORD v64[30]; // [rsp+198h] [rbp+90h] BYREF
  __int128 v65; // [rsp+288h] [rbp+180h]
  __int128 v66; // [rsp+298h] [rbp+190h]
  __int128 v67; // [rsp+2A8h] [rbp+1A0h]
  __int128 v68; // [rsp+2B8h] [rbp+1B0h]
  __int128 v69; // [rsp+2C8h] [rbp+1C0h]
  struct _KAPC_STATE ApcState; // [rsp+2D8h] [rbp+1D0h] BYREF
  _QWORD v71[20]; // [rsp+308h] [rbp+200h] BYREF
  _QWORD v72[28]; // [rsp+3A8h] [rbp+2A0h] BYREF

  HIDWORD(TokenInformation) = a3;
  v47 = a1;
  DestinationString = 0LL;
  v48 = a4;
  memset_0(v71, 0, sizeof(v71));
  memset_0(v72, 0, sizeof(v72));
  v6 = 0;
  v51[1] = 0;
  v55 = 0;
  v7 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  v42 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v59, 0, 0x1D0uLL);
  v63 = -1;
  *a4 = 0LL;
  v64[1] = v64;
  v64[0] = v64;
  v65 = 0LL;
  v40 = 0;
  v66 = 0LL;
  v39 = 0;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v9 = v8[1];
  *(_OWORD *)Object_8 = 0LL;
  if ( *(_WORD *)(v9 + 66) || (v8[6] & 0x10) != 0 || !CmpVEEnabled )
    goto LABEL_60;
  v10 = *(_DWORD *)(v9 + 184);
  if ( (v10 & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v9) )
  {
    v40 = 1;
    goto LABEL_7;
  }
  if ( (v10 & 0x1000000) == 0 )
  {
LABEL_60:
    v16 = 0;
    goto LABEL_33;
  }
  v39 = 1;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v46 = *(_QWORD *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v50 = KeGetCurrentThread();
    --v50->KernelApcDisable;
    v27 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v27,
        (unsigned __int64)&CurrentThread[1].WaitBlockList);
    if ( v27 )
      *((_BYTE *)v27 + 10) = 1;
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
    KeLeaveCriticalRegionThread((__int64)v50);
    v7 = 0;
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
  v57 = 0LL;
  v58 = 0LL;
  if ( !CmpVEEnabled )
    goto LABEL_18;
  v15 = v60;
  if ( (v60 & 1) != 0 )
  {
    if ( (v60 & 2) != 0 )
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
      v60 = v15 | 3;
      goto LABEL_18;
    }
    SeQueryInformationToken(Object_8[1], TokenVirtualizationEnabled, &TokenInformation);
    if ( !(_DWORD)TokenInformation )
    {
      v15 = v60;
      goto LABEL_16;
    }
    v60 |= 5u;
  }
  if ( v40 && (*(_DWORD *)(v9 + 184) & 0x800000) == 0 )
    goto LABEL_18;
  CmpAttachToRegistryProcess(&ApcState);
  v7 = 1;
  CmpLockRegistry();
  CmpLockKcbShared(v9);
  if ( !v40 )
  {
    if ( (int)CmVirtualKCBToRealPath(v9, &DestinationString) >= 0 )
      goto LABEL_66;
    goto LABEL_99;
  }
  v16 = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
  if ( v16 < 0 )
  {
LABEL_100:
    CmpUnlockKcb(v9);
    v17 = 0;
LABEL_77:
    CmpUnlockRegistry(v35);
    goto LABEL_20;
  }
  v38 = CmpReparseToVirtualPath(v9, v37, (__int64)&Object, &DestinationString);
  v13 = Object;
  if ( !v38 )
  {
LABEL_99:
    v16 = 0;
    goto LABEL_100;
  }
LABEL_66:
  CmpUnlockKcb(v9);
  CmpUnlockRegistry(v28);
  v29 = 8;
  v30 = HIDWORD(TokenInformation);
  v59[0] = 8;
  if ( !HIDWORD(TokenInformation) )
    v29 = 4104;
  v61 = *((_QWORD *)*v47 + 7);
  v31 = (_DWORD *)CmKeyObjectType + 19;
  v59[0] = v29;
  if ( v13 )
    PsReferenceSiloContext(v13);
  PsReferenceSiloContext(Object_8[1]);
  v16 = SepCreateAccessStateFromSubjectContext(&Object, v71, v72, v30, v31);
  if ( v16 < 0 )
  {
    if ( v13 )
      ObfDereferenceObject(v13);
    ObfDereferenceObject(Object_8[1]);
    goto LABEL_19;
  }
  v33 = 1600;
  v51[0] = 48;
  if ( a2 != 1 )
    v33 = 576;
  v52 = 0LL;
  v54 = v33;
  p_DestinationString = &DestinationString;
  v17 = 1;
  v56 = 0LL;
  v34 = CmObReferenceObjectByName(
          (unsigned int)v51,
          (unsigned int)v71,
          HIDWORD(TokenInformation),
          v32,
          0,
          (__int64)v59,
          (__int64)&v42);
  v16 = v34;
  if ( v34 >= 0 )
  {
    CmpLockRegistry();
    v35 = *((_QWORD *)v42 + 1);
    if ( !*(_WORD *)(v35 + 66) )
    {
      CmpUnlockRegistry(v35);
      if ( v40 )
      {
        *v48 = v42;
      }
      else
      {
        *v47 = v42;
        *v48 = v8;
      }
      v42 = 0LL;
      v16 = 0;
LABEL_104:
      SeDeleteAccessState(v71);
      goto LABEL_23;
    }
    if ( v39 )
      v16 = 0;
    goto LABEL_77;
  }
  if ( !v39 )
    v6 = v34;
  v16 = v6;
LABEL_20:
  if ( v42 )
    ObfDereferenceObject(v42);
  if ( v17 )
    goto LABEL_104;
LABEL_23:
  if ( v7 )
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
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( BugCheckParameter2 )
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
    CmpUnlockRegistry(v36);
  }
  v21 = (_QWORD *)v64[0];
  v22 = *(_QWORD *)v64[0];
  if ( *(_QWORD **)(v64[0] + 8LL) != v64 || *(_QWORD *)(v22 + 8) != v64[0] )
    goto LABEL_59;
  v64[0] = *(_QWORD *)v64[0];
  *(_QWORD *)(v22 + 8) = v64;
  if ( v21 != v64 )
  {
    while ( 1 )
    {
      v24 = (void (__fastcall *)(__int64, _QWORD *))v21[4];
      if ( v24 )
      {
        v25 = (__int64)(v21 + 2);
        if ( v24 == VrpOriginalKeyNameParameterCleanup )
          VrpOriginalKeyNameParameterCleanup(v25, v21 + 6);
        else
          guard_dispatch_icall_no_overrides(v25);
      }
      CmpFreeTransientPoolWithTag(v21, 0x50454D43u);
      v21 = (_QWORD *)v64[0];
      v26 = *(_QWORD *)v64[0];
      if ( *(_QWORD **)(v64[0] + 8LL) != v64 || *(_QWORD *)(v26 + 8) != v64[0] )
        break;
      v64[0] = *(_QWORD *)v64[0];
      *(_QWORD *)(v26 + 8) = v64;
      if ( v21 == v64 )
        return (unsigned int)v16;
    }
LABEL_59:
    __fastfail(3u);
  }
  return (unsigned int)v16;
}
