/*
 * XREFs of ObpLookupObjectName @ 0x14085CB70
 * Callers:
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140915290 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140915990 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObpReleaseLookupContext @ 0x1402BC6D0 (ObpReleaseLookupContext.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetThreadServerSilo @ 0x140310C30 (PsGetThreadServerSilo.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x1403EA530 (PsGetPermanentSiloContext.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403F2E60 (ObDereferenceObjectDeferDelete.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1403F5B90 (ExfTryAcquirePushLockSharedEx.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1403FA5D0 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     SeClearLearningModeObjectInformation @ 0x140401830 (SeClearLearningModeObjectInformation.c)
 *     PspUnlockThreadSecurityShared @ 0x14041DA20 (PspUnlockThreadSecurityShared.c)
 *     PsGetCurrentProcessSessionId @ 0x140425EC0 (PsGetCurrentProcessSessionId.c)
 *     PspLockThreadSecurityShared @ 0x140429710 (PspLockThreadSecurityShared.c)
 *     ObpFastReplenishReference @ 0x14042A6A0 (ObpFastReplenishReference.c)
 *     ObReferenceObjectByPointer @ 0x140435FB0 (ObReferenceObjectByPointer.c)
 *     ObFastReferenceObjectLocked @ 0x140439B8C (ObFastReferenceObjectLocked.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BCD2C (SeSetLearningModeObjectInformation.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     ObpParseSymbolicLinkEx @ 0x14083FD90 (ObpParseSymbolicLinkEx.c)
 *     RtlIsSandboxedToken @ 0x140840280 (RtlIsSandboxedToken.c)
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     CmpParseKey @ 0x14085EAA0 (CmpParseKey.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     ObpCheckTraverseAccess @ 0x14091495C (ObpCheckTraverseAccess.c)
 *     ObCheckCreateObjectAccess @ 0x140915F70 (ObCheckCreateObjectAccess.c)
 *     ExpWin32ParseProcedure @ 0x14091DC50 (ExpWin32ParseProcedure.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14097EE00 (ObpReferenceCurrentDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14097F108 (SeGetTokenDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14097F450 (ObpSetCurrentProcessDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x14097F5CC (ObDereferenceDeviceMap.c)
 *     IopParseFile @ 0x1409F4AF0 (IopParseFile.c)
 *     ObpInsertDirectoryEntry @ 0x140A057B0 (ObpInsertDirectoryEntry.c)
 *     RtlGetNtSystemRoot @ 0x140A08650 (RtlGetNtSystemRoot.c)
 *     ObpLockDirectoryExclusive @ 0x140A08AA0 (ObpLockDirectoryExclusive.c)
 *     ObpIsUnsecureName @ 0x140A56F50 (ObpIsUnsecureName.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

int __fastcall ObpLookupObjectName(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        int a3,
        POBJECT_TYPE a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        __int64 a10,
        ULONG_PTR *a11,
        int *a12,
        ULONG_PTR *a13)
{
  ULONG_PTR *v13; // r12
  ULONG_PTR v14; // r15
  unsigned __int16 *v15; // rsi
  unsigned int v16; // r14d
  int v17; // edx
  bool v19; // zf
  void *v20; // rdi
  __int64 v21; // r10
  PVOID v22; // r13
  int v23; // ecx
  __int64 v24; // rcx
  PVOID v25; // rbx
  int result; // eax
  __m128i v27; // xmm1
  _WORD *v28; // r8
  unsigned __int16 v29; // r9
  __int16 epi16; // r10
  ULONG_PTR v31; // r13
  __int64 v32; // rsi
  __int64 (__fastcall *v33)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // rbx
  signed __int64 *v34; // rdi
  signed __int64 v35; // rax
  signed __int64 v36; // rdx
  signed __int64 v37; // rtt
  __int64 v38; // r14
  __int16 v39; // bx
  NTSTATUS v40; // eax
  int v41; // edx
  unsigned __int64 v42; // r14
  signed __int64 v43; // rax
  signed __int64 v44; // rtt
  signed __int64 *v45; // rbx
  signed __int64 v46; // rax
  signed __int64 v47; // rdx
  signed __int64 v48; // rtt
  __int16 v49; // r10
  char v50; // si
  volatile signed __int32 *v51; // rbx
  __int64 *v52; // rax
  __int64 *v53; // rdi
  ULONG_PTR v54; // rbx
  unsigned __int16 *v55; // r15
  unsigned int v56; // esi
  unsigned __int64 v57; // rbx
  __int64 v58; // rdi
  unsigned int v59; // r14d
  unsigned int v60; // edx
  int v61; // r14d
  char v62; // r8
  _DWORD *v63; // rdi
  unsigned __int8 *v64; // rdx
  __int64 v65; // rcx
  __int64 **v66; // rsi
  __int64 *v67; // rbx
  struct _LIST_ENTRY *v68; // rax
  unsigned __int8 *v69; // rbx
  __int64 v70; // rdx
  int v71; // r8d
  char *v72; // r15
  __int64 v73; // r14
  unsigned __int16 *v74; // r13
  SIZE_T v75; // rax
  PVOID v76; // rax
  __int64 v77; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbx
  __int64 ProcessServerSilo; // rsi
  __int64 ThreadServerSilo; // r13
  bool v82; // r14
  bool v83; // r15
  struct _KTHREAD *v84; // r15
  _QWORD *p_Lock; // rsi
  volatile signed __int64 *v86; // r14
  signed __int64 *ServerSiloGlobals; // rax
  signed __int64 *v88; // rcx
  signed __int64 v89; // rdx
  signed __int64 v90; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *v92; // rax
  signed __int64 *p_Blink; // rbx
  __int64 *v94; // rdi
  _WORD *v95; // rcx
  unsigned __int16 v96; // ax
  __int64 v97; // rax
  __int64 v98; // r15
  signed __int64 *v99; // rbx
  signed __int64 v100; // rdx
  signed __int64 v101; // rax
  signed __int64 v102; // r13
  unsigned int v103; // edx
  char v104; // cl
  NTSTATUS v105; // eax
  signed __int64 v106; // rax
  signed __int64 v107; // rtt
  unsigned __int64 v108; // r8
  signed __int64 v109; // rax
  signed __int64 v110; // rtt
  unsigned __int16 *v111; // rax
  PVOID v112; // rax
  WCHAR *NtSystemRoot; // rax
  WCHAR v114; // bx
  WCHAR v115; // dx
  __int64 v116; // rcx
  signed __int64 *v117; // roff
  signed __int64 v118; // rax
  signed __int64 v119; // rtt
  __int64 v120; // rax
  unsigned __int16 *v121; // r10
  char *v122; // r15
  unsigned __int64 v123; // r8
  unsigned __int64 v124; // r9
  unsigned __int64 v125; // r8
  signed __int64 v126; // rax
  signed __int64 v127; // rtt
  struct _KTHREAD *v128; // rax
  __int64 *v129; // rdi
  __int64 v130; // r14
  __int64 v131; // rax
  __int128 v132; // rt0
  __int64 v133; // rax
  int v134; // ecx
  ULONG_PTR *v135; // rax
  __int64 (__fastcall *v136)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // rax
  char *v137; // r14
  struct _OBJECT_TYPE *v138; // r15
  _DWORD *v139; // rsi
  __int64 v140; // rdx
  KPROCESSOR_MODE v141; // di
  int v142; // ebx
  unsigned int v143; // ebx
  void *Pool2; // rdi
  __int64 v145; // rbx
  void *v146; // rcx
  __int16 v147; // ax
  int v148; // esi
  struct _LIST_ENTRY *v149; // r13
  struct _LIST_ENTRY *Blink; // r14
  int v151; // eax
  struct _LIST_ENTRY *v152; // rax
  struct _LIST_ENTRY *v153; // rax
  struct _KTHREAD *v154; // rcx
  signed __int64 *v155; // rsi
  __int64 *v156; // r15
  struct _LIST_ENTRY *v157; // rax
  char v158; // r15
  __int64 *v159; // rsi
  signed __int64 *v160; // rsi
  char v161; // al
  __int64 v162; // rax
  int v163; // r8d
  struct _LIST_ENTRY **p_Flink; // r14
  struct _LIST_ENTRY *v165; // rsi
  __int64 v166; // rdx
  int v167; // r8d
  char *v168; // r13
  __int64 v169; // r15
  SIZE_T v170; // rax
  __int64 v171; // rax
  unsigned __int16 *v172; // r10
  char *v173; // r13
  unsigned __int64 v174; // r8
  unsigned __int64 v175; // r9
  char *v176; // rdi
  struct _KTHREAD *v177; // rax
  signed __int64 *v178; // rdi
  __int64 *v179; // rsi
  PVOID v180; // rdi
  signed __int64 *v181; // rsi
  __int64 *v182; // r14
  ULONG Tag; // [rsp+20h] [rbp-E0h]
  int *v184; // [rsp+28h] [rbp-D8h]
  NTSTATUS v185; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h]
  unsigned int v187; // [rsp+70h] [rbp-90h]
  __int64 v188[2]; // [rsp+80h] [rbp-80h] BYREF
  int v189; // [rsp+90h] [rbp-70h]
  PVOID v190; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  volatile signed __int64 *v192; // [rsp+A8h] [rbp-58h] BYREF
  int v193; // [rsp+B0h] [rbp-50h]
  int v194; // [rsp+B4h] [rbp-4Ch] BYREF
  struct _LIST_ENTRY *v195; // [rsp+B8h] [rbp-48h]
  __int64 v196; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v197[2]; // [rsp+C8h] [rbp-38h] BYREF
  int v198; // [rsp+CCh] [rbp-34h]
  __int64 v199; // [rsp+D0h] [rbp-30h]
  void *Source1[2]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v201; // [rsp+F0h] [rbp-10h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+F8h] [rbp-8h]
  PVOID v203; // [rsp+100h] [rbp+0h]
  __int64 v204; // [rsp+108h] [rbp+8h] BYREF
  PVOID v205; // [rsp+110h] [rbp+10h] BYREF
  PVOID v206; // [rsp+118h] [rbp+18h] BYREF
  __int64 v207; // [rsp+120h] [rbp+20h] BYREF
  void *v208; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int16 *v209; // [rsp+130h] [rbp+30h]
  __int128 v210; // [rsp+138h] [rbp+38h] BYREF
  __int128 v211; // [rsp+148h] [rbp+48h]
  __int128 v212; // [rsp+158h] [rbp+58h]
  __int64 v213; // [rsp+168h] [rbp+68h]
  char v214; // [rsp+1C0h] [rbp+C0h]
  int v216; // [rsp+1D0h] [rbp+D0h] BYREF
  POBJECT_TYPE ObjectType; // [rsp+1D8h] [rbp+D8h]

  ObjectType = a4;
  v216 = a3;
  v13 = a11;
  v14 = 0LL;
  v201 = 0LL;
  v213 = 0LL;
  v197[1] = 0;
  *(_OWORD *)a11 = 0LL;
  v13[2] = 0LL;
  v15 = (unsigned __int16 *)a2;
  v16 = a3;
  v17 = a5;
  v207 = 0LL;
  P = 0LL;
  v192 = 0LL;
  v193 = 64;
  v210 = 0LL;
  v211 = 0LL;
  v212 = 0LL;
  *(_OWORD *)v188 = 0LL;
  if ( a12 )
    *a12 = 0;
  v19 = ObpCaseInsensitive == 0;
  v20 = 0LL;
  v21 = a9;
  v185 = 0;
  v194 = 0;
  *a13 = 0LL;
  v197[0] = 16;
  v214 = 1;
  v190 = 0LL;
  Object = 0LL;
  v198 = -1;
  v199 = v21;
  if ( !v19
    && (a4->TypeInfo.ObjectTypeFlags & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v16 = a3 | 0x40;
    v216 = a3 | 0x40;
  }
  v22 = a8;
  v23 = 1;
  if ( (v16 & 0x400) == 0 )
    v23 = v17;
  v187 = v23;
  v24 = v16 & 0x40 | 1;
  if ( a8 )
    v24 = v16 & 0x40;
  v189 = v24;
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0, 0LL, v17, 0x746C6644u, &v201, 0LL, &v207);
    v185 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v207) )
    {
      v198 &= HIDWORD(v207);
      if ( (v198 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
      {
        ObfDereferenceObject(v201);
        return -1073741790;
      }
    }
    if ( *v15 )
    {
      if ( **((_WORD **)v15 + 1) == 92 )
      {
        Object = v201;
        if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)v201 - 24) ^ ((unsigned __int16)((_WORD)v201 - 48) >> 8))) != *((_BYTE *)IoFileObjectType + 40) )
        {
          ObfDereferenceObject(v201);
          return -1073741765;
        }
      }
      else
      {
        Object = v201;
      }
    }
    else
    {
      v180 = v201;
      Object = v201;
      if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)v201 - 24) ^ ((unsigned __int16)((_WORD)v201 - 48) >> 8))) == ObpDirectoryObjectType->Index )
      {
        v185 = ObReferenceObjectByPointer(v201, 0, ObjectType, a5);
        if ( v185 >= 0 )
          v14 = (ULONG_PTR)v180;
        ObfDereferenceObject(v180);
        *a13 = v14;
        return v185;
      }
    }
    v27 = *(__m128i *)v15;
    *(_OWORD *)v188 = *(_OWORD *)v15;
    if ( SepLearningModeTokenCount )
    {
      *((_QWORD *)&v211 + 1) = v15;
      *(_QWORD *)&v211 = &ObjectType->Name;
      *(_QWORD *)&v212 = BugCheckParameter1;
      SeSetLearningModeObjectInformation((__int64)&v210);
      v28 = (_WORD *)v188[1];
      epi16 = WORD1(v188[0]);
      v29 = v188[0];
      v27 = *(__m128i *)v188;
      goto LABEL_28;
    }
    v28 = (_WORD *)_mm_srli_si128(v27, 8).m128i_u64[0];
LABEL_27:
    v29 = _mm_cvtsi128_si32(v27);
    epi16 = _mm_extract_epi16(v27, 1);
LABEL_28:
    v31 = (ULONG_PTR)Object;
    goto LABEL_30;
  }
  if ( !*v15 || **((_WORD **)v15 + 1) != 92 )
    return -1073741765;
  if ( *v15 == 2 )
  {
    a8 = 0LL;
    if ( (int)PsGetPermanentSiloContext(v21, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&a8) >= 0 )
      v25 = a8;
    else
      v25 = ObpRootDirectoryObject;
    if ( v25 )
    {
      result = ObReferenceObjectByPointer(v25, 0, ObjectType, a5);
      if ( result >= 0 )
        *a13 = (ULONG_PTR)v25;
    }
    else if ( v22 )
    {
      result = ObReferenceObjectByPointer(v22, 0, ObjectType, a5);
      if ( result >= 0 )
        *a13 = (ULONG_PTR)v22;
    }
    else
    {
      return -1073741811;
    }
    return result;
  }
  if ( !SepLearningModeTokenCount )
    goto LABEL_128;
  *((_QWORD *)&v211 + 1) = v15;
  *(_QWORD *)&v211 = &a4->Name;
  *(_QWORD *)&v212 = 0LL;
  SeSetLearningModeObjectInformation((__int64)&v210);
  while ( 1 )
  {
    a4 = ObjectType;
LABEL_128:
    v77 = *v15;
    if ( (unsigned __int16)v77 < 8u || **((_QWORD **)v15 + 1) != 0x5C003F003F005CLL )
    {
      if ( (_WORD)v77 == 6 )
      {
        v133 = *((_QWORD *)v15 + 1);
        v134 = *(_DWORD *)v133 - 4128860;
        if ( *(_DWORD *)v133 == 4128860 )
          v134 = *(unsigned __int16 *)(v133 + 4) - 63;
        if ( !v134 )
        {
          v135 = (ULONG_PTR *)ObpReferenceCurrentDeviceMap(v16, &v192, 0x5C003F003F005CLL, a4, Tag);
          P = v135;
          if ( v135 )
          {
            if ( *v135 )
            {
              v31 = *v135;
              v41 = ObReferenceObjectByPointer((PVOID)*v135, 0, ObjectType, a5);
              v185 = v41;
              goto LABEL_268;
            }
          }
        }
      }
LABEL_252:
      if ( !Object )
        Object = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(a9);
      v27 = *(__m128i *)v15;
      v28 = (_WORD *)*((_QWORD *)v15 + 1);
      *(_OWORD *)v188 = *(_OWORD *)v15;
      goto LABEL_27;
    }
    if ( a4 == (POBJECT_TYPE)IoFileObjectType
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0
      && *v15 >= 0xEu )
    {
      NtSystemRoot = (WCHAR *)RtlGetNtSystemRoot(v24, v77, 0x5C003F003F005CLL);
      v114 = RtlUpcaseUnicodeChar(*NtSystemRoot);
      v115 = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)v15 + 1) + 8LL));
      if ( (ObpDriveRemappingMitigation & 1) != 0 )
      {
        v116 = *((_QWORD *)v15 + 1);
        if ( v114 == v115 && *(_WORD *)(v116 + 10) == 58 && *(_WORD *)(v116 + 12) == 92 )
          v216 = v16 | 0x800;
      }
    }
    CurrentThread = KeGetCurrentThread();
    P = 0LL;
    v192 = 0LL;
    Process = (__int64)CurrentThread->Process;
    ProcessServerSilo = PsGetProcessServerSilo(Process);
    ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
    v82 = ProcessServerSilo != ThreadServerSilo;
    v83 = ProcessServerSilo != ThreadServerSilo;
    if ( (((*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0) & !_bittest(&v216, 0xBu)) == 0
      || ProcessServerSilo != ThreadServerSilo
      || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 )
    {
      goto LABEL_143;
    }
    v84 = KeGetCurrentThread();
    PspLockThreadSecurityShared((__int64)CurrentThread, (__int64)v84);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      p_Lock = &CurrentThread[1].WaitBlock[1].Thread->Header.Lock;
      if ( !p_Lock )
        p_Lock = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(p_Lock, 0x746C6644u);
    }
    else
    {
      p_Lock = 0LL;
    }
    PspUnlockThreadSecurityShared((__int64)CurrentThread, (__int64)v84);
    v83 = v82;
    if ( !p_Lock )
    {
LABEL_143:
      if ( !v83 )
      {
        ServerSiloGlobals = (signed __int64 *)(Process + 792);
LABEL_145:
        v88 = ServerSiloGlobals;
        v192 = ServerSiloGlobals;
        _m_prefetchw(ServerSiloGlobals);
        v89 = *ServerSiloGlobals;
        if ( (*ServerSiloGlobals & 0xF) != 0 )
        {
          do
          {
            v88 = (signed __int64 *)(v89 - 1);
            v90 = _InterlockedCompareExchange64(v192, v89 - 1, v89);
            if ( v89 == v90 )
              break;
            v89 = v90;
          }
          while ( (v90 & 0xF) != 0 );
        }
        v86 = (volatile signed __int64 *)(v89 & 0xFFFFFFFFFFFFFFF0uLL);
        P = (PVOID)(v89 & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (v89 & 0xF) == 0 )
        {
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          v92 = KeGetCurrentThread();
          p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
          --v92->SpecialApcDisable;
          v94 = KeAbPreAcquire((__int64)p_Blink, 0LL);
          if ( _InterlockedCompareExchange64(p_Blink, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(p_Blink, 0, v94, (unsigned __int64)p_Blink);
          if ( v94 )
            *((_BYTE *)v94 + 10) = 1;
          v86 = (volatile signed __int64 *)(*v192 & 0xFFFFFFFFFFFFFFF0uLL);
          P = (PVOID)v86;
          if ( v86 )
          {
            if ( _InterlockedExchangeAdd64(v86 + 30, 0xFuLL) <= 0 )
              __fastfail(0xEu);
            v117 = (signed __int64 *)v192;
            _m_prefetchw((const void *)v192);
            v118 = *v117;
            while ( (unsigned __int64)(v118 & 0xF) + 14 <= 0xF
                 && v86 == (volatile signed __int64 *)(v118 & 0xFFFFFFFFFFFFFFF0uLL) )
            {
              v119 = v118;
              v118 = _InterlockedCompareExchange64(v192, v118 + 14, v118);
              if ( v119 == v118 )
                goto LABEL_154;
            }
            ObDereferenceDeviceMap((PVOID)v86);
          }
LABEL_154:
          if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(p_Blink);
          KeAbPostRelease((ULONG_PTR)p_Blink);
          KeLeaveGuardedRegion();
        }
        if ( !v86 && !v83 )
        {
          v192 = 0LL;
          v86 = (volatile signed __int64 *)ObpSetCurrentProcessDeviceMap(v88);
          P = (PVOID)v86;
        }
        goto LABEL_158;
      }
LABEL_318:
      ServerSiloGlobals = (signed __int64 *)PsGetServerSiloGlobals(ThreadServerSilo);
      goto LABEL_145;
    }
    if ( p_Lock[3] == 999LL )
    {
      v83 = 1;
      ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
      goto LABEL_318;
    }
    v208 = 0LL;
    if ( (int)SeGetTokenDeviceMap(p_Lock, &v208) >= 0 )
      P = v208;
    ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
    v86 = (volatile signed __int64 *)P;
    if ( !P )
      goto LABEL_143;
LABEL_158:
    v15 = (unsigned __int16 *)a2;
    if ( !v86 || !*v86 )
      goto LABEL_252;
    v95 = *(_WORD **)(a2 + 8);
    v96 = *(_WORD *)a2 - 8;
    epi16 = *(_WORD *)(a2 + 2) - 8;
    v28 = v95 + 4;
    v188[1] = (__int64)(v95 + 4);
    v29 = v96;
    LOWORD(v188[0]) = v96;
    WORD1(v188[0]) = epi16;
    if ( ObjectType != (POBJECT_TYPE)IoFileObjectType )
      goto LABEL_29;
    if ( (v189 & 1) == 0 )
      goto LABEL_29;
    if ( v96 < 6u )
      goto LABEL_29;
    if ( v95[5] != 58 )
      goto LABEL_29;
    if ( v95[6] != 92 )
      goto LABEL_29;
    v97 = ((unsigned __int16)*v28 | 0x20u) - 97;
    if ( (unsigned int)v97 >= 0x1A )
      goto LABEL_29;
    v98 = 8 * v97 + 32;
    while ( 1 )
    {
      v99 = (signed __int64 *)((char *)v86 + v98);
      if ( *(volatile signed __int64 *)((char *)v86 + v98) )
        break;
LABEL_399:
      v86 = (volatile signed __int64 *)*((_QWORD *)v86 + 3);
      if ( !v86 )
      {
        v28 = (_WORD *)v188[1];
        epi16 = WORD1(v188[0]);
        v29 = v188[0];
        v86 = (volatile signed __int64 *)P;
LABEL_29:
        v31 = *v86;
        v27 = *(__m128i *)v188;
        goto LABEL_30;
      }
    }
    _m_prefetchw(v99);
    v100 = *v99;
    if ( (*v99 & 0xF) != 0 )
    {
      do
      {
        v101 = _InterlockedCompareExchange64(v99, v100 - 1, v100);
        if ( v100 == v101 )
          break;
        v100 = v101;
      }
      while ( (v101 & 0xF) != 0 );
    }
    v102 = v100;
    v103 = v100 & 0xF;
    v31 = v102 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v103 <= 1 )
    {
      if ( !v103 )
        goto LABEL_392;
      ObpFastReplenishReference((signed __int64 *)((char *)v86 + v98), v31);
    }
    ObpTraceObjectReferenceIfActive(v31 - 48);
    if ( v31 )
      goto LABEL_173;
LABEL_392:
    v176 = (char *)PsGetServerSiloGlobals(*((_QWORD *)v86 + 2));
    v177 = KeGetCurrentThread();
    v178 = (signed __int64 *)(v176 + 120);
    --v177->SpecialApcDisable;
    v179 = KeAbPreAcquire((__int64)v178, 0LL);
    if ( _InterlockedCompareExchange64(v178, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v178, 0, v179, (unsigned __int64)v178);
    if ( v179 )
      *((_BYTE *)v179 + 10) = 1;
    v31 = ObFastReferenceObjectLocked((volatile signed __int64 *)((char *)v86 + v98), 0x554C624Fu);
    if ( _InterlockedCompareExchange64(v178, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v178);
    KeAbPostRelease((ULONG_PTR)v178);
    KeLeaveGuardedRegion();
    if ( !v31 )
      goto LABEL_399;
LABEL_173:
    v188[1] += 4LL;
    v15 = (unsigned __int16 *)a2;
    LOWORD(v188[0]) -= 4;
    v16 = v216;
    v104 = ObHeaderCookie ^ *(_BYTE *)(v31 - 24) ^ ((unsigned __int16)(v31 - 48) >> 8);
    v204 = 0LL;
    if ( v104 == *(_BYTE *)(IoDeviceObjectType + 40) )
      v105 = IopParseDevice(v31, v216, a2, (__int64)v188, a6, a7, (__int64)v197, (__int64)&v204);
    else
      v105 = ObpParseSymbolicLinkEx(
               (unsigned __int16 *)v31,
               ObjectType,
               (struct _SECURITY_SUBJECT_CONTEXT *)a10,
               v187,
               v216,
               a2,
               (unsigned __int16 *)v188,
               a6,
               a7,
               (__int64)v197,
               (unsigned __int16 **)&v204);
    v185 = v105;
    _m_prefetchw(v99);
    v106 = *v99;
    do
    {
      if ( (v31 ^ v106) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v31, 0x554C624Fu);
        goto LABEL_180;
      }
      v107 = v106;
      v106 = _InterlockedCompareExchange64(v99, v106 + 1, v106);
    }
    while ( v107 != v106 );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v31 - 48, 0, 1u, 0x554C624Fu);
LABEL_180:
    v41 = v185;
    v20 = v190;
    if ( v185 < 0 )
    {
LABEL_246:
      ObpReleaseLookupContext((__int64)v13);
      v20 = v190;
      goto LABEL_269;
    }
    v31 = v204;
    if ( v185 != 260 )
    {
      if ( v185 != 872 )
        v20 = (void *)v204;
      v190 = v20;
    }
    if ( (v198 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
    {
LABEL_421:
      v185 = -1073741790;
      goto LABEL_246;
    }
    if ( v185 != 280 && v185 != 260 && v185 != 872 )
      break;
    if ( (v16 & 0x1000) != 0 && v185 != 872 )
    {
LABEL_408:
      v185 = -1073740533;
      goto LABEL_246;
    }
    if ( !--v193 )
      goto LABEL_456;
    if ( !*(_WORD *)a2 )
      goto LABEL_245;
    v108 = (unsigned __int64)P;
    if ( v192 )
    {
      _m_prefetchw((const void *)v192);
      v109 = *v192;
      while ( (v108 ^ v109) < 0xF )
      {
        v110 = v109;
        v109 = _InterlockedCompareExchange64(v192, v109 + 1, v109);
        if ( v110 == v109 )
          goto LABEL_194;
      }
    }
    ObDereferenceDeviceMap((PVOID)v108);
LABEL_194:
    v111 = *(unsigned __int16 **)(a2 + 8);
    P = 0LL;
    v24 = *v111;
    if ( v185 == 280 )
    {
      if ( (_WORD)v24 == 92 )
        goto LABEL_245;
LABEL_73:
      v27 = *(__m128i *)v15;
      v28 = (_WORD *)*((_QWORD *)v15 + 1);
      *(__m128i *)v188 = v27;
      epi16 = _mm_extract_epi16(v27, 1);
      v29 = _mm_cvtsi128_si32(v27);
LABEL_30:
      v32 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v31 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v31 - 48) >> 8)];
      v33 = *(__int64 (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **))(v32 + 144);
      if ( !v33 )
      {
        if ( (POBJECT_TYPE)v32 != ObpDirectoryObjectType )
          goto LABEL_459;
        v203 = (PVOID)v31;
        if ( v29 && *v28 == 92 )
        {
          ++v28;
          v29 -= 2;
          epi16 -= 2;
          v188[1] = (__int64)v28;
          WORD1(v188[0]) = epi16;
          LOWORD(v188[0]) = v29;
          v27 = *(__m128i *)v188;
        }
        *(__m128i *)Source1 = v27;
        if ( v29 )
        {
          do
          {
            if ( *v28 == 92 )
              break;
            ++v28;
            v19 = v29 == 2;
            v29 -= 2;
            v188[1] = (__int64)v28;
            LOWORD(v188[0]) = v29;
          }
          while ( !v19 );
        }
        v49 = epi16 - (LOWORD(Source1[0]) - v29);
        LOWORD(Source1[0]) -= v29;
        WORD1(v188[0]) = v49;
        if ( !LOWORD(Source1[0]) )
        {
LABEL_245:
          v185 = -1073741773;
          goto LABEL_246;
        }
        if ( (_BYTE)v187 && (*(_DWORD *)(a10 + 12) & 1) == 0 )
        {
          v184 = &v194;
          v214 = ObpCheckTraverseAccess(v31, v187, a10);
          if ( v214 )
          {
            v29 = v188[0];
            goto LABEL_84;
          }
          v41 = v194;
          if ( v194 >= 0 )
          {
            v41 = -1073741772;
            v194 = -1073741772;
          }
          if ( LOWORD(v188[0]) || !a8 )
            goto LABEL_266;
LABEL_301:
          v50 = 1;
        }
        else
        {
LABEL_84:
          if ( a8 && !v29 )
            goto LABEL_301;
          v50 = 0;
        }
        if ( *v13 )
        {
          v51 = (volatile signed __int32 *)(v31 + 296);
          v52 = KeAbPreAcquire(v31 + 296, 0LL);
          v53 = v52;
          if ( v50 )
          {
            if ( _interlockedbittestandset64(v51, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v31 + 296), v52, v31 + 296);
          }
          else if ( _InterlockedCompareExchange64((volatile signed __int64 *)v51, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx((signed __int64 *)(v31 + 296), 0, v52, v31 + 296);
          }
          if ( v53 )
            *((_BYTE *)v53 + 10) = 1;
          v54 = *v13;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*v13 + 296), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v54 + 296));
          KeAbPostRelease(v54 + 296);
          if ( *((_BYTE *)v13 + 22) )
          {
            ObDereferenceObjectDeferDeleteWithTag((PVOID)*v13, 0x554C624Fu);
            *((_BYTE *)v13 + 22) = 0;
          }
          *v13 = v31;
          *((_BYTE *)v13 + 21) = v50;
        }
        else if ( v50 )
        {
          ObpLockDirectoryExclusive(v13, v31, v28);
        }
        else
        {
          *v13 = v31;
          *((_BYTE *)v13 + 21) = 0;
          v128 = KeGetCurrentThread();
          --v128->KernelApcDisable;
          v129 = KeAbPreAcquire(v31 + 296, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 296), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v31 + 296), 0, v129, v31 + 296);
          if ( v129 )
            *((_BYTE *)v129 + 10) = 1;
        }
        v55 = (unsigned __int16 *)Source1[1];
        v56 = LOWORD(Source1[0]) >> 1;
        if ( v56 < 4 )
        {
          v59 = 0;
        }
        else
        {
          v57 = 0LL;
          do
          {
            v58 = *(_QWORD *)v55;
            if ( (*(_QWORD *)v55 & 0xFF80FF80FF80FF80uLL) != 0 )
            {
              v130 = 4LL;
              do
              {
                v131 = (unsigned __int16)v58;
                if ( (unsigned __int16)v58 >= 0x61u )
                {
                  if ( (unsigned __int16)v58 <= 0x7Au )
                    v131 = (unsigned int)(unsigned __int16)v58 - 32;
                  else
                    v131 = RtlUpcaseUnicodeChar(v58);
                }
                *(_QWORD *)&v132 = v58;
                *((_QWORD *)&v132 + 1) = v131;
                v58 = v132 >> 16;
                --v130;
              }
              while ( v130 );
            }
            else
            {
              v58 &= 0xFFDFFFDFFFDFFFDFuLL;
            }
            v55 += 4;
            v56 -= 4;
            v57 = v58 + (v57 >> 1) + 3 * v57;
          }
          while ( v56 >= 4 );
          v13 = a11;
          v59 = v57 + HIDWORD(v57);
        }
        while ( v56 )
        {
          v60 = *v55++;
          --v56;
          v61 = (v59 >> 1) + 3 * v59;
          if ( v60 >= 0x61 )
          {
            if ( v60 > 0x7A )
            {
              v59 = RtlUpcaseUnicodeChar(v60) + v61;
              continue;
            }
            v61 -= 32;
          }
          v59 = v60 + v61;
        }
        v62 = v189;
        v63 = v13 + 2;
        *((_DWORD *)v13 + 4) = v59;
        LODWORD(Object) = v62 & 0x40;
        v64 = (unsigned __int8 *)v13 + 20;
        v65 = v59 % 0x25;
        v66 = (__int64 **)(*v13 + 8 * v65);
        *((_BYTE *)v13 + 20) = v65;
        v67 = *v66;
        if ( !*v66 )
        {
LABEL_113:
          v68 = 0LL;
          v69 = v64;
          Object = 0LL;
          goto LABEL_335;
        }
        while ( 1 )
        {
          if ( *((_DWORD *)v67 + 4) == *v63 )
          {
            Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
            if ( LOWORD(Source1[0]) == *(_WORD *)(v70 + 8) )
            {
              v72 = *(char **)(v70 + 16);
              v73 = LOWORD(Source1[0]);
              v74 = (unsigned __int16 *)((char *)Source1[1] + LOWORD(Source1[0]));
              if ( v71 )
              {
                v75 = RtlCompareMemory(Source1[1], v72, LOWORD(Source1[0]));
                if ( v75 != v73 )
                {
                  v120 = 2 * (v75 >> 1);
                  v121 = (unsigned __int16 *)((char *)Source1[1] + v120);
                  v122 = &v72[v120];
                  while ( v121 < v74 )
                  {
                    v123 = *v121;
                    v124 = *(unsigned __int16 *)v122;
                    if ( (_WORD)v123 != (_WORD)v124 )
                    {
                      if ( (unsigned int)v123 >= 0x61 )
                      {
                        if ( (unsigned int)v123 > 0x7A )
                        {
                          if ( Flink && (unsigned __int16)v123 >= 0xC0u )
                            LOWORD(v123) = *((_WORD *)&Flink->Flink
                                           + (v123 & 0xF)
                                           + *((unsigned __int16 *)&Flink->Flink
                                             + ((unsigned __int8)v123 >> 4)
                                             + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v123 >> 8))))
                                         + v123;
                        }
                        else
                        {
                          LOWORD(v123) = v123 - 32;
                        }
                      }
                      if ( (unsigned int)v124 >= 0x61 )
                      {
                        if ( (unsigned int)v124 > 0x7A )
                        {
                          if ( Flink && (unsigned __int16)v124 >= 0xC0u )
                            LOWORD(v124) = *((_WORD *)&Flink->Flink
                                           + (v124 & 0xF)
                                           + *((unsigned __int16 *)&Flink->Flink
                                             + ((unsigned __int8)v124 >> 4)
                                             + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v124 >> 8))))
                                         + v124;
                        }
                        else
                        {
                          LOWORD(v124) = v124 - 32;
                        }
                      }
                      if ( (_WORD)v123 != (_WORD)v124 )
                        goto LABEL_111;
                    }
                    ++v121;
                    v122 += 2;
                  }
                }
LABEL_117:
                v63 = v13 + 2;
                Object = (PVOID)v67[1];
                v68 = (struct _LIST_ENTRY *)Object;
                v69 = (unsigned __int8 *)v13 + 20;
                v13[1] = (ULONG_PTR)v66;
                if ( v68 )
                  goto LABEL_118;
LABEL_335:
                v148 = v189;
                if ( (v189 & 1) == 0 )
                  goto LABEL_118;
                v149 = (struct _LIST_ENTRY *)*v13;
                while ( 2 )
                {
                  while ( 2 )
                  {
                    Blink = v68;
                    v151 = (int)v149[21].Flink;
                    if ( (v151 & 4) != 0 )
                    {
                      if ( (v151 & 0x10) != 0 && (v148 & 6) == 0 )
                      {
                        if ( RtlIsSandboxedToken((PSECURITY_SUBJECT_CONTEXT)(a10 + 32), v187) )
                          v148 |= 2u;
                        else
                          v148 |= 4u;
                        v189 = v148;
                      }
                      if ( ((__int64)v149[21].Flink & 0x10) == 0 || (v148 & 2) != 0 )
                        Blink = v149[19].Blink;
                    }
                    else
                    {
                      v152 = v149[19].Flink;
                      if ( !v152 )
                        goto LABEL_118;
                      if ( v152 == P )
                      {
                        v149 = (struct _LIST_ENTRY *)*((_QWORD *)P + 1);
                        goto LABEL_351;
                      }
                      v153 = PsGetCurrentServerSiloGlobals();
                      v154 = KeGetCurrentThread();
                      v155 = (signed __int64 *)&v153[7].Blink;
                      --v154->SpecialApcDisable;
                      v156 = KeAbPreAcquire((__int64)&v153[7].Blink, 0LL);
                      if ( _InterlockedCompareExchange64(v155, 17LL, 0LL) )
                        ExfAcquirePushLockSharedEx(v155, 0, v156, (unsigned __int64)v155);
                      if ( v156 )
                        *((_BYTE *)v156 + 10) = 1;
                      v157 = v149[19].Flink;
                      if ( v157 )
                        Blink = v157->Blink;
                      if ( _InterlockedCompareExchange64(v155, 0LL, 17LL) != 17 )
                        ExfReleasePushLockShared(v155);
                      KeAbPostRelease((ULONG_PTR)v155);
                      KeLeaveGuardedRegion();
                    }
                    v149 = Blink;
LABEL_351:
                    Flink = v149;
                    if ( !v149 )
                      goto LABEL_118;
                    v158 = *((_BYTE *)v13 + 22);
                    v159 = KeAbPreAcquire((__int64)&v149[18].Blink, 0LL);
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v149[18].Blink, 17LL, 0LL)
                      && !ExfTryAcquirePushLockSharedEx((signed __int64 *)&v149[18].Blink, 0) )
                    {
                      if ( v159 )
                        KeAbPostReleaseEx((ULONG_PTR)&v149[18].Blink, (ULONG_PTR)v159);
                      ObfReferenceObjectWithTag(v149, 0x554C624Fu);
                      v181 = (signed __int64 *)*v13;
                      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*v13 + 296), 0LL, 17LL) != 17 )
                        ExfReleasePushLockShared(v181 + 37);
                      KeAbPostRelease((ULONG_PTR)(v181 + 37));
                      v182 = KeAbPreAcquire((__int64)&v149[18].Blink, 0LL);
                      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v149[18].Blink, 17LL, 0LL) )
                        ExfAcquirePushLockSharedEx(
                          (signed __int64 *)&v149[18].Blink,
                          0,
                          v182,
                          (unsigned __int64)&v149[18].Blink);
                      if ( v182 )
                        *((_BYTE *)v182 + 10) = 1;
                      v161 = 1;
                    }
                    else
                    {
                      if ( v159 )
                        *((_BYTE *)v159 + 10) = 1;
                      v160 = (signed __int64 *)*v13;
                      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*v13 + 296), 0LL, 17LL) != 17 )
                        ExfReleasePushLockShared(v160 + 37);
                      KeAbPostRelease((ULONG_PTR)(v160 + 37));
                      v161 = 0;
                    }
                    *((_BYTE *)v13 + 22) = v161;
                    if ( v158 )
                      ObDereferenceObjectDeferDeleteWithTag((PVOID)*v13, 0x554C624Fu);
                    v162 = *v69;
                    v163 = v189 & 0x40;
                    *v13 = (ULONG_PTR)v149;
                    LODWORD(Object) = v163;
                    p_Flink = &v149->Flink + v162;
                    v165 = *p_Flink;
                    if ( !*p_Flink )
                    {
LABEL_364:
                      v148 = v189;
                      v68 = 0LL;
                      Object = 0LL;
                      continue;
                    }
                    break;
                  }
                  while ( 1 )
                  {
                    if ( LODWORD(v165[1].Flink) != *v63 )
                      goto LABEL_362;
                    v195 = PsGetCurrentServerSiloGlobals()[75].Flink;
                    if ( LOWORD(Source1[0]) != *(unsigned __int16 *)(v166 + 8) )
                      goto LABEL_362;
                    v168 = *(char **)(v166 + 16);
                    v169 = LOWORD(Source1[0]);
                    v209 = (unsigned __int16 *)((char *)Source1[1] + LOWORD(Source1[0]));
                    if ( v167 )
                      break;
                    if ( !memcmp(Source1[1], v168, LOWORD(Source1[0])) )
                      goto LABEL_368;
LABEL_362:
                    p_Flink = &v165->Flink;
                    v165 = v165->Flink;
                    if ( !v165 )
                    {
                      v149 = Flink;
                      goto LABEL_364;
                    }
                  }
                  v170 = RtlCompareMemory(Source1[1], v168, LOWORD(Source1[0]));
                  if ( v170 != v169 )
                  {
                    v171 = 2 * (v170 >> 1);
                    v172 = (unsigned __int16 *)((char *)Source1[1] + v171);
                    v173 = &v168[v171];
                    while ( v172 < v209 )
                    {
                      v174 = *v172;
                      v175 = *(unsigned __int16 *)v173;
                      if ( (_WORD)v174 != (_WORD)v175 )
                      {
                        if ( (unsigned int)v174 >= 0x61 )
                        {
                          if ( (unsigned int)v174 > 0x7A )
                          {
                            if ( v195 && (unsigned __int16)v174 >= 0xC0u )
                              LOWORD(v174) = *((_WORD *)&v195->Flink
                                             + (v174 & 0xF)
                                             + *((unsigned __int16 *)&v195->Flink
                                               + ((unsigned __int8)v174 >> 4)
                                               + (unsigned int)*((unsigned __int16 *)&v195->Flink + (v174 >> 8))))
                                           + v174;
                          }
                          else
                          {
                            LOWORD(v174) = v174 - 32;
                          }
                        }
                        if ( (unsigned int)v175 >= 0x61 )
                        {
                          if ( (unsigned int)v175 > 0x7A )
                          {
                            if ( v195 && (unsigned __int16)v175 >= 0xC0u )
                              LOWORD(v175) = *((_WORD *)&v195->Flink
                                             + (v175 & 0xF)
                                             + *((unsigned __int16 *)&v195->Flink
                                               + ((unsigned __int8)v175 >> 4)
                                               + (unsigned int)*((unsigned __int16 *)&v195->Flink + (v175 >> 8))))
                                           + v175;
                          }
                          else
                          {
                            LOWORD(v175) = v175 - 32;
                          }
                        }
                        if ( (_WORD)v174 != (_WORD)v175 )
                          goto LABEL_362;
                      }
                      ++v172;
                      v173 += 2;
                    }
                  }
LABEL_368:
                  Object = v165->Blink;
                  v68 = (struct _LIST_ENTRY *)Object;
                  v13[1] = (ULONG_PTR)p_Flink;
                  if ( !v68 )
                  {
                    v149 = Flink;
                    v148 = v189;
                    continue;
                  }
                  break;
                }
LABEL_118:
                v31 = (ULONG_PTR)Object;
                if ( !v214 )
                {
                  if ( Object )
                  {
                    v41 = v194;
                  }
                  else
                  {
LABEL_323:
                    if ( LOWORD(v188[0]) )
                    {
                      v185 = -1073741766;
                      goto LABEL_246;
                    }
                    v137 = a8;
                    if ( !a8 )
                    {
LABEL_456:
                      v185 = -1073741772;
                      goto LABEL_246;
                    }
                    v138 = ObjectType;
                    v139 = v203;
                    v140 = 4LL;
                    v141 = v187;
                    if ( ObjectType == ObpDirectoryObjectType )
                      v140 = 8LL;
                    LOBYTE(v184) = v187;
                    LOBYTE(Tag) = 0;
                    if ( (unsigned __int8)ObCheckCreateObjectAccess(v203, v140, a10, Source1, Tag, v184, &v185) )
                    {
                      v142 = v139[85];
                      if ( v142 == -1
                        || v138 != MmSectionObjectType && v138 != ObpSymbolicLinkObjectType
                        || v142 == (unsigned int)PsGetCurrentProcessSessionId()
                        || SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v141)
                        || (unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Source1) )
                      {
                        v143 = LOWORD(Source1[0]);
                        Pool2 = (void *)ExAllocatePool2(0x100uLL);
                        if ( Pool2 )
                        {
                          if ( (unsigned __int8)ObpInsertDirectoryEntry(v139, v137) )
                          {
                            memmove(Pool2, Source1[1], v143);
                            v145 = (__int64)&v137[-ObpInfoMaskToOffset[*(v137 - 22) & 3] - 48];
                            v146 = *(void **)(v145 + 16);
                            if ( v146 )
                              ExFreePoolWithTag(v146, 0);
                            v147 = (__int16)Source1[0];
                            v31 = (ULONG_PTR)v137;
                            *(_QWORD *)(v145 + 16) = Pool2;
                            v20 = v190;
                            *(_WORD *)(v145 + 8) = v147;
                            *(_WORD *)(v145 + 10) = v147;
                            v185 = 0;
                            goto LABEL_269;
                          }
                          ExFreePoolWithTag(Pool2, 0);
                        }
                        v185 = -1073741670;
                        ObpReleaseLookupContext((__int64)v13);
                        v20 = v190;
                        goto LABEL_269;
                      }
                      goto LABEL_421;
                    }
                    v41 = v185;
                    if ( v185 < 0 )
                    {
LABEL_267:
                      v20 = v190;
                      goto LABEL_268;
                    }
                    v41 = -1073741772;
                  }
LABEL_266:
                  v185 = v41;
                  goto LABEL_267;
                }
                if ( !Object )
                  goto LABEL_323;
                v29 = v188[0];
                if ( !LOWORD(v188[0]) )
                {
                  v136 = *(__int64 (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] + 144);
                  if ( !v136 || v136 != ObpParseSymbolicLinkEx && a8 )
                  {
                    v41 = ObReferenceObjectByPointer(Object, 0, ObjectType, a5);
                    v185 = v41;
                    goto LABEL_267;
                  }
                }
                v28 = (_WORD *)v188[1];
                epi16 = WORD1(v188[0]);
                v27 = *(__m128i *)v188;
                goto LABEL_30;
              }
              if ( !memcmp(Source1[1], v72, LOWORD(Source1[0])) )
                goto LABEL_117;
            }
          }
LABEL_111:
          v66 = (__int64 **)v67;
          v67 = (__int64 *)*v67;
          if ( !v67 )
          {
            v64 = (unsigned __int8 *)v13 + 20;
            v63 = v13 + 2;
            goto LABEL_113;
          }
        }
      }
      v196 = 0LL;
      if ( v33 != ObpParseSymbolicLinkEx )
      {
        if ( a8 )
        {
LABEL_459:
          v185 = -1073741788;
          goto LABEL_246;
        }
        PsReferenceSiloContext((void *)v31);
        if ( *v13 )
        {
          v34 = (signed __int64 *)(*v13 + 296);
          _m_prefetchw(v34);
          v35 = *v34;
          v36 = *v34 - 16;
          if ( (*v34 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v36 = 0LL;
          if ( (v35 & 2) != 0 || (v37 = *v34, v37 != _InterlockedCompareExchange64(v34, v36, v35)) )
            ExfReleasePushLock(v34);
          KeAbPostRelease((ULONG_PTR)v34);
          if ( *((_BYTE *)v13 + 22) )
          {
            ObDereferenceObjectDeferDeleteWithTag((PVOID)*v13, 0x554C624Fu);
            *((_BYTE *)v13 + 22) = 0;
          }
          *v13 = 0LL;
          *((_BYTE *)v13 + 21) = 0;
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
        v19 = (*(_BYTE *)(v32 + 67) & 1) == 0;
        v15 = (unsigned __int16 *)a2;
        if ( v19 )
        {
          v38 = a10;
          v184 = (int *)a2;
          if ( (char *)v33 == (char *)ExpWin32ParseProcedure )
          {
            v39 = v216;
            v40 = ExpWin32ParseProcedure(
                    v31,
                    (_DWORD)ObjectType,
                    a10,
                    (unsigned __int8)v187,
                    v216,
                    a2,
                    (__int64)v188,
                    a6,
                    a7,
                    (__int64)&v196);
            goto LABEL_44;
          }
        }
        else
        {
          v38 = a10;
          if ( (char *)v33 == (char *)CmpParseKey )
          {
            v39 = v216;
            v40 = CmpParseKey(
                    v31,
                    (_DWORD)ObjectType,
                    a10,
                    (unsigned __int8)v187,
                    v216,
                    a2,
                    (__int64)v188,
                    a6,
                    a7,
                    (__int64)v197,
                    (__int64)&v196);
LABEL_44:
            v185 = v40;
            ObfDereferenceObject((PVOID)v31);
            v41 = v185;
            goto LABEL_45;
          }
          if ( (char *)v33 == (char *)IopParseDevice )
          {
            v39 = v216;
            v40 = IopParseDevice(v31, v216, a2, (__int64)v188, a6, a7, (__int64)v197, (__int64)&v196);
            goto LABEL_44;
          }
          v184 = (int *)a2;
          if ( (char *)v33 == (char *)IopParseFile )
          {
            v39 = v216;
            v40 = IopParseFile(
                    v31,
                    (_DWORD)ObjectType,
                    a10,
                    (unsigned __int8)v187,
                    v216,
                    a2,
                    (__int64)v188,
                    a6,
                    a7,
                    (__int64)v197,
                    (__int64)&v196);
            goto LABEL_44;
          }
        }
        Tag = v216;
        v40 = guard_dispatch_icall_no_overrides(v31);
        v39 = v216;
        goto LABEL_44;
      }
      v15 = (unsigned __int16 *)a2;
      v38 = a10;
      v39 = v216;
      v41 = ObpParseSymbolicLinkEx(
              (unsigned __int16 *)v31,
              ObjectType,
              (struct _SECURITY_SUBJECT_CONTEXT *)a10,
              v187,
              v216,
              a2,
              (unsigned __int16 *)v188,
              a6,
              a7,
              (__int64)v197,
              (unsigned __int16 **)&v196);
      v185 = v41;
LABEL_45:
      v20 = v190;
      if ( v41 < 0 )
        goto LABEL_246;
      v31 = v196;
      if ( v190 )
      {
        ObDereferenceObjectDeferDelete(v190);
        v41 = v185;
        v20 = 0LL;
        v190 = 0LL;
      }
      if ( v41 != 260 )
      {
        if ( v41 != 872 )
          v20 = (void *)v31;
        v190 = v20;
      }
      if ( (v198 & *(_DWORD *)(v38 + 24)) != *(_DWORD *)(v38 + 24) )
        goto LABEL_421;
      if ( v41 != 280 && v41 != 260 && v41 != 872 )
        break;
      if ( (v39 & 0x1000) != 0 && v41 != 872 )
        goto LABEL_408;
      if ( !--v193 )
        goto LABEL_456;
      if ( !*v15 )
        goto LABEL_245;
      v42 = (unsigned __int64)P;
      if ( P )
      {
        if ( v192 )
        {
          _m_prefetchw((const void *)v192);
          v43 = *v192;
          while ( (v42 ^ v43) < 0xF )
          {
            v44 = v43;
            v43 = _InterlockedCompareExchange64(v192, v43 + 1, v43);
            if ( v44 == v43 )
              goto LABEL_62;
          }
        }
        ObDereferenceDeviceMap((PVOID)v42);
LABEL_62:
        v41 = v185;
        P = 0LL;
      }
      if ( *v13 )
      {
        v45 = (signed __int64 *)(*v13 + 296);
        _m_prefetchw(v45);
        v46 = *v45;
        v47 = *v45 - 16;
        if ( (*v45 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v47 = 0LL;
        if ( (v46 & 2) != 0 || (v48 = *v45, v48 != _InterlockedCompareExchange64(v45, v47, v46)) )
          ExfReleasePushLock(v45);
        KeAbPostRelease((ULONG_PTR)v45);
        if ( *((_BYTE *)v13 + 22) )
        {
          ObDereferenceObjectDeferDeleteWithTag((PVOID)*v13, 0x554C624Fu);
          *((_BYTE *)v13 + 22) = 0;
        }
        *v13 = 0LL;
        *((_BYTE *)v13 + 21) = 0;
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v41 = v185;
      }
      v24 = **((unsigned __int16 **)v15 + 1);
      if ( v41 == 280 )
      {
        if ( (_WORD)v24 == 92 )
          goto LABEL_245;
        goto LABEL_73;
      }
      if ( (_WORD)v24 != 92 )
        goto LABEL_245;
      if ( v41 == 872 )
      {
        v16 = v216;
        Object = ObpRootDirectoryObject;
      }
      else
      {
        v206 = 0LL;
        if ( (int)PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v206) >= 0 )
        {
          v76 = v206;
        }
        else
        {
          v76 = ObpRootDirectoryObject;
          v206 = ObpRootDirectoryObject;
        }
        v16 = v216;
        Object = v76;
      }
    }
    else
    {
      if ( (_WORD)v24 != 92 )
        goto LABEL_245;
      if ( v185 == 872 )
      {
        Object = ObpRootDirectoryObject;
      }
      else
      {
        v205 = 0LL;
        if ( (int)PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v205) >= 0 )
        {
          v112 = v205;
        }
        else
        {
          v112 = ObpRootDirectoryObject;
          v205 = ObpRootDirectoryObject;
        }
        Object = v112;
      }
    }
  }
  if ( !v31 )
  {
    v41 = -1073741772;
    v185 = -1073741772;
  }
  v20 = 0LL;
  v190 = 0LL;
LABEL_268:
  if ( v41 < 0 )
    goto LABEL_246;
LABEL_269:
  if ( v20 )
    ObDereferenceObjectDeferDelete(v20);
  if ( v201 )
    ObDereferenceObjectDeferDelete(v201);
  SeClearLearningModeObjectInformation();
  v125 = (unsigned __int64)P;
  if ( P )
  {
    if ( v192 )
    {
      _m_prefetchw((const void *)v192);
      v126 = *v192;
      while ( (v125 ^ v126) < 0xF )
      {
        v127 = v126;
        v126 = _InterlockedCompareExchange64(v192, v126 + 1, v126);
        if ( v127 == v126 )
          goto LABEL_274;
      }
    }
    ObDereferenceDeviceMap((PVOID)v125);
  }
LABEL_274:
  result = v185;
  if ( v185 < 0 )
  {
    v31 = 0LL;
  }
  else if ( a12 && v198 != -1 )
  {
    *a12 = v198;
  }
  *a13 = v31;
  return result;
}
