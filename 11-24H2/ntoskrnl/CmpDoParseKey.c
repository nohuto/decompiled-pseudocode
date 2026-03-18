/*
 * XREFs of CmpDoParseKey @ 0x14086E7B0
 * Callers:
 *     CmpParseKey @ 0x14089F150 (CmpParseKey.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgWriteAgg @ 0x1403D06F8 (_tlgWriteAgg.c)
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmpInitializeDelayDerefContext @ 0x140424470 (CmpInitializeDelayDerefContext.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     CmpTransSilentIgnore @ 0x14043E2F0 (CmpTransSilentIgnore.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404566C0 (PsGetServerSiloServiceSessionId.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcess @ 0x1404709D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpSyncKcbCacheForHive @ 0x1407DBE60 (CmpSyncKcbCacheForHive.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1407E0F1C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpCreateKeyBody @ 0x14083E100 (CmpCreateKeyBody.c)
 *     CmpLockHiveListShared @ 0x1408442F8 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x140844354 (CmpUnlockHiveList.c)
 *     CmpUnlockHashEntryByKcb @ 0x140844460 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockHashEntry @ 0x1408446B0 (CmpUnlockHashEntry.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpRecordParseFailure @ 0x140845C40 (CmpRecordParseFailure.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x140868520 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeyOwnerForPca @ 0x140868640 (CmpCheckKeyOwnerForPca.c)
 *     HvUnlockHiveFlusherShared @ 0x14086A604 (HvUnlockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086C494 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086DD20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpStartKcbStack @ 0x14086DDF0 (CmpStartKcbStack.c)
 *     CmpComputeComponentHashes @ 0x14086DE60 (CmpComputeComponentHashes.c)
 *     CmpExpandPathInfo @ 0x14086E13C (CmpExpandPathInfo.c)
 *     CmpIsKeyDeleted @ 0x14086E210 (CmpIsKeyDeleted.c)
 *     RtlPrefixUnicodeString @ 0x14086E3C0 (RtlPrefixUnicodeString.c)
 *     CmpIsKeyStackSymlink @ 0x14086E500 (CmpIsKeyStackSymlink.c)
 *     CmpIsKcbInvolvedInVirtualization @ 0x14086E550 (CmpIsKcbInvolvedInVirtualization.c)
 *     CmpUnlockKcbStack @ 0x14086E6E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupPathInfo @ 0x14086E730 (CmpCleanupPathInfo.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408704E0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpRemoveFromDelayedClose @ 0x140870910 (CmpRemoveFromDelayedClose.c)
 *     CmpUnlockHashEntryByIndex @ 0x140870A20 (CmpUnlockHashEntryByIndex.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 *     CmpHashUnicodeComponent @ 0x1408733F0 (CmpHashUnicodeComponent.c)
 *     CmpVEExecuteOpenLogic @ 0x1408745A0 (CmpVEExecuteOpenLogic.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140875C90 (CmpGetKeyNodeForKcb.c)
 *     CmpConstructName @ 0x1408763E0 (CmpConstructName.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408768A0 (CmpGetSymbolicLinkTarget.c)
 *     CmpTransReferenceTransaction @ 0x140879088 (CmpTransReferenceTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408790E8 (CmpTransSearchAddLightWeightTrans.c)
 *     CmEqualTrans @ 0x140879280 (CmEqualTrans.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087B450 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDoWritethroughReparse @ 0x14087B570 (CmpDoWritethroughReparse.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087C024 (CmpRebuildKcbCacheFromNode.c)
 *     HvLockHiveFlusherShared @ 0x14087DD28 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14087E570 (CmpDelayDerefKeyControlBlock.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14090B474 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpIsSystemEntity @ 0x14090D660 (CmpIsSystemEntity.c)
 *     CmpLockKcbStackShared @ 0x140917710 (CmpLockKcbStackShared.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmpLogUnsupportedOperation @ 0x14097AB10 (CmpLogUnsupportedOperation.c)
 *     HvResetDirtyData @ 0x14097EE44 (HvResetDirtyData.c)
 *     CmpPromoteKey @ 0x1409880D8 (CmpPromoteKey.c)
 *     CmpEnlistKeyBody @ 0x140988300 (CmpEnlistKeyBody.c)
 *     CmpIsKeyStackDeleted @ 0x140988420 (CmpIsKeyStackDeleted.c)
 *     CmpPopulateKcbStack @ 0x1409884F0 (CmpPopulateKcbStack.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14099E750 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpGetComponentHashAtIndex @ 0x14099FAA0 (CmpGetComponentHashAtIndex.c)
 *     CmpCheckExeOwnerForPca @ 0x1409A1D9C (CmpCheckExeOwnerForPca.c)
 *     CmpGetComponentNameAtIndex @ 0x1409A6A00 (CmpGetComponentNameAtIndex.c)
 *     CmRmIsKcbStackVisible @ 0x1409A7350 (CmRmIsKcbStackVisible.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1409E9D78 (CmpLockHashEntrySharedByKcb.c)
 *     CmpVEExecuteCreateLogic @ 0x140A203DC (CmpVEExecuteCreateLogic.c)
 *     CmpTransSearchAddTransFromRm @ 0x140A4B224 (CmpTransSearchAddTransFromRm.c)
 *     CmpPublishEventForPcaResolver @ 0x140A501E0 (CmpPublishEventForPcaResolver.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140A50F24 (CmpTryToLockHashEntryExclusive.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140A530D4 (CmpUpdateHiveRootCellFlags.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A5F1F8 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpCreateHiveRootCell @ 0x140AA6F78 (CmpCreateHiveRootCell.c)
 *     CmpWaitForHiveMount @ 0x140AB35B0 (CmpWaitForHiveMount.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BB9480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmListGetNextElement @ 0x140BB9940 (CmListGetNextElement.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BB9A98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BB9AB4 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
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
  __int64 v10; // r12
  ULONG_PTR v12; // r13
  __m128i v13; // xmm6
  ULONG_PTR v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rcx
  char v17; // r15
  ULONG_PTR v18; // r10
  bool v19; // cl
  __int16 v20; // r15
  _WORD *v21; // rdi
  __int16 v22; // r14
  __int16 epi16; // r12
  unsigned int v24; // r13d
  __m128i *v25; // r14
  __int16 v26; // r15
  __int32 v27; // eax
  char v28; // cl
  __int16 v29; // r12
  unsigned int i; // ecx
  char *v31; // rax
  int v32; // r14d
  ULONG_PTR v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // r15
  int v38; // eax
  char v39; // al
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  NTSTATUS v41; // eax
  _QWORD *v42; // rdi
  __int64 v43; // r14
  _QWORD **v44; // r14
  _QWORD *k; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // r14
  char v51; // al
  wchar_t *v52; // r8
  __int16 v53; // cx
  __int16 v54; // ax
  int v55; // edi
  _QWORD *v56; // r13
  int v57; // eax
  unsigned int j; // ecx
  _WORD *v59; // rax
  char v60; // al
  char v61; // r13
  __int64 v62; // rdi
  __int64 v63; // rcx
  int v64; // r14d
  GUID *v65; // rax
  int started; // eax
  int v67; // eax
  __int64 *v68; // r14
  int *v69; // rdi
  int v70; // ebx
  int v71; // r15d
  __int16 v72; // dx
  __int64 v73; // rcx
  __int64 v74; // r10
  __int64 v75; // r9
  int v76; // ecx
  char *v77; // r8
  char v78; // dl
  __int64 v79; // rax
  ULONG_PTR v80; // rbx
  __int64 *v81; // rax
  int v82; // edx
  int v83; // r8d
  __int64 v84; // rcx
  char v85; // bl
  __int64 v86; // r12
  bool v87; // al
  __int64 v88; // r15
  void *v89; // r14
  ULONG_PTR v90; // rbx
  ULONG_PTR v91; // rcx
  int v92; // eax
  void *v93; // r13
  ULONG_PTR v94; // r15
  _QWORD *v95; // rdi
  unsigned int v96; // ebx
  _QWORD *v97; // r12
  __int64 *v98; // rdi
  __int64 v99; // rax
  _QWORD *v100; // rbx
  __int64 v101; // r13
  int v102; // eax
  __int64 v103; // rax
  _DWORD *v104; // r12
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // r8
  int v110; // eax
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rdi
  __int64 v114; // r9
  __int64 NextElement; // rax
  __int64 v116; // rcx
  char v117; // r14
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  int v121; // eax
  __int64 v122; // rcx
  NTSTATUS v123; // eax
  int v124; // r8d
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  PVOID v128; // rdx
  __int64 v130; // rax
  __int64 v131; // rdx
  int *v132; // r15
  __int64 v133; // rcx
  __int16 v134; // bx
  GUID *v135; // rdi
  int ComponentNameAtIndex; // ebx
  unsigned __int8 v137; // dl
  __int64 v138; // r8
  __int16 v139; // r9
  __int64 v140; // rax
  unsigned int v141; // ecx
  bool v142; // zf
  unsigned __int64 v143; // rax
  wchar_t *v144; // r10
  unsigned int v145; // edx
  __int64 v147; // rax
  __int64 v148; // r13
  int v149; // eax
  ULONG_PTR v150; // r9
  int v151; // eax
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // r8
  ULONG_PTR v155; // r9
  int v156; // edx
  int v157; // r8d
  __int64 v158; // rcx
  int v159; // edx
  int v160; // r8d
  __int64 v161; // rdx
  bool v162; // r8
  __int64 v163; // rcx
  unsigned int v164; // r8d
  __int64 v165; // r12
  __int64 v166; // rcx
  int ComponentHashAtIndex; // ebx
  __int64 v168; // rcx
  __int64 v169; // r8
  ULONG_PTR v170; // rdx
  unsigned int *v171; // rdi
  ULONG_PTR v172; // rcx
  int HiveRootCell; // eax
  int updated; // eax
  __int64 v175; // rbx
  __int64 v176; // rbx
  int v177; // eax
  GUID *v178; // r9
  __int64 v179; // r8
  int v180; // eax
  ULONG_PTR v181; // rcx
  int v182; // r13d
  int v183; // eax
  ULONG_PTR v184; // rdi
  __int64 v185; // r12
  ULONG_PTR v186; // rcx
  __int64 v187; // rcx
  char v188; // bl
  __int64 v189; // rdi
  __int64 v190; // r15
  __int64 v191; // rax
  __int64 v192; // rdx
  __int64 v193; // r8
  __int64 v194; // rax
  __int64 v195; // rdx
  __int64 v196; // r8
  const UNICODE_STRING *v197; // rbx
  int v198; // r9d
  __int64 v199; // r8
  NTSTATUS v200; // eax
  int v201; // eax
  __int64 v202; // r8
  __int64 v203; // rcx
  _KPROCESS *CurrentThreadProcess; // rdi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  __int64 v207; // rcx
  __int64 v208; // r8
  int v209; // r8d
  __int64 v210; // rcx
  int v211; // edx
  int v212; // r8d
  __int64 v213; // rcx
  int Logic; // eax
  __int64 v215; // rcx
  int v216; // r9d
  _KPROCESS *v217; // rdi
  __int64 v218; // rax
  int v219; // ebx
  __int64 v220; // rcx
  bool IsKeyStackSymlink; // al
  int SymbolicLinkTarget; // eax
  __int64 v223; // rcx
  __int64 v224; // rbx
  int v225; // r9d
  bool v226; // al
  __int64 v227; // rbx
  int v228; // eax
  __int64 v229; // rcx
  NTSTATUS v230; // eax
  __int64 v231; // rbx
  NTSTATUS v232; // eax
  PVOID v233; // rax
  int SourceString; // [rsp+20h] [rbp-E0h]
  int TransactionId; // [rsp+30h] [rbp-D0h]
  GUID *TransactionIda; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v237; // [rsp+38h] [rbp-C8h]
  char v238; // [rsp+60h] [rbp-A0h]
  char v239; // [rsp+61h] [rbp-9Fh]
  char v240; // [rsp+62h] [rbp-9Eh]
  NTSTATUS KeyBody; // [rsp+64h] [rbp-9Ch] BYREF
  char v242; // [rsp+68h] [rbp-98h]
  __int16 v243; // [rsp+69h] [rbp-97h] BYREF
  ULONG_PTR v244; // [rsp+70h] [rbp-90h]
  __int64 v245; // [rsp+78h] [rbp-88h]
  unsigned __int8 v246; // [rsp+80h] [rbp-80h]
  bool v247[11]; // [rsp+81h] [rbp-7Fh] BYREF
  int v248; // [rsp+8Ch] [rbp-74h]
  __int64 v249; // [rsp+90h] [rbp-70h] BYREF
  int v250[2]; // [rsp+98h] [rbp-68h]
  ULONG_PTR v251; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v252; // [rsp+A8h] [rbp-58h]
  GUID *v253; // [rsp+B0h] [rbp-50h]
  void *v254; // [rsp+B8h] [rbp-48h]
  GUID *v255; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v257; // [rsp+D0h] [rbp-30h] BYREF
  PCUNICODE_STRING String2; // [rsp+D8h] [rbp-28h]
  struct _ACCESS_STATE *v259; // [rsp+E0h] [rbp-20h]
  ULONG_PTR BugCheckParameter3; // [rsp+E8h] [rbp-18h]
  int v261; // [rsp+F0h] [rbp-10h]
  __int64 v262; // [rsp+F8h] [rbp-8h]
  __m128i v263; // [rsp+100h] [rbp+0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+110h] [rbp+10h] BYREF
  __int64 v265; // [rsp+118h] [rbp+18h]
  _QWORD v266[2]; // [rsp+120h] [rbp+20h] BYREF
  __m128i v267; // [rsp+130h] [rbp+30h] BYREF
  __int64 v268; // [rsp+140h] [rbp+40h] BYREF
  int v269[2]; // [rsp+148h] [rbp+48h] BYREF
  ULONG_PTR v270[2]; // [rsp+150h] [rbp+50h] BYREF
  __m128i v271; // [rsp+160h] [rbp+60h]
  __int128 v272; // [rsp+170h] [rbp+70h] BYREF
  _QWORD *v273; // [rsp+180h] [rbp+80h]
  __int64 v274[2]; // [rsp+190h] [rbp+90h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+1A0h] [rbp+A0h]
  int v276[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  PPRIVILEGE_SET v277[2]; // [rsp+1C0h] [rbp+C0h]
  struct _KAPC_STATE ApcState; // [rsp+1D0h] [rbp+D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+200h] [rbp+100h] BYREF
  char v280[32]; // [rsp+220h] [rbp+120h] BYREF
  ULONG_PTR *v281; // [rsp+240h] [rbp+140h]
  __int64 v282; // [rsp+248h] [rbp+148h]

  v9 = 0;
  v10 = a1;
  v245 = a7;
  String2 = a5;
  v273 = a9;
  v12 = 0LL;
  v252 = a1;
  v253 = 0LL;
  v255 = 0LL;
  v239 = 0;
  LOWORD(v249) = 0;
  v240 = 0;
  *(_WORD *)&v247[1] = 0;
  v247[0] = 0;
  v243 = 0;
  v246 = a3;
  v259 = a2;
  LOWORD(v257) = 0;
  KeyBody = 0;
  DestinationString = 0LL;
  v268 = 0LL;
  v272 = 0LL;
  v266[0] = 0LL;
  Object = 0LL;
  BugCheckParameter3 = 0LL;
  v251 = 0LL;
  *(_QWORD *)v269 = 0LL;
  *(_QWORD *)v250 = 0LL;
  v238 = 0;
  LOWORD(v248) = 0;
  *(_WORD *)&v247[7] = 0;
  v270[0] = 0LL;
  HvpGetCellContextInitialize(&v268);
  v13 = *a6;
  v263 = *a6;
  CmpInitializeDelayDerefContext(&v272);
  *(_OWORD *)v274 = 0LL;
  WORD1(v274[0]) = -1;
  *(_OWORD *)v276 = 0LL;
  HIWORD(v276[0]) = -1;
  *(_OWORD *)(a7 + 160) = 0LL;
  v247[3] = 0;
  *(_OWORD *)(a7 + 176) = 0LL;
  v262 = 0LL;
  ApcState.ApcListHead[0] = 0LL;
  WORD1(ApcState.ApcListHead[0].Flink) = -1;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_QWORD *)(a7 + 208) = 0LL;
  v254 = (void *)(a7 + 216);
  *(_OWORD *)Privileges = 0LL;
  *(_OWORD *)v277 = 0LL;
  ApcState.ApcListHead[1] = 0LL;
  memset_0((void *)(a7 + 216), 0, 0xA8uLL);
  memset_0((void *)(a7 + 384), 0, 0x50uLL);
  if ( a7 )
    *(_QWORD *)(a7 + 384) = *(_QWORD *)(a7 + 88);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v14 = *(_QWORD *)(a7 + 88);
  v15 = *(_QWORD *)(a7 + 72);
  v244 = v14;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v15 )
  {
    v130 = *(_QWORD *)(v10 + 56);
    if ( v130 && v15 != v130 )
    {
      v37 = v245;
      KeyBody = -1072103422;
      CmpRecordParseFailure(v245, 256, -1072103422);
      v85 = 0;
      v33 = v155;
      goto LABEL_145;
    }
    v265 = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(v10 + 56);
    v265 = *(_QWORD *)(v10 + 64);
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(v10 + 50);
  v16 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( *(_QWORD *)(v10 + 8) != v16 )
  {
    if ( v14 )
    {
      CmpLockRegistry(v16);
      CmpDereferenceKeyControlBlock(v244);
      v244 = 0LL;
      CmpUnlockRegistry(v49);
      goto LABEL_10;
    }
LABEL_9:
    LOWORD(v248) = 0;
    v244 = v14;
    v238 = 0;
LABEL_10:
    v17 = 0;
    v242 = 0;
LABEL_11:
    v239 = 0;
LABEL_12:
    v18 = *(_QWORD *)(v10 + 8);
    v19 = 0;
    BugCheckParameter2 = v18;
    v267 = v13;
    v271 = v13;
    v247[7] = 0;
    v261 = _mm_cvtsi128_si32(v13);
    if ( (_WORD)v261 )
    {
      v20 = 0;
      v21 = (_WORD *)_mm_srli_si128(v13, 8).m128i_u64[0];
      v22 = _mm_cvtsi128_si32(v13);
      epi16 = _mm_extract_epi16(v13, 1);
      while ( 1 )
      {
        v24 = v20;
        if ( !v22 )
          break;
        if ( v20 >= 32 )
        {
          v121 = -1073741811;
LABEL_320:
          v37 = v245;
          KeyBody = v121;
          CmpRecordParseFailure(v245, 1280, v121);
          goto LABEL_321;
        }
        if ( *v21 == 92 )
        {
          ++v20;
          v267.m128i_i16[0] -= v22;
          v267.m128i_i16[1] = v267.m128i_i16[0];
          if ( v20 > 8 && !v19 )
          {
            v121 = CmpExpandPathInfo((__int64)v254);
            if ( v121 < 0 )
              goto LABEL_320;
            v247[7] = 1;
          }
          v148 = (unsigned int)(v20 - 1);
          if ( (unsigned int)v148 >= 8 )
          {
            *(__m128i *)(*((_QWORD *)v254 + 20) + 16 * ((unsigned int)(v20 - 9) + 6LL)) = v267;
            v151 = CmpHashUnicodeComponent(&v267);
            *(_DWORD *)(*((_QWORD *)v254 + 20) + 4LL * (unsigned int)(v20 - 9)) = v151;
          }
          else
          {
            *((__m128i *)v254 + (unsigned int)v148 + 2) = v267;
            v149 = CmpHashUnicodeComponent(&v267);
            v150 = v244;
            *((_DWORD *)v254 + v148) = v149;
            v244 = v150;
          }
          do
          {
            if ( *v21 != 92 )
              break;
            ++v21;
            v22 -= 2;
            epi16 -= 2;
            v271.m128i_i64[1] = (__int64)v21;
            v271.m128i_i16[0] = v22;
            v271.m128i_i16[1] = epi16;
          }
          while ( v22 );
          v13 = v271;
          v19 = v247[7];
          v267 = v271;
        }
        else
        {
          ++v21;
          v22 -= 2;
          epi16 -= 2;
          v271.m128i_i64[1] = (__int64)v21;
          v271.m128i_i16[1] = epi16;
          v271.m128i_i16[0] = v22;
        }
      }
      v25 = (__m128i *)v254;
      v26 = v20 + 1;
      if ( v26 > 8 && !v19 )
      {
        v121 = CmpExpandPathInfo((__int64)v254);
        if ( v121 < 0 )
          goto LABEL_320;
      }
      if ( v24 >= 8 )
      {
        v113 = v24 - 8;
        *(__m128i *)(v25[10].m128i_i64[0] + 16 * ((unsigned int)v113 + 6LL)) = v13;
        *(_DWORD *)(v25[10].m128i_i64[0] + 4 * v113) = CmpHashUnicodeComponent(&v267);
      }
      else
      {
        v25[v24 + 2] = v13;
        v27 = CmpHashUnicodeComponent(&v267);
        v28 = v242;
        v25->m128i_i32[v24] = v27;
        v242 = v28;
      }
      v18 = BugCheckParameter2;
      v29 = v26;
      v17 = v242;
    }
    else
    {
      v25 = (__m128i *)v254;
      v29 = 0;
    }
    *(_WORD *)&v247[7] = v29;
    KeyBody = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= v29 )
      {
        v32 = v248;
        v33 = v244;
        v12 = BugCheckParameter3;
        goto LABEL_26;
      }
      v31 = i >= 8 ? (char *)(v25[10].m128i_i64[0] + 16 * (i - 8 + 6LL)) : (char *)&v25[i + 2];
      if ( *(_WORD *)v31 > 0x200u )
        break;
    }
    v37 = v245;
    KeyBody = -1073741811;
    CmpRecordParseFailure(v245, 1536, -1073741811);
LABEL_321:
    v12 = BugCheckParameter3;
    goto LABEL_286;
  }
  if ( !v14 )
    goto LABEL_9;
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    CmpLockRegistryExclusive(v16);
  else
    CmpLockRegistry(v16);
  v239 = 1;
  v50 = *(_QWORD *)(v244 + 296);
  v51 = v50 & 1;
  if ( (v50 & 1) != 0 )
    v50 &= ~1uLL;
  if ( !v50 || v51 || !RtlPrefixUnicodeString((PCUNICODE_STRING)v50, String2, 1u) )
  {
    CmpDereferenceKeyControlBlock(v244);
    v244 = 0LL;
    CmpUnlockRegistry(v116);
    v17 = 0;
    v13 = v263;
    v253 = v255;
    v242 = 0;
    BugCheckParameter3 = v251;
    goto LABEL_11;
  }
  v52 = &String2->Buffer[(unsigned __int64)*(unsigned __int16 *)v50 >> 1];
  v53 = String2->Length - *(_WORD *)v50;
  v54 = String2->MaximumLength - *(_WORD *)v50;
  v263.m128i_i64[1] = (__int64)v52;
  v263.m128i_i16[0] = v53;
  v263.m128i_i16[1] = v54;
  if ( v53 )
  {
    do
    {
      if ( *v52 != 92 )
        break;
      v53 -= 2;
      v54 -= 2;
      ++v52;
      v263.m128i_i16[0] = v53;
      v263.m128i_i16[1] = v54;
    }
    while ( v53 );
    v263.m128i_i64[1] = (__int64)v52;
  }
  v55 = ((*(_DWORD *)(v244 + 8) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)v245 & 1) == 0 || v53 )
  {
    v32 = v248;
  }
  else
  {
    v139 = String2->MaximumLength - *(_WORD *)v50;
    v140 = *(_QWORD *)(v244 + 80);
    v141 = *(unsigned __int16 *)(v140 + 24);
    v142 = (*(_DWORD *)v140 & 1) == 0;
    v143 = *(unsigned __int16 *)(v140 + 24);
    if ( v142 )
      v143 = (unsigned __int64)v141 >> 1;
    else
      LOWORD(v141) = 2 * v141;
    v144 = &String2->Buffer[((unsigned __int64)*(unsigned __int16 *)v50 >> 1) - v143];
    v263.m128i_i16[0] = v141 + String2->Length - *(_WORD *)v50;
    v263.m128i_i64[1] = (__int64)v144;
    v32 = 1;
    v263.m128i_i16[1] = v141 + v139;
    --v55;
    v248 = 1;
  }
  v56 = v254;
  v57 = CmpComputeComponentHashes(&v263, (__int16 *)&v247[7], (__int64)v254);
  KeyBody = v57;
  if ( v57 < 0 )
  {
    v156 = 512;
LABEL_331:
    v37 = v245;
    CmpRecordParseFailure(v245, v156, v57);
    v12 = v251;
    v85 = 0;
    goto LABEL_287;
  }
  v29 = *(_WORD *)&v247[7];
  if ( (unsigned int)(*(__int16 *)&v247[7] + v55) > 0x20 )
  {
    v57 = -1073741811;
    v156 = 768;
    KeyBody = -1073741811;
    goto LABEL_331;
  }
  for ( j = 0; j < *(__int16 *)&v247[7]; ++j )
  {
    if ( j >= 8 )
      v59 = (_WORD *)(v56[20] + 16 * (j - 8 + 6LL));
    else
      v59 = &v56[2 * j + 4];
    if ( *v59 > 0x200u )
    {
      v57 = -1073741811;
      v156 = 1024;
      KeyBody = -1073741811;
      goto LABEL_331;
    }
  }
  v33 = v244;
  KeyBody = 0;
  if ( (_WORD)v32 == *(_WORD *)&v247[7] )
  {
    CmpLockHashEntrySharedByKcb(v244);
    v60 = 1;
    v238 = 1;
  }
  else
  {
    v60 = 0;
  }
  v242 = v60;
  v61 = v60;
  CmpLockKcbShared(v244);
  if ( CmpIsKeyDeleted(v244, 0LL) || (*(_DWORD *)(v244 + 8) & 0x40000) != 0 )
  {
    CmpUnlockKcb(v244);
    v117 = v238;
    if ( v238 )
    {
      CmpUnlockHashEntryByKcb(v244);
      v117 = 0;
      v238 = 0;
    }
    CmpDereferenceKeyControlBlock(v244);
    v13 = *a6;
    v244 = 0LL;
    v263 = v13;
    v248 = 0;
    CmpCleanupPathInfo((__int64)v254, v118, v119, v120);
    memset_0(v254, 0, 0xA8uLL);
    v17 = v117;
    v10 = v252;
    v253 = v255;
    v242 = v117;
    BugCheckParameter3 = v251;
    goto LABEL_12;
  }
  CmpUnlockKcb(v244);
  v18 = v244;
  v17 = v242;
  v253 = v255;
  v238 = v61;
  v12 = v251;
  v261 = v263.m128i_u16[0];
  BugCheckParameter2 = v244;
LABEL_26:
  v34 = v245;
  v244 = v33;
  *(_QWORD *)(v245 + 392) = v18;
  *(_QWORD *)(v34 + 416) = v18;
  v35 = v29 + ((*(_DWORD *)(v18 + 8) >> 21) & 0x3FF) - (unsigned int)(unsigned __int16)v32;
  if ( (unsigned int)v35 > 0x200 )
  {
    v37 = v245;
    KeyBody = -1073741811;
    CmpRecordParseFailure(v245, 1792, -1073741811);
    v85 = v238;
    goto LABEL_145;
  }
  if ( !v239 )
  {
    if ( (*(_DWORD *)v34 & 0x400) != 0 )
      CmpLockRegistryExclusive(v35);
    else
      CmpLockRegistry(v35);
    v18 = BugCheckParameter2;
    v239 = 1;
  }
  v36 = *(_DWORD *)(v252 + 48);
  if ( (v36 & 9) != 0 )
  {
    v37 = v245;
    v157 = -1073740763;
    if ( (v36 & 1) == 0 )
      v157 = -1073741444;
    KeyBody = v157;
    CmpRecordParseFailure(v245, 2048, v157);
    v85 = v238;
    goto LABEL_145;
  }
  if ( (_WORD)v32 == v29 )
  {
    CmpReferenceKeyControlBlockUnsafe(v18);
    v251 = BugCheckParameter2;
    v12 = BugCheckParameter2;
    if ( BugCheckParameter2 == v33 )
    {
      v238 = 0;
    }
    else
    {
      CmpLockHashEntrySharedByKcb(BugCheckParameter2);
      v17 = 1;
    }
    HIBYTE(v243) = v17;
    v37 = v245;
  }
  else
  {
    v37 = v245;
    v38 = CmpPerformCompleteKcbCacheLookup(
            (volatile signed __int64 *)v18,
            (unsigned __int16)v32,
            v29,
            v245 + 216,
            (_DWORD *)v245,
            &v251,
            (char *)&v243 + 1,
            &v257);
    KeyBody = v38;
    if ( v38 < 0 || v38 == 259 )
    {
      CmpRecordParseFailure(v37, 2432, v38);
      v12 = v251;
      v85 = v238;
      goto LABEL_145;
    }
    v39 = v257;
    v12 = v251;
    LOWORD(v32) = v257 + v32;
    v248 = v32;
    *(_QWORD *)(v37 + 400) = v251;
    *(_BYTE *)(v37 + 424) = v39;
    *(_QWORD *)(v37 + 416) = v12;
  }
  if ( (_WORD)v32 == v29 && (*(_DWORD *)v37 & 1) == 0 )
  {
    CmpUnlockHashEntryByKcb(v12);
    HIBYTE(v243) = 0;
  }
  CmpLockKcbShared(v12);
  if ( (__int16)v32 < v29 )
  {
    v46 = (unsigned int)(__int16)v32;
    if ( (unsigned int)v46 >= 8 )
    {
      v47 = 16LL * (unsigned int)(v46 - 8);
      v48 = *(_QWORD *)(v37 + 376) + 104LL;
    }
    else
    {
      v47 = v37 + 216;
      v48 = 16 * v46 + 40;
    }
    DestinationString.Buffer = *(wchar_t **)(v47 + v48);
    DestinationString.Length = v261 - 2 * (((__int64)DestinationString.Buffer - v263.m128i_i64[1]) >> 1);
    DestinationString.MaximumLength = DestinationString.Length;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  p_SubjectSecurityContext = &v259->SubjectSecurityContext;
  if ( CmpVEEnabled )
  {
    if ( (*(_DWORD *)(v37 + 24) & 0x10) != 0 )
    {
      v41 = -1073741199;
    }
    else if ( *(_WORD *)(v12 + 66) )
    {
      v41 = -1073741199;
    }
    else if ( CmpIsKcbInvolvedInVirtualization(v12) )
    {
      if ( (unsigned __int8)CmpIsSystemEntity(v246) )
      {
        v41 = -1073741199;
      }
      else if ( (*(_DWORD *)v37 & 8) != 0 )
      {
        v41 = -1073741199;
      }
      else
      {
        if ( (*(_DWORD *)(v37 + 160) & 1) == 0 )
        {
          CmpAttachToRegistryProcess((PRKAPC_STATE)(v37 + 168));
          *(_DWORD *)(v37 + 160) |= 1u;
        }
        if ( (*(_DWORD *)(v12 + 184) & 0x2000000) != 0 )
          v41 = CmpVEExecuteVirtualStoreParseLogic(v12, &DestinationString, v37, String2);
        else
          v41 = CmpVEExecuteRealStoreParseLogic(
                  v12,
                  (unsigned int)&DestinationString,
                  v37,
                  (_DWORD)String2,
                  (__int64)p_SubjectSecurityContext);
      }
    }
    else
    {
      v41 = -1073741199;
    }
  }
  else
  {
    v41 = -1073741199;
  }
  KeyBody = v41;
  CmpUnlockKcb(v12);
  if ( KeyBody != -1073741199 )
  {
    CmpRecordParseFailure(v37, 2496, KeyBody);
LABEL_286:
    v85 = v238;
LABEL_287:
    v33 = v244;
    goto LABEL_145;
  }
  v42 = *(_QWORD **)(v37 + 64);
  v43 = *(_QWORD *)(v12 + 32);
  if ( v42 && v42 != (_QWORD *)v43 )
  {
    if ( (*(_DWORD *)(v43 + 4112) & 1) != 0 )
    {
      CmpLockHiveListShared();
      v44 = (_QWORD **)(v43 + 4120);
      for ( k = *v44; k != v44; k = (_QWORD *)*k )
      {
        if ( k - 515 == v42 )
        {
          CmpUnlockHiveList();
          goto LABEL_90;
        }
      }
      CmpUnlockHiveList();
    }
    if ( PsIsCurrentThreadInServerSilo() )
    {
      v145 = dword_140E09EE8;
      if ( (unsigned int)dword_140E09EE8 > 5 )
      {
        if ( (qword_140E09EF8 & 0x200000010000LL) != 0 && (qword_140E09F00 & 0x200000010000LL) == qword_140E09F00 )
        {
          v270[0] = 0x1000000LL;
          v281 = v270;
          v282 = 8LL;
          tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)byte_1400548BD, 0x200000010000LL, 3u, (__int64)v280);
          v145 = dword_140E09EE8;
        }
        if ( v145 > 5 )
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E09EE8,
            (unsigned __int8 *)&word_140054886,
            0LL,
            0LL,
            2u,
            (PEVENT_DATA_DESCRIPTOR)&DestinationString);
      }
    }
    v147 = *(unsigned __int8 *)(v37 + 426);
    KeyBody = -1073741790;
    if ( (unsigned __int8)v147 < 4u )
    {
      *(_DWORD *)(v37 + 8 * v147 + 428) = -1073741790;
      *(_DWORD *)(v37 + 8LL * (unsigned __int8)(*(_BYTE *)(v37 + 426))++ + 432) = 2560;
    }
    goto LABEL_286;
  }
LABEL_90:
  v62 = v265;
  if ( v15 || v265 )
  {
    if ( *(_QWORD *)(v12 + 32) == CmpMasterHive )
    {
      BYTE1(v249) = 1;
    }
    else
    {
      if ( !v15 && !v265 || !*(_WORD *)(v12 + 66) )
        goto LABEL_92;
      CmpLogUnsupportedOperation(8LL);
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        KeyBody = -1072103419;
        CmpRecordParseFailure(v37, 2816, -1072103419);
        v85 = v238;
        v33 = v244;
        goto LABEL_145;
      }
    }
    v15 = 0LL;
    v265 = 0LL;
    v62 = 0LL;
  }
LABEL_92:
  if ( !CmpTransSilentIgnore() && (v15 || v62) )
  {
    v63 = *(_QWORD *)(v12 + 32);
    if ( !v63 )
      goto LABEL_214;
    if ( (v15 & 1) != 0 )
    {
      v64 = CmpTransReferenceTransaction(v15);
      if ( v64 >= 0 )
      {
        v65 = *(GUID **)((v15 & 0xFFFFFFFFFFFFFFFEuLL) + 16);
        v253 = v65;
        if ( v65 )
        {
          v255 = v65;
          v64 = 0;
        }
        else
        {
          v64 = -1072103422;
          v253 = v255;
        }
        if ( v15 )
          ObfDereferenceObject((PVOID)(v15 & 0xFFFFFFFFFFFFFFFEuLL));
        v12 = v251;
        v29 = *(_WORD *)&v247[7];
      }
      LODWORD(v62) = v265;
    }
    else
    {
      v64 = CmpTransSearchAddTransFromRm(*(_QWORD *)(v63 + 4152), v15, v62, 0, (__int64)&v255);
      v253 = v255;
    }
    if ( v64 < 0 )
    {
LABEL_214:
      if ( HIBYTE(v243) )
      {
        CmpUnlockHashEntryByKcb(v12);
        HIBYTE(v243) = 0;
      }
      CmpUnlockRegistry(v63);
      v122 = *(_QWORD *)(v12 + 32);
      if ( v122 )
      {
        if ( (v15 & 1) != 0 )
          v123 = CmpTransSearchAddLightWeightTrans(v15, *(_QWORD *)(v12 + 32), 1LL, &v255);
        else
          v123 = CmpTransSearchAddTransFromRm(*(_QWORD *)(v122 + 4152), v15, v62, 1, (__int64)&v255);
      }
      else
      {
        v123 = -1073741811;
      }
      KeyBody = v123;
      CmpLockRegistry(v122);
      v124 = KeyBody;
      v239 = 1;
      if ( KeyBody >= 0 )
      {
        v124 = -1073741267;
        KeyBody = -1073741267;
      }
      CmpRecordParseFailure(v37, 3072, v124);
      v85 = v238;
      v33 = v244;
      goto LABEL_145;
    }
  }
  else
  {
    v253 = 0LL;
    v255 = 0LL;
  }
  started = CmpStartKcbStack((__int64)v274, *(_WORD *)(v12 + 66));
  KeyBody = started;
  if ( started < 0 )
  {
    CmpRecordParseFailure(v37, 3328, started);
    goto LABEL_286;
  }
  v67 = CmpStartKcbStack((__int64)v276, *(_WORD *)(v12 + 66));
  KeyBody = v67;
  if ( v67 < 0 )
  {
    CmpRecordParseFailure(v37, 3584, v67);
    goto LABEL_286;
  }
  v68 = v274;
  v69 = v276;
  CmpPopulateKcbStack(v274, v12);
  LOWORD(v70) = v248;
  v71 = v29;
  while ( 2 )
  {
    if ( (__int16)v70 >= v29 )
    {
      v131 = *(_QWORD *)(v12 + 72);
      v132 = v69;
      *(_QWORD *)v250 = v69;
      if ( v131 )
      {
        CmpPopulateKcbStack(v69, v131);
      }
      else
      {
        v132 = 0LL;
        *(_QWORD *)v250 = 0LL;
      }
      v86 = v252;
      v133 = *(_QWORD *)(v252 + 8);
      if ( v12 != v133 && *(_QWORD *)(v12 + 72) != v133 )
      {
        CmpLockKcbShared(v133);
        LOBYTE(v243) = 1;
      }
      if ( v132 )
      {
        CmpLockKcbStackShared(v132);
        v240 = 1;
      }
      CmpLockKcbStackShared(v68);
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v86, 0LL) )
      {
        v159 = 5888;
      }
      else
      {
        if ( (*(_DWORD *)(v12 + 8) & 0x20000) != 0 )
        {
          KeyBody = -1073741772;
          v159 = 6016;
          v160 = -1073741772;
          goto LABEL_370;
        }
        v134 = v70 - 1;
        if ( (*(_DWORD *)(v12 + 184) & 0x20000) != 0 )
        {
          KeyBody = -1073741772;
          v159 = 6144;
          v160 = -1073741772;
          goto LABEL_370;
        }
        v135 = v253;
        if ( !(unsigned __int8)CmRmIsKcbStackVisible(v68, v253) )
        {
          KeyBody = -1073741772;
          v159 = 6400;
          v160 = -1073741772;
          goto LABEL_370;
        }
        if ( (*(_DWORD *)v245 & 2) == 0 )
        {
          if ( (*(_DWORD *)v245 & 0x20) != 0 )
          {
            CmpUnlockKcbStack((__int64)v68);
            CmpUnlockKcbStack(*(__int64 *)v250);
            CmpLockKcbStackTopExclusiveRestShared(*(__int64 *)v250);
            CmpLockKcbStackTopExclusiveRestShared((__int64)v68);
            if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v250, v135) )
            {
              KeyBody = -1073741772;
              v159 = 8960;
              v160 = -1073741772;
            }
            else
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v12 + 72) + 184LL) & 0x20000) == 0 )
              {
                ComponentNameAtIndex = CmpGetComponentNameAtIndex(v254, (unsigned int)v134);
                if ( (*(_DWORD *)(v12 + 184) & 0x400000) == 0 && (*(_DWORD *)(v12 + 8) & 8) != 0 )
                {
                  CmpDelayDerefKeyControlBlock(*(_QWORD *)(v12 + 104));
                  *(_QWORD *)(v12 + 104) = 0LL;
                  *(_WORD *)(v12 + 8) &= ~8u;
                }
                *(_WORD *)(v12 + 186) |= 0x40u;
                v137 = v246;
                v138 = v245;
                *(_DWORD *)(v12 + 100) = -1;
                *(_DWORD *)(v12 + 96) = *(_DWORD *)(v138 + 56);
                KeyBody = CmpCreateKeyBody(v12, v137, v138, (__int64)v135, 3, (__int64)v68, (ULONG_PTR **)&Object, v247);
                if ( KeyBody < 0 )
                  goto LABEL_257;
                if ( (unsigned __int8)CmpIsKeyStackDeleted(v68, v135) )
                {
                  KeyBody = CmpCreateChild(
                              v250[0],
                              (_DWORD)v68,
                              (_DWORD)v259,
                              ComponentNameAtIndex,
                              v245,
                              64,
                              0,
                              0,
                              (__int64)v135);
                  if ( KeyBody < 0 )
                  {
LABEL_257:
                    v33 = v244;
                    v85 = v238;
                    CmpUnlockKcbStack((__int64)v68);
                    goto LABEL_137;
                  }
                  v161 = v245;
                  v162 = 0;
                  *(_DWORD *)(v245 + 32) = 1;
                  goto LABEL_408;
                }
                goto LABEL_361;
              }
              KeyBody = -1073741772;
              v159 = 9216;
              v160 = -1073741772;
            }
            goto LABEL_370;
          }
          if ( (unsigned __int8)CmpIsKeyStackDeleted(v68, v135) )
          {
            if ( BYTE1(v249) )
            {
              v159 = 9728;
              KeyBody = -1073741811;
              v160 = -1073741811;
              goto LABEL_370;
            }
            v190 = *(_QWORD *)v250;
            if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v250, v135)
              || !(unsigned __int8)CmRmIsKcbStackVisible(v190, v135) )
            {
              KeyBody = -1073741772;
              v159 = 9984;
              v160 = -1073741772;
              goto LABEL_370;
            }
            if ( (*(_DWORD *)(*(_QWORD *)(v12 + 72) + 184LL) & 0x20000) != 0 )
            {
              KeyBody = -1073741772;
              v159 = 10240;
              v160 = -1073741772;
              goto LABEL_370;
            }
            if ( (*(_DWORD *)v245 & 1) == 0 )
            {
              if ( CmpLoadingSystemHivesActive )
              {
                v12 = v251;
                if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                  && *(_QWORD *)(v251 + 32) == CmpMasterHive
                  && (*(_DWORD *)(v251 + 8) & 0x7FE00000) == 0x600000 )
                {
                  v191 = CmpGetComponentNameAtIndex(v245 + 216, (unsigned int)v134);
                  if ( (unsigned __int8)CmpWaitForHiveMount(v191, v192, v193, v193 + 136) )
                  {
                    v159 = 10496;
                    KeyBody = 259;
                    v160 = 259;
                    v163 = v245;
                    *(_DWORD *)v245 |= 0x100u;
                    goto LABEL_372;
                  }
                }
              }
              KeyBody = -1073741772;
              v159 = 10752;
              v160 = -1073741772;
              goto LABEL_370;
            }
            if ( *(_QWORD *)(v12 + 32) == CmpMasterHive && CmpNoMasterCreates )
            {
              v12 = v251;
              if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
              {
                if ( CmpLoadingSystemHivesActive )
                {
                  if ( (*(_DWORD *)(v251 + 8) & 0x7FE00000) == 0x600000 )
                  {
                    v194 = CmpGetComponentNameAtIndex(v245 + 216, (unsigned int)v134);
                    if ( (unsigned __int8)CmpWaitForHiveMount(v194, v195, v196, v196 + 136) )
                    {
                      v159 = 11008;
                      KeyBody = 259;
                      v160 = 259;
                      v163 = v245;
                      *(_DWORD *)v245 |= 0x100u;
                      goto LABEL_372;
                    }
                  }
                }
                v159 = 11264;
                KeyBody = -1073741811;
                v160 = -1073741811;
                goto LABEL_370;
              }
              v135 = v255;
            }
            v197 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v245 + 216, (unsigned int)v134);
            LOBYTE(v198) = 1;
            v200 = CmpDoWritethroughReparse(v12, (int)v68, v190, v198, v197, v199, (__int64)String2);
            KeyBody = v200;
            if ( v200 != -1073741199 )
            {
              v160 = v200;
              v159 = 11392;
              goto LABEL_370;
            }
            v201 = CmpCreateKeyBody(v12, v246, v245, (__int64)v135, 0, (__int64)v68, (ULONG_PTR **)&Object, v247);
            KeyBody = v201;
            if ( v201 < 0 )
            {
              v160 = v201;
              v159 = 11456;
              goto LABEL_370;
            }
            v202 = v245;
            if ( (*(_DWORD *)(v245 + 160) & 1) == 0 )
            {
              CmpAttachToRegistryProcess((PRKAPC_STATE)(v245 + 168));
              v202 = v245;
              *(_DWORD *)(v245 + 160) |= 1u;
            }
            if ( *(_DWORD *)(*(_QWORD *)(v12 + 72) + 40LL) == -1 )
            {
              v203 = *(_DWORD *)(v202 + 24) >> 2;
              LOBYTE(v203) = (*(_DWORD *)(v202 + 24) & 4) != 0;
              if ( !CmpCheckCreateAccessOnKcbStack(
                      v203,
                      v190,
                      v202,
                      v259,
                      v246,
                      16 * (*(_DWORD *)(v202 + 24) & 2),
                      v203,
                      (__int64)v135,
                      Object,
                      1,
                      &KeyBody) )
              {
                v12 = v251;
                if ( KeGetCurrentThread()->PreviousMode == 1 )
                {
                  CurrentThreadProcess = PsGetCurrentThreadProcess();
                  ProcessServerSilo = PsGetProcessServerSilo((__int64)CurrentThreadProcess);
                  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
                  if ( (unsigned int)PsGetSessionIdEx((__int64)CurrentThreadProcess) != ServerSiloServiceSessionId )
                  {
                    if ( CmpCheckKeyOwnerForPca(v190, (__int64)v255) )
                    {
                      v207 = *(_QWORD *)(v12 + 72);
                      v247[3] = 1;
                      v262 = CmpConstructName(v207);
                    }
                  }
                }
                v160 = KeyBody;
                v159 = 11520;
                goto LABEL_370;
              }
              CmpUnlockKcbStack((__int64)v68);
              CmpUnlockKcbStack(v190);
              if ( (_BYTE)v243 )
              {
                CmpUnlockKcb(*(_QWORD *)(v86 + 8));
                LOBYTE(v243) = 0;
              }
              LOBYTE(v208) = 1;
              KeyBody = CmpPromoteKey(v190, 0LL, v208);
              v209 = KeyBody;
              if ( KeyBody < 0 )
              {
                if ( KeyBody == -1073741444 )
                {
                  v209 = -1073741772;
                  KeyBody = -1073741772;
                }
                v37 = v245;
                CmpRecordParseFailure(v245, 11776, v209);
                v33 = v244;
                v85 = v238;
                goto LABEL_141;
              }
            }
            else
            {
              CmpUnlockKcbStack((__int64)v68);
              CmpUnlockKcbStack(v190);
              CmpLockKcbStackTopExclusiveRestShared(v190);
            }
            CmpLockKcbStackTopExclusiveRestShared((__int64)v68);
            if ( !(unsigned __int8)CmRmIsKcbStackVisible(v68, v135) )
            {
              v210 = v245;
              v211 = 12032;
              KeyBody = -1073741772;
              v212 = -1073741772;
LABEL_508:
              CmpRecordParseFailure(v210, v211, v212);
              v33 = v244;
              v85 = v238;
              v240 = 1;
              goto LABEL_133;
            }
            if ( (*(_DWORD *)(v12 + 8) & 0x20000) != 0 )
            {
              v210 = v245;
              v211 = 12160;
              KeyBody = -1073741772;
              v212 = -1073741772;
              goto LABEL_508;
            }
            if ( (unsigned __int8)CmpIsKeyStackDeleted(v68, v135) )
            {
              if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v250, v135)
                || !(unsigned __int8)CmRmIsKcbStackVisible(*(_QWORD *)v250, v135) )
              {
                v210 = v245;
                v211 = 12288;
                KeyBody = -1073741772;
                v212 = -1073741772;
                goto LABEL_508;
              }
              v213 = *(_QWORD *)(v12 + 72);
              if ( (*(_DWORD *)(v213 + 184) & 0x20000) != 0 )
              {
                v210 = v245;
                v211 = 12544;
                KeyBody = -1073741772;
                v212 = -1073741772;
                goto LABEL_508;
              }
              LOBYTE(SourceString) = v246;
              Logic = CmpVEExecuteCreateLogic(
                        v213,
                        v12,
                        v197,
                        v259,
                        SourceString,
                        16 * (*(_DWORD *)(v245 + 24) & 2u),
                        v135,
                        v245,
                        String2);
              KeyBody = Logic;
              if ( Logic == -1073741739 )
              {
                v212 = -1073741267;
                KeyBody = -1073741267;
                v211 = 12672;
                v210 = v245;
                *(_DWORD *)v245 |= 0x400u;
                goto LABEL_508;
              }
              if ( Logic != -1073741199 )
              {
                v210 = v245;
                v211 = 12736;
LABEL_507:
                v212 = Logic;
                goto LABEL_508;
              }
              v215 = *(_DWORD *)(v245 + 24) >> 2;
              LOBYTE(v215) = (*(_DWORD *)(v245 + 24) & 4) != 0;
              if ( !CmpCheckCreateAccessOnKcbStack(
                      v215,
                      *(__int64 *)v250,
                      v245,
                      v259,
                      v246,
                      16 * (*(_DWORD *)(v245 + 24) & 2),
                      v215,
                      (__int64)v135,
                      Object,
                      0,
                      &KeyBody) )
              {
                v12 = v251;
                if ( KeGetCurrentThread()->PreviousMode == 1 )
                {
                  v217 = PsGetCurrentThreadProcess();
                  v218 = PsGetProcessServerSilo((__int64)v217);
                  v219 = PsGetServerSiloServiceSessionId(v218);
                  if ( (unsigned int)PsGetSessionIdEx((__int64)v217) != v219 )
                  {
                    if ( CmpCheckKeyOwnerForPca(*(__int64 *)v250, (__int64)v255) )
                    {
                      v220 = *(_QWORD *)(v12 + 72);
                      v247[3] = 1;
                      v262 = CmpConstructName(v220);
                    }
                  }
                }
                v212 = KeyBody;
                v211 = 12800;
                v210 = v245;
                goto LABEL_508;
              }
              LOBYTE(v216) = 1;
              Logic = CmpEnlistKeyBody((_DWORD)Object, v12, (_DWORD)v135, v216, (__int64)v68);
              v210 = v245;
              KeyBody = Logic;
              if ( Logic < 0 )
              {
                v211 = 12928;
                goto LABEL_507;
              }
              Logic = CmpCreateChild(
                        v250[0],
                        (_DWORD)v68,
                        (_DWORD)v259,
                        (_DWORD)v197,
                        v245,
                        8 * (*(_WORD *)(v245 + 24) & 2u),
                        0,
                        0,
                        (__int64)v135);
              KeyBody = Logic;
              if ( Logic < 0 )
              {
                v210 = v245;
                v211 = 12992;
                goto LABEL_507;
              }
              v161 = v245;
              *(_DWORD *)(v245 + 32) = 1;
LABEL_510:
              v188 = 1;
              v162 = 0;
              v240 = 1;
LABEL_409:
              if ( *(_DWORD *)(v161 + 32) == 1 )
              {
                v189 = v245;
                *((_WORD *)Object + 2) = *(_WORD *)(*((_QWORD *)Object + 1) + 66LL);
              }
              else
              {
                TransactionIda = v135;
                v189 = v245;
                if ( !(unsigned __int8)CmpCheckOpenAccessOnKeyBody(
                                         (char *)Object,
                                         (__int64)v68,
                                         (_DWORD *)v245,
                                         v259,
                                         v246,
                                         (*(_DWORD *)(v161 + 24) & 4) != 0,
                                         TransactionIda,
                                         &v247[3],
                                         &KeyBody) )
                {
                  if ( v247[3] )
                  {
                    if ( (*(_DWORD *)(v189 + 160) & 1) == 0 )
                    {
                      CmpAttachToRegistryProcess((PRKAPC_STATE)(v189 + 168));
                      *(_DWORD *)(v189 + 160) |= 1u;
                    }
                    v262 = CmpConstructName(v12);
                  }
                  CmpRecordParseFailure(v189, 15584, KeyBody);
LABEL_134:
                  v87 = v247[1];
                  goto LABEL_135;
                }
                v162 = v247[2];
              }
              v233 = Object;
              Object = 0LL;
              *v273 = v233;
              if ( !*(_DWORD *)(v189 + 32) )
                *(_DWORD *)(v189 + 32) = 2;
              if ( v247[0] )
              {
                KeyBody = 1073741846;
              }
              else
              {
                KeyBody = 0;
                v240 = v188;
                v247[2] = v162;
              }
              goto LABEL_134;
            }
            IsKeyStackSymlink = CmpIsKeyStackSymlink((__int64)v68);
            v210 = v245;
            if ( IsKeyStackSymlink && !_bittest((const signed __int32 *)v245, 9u) )
            {
              if ( (*(_DWORD *)(v245 + 24) & 2) == 0 )
              {
                CmpUnlockKcbStack(*(__int64 *)v250);
                if ( (_BYTE)v243 )
                {
                  CmpUnlockKcb(*(_QWORD *)(v86 + 8));
                  LOBYTE(v243) = 0;
                }
                if ( HIBYTE(v243) )
                {
                  CmpUnlockHashEntryByKcb(v12);
                  HIBYTE(v243) = 0;
                }
                v37 = v245;
                SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                       (_DWORD)v68,
                                       (int)v245 + 216,
                                       0,
                                       0,
                                       (__int64)v135,
                                       v245,
                                       (__int64)&v272,
                                       (__int64)String2,
                                       v245 + 88,
                                       (__int64)v266);
                KeyBody = SymbolicLinkTarget;
                if ( SymbolicLinkTarget >= 0 )
                {
                  *(_DWORD *)v37 &= ~8u;
                  if ( !*(_QWORD *)(v37 + 64) )
                  {
                    v223 = *(_QWORD *)(v266[0] + 32LL);
                    if ( (*(_DWORD *)(v223 + 4112) & 1) != 0 )
                      *(_QWORD *)(v37 + 64) = v223;
                  }
                  KeyBody = 260;
                  CmpRecordParseFailure(v37, 13440, 260);
                  v33 = v244;
                  v85 = v238;
                }
                else
                {
                  CmpRecordParseFailure(v37, 13312, SymbolicLinkTarget);
                  v33 = v244;
                  v85 = v238;
                }
                goto LABEL_141;
              }
              KeyBody = -1073741771;
              v211 = 13056;
              v212 = -1073741771;
              goto LABEL_508;
            }
            if ( (*(_DWORD *)(v12 + 184) & 0x20000) != 0 )
            {
              KeyBody = -1073741772;
              v211 = 13568;
              v212 = -1073741772;
              goto LABEL_508;
            }
            if ( (*(_DWORD *)(v245 + 24) & 2) != 0 )
            {
              KeyBody = -1073741771;
              v211 = 13824;
              v212 = -1073741771;
              goto LABEL_508;
            }
            Logic = CmpDoWritethroughReparse(v12, (int)v68, v250[0], 0, 0LL, v245, (__int64)String2);
            KeyBody = Logic;
            if ( Logic != -1073741199 )
            {
              v210 = v245;
              v211 = 13888;
              goto LABEL_507;
            }
            v224 = v245;
            Logic = CmpVEExecuteOpenLogic(v12, v246, (__int64)&v259->SubjectSecurityContext);
            KeyBody = Logic;
            if ( Logic == -1073741199 )
            {
              LOBYTE(v225) = 1;
              Logic = CmpEnlistKeyBody((_DWORD)Object, v12, (_DWORD)v135, v225, (__int64)v68);
              KeyBody = Logic;
              if ( Logic >= 0 )
              {
                v161 = v224;
                goto LABEL_510;
              }
              v211 = 14016;
            }
            else
            {
              v211 = 13952;
            }
            v210 = v224;
            goto LABEL_507;
          }
          v226 = CmpIsKeyStackSymlink((__int64)v68);
          v227 = v245;
          if ( v226 && !_bittest((const signed __int32 *)v245, 9u) )
          {
            if ( (*(_DWORD *)(v245 + 24) & 2) == 0 )
            {
              v88 = *(_QWORD *)v250;
              if ( v240 )
              {
                CmpUnlockKcbStack(*(__int64 *)v250);
                v240 = 0;
              }
              if ( (_BYTE)v243 )
              {
                CmpUnlockKcb(*(_QWORD *)(v86 + 8));
                LOBYTE(v243) = 0;
              }
              if ( HIBYTE(v243) )
              {
                CmpUnlockHashEntryByKcb(v12);
                HIBYTE(v243) = 0;
              }
              v228 = CmpGetSymbolicLinkTarget(
                       (_DWORD)v68,
                       (int)v227 + 216,
                       0,
                       0,
                       (__int64)v135,
                       v227,
                       (__int64)&v272,
                       (__int64)String2,
                       v227 + 88,
                       (__int64)v266);
              KeyBody = v228;
              if ( v228 >= 0 )
              {
                *(_DWORD *)v227 &= ~8u;
                if ( !*(_QWORD *)(v227 + 64) )
                {
                  v229 = *(_QWORD *)(v266[0] + 32LL);
                  if ( (*(_DWORD *)(v229 + 4112) & 1) != 0 )
                    *(_QWORD *)(v227 + 64) = v229;
                }
                KeyBody = 260;
                CmpRecordParseFailure(v227, 14592, 260);
                v33 = v244;
                v85 = v238;
              }
              else
              {
                CmpRecordParseFailure(v227, 14336, v228);
                v33 = v244;
                v85 = v238;
              }
              goto LABEL_138;
            }
            KeyBody = -1073741771;
            v159 = 14080;
            v160 = -1073741771;
            v163 = v245;
            goto LABEL_372;
          }
          if ( BYTE1(v249) )
          {
            v159 = 14848;
            KeyBody = -1073741811;
            v160 = -1073741811;
            v163 = v245;
            goto LABEL_372;
          }
          if ( (*(_DWORD *)(v12 + 184) & 0x20000) != 0 )
          {
            KeyBody = -1073741772;
            v159 = 15104;
            v160 = -1073741772;
            v163 = v245;
            goto LABEL_372;
          }
          if ( (*(_DWORD *)(v245 + 24) & 2) != 0 )
          {
            KeyBody = -1073741771;
            v159 = 15360;
            v160 = -1073741771;
            v163 = v245;
            goto LABEL_372;
          }
          v230 = CmpDoWritethroughReparse(v12, (int)v68, v250[0], 0, 0LL, v245, (__int64)String2);
          KeyBody = v230;
          if ( v230 == -1073741199 )
          {
            v231 = v245;
            v232 = CmpVEExecuteOpenLogic(v12, v246, (__int64)&v259->SubjectSecurityContext);
            KeyBody = v232;
            if ( v232 == -1073741199 )
            {
              KeyBody = CmpCreateKeyBody(v12, v246, v231, (__int64)v135, 2, (__int64)v68, (ULONG_PTR **)&Object, v247);
              v160 = KeyBody;
              if ( KeyBody >= 0 )
              {
LABEL_361:
                v162 = 0;
LABEL_407:
                v161 = v245;
LABEL_408:
                v188 = v240;
                goto LABEL_409;
              }
              if ( KeyBody == -1073741444 )
              {
                v160 = -1073741772;
                KeyBody = -1073741772;
              }
              v159 = 15552;
              v163 = v231;
            }
            else
            {
              v160 = v232;
              v159 = 15488;
              v163 = v231;
            }
LABEL_372:
            CmpRecordParseFailure(v163, v159, v160);
            goto LABEL_257;
          }
          v160 = v230;
          v159 = 15424;
LABEL_370:
          v163 = v245;
          goto LABEL_372;
        }
        CmpUnlockKcbStack((__int64)v68);
        CmpUnlockKcbStack(*(__int64 *)v250);
        if ( (_BYTE)v243 )
          CmpUnlockKcb(*(_QWORD *)(v86 + 8));
        v247[2] = CmpTryToLockHashEntryExclusive(*(_QWORD *)(v245 + 48), 0LL);
        if ( (_BYTE)v243 )
          CmpLockKcbShared(*(_QWORD *)(v86 + 8));
        CmpLockKcbStackTopExclusiveRestShared(*(__int64 *)v250);
        CmpLockKcbStackTopExclusiveRestShared((__int64)v68);
        v165 = CmpGetComponentNameAtIndex(v254, (unsigned int)v134);
        ComponentHashAtIndex = CmpGetComponentHashAtIndex(v166, v164);
        if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v252, 0LL) )
        {
          if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v250, v135) )
          {
            v82 = 6912;
            goto LABEL_130;
          }
          if ( !(unsigned __int8)CmpIsKeyStackDeleted(v68, v135) )
          {
            KeyBody = -1073741790;
            v82 = 7168;
            v83 = -1073741790;
            goto LABEL_131;
          }
          v168 = *(_QWORD *)(v12 + 72);
          if ( *(_QWORD *)(v168 + 32) != CmpMasterHive )
          {
            KeyBody = -1073741790;
            v82 = 7424;
            v83 = -1073741790;
            goto LABEL_131;
          }
          if ( (*(_DWORD *)(v168 + 184) & 0x20000) != 0 )
          {
            v82 = 7680;
            goto LABEL_130;
          }
          v169 = v245;
          if ( (*(_DWORD *)(v245 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess((PRKAPC_STATE)(v245 + 168));
            v169 = v245;
            *(_DWORD *)(v245 + 160) |= 1u;
          }
          v170 = *(unsigned int *)(v169 + 40);
          v171 = (unsigned int *)(v169 + 40);
          v172 = *(_QWORD *)(v169 + 48);
          if ( (_DWORD)v170 == -1 )
          {
            HiveRootCell = CmpCreateHiveRootCell(v172, (__int64)v171);
            KeyBody = HiveRootCell;
            if ( HiveRootCell < 0 )
            {
              v83 = HiveRootCell;
              v82 = 7808;
              goto LABEL_131;
            }
          }
          else
          {
            updated = CmpUpdateHiveRootCellFlags(v172, v170);
            KeyBody = updated;
            if ( updated < 0 )
            {
              v83 = updated;
              v82 = 7936;
              goto LABEL_131;
            }
          }
          *(_WORD *)(v12 + 186) |= 2u;
          TransactionId = ComponentHashAtIndex;
          v175 = v245;
          KeyBody = CmpCreateKeyControlBlock(
                      *(_QWORD *)(v245 + 48),
                      0xFFFFFFFFLL,
                      v12,
                      *(_QWORD *)(v245 + 80),
                      1,
                      v165,
                      TransactionId,
                      0,
                      v270);
          *(_WORD *)(v12 + 186) &= ~2u;
          v83 = KeyBody;
          if ( KeyBody < 0 )
          {
            v82 = 0x2000;
            v84 = v175;
            goto LABEL_132;
          }
          v176 = v12;
          v12 = v270[0];
          BugCheckParameter3 = v270[0];
          CmpDereferenceKeyControlBlockUnsafe(v176);
          CmpUnlockHashEntryByKcb(v176);
          HIBYTE(v243) = 0;
          v177 = CmpStartKcbStackForTopLayerKcb((__int64)&ApcState, v12);
          KeyBody = v177;
          if ( v177 < 0 )
          {
            v83 = v177;
            v82 = 8448;
            goto LABEL_131;
          }
          *(_WORD *)(v176 + 186) |= 2u;
          CmpLockKcbStackTopExclusiveRestShared((__int64)&ApcState);
          v178 = v253;
          v179 = v245;
          *(_WORD *)(v176 + 186) &= ~2u;
          v247[1] = 1;
          v180 = CmpCreateKeyBody(v12, v246, v179, (__int64)v178, 3, (__int64)&ApcState, (ULONG_PTR **)&Object, v247);
          KeyBody = v180;
          if ( v180 < 0 )
          {
            CmpRecordParseFailure(v245, 8576, v180);
            v33 = v244;
            v85 = v238;
            v86 = v252;
LABEL_266:
            CmpUnlockKcbStack((__int64)&ApcState);
            goto LABEL_133;
          }
          HvLockHiveFlusherShared(*(_QWORD *)(v176 + 32));
          HvLockHiveFlusherExclusive(*(_QWORD *)(v12 + 32));
          v181 = *(_QWORD *)(v12 + 32);
          v182 = *(_DWORD *)(v181 + 104);
          v183 = HvpMarkCellDirty(v181, *v171);
          KeyBody = v183;
          if ( v183 >= 0 )
          {
            KeyBody = CmpCreateChild(v250[0], (_DWORD)v68, (_DWORD)v259, v165, v245, 10, 0, 1, (__int64)v253);
            if ( KeyBody >= 0 )
            {
              v184 = BugCheckParameter3;
              v185 = v245;
              v186 = BugCheckParameter3;
              *(_DWORD *)(BugCheckParameter3 + 40) = *(_DWORD *)(v245 + 40);
              *(_DWORD *)(CmpGetKeyNodeForKcb(v186, &v268, 1LL) + 16) = *(_DWORD *)(v176 + 40);
              ++*(_QWORD *)(v184 + 304);
              CmpRebuildKcbCacheFromNode(v184);
              v187 = *(_QWORD *)(v184 + 32);
              if ( (*(_BYTE *)(v187 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v187, &v268);
              else
                HvpReleaseCellPaged(v187, &v268);
              v142 = v182 == 0;
              v12 = BugCheckParameter3;
              if ( v142 )
                HvResetDirtyData(*(_QWORD *)(BugCheckParameter3 + 32));
              HvUnlockHiveFlusherExclusive(*(_QWORD *)(v12 + 32));
              HvUnlockHiveFlusherShared(*(_QWORD *)(v176 + 32));
              *(_WORD *)(v176 + 8) |= 8u;
              CmpReferenceKeyControlBlockUnsafe(v12);
              *(_QWORD *)(v176 + 104) = v12;
              CmpUnlockHashEntry(*(PVOID *)(v185 + 48), 0);
              v135 = v253;
              v162 = 0;
              *(_DWORD *)(v185 + 32) = 1;
              v86 = v252;
              v247[2] = 0;
              goto LABEL_407;
            }
          }
          else
          {
            CmpRecordParseFailure(v245, 8704, v183);
          }
          v12 = BugCheckParameter3;
          HvUnlockHiveFlusherExclusive(*(_QWORD *)(BugCheckParameter3 + 32));
          HvUnlockHiveFlusherShared(*(_QWORD *)(v176 + 32));
          v86 = v252;
          v87 = 1;
          v262 = 0LL;
LABEL_135:
          v33 = v244;
          v85 = v238;
          if ( !v87 )
            goto LABEL_133;
          goto LABEL_266;
        }
        v86 = v252;
        v159 = 6656;
      }
      v160 = -1073740763;
      if ( (*(_BYTE *)(v86 + 48) & 1) == 0 )
        v160 = -1073741444;
      KeyBody = v160;
      goto LABEL_370;
    }
    CmpLockKcbStackShared(v68);
    if ( (*(_DWORD *)(v12 + 8) & 0x20000) != 0 )
    {
      v82 = 3968;
LABEL_130:
      KeyBody = -1073741772;
      v83 = -1073741772;
LABEL_131:
      v84 = v245;
LABEL_132:
      CmpRecordParseFailure(v84, v82, v83);
      v33 = v244;
      v85 = v238;
      v86 = v252;
LABEL_133:
      CmpUnlockKcbStack((__int64)v68);
LABEL_137:
      v88 = *(_QWORD *)v250;
LABEL_138:
      if ( v240 )
        CmpUnlockKcbStack(v88);
      v37 = v245;
LABEL_141:
      if ( (_BYTE)v243 )
        CmpUnlockKcb(*(_QWORD *)(v86 + 8));
      if ( v247[2] )
        CmpUnlockHashEntry(*(PVOID *)(v37 + 48), 0);
      break;
    }
    v72 = *((_WORD *)v68 + 1);
    BugCheckParameter2 = 0LL;
    while ( 1 )
    {
      if ( v72 < 0
        || (v72 >= 2 ? (v73 = *(_QWORD *)(v68[3] + 8LL * v72 - 16)) : (v73 = v68[v72 + 1]),
            *(_WORD *)(v73 + 66) && *(_BYTE *)(v73 + 65) == 1) )
      {
LABEL_128:
        if ( !CmpLoadingSystemHivesActive
          || (v12 = v251, (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread())
          || *(_QWORD *)(v251 + 32) != CmpMasterHive
          || (*(_DWORD *)(v251 + 8) & 0x7FE00000) != 0x600000
          || (__int16)v70 <= 0
          || (v152 = CmpGetComponentNameAtIndex(v254, (unsigned int)((__int16)v70 - 1)),
              !(unsigned __int8)CmpWaitForHiveMount(v152, v153, v154, v245 + 136)) )
        {
          v82 = 4096;
          goto LABEL_130;
        }
        v82 = 3840;
        KeyBody = 259;
        v83 = 259;
        v84 = v245;
        *(_DWORD *)v245 |= 0x100u;
        goto LABEL_132;
      }
      if ( *(_DWORD *)(v73 + 40) != -1 )
        break;
      --v72;
    }
    if ( v253 )
    {
      v114 = v68[1];
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v114 + 208, &BugCheckParameter2, 32LL);
        if ( !NextElement )
          break;
        if ( *(_DWORD *)(NextElement + 68) == 2 )
        {
          if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56)) )
            goto LABEL_128;
          break;
        }
      }
    }
    if ( CmpIsKeyStackSymlink((__int64)v68) )
    {
      v37 = v245;
      v110 = CmpGetSymbolicLinkTarget(
               (_DWORD)v68,
               (int)v245 + 216,
               (unsigned __int16)v70,
               (unsigned __int16)v29,
               v74,
               v245,
               (__int64)&v272,
               (__int64)String2,
               v245 + 88,
               (__int64)v266);
      KeyBody = v110;
      if ( v110 < 0 )
      {
        CmpRecordParseFailure(v37, 4608, v110);
        goto LABEL_286;
      }
      *(_DWORD *)v37 &= ~8u;
      if ( !*(_QWORD *)(v37 + 64) )
      {
        v111 = *(_QWORD *)(v266[0] + 32LL);
        if ( (*(_DWORD *)(v111 + 4112) & 1) != 0 )
          *(_QWORD *)(v37 + 64) = v111;
      }
      v112 = *(unsigned __int8 *)(v37 + 426);
      v33 = v244;
      v85 = v238;
      KeyBody = 260;
      if ( (unsigned __int8)v112 < 4u )
      {
        *(_DWORD *)(v37 + 8 * v112 + 428) = 260;
        *(_DWORD *)(v37 + 8LL * (unsigned __int8)(*(_BYTE *)(v37 + 426))++ + 432) = 4864;
      }
    }
    else
    {
      CmpUnlockKcbStack((__int64)v68);
      v75 = (unsigned int)(__int16)v70;
      if ( (unsigned int)v75 >= 8 )
      {
        v77 = (char *)(*((_QWORD *)v254 + 20) + 16 * ((unsigned int)(v75 - 8) + 6LL));
        v76 = *(_DWORD *)(*((_QWORD *)v254 + 20) + 4LL * (unsigned int)(v75 - 8));
      }
      else
      {
        v76 = *((_DWORD *)v254 + v75);
        v77 = (char *)v254 + 16 * (unsigned int)v75 + 32;
      }
      v78 = (*(_DWORD *)v245 & 1) != 0 && (_DWORD)v75 == v71 - 1;
      LODWORD(v237) = v76 + 37 * *(_DWORD *)(v12 + 16);
      KeyBody = CmpWalkOneLevel(
                  v12,
                  (int)v68,
                  (int)v269,
                  (int)v69,
                  (__int64)&v249,
                  (__int64)v77,
                  v76,
                  v237,
                  (__int64)v253,
                  v78,
                  v245);
      if ( KeyBody == -1073741772 && CmpLoadingSystemHivesActive )
      {
        v12 = v251;
        if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() && *(_QWORD *)(v251 + 32) == CmpMasterHive )
        {
          if ( (*(_DWORD *)(v251 + 8) & 0x7FE00000) == 0x600000 && (__int16)v70 > 0 )
          {
            v103 = CmpGetComponentNameAtIndex(v254, (unsigned int)((__int16)v70 - 1));
            v104 = (_DWORD *)v245;
            if ( (unsigned __int8)CmpWaitForHiveMount(v103, v105, v106, v245 + 136) )
            {
              *v104 |= 0x100u;
              KeyBody = 259;
              v37 = (__int64)v104;
              CmpRecordParseFailure((__int64)v104, 5120, 259);
              goto LABEL_286;
            }
          }
          else
          {
            v104 = (_DWORD *)v245;
          }
          if ( (*(_DWORD *)(v12 + 8) & 0x7FE00000) == 0x400000 )
          {
            v107 = CmpGetComponentNameAtIndex(v104 + 54, (unsigned int)(__int16)v70);
            if ( (unsigned __int8)CmpWaitForHiveMount(v107, v108, v109, v104 + 34) )
            {
              v37 = v245;
              KeyBody = 259;
              v158 = v245;
              *(_DWORD *)v245 |= 0x100u;
              CmpRecordParseFailure(v158, 5376, 259);
              goto LABEL_286;
            }
          }
        }
        v29 = *(_WORD *)&v247[7];
        v253 = v255;
      }
      if ( KeyBody >= 0 )
      {
        v79 = v245;
        v80 = *(_QWORD *)v269;
        ++*(_BYTE *)(v245 + 425);
        *(_QWORD *)(v79 + 408) = v80;
        *(_QWORD *)(v79 + 416) = v80;
        CmpDereferenceKeyControlBlockUnsafe(v12);
        v12 = v80;
        v251 = v80;
        HIWORD(v70) = HIWORD(v248);
        HIBYTE(v243) = v249;
        LOWORD(v70) = v248 + 1;
        v81 = v68;
        *(_QWORD *)v269 = 0LL;
        v68 = (__int64 *)v69;
        LOBYTE(v249) = 0;
        v69 = (int *)v81;
        v248 = v70;
        continue;
      }
      v37 = v245;
      CmpRecordParseFailure(v245, 5504, KeyBody);
      v85 = v238;
      v33 = v244;
    }
    break;
  }
LABEL_145:
  v89 = (void *)v262;
  if ( HIBYTE(v243) )
    CmpUnlockHashEntryByKcb(v12);
  if ( v85 )
    CmpUnlockHashEntryByKcb(v33);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v277[1] )
    CmSiFreeMemory(v277[1]);
  if ( ApcState.ApcListHead[1].Blink )
    CmSiFreeMemory((PPRIVILEGE_SET)ApcState.ApcListHead[1].Blink);
  v90 = *(_QWORD *)v269;
  if ( *(_QWORD *)v269 )
  {
    CmpDereferenceKeyControlBlockUnsafe(v12);
    v91 = v90;
  }
  else
  {
    if ( !v12 )
      goto LABEL_159;
    v91 = v12;
  }
  CmpDereferenceKeyControlBlock(v91);
LABEL_159:
  if ( v33 )
    CmpDereferenceKeyControlBlock(v33);
  v92 = *(_DWORD *)(v37 + 100);
  v93 = v89;
  if ( v92 && (v92 & 2) != 0 )
  {
    v94 = *(_QWORD *)(v37 + 112);
    memset(&ApcState, 0, sizeof(ApcState));
    v95 = *(_QWORD **)(v94 + 1648);
    v96 = *(_DWORD *)(v94 + 1656);
    v273 = v95;
    v261 = v96;
    CmpAttachToRegistryProcess(&ApcState);
LABEL_164:
    if ( v9 >= v96 )
    {
      CmpDetachFromRegistryProcess(&ApcState);
    }
    else
    {
      CmpLockHashEntryByIndexExclusive(v94, v9);
      v97 = &v95[3 * v9];
LABEL_166:
      v98 = v97 + 2;
      while ( 1 )
      {
        v99 = *v98;
        if ( !*v98 )
        {
          CmpUnlockHashEntryByIndex(v94, v9);
          v96 = v261;
          ++v9;
          v95 = v273;
          goto LABEL_164;
        }
        v100 = (_QWORD *)(v99 - 16);
        CmpLockKcbExclusive(v99 - 16);
        if ( !*v100 )
        {
          CmpRemoveFromDelayedClose(v100);
          CmpCleanUpKcbCacheWithLock((ULONG_PTR)v100);
          CmpUnlockKcb((ULONG_PTR)v100);
          goto LABEL_166;
        }
        v101 = v100[3];
        v102 = CmpSyncKcbCacheForHive((ULONG_PTR)v100, v94);
        if ( v102 == 1 || v102 == 3 )
          break;
        if ( v102 == 2 )
        {
          CmpUnlockKcb((ULONG_PTR)v100);
          *v98 = v101;
        }
        else
        {
          v98 = v100 + 3;
          CmpUnlockKcb((ULONG_PTR)v100);
        }
      }
      CmpUnlockKcb((ULONG_PTR)v100);
      CmpUnlockHashEntryByIndex(v94, v9);
    }
    v37 = v245;
    v93 = v89;
    *(_DWORD *)(v245 + 100) &= ~2u;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v272);
  if ( v239 )
    CmpUnlockRegistry(v125);
  if ( v93 )
  {
    if ( v247[3] && (unsigned __int8)CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(v37, v93);
    CmpFreeTransientPoolWithTag(v93, 0x624E4D43u);
  }
  if ( (*(_DWORD *)(v37 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(v37 + 168);
  v128 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  CmpCleanupPathInfo(v37 + 216, (__int64)v128, v126, v127);
  return (unsigned int)KeyBody;
}
