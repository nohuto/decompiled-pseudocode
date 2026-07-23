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
  __int64 v15; // rsi
  unsigned int v16; // r14d
  int v17; // edx
  bool v19; // zf
  void *v20; // rdi
  __int64 v21; // r10
  PVOID v22; // r13
  int v23; // ecx
  int v24; // ecx
  PVOID v25; // rbx
  int result; // eax
  __m128i v27; // xmm1
  _WORD *v28; // r8
  unsigned __int16 v29; // r9
  __int16 epi16; // r10
  ULONG_PTR v31; // r13
  __int64 v32; // rsi
  __int64 (__fastcall *v33)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // rbx
  __int64 *v34; // rdi
  signed __int64 v35; // rax
  signed __int64 v36; // rdx
  __int64 v37; // rtt
  __int64 v38; // r14
  __int16 v39; // bx
  NTSTATUS v40; // eax
  int v41; // edx
  unsigned __int64 v42; // r14
  signed __int64 v43; // rax
  signed __int64 v44; // rtt
  __int64 *v45; // rbx
  signed __int64 v46; // rax
  signed __int64 v47; // rdx
  __int64 v48; // rtt
  __int16 v49; // cx
  __int16 v50; // r10
  char v51; // si
  volatile signed __int32 *v52; // rbx
  __int64 *v53; // rax
  __int64 *v54; // rdi
  ULONG_PTR v55; // rbx
  unsigned __int16 *v56; // r15
  unsigned int v57; // esi
  unsigned __int64 v58; // rbx
  __int64 v59; // rdi
  unsigned int v60; // r14d
  unsigned int v61; // edx
  int v62; // r14d
  char v63; // r8
  _DWORD *v64; // rdi
  unsigned __int8 *v65; // rdx
  __int64 v66; // rcx
  __int64 **v67; // rsi
  __int64 *v68; // rbx
  struct _LIST_ENTRY *v69; // rax
  unsigned __int8 *v70; // rbx
  __int64 v71; // rdx
  int v72; // r8d
  char *v73; // r15
  __int64 v74; // r14
  unsigned __int16 *v75; // r13
  SIZE_T v76; // rax
  PVOID v77; // rax
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
  __int16 *v111; // rax
  __int16 v112; // cx
  PVOID v113; // rax
  WCHAR *NtSystemRoot; // rax
  WCHAR v115; // bx
  WCHAR v116; // dx
  __int64 v117; // rcx
  signed __int64 *v118; // roff
  signed __int64 v119; // rax
  signed __int64 v120; // rtt
  __int64 v121; // rax
  unsigned __int16 *v122; // r10
  char *v123; // r15
  unsigned __int64 v124; // r8
  unsigned __int64 v125; // r9
  unsigned __int64 v126; // r8
  signed __int64 v127; // rax
  signed __int64 v128; // rtt
  struct _KTHREAD *v129; // rax
  __int64 *v130; // rdi
  __int64 v131; // r14
  __int64 v132; // rax
  __int128 v133; // rt0
  __int64 v134; // rax
  int v135; // ecx
  ULONG_PTR *v136; // rax
  __int64 (__fastcall *v137)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // rax
  char *v138; // r14
  struct _OBJECT_TYPE *v139; // r15
  _DWORD *v140; // rsi
  __int64 v141; // rdx
  KPROCESSOR_MODE v142; // di
  int v143; // ebx
  unsigned int v144; // ebx
  void *Pool2; // rdi
  __int64 v146; // rbx
  void *v147; // rcx
  __int16 v148; // ax
  int v149; // esi
  struct _LIST_ENTRY *v150; // r13
  struct _LIST_ENTRY *Blink; // r14
  int v152; // eax
  struct _LIST_ENTRY *v153; // rax
  struct _LIST_ENTRY *v154; // rax
  struct _KTHREAD *v155; // rcx
  signed __int64 *v156; // rsi
  __int64 *v157; // r15
  struct _LIST_ENTRY *v158; // rax
  char v159; // r15
  __int64 *v160; // rsi
  signed __int64 *v161; // rsi
  char v162; // al
  __int64 v163; // rax
  int v164; // r8d
  struct _LIST_ENTRY **p_Flink; // r14
  struct _LIST_ENTRY *v166; // rsi
  __int64 v167; // rdx
  int v168; // r8d
  char *v169; // r13
  __int64 v170; // r15
  SIZE_T v171; // rax
  __int64 v172; // rax
  unsigned __int16 *v173; // r10
  char *v174; // r13
  unsigned __int64 v175; // r8
  unsigned __int64 v176; // r9
  char *v177; // rdi
  struct _KTHREAD *v178; // rax
  signed __int64 *v179; // rdi
  __int64 *v180; // rsi
  PVOID v181; // rdi
  signed __int64 *v182; // rsi
  __int64 *v183; // r14
  ULONG Tag; // [rsp+20h] [rbp-E0h]
  int *v185; // [rsp+28h] [rbp-D8h]
  NTSTATUS v186; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h]
  unsigned int v188; // [rsp+70h] [rbp-90h]
  __int64 v189[2]; // [rsp+80h] [rbp-80h] BYREF
  int v190; // [rsp+90h] [rbp-70h]
  PVOID v191; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  volatile signed __int64 *v193; // [rsp+A8h] [rbp-58h] BYREF
  int v194; // [rsp+B0h] [rbp-50h]
  int v195; // [rsp+B4h] [rbp-4Ch] BYREF
  struct _LIST_ENTRY *v196; // [rsp+B8h] [rbp-48h]
  __int64 v197; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v198[2]; // [rsp+C8h] [rbp-38h] BYREF
  int v199; // [rsp+CCh] [rbp-34h]
  __int64 v200; // [rsp+D0h] [rbp-30h]
  void *Source1[2]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v202; // [rsp+F0h] [rbp-10h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+F8h] [rbp-8h]
  PVOID v204; // [rsp+100h] [rbp+0h]
  __int64 v205; // [rsp+108h] [rbp+8h] BYREF
  PVOID v206; // [rsp+110h] [rbp+10h] BYREF
  PVOID v207; // [rsp+118h] [rbp+18h] BYREF
  __int64 v208; // [rsp+120h] [rbp+20h] BYREF
  void *v209; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int16 *v210; // [rsp+130h] [rbp+30h]
  __int128 v211; // [rsp+138h] [rbp+38h] BYREF
  __int128 v212; // [rsp+148h] [rbp+48h]
  __int128 v213; // [rsp+158h] [rbp+58h]
  __int64 v214; // [rsp+168h] [rbp+68h]
  char v215; // [rsp+1C0h] [rbp+C0h]
  int v217; // [rsp+1D0h] [rbp+D0h] BYREF
  POBJECT_TYPE ObjectType; // [rsp+1D8h] [rbp+D8h]

  ObjectType = a4;
  v217 = a3;
  v13 = a11;
  v14 = 0LL;
  v202 = 0LL;
  v214 = 0LL;
  v198[1] = 0;
  *(_OWORD *)a11 = 0LL;
  v13[2] = 0LL;
  v15 = a2;
  v16 = a3;
  v17 = a5;
  v208 = 0LL;
  P = 0LL;
  v193 = 0LL;
  v194 = 64;
  v211 = 0LL;
  v212 = 0LL;
  v213 = 0LL;
  *(_OWORD *)v189 = 0LL;
  if ( a12 )
    *a12 = 0;
  v19 = ObpCaseInsensitive == 0;
  v20 = 0LL;
  v21 = a9;
  v186 = 0;
  v195 = 0;
  *a13 = 0LL;
  v198[0] = 16;
  v215 = 1;
  v191 = 0LL;
  Object = 0LL;
  v199 = -1;
  v200 = v21;
  if ( !v19
    && (a4->TypeInfo.ObjectTypeFlags & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v16 = a3 | 0x40;
    v217 = a3 | 0x40;
  }
  v22 = a8;
  v23 = 1;
  if ( (v16 & 0x400) == 0 )
    v23 = v17;
  v188 = v23;
  v24 = v16 & 0x40 | 1;
  if ( a8 )
    v24 = v16 & 0x40;
  v190 = v24;
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0, 0LL, v17, 0x746C6644u, &v202, 0LL, &v208);
    v186 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v208) )
    {
      v199 &= HIDWORD(v208);
      if ( (v199 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
      {
        ObfDereferenceObject(v202);
        return -1073741790;
      }
    }
    if ( *(_WORD *)v15 )
    {
      if ( **(_WORD **)(v15 + 8) == 92 )
      {
        Object = v202;
        if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)v202 - 24) ^ ((unsigned __int16)((_WORD)v202 - 48) >> 8))) != *((_BYTE *)IoFileObjectType + 40) )
        {
          ObfDereferenceObject(v202);
          return -1073741765;
        }
      }
      else
      {
        Object = v202;
      }
    }
    else
    {
      v181 = v202;
      Object = v202;
      if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)v202 - 24) ^ ((unsigned __int16)((_WORD)v202 - 48) >> 8))) == ObpDirectoryObjectType->Index )
      {
        v186 = ObReferenceObjectByPointer(v202, 0, ObjectType, a5);
        if ( v186 >= 0 )
          v14 = (ULONG_PTR)v181;
        ObfDereferenceObject(v181);
        *a13 = v14;
        return v186;
      }
    }
    v27 = *(__m128i *)v15;
    *(_OWORD *)v189 = *(_OWORD *)v15;
    if ( SepLearningModeTokenCount )
    {
      *((_QWORD *)&v212 + 1) = v15;
      *(_QWORD *)&v212 = &ObjectType->Name;
      *(_QWORD *)&v213 = BugCheckParameter1;
      SeSetLearningModeObjectInformation((__int64)&v211);
      v28 = (_WORD *)v189[1];
      epi16 = WORD1(v189[0]);
      v29 = v189[0];
      v27 = *(__m128i *)v189;
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
  if ( !*(_WORD *)v15 || **(_WORD **)(v15 + 8) != 92 )
    return -1073741765;
  if ( *(_WORD *)v15 == 2 )
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
  *((_QWORD *)&v212 + 1) = v15;
  *(_QWORD *)&v212 = &a4->Name;
  *(_QWORD *)&v213 = 0LL;
  SeSetLearningModeObjectInformation((__int64)&v211);
  while ( 1 )
  {
    a4 = ObjectType;
LABEL_128:
    if ( *(_WORD *)v15 < 8u || **(_QWORD **)(v15 + 8) != 0x5C003F003F005CLL )
    {
      if ( *(_WORD *)v15 == 6 )
      {
        v134 = *(_QWORD *)(v15 + 8);
        v135 = *(_DWORD *)v134 - 4128860;
        if ( *(_DWORD *)v134 == 4128860 )
          v135 = *(unsigned __int16 *)(v134 + 4) - 63;
        if ( !v135 )
        {
          v136 = (ULONG_PTR *)ObpReferenceCurrentDeviceMap(v16, &v193, 0x5C003F003F005CLL, a4, Tag);
          P = v136;
          if ( v136 )
          {
            if ( *v136 )
            {
              v31 = *v136;
              v41 = ObReferenceObjectByPointer((PVOID)*v136, 0, ObjectType, a5);
              v186 = v41;
              goto LABEL_268;
            }
          }
        }
      }
LABEL_252:
      if ( !Object )
        Object = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(a9);
      v27 = *(__m128i *)v15;
      v28 = *(_WORD **)(v15 + 8);
      *(_OWORD *)v189 = *(_OWORD *)v15;
      goto LABEL_27;
    }
    if ( a4 == (POBJECT_TYPE)IoFileObjectType
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0
      && *(_WORD *)v15 >= 0xEu )
    {
      NtSystemRoot = RtlGetNtSystemRoot();
      v115 = RtlUpcaseUnicodeChar(*NtSystemRoot);
      v116 = RtlUpcaseUnicodeChar(*(_WORD *)(*(_QWORD *)(v15 + 8) + 8LL));
      if ( (ObpDriveRemappingMitigation & 1) != 0 )
      {
        v117 = *(_QWORD *)(v15 + 8);
        if ( v115 == v116 && *(_WORD *)(v117 + 10) == 58 && *(_WORD *)(v117 + 12) == 92 )
          v217 = v16 | 0x800;
      }
    }
    CurrentThread = KeGetCurrentThread();
    P = 0LL;
    v193 = 0LL;
    Process = (__int64)CurrentThread->Process;
    ProcessServerSilo = PsGetProcessServerSilo(Process);
    ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
    v82 = ProcessServerSilo != ThreadServerSilo;
    v83 = ProcessServerSilo != ThreadServerSilo;
    if ( (((*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0) & !_bittest(&v217, 0xBu)) == 0
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
        v193 = ServerSiloGlobals;
        _m_prefetchw(ServerSiloGlobals);
        v89 = *ServerSiloGlobals;
        if ( (*ServerSiloGlobals & 0xF) != 0 )
        {
          do
          {
            v88 = (signed __int64 *)(v89 - 1);
            v90 = _InterlockedCompareExchange64(v193, v89 - 1, v89);
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
          v86 = (volatile signed __int64 *)(*v193 & 0xFFFFFFFFFFFFFFF0uLL);
          P = (PVOID)v86;
          if ( v86 )
          {
            if ( _InterlockedExchangeAdd64(v86 + 30, 0xFuLL) <= 0 )
              __fastfail(0xEu);
            v118 = (signed __int64 *)v193;
            _m_prefetchw((const void *)v193);
            v119 = *v118;
            while ( (unsigned __int64)(v119 & 0xF) + 14 <= 0xF
                 && v86 == (volatile signed __int64 *)(v119 & 0xFFFFFFFFFFFFFFF0uLL) )
            {
              v120 = v119;
              v119 = _InterlockedCompareExchange64(v193, v119 + 14, v119);
              if ( v120 == v119 )
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
          v193 = 0LL;
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
    v209 = 0LL;
    if ( (int)SeGetTokenDeviceMap(p_Lock, &v209) >= 0 )
      P = v209;
    ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
    v86 = (volatile signed __int64 *)P;
    if ( !P )
      goto LABEL_143;
LABEL_158:
    v15 = a2;
    if ( !v86 || !*v86 )
      goto LABEL_252;
    v95 = *(_WORD **)(a2 + 8);
    v96 = *(_WORD *)a2 - 8;
    epi16 = *(_WORD *)(a2 + 2) - 8;
    v28 = v95 + 4;
    v189[1] = (__int64)(v95 + 4);
    v29 = v96;
    LOWORD(v189[0]) = v96;
    WORD1(v189[0]) = epi16;
    if ( ObjectType != (POBJECT_TYPE)IoFileObjectType )
      goto LABEL_29;
    if ( (v190 & 1) == 0 )
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
        v28 = (_WORD *)v189[1];
        epi16 = WORD1(v189[0]);
        v29 = v189[0];
        v86 = (volatile signed __int64 *)P;
LABEL_29:
        v31 = *v86;
        v27 = *(__m128i *)v189;
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
    v177 = (char *)PsGetServerSiloGlobals(*((_QWORD *)v86 + 2));
    v178 = KeGetCurrentThread();
    v179 = (signed __int64 *)(v177 + 120);
    --v178->SpecialApcDisable;
    v180 = KeAbPreAcquire((__int64)v179, 0LL);
    if ( _InterlockedCompareExchange64(v179, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v179, 0, v180, (unsigned __int64)v179);
    if ( v180 )
      *((_BYTE *)v180 + 10) = 1;
    v31 = ObFastReferenceObjectLocked((volatile signed __int64 *)((char *)v86 + v98), 0x554C624Fu);
    if ( _InterlockedCompareExchange64(v179, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v179);
    KeAbPostRelease((ULONG_PTR)v179);
    KeLeaveGuardedRegion();
    if ( !v31 )
      goto LABEL_399;
LABEL_173:
    v189[1] += 4LL;
    v15 = a2;
    LOWORD(v189[0]) -= 4;
    v16 = v217;
    v104 = ObHeaderCookie ^ *(_BYTE *)(v31 - 24) ^ ((unsigned __int16)(v31 - 48) >> 8);
    v205 = 0LL;
    if ( v104 == *(_BYTE *)(IoDeviceObjectType + 40) )
      v105 = IopParseDevice(v31, v217, a2, (__int64)v189, a6, a7, (__int64)v198, (__int64)&v205);
    else
      v105 = ObpParseSymbolicLinkEx(
               (unsigned __int16 *)v31,
               ObjectType,
               (struct _SECURITY_SUBJECT_CONTEXT *)a10,
               v188,
               v217,
               a2,
               (unsigned __int16 *)v189,
               a6,
               a7,
               (__int64)v198,
               (unsigned __int16 **)&v205);
    v186 = v105;
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
    v41 = v186;
    v20 = v191;
    if ( v186 < 0 )
    {
LABEL_246:
      ObpReleaseLookupContext((__int64)v13);
      v20 = v191;
      goto LABEL_269;
    }
    v31 = v205;
    if ( v186 != 260 )
    {
      if ( v186 != 872 )
        v20 = (void *)v205;
      v191 = v20;
    }
    if ( (v199 & *(_DWORD *)(a10 + 24)) != *(_DWORD *)(a10 + 24) )
    {
LABEL_421:
      v186 = -1073741790;
      goto LABEL_246;
    }
    if ( v186 != 280 && v186 != 260 && v186 != 872 )
      break;
    if ( (v16 & 0x1000) != 0 && v186 != 872 )
    {
LABEL_408:
      v186 = -1073740533;
      goto LABEL_246;
    }
    if ( !--v194 )
      goto LABEL_456;
    if ( !*(_WORD *)a2 )
      goto LABEL_245;
    v108 = (unsigned __int64)P;
    if ( v193 )
    {
      _m_prefetchw((const void *)v193);
      v109 = *v193;
      while ( (v108 ^ v109) < 0xF )
      {
        v110 = v109;
        v109 = _InterlockedCompareExchange64(v193, v109 + 1, v109);
        if ( v110 == v109 )
          goto LABEL_194;
      }
    }
    ObDereferenceDeviceMap((PVOID)v108);
LABEL_194:
    v111 = *(__int16 **)(a2 + 8);
    P = 0LL;
    v112 = *v111;
    if ( v186 == 280 )
    {
      if ( v112 == 92 )
        goto LABEL_245;
LABEL_73:
      v27 = *(__m128i *)v15;
      v28 = *(_WORD **)(v15 + 8);
      *(__m128i *)v189 = v27;
      epi16 = _mm_extract_epi16(v27, 1);
      v29 = _mm_cvtsi128_si32(v27);
LABEL_30:
      v32 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v31 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v31 - 48) >> 8)];
      v33 = *(__int64 (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **))(v32 + 144);
      if ( !v33 )
      {
        if ( (POBJECT_TYPE)v32 != ObpDirectoryObjectType )
          goto LABEL_459;
        v204 = (PVOID)v31;
        if ( v29 && *v28 == 92 )
        {
          ++v28;
          v29 -= 2;
          epi16 -= 2;
          v189[1] = (__int64)v28;
          WORD1(v189[0]) = epi16;
          LOWORD(v189[0]) = v29;
          v27 = *(__m128i *)v189;
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
            v189[1] = (__int64)v28;
            LOWORD(v189[0]) = v29;
          }
          while ( !v19 );
        }
        v50 = epi16 - (LOWORD(Source1[0]) - v29);
        LOWORD(Source1[0]) -= v29;
        WORD1(v189[0]) = v50;
        if ( !LOWORD(Source1[0]) )
        {
LABEL_245:
          v186 = -1073741773;
          goto LABEL_246;
        }
        if ( (_BYTE)v188 && (*(_DWORD *)(a10 + 12) & 1) == 0 )
        {
          v185 = &v195;
          v215 = ObpCheckTraverseAccess(v31, v188, a10);
          if ( v215 )
          {
            v29 = v189[0];
            goto LABEL_84;
          }
          v41 = v195;
          if ( v195 >= 0 )
          {
            v41 = -1073741772;
            v195 = -1073741772;
          }
          if ( LOWORD(v189[0]) || !a8 )
            goto LABEL_266;
LABEL_301:
          v51 = 1;
        }
        else
        {
LABEL_84:
          if ( a8 && !v29 )
            goto LABEL_301;
          v51 = 0;
        }
        if ( *v13 )
        {
          v52 = (volatile signed __int32 *)(v31 + 296);
          v53 = KeAbPreAcquire(v31 + 296, 0LL);
          v54 = v53;
          if ( v51 )
          {
            if ( _interlockedbittestandset64(v52, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v31 + 296), v53, v31 + 296);
          }
          else if ( _InterlockedCompareExchange64((volatile signed __int64 *)v52, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx((signed __int64 *)(v31 + 296), 0, v53, v31 + 296);
          }
          if ( v54 )
            *((_BYTE *)v54 + 10) = 1;
          v55 = *v13;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*v13 + 296), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v55 + 296));
          KeAbPostRelease(v55 + 296);
          if ( *((_BYTE *)v13 + 22) )
          {
            ObDereferenceObjectDeferDeleteWithTag((PVOID)*v13, 0x554C624Fu);
            *((_BYTE *)v13 + 22) = 0;
          }
          *v13 = v31;
          *((_BYTE *)v13 + 21) = v51;
        }
        else if ( v51 )
        {
          ObpLockDirectoryExclusive(v13, v31, v28);
        }
        else
        {
          *v13 = v31;
          *((_BYTE *)v13 + 21) = 0;
          v129 = KeGetCurrentThread();
          --v129->KernelApcDisable;
          v130 = KeAbPreAcquire(v31 + 296, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 296), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v31 + 296), 0, v130, v31 + 296);
          if ( v130 )
            *((_BYTE *)v130 + 10) = 1;
        }
        v56 = (unsigned __int16 *)Source1[1];
        v57 = LOWORD(Source1[0]) >> 1;
        if ( v57 < 4 )
        {
          v60 = 0;
        }
        else
        {
          v58 = 0LL;
          do
          {
            v59 = *(_QWORD *)v56;
            if ( (*(_QWORD *)v56 & 0xFF80FF80FF80FF80uLL) != 0 )
            {
              v131 = 4LL;
              do
              {
                v132 = (unsigned __int16)v59;
                if ( (unsigned __int16)v59 >= 0x61u )
                {
                  if ( (unsigned __int16)v59 <= 0x7Au )
                    v132 = (unsigned int)(unsigned __int16)v59 - 32;
                  else
                    v132 = RtlUpcaseUnicodeChar(v59);
                }
                *(_QWORD *)&v133 = v59;
                *((_QWORD *)&v133 + 1) = v132;
                v59 = v133 >> 16;
                --v131;
              }
              while ( v131 );
            }
            else
            {
              v59 &= 0xFFDFFFDFFFDFFFDFuLL;
            }
            v56 += 4;
            v57 -= 4;
            v58 = v59 + (v58 >> 1) + 3 * v58;
          }
          while ( v57 >= 4 );
          v13 = a11;
          v60 = v58 + HIDWORD(v58);
        }
        while ( v57 )
        {
          v61 = *v56++;
          --v57;
          v62 = (v60 >> 1) + 3 * v60;
          if ( v61 >= 0x61 )
          {
            if ( v61 > 0x7A )
            {
              v60 = RtlUpcaseUnicodeChar(v61) + v62;
              continue;
            }
            v62 -= 32;
          }
          v60 = v61 + v62;
        }
        v63 = v190;
        v64 = v13 + 2;
        *((_DWORD *)v13 + 4) = v60;
        LODWORD(Object) = v63 & 0x40;
        v65 = (unsigned __int8 *)v13 + 20;
        v66 = v60 % 0x25;
        v67 = (__int64 **)(*v13 + 8 * v66);
        *((_BYTE *)v13 + 20) = v66;
        v68 = *v67;
        if ( !*v67 )
        {
LABEL_113:
          v69 = 0LL;
          v70 = v65;
          Object = 0LL;
          goto LABEL_335;
        }
        while ( 1 )
        {
          if ( *((_DWORD *)v68 + 4) == *v64 )
          {
            Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
            if ( LOWORD(Source1[0]) == *(_WORD *)(v71 + 8) )
            {
              v73 = *(char **)(v71 + 16);
              v74 = LOWORD(Source1[0]);
              v75 = (unsigned __int16 *)((char *)Source1[1] + LOWORD(Source1[0]));
              if ( v72 )
              {
                v76 = RtlCompareMemory(Source1[1], v73, LOWORD(Source1[0]));
                if ( v76 != v74 )
                {
                  v121 = 2 * (v76 >> 1);
                  v122 = (unsigned __int16 *)((char *)Source1[1] + v121);
                  v123 = &v73[v121];
                  while ( v122 < v75 )
                  {
                    v124 = *v122;
                    v125 = *(unsigned __int16 *)v123;
                    if ( (_WORD)v124 != (_WORD)v125 )
                    {
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
                      if ( (unsigned int)v125 >= 0x61 )
                      {
                        if ( (unsigned int)v125 > 0x7A )
                        {
                          if ( Flink && (unsigned __int16)v125 >= 0xC0u )
                            LOWORD(v125) = *((_WORD *)&Flink->Flink
                                           + (v125 & 0xF)
                                           + *((unsigned __int16 *)&Flink->Flink
                                             + ((unsigned __int8)v125 >> 4)
                                             + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v125 >> 8))))
                                         + v125;
                        }
                        else
                        {
                          LOWORD(v125) = v125 - 32;
                        }
                      }
                      if ( (_WORD)v124 != (_WORD)v125 )
                        goto LABEL_111;
                    }
                    ++v122;
                    v123 += 2;
                  }
                }
LABEL_117:
                v64 = v13 + 2;
                Object = (PVOID)v68[1];
                v69 = (struct _LIST_ENTRY *)Object;
                v70 = (unsigned __int8 *)v13 + 20;
                v13[1] = (ULONG_PTR)v67;
                if ( v69 )
                  goto LABEL_118;
LABEL_335:
                v149 = v190;
                if ( (v190 & 1) == 0 )
                  goto LABEL_118;
                v150 = (struct _LIST_ENTRY *)*v13;
                while ( 2 )
                {
                  while ( 2 )
                  {
                    Blink = v69;
                    v152 = (int)v150[21].Flink;
                    if ( (v152 & 4) != 0 )
                    {
                      if ( (v152 & 0x10) != 0 && (v149 & 6) == 0 )
                      {
                        if ( RtlIsSandboxedToken((PSECURITY_SUBJECT_CONTEXT)(a10 + 32), v188) )
                          v149 |= 2u;
                        else
                          v149 |= 4u;
                        v190 = v149;
                      }
                      if ( ((__int64)v150[21].Flink & 0x10) == 0 || (v149 & 2) != 0 )
                        Blink = v150[19].Blink;
                    }
                    else
                    {
                      v153 = v150[19].Flink;
                      if ( !v153 )
                        goto LABEL_118;
                      if ( v153 == P )
                      {
                        v150 = (struct _LIST_ENTRY *)*((_QWORD *)P + 1);
                        goto LABEL_351;
                      }
                      v154 = PsGetCurrentServerSiloGlobals();
                      v155 = KeGetCurrentThread();
                      v156 = (signed __int64 *)&v154[7].Blink;
                      --v155->SpecialApcDisable;
                      v157 = KeAbPreAcquire((__int64)&v154[7].Blink, 0LL);
                      if ( _InterlockedCompareExchange64(v156, 17LL, 0LL) )
                        ExfAcquirePushLockSharedEx(v156, 0, v157, (unsigned __int64)v156);
                      if ( v157 )
                        *((_BYTE *)v157 + 10) = 1;
                      v158 = v150[19].Flink;
                      if ( v158 )
                        Blink = v158->Blink;
                      if ( _InterlockedCompareExchange64(v156, 0LL, 17LL) != 17 )
                        ExfReleasePushLockShared(v156);
                      KeAbPostRelease((ULONG_PTR)v156);
                      KeLeaveGuardedRegion();
                    }
                    v150 = Blink;
LABEL_351:
                    Flink = v150;
                    if ( !v150 )
                      goto LABEL_118;
                    v159 = *((_BYTE *)v13 + 22);
                    v160 = KeAbPreAcquire((__int64)&v150[18].Blink, 0LL);
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v150[18].Blink, 17LL, 0LL)
                      && !ExfTryAcquirePushLockSharedEx((signed __int64 *)&v150[18].Blink, 0) )
                    {
                      if ( v160 )
                        KeAbPostReleaseEx((ULONG_PTR)&v150[18].Blink, (ULONG_PTR)v160);
                      ObfReferenceObjectWithTag(v150, 0x554C624Fu);
                      v182 = (signed __int64 *)*v13;
                      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*v13 + 296), 0LL, 17LL) != 17 )
                        ExfReleasePushLockShared(v182 + 37);
                      KeAbPostRelease((ULONG_PTR)(v182 + 37));
                      v183 = KeAbPreAcquire((__int64)&v150[18].Blink, 0LL);
                      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v150[18].Blink, 17LL, 0LL) )
                        ExfAcquirePushLockSharedEx(
                          (signed __int64 *)&v150[18].Blink,
                          0,
                          v183,
                          (unsigned __int64)&v150[18].Blink);
                      if ( v183 )
                        *((_BYTE *)v183 + 10) = 1;
                      v162 = 1;
                    }
                    else
                    {
                      if ( v160 )
                        *((_BYTE *)v160 + 10) = 1;
                      v161 = (signed __int64 *)*v13;
                      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*v13 + 296), 0LL, 17LL) != 17 )
                        ExfReleasePushLockShared(v161 + 37);
                      KeAbPostRelease((ULONG_PTR)(v161 + 37));
                      v162 = 0;
                    }
                    *((_BYTE *)v13 + 22) = v162;
                    if ( v159 )
                      ObDereferenceObjectDeferDeleteWithTag((PVOID)*v13, 0x554C624Fu);
                    v163 = *v70;
                    v164 = v190 & 0x40;
                    *v13 = (ULONG_PTR)v150;
                    LODWORD(Object) = v164;
                    p_Flink = &v150->Flink + v163;
                    v166 = *p_Flink;
                    if ( !*p_Flink )
                    {
LABEL_364:
                      v149 = v190;
                      v69 = 0LL;
                      Object = 0LL;
                      continue;
                    }
                    break;
                  }
                  while ( 1 )
                  {
                    if ( LODWORD(v166[1].Flink) != *v64 )
                      goto LABEL_362;
                    v196 = PsGetCurrentServerSiloGlobals()[75].Flink;
                    if ( LOWORD(Source1[0]) != *(unsigned __int16 *)(v167 + 8) )
                      goto LABEL_362;
                    v169 = *(char **)(v167 + 16);
                    v170 = LOWORD(Source1[0]);
                    v210 = (unsigned __int16 *)((char *)Source1[1] + LOWORD(Source1[0]));
                    if ( v168 )
                      break;
                    if ( !memcmp(Source1[1], v169, LOWORD(Source1[0])) )
                      goto LABEL_368;
LABEL_362:
                    p_Flink = &v166->Flink;
                    v166 = v166->Flink;
                    if ( !v166 )
                    {
                      v150 = Flink;
                      goto LABEL_364;
                    }
                  }
                  v171 = RtlCompareMemory(Source1[1], v169, LOWORD(Source1[0]));
                  if ( v171 != v170 )
                  {
                    v172 = 2 * (v171 >> 1);
                    v173 = (unsigned __int16 *)((char *)Source1[1] + v172);
                    v174 = &v169[v172];
                    while ( v173 < v210 )
                    {
                      v175 = *v173;
                      v176 = *(unsigned __int16 *)v174;
                      if ( (_WORD)v175 != (_WORD)v176 )
                      {
                        if ( (unsigned int)v175 >= 0x61 )
                        {
                          if ( (unsigned int)v175 > 0x7A )
                          {
                            if ( v196 && (unsigned __int16)v175 >= 0xC0u )
                              LOWORD(v175) = *((_WORD *)&v196->Flink
                                             + (v175 & 0xF)
                                             + *((unsigned __int16 *)&v196->Flink
                                               + ((unsigned __int8)v175 >> 4)
                                               + (unsigned int)*((unsigned __int16 *)&v196->Flink + (v175 >> 8))))
                                           + v175;
                          }
                          else
                          {
                            LOWORD(v175) = v175 - 32;
                          }
                        }
                        if ( (unsigned int)v176 >= 0x61 )
                        {
                          if ( (unsigned int)v176 > 0x7A )
                          {
                            if ( v196 && (unsigned __int16)v176 >= 0xC0u )
                              LOWORD(v176) = *((_WORD *)&v196->Flink
                                             + (v176 & 0xF)
                                             + *((unsigned __int16 *)&v196->Flink
                                               + ((unsigned __int8)v176 >> 4)
                                               + (unsigned int)*((unsigned __int16 *)&v196->Flink + (v176 >> 8))))
                                           + v176;
                          }
                          else
                          {
                            LOWORD(v176) = v176 - 32;
                          }
                        }
                        if ( (_WORD)v175 != (_WORD)v176 )
                          goto LABEL_362;
                      }
                      ++v173;
                      v174 += 2;
                    }
                  }
LABEL_368:
                  Object = v166->Blink;
                  v69 = (struct _LIST_ENTRY *)Object;
                  v13[1] = (ULONG_PTR)p_Flink;
                  if ( !v69 )
                  {
                    v150 = Flink;
                    v149 = v190;
                    continue;
                  }
                  break;
                }
LABEL_118:
                v31 = (ULONG_PTR)Object;
                if ( !v215 )
                {
                  if ( Object )
                  {
                    v41 = v195;
                  }
                  else
                  {
LABEL_323:
                    if ( LOWORD(v189[0]) )
                    {
                      v186 = -1073741766;
                      goto LABEL_246;
                    }
                    v138 = a8;
                    if ( !a8 )
                    {
LABEL_456:
                      v186 = -1073741772;
                      goto LABEL_246;
                    }
                    v139 = ObjectType;
                    v140 = v204;
                    v141 = 4LL;
                    v142 = v188;
                    if ( ObjectType == ObpDirectoryObjectType )
                      v141 = 8LL;
                    LOBYTE(v185) = v188;
                    LOBYTE(Tag) = 0;
                    if ( (unsigned __int8)ObCheckCreateObjectAccess(v204, v141, a10, Source1, Tag, v185, &v186) )
                    {
                      v143 = v140[85];
                      if ( v143 == -1
                        || v139 != MmSectionObjectType && v139 != ObpSymbolicLinkObjectType
                        || v143 == (unsigned int)PsGetCurrentProcessSessionId()
                        || SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v142)
                        || (unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Source1) )
                      {
                        v144 = LOWORD(Source1[0]);
                        Pool2 = (void *)ExAllocatePool2(0x100uLL);
                        if ( Pool2 )
                        {
                          if ( (unsigned __int8)ObpInsertDirectoryEntry(v140, v138) )
                          {
                            memmove(Pool2, Source1[1], v144);
                            v146 = (__int64)&v138[-ObpInfoMaskToOffset[*(v138 - 22) & 3] - 48];
                            v147 = *(void **)(v146 + 16);
                            if ( v147 )
                              ExFreePoolWithTag(v147, 0);
                            v148 = (__int16)Source1[0];
                            v31 = (ULONG_PTR)v138;
                            *(_QWORD *)(v146 + 16) = Pool2;
                            v20 = v191;
                            *(_WORD *)(v146 + 8) = v148;
                            *(_WORD *)(v146 + 10) = v148;
                            v186 = 0;
                            goto LABEL_269;
                          }
                          ExFreePoolWithTag(Pool2, 0);
                        }
                        v186 = -1073741670;
                        ObpReleaseLookupContext((__int64)v13);
                        v20 = v191;
                        goto LABEL_269;
                      }
                      goto LABEL_421;
                    }
                    v41 = v186;
                    if ( v186 < 0 )
                    {
LABEL_267:
                      v20 = v191;
                      goto LABEL_268;
                    }
                    v41 = -1073741772;
                  }
LABEL_266:
                  v186 = v41;
                  goto LABEL_267;
                }
                if ( !Object )
                  goto LABEL_323;
                v29 = v189[0];
                if ( !LOWORD(v189[0]) )
                {
                  v137 = *(__int64 (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] + 144);
                  if ( !v137 || v137 != ObpParseSymbolicLinkEx && a8 )
                  {
                    v41 = ObReferenceObjectByPointer(Object, 0, ObjectType, a5);
                    v186 = v41;
                    goto LABEL_267;
                  }
                }
                v28 = (_WORD *)v189[1];
                epi16 = WORD1(v189[0]);
                v27 = *(__m128i *)v189;
                goto LABEL_30;
              }
              if ( !memcmp(Source1[1], v73, LOWORD(Source1[0])) )
                goto LABEL_117;
            }
          }
LABEL_111:
          v67 = (__int64 **)v68;
          v68 = (__int64 *)*v68;
          if ( !v68 )
          {
            v65 = (unsigned __int8 *)v13 + 20;
            v64 = v13 + 2;
            goto LABEL_113;
          }
        }
      }
      v197 = 0LL;
      if ( v33 != ObpParseSymbolicLinkEx )
      {
        if ( a8 )
        {
LABEL_459:
          v186 = -1073741788;
          goto LABEL_246;
        }
        PsReferenceSiloContext((void *)v31);
        if ( *v13 )
        {
          v34 = (__int64 *)(*v13 + 296);
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
        v15 = a2;
        if ( v19 )
        {
          v38 = a10;
          v185 = (int *)a2;
          if ( (char *)v33 == (char *)ExpWin32ParseProcedure )
          {
            v39 = v217;
            v40 = ExpWin32ParseProcedure(
                    v31,
                    (_DWORD)ObjectType,
                    a10,
                    (unsigned __int8)v188,
                    v217,
                    a2,
                    (__int64)v189,
                    a6,
                    a7,
                    (__int64)&v197);
            goto LABEL_44;
          }
        }
        else
        {
          v38 = a10;
          if ( (char *)v33 == (char *)CmpParseKey )
          {
            v39 = v217;
            v40 = CmpParseKey(
                    v31,
                    (_DWORD)ObjectType,
                    a10,
                    (unsigned __int8)v188,
                    v217,
                    a2,
                    (__int64)v189,
                    a6,
                    a7,
                    (__int64)v198,
                    (__int64)&v197);
LABEL_44:
            v186 = v40;
            ObfDereferenceObject((PVOID)v31);
            v41 = v186;
            goto LABEL_45;
          }
          if ( (char *)v33 == (char *)IopParseDevice )
          {
            v39 = v217;
            v40 = IopParseDevice(v31, v217, a2, (__int64)v189, a6, a7, (__int64)v198, (__int64)&v197);
            goto LABEL_44;
          }
          v185 = (int *)a2;
          if ( (char *)v33 == (char *)IopParseFile )
          {
            v39 = v217;
            v40 = IopParseFile(
                    v31,
                    (_DWORD)ObjectType,
                    a10,
                    (unsigned __int8)v188,
                    v217,
                    a2,
                    (__int64)v189,
                    a6,
                    a7,
                    (__int64)v198,
                    (__int64)&v197);
            goto LABEL_44;
          }
        }
        Tag = v217;
        v40 = guard_dispatch_icall_no_overrides(v31);
        v39 = v217;
        goto LABEL_44;
      }
      v15 = a2;
      v38 = a10;
      v39 = v217;
      v41 = ObpParseSymbolicLinkEx(
              (unsigned __int16 *)v31,
              ObjectType,
              (struct _SECURITY_SUBJECT_CONTEXT *)a10,
              v188,
              v217,
              a2,
              (unsigned __int16 *)v189,
              a6,
              a7,
              (__int64)v198,
              (unsigned __int16 **)&v197);
      v186 = v41;
LABEL_45:
      v20 = v191;
      if ( v41 < 0 )
        goto LABEL_246;
      v31 = v197;
      if ( v191 )
      {
        ObDereferenceObjectDeferDelete(v191);
        v41 = v186;
        v20 = 0LL;
        v191 = 0LL;
      }
      if ( v41 != 260 )
      {
        if ( v41 != 872 )
          v20 = (void *)v31;
        v191 = v20;
      }
      if ( (v199 & *(_DWORD *)(v38 + 24)) != *(_DWORD *)(v38 + 24) )
        goto LABEL_421;
      if ( v41 != 280 && v41 != 260 && v41 != 872 )
        break;
      if ( (v39 & 0x1000) != 0 && v41 != 872 )
        goto LABEL_408;
      if ( !--v194 )
        goto LABEL_456;
      if ( !*(_WORD *)v15 )
        goto LABEL_245;
      v42 = (unsigned __int64)P;
      if ( P )
      {
        if ( v193 )
        {
          _m_prefetchw((const void *)v193);
          v43 = *v193;
          while ( (v42 ^ v43) < 0xF )
          {
            v44 = v43;
            v43 = _InterlockedCompareExchange64(v193, v43 + 1, v43);
            if ( v44 == v43 )
              goto LABEL_62;
          }
        }
        ObDereferenceDeviceMap((PVOID)v42);
LABEL_62:
        v41 = v186;
        P = 0LL;
      }
      if ( *v13 )
      {
        v45 = (__int64 *)(*v13 + 296);
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
        v41 = v186;
      }
      v49 = **(_WORD **)(v15 + 8);
      if ( v41 == 280 )
      {
        if ( v49 == 92 )
          goto LABEL_245;
        goto LABEL_73;
      }
      if ( v49 != 92 )
        goto LABEL_245;
      if ( v41 == 872 )
      {
        v16 = v217;
        Object = ObpRootDirectoryObject;
      }
      else
      {
        v207 = 0LL;
        if ( (int)PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v207) >= 0 )
        {
          v77 = v207;
        }
        else
        {
          v77 = ObpRootDirectoryObject;
          v207 = ObpRootDirectoryObject;
        }
        v16 = v217;
        Object = v77;
      }
    }
    else
    {
      if ( v112 != 92 )
        goto LABEL_245;
      if ( v186 == 872 )
      {
        Object = ObpRootDirectoryObject;
      }
      else
      {
        v206 = 0LL;
        if ( (int)PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v206) >= 0 )
        {
          v113 = v206;
        }
        else
        {
          v113 = ObpRootDirectoryObject;
          v206 = ObpRootDirectoryObject;
        }
        Object = v113;
      }
    }
  }
  if ( !v31 )
  {
    v41 = -1073741772;
    v186 = -1073741772;
  }
  v20 = 0LL;
  v191 = 0LL;
LABEL_268:
  if ( v41 < 0 )
    goto LABEL_246;
LABEL_269:
  if ( v20 )
    ObDereferenceObjectDeferDelete(v20);
  if ( v202 )
    ObDereferenceObjectDeferDelete(v202);
  SeClearLearningModeObjectInformation();
  v126 = (unsigned __int64)P;
  if ( P )
  {
    if ( v193 )
    {
      _m_prefetchw((const void *)v193);
      v127 = *v193;
      while ( (v126 ^ v127) < 0xF )
      {
        v128 = v127;
        v127 = _InterlockedCompareExchange64(v193, v127 + 1, v127);
        if ( v128 == v127 )
          goto LABEL_274;
      }
    }
    ObDereferenceDeviceMap((PVOID)v126);
  }
LABEL_274:
  result = v186;
  if ( v186 < 0 )
  {
    v31 = 0LL;
  }
  else if ( a12 && v199 != -1 )
  {
    *a12 = v199;
  }
  *a13 = v31;
  return result;
}
