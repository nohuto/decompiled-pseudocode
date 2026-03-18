/*
 * XREFs of CmpDoParseKey @ 0x140871670
 * Callers:
 *     CmpParseKey @ 0x14085EAA0 (CmpParseKey.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     _tlgWriteAgg @ 0x1403BAC2C (_tlgWriteAgg.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     CmpTransSilentIgnore @ 0x14043DF80 (CmpTransSilentIgnore.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcess @ 0x1404725F0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpSyncKcbCacheForHive @ 0x1407CC6A0 (CmpSyncKcbCacheForHive.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1407D1644 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14083F4D0 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
 *     CmpComputeComponentHashes @ 0x1408476D0 (CmpComputeComponentHashes.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1408483D4 (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockHiveListShared @ 0x140848578 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x1408485D4 (CmpUnlockHiveList.c)
 *     CmpUnlockHashEntryByKcb @ 0x140848730 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockHashEntry @ 0x140848820 (CmpUnlockHashEntry.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpRecordParseFailure @ 0x140849FA0 (CmpRecordParseFailure.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpLogUnsupportedOperation @ 0x140863D74 (CmpLogUnsupportedOperation.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086B298 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x14086E650 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeyOwnerForPca @ 0x14086E770 (CmpCheckKeyOwnerForPca.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408705D4 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransReferenceTransaction @ 0x140870E50 (CmpTransReferenceTransaction.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 *     RtlPrefixUnicodeString @ 0x140871070 (RtlPrefixUnicodeString.c)
 *     CmpValidateComponents @ 0x1408711C0 (CmpValidateComponents.c)
 *     CmpIsKeyDeleted @ 0x140871220 (CmpIsKeyDeleted.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     CmpIsKcbInvolvedInVirtualization @ 0x140871420 (CmpIsKcbInvolvedInVirtualization.c)
 *     CmpLockKcbStackShared @ 0x1408715A0 (CmpLockKcbStackShared.c)
 *     CmpCleanupPathInfo @ 0x1408715F0 (CmpCleanupPathInfo.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408743F0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpRemoveFromDelayedClose @ 0x140874820 (CmpRemoveFromDelayedClose.c)
 *     CmpUnlockHashEntryByIndex @ 0x140874930 (CmpUnlockHashEntryByIndex.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     CmpCreateKeyControlBlock @ 0x140875390 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmpVEExecuteOpenLogic @ 0x140878260 (CmpVEExecuteOpenLogic.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879920 (CmpGetKeyNodeForKcb.c)
 *     CmpConstructName @ 0x14087A050 (CmpConstructName.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14087C4C0 (CmpDelayDerefKeyControlBlock.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     CmpTransSearchAddTransFromRm @ 0x140885804 (CmpTransSearchAddTransFromRm.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140885FAC (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpGetComponentNameAtIndex @ 0x1408895D0 (CmpGetComponentNameAtIndex.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpCreateKeyBody @ 0x14089EB50 (CmpCreateKeyBody.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14089F140 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpPromoteKey @ 0x140972D04 (CmpPromoteKey.c)
 *     CmpEnlistKeyBody @ 0x140972F30 (CmpEnlistKeyBody.c)
 *     CmpIsKeyStackDeleted @ 0x140973050 (CmpIsKeyStackDeleted.c)
 *     CmpDoWritethroughReparse @ 0x14098A930 (CmpDoWritethroughReparse.c)
 *     CmpGetComponentHashAtIndex @ 0x14099C6B0 (CmpGetComponentHashAtIndex.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14099C700 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpCheckExeOwnerForPca @ 0x14099CEAC (CmpCheckExeOwnerForPca.c)
 *     CmRmIsKcbStackVisible @ 0x1409A6D80 (CmRmIsKcbStackVisible.c)
 *     CmpIsKeyStackSymlink @ 0x1409A7120 (CmpIsKeyStackSymlink.c)
 *     CmpVEExecuteCreateLogic @ 0x140A15884 (CmpVEExecuteCreateLogic.c)
 *     CmpPublishEventForPcaResolver @ 0x140A4CB50 (CmpPublishEventForPcaResolver.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140A4DB84 (CmpTryToLockHashEntryExclusive.c)
 *     HvResetDirtyData @ 0x140A4DDD0 (HvResetDirtyData.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140A4F8CC (CmpUpdateHiveRootCellFlags.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A5D438 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpCreateHiveRootCell @ 0x140AA21DC (CmpCreateHiveRootCell.c)
 *     CmpWaitForHiveMount @ 0x140AAE5C4 (CmpWaitForHiveMount.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmListGetNextElement @ 0x140BA9A30 (CmListGetNextElement.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BA9B3C (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        struct _ACCESS_STATE *a2,
        unsigned __int8 a3,
        __int16 a4,
        const UNICODE_STRING *a5,
        __m128i *a6,
        __int64 a7,
        int a8,
        _QWORD *a9)
{
  unsigned int v9; // esi
  __m128i v12; // xmm0
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r13
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  ULONG_PTR v18; // r15
  char v19; // r14
  ULONG_PTR v20; // rdi
  int v21; // eax
  __int16 v22; // r12
  unsigned int i; // ecx
  _WORD *v24; // rax
  unsigned __int16 v25; // dx
  __int64 v26; // r9
  char v27; // r10
  __int64 v28; // rcx
  int v29; // eax
  int v30; // r14d
  int v31; // eax
  __int64 v32; // rcx
  char v33; // al
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  _DWORD *v35; // r14
  int v36; // eax
  __int64 v37; // rdi
  _QWORD *v38; // rdi
  __int64 v39; // r14
  int v40; // ebx
  struct _PRIVILEGE_SET *Pool; // rcx
  ULONG_PTR v42; // r13
  struct _PRIVILEGE_SET *v43; // rcx
  int v44; // ebx
  int *v45; // r14
  int *v46; // rdi
  __int64 v47; // rcx
  int v48; // ebx
  int v49; // r13d
  __int64 v50; // rcx
  __int64 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // rcx
  __int16 v55; // bx
  __int16 m; // cx
  __int64 v57; // rdx
  __int64 v58; // rdx
  bool v59; // al
  __int64 v60; // r9
  __int16 v61; // cx
  __int64 v62; // rdx
  __int64 v63; // r12
  __int64 v64; // r9
  int v65; // eax
  unsigned __int8 v66; // di
  int v67; // eax
  int v68; // eax
  __int64 v69; // r12
  char v70; // bl
  __int64 v71; // rdi
  __int64 v72; // rdi
  PVOID v73; // rax
  __int64 v74; // r12
  char v75; // bl
  char v76; // bl
  void *v77; // r14
  char v78; // r12
  ULONG_PTR v79; // rbx
  ULONG_PTR v80; // rcx
  int v81; // eax
  void *v82; // r13
  ULONG_PTR v83; // r15
  _QWORD *v84; // rdi
  unsigned int v85; // ebx
  _QWORD *v86; // r12
  __int64 *v87; // rdi
  __int64 v88; // rax
  _QWORD *v89; // rbx
  __int64 v90; // r13
  int v91; // eax
  __int16 v92; // dx
  __int64 v93; // rcx
  __int64 v94; // r10
  __int64 v95; // r9
  int v96; // ecx
  char *v97; // r8
  char v98; // dl
  __int64 v99; // rax
  ULONG_PTR v100; // rbx
  int *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  char *v104; // rcx
  __int64 v105; // r13
  int v106; // edx
  int v107; // r8d
  __int64 v108; // rcx
  __int64 v109; // rcx
  int v110; // edx
  __int64 v111; // rax
  __int64 v112; // r12
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // rcx
  unsigned __int64 v119; // r14
  char v120; // al
  wchar_t *v121; // r8
  __int16 v122; // cx
  __int16 v123; // ax
  int v124; // edi
  __int16 v125; // r14
  int v126; // eax
  int v127; // eax
  char v128; // al
  __int64 v129; // r9
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // r9
  __int64 NextElement; // rax
  __int64 v134; // r10
  _KPROCESS *CurrentThreadProcess; // rdi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  int SymbolicLinkTarget; // eax
  __int64 v139; // rcx
  char v140; // al
  char v141; // r12
  __m128i v142; // xmm0
  _QWORD **v143; // r14
  _QWORD *j; // rcx
  __int64 v145; // rdi
  int v146; // eax
  __int64 v147; // rcx
  __int64 v148; // rcx
  __int64 v150; // rax
  __int64 v151; // rcx
  int v152; // edi
  __int64 v153; // rax
  __int64 v154; // rcx
  int v155; // eax
  int v156; // r8d
  __int64 v157; // rdx
  __int64 v158; // r8
  __int16 v159; // r9
  __int64 v160; // rax
  unsigned int v161; // ecx
  bool v162; // zf
  unsigned __int64 v163; // rax
  wchar_t *v164; // r10
  __int64 k; // r8
  __int64 v166; // rcx
  const UNICODE_STRING *v167; // rbx
  int v168; // r9d
  __int64 v169; // r8
  int v170; // eax
  int v171; // eax
  __int64 v172; // r8
  __int64 v173; // rdi
  __int64 v174; // rcx
  int Logic; // eax
  __int64 v176; // rcx
  int v177; // eax
  __int64 v178; // rdi
  int v179; // eax
  unsigned int v180; // edx
  __int64 v182; // r12
  int v183; // ebx
  __int64 v184; // rdi
  int v185; // edx
  __int64 v186; // r8
  char IsKeyStackSymlink; // al
  __int64 v188; // rbx
  __int64 v189; // rdi
  int v190; // eax
  int v191; // eax
  int v192; // r9d
  int v193; // eax
  char v194; // r15
  unsigned int v195; // r8d
  __int64 v196; // r15
  __int64 v197; // rcx
  int ComponentHashAtIndex; // ebx
  __int64 v199; // rdi
  ULONG_PTR v200; // r12
  __int64 v201; // rcx
  __int64 v202; // r8
  ULONG_PTR v203; // rdx
  unsigned int *v204; // rdi
  ULONG_PTR v205; // rcx
  int updated; // eax
  __int64 v207; // rbx
  int v208; // r8d
  __int64 v209; // rbx
  __int64 v210; // r12
  int started; // eax
  int v212; // r9d
  int v213; // r8d
  int KeyBody; // eax
  ULONG_PTR v215; // rcx
  int v216; // r12d
  int v217; // eax
  ULONG_PTR v218; // rcx
  __int64 v219; // rcx
  __int64 ComponentNameAtIndex; // rax
  __int64 v221; // rdx
  __int64 v222; // r8
  __int64 v223; // rcx
  __int64 v224; // rcx
  __int64 v225; // r8
  int v226; // eax
  __int64 v227; // rax
  __int64 v228; // rdx
  __int64 v229; // r8
  _KPROCESS *v230; // rdi
  __int64 v231; // rax
  int v232; // ebx
  int HiveRootCell; // eax
  int v234; // edx
  __int64 v235; // rax
  __int64 v236; // rdx
  __int64 v237; // r8
  int v238; // eax
  __int64 v239; // rcx
  ULONG_PTR v240; // r9
  __int64 v241; // rcx
  int v242; // edx
  int v243; // r8d
  int v244; // r8d
  __int64 v245; // rcx
  int v246; // edx
  __int64 v247; // rcx
  __int64 v248; // rcx
  int v249; // edx
  int v250; // r8d
  __int64 v251; // rcx
  int SourceString; // [rsp+20h] [rbp-E0h]
  int *SourceStringa; // [rsp+20h] [rbp-E0h]
  __int64 v254; // [rsp+30h] [rbp-D0h]
  int v255; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v256; // [rsp+38h] [rbp-C8h]
  __int64 v257; // [rsp+40h] [rbp-C0h]
  __int64 v258; // [rsp+40h] [rbp-C0h]
  char v259; // [rsp+60h] [rbp-A0h]
  char v260; // [rsp+61h] [rbp-9Fh]
  int Child; // [rsp+64h] [rbp-9Ch] BYREF
  char v262; // [rsp+68h] [rbp-98h]
  __int64 v263; // [rsp+70h] [rbp-90h]
  __int64 v264; // [rsp+78h] [rbp-88h] BYREF
  void *v265; // [rsp+80h] [rbp-80h]
  unsigned __int8 v266; // [rsp+88h] [rbp-78h]
  char v267; // [rsp+89h] [rbp-77h] BYREF
  char v268; // [rsp+8Ah] [rbp-76h]
  bool BugCheckParameter4[13]; // [rsp+8Bh] [rbp-75h] BYREF
  char v270; // [rsp+98h] [rbp-68h]
  __int16 v271[2]; // [rsp+9Ch] [rbp-64h] BYREF
  int v272; // [rsp+A0h] [rbp-60h]
  _DWORD v273[3]; // [rsp+A4h] [rbp-5Ch] BYREF
  ULONG_PTR v274; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-48h] BYREF
  int v276[2]; // [rsp+C0h] [rbp-40h]
  __int64 v277; // [rsp+C8h] [rbp-38h] BYREF
  void *v278; // [rsp+D0h] [rbp-30h]
  PVOID Object; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v280; // [rsp+E0h] [rbp-20h] BYREF
  PCUNICODE_STRING String2; // [rsp+E8h] [rbp-18h]
  struct _ACCESS_STATE *v282; // [rsp+F0h] [rbp-10h]
  __m128i v283; // [rsp+F8h] [rbp-8h] BYREF
  ULONG_PTR v284; // [rsp+108h] [rbp+8h] BYREF
  __int64 v285; // [rsp+110h] [rbp+10h] BYREF
  __int64 v286; // [rsp+118h] [rbp+18h]
  __int64 v287; // [rsp+120h] [rbp+20h] BYREF
  int v288[2]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v289; // [rsp+130h] [rbp+30h] BYREF
  _QWORD *v290; // [rsp+140h] [rbp+40h]
  int v291[4]; // [rsp+150h] [rbp+50h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+160h] [rbp+60h]
  int v293[4]; // [rsp+170h] [rbp+70h] BYREF
  PPRIVILEGE_SET v294[2]; // [rsp+180h] [rbp+80h]
  struct _KAPC_STATE ApcState; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+1C0h] [rbp+C0h] BYREF
  char v297[32]; // [rsp+1E0h] [rbp+E0h] BYREF
  ULONG_PTR *v298; // [rsp+200h] [rbp+100h]
  __int64 v299; // [rsp+208h] [rbp+108h]

  v9 = 0;
  String2 = a5;
  v290 = a9;
  v286 = a1;
  *(_QWORD *)&v273[1] = 0LL;
  v277 = 0LL;
  v268 = 0;
  v262 = 0;
  LOWORD(v273[0]) = 0;
  v259 = 0;
  v270 = 0;
  v267 = 0;
  v260 = 0;
  v266 = a3;
  v282 = a2;
  v263 = a7;
  LOWORD(v280) = 0;
  DestinationString = 0LL;
  v287 = 0LL;
  v289 = 0LL;
  v285 = 0LL;
  Object = 0LL;
  v274 = 0LL;
  *(_QWORD *)v288 = 0LL;
  *(_QWORD *)v276 = 0LL;
  LOWORD(v272) = 0;
  v271[0] = 0;
  v284 = 0LL;
  HvpGetCellContextInitialize(&v287);
  v12 = *a6;
  LOWORD(v264) = 0;
  v283 = v12;
  CmpInitializeDelayDerefContext(&v289);
  BugCheckParameter4[0] = 0;
  v265 = 0LL;
  *(_OWORD *)(a7 + 160) = 0LL;
  *(_OWORD *)(a7 + 176) = 0LL;
  *(_OWORD *)v291 = 0LL;
  HIWORD(v291[0]) = -1;
  *(_OWORD *)v293 = 0LL;
  HIWORD(v293[0]) = -1;
  ApcState.ApcListHead[0] = 0LL;
  WORD1(ApcState.ApcListHead[0].Flink) = -1;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_QWORD *)(a7 + 208) = 0LL;
  v278 = (void *)(a7 + 216);
  *(_OWORD *)Privileges = 0LL;
  *(_OWORD *)v294 = 0LL;
  ApcState.ApcListHead[1] = 0LL;
  memset_0((void *)(a7 + 216), 0, 0xA8uLL);
  memset_0((void *)(a7 + 384), 0, 0x50uLL);
  if ( a7 )
    *(_QWORD *)(a7 + 384) = *(_QWORD *)(a7 + 88);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v13 = *(_QWORD *)(a7 + 88);
  v14 = *(_QWORD *)(a7 + 72);
  *(_QWORD *)&BugCheckParameter4[5] = v13;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v14 )
  {
    v150 = *(_QWORD *)(a1 + 56);
    if ( v150 && v14 != v150 )
    {
      Child = -1072103422;
      CmpRecordParseFailure(a7, 256, -1072103422);
      v76 = 0;
      v18 = 0LL;
      v42 = v240;
      v37 = v241;
      v74 = 0LL;
      goto LABEL_110;
    }
    v15 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 56);
    v15 = *(_QWORD *)(a1 + 64);
  }
  v16 = (_DWORD *)v263;
  *(_DWORD *)(v263 + 20) = *(unsigned __int16 *)(a1 + 50);
  v17 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( *(_QWORD *)(a1 + 8) != v17 )
  {
    if ( v13 )
    {
      CmpLockRegistry(v17);
      CmpDereferenceKeyControlBlock(*(ULONG_PTR *)&BugCheckParameter4[5]);
      *(_QWORD *)&BugCheckParameter4[5] = 0LL;
      CmpUnlockRegistry(v109);
      goto LABEL_10;
    }
LABEL_9:
    LOWORD(v272) = 0;
    *(_QWORD *)&BugCheckParameter4[5] = v13;
    v260 = 0;
LABEL_10:
    v18 = 0LL;
LABEL_11:
    v19 = 0;
    v262 = 0;
    goto LABEL_12;
  }
  if ( !v13 )
    goto LABEL_9;
  if ( (*v16 & 0x400) != 0 )
    CmpLockRegistryExclusive(v17);
  else
    CmpLockRegistry(v17);
  v262 = 1;
  v119 = *(_QWORD *)(*(_QWORD *)&BugCheckParameter4[5] + 296LL);
  v120 = v119 & 1;
  if ( (v119 & 1) != 0 )
    v119 &= ~1uLL;
  if ( !v119 || v120 || !RtlPrefixUnicodeString((PCUNICODE_STRING)v119, String2, 1u) )
  {
    CmpDereferenceKeyControlBlock(*(ULONG_PTR *)&BugCheckParameter4[5]);
    *(_QWORD *)&BugCheckParameter4[5] = 0LL;
    CmpUnlockRegistry(v131);
    v18 = v274;
    *(_QWORD *)&v273[1] = v277;
    goto LABEL_11;
  }
  v121 = &String2->Buffer[(unsigned __int64)*(unsigned __int16 *)v119 >> 1];
  v122 = String2->Length - *(_WORD *)v119;
  v123 = String2->MaximumLength - *(_WORD *)v119;
  v283.m128i_i64[1] = (__int64)v121;
  v283.m128i_i16[0] = v122;
  v283.m128i_i16[1] = v123;
  if ( v122 )
  {
    do
    {
      if ( *v121 != 92 )
        break;
      v122 -= 2;
      v123 -= 2;
      ++v121;
      v283.m128i_i16[0] = v122;
      v283.m128i_i16[1] = v123;
    }
    while ( v122 );
    v283.m128i_i64[1] = (__int64)v121;
  }
  v124 = ((*(_DWORD *)(*(_QWORD *)&BugCheckParameter4[5] + 8LL) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)v263 & 1) == 0 || v122 )
  {
    v125 = v272;
  }
  else
  {
    v159 = String2->MaximumLength - *(_WORD *)v119;
    v160 = *(_QWORD *)(*(_QWORD *)&BugCheckParameter4[5] + 80LL);
    v161 = *(unsigned __int16 *)(v160 + 24);
    v162 = (*(_DWORD *)v160 & 1) == 0;
    v163 = *(unsigned __int16 *)(v160 + 24);
    if ( v162 )
      v163 = (unsigned __int64)v161 >> 1;
    else
      LOWORD(v161) = 2 * v161;
    v164 = &String2->Buffer[((unsigned __int64)*(unsigned __int16 *)v119 >> 1) - v163];
    v283.m128i_i16[0] = v161 + String2->Length - *(_WORD *)v119;
    v283.m128i_i64[1] = (__int64)v164;
    v125 = 1;
    v283.m128i_i16[1] = v161 + v159;
    --v124;
    v272 = 1;
  }
  v126 = CmpComputeComponentHashes(&v283, v271, (__int64)v278);
  Child = v126;
  if ( v126 < 0 )
  {
    v37 = v263;
    CmpRecordParseFailure(v263, 512, v126);
    v18 = v274;
    v42 = *(_QWORD *)&BugCheckParameter4[5];
    v76 = 0;
    v74 = 0LL;
    goto LABEL_110;
  }
  v22 = v271[0];
  if ( (unsigned int)(v271[0] + v124) > 0x20 )
  {
    v127 = -1073741811;
    v242 = 768;
    Child = -1073741811;
LABEL_481:
    v37 = v263;
    CmpRecordParseFailure(v263, v242, v127);
    v18 = v274;
    v76 = 0;
    v74 = 0LL;
    goto LABEL_109;
  }
  v127 = CmpValidateComponents(v271[0], (__int64)v278);
  Child = v127;
  if ( v127 < 0 )
  {
    v242 = 1024;
    goto LABEL_481;
  }
  v20 = *(_QWORD *)&BugCheckParameter4[5];
  if ( v125 == v22 )
  {
    CmpLockHashEntrySharedByKcb(*(ULONG_PTR *)&BugCheckParameter4[5]);
    v128 = 1;
    v260 = 1;
  }
  else
  {
    v128 = 0;
  }
  v19 = v128;
  CmpLockKcbShared(*(_QWORD *)&BugCheckParameter4[5]);
  if ( !CmpIsKeyDeleted(*(__int64 *)&BugCheckParameter4[5], 0LL)
    && (*(_DWORD *)(*(_QWORD *)&BugCheckParameter4[5] + 8LL) & 0x40000) == 0 )
  {
    CmpUnlockKcb(*(ULONG_PTR *)&BugCheckParameter4[5]);
    v18 = v274;
    v25 = v272;
    *(_QWORD *)&v273[1] = v277;
    v260 = v19;
    goto LABEL_20;
  }
  CmpUnlockKcb(*(ULONG_PTR *)&BugCheckParameter4[5]);
  v141 = v260;
  if ( v260 )
  {
    CmpUnlockHashEntryByKcb(*(__int64 *)&BugCheckParameter4[5]);
    v141 = 0;
    v260 = 0;
  }
  CmpDereferenceKeyControlBlock(*(ULONG_PTR *)&BugCheckParameter4[5]);
  v142 = *a6;
  *(_QWORD *)&BugCheckParameter4[5] = 0LL;
  v283 = v142;
  v272 = 0;
  CmpCleanupPathInfo((__int64)v278);
  memset_0(v278, 0, 0xA8uLL);
  v18 = v274;
  v19 = v141;
  *(_QWORD *)&v273[1] = v277;
LABEL_12:
  v20 = *(_QWORD *)(v286 + 8);
  v21 = CmpComputeComponentHashes(&v283, v271, (__int64)v278);
  Child = v21;
  if ( v21 < 0 )
  {
    v37 = v263;
    CmpRecordParseFailure(v263, 1280, v21);
LABEL_241:
    v74 = 0LL;
    goto LABEL_108;
  }
  v22 = v271[0];
  for ( i = 0; i < v271[0]; ++i )
  {
    if ( i >= 8 )
      v24 = (_WORD *)(*((_QWORD *)v278 + 20) + 16 * (i - 8 + 6LL));
    else
      v24 = (char *)v278 + 16 * i + 32;
    if ( *v24 > 0x200u )
    {
      v37 = v263;
      Child = -1073741811;
      CmpRecordParseFailure(v263, 1536, -1073741811);
      goto LABEL_241;
    }
  }
  v25 = v272;
LABEL_20:
  v26 = v263;
  v27 = v262;
  *(_QWORD *)(v263 + 392) = v20;
  *(_QWORD *)(v26 + 416) = v20;
  v28 = v22 + ((*(_DWORD *)(v20 + 8) >> 21) & 0x3FF) - (unsigned int)v25;
  if ( (unsigned int)v28 > 0x200 )
  {
    Child = -1073741811;
    v37 = v26;
    CmpRecordParseFailure(v26, 1792, -1073741811);
    goto LABEL_241;
  }
  if ( !v27 )
  {
    if ( (*(_DWORD *)v26 & 0x400) != 0 )
      CmpLockRegistryExclusive(v28);
    else
      CmpLockRegistry(v28);
    v25 = v272;
    v26 = v263;
    v262 = 1;
  }
  v29 = *(_DWORD *)(v286 + 48);
  if ( (v29 & 9) != 0 )
  {
    v37 = v263;
    v243 = -1073740763;
    if ( (v29 & 1) == 0 )
      v243 = -1073741444;
    Child = v243;
    CmpRecordParseFailure(v263, 2048, v243);
    goto LABEL_241;
  }
  if ( v25 == v22 )
  {
    CmpReferenceKeyControlBlockUnsafe(v20);
    v18 = v20;
    BugCheckParameter2 = v20;
    v274 = v20;
    if ( v20 == *(_QWORD *)&BugCheckParameter4[5] )
    {
      v260 = 0;
    }
    else
    {
      CmpLockHashEntrySharedByKcb(v20);
      v19 = 1;
    }
    v32 = v263;
    LOBYTE(v264) = v19;
    LOWORD(v30) = v272;
  }
  else
  {
    v30 = v272;
    v31 = CmpPerformCompleteKcbCacheLookup(
            (volatile signed __int64 *)v20,
            (unsigned __int16)v272,
            v22,
            v26 + 216,
            (_DWORD *)v26,
            &v274,
            (char *)&v264,
            &v280);
    Child = v31;
    if ( v31 < 0 || v31 == 259 )
    {
      v37 = v263;
      CmpRecordParseFailure(v263, 2432, v31);
      v18 = v274;
      goto LABEL_241;
    }
    v32 = v263;
    v18 = v274;
    v33 = v280;
    LOWORD(v30) = v280 + v30;
    BugCheckParameter2 = v274;
    *(_QWORD *)(v263 + 400) = v274;
    *(_BYTE *)(v32 + 424) = v33;
    *(_QWORD *)(v32 + 416) = v18;
    v272 = v30;
  }
  if ( (_WORD)v30 == v22 && (*(_DWORD *)v32 & 1) == 0 )
  {
    CmpUnlockHashEntryByKcb(v18);
    LOBYTE(v264) = 0;
  }
  CmpLockKcbShared(v18);
  if ( (__int16)v30 < v22 )
  {
    v102 = (unsigned int)(__int16)v30;
    if ( (unsigned int)v102 >= 8 )
    {
      v104 = (char *)(16LL * (unsigned int)(v102 - 8));
      v103 = *((_QWORD *)v278 + 20) + 104LL;
    }
    else
    {
      v103 = 16 * v102;
      v104 = (char *)v278 + 40;
    }
    DestinationString.Buffer = *(wchar_t **)&v104[v103];
    DestinationString.Length = v283.m128i_i16[0] - 2 * (((__int64)DestinationString.Buffer - v283.m128i_i64[1]) >> 1);
    DestinationString.MaximumLength = DestinationString.Length;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  p_SubjectSecurityContext = &v282->SubjectSecurityContext;
  if ( CmpVEEnabled )
  {
    v35 = (_DWORD *)v263;
    if ( (*(_DWORD *)(v263 + 24) & 0x10) != 0 )
    {
      v36 = -1073741199;
      v37 = v263;
    }
    else if ( *(_WORD *)(v18 + 66) )
    {
      v36 = -1073741199;
      v37 = v263;
    }
    else if ( CmpIsKcbInvolvedInVirtualization(v18) )
    {
      if ( CmpIsSystemEntity(v266, p_SubjectSecurityContext, (int *)(v263 + 16)) )
      {
        v36 = -1073741199;
        v37 = v263;
      }
      else if ( (*(_DWORD *)v263 & 8) != 0 )
      {
        v36 = -1073741199;
        v37 = v263;
      }
      else
      {
        if ( (*(_DWORD *)(v263 + 160) & 1) == 0 )
        {
          CmpAttachToRegistryProcess((PRKAPC_STATE)(v263 + 168));
          *(_DWORD *)(v263 + 160) |= 1u;
        }
        if ( (*(_DWORD *)(v18 + 184) & 0x2000000) != 0 )
        {
          v37 = (__int64)v35;
          v36 = CmpVEExecuteVirtualStoreParseLogic(v18, &DestinationString, v35, String2);
        }
        else
        {
          SourceStringa = (int *)p_SubjectSecurityContext;
          v37 = (__int64)v35;
          v36 = CmpVEExecuteRealStoreParseLogic(
                  v18,
                  (__m128i *)&DestinationString,
                  v35,
                  (UNICODE_STRING *)String2,
                  SourceStringa);
        }
      }
    }
    else
    {
      v36 = -1073741199;
      v37 = v263;
    }
  }
  else
  {
    v37 = v263;
    v36 = -1073741199;
  }
  Child = v36;
  CmpUnlockKcb(v18);
  if ( Child != -1073741199 )
  {
    CmpRecordParseFailure(v37, 2496, Child);
    goto LABEL_241;
  }
  v38 = *(_QWORD **)(v37 + 64);
  v39 = *(_QWORD *)(v18 + 32);
  if ( v38 && v38 != (_QWORD *)v39 )
  {
    if ( (*(_DWORD *)(v39 + 4112) & 1) != 0 )
    {
      CmpLockHiveListShared();
      v143 = (_QWORD **)(v39 + 4120);
      for ( j = *v143; j != v143; j = (_QWORD *)*j )
      {
        if ( j - 515 == v38 )
        {
          CmpUnlockHiveList();
          goto LABEL_42;
        }
      }
      CmpUnlockHiveList();
    }
    if ( PsIsCurrentThreadInServerSilo() )
    {
      v180 = dword_140E09E08;
      if ( (unsigned int)dword_140E09E08 > 5 )
      {
        if ( (qword_140E09E18 & 0x200000010000LL) != 0 && (qword_140E09E20 & 0x200000010000LL) == qword_140E09E20 )
        {
          v284 = 0x1000000LL;
          v298 = &v284;
          v299 = 8LL;
          tlgWriteAgg(
            (__int64)&dword_140E09E08,
            (unsigned __int8 *)&dword_14005345C,
            0x200000010000LL,
            3u,
            (__int64)v297);
          v180 = dword_140E09E08;
        }
        if ( v180 > 5 )
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E09E08,
            (unsigned __int8 *)&word_1400534AE,
            0LL,
            0LL,
            2u,
            (PEVENT_DATA_DESCRIPTOR)&DestinationString);
      }
    }
    v37 = v263;
    Child = -1073741790;
    CmpRecordParseFailure(v263, 2560, -1073741790);
    v74 = 0LL;
    goto LABEL_108;
  }
LABEL_42:
  if ( v14 || v15 )
  {
    if ( *(_QWORD *)(v18 + 32) == CmpMasterHive )
    {
      BYTE1(v273[0]) = 1;
    }
    else
    {
      if ( !v14 && !v15 || !*(_WORD *)(v18 + 66) )
        goto LABEL_44;
      CmpLogUnsupportedOperation(8);
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v37 = v263;
        Child = -1072103419;
        CmpRecordParseFailure(v263, 2816, -1072103419);
        goto LABEL_241;
      }
    }
    v14 = 0LL;
    v15 = 0LL;
  }
LABEL_44:
  if ( !CmpTransSilentIgnore() && (v14 || v15) )
  {
    v151 = *(_QWORD *)(v18 + 32);
    if ( !v151 )
      goto LABEL_302;
    if ( (v14 & 1) != 0 )
    {
      v152 = CmpTransReferenceTransaction(v14);
      if ( v152 >= 0 )
      {
        v153 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFFEuLL) + 16);
        *(_QWORD *)&v273[1] = v153;
        if ( v153 )
        {
          v277 = v153;
          v152 = 0;
        }
        else
        {
          v152 = -1072103422;
          *(_QWORD *)&v273[1] = v277;
        }
        if ( v14 )
          ObfDereferenceObject((PVOID)(v14 & 0xFFFFFFFFFFFFFFFEuLL));
        v18 = v274;
        v22 = v271[0];
        BugCheckParameter2 = v274;
      }
    }
    else
    {
      v152 = CmpTransSearchAddTransFromRm(*(_QWORD *)(v151 + 4152), v14, v15, 0, (__int64)&v277);
      *(_QWORD *)&v273[1] = v277;
    }
    if ( v152 < 0 )
    {
LABEL_302:
      if ( (_BYTE)v264 )
      {
        CmpUnlockHashEntryByKcb(v18);
        LOBYTE(v264) = 0;
      }
      CmpUnlockRegistry(v151);
      v154 = *(_QWORD *)(v18 + 32);
      if ( v154 )
      {
        if ( (v14 & 1) != 0 )
          v155 = CmpTransSearchAddLightWeightTrans(v14, *(_QWORD *)(v18 + 32), 1LL, &v277);
        else
          v155 = CmpTransSearchAddTransFromRm(*(_QWORD *)(v154 + 4152), v14, v15, 1, (__int64)&v277);
      }
      else
      {
        v155 = -1073741811;
      }
      Child = v155;
      CmpLockRegistry(v154);
      v156 = Child;
      v262 = 1;
      if ( Child >= 0 )
      {
        v156 = -1073741267;
        Child = -1073741267;
      }
      v37 = v263;
      CmpRecordParseFailure(v263, 3072, v156);
      v74 = 0LL;
      goto LABEL_108;
    }
  }
  else
  {
    *(_QWORD *)&v273[1] = 0LL;
    v277 = 0LL;
  }
  v40 = *(__int16 *)(v18 + 66);
  Pool = 0LL;
  if ( v40 >= 2 )
  {
    Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
    if ( !Pool )
    {
      v37 = v263;
      Child = -1073741670;
      CmpRecordParseFailure(v263, 3328, -1073741670);
      v74 = 0LL;
      goto LABEL_108;
    }
  }
  v42 = *(_QWORD *)&BugCheckParameter4[5];
  Privileges[1] = Pool;
  v43 = 0LL;
  HIWORD(v291[0]) = -1;
  LOWORD(v291[0]) = v40;
  v44 = *(__int16 *)(v18 + 66);
  if ( v44 >= 2 )
  {
    v43 = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
    if ( !v43 )
    {
      v37 = v263;
      Child = -1073741670;
      CmpRecordParseFailure(v263, 3584, -1073741670);
      v76 = v260;
      v74 = 0LL;
      goto LABEL_110;
    }
  }
  HIWORD(v293[0]) = -1;
  v45 = v291;
  LOWORD(v293[0]) = v44;
  v46 = v293;
  v294[1] = v43;
  Child = 0;
  HIWORD(v291[0]) = *(_WORD *)(v18 + 66);
  v47 = *(__int16 *)(v18 + 66);
  if ( (_WORD)v47 )
  {
    v157 = *(_QWORD *)(v18 + 192);
    if ( v157 )
    {
      *(_QWORD *)&BugCheckParameter4[5] = v42;
      do
      {
        v158 = *(_QWORD *)(v157 + 16);
        if ( (__int16)v47 >= 2 )
          *((_QWORD *)Privileges[1] + (__int16)v47 - 2) = v158;
        else
          *(_QWORD *)&v291[2 * (__int16)v47 + 2] = v158;
        v157 = *(_QWORD *)(v157 + 24);
        LOWORD(v47) = v47 - 1;
      }
      while ( v157 );
    }
  }
  else
  {
    *(_QWORD *)&v291[2 * v47 + 2] = v18;
    *(_QWORD *)&BugCheckParameter4[5] = v42;
  }
  LOWORD(v48) = v272;
  v49 = v22;
  while ( (__int16)v48 < v22 )
  {
    CmpLockKcbStackShared((__int64)v45);
    if ( (*(_DWORD *)(v18 + 8) & 0x20000) != 0 )
    {
      v110 = 3968;
      goto LABEL_179;
    }
    v92 = *((_WORD *)v45 + 1);
    BugCheckParameter2 = 0LL;
    while ( 1 )
    {
      if ( v92 < 0 )
        goto LABEL_177;
      v93 = v92 >= 2 ? *(_QWORD *)(*((_QWORD *)v45 + 3) + 8LL * v92 - 16) : *(_QWORD *)&v45[2 * v92 + 2];
      if ( *(_WORD *)(v93 + 66) && *(_BYTE *)(v93 + 65) == 1 )
        goto LABEL_177;
      if ( *(_DWORD *)(v93 + 40) != -1 )
        break;
      --v92;
    }
    if ( *(_QWORD *)&v273[1] )
    {
      v132 = *((_QWORD *)v45 + 1);
      do
      {
        NextElement = CmListGetNextElement(v132 + 208, &BugCheckParameter2, 32LL);
        if ( !NextElement )
          goto LABEL_150;
      }
      while ( *(_DWORD *)(NextElement + 68) != 2 );
      if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), v134) )
      {
LABEL_177:
        if ( CmpLoadingSystemHivesActive )
        {
          v18 = v274;
          if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
            && *(_QWORD *)(v274 + 32) == CmpMasterHive
            && (*(_DWORD *)(v274 + 8) & 0x7FE00000) == 0x600000
            && (__int16)v48 > 0 )
          {
            ComponentNameAtIndex = CmpGetComponentNameAtIndex(v278, (unsigned int)((__int16)v48 - 1));
            if ( (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v221, v222, v263 + 136) )
            {
              Child = 259;
              v223 = v263;
              *(_DWORD *)v263 |= 0x100u;
              CmpRecordParseFailure(v223, 3840, 259);
              v75 = 0;
LABEL_222:
              v74 = 0LL;
LABEL_235:
              CmpUnlockKcbStack((__int64)v45);
              goto LABEL_101;
            }
          }
        }
        v110 = 4096;
LABEL_179:
        Child = -1073741772;
        CmpRecordParseFailure(v263, v110, -1073741772);
        v75 = 0;
        v74 = 0LL;
        goto LABEL_235;
      }
    }
LABEL_150:
    if ( (unsigned __int8)CmpIsKeyStackSymlink(v45) )
    {
      v37 = v263;
      SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                             (_DWORD)v45,
                             (int)v263 + 216,
                             (unsigned __int16)v48,
                             (unsigned __int16)v22,
                             v94,
                             v263,
                             (__int64)&v289,
                             (__int64)String2,
                             v263 + 88,
                             (__int64)&v285);
      Child = SymbolicLinkTarget;
      if ( SymbolicLinkTarget < 0 )
      {
        CmpRecordParseFailure(v263, 4608, SymbolicLinkTarget);
      }
      else
      {
        *(_DWORD *)v263 &= ~8u;
        if ( !*(_QWORD *)(v37 + 64) )
        {
          v139 = *(_QWORD *)(v285 + 32);
          if ( (*(_DWORD *)(v139 + 4112) & 1) != 0 )
            *(_QWORD *)(v37 + 64) = v139;
        }
        Child = 260;
        CmpRecordParseFailure(v37, 4864, 260);
      }
      goto LABEL_241;
    }
    CmpUnlockKcbStack((__int64)v45);
    v95 = (unsigned int)(__int16)v48;
    if ( (unsigned int)v95 >= 8 )
    {
      v97 = (char *)(*((_QWORD *)v278 + 20) + 16 * ((unsigned int)(v95 - 8) + 6LL));
      v96 = *(_DWORD *)(*((_QWORD *)v278 + 20) + 4LL * (unsigned int)(v95 - 8));
    }
    else
    {
      v96 = *((_DWORD *)v278 + v95);
      v97 = (char *)v278 + 16 * (unsigned int)v95 + 32;
    }
    v98 = (*(_DWORD *)v263 & 1) != 0 && (_DWORD)v95 == v49 - 1;
    LODWORD(v256) = v96 + 37 * *(_DWORD *)(v18 + 16);
    Child = CmpWalkOneLevel(
              v18,
              (int)v45,
              (int)v288,
              (int)v46,
              (__int64)v273,
              (__int64)v97,
              v96,
              v256,
              *(__int64 *)&v273[1],
              v98,
              v263);
    if ( Child == -1073741772 && CmpLoadingSystemHivesActive )
    {
      v18 = v274;
      if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() && *(_QWORD *)(v274 + 32) == CmpMasterHive )
      {
        if ( (*(_DWORD *)(v274 + 8) & 0x7FE00000) == 0x600000 && (__int16)v48 > 0 )
        {
          v111 = CmpGetComponentNameAtIndex(v278, (unsigned int)((__int16)v48 - 1));
          v112 = v263;
          if ( (unsigned __int8)CmpWaitForHiveMount(v111, v113, v114, v263 + 136) )
          {
            *(_DWORD *)v263 |= 0x100u;
            Child = 259;
            v37 = v112;
            CmpRecordParseFailure(v112, 5120, 259);
            goto LABEL_241;
          }
        }
        else
        {
          v112 = v263;
        }
        if ( (*(_DWORD *)(v18 + 8) & 0x7FE00000) == 0x400000 )
        {
          v115 = CmpGetComponentNameAtIndex(v112 + 216, (unsigned int)(__int16)v48);
          if ( (unsigned __int8)CmpWaitForHiveMount(v115, v116, v117, v112 + 136) )
          {
            v37 = v263;
            Child = 259;
            v118 = v263;
            *(_DWORD *)v263 |= 0x100u;
            CmpRecordParseFailure(v118, 5376, 259);
            v74 = 0LL;
            goto LABEL_108;
          }
        }
      }
      v22 = v271[0];
      *(_QWORD *)&v273[1] = v277;
    }
    if ( Child < 0 )
    {
      v37 = v263;
      v74 = 0LL;
      v42 = *(_QWORD *)&BugCheckParameter4[5];
      v76 = v260;
      if ( *(_BYTE *)(v263 + 426) < 4u )
      {
        *(_DWORD *)(v263 + 8LL * *(unsigned __int8 *)(v263 + 426) + 428) = Child;
        *(_DWORD *)(v37 + 8LL * (unsigned __int8)(*(_BYTE *)(v37 + 426))++ + 432) = 5504;
      }
      goto LABEL_110;
    }
    v99 = v263;
    v100 = *(_QWORD *)v288;
    ++*(_BYTE *)(v263 + 425);
    *(_QWORD *)(v99 + 408) = v100;
    *(_QWORD *)(v99 + 416) = v100;
    CmpDereferenceKeyControlBlockUnsafe(v18);
    v18 = v100;
    BugCheckParameter2 = v100;
    v274 = v100;
    HIWORD(v48) = HIWORD(v272);
    LOBYTE(v264) = v273[0];
    LOWORD(v48) = v272 + 1;
    v101 = v45;
    *(_QWORD *)v288 = 0LL;
    v45 = v46;
    LOBYTE(v273[0]) = 0;
    v46 = v101;
    v272 = v48;
  }
  v50 = *(_QWORD *)(v18 + 72);
  v51 = (__int64)v46;
  *(_QWORD *)v276 = v46;
  if ( v50 )
  {
    *((_WORD *)v46 + 1) = *(_WORD *)(v50 + 66);
    v52 = *(__int16 *)(v50 + 66);
    if ( (_WORD)v52 )
    {
      for ( k = *(_QWORD *)(v50 + 192); k; LOWORD(v52) = v52 - 1 )
      {
        v166 = *(_QWORD *)(k + 16);
        if ( (__int16)v52 >= 2 )
          *(_QWORD *)(*((_QWORD *)v46 + 3) + 8LL * (__int16)v52 - 16) = v166;
        else
          *(_QWORD *)&v46[2 * (__int16)v52 + 2] = v166;
        k = *(_QWORD *)(k + 24);
      }
    }
    else
    {
      *(_QWORD *)&v46[2 * v52 + 2] = v50;
    }
  }
  else
  {
    v51 = 0LL;
    *(_QWORD *)v276 = 0LL;
  }
  v53 = v286;
  v54 = *(_QWORD *)(v286 + 8);
  if ( *(_QWORD *)(v18 + 72) != v54 && v18 != v54 )
  {
    CmpLockKcbShared(v54);
    BYTE1(v264) = 1;
  }
  if ( v51 )
  {
    CmpLockKcbStackShared(v51);
    v259 = 1;
  }
  CmpLockKcbStackShared((__int64)v45);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v53, 0LL) )
  {
    v107 = -1073740763;
    v106 = 5888;
    if ( (*(_BYTE *)(v53 + 48) & 1) == 0 )
      v107 = -1073741444;
    Child = v107;
    goto LABEL_172;
  }
  if ( (*(_DWORD *)(v18 + 8) & 0x20000) != 0 )
  {
    v106 = 6016;
    goto LABEL_171;
  }
  v55 = v48 - 1;
  if ( (*(_DWORD *)(v18 + 184) & 0x20000) != 0 )
  {
    v106 = 6144;
    goto LABEL_171;
  }
  for ( m = *((_WORD *)v45 + 1); ; --m )
  {
    if ( m < 0 )
      goto LABEL_73;
    v57 = m >= 2 ? *(_QWORD *)(*((_QWORD *)v45 + 3) + 8LL * m - 16) : *(_QWORD *)&v45[2 * m + 2];
    if ( *(_DWORD *)(v57 + 40) != -1 )
      break;
  }
  v58 = *(_QWORD *)(v57 + 240);
  if ( v58 )
    v59 = CmEqualTrans(*(__int64 *)&v273[1], v58) != 0;
  else
    v59 = 1;
  if ( !v59 )
  {
    v106 = 6400;
    goto LABEL_171;
  }
LABEL_73:
  v60 = v263;
  if ( (*(_DWORD *)v263 & 2) != 0 )
  {
    CmpUnlockKcbStack((__int64)v45);
    CmpUnlockKcbStack(v51);
    v194 = BYTE1(v264);
    if ( BYTE1(v264) )
      CmpUnlockKcb(*(_QWORD *)(v53 + 8));
    v268 = CmpTryToLockHashEntryExclusive(*(_QWORD *)(v263 + 48), 0LL);
    if ( v194 )
      CmpLockKcbShared(*(_QWORD *)(v53 + 8));
    CmpLockKcbStackTopExclusiveRestShared(v51);
    CmpLockKcbStackTopExclusiveRestShared((__int64)v45);
    v196 = CmpGetComponentNameAtIndex(v278, (unsigned int)v55);
    ComponentHashAtIndex = CmpGetComponentHashAtIndex(v197, v195);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v53, 0LL) )
    {
      v244 = -1073740763;
      if ( (*(_BYTE *)(v53 + 48) & 1) == 0 )
        v244 = -1073741444;
      Child = v244;
      CmpRecordParseFailure(v263, 6656, v244);
      v18 = BugCheckParameter2;
      goto LABEL_221;
    }
    v199 = *(_QWORD *)&v273[1];
    if ( !(unsigned __int8)CmpIsKeyStackDeleted(v51, *(_QWORD *)&v273[1]) )
    {
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v45, v199) )
      {
        v200 = BugCheckParameter2;
        v201 = *(_QWORD *)(BugCheckParameter2 + 72);
        if ( *(_QWORD *)(v201 + 32) == CmpMasterHive )
        {
          if ( (*(_DWORD *)(v201 + 184) & 0x20000) == 0 )
          {
            v202 = v263;
            if ( (*(_DWORD *)(v263 + 160) & 1) == 0 )
            {
              CmpAttachToRegistryProcess((PRKAPC_STATE)(v263 + 168));
              v202 = v263;
              *(_DWORD *)(v263 + 160) |= 1u;
            }
            v203 = *(unsigned int *)(v202 + 40);
            v204 = (unsigned int *)(v202 + 40);
            v205 = *(_QWORD *)(v202 + 48);
            if ( (_DWORD)v203 == -1 )
            {
              HiveRootCell = CmpCreateHiveRootCell(v205, (__int64)v204);
              Child = HiveRootCell;
              if ( HiveRootCell < 0 )
              {
                v208 = HiveRootCell;
                v234 = 7808;
                goto LABEL_511;
              }
            }
            else
            {
              updated = CmpUpdateHiveRootCellFlags(v205, v203);
              Child = updated;
              if ( updated < 0 )
              {
                v208 = updated;
                v234 = 7936;
                goto LABEL_511;
              }
            }
            *(_WORD *)(v200 + 186) |= 2u;
            v255 = ComponentHashAtIndex;
            v207 = v263;
            Child = CmpCreateKeyControlBlock(
                      *(_QWORD *)(v263 + 48),
                      0xFFFFFFFFLL,
                      v200,
                      *(_QWORD *)(v263 + 80),
                      1,
                      v196,
                      v255,
                      0,
                      &v284);
            *(_WORD *)(v200 + 186) &= ~2u;
            v208 = Child;
            if ( Child < 0 )
            {
              v234 = 0x2000;
              v245 = v207;
              goto LABEL_513;
            }
            v209 = v200;
            v210 = v284;
            BugCheckParameter2 = v284;
            CmpDereferenceKeyControlBlockUnsafe(v209);
            CmpUnlockHashEntryByKcb(v209);
            LOBYTE(v264) = 0;
            started = CmpStartKcbStackForTopLayerKcb((__int64)&ApcState, v210);
            Child = started;
            if ( started >= 0 )
            {
              *(_WORD *)(v209 + 186) |= 2u;
              CmpLockKcbStackTopExclusiveRestShared((__int64)&ApcState);
              v212 = v273[1];
              v213 = v263;
              *(_WORD *)(v209 + 186) &= ~2u;
              v270 = 1;
              KeyBody = CmpCreateKeyBody(
                          v210,
                          v266,
                          v213,
                          v212,
                          3,
                          (__int64)&ApcState,
                          (__int64)&Object,
                          (__int64)&v267);
              Child = KeyBody;
              if ( KeyBody < 0 )
              {
                CmpRecordParseFailure(v263, 8576, KeyBody);
                v18 = BugCheckParameter2;
                v74 = 0LL;
                goto LABEL_519;
              }
              HvLockHiveFlusherShared(*(_QWORD *)(v209 + 32));
              HvLockHiveFlusherExclusive(*(_QWORD *)(v210 + 32));
              v215 = *(_QWORD *)(v210 + 32);
              v216 = *(_DWORD *)(v215 + 104);
              v217 = HvpMarkCellDirty(v215, *v204);
              Child = v217;
              if ( v217 < 0 )
              {
                CmpRecordParseFailure(v263, 8704, v217);
              }
              else
              {
                v71 = *(_QWORD *)&v273[1];
                Child = CmpCreateChild(v276[0], (_DWORD)v45, (_DWORD)v282, v196, v263, 10, 0, 1, *(__int64 *)&v273[1]);
                if ( Child >= 0 )
                {
                  v18 = BugCheckParameter2;
                  v218 = BugCheckParameter2;
                  *(_DWORD *)(BugCheckParameter2 + 40) = *(_DWORD *)(v263 + 40);
                  *(_DWORD *)(CmpGetKeyNodeForKcb(v218, &v287, 1LL) + 16) = *(_DWORD *)(v209 + 40);
                  ++*(_QWORD *)(v18 + 304);
                  CmpRebuildKcbCacheFromNode(v18);
                  v219 = *(_QWORD *)(v18 + 32);
                  if ( (*(_BYTE *)(v219 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v219, &v287);
                  else
                    HvpReleaseCellPaged(v219, &v287);
                  if ( !v216 )
                    HvResetDirtyData(*(_QWORD *)(v18 + 32));
                  HvUnlockHiveFlusherExclusive(*(_QWORD *)(v18 + 32));
                  HvUnlockHiveFlusherShared(*(_QWORD *)(v209 + 32));
                  *(_WORD *)(v209 + 8) |= 8u;
                  CmpReferenceKeyControlBlockUnsafe(v18);
                  *(_QWORD *)(v209 + 104) = v18;
                  CmpUnlockHashEntry(*(PVOID *)(v263 + 48), 0);
                  v69 = *(_QWORD *)v276;
                  *(_DWORD *)(v263 + 32) = 1;
                  v70 = v259;
                  v268 = 0;
LABEL_92:
                  if ( *(_DWORD *)(v263 + 32) == 1 )
                  {
                    v72 = v263;
                    *((_WORD *)Object + 2) = *(_WORD *)(*((_QWORD *)Object + 1) + 66LL);
                  }
                  else
                  {
                    v254 = v71;
                    v72 = v263;
                    if ( !(unsigned __int8)CmpCheckOpenAccessOnKeyBody(
                                             (char *)Object,
                                             (__int64)v45,
                                             (_DWORD *)v263,
                                             v282,
                                             v266,
                                             (*(_DWORD *)(v263 + 24) & 4) != 0,
                                             v254,
                                             BugCheckParameter4,
                                             &Child) )
                    {
                      if ( BugCheckParameter4[0] )
                      {
                        if ( (*(_DWORD *)(v72 + 160) & 1) == 0 )
                        {
                          CmpAttachToRegistryProcess((PRKAPC_STATE)(v72 + 168));
                          *(_DWORD *)(v72 + 160) |= 1u;
                        }
                        v74 = CmpConstructName(v18);
                        v265 = (void *)v74;
                      }
                      else
                      {
                        v74 = 0LL;
                      }
                      CmpRecordParseFailure(v72, 15584, Child);
LABEL_99:
                      if ( !v270 )
                      {
LABEL_100:
                        v75 = v259;
                        goto LABEL_235;
                      }
LABEL_519:
                      CmpUnlockKcbStack((__int64)&ApcState);
                      goto LABEL_100;
                    }
                  }
                  v73 = Object;
                  Object = 0LL;
                  *v290 = v73;
                  if ( !*(_DWORD *)(v72 + 32) )
                    *(_DWORD *)(v72 + 32) = 2;
                  if ( v267 )
                  {
                    Child = 1073741846;
                  }
                  else
                  {
                    Child = 0;
                    *(_QWORD *)v276 = v69;
                    v259 = v70;
                  }
LABEL_98:
                  v74 = 0LL;
                  goto LABEL_99;
                }
              }
              v18 = BugCheckParameter2;
              HvUnlockHiveFlusherExclusive(*(_QWORD *)(BugCheckParameter2 + 32));
              HvUnlockHiveFlusherShared(*(_QWORD *)(v209 + 32));
              v265 = 0LL;
              goto LABEL_98;
            }
            v208 = started;
            v234 = 8448;
LABEL_511:
            v245 = v263;
LABEL_513:
            CmpRecordParseFailure(v245, v234, v208);
            v18 = BugCheckParameter2;
            goto LABEL_221;
          }
          v234 = 7680;
LABEL_509:
          Child = -1073741772;
          v208 = -1073741772;
          goto LABEL_511;
        }
        v246 = 7424;
      }
      else
      {
        v246 = 7168;
      }
      Child = -1073741790;
      CmpRecordParseFailure(v263, v246, -1073741790);
      v18 = BugCheckParameter2;
      goto LABEL_221;
    }
    v234 = 6912;
    goto LABEL_509;
  }
  if ( (*(_DWORD *)v263 & 0x20) != 0 )
  {
    CmpUnlockKcbStack((__int64)v45);
    CmpUnlockKcbStack(v51);
    CmpLockKcbStackTopExclusiveRestShared(v51);
    CmpLockKcbStackTopExclusiveRestShared((__int64)v45);
    v182 = *(_QWORD *)&v273[1];
    if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v276, *(_QWORD *)&v273[1]) )
    {
      v106 = 8960;
      goto LABEL_171;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v18 + 72) + 184LL) & 0x20000) != 0 )
    {
      v106 = 9216;
      goto LABEL_171;
    }
    v183 = CmpGetComponentNameAtIndex(v278, (unsigned int)v55);
    if ( (*(_DWORD *)(v18 + 184) & 0x400000) == 0 && (*(_DWORD *)(v18 + 8) & 8) != 0 )
    {
      CmpDelayDerefKeyControlBlock(*(_QWORD *)(v18 + 104));
      *(_QWORD *)(v18 + 104) = 0LL;
      *(_WORD *)(v18 + 8) &= ~8u;
    }
    *(_WORD *)(v18 + 186) |= 0x40u;
    v184 = v263;
    v185 = v266;
    v186 = v263;
    *(_DWORD *)(v18 + 100) = -1;
    *(_DWORD *)(v18 + 96) = *(_DWORD *)(v186 + 56);
    Child = CmpCreateKeyBody(v18, v185, v186, v182, 3, (__int64)v45, (__int64)&Object, (__int64)&v267);
    if ( Child < 0 )
      goto LABEL_221;
    if ( (unsigned __int8)CmpIsKeyStackDeleted(v45, v182) )
    {
      v258 = v182;
      v69 = *(_QWORD *)v276;
      Child = CmpCreateChild(v276[0], (_DWORD)v45, (_DWORD)v282, v183, v184, 64, 0, 0, v258);
      if ( Child < 0 )
        goto LABEL_221;
      v70 = v259;
      *(_DWORD *)(v184 + 32) = 1;
    }
    else
    {
LABEL_90:
      v69 = *(_QWORD *)v276;
      v70 = v259;
    }
LABEL_91:
    v71 = *(_QWORD *)&v273[1];
    goto LABEL_92;
  }
  v61 = *((_WORD *)v45 + 1);
  v284 = 0LL;
  while ( 1 )
  {
    if ( v61 < 0
      || (v61 >= 2 ? (v62 = *(_QWORD *)(*((_QWORD *)v45 + 3) + 8LL * v61 - 16)) : (v62 = *(_QWORD *)&v45[2 * v61 + 2]),
          *(_WORD *)(v62 + 66) && *(_BYTE *)(v62 + 65) == 1) )
    {
      v63 = *(_QWORD *)&v273[1];
LABEL_164:
      if ( BYTE1(v273[0]) )
      {
        v106 = 9728;
        Child = -1073741811;
        v107 = -1073741811;
        v108 = v60;
        goto LABEL_220;
      }
      v105 = *(_QWORD *)v276;
      if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v276, v63)
        || !(unsigned __int8)CmRmIsKcbStackVisible(v105, v63) )
      {
        v106 = 9984;
      }
      else
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v18 + 72) + 184LL) & 0x20000) == 0 )
        {
          if ( (*(_DWORD *)v263 & 1) == 0 )
          {
            if ( !CmpLoadingSystemHivesActive
              || (v18 = v274, (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread())
              || *(_QWORD *)(v274 + 32) != CmpMasterHive
              || (*(_DWORD *)(v274 + 8) & 0x7FE00000) != 0x600000
              || (v235 = CmpGetComponentNameAtIndex(v263 + 216, (unsigned int)v55),
                  !(unsigned __int8)CmpWaitForHiveMount(v235, v236, v237, v237 + 136)) )
            {
              v106 = 10752;
              goto LABEL_171;
            }
            v106 = 10496;
            Child = 259;
            v107 = 259;
            v108 = v263;
            *(_DWORD *)v263 |= 0x100u;
            goto LABEL_220;
          }
          if ( *(_QWORD *)(v18 + 32) == CmpMasterHive && CmpNoMasterCreates )
          {
            v18 = v274;
            if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
            {
              if ( CmpLoadingSystemHivesActive
                && (*(_DWORD *)(v274 + 8) & 0x7FE00000) == 0x600000
                && (v227 = CmpGetComponentNameAtIndex(v263 + 216, (unsigned int)v55),
                    (unsigned __int8)CmpWaitForHiveMount(v227, v228, v229, v229 + 136)) )
              {
                v106 = 11008;
                Child = 259;
                v107 = 259;
                v108 = v263;
                *(_DWORD *)v263 |= 0x100u;
              }
              else
              {
                v108 = v263;
                Child = -1073741811;
                v107 = -1073741811;
                v106 = 11264;
              }
              goto LABEL_220;
            }
            v63 = v277;
            *(_QWORD *)&v273[1] = v277;
          }
          v167 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v263 + 216, (unsigned int)v55);
          LOBYTE(v168) = 1;
          v170 = CmpDoWritethroughReparse(v18, (int)v45, v105, v168, v167, v169, (__int64)String2);
          Child = v170;
          if ( v170 == -1073741199 )
          {
            v171 = CmpCreateKeyBody(v18, v266, v263, v63, 0, (__int64)v45, (__int64)&Object, (__int64)&v267);
            Child = v171;
            if ( v171 >= 0 )
            {
              v172 = v263;
              if ( (*(_DWORD *)(v263 + 160) & 1) == 0 )
              {
                CmpAttachToRegistryProcess((PRKAPC_STATE)(v263 + 168));
                v172 = v263;
                *(_DWORD *)(v263 + 160) |= 1u;
              }
              if ( *(_DWORD *)(*(_QWORD *)(v18 + 72) + 40LL) == -1 )
              {
                v224 = *(_DWORD *)(v172 + 24) >> 2;
                LOBYTE(v224) = (*(_DWORD *)(v172 + 24) & 4) != 0;
                if ( !CmpCheckCreateAccessOnKcbStack(
                        v224,
                        v105,
                        v172,
                        (__int64)v282,
                        v266,
                        16 * (*(_DWORD *)(v172 + 24) & 2),
                        v224,
                        v63,
                        (__int64)Object,
                        1,
                        &Child) )
                {
                  v18 = v274;
                  if ( KeGetCurrentThread()->PreviousMode == 1
                    && (CurrentThreadProcess = PsGetCurrentThreadProcess(),
                        ProcessServerSilo = PsGetProcessServerSilo((__int64)CurrentThreadProcess),
                        ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo),
                        (unsigned int)PsGetSessionIdEx((__int64)CurrentThreadProcess) != ServerSiloServiceSessionId)
                    && CmpCheckKeyOwnerForPca(v105, v277) )
                  {
                    v247 = *(_QWORD *)(v18 + 72);
                    BugCheckParameter4[0] = 1;
                    v74 = CmpConstructName(v247);
                    v265 = (void *)v74;
                  }
                  else
                  {
                    v74 = 0LL;
                  }
                  CmpRecordParseFailure(v263, 11520, Child);
                  v75 = v259;
                  goto LABEL_235;
                }
                CmpUnlockKcbStack((__int64)v45);
                CmpUnlockKcbStack(v105);
                if ( BYTE1(v264) )
                {
                  CmpUnlockKcb(*(_QWORD *)(v53 + 8));
                  BYTE1(v264) = 0;
                }
                LOBYTE(v225) = 1;
                v226 = CmpPromoteKey(v105, 0LL, v225);
                Child = v226;
                if ( v226 < 0 )
                {
                  if ( v226 == -1073741444 )
                  {
                    v226 = -1073741772;
                    Child = -1073741772;
                  }
                  CmpRecordParseFailure(v263, 11776, v226);
                  v74 = 0LL;
                  goto LABEL_104;
                }
              }
              else
              {
                CmpUnlockKcbStack((__int64)v45);
                CmpUnlockKcbStack(v105);
                CmpLockKcbStackTopExclusiveRestShared(v105);
              }
              CmpLockKcbStackTopExclusiveRestShared((__int64)v45);
              if ( (unsigned __int8)CmRmIsKcbStackVisible(v45, v63) )
              {
                if ( (*(_DWORD *)(v18 + 8) & 0x20000) != 0 )
                {
                  v248 = v263;
                  v249 = 12160;
                  Child = -1073741772;
                  v250 = -1073741772;
                }
                else if ( (unsigned __int8)CmpIsKeyStackDeleted(v45, v63) )
                {
                  v173 = *(_QWORD *)v276;
                  if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v276, v63)
                    || !(unsigned __int8)CmRmIsKcbStackVisible(v173, v63) )
                  {
                    v248 = v263;
                    v249 = 12288;
                    Child = -1073741772;
                    v250 = -1073741772;
                  }
                  else
                  {
                    v174 = *(_QWORD *)(v18 + 72);
                    if ( (*(_DWORD *)(v174 + 184) & 0x20000) != 0 )
                    {
                      v248 = v263;
                      v249 = 12544;
                      Child = -1073741772;
                      v250 = -1073741772;
                    }
                    else
                    {
                      LOBYTE(SourceString) = v266;
                      Logic = CmpVEExecuteCreateLogic(
                                v174,
                                v18,
                                v167,
                                v282,
                                SourceString,
                                16 * (*(_DWORD *)(v263 + 24) & 2u),
                                v63,
                                v263,
                                String2);
                      Child = Logic;
                      if ( Logic == -1073741739 )
                      {
                        v250 = -1073741267;
                        Child = -1073741267;
                        v249 = 12672;
                        v248 = v263;
                        *(_DWORD *)v263 |= 0x400u;
                      }
                      else if ( Logic == -1073741199 )
                      {
                        v176 = *(_DWORD *)(v263 + 24) >> 2;
                        LOBYTE(v176) = (*(_DWORD *)(v263 + 24) & 4) != 0;
                        if ( !CmpCheckCreateAccessOnKcbStack(
                                v176,
                                v173,
                                v263,
                                (__int64)v282,
                                v266,
                                16 * (*(_DWORD *)(v263 + 24) & 2),
                                v176,
                                v63,
                                (__int64)Object,
                                0,
                                &Child) )
                        {
                          v18 = v274;
                          if ( KeGetCurrentThread()->PreviousMode == 1
                            && (v230 = PsGetCurrentThreadProcess(),
                                v231 = PsGetProcessServerSilo((__int64)v230),
                                v232 = PsGetServerSiloServiceSessionId(v231),
                                (unsigned int)PsGetSessionIdEx((__int64)v230) != v232)
                            && CmpCheckKeyOwnerForPca(*(__int64 *)v276, v277) )
                          {
                            v251 = *(_QWORD *)(v18 + 72);
                            BugCheckParameter4[0] = 1;
                            v74 = CmpConstructName(v251);
                            v265 = (void *)v74;
                          }
                          else
                          {
                            v74 = 0LL;
                          }
                          CmpRecordParseFailure(v263, 12800, Child);
                          v75 = 1;
                          goto LABEL_235;
                        }
                        v177 = CmpEnlistKeyBody((_DWORD)Object, v18, v63, 1, (__int64)v45);
                        Child = v177;
                        if ( v177 < 0 )
                        {
                          v248 = v263;
                          v250 = v177;
                          v249 = 12928;
                        }
                        else
                        {
                          v178 = v263;
                          v257 = v63;
                          v69 = *(_QWORD *)v276;
                          v179 = CmpCreateChild(
                                   v276[0],
                                   (_DWORD)v45,
                                   (_DWORD)v282,
                                   (_DWORD)v167,
                                   v263,
                                   8 * (*(_WORD *)(v263 + 24) & 2u),
                                   0,
                                   0,
                                   v257);
                          Child = v179;
                          if ( v179 >= 0 )
                          {
                            *(_DWORD *)(v178 + 32) = 1;
                            goto LABEL_347;
                          }
                          v250 = v179;
                          v249 = 12992;
                          v248 = v178;
                        }
                      }
                      else
                      {
                        v248 = v263;
                        v250 = Logic;
                        v249 = 12736;
                      }
                    }
                  }
                }
                else
                {
                  IsKeyStackSymlink = CmpIsKeyStackSymlink(v45);
                  v188 = v263;
                  if ( IsKeyStackSymlink && !_bittest((const signed __int32 *)v263, 9u) )
                  {
                    if ( (*(_DWORD *)(v263 + 24) & 2) == 0 )
                    {
                      CmpUnlockKcbStack(*(__int64 *)v276);
                      if ( BYTE1(v264) )
                      {
                        CmpUnlockKcb(*(_QWORD *)(v53 + 8));
                        BYTE1(v264) = 0;
                      }
                      if ( (_BYTE)v264 )
                      {
                        CmpUnlockHashEntryByKcb(v18);
                        LOBYTE(v264) = 0;
                      }
                      v238 = CmpGetSymbolicLinkTarget(
                               (_DWORD)v45,
                               (int)v188 + 216,
                               0,
                               0,
                               v63,
                               v188,
                               (__int64)&v289,
                               (__int64)String2,
                               v188 + 88,
                               (__int64)&v285);
                      Child = v238;
                      if ( v238 < 0 )
                      {
                        CmpRecordParseFailure(v188, 13312, v238);
                        v74 = 0LL;
                      }
                      else
                      {
                        *(_DWORD *)v188 &= ~8u;
                        if ( !*(_QWORD *)(v188 + 64) )
                        {
                          v239 = *(_QWORD *)(v285 + 32);
                          if ( (*(_DWORD *)(v239 + 4112) & 1) != 0 )
                            *(_QWORD *)(v188 + 64) = v239;
                        }
                        Child = 260;
                        CmpRecordParseFailure(v188, 13440, 260);
                        v74 = 0LL;
                      }
                      goto LABEL_104;
                    }
                    v249 = 13056;
                  }
                  else
                  {
                    if ( (*(_DWORD *)(v18 + 184) & 0x20000) != 0 )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(v263, 13568, -1073741772);
                      v75 = 1;
                      v74 = 0LL;
                      goto LABEL_235;
                    }
                    if ( (*(_DWORD *)(v263 + 24) & 2) == 0 )
                    {
                      v189 = v263;
                      v190 = CmpDoWritethroughReparse(v18, (int)v45, v276[0], 0, 0LL, v263, (__int64)String2);
                      Child = v190;
                      if ( v190 != -1073741199 )
                      {
                        CmpRecordParseFailure(v189, 13888, v190);
                        v75 = 1;
                        v74 = 0LL;
                        goto LABEL_235;
                      }
                      v191 = CmpVEExecuteOpenLogic(v18, v266, (__int64)&v282->SubjectSecurityContext);
                      Child = v191;
                      if ( v191 != -1073741199 )
                      {
                        CmpRecordParseFailure(v189, 13952, v191);
                        v75 = 1;
                        v74 = 0LL;
                        goto LABEL_235;
                      }
                      LOBYTE(v192) = 1;
                      v193 = CmpEnlistKeyBody((_DWORD)Object, v18, v63, v192, (__int64)v45);
                      Child = v193;
                      if ( v193 < 0 )
                      {
                        CmpRecordParseFailure(v189, 14016, v193);
                        v75 = 1;
                        v74 = 0LL;
                        goto LABEL_235;
                      }
                      v69 = *(_QWORD *)v276;
LABEL_347:
                      v70 = 1;
                      v259 = 1;
                      goto LABEL_91;
                    }
                    v249 = 13824;
                  }
                  Child = -1073741771;
                  v250 = -1073741771;
                  v248 = v263;
                }
              }
              else
              {
                v248 = v263;
                v249 = 12032;
                Child = -1073741772;
                v250 = -1073741772;
              }
              CmpRecordParseFailure(v248, v249, v250);
              v75 = 1;
              v74 = 0LL;
              goto LABEL_235;
            }
            v107 = v171;
            v106 = 11456;
          }
          else
          {
            v107 = v170;
            v106 = 11392;
          }
LABEL_172:
          v108 = v263;
LABEL_220:
          CmpRecordParseFailure(v108, v106, v107);
LABEL_221:
          v75 = v259;
          goto LABEL_222;
        }
        v106 = 10240;
      }
LABEL_171:
      v107 = -1073741772;
      Child = -1073741772;
      goto LABEL_172;
    }
    if ( *(_DWORD *)(v62 + 40) != -1 )
      break;
    --v61;
  }
  v63 = *(_QWORD *)&v273[1];
  if ( *(_QWORD *)&v273[1] )
  {
    v129 = *((_QWORD *)v45 + 1);
    while ( 1 )
    {
      v130 = CmListGetNextElement(v129 + 208, &v284, 32LL);
      if ( !v130 )
        break;
      if ( *(_DWORD *)(v130 + 68) == 2 )
      {
        v140 = CmEqualTrans(*(_QWORD *)(v130 + 56), v63);
        v60 = v263;
        if ( !v140 )
          break;
        goto LABEL_164;
      }
    }
  }
  if ( !(unsigned __int8)CmpIsKeyStackSymlink(v45) || _bittest((const signed __int32 *)v64, 9u) )
  {
    if ( BYTE1(v273[0]) )
    {
      v106 = 14848;
      Child = -1073741811;
      v107 = -1073741811;
      v108 = v64;
      goto LABEL_220;
    }
    if ( (*(_DWORD *)(v18 + 184) & 0x20000) != 0 )
    {
      Child = -1073741772;
      v106 = 15104;
      v107 = -1073741772;
      v108 = v64;
      goto LABEL_220;
    }
    if ( (*(_DWORD *)(v64 + 24) & 2) != 0 )
    {
      Child = -1073741771;
      v106 = 15360;
      v107 = -1073741771;
      v108 = v64;
      goto LABEL_220;
    }
    v65 = CmpDoWritethroughReparse(v18, (int)v45, v276[0], 0, 0LL, v64, (__int64)String2);
    Child = v65;
    if ( v65 == -1073741199 )
    {
      v66 = v266;
      v67 = CmpVEExecuteOpenLogic(v18, v266, (__int64)&v282->SubjectSecurityContext);
      Child = v67;
      if ( v67 == -1073741199 )
      {
        v68 = CmpCreateKeyBody(v18, v66, v263, v63, 2, (__int64)v45, (__int64)&Object, (__int64)&v267);
        Child = v68;
        if ( v68 >= 0 )
          goto LABEL_90;
        if ( v68 == -1073741444 )
        {
          v68 = -1073741772;
          Child = -1073741772;
        }
        v107 = v68;
        v106 = 15552;
        v108 = v263;
      }
      else
      {
        v107 = v67;
        v106 = 15488;
        v108 = v263;
      }
      goto LABEL_220;
    }
    v107 = v65;
    v106 = 15424;
    goto LABEL_172;
  }
  if ( (*(_DWORD *)(v64 + 24) & 2) != 0 )
  {
    Child = -1073741771;
    v106 = 14080;
    v107 = -1073741771;
    v108 = v64;
    goto LABEL_220;
  }
  v75 = v259;
  if ( v259 )
  {
    CmpUnlockKcbStack(*(__int64 *)v276);
    v75 = 0;
  }
  if ( BYTE1(v264) )
  {
    CmpUnlockKcb(*(_QWORD *)(v53 + 8));
    BYTE1(v264) = 0;
  }
  if ( (_BYTE)v264 )
  {
    CmpUnlockHashEntryByKcb(v18);
    LOBYTE(v264) = 0;
  }
  v145 = v263;
  v146 = CmpGetSymbolicLinkTarget(
           (_DWORD)v45,
           (int)v263 + 216,
           0,
           0,
           v63,
           v263,
           (__int64)&v289,
           (__int64)String2,
           v263 + 88,
           (__int64)&v285);
  Child = v146;
  if ( v146 < 0 )
  {
    CmpRecordParseFailure(v263, 14336, v146);
    v74 = 0LL;
  }
  else
  {
    *(_DWORD *)v263 &= ~8u;
    if ( !*(_QWORD *)(v145 + 64) )
    {
      v147 = *(_QWORD *)(v285 + 32);
      if ( (*(_DWORD *)(v147 + 4112) & 1) != 0 )
        *(_QWORD *)(v145 + 64) = v147;
    }
    Child = 260;
    CmpRecordParseFailure(v145, 14592, 260);
    v74 = 0LL;
  }
LABEL_101:
  if ( v75 )
    CmpUnlockKcbStack(*(__int64 *)v276);
  v53 = v286;
LABEL_104:
  if ( BYTE1(v264) )
    CmpUnlockKcb(*(_QWORD *)(v53 + 8));
  v37 = v263;
  if ( v268 )
    CmpUnlockHashEntry(*(PVOID *)(v263 + 48), 0);
LABEL_108:
  v76 = v260;
LABEL_109:
  v42 = *(_QWORD *)&BugCheckParameter4[5];
LABEL_110:
  v77 = (void *)v74;
  v78 = v262;
  if ( (_BYTE)v264 )
    CmpUnlockHashEntryByKcb(v18);
  if ( v76 )
    CmpUnlockHashEntryByKcb(v42);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v294[1] )
    CmSiFreeMemory(v294[1]);
  if ( ApcState.ApcListHead[1].Blink )
    CmSiFreeMemory((PPRIVILEGE_SET)ApcState.ApcListHead[1].Blink);
  v79 = *(_QWORD *)v288;
  if ( *(_QWORD *)v288 )
  {
    CmpDereferenceKeyControlBlockUnsafe(v18);
    v80 = v79;
LABEL_123:
    CmpDereferenceKeyControlBlock(v80);
  }
  else if ( v18 )
  {
    v80 = v18;
    goto LABEL_123;
  }
  if ( v42 )
    CmpDereferenceKeyControlBlock(v42);
  v81 = *(_DWORD *)(v37 + 100);
  if ( v81 )
  {
    v262 = v78;
    v82 = v77;
    if ( (v81 & 2) != 0 )
    {
      v83 = *(_QWORD *)(v37 + 112);
      memset(&ApcState, 0, sizeof(ApcState));
      v84 = *(_QWORD **)(v83 + 1648);
      v85 = *(_DWORD *)(v83 + 1656);
      v290 = v84;
      v272 = v85;
      CmpAttachToRegistryProcess(&ApcState);
      v262 = v78;
LABEL_129:
      if ( v9 >= v85 )
      {
        CmpDetachFromRegistryProcess(&ApcState);
      }
      else
      {
        CmpLockHashEntryByIndexExclusive(v83, v9);
        v86 = &v84[3 * v9];
LABEL_131:
        v87 = v86 + 2;
        while ( 1 )
        {
          v88 = *v87;
          if ( !*v87 )
          {
            CmpUnlockHashEntryByIndex(v83, v9);
            v85 = v272;
            ++v9;
            v84 = v290;
            goto LABEL_129;
          }
          v89 = (_QWORD *)(v88 - 16);
          CmpLockKcbExclusive(v88 - 16);
          if ( !*v89 )
          {
            CmpRemoveFromDelayedClose(v89);
            CmpCleanUpKcbCacheWithLock((ULONG_PTR)v89);
            CmpUnlockKcb((ULONG_PTR)v89);
            goto LABEL_131;
          }
          v90 = v89[3];
          v91 = CmpSyncKcbCacheForHive((ULONG_PTR)v89, v83);
          if ( v91 == 1 || v91 == 3 )
            break;
          if ( v91 == 2 )
          {
            CmpUnlockKcb((ULONG_PTR)v89);
            *v87 = v90;
          }
          else
          {
            v87 = v89 + 3;
            CmpUnlockKcb((ULONG_PTR)v89);
          }
        }
        CmpUnlockKcb((ULONG_PTR)v89);
        CmpUnlockHashEntryByIndex(v83, v9);
      }
      v37 = v263;
      v82 = v77;
      *(_DWORD *)(v263 + 100) &= ~2u;
    }
  }
  else
  {
    v82 = v265;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v289);
  if ( v262 )
    CmpUnlockRegistry(v148);
  if ( v82 )
  {
    if ( BugCheckParameter4[0] && (unsigned __int8)CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(v37, v82);
    CmpFreeTransientPoolWithTag(v82, 0x624E4D43u);
  }
  if ( (*(_DWORD *)(v37 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(v37 + 168);
  if ( Object )
    ObfDereferenceObject(Object);
  CmpCleanupPathInfo(v37 + 216);
  return (unsigned int)Child;
}
