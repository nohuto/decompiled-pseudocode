/*
 * XREFs of ObpLookupObjectName @ 0x1408A58B0
 * Callers:
 *     ObReferenceObjectByName @ 0x14083B4F0 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObpReleaseLookupContext @ 0x14028EDF0 (ObpReleaseLookupContext.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsGetCurrentProcessSessionId @ 0x1402BAD30 (PsGetCurrentProcessSessionId.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     ObFastReferenceObjectLocked @ 0x1403517CC (ObFastReferenceObjectLocked.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403B48A0 (ObDereferenceObjectDeferDelete.c)
 *     PsGetThreadServerSilo @ 0x1403C24D0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x1403E3CE0 (PsGetPermanentSiloContext.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1403FCA80 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     SeClearLearningModeObjectInformation @ 0x1404014C0 (SeClearLearningModeObjectInformation.c)
 *     PspUnlockThreadSecurityShared @ 0x14040AFC0 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x140414FB0 (PspLockThreadSecurityShared.c)
 *     ObpFastReplenishReference @ 0x140415410 (ObpFastReplenishReference.c)
 *     ObReferenceObjectByPointer @ 0x140424A50 (ObReferenceObjectByPointer.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404704C4 (ExfTryAcquirePushLockSharedEx.c)
 *     SeSetLearningModeObjectInformation @ 0x1404B6F50 (SeSetLearningModeObjectInformation.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ObpCheckTraverseAccess @ 0x14086C170 (ObpCheckTraverseAccess.c)
 *     ObCheckCreateObjectAccess @ 0x14086C5E0 (ObCheckCreateObjectAccess.c)
 *     CmpParseKey @ 0x1408A77F0 (CmpParseKey.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     ObpParseSymbolicLinkEx @ 0x1408E3460 (ObpParseSymbolicLinkEx.c)
 *     RtlIsSandboxedToken @ 0x1408E3950 (RtlIsSandboxedToken.c)
 *     ExpWin32ParseProcedure @ 0x1408F4230 (ExpWin32ParseProcedure.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14096D6B0 (ObpReferenceCurrentDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14096D9AC (SeGetTokenDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14096DC68 (ObpSetCurrentProcessDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x14096DDE4 (ObDereferenceDeviceMap.c)
 *     ObpLockDirectoryExclusive @ 0x1409DF8B8 (ObpLockDirectoryExclusive.c)
 *     IopParseFile @ 0x1409E89F0 (IopParseFile.c)
 *     ObpInsertDirectoryEntry @ 0x140A03DDC (ObpInsertDirectoryEntry.c)
 *     RtlGetNtSystemRoot @ 0x140A0AB50 (RtlGetNtSystemRoot.c)
 *     ObpIsUnsecureName @ 0x140A523B0 (ObpIsUnsecureName.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
        struct _ACCESS_STATE *a10,
        _OWORD *a11,
        int *a12,
        unsigned __int64 **a13)
{
  __int64 v13; // r12
  unsigned __int64 *v14; // r13
  __m128i *v15; // rsi
  unsigned int v16; // r14d
  int v17; // edx
  bool v19; // zf
  void *v20; // rdi
  __int64 v21; // r10
  PVOID v22; // r15
  int v23; // ecx
  int v24; // ecx
  PVOID v25; // rbx
  int result; // eax
  unsigned __int64 *v27; // r15
  __m128i v28; // xmm1
  unsigned __int16 v29; // r9
  _WORD *v30; // r8
  __int16 epi16; // r10
  PVOID v32; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbx
  __int64 ProcessServerSilo; // rsi
  __int64 ThreadServerSilo; // r13
  bool v37; // r14
  bool v38; // r15
  _QWORD *p_Lock; // rsi
  volatile signed __int64 *v40; // r14
  signed __int64 *v41; // rax
  signed __int64 *v42; // rcx
  signed __int64 v43; // rdx
  signed __int64 v44; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rdi
  struct _KTHREAD *v46; // rax
  signed __int64 *p_Blink; // rdi
  char *v48; // rbx
  signed __int64 *v49; // roff
  signed __int64 v50; // rax
  signed __int64 v51; // rtt
  WCHAR *NtSystemRoot; // rax
  WCHAR v53; // bx
  WCHAR v54; // dx
  __int64 v55; // rcx
  _WORD *v56; // rcx
  unsigned __int16 v57; // ax
  __int64 v58; // rax
  __int64 v59; // r15
  signed __int64 *v60; // rbx
  signed __int64 v61; // rdx
  signed __int64 v62; // rax
  signed __int64 v63; // rdi
  unsigned int v64; // edx
  void *v65; // rdi
  char v66; // cl
  NTSTATUS v67; // eax
  __int64 v68; // rsi
  __int64 (__usercall *v69)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rbx
  signed __int64 *v70; // rdi
  signed __int64 v71; // rax
  signed __int64 v72; // rdx
  signed __int64 v73; // rtt
  struct _ACCESS_STATE *v74; // r14
  __int16 v75; // bx
  NTSTATUS v76; // eax
  NTSTATUS v77; // edx
  unsigned __int64 v78; // r14
  signed __int64 v79; // rax
  signed __int64 v80; // rtt
  signed __int64 *v81; // rbx
  signed __int64 v82; // rax
  signed __int64 v83; // rdx
  signed __int64 v84; // rtt
  __int16 v85; // cx
  __int16 v86; // r10
  char v87; // si
  volatile signed __int32 *v88; // rbx
  char *v89; // rax
  char *v90; // rdi
  signed __int64 *v91; // rbx
  unsigned __int16 *v92; // r15
  unsigned int v93; // esi
  unsigned __int64 v94; // rbx
  __int64 v95; // rdi
  unsigned int v96; // r14d
  unsigned int v97; // edx
  int v98; // r14d
  char v99; // r8
  _DWORD *v100; // rdi
  unsigned __int8 *v101; // rdx
  __int64 v102; // rcx
  __int64 **v103; // rsi
  __int64 *v104; // rbx
  unsigned __int8 *v105; // rbx
  int v106; // r14d
  struct _LIST_ENTRY *v107; // r13
  struct _LIST_ENTRY *Blink; // rsi
  int v109; // eax
  struct _LIST_ENTRY *v110; // rax
  signed __int64 v111; // rax
  signed __int64 v112; // rtt
  unsigned __int64 v113; // r8
  signed __int64 v114; // rax
  signed __int64 v115; // rtt
  __int16 *v116; // rax
  __int16 v117; // cx
  PVOID v118; // rax
  unsigned __int64 v119; // r8
  signed __int64 v120; // rax
  signed __int64 v121; // rtt
  struct _KTHREAD *v122; // rax
  char *v123; // rdi
  __int64 v124; // rdx
  int v125; // r8d
  char *v126; // r14
  __int64 v127; // r15
  unsigned __int16 *v128; // r13
  SIZE_T v129; // rax
  __int64 v130; // rax
  unsigned __int16 *v131; // r8
  char *v132; // r14
  unsigned __int64 v133; // r9
  unsigned __int64 v134; // r10
  __int64 v135; // r14
  __int64 v136; // rax
  __int128 v137; // rt0
  __int64 v138; // rax
  int v139; // ecx
  unsigned __int64 **v140; // rax
  __int64 (__usercall *v141)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rax
  char *v142; // r14
  struct _OBJECT_TYPE *v143; // r13
  _DWORD *v144; // rsi
  ACCESS_MASK v145; // edx
  KPROCESSOR_MODE v146; // di
  int v147; // ebx
  unsigned int v148; // ebx
  void *Pool2; // rdi
  __int64 v150; // rbx
  void *v151; // rcx
  __int16 v152; // ax
  char v153; // r15
  _QWORD *v154; // rsi
  signed __int64 *v155; // rsi
  struct _LIST_ENTRY *v156; // rax
  struct _KTHREAD *v157; // rcx
  signed __int64 *v158; // r15
  char *v159; // r14
  struct _LIST_ENTRY *v160; // rax
  char *ServerSiloGlobals; // rdi
  struct _KTHREAD *v162; // rax
  signed __int64 *v163; // rdi
  char *v164; // rsi
  void *v165; // rsi
  signed __int64 *v166; // rsi
  char *v167; // r14
  char v168; // al
  __int64 v169; // rax
  int v170; // r8d
  char *v171; // r14
  __int64 *v172; // rsi
  __int64 v173; // rdx
  int v174; // r8d
  char *v175; // r15
  __int64 v176; // r13
  SIZE_T v177; // rax
  __int64 v178; // rax
  unsigned __int16 *v179; // r8
  char *v180; // r15
  unsigned __int64 v181; // r9
  unsigned __int64 v182; // r10
  __int64 Tag; // [rsp+20h] [rbp-E0h]
  NTSTATUS v184; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v185; // [rsp+64h] [rbp-9Ch]
  PVOID v186; // [rsp+68h] [rbp-98h]
  __int64 v187[2]; // [rsp+70h] [rbp-90h] BYREF
  int v188; // [rsp+80h] [rbp-80h]
  PVOID v189; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  signed __int64 *v191; // [rsp+98h] [rbp-68h] BYREF
  int v192; // [rsp+A0h] [rbp-60h]
  NTSTATUS v193; // [rsp+A4h] [rbp-5Ch] BYREF
  struct _LIST_ENTRY *v194; // [rsp+A8h] [rbp-58h]
  __int64 v195; // [rsp+B0h] [rbp-50h] BYREF
  _WORD v196[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v197; // [rsp+BCh] [rbp-44h]
  __int64 v198; // [rsp+C0h] [rbp-40h]
  void *Source1[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+E0h] [rbp-20h]
  PVOID v201; // [rsp+E8h] [rbp-18h]
  PVOID Object; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v203; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v204; // [rsp+100h] [rbp+0h] BYREF
  PVOID v205; // [rsp+108h] [rbp+8h] BYREF
  __int64 v206; // [rsp+110h] [rbp+10h] BYREF
  void *v207; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int16 *v208; // [rsp+120h] [rbp+20h]
  __int128 v209; // [rsp+128h] [rbp+28h] BYREF
  __int128 v210; // [rsp+138h] [rbp+38h]
  __int128 v211; // [rsp+148h] [rbp+48h]
  __int64 v212; // [rsp+158h] [rbp+58h]
  BOOLEAN v213; // [rsp+1B0h] [rbp+B0h]
  int v215; // [rsp+1C0h] [rbp+C0h] BYREF
  POBJECT_TYPE ObjectType; // [rsp+1C8h] [rbp+C8h]

  ObjectType = a4;
  v215 = a3;
  v13 = (__int64)a11;
  v14 = 0LL;
  Object = 0LL;
  v212 = 0LL;
  v196[1] = 0;
  *a11 = 0LL;
  *(_QWORD *)(v13 + 16) = 0LL;
  v15 = (__m128i *)a2;
  v16 = a3;
  v17 = a5;
  v206 = 0LL;
  P = 0LL;
  v191 = 0LL;
  v192 = 64;
  v209 = 0LL;
  v210 = 0LL;
  v211 = 0LL;
  *(_OWORD *)v187 = 0LL;
  if ( a12 )
    *a12 = 0;
  v19 = ObpCaseInsensitive == 0;
  v20 = 0LL;
  v21 = a9;
  v184 = 0;
  v193 = 0;
  *a13 = 0LL;
  v196[0] = 16;
  v213 = 1;
  v189 = 0LL;
  v186 = 0LL;
  v197 = -1;
  v198 = v21;
  if ( !v19
    && (a4->TypeInfo.ObjectTypeFlags & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v16 = a3 | 0x40;
    v215 = a3 | 0x40;
  }
  v22 = a8;
  v23 = 1;
  if ( (v16 & 0x400) == 0 )
    v23 = v17;
  v185 = v23;
  v24 = v16 & 0x40 | 1;
  if ( a8 )
    v24 = v16 & 0x40;
  v188 = v24;
  if ( !BugCheckParameter1 )
  {
    if ( v15->m128i_i16[0] && *(_WORD *)v15->m128i_i64[1] == 92 )
    {
      if ( v15->m128i_i16[0] == 2 )
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
            *a13 = (unsigned __int64 *)v25;
        }
        else if ( v22 )
        {
          result = ObReferenceObjectByPointer(v22, 0, ObjectType, a5);
          if ( result >= 0 )
            *a13 = (unsigned __int64 *)v22;
        }
        else
        {
          return -1073741811;
        }
        return result;
      }
      if ( SepLearningModeTokenCount )
      {
        *((_QWORD *)&v210 + 1) = v15;
        *(_QWORD *)&v210 = &a4->Name;
        *(_QWORD *)&v211 = 0LL;
        SeSetLearningModeObjectInformation((__int64)&v209);
        goto LABEL_33;
      }
LABEL_34:
      if ( v15->m128i_i16[0] < 8u || *(_QWORD *)v15->m128i_i64[1] != 0x5C003F003F005CLL )
      {
        if ( v15->m128i_i16[0] == 6 )
        {
          v138 = v15->m128i_i64[1];
          v139 = *(_DWORD *)v138 - 4128860;
          if ( *(_DWORD *)v138 == 4128860 )
            v139 = *(unsigned __int16 *)(v138 + 4) - 63;
          if ( !v139 )
          {
            v140 = (unsigned __int64 **)ObpReferenceCurrentDeviceMap(v16, &v191, 0x5C003F003F005CLL);
            P = v140;
            if ( v140 )
            {
              if ( *v140 )
              {
                v27 = *v140;
                v77 = ObReferenceObjectByPointer(*v140, 0, ObjectType, a5);
                v184 = v77;
                goto LABEL_298;
              }
            }
          }
        }
        goto LABEL_241;
      }
      if ( a4 == (POBJECT_TYPE)IoFileObjectType
        && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0
        && v15->m128i_i16[0] >= 0xEu )
      {
        NtSystemRoot = RtlGetNtSystemRoot();
        v53 = RtlUpcaseUnicodeChar(*NtSystemRoot);
        v54 = RtlUpcaseUnicodeChar(*(_WORD *)(v15->m128i_i64[1] + 8));
        if ( (ObpDriveRemappingMitigation & 1) != 0 )
        {
          v55 = v15->m128i_i64[1];
          if ( v53 == v54 && *(_WORD *)(v55 + 10) == 58 && *(_WORD *)(v55 + 12) == 92 )
            v215 = v16 | 0x800;
        }
      }
      CurrentThread = KeGetCurrentThread();
      P = 0LL;
      v191 = 0LL;
      Process = (__int64)CurrentThread->Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
      v37 = ProcessServerSilo != ThreadServerSilo;
      v38 = ProcessServerSilo != ThreadServerSilo;
      if ( (((*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0) & !_bittest(&v215, 0xBu)) != 0
        && ProcessServerSilo == ThreadServerSilo
        && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        PspLockThreadSecurityShared((__int64)CurrentThread, (__int64)KeGetCurrentThread());
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
        PspUnlockThreadSecurityShared((__int64)CurrentThread);
        v38 = v37;
        if ( p_Lock )
        {
          if ( p_Lock[3] == 999LL )
          {
            v38 = 1;
            ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
            goto LABEL_356;
          }
          v207 = 0LL;
          if ( (int)SeGetTokenDeviceMap(p_Lock, &v207) >= 0 )
            P = v207;
          ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
          v40 = (volatile signed __int64 *)P;
          if ( P )
          {
LABEL_75:
            v15 = (__m128i *)a2;
            if ( !*v40 )
            {
LABEL_241:
              if ( !v186 )
                v186 = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(a9);
              v27 = (unsigned __int64 *)v186;
              goto LABEL_135;
            }
            v56 = *(_WORD **)(a2 + 8);
            v57 = *(_WORD *)a2 - 8;
            epi16 = *(_WORD *)(a2 + 2) - 8;
            v30 = v56 + 4;
            v187[1] = (__int64)(v56 + 4);
            v29 = v57;
            LOWORD(v187[0]) = v57;
            WORD1(v187[0]) = epi16;
            if ( ObjectType != (POBJECT_TYPE)IoFileObjectType )
              goto LABEL_91;
            if ( (v188 & 1) == 0 )
              goto LABEL_91;
            if ( v57 < 6u )
              goto LABEL_91;
            if ( v56[5] != 58 )
              goto LABEL_91;
            if ( v56[6] != 92 )
              goto LABEL_91;
            v58 = ((unsigned __int16)*v30 | 0x20u) - 97;
            if ( (unsigned int)v58 >= 0x1A )
              goto LABEL_91;
            v59 = 8 * v58 + 32;
            while ( 1 )
            {
              v60 = (signed __int64 *)((char *)v40 + v59);
              if ( *(volatile signed __int64 *)((char *)v40 + v59) )
                break;
LABEL_370:
              v40 = (volatile signed __int64 *)*((_QWORD *)v40 + 3);
              if ( !v40 )
              {
                v30 = (_WORD *)v187[1];
                epi16 = WORD1(v187[0]);
                v29 = v187[0];
                v40 = (volatile signed __int64 *)P;
LABEL_91:
                v27 = (unsigned __int64 *)*v40;
                v28 = *(__m128i *)v187;
                goto LABEL_92;
              }
            }
            _m_prefetchw(v60);
            v61 = *v60;
            if ( (*v60 & 0xF) != 0 )
            {
              do
              {
                v62 = _InterlockedCompareExchange64(v60, v61 - 1, v61);
                if ( v61 == v62 )
                  break;
                v61 = v62;
              }
              while ( (v62 & 0xF) != 0 );
            }
            v63 = v61;
            v64 = v61 & 0xF;
            v65 = (void *)(v63 & 0xFFFFFFFFFFFFFFF0uLL);
            v186 = v65;
            if ( v64 <= 1 )
            {
              if ( !v64 )
                goto LABEL_363;
              ObpFastReplenishReference((signed __int64 *)((char *)v40 + v59), (ULONG_PTR)v65);
            }
            ObpTraceObjectReferenceIfActive((_DWORD)v65 - 48);
            if ( v65 )
              goto LABEL_89;
LABEL_363:
            ServerSiloGlobals = (char *)PsGetServerSiloGlobals(*((_QWORD *)v40 + 2));
            v162 = KeGetCurrentThread();
            v163 = (signed __int64 *)(ServerSiloGlobals + 120);
            --v162->SpecialApcDisable;
            v164 = (char *)KeAbPreAcquire((__int64)v163, 0LL);
            if ( _InterlockedCompareExchange64(v163, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v163, 0, v164, (__int64)v163);
            if ( v164 )
              v164[10] = 1;
            v165 = (void *)ObFastReferenceObjectLocked((volatile signed __int64 *)((char *)v40 + v59), 0x554C624Fu);
            v186 = v165;
            if ( _InterlockedCompareExchange64(v163, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v163);
            KeAbPostRelease((ULONG_PTR)v163);
            KeLeaveGuardedRegion();
            if ( v165 )
            {
LABEL_89:
              v27 = (unsigned __int64 *)v186;
              LOWORD(v187[0]) -= 4;
              v187[1] += 4LL;
              v15 = (__m128i *)a2;
              v16 = v215;
              v66 = ObHeaderCookie ^ *((char *)v186 - 24) ^ ((unsigned __int16)((_WORD)v186 - 48) >> 8);
              v203 = 0LL;
              if ( v66 == *(_BYTE *)(IoDeviceObjectType + 40) )
                v67 = IopParseDevice((ULONG_PTR)v186, v215, a2, (__int64)v187, a6, a7, (__int64)v196, (__int64)&v203);
              else
                v67 = ObpParseSymbolicLinkEx(
                        v186,
                        ObjectType,
                        v215,
                        a2,
                        (__int64)v187,
                        a6,
                        a7,
                        (__int64)v196,
                        (__int64)&v203);
              v184 = v67;
              _m_prefetchw(v60);
              v111 = *v60;
              do
              {
                if ( ((unsigned __int64)v186 ^ v111) >= 0xF )
                {
                  ObfDereferenceObjectWithTag(v186, 0x554C624Fu);
                  goto LABEL_199;
                }
                v112 = v111;
                v111 = _InterlockedCompareExchange64(v60, v111 + 1, v111);
              }
              while ( v112 != v111 );
              if ( ObpTraceFlags )
                ObpPushStackInfo((__int64)v186 - 48, 0, 1u, 0x554C624Fu);
LABEL_199:
              v77 = v184;
              v20 = v189;
              if ( v184 < 0 )
                goto LABEL_224;
              v27 = (unsigned __int64 *)v203;
              if ( v184 != 260 )
              {
                if ( v184 != 872 )
                  v20 = (void *)v203;
                v189 = v20;
              }
              if ( (v197 & a10->OriginalDesiredAccess) == a10->OriginalDesiredAccess )
              {
                if ( v184 != 280 && v184 != 260 && v184 != 872 )
                {
LABEL_187:
                  if ( !v27 )
                  {
                    v77 = -1073741772;
                    v184 = -1073741772;
                  }
                  v20 = 0LL;
                  v189 = 0LL;
LABEL_298:
                  if ( v77 < 0 )
                  {
LABEL_224:
                    ObpReleaseLookupContext(v13);
                    goto LABEL_225;
                  }
                  goto LABEL_226;
                }
                if ( (v16 & 0x1000) != 0 && v184 != 872 )
                {
LABEL_375:
                  v184 = -1073740533;
                  goto LABEL_224;
                }
                if ( --v192 )
                {
                  if ( !*(_WORD *)a2 )
                    goto LABEL_223;
                  v113 = (unsigned __int64)P;
                  if ( v191 )
                  {
                    _m_prefetchw(v191);
                    v114 = *v191;
                    while ( (v113 ^ v114) < 0xF )
                    {
                      v115 = v114;
                      v114 = _InterlockedCompareExchange64(v191, v114 + 1, v114);
                      if ( v115 == v114 )
                        goto LABEL_213;
                    }
                  }
                  ObDereferenceDeviceMap((PVOID)v113);
LABEL_213:
                  v116 = *(__int16 **)(a2 + 8);
                  P = 0LL;
                  v117 = *v116;
                  if ( v184 != 280 )
                  {
                    if ( v117 == 92 )
                    {
                      if ( v184 == 872 )
                      {
                        v186 = ObpRootDirectoryObject;
                      }
                      else
                      {
                        v204 = 0LL;
                        if ( (int)PsGetPermanentSiloContext(
                                    a9,
                                    PsObjectDirectorySiloContextSlot,
                                    (unsigned __int64 *)&v204) >= 0 )
                        {
                          v118 = v204;
                        }
                        else
                        {
                          v118 = ObpRootDirectoryObject;
                          v204 = ObpRootDirectoryObject;
                        }
                        v186 = v118;
                      }
                      goto LABEL_33;
                    }
LABEL_223:
                    v184 = -1073741773;
                    goto LABEL_224;
                  }
                  if ( v117 == 92 )
                    goto LABEL_223;
LABEL_135:
                  v28 = *v15;
                  v30 = (_WORD *)v15->m128i_i64[1];
                  *(__m128i *)v187 = v28;
                  epi16 = _mm_extract_epi16(v28, 1);
                  v29 = _mm_cvtsi128_si32(v28);
                  goto LABEL_92;
                }
LABEL_457:
                v184 = -1073741772;
                goto LABEL_224;
              }
LABEL_389:
              v184 = -1073741790;
              goto LABEL_224;
            }
            goto LABEL_370;
          }
        }
      }
      if ( !v38 )
      {
        v41 = (signed __int64 *)(Process + 792);
        goto LABEL_51;
      }
LABEL_356:
      v41 = (signed __int64 *)PsGetServerSiloGlobals(ThreadServerSilo);
LABEL_51:
      v42 = v41;
      v191 = v41;
      _m_prefetchw(v41);
      v43 = *v41;
      if ( (*v41 & 0xF) != 0 )
      {
        do
        {
          v42 = (signed __int64 *)(v43 - 1);
          v44 = _InterlockedCompareExchange64(v191, v43 - 1, v43);
          if ( v43 == v44 )
            break;
          v43 = v44;
        }
        while ( (v44 & 0xF) != 0 );
      }
      v40 = (volatile signed __int64 *)(v43 & 0xFFFFFFFFFFFFFFF0uLL);
      P = (PVOID)(v43 & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (v43 & 0xF) == 0 )
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v46 = KeGetCurrentThread();
        p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
        --v46->SpecialApcDisable;
        v48 = (char *)KeAbPreAcquire((__int64)p_Blink, 0LL);
        if ( _InterlockedCompareExchange64(p_Blink, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(p_Blink, 0, v48, (__int64)p_Blink);
        if ( v48 )
          v48[10] = 1;
        v40 = (volatile signed __int64 *)(*v191 & 0xFFFFFFFFFFFFFFF0uLL);
        P = (PVOID)v40;
        if ( v40 )
        {
          if ( _InterlockedExchangeAdd64(v40 + 30, 0xFuLL) <= 0 )
            __fastfail(0xEu);
          v49 = v191;
          _m_prefetchw(v191);
          v50 = *v49;
          while ( (unsigned __int64)(v50 & 0xF) + 14 <= 0xF
               && v40 == (volatile signed __int64 *)(v50 & 0xFFFFFFFFFFFFFFF0uLL) )
          {
            v51 = v50;
            v50 = _InterlockedCompareExchange64(v191, v50 + 14, v50);
            if ( v51 == v50 )
              goto LABEL_65;
          }
          ObDereferenceDeviceMap((PVOID)v40);
        }
LABEL_65:
        if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_Blink);
        KeAbPostRelease((ULONG_PTR)p_Blink);
        KeLeaveGuardedRegion();
      }
      if ( !v40 )
      {
        if ( !v38 )
        {
          v191 = 0LL;
          v40 = (volatile signed __int64 *)ObpSetCurrentProcessDeviceMap(v42);
          P = (PVOID)v40;
        }
        if ( !v40 )
        {
          v15 = (__m128i *)a2;
          goto LABEL_241;
        }
      }
      goto LABEL_75;
    }
    return -1073741765;
  }
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0, 0LL, v17, 0x746C6644u, &Object, 0LL, &v206);
  v184 = result;
  if ( result < 0 )
    return result;
  if ( HIDWORD(v206) )
  {
    v197 &= HIDWORD(v206);
    if ( (v197 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
    {
      ObfDereferenceObject(Object);
      return -1073741790;
    }
  }
  v27 = (unsigned __int64 *)Object;
  if ( v15->m128i_i16[0] )
  {
    if ( *(_WORD *)v15->m128i_i64[1] == 92
      && ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != *((_BYTE *)IoFileObjectType + 40) )
    {
      ObfDereferenceObject(Object);
      return -1073741765;
    }
  }
  else if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) == ObpDirectoryObjectType->Index )
  {
    v184 = ObReferenceObjectByPointer(Object, 0, ObjectType, a5);
    if ( v184 >= 0 )
      v14 = v27;
    ObfDereferenceObject(v27);
    *a13 = v14;
    return v184;
  }
  v28 = *v15;
  *(__m128i *)v187 = *v15;
  if ( SepLearningModeTokenCount )
  {
    *((_QWORD *)&v210 + 1) = v15;
    *(_QWORD *)&v210 = &ObjectType->Name;
    *(_QWORD *)&v211 = BugCheckParameter1;
    SeSetLearningModeObjectInformation((__int64)&v209);
    v30 = (_WORD *)v187[1];
    epi16 = WORD1(v187[0]);
    v29 = v187[0];
    v28 = *(__m128i *)v187;
  }
  else
  {
    v29 = _mm_cvtsi128_si32(v28);
    v30 = (_WORD *)_mm_srli_si128(v28, 8).m128i_u64[0];
    epi16 = _mm_extract_epi16(v28, 1);
  }
LABEL_92:
  while ( 2 )
  {
    v68 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v27 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v27 - 48) >> 8)];
    v69 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(v68 + 144);
    if ( v69 )
    {
      v195 = 0LL;
      if ( v69 == ObpParseSymbolicLinkEx )
      {
        v15 = (__m128i *)a2;
        v74 = a10;
        v75 = v215;
        v77 = ObpParseSymbolicLinkEx(v27, ObjectType, v215, a2, (__int64)v187, a6, a7, (__int64)v196, (__int64)&v195);
        v184 = v77;
        goto LABEL_107;
      }
      if ( a8 )
      {
LABEL_460:
        v184 = -1073741788;
        goto LABEL_224;
      }
      PsReferenceSiloContext(v27);
      if ( *(_QWORD *)v13 )
      {
        v70 = (signed __int64 *)(*(_QWORD *)v13 + 296LL);
        _m_prefetchw(v70);
        v71 = *v70;
        v72 = *v70 - 16;
        if ( (*v70 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v72 = 0LL;
        if ( (v71 & 2) != 0 || (v73 = *v70, v73 != _InterlockedCompareExchange64(v70, v72, v71)) )
          ExfReleasePushLock(v70);
        KeAbPostRelease((ULONG_PTR)v70);
        if ( *(_BYTE *)(v13 + 22) )
        {
          ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v13, 0x554C624Fu);
          *(_BYTE *)(v13 + 22) = 0;
        }
        *(_QWORD *)v13 = 0LL;
        *(_BYTE *)(v13 + 21) = 0;
        KeLeaveCriticalRegionThread();
      }
      v19 = (*(_BYTE *)(v68 + 67) & 1) == 0;
      v15 = (__m128i *)a2;
      if ( v19 )
      {
        v74 = a10;
        if ( (char *)v69 == (char *)ExpWin32ParseProcedure )
        {
          v75 = v215;
          v76 = ExpWin32ParseProcedure(
                  (_DWORD)v27,
                  (_DWORD)ObjectType,
                  (_DWORD)a10,
                  (unsigned __int8)v185,
                  v215,
                  a2,
                  (__int64)v187,
                  a6,
                  a7,
                  (__int64)&v195);
          goto LABEL_106;
        }
      }
      else
      {
        v74 = a10;
        if ( (char *)v69 == (char *)CmpParseKey )
        {
          v75 = v215;
          v76 = CmpParseKey(
                  (_DWORD)v27,
                  (_DWORD)ObjectType,
                  (_DWORD)a10,
                  (unsigned __int8)v185,
                  v215,
                  a2,
                  (__int64)v187,
                  a6,
                  a7,
                  (__int64)v196,
                  (__int64)&v195);
LABEL_106:
          v184 = v76;
          ObfDereferenceObject(v27);
          v77 = v184;
LABEL_107:
          v20 = v189;
          if ( v77 < 0 )
            goto LABEL_224;
          v27 = (unsigned __int64 *)v195;
          if ( v189 )
          {
            ObDereferenceObjectDeferDelete(v189);
            v77 = v184;
            v20 = 0LL;
            v189 = 0LL;
          }
          if ( v77 != 260 )
          {
            if ( v77 != 872 )
              v20 = v27;
            v189 = v20;
          }
          if ( (v197 & v74->OriginalDesiredAccess) != v74->OriginalDesiredAccess )
            goto LABEL_389;
          if ( v77 != 280 && v77 != 260 && v77 != 872 )
            goto LABEL_187;
          if ( (v75 & 0x1000) != 0 && v77 != 872 )
            goto LABEL_375;
          if ( !--v192 )
            goto LABEL_457;
          if ( !v15->m128i_i16[0] )
            goto LABEL_223;
          v78 = (unsigned __int64)P;
          if ( P )
          {
            if ( v191 )
            {
              _m_prefetchw(v191);
              v79 = *v191;
              while ( (v78 ^ v79) < 0xF )
              {
                v80 = v79;
                v79 = _InterlockedCompareExchange64(v191, v79 + 1, v79);
                if ( v80 == v79 )
                  goto LABEL_124;
              }
            }
            ObDereferenceDeviceMap((PVOID)v78);
LABEL_124:
            v77 = v184;
            P = 0LL;
          }
          if ( *(_QWORD *)v13 )
          {
            v81 = (signed __int64 *)(*(_QWORD *)v13 + 296LL);
            _m_prefetchw(v81);
            v82 = *v81;
            v83 = *v81 - 16;
            if ( (*v81 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v83 = 0LL;
            if ( (v82 & 2) != 0 || (v84 = *v81, v84 != _InterlockedCompareExchange64(v81, v83, v82)) )
              ExfReleasePushLock(v81);
            KeAbPostRelease((ULONG_PTR)v81);
            if ( *(_BYTE *)(v13 + 22) )
            {
              ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v13, 0x554C624Fu);
              *(_BYTE *)(v13 + 22) = 0;
            }
            *(_QWORD *)v13 = 0LL;
            *(_BYTE *)(v13 + 21) = 0;
            KeLeaveCriticalRegionThread();
            v77 = v184;
          }
          v85 = *(_WORD *)v15->m128i_i64[1];
          if ( v77 == 280 )
          {
            if ( v85 == 92 )
              goto LABEL_223;
            goto LABEL_135;
          }
          if ( v85 != 92 )
            goto LABEL_223;
          if ( v77 == 872 )
          {
            v16 = v215;
            v186 = ObpRootDirectoryObject;
          }
          else
          {
            v205 = 0LL;
            if ( (int)PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v205) >= 0 )
            {
              v32 = v205;
            }
            else
            {
              v32 = ObpRootDirectoryObject;
              v205 = ObpRootDirectoryObject;
            }
            v16 = v215;
            v186 = v32;
          }
LABEL_33:
          a4 = ObjectType;
          goto LABEL_34;
        }
        if ( (char *)v69 == (char *)IopParseDevice )
        {
          v75 = v215;
          v76 = IopParseDevice((ULONG_PTR)v27, v215, a2, (__int64)v187, a6, a7, (__int64)v196, (__int64)&v195);
          goto LABEL_106;
        }
        if ( (char *)v69 == (char *)IopParseFile )
        {
          v75 = v215;
          v76 = IopParseFile(
                  (_DWORD)v27,
                  (_DWORD)ObjectType,
                  (_DWORD)a10,
                  (unsigned __int8)v185,
                  v215,
                  a2,
                  (__int64)v187,
                  a6,
                  a7,
                  (__int64)v196,
                  (__int64)&v195);
          goto LABEL_106;
        }
      }
      LODWORD(Tag) = v215;
      v76 = guard_dispatch_icall_no_overrides(v27, ObjectType);
      v75 = v215;
      goto LABEL_106;
    }
    if ( (POBJECT_TYPE)v68 != ObpDirectoryObjectType )
      goto LABEL_460;
    v201 = v27;
    if ( v29 && *v30 == 92 )
    {
      ++v30;
      v29 -= 2;
      epi16 -= 2;
      v187[1] = (__int64)v30;
      WORD1(v187[0]) = epi16;
      LOWORD(v187[0]) = v29;
      v28 = *(__m128i *)v187;
    }
    *(__m128i *)Source1 = v28;
    if ( v29 )
    {
      do
      {
        if ( *v30 == 92 )
          break;
        ++v30;
        v19 = v29 == 2;
        v29 -= 2;
        v187[1] = (__int64)v30;
        LOWORD(v187[0]) = v29;
      }
      while ( !v19 );
    }
    v86 = epi16 - (LOWORD(Source1[0]) - v29);
    LOWORD(Source1[0]) -= v29;
    WORD1(v187[0]) = v86;
    if ( !LOWORD(Source1[0]) )
      goto LABEL_223;
    if ( (_BYTE)v185 && (a10->Flags & 1) == 0 )
    {
      v213 = ObpCheckTraverseAccess(v27, v185, a10, v29, v185, &v193);
      if ( !v213 )
      {
        v77 = v193;
        if ( v193 >= 0 )
        {
          v77 = -1073741772;
          v193 = -1073741772;
        }
        if ( LOWORD(v187[0]) || !a8 )
          goto LABEL_296;
        goto LABEL_305;
      }
      v29 = v187[0];
    }
    if ( a8 && !v29 )
    {
LABEL_305:
      v87 = 1;
      goto LABEL_148;
    }
    v87 = 0;
LABEL_148:
    if ( *(_QWORD *)v13 )
    {
      v88 = (volatile signed __int32 *)(v27 + 37);
      v89 = (char *)KeAbPreAcquire((__int64)(v27 + 37), 0LL);
      v90 = v89;
      if ( v87 )
      {
        if ( _interlockedbittestandset64(v88, 0LL) )
          ExfAcquirePushLockExclusiveEx(v27 + 37, v89, (__int64)(v27 + 37));
        if ( v90 )
          v90[10] = 1;
      }
      else
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v88, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v27 + 37, 0, v89, (__int64)(v27 + 37));
        if ( v90 )
          v90[10] = 1;
        v13 = (__int64)a11;
      }
      v91 = *(signed __int64 **)v13;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v13 + 296LL), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v91 + 37);
      KeAbPostRelease((ULONG_PTR)(v91 + 37));
      if ( *(_BYTE *)(v13 + 22) )
      {
        ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v13, 0x554C624Fu);
        *(_BYTE *)(v13 + 22) = 0;
      }
      *(_QWORD *)v13 = v27;
      *(_BYTE *)(v13 + 21) = v87;
    }
    else if ( v87 )
    {
      ObpLockDirectoryExclusive(v13, v27, v30);
    }
    else
    {
      *(_QWORD *)v13 = v27;
      *(_BYTE *)(v13 + 21) = 0;
      v122 = KeGetCurrentThread();
      --v122->KernelApcDisable;
      v123 = (char *)KeAbPreAcquire((__int64)(v27 + 37), 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v27 + 37, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)v27 + 37, 0, v123, (__int64)(v27 + 37));
      if ( v123 )
        v123[10] = 1;
    }
    v92 = (unsigned __int16 *)Source1[1];
    v93 = LOWORD(Source1[0]) >> 1;
    if ( v93 < 4 )
    {
      v96 = 0;
    }
    else
    {
      v94 = 0LL;
      do
      {
        v95 = *(_QWORD *)v92;
        if ( (*(_QWORD *)v92 & 0xFF80FF80FF80FF80uLL) != 0 )
        {
          v135 = 4LL;
          do
          {
            v136 = (unsigned __int16)v95;
            if ( (unsigned __int16)v95 >= 0x61u )
            {
              if ( (unsigned __int16)v95 <= 0x7Au )
                v136 = (unsigned int)(unsigned __int16)v95 - 32;
              else
                v136 = RtlUpcaseUnicodeChar(v95);
            }
            *(_QWORD *)&v137 = v95;
            *((_QWORD *)&v137 + 1) = v136;
            v95 = v137 >> 16;
            --v135;
          }
          while ( v135 );
        }
        else
        {
          v95 &= 0xFFDFFFDFFFDFFFDFuLL;
        }
        v92 += 4;
        v93 -= 4;
        v94 = v95 + (v94 >> 1) + 3 * v94;
      }
      while ( v93 >= 4 );
      v13 = (__int64)a11;
      v96 = v94 + HIDWORD(v94);
    }
    while ( v93 )
    {
      v97 = *v92++;
      --v93;
      v98 = (v96 >> 1) + 3 * v96;
      if ( v97 >= 0x61 )
      {
        if ( v97 > 0x7A )
        {
          v96 = RtlUpcaseUnicodeChar(v97) + v98;
          continue;
        }
        v98 -= 32;
      }
      v96 = v97 + v98;
    }
    v99 = v188;
    v100 = (_DWORD *)(v13 + 16);
    *(_DWORD *)(v13 + 16) = v96;
    LODWORD(v186) = v99 & 0x40;
    v101 = (unsigned __int8 *)(v13 + 20);
    v102 = v96 % 0x25;
    v103 = (__int64 **)(*(_QWORD *)v13 + 8 * v102);
    *(_BYTE *)(v13 + 20) = v102;
    v104 = *v103;
    if ( !*v103 )
    {
LABEL_176:
      v105 = v101;
      v186 = 0LL;
      v27 = 0LL;
      goto LABEL_177;
    }
    while ( 1 )
    {
      if ( *((_DWORD *)v104 + 4) != *v100 )
        goto LABEL_174;
      Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
      if ( LOWORD(Source1[0]) != *(_WORD *)(v124 + 8) )
        goto LABEL_174;
      v126 = *(char **)(v124 + 16);
      v127 = LOWORD(Source1[0]);
      v128 = (unsigned __int16 *)((char *)Source1[1] + LOWORD(Source1[0]));
      if ( v125 )
        break;
      if ( !memcmp(Source1[1], v126, LOWORD(Source1[0])) )
        goto LABEL_261;
LABEL_174:
      v103 = (__int64 **)v104;
      v104 = (__int64 *)*v104;
      if ( !v104 )
      {
        v101 = (unsigned __int8 *)(v13 + 20);
        v100 = (_DWORD *)(v13 + 16);
        goto LABEL_176;
      }
    }
    v129 = RtlCompareMemory(Source1[1], v126, LOWORD(Source1[0]));
    if ( v129 != v127 )
    {
      v130 = 2 * (v129 >> 1);
      v131 = (unsigned __int16 *)((char *)Source1[1] + v130);
      v132 = &v126[v130];
      while ( v131 < v128 )
      {
        v133 = *v131;
        v134 = *(unsigned __int16 *)v132;
        if ( (_WORD)v133 != (_WORD)v134 )
        {
          if ( (unsigned int)v133 >= 0x61 )
          {
            if ( (unsigned int)v133 > 0x7A )
            {
              if ( Flink && (unsigned __int16)v133 >= 0xC0u )
                LOWORD(v133) = *((_WORD *)&Flink->Flink
                               + (v133 & 0xF)
                               + *((unsigned __int16 *)&Flink->Flink
                                 + ((unsigned __int8)v133 >> 4)
                                 + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v133 >> 8))))
                             + v133;
            }
            else
            {
              LOWORD(v133) = v133 - 32;
            }
          }
          if ( (unsigned int)v134 >= 0x61 )
          {
            if ( (unsigned int)v134 > 0x7A )
            {
              if ( Flink && (unsigned __int16)v134 >= 0xC0u )
                LOWORD(v134) = *((_WORD *)&Flink->Flink
                               + (v134 & 0xF)
                               + *((unsigned __int16 *)&Flink->Flink
                                 + ((unsigned __int8)v134 >> 4)
                                 + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v134 >> 8))))
                             + v134;
            }
            else
            {
              LOWORD(v134) = v134 - 32;
            }
          }
          if ( (_WORD)v133 != (_WORD)v134 )
            goto LABEL_174;
        }
        ++v131;
        v132 += 2;
      }
    }
LABEL_261:
    v100 = (_DWORD *)(v13 + 16);
    v186 = (PVOID)v104[1];
    v27 = (unsigned __int64 *)v186;
    v105 = (unsigned __int8 *)(v13 + 20);
    *(_QWORD *)(v13 + 8) = v103;
    if ( v27 )
      goto LABEL_262;
LABEL_177:
    v106 = v188;
    if ( (v188 & 1) == 0 )
      goto LABEL_262;
    v107 = *(struct _LIST_ENTRY **)v13;
    while ( 2 )
    {
      while ( 2 )
      {
        Blink = 0LL;
        v109 = (int)v107[21].Flink;
        if ( (v109 & 4) != 0 )
        {
          if ( (v109 & 0x10) != 0 && (v106 & 6) == 0 )
          {
            if ( (unsigned __int8)RtlIsSandboxedToken(&a10->SubjectSecurityContext) )
              v106 |= 2u;
            else
              v106 |= 4u;
            v188 = v106;
          }
          if ( ((__int64)v107[21].Flink & 0x10) == 0 || (v106 & 2) != 0 )
            Blink = v107[19].Blink;
        }
        else
        {
          v110 = v107[19].Flink;
          if ( !v110 )
            goto LABEL_262;
          if ( v110 == P )
          {
            v107 = (struct _LIST_ENTRY *)*((_QWORD *)P + 1);
            goto LABEL_341;
          }
          v156 = PsGetCurrentServerSiloGlobals();
          v157 = KeGetCurrentThread();
          v158 = (signed __int64 *)&v156[7].Blink;
          --v157->SpecialApcDisable;
          v159 = (char *)KeAbPreAcquire((__int64)&v156[7].Blink, 0LL);
          if ( _InterlockedCompareExchange64(v158, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v158, 0, v159, (__int64)v158);
          if ( v159 )
            v159[10] = 1;
          v160 = v107[19].Flink;
          if ( v160 )
            Blink = v160->Blink;
          if ( _InterlockedCompareExchange64(v158, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v158);
          KeAbPostRelease((ULONG_PTR)v158);
          KeLeaveGuardedRegion();
          v27 = (unsigned __int64 *)v186;
        }
        v107 = Blink;
LABEL_341:
        Flink = v107;
        if ( !v107 )
          goto LABEL_262;
        v153 = *(_BYTE *)(v13 + 22);
        v154 = KeAbPreAcquire((__int64)&v107[18].Blink, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v107[18].Blink, 17LL, 0LL)
          && !ExfTryAcquirePushLockSharedEx((signed __int64 *)&v107[18].Blink, 0) )
        {
          if ( v154 )
            KeAbPostReleaseEx((ULONG_PTR)&v107[18].Blink, (ULONG_PTR)v154);
          ObfReferenceObjectWithTag(v107, 0x554C624Fu);
          v166 = *(signed __int64 **)v13;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v13 + 296LL), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v166 + 37);
          KeAbPostRelease((ULONG_PTR)(v166 + 37));
          v167 = (char *)KeAbPreAcquire((__int64)&v107[18].Blink, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v107[18].Blink, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)&v107[18].Blink, 0, v167, (__int64)&v107[18].Blink);
          if ( v167 )
            v167[10] = 1;
          v168 = 1;
        }
        else
        {
          if ( v154 )
            *((_BYTE *)v154 + 10) = 1;
          v155 = *(signed __int64 **)v13;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v13 + 296LL), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v155 + 37);
          KeAbPostRelease((ULONG_PTR)(v155 + 37));
          v168 = 0;
        }
        *(_BYTE *)(v13 + 22) = v168;
        if ( v153 )
          ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v13, 0x554C624Fu);
        v169 = *v105;
        v170 = v188 & 0x40;
        *(_QWORD *)v13 = v107;
        LODWORD(v186) = v170;
        v171 = (char *)v107 + 8 * v169;
        v172 = *(__int64 **)v171;
        if ( !*(_QWORD *)v171 )
        {
LABEL_416:
          v106 = v188;
          v27 = 0LL;
          v186 = 0LL;
          continue;
        }
        break;
      }
      while ( 1 )
      {
        if ( *((_DWORD *)v172 + 4) != *v100 )
          goto LABEL_414;
        v194 = PsGetCurrentServerSiloGlobals()[75].Flink;
        if ( LOWORD(Source1[0]) != *(unsigned __int16 *)(v173 + 8) )
          goto LABEL_414;
        v175 = *(char **)(v173 + 16);
        v176 = LOWORD(Source1[0]);
        v208 = (unsigned __int16 *)((char *)Source1[1] + LOWORD(Source1[0]));
        if ( v174 )
          break;
        if ( !memcmp(Source1[1], v175, LOWORD(Source1[0])) )
          goto LABEL_431;
LABEL_414:
        v171 = (char *)v172;
        v172 = (__int64 *)*v172;
        if ( !v172 )
        {
          v107 = Flink;
          goto LABEL_416;
        }
      }
      v177 = RtlCompareMemory(Source1[1], v175, LOWORD(Source1[0]));
      if ( v177 != v176 )
      {
        v178 = 2 * (v177 >> 1);
        v179 = (unsigned __int16 *)((char *)Source1[1] + v178);
        v180 = &v175[v178];
        while ( v179 < v208 )
        {
          v181 = *v179;
          v182 = *(unsigned __int16 *)v180;
          if ( (_WORD)v181 != (_WORD)v182 )
          {
            if ( (unsigned int)v181 >= 0x61 )
            {
              if ( (unsigned int)v181 > 0x7A )
              {
                if ( v194 && (unsigned __int16)v181 >= 0xC0u )
                  LOWORD(v181) = *((_WORD *)&v194->Flink
                                 + (v181 & 0xF)
                                 + *((unsigned __int16 *)&v194->Flink
                                   + ((unsigned __int8)v181 >> 4)
                                   + (unsigned int)*((unsigned __int16 *)&v194->Flink + (v181 >> 8))))
                               + v181;
              }
              else
              {
                LOWORD(v181) = v181 - 32;
              }
            }
            if ( (unsigned int)v182 >= 0x61 )
            {
              if ( (unsigned int)v182 > 0x7A )
              {
                if ( v194 && (unsigned __int16)v182 >= 0xC0u )
                  LOWORD(v182) = *((_WORD *)&v194->Flink
                                 + (v182 & 0xF)
                                 + *((unsigned __int16 *)&v194->Flink
                                   + ((unsigned __int8)v182 >> 4)
                                   + (unsigned int)*((unsigned __int16 *)&v194->Flink + (v182 >> 8))))
                               + v182;
              }
              else
              {
                LOWORD(v182) = v182 - 32;
              }
            }
            if ( (_WORD)v181 != (_WORD)v182 )
              goto LABEL_414;
          }
          ++v179;
          v180 += 2;
        }
      }
LABEL_431:
      v186 = (PVOID)v172[1];
      v27 = (unsigned __int64 *)v186;
      *(_QWORD *)(v13 + 8) = v171;
      if ( !v27 )
      {
        v107 = Flink;
        v106 = v188;
        continue;
      }
      break;
    }
LABEL_262:
    if ( v213 )
    {
      if ( !v27 )
        goto LABEL_326;
      v29 = v187[0];
      if ( !LOWORD(v187[0]) )
      {
        v141 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v27 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v27 - 48) >> 8)] + 144);
        if ( !v141 || v141 != ObpParseSymbolicLinkEx && a8 )
        {
          v77 = ObReferenceObjectByPointer(v27, 0, ObjectType, a5);
          v184 = v77;
          goto LABEL_297;
        }
      }
      v30 = (_WORD *)v187[1];
      epi16 = WORD1(v187[0]);
      v28 = *(__m128i *)v187;
      continue;
    }
    break;
  }
  if ( v27 )
  {
    v77 = v193;
    goto LABEL_296;
  }
LABEL_326:
  if ( LOWORD(v187[0]) )
  {
    v184 = -1073741766;
    goto LABEL_224;
  }
  v142 = a8;
  if ( !a8 )
    goto LABEL_457;
  v143 = ObjectType;
  v144 = v201;
  v145 = 4;
  v146 = v185;
  if ( ObjectType == ObpDirectoryObjectType )
    v145 = 8;
  LOBYTE(Tag) = 0;
  if ( !ObCheckCreateObjectAccess((ULONG_PTR *)v201, v145, a10, (__int64)Source1, Tag, v185, &v184) )
  {
    v77 = v184;
    if ( v184 < 0 )
    {
LABEL_297:
      v20 = v189;
      goto LABEL_298;
    }
    v77 = -1073741772;
LABEL_296:
    v184 = v77;
    goto LABEL_297;
  }
  v147 = v144[85];
  if ( v147 != -1
    && (v143 == MmSectionObjectType || v143 == ObpSymbolicLinkObjectType)
    && v147 != (unsigned int)PsGetCurrentProcessSessionId()
    && !SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v146)
    && !(unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Source1) )
  {
    goto LABEL_389;
  }
  v148 = LOWORD(Source1[0]);
  Pool2 = (void *)ExAllocatePool2(0x100uLL, LOWORD(Source1[0]), 0x6D4E624Fu);
  if ( !Pool2 )
  {
LABEL_459:
    v184 = -1073741670;
    goto LABEL_224;
  }
  if ( !(unsigned __int8)ObpInsertDirectoryEntry(v144, v142) )
  {
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_459;
  }
  memmove(Pool2, Source1[1], v148);
  v150 = (__int64)&v142[-ObpInfoMaskToOffset[*(v142 - 22) & 3] - 48];
  v151 = *(void **)(v150 + 16);
  if ( v151 )
    ExFreePoolWithTag(v151, 0);
  v152 = (__int16)Source1[0];
  v27 = (unsigned __int64 *)v142;
  *(_WORD *)(v150 + 8) = Source1[0];
  *(_WORD *)(v150 + 10) = v152;
  *(_QWORD *)(v150 + 16) = Pool2;
  v184 = 0;
LABEL_225:
  v20 = v189;
LABEL_226:
  if ( v20 )
    ObDereferenceObjectDeferDelete(v20);
  if ( Object )
    ObDereferenceObjectDeferDelete(Object);
  SeClearLearningModeObjectInformation();
  v119 = (unsigned __int64)P;
  if ( P )
  {
    if ( v191 )
    {
      _m_prefetchw(v191);
      v120 = *v191;
      while ( (v119 ^ v120) < 0xF )
      {
        v121 = v120;
        v120 = _InterlockedCompareExchange64(v191, v120 + 1, v120);
        if ( v121 == v120 )
          goto LABEL_235;
      }
    }
    ObDereferenceDeviceMap((PVOID)v119);
  }
LABEL_235:
  result = v184;
  if ( v184 < 0 )
  {
    v27 = 0LL;
  }
  else if ( a12 && v197 != -1 )
  {
    *a12 = v197;
  }
  *a13 = v27;
  return result;
}
