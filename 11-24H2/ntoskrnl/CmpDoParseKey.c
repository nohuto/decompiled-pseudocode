/*
 * XREFs of CmpDoParseKey @ 0x140872AE0
 * Callers:
 *     CmpParseKey @ 0x1408A77F0 (CmpParseKey.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     CmpTransSilentIgnore @ 0x1404329E0 (CmpTransSilentIgnore.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpSyncKcbCacheForHive @ 0x1407DC3B0 (CmpSyncKcbCacheForHive.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1407E146C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     CmpLockHiveListShared @ 0x1408405B8 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x140840614 (CmpUnlockHiveList.c)
 *     CmpUnlockHashEntryByKcb @ 0x140840720 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockHashEntry @ 0x140840970 (CmpUnlockHashEntry.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpRecordParseFailure @ 0x140841F00 (CmpRecordParseFailure.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x14086C810 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeyOwnerForPca @ 0x14086C930 (CmpCheckKeyOwnerForPca.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpStartKcbStack @ 0x140872120 (CmpStartKcbStack.c)
 *     CmpComputeComponentHashes @ 0x140872190 (CmpComputeComponentHashes.c)
 *     CmpExpandPathInfo @ 0x14087246C (CmpExpandPathInfo.c)
 *     CmpIsKeyDeleted @ 0x140872540 (CmpIsKeyDeleted.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     CmpIsKeyStackSymlink @ 0x140872830 (CmpIsKeyStackSymlink.c)
 *     CmpIsKcbInvolvedInVirtualization @ 0x140872880 (CmpIsKcbInvolvedInVirtualization.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     CmpCleanupPathInfo @ 0x140872A60 (CmpCleanupPathInfo.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140874810 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpRemoveFromDelayedClose @ 0x140874C40 (CmpRemoveFromDelayedClose.c)
 *     CmpUnlockHashEntryByIndex @ 0x140874D50 (CmpUnlockHashEntryByIndex.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     CmpVEExecuteOpenLogic @ 0x1408788D0 (CmpVEExecuteOpenLogic.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879FC0 (CmpGetKeyNodeForKcb.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmpTransReferenceTransaction @ 0x14087D3B8 (CmpTransReferenceTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14087D418 (CmpTransSearchAddLightWeightTrans.c)
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087F300 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDoWritethroughReparse @ 0x14087F420 (CmpDoWritethroughReparse.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087FED4 (CmpRebuildKcbCacheFromNode.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140882420 (CmpDelayDerefKeyControlBlock.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpCheckExeOwnerForPca @ 0x1408AE8F4 (CmpCheckExeOwnerForPca.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408E2B94 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpIsSystemEntity @ 0x1408E4D80 (CmpIsSystemEntity.c)
 *     CmpLockKcbStackShared @ 0x14090B180 (CmpLockKcbStackShared.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpLogUnsupportedOperation @ 0x140963320 (CmpLogUnsupportedOperation.c)
 *     HvResetDirtyData @ 0x140967654 (HvResetDirtyData.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 *     CmpEnlistKeyBody @ 0x140970AE0 (CmpEnlistKeyBody.c)
 *     CmpIsKeyStackDeleted @ 0x140970C00 (CmpIsKeyStackDeleted.c)
 *     CmpPopulateKcbStack @ 0x140970CD0 (CmpPopulateKcbStack.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140987400 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpGetComponentHashAtIndex @ 0x140988250 (CmpGetComponentHashAtIndex.c)
 *     CmpGetComponentNameAtIndex @ 0x140989B40 (CmpGetComponentNameAtIndex.c)
 *     CmRmIsKcbStackVisible @ 0x140990820 (CmRmIsKcbStackVisible.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1409E4D38 (CmpLockHashEntrySharedByKcb.c)
 *     CmpVEExecuteCreateLogic @ 0x140A154DC (CmpVEExecuteCreateLogic.c)
 *     CmpTransSearchAddTransFromRm @ 0x140A41F84 (CmpTransSearchAddTransFromRm.c)
 *     CmpPublishEventForPcaResolver @ 0x140A46F90 (CmpPublishEventForPcaResolver.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140A482D4 (CmpTryToLockHashEntryExclusive.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140A4B0C4 (CmpUpdateHiveRootCellFlags.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A57370 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpCreateHiveRootCell @ 0x140AA2078 (CmpCreateHiveRootCell.c)
 *     CmpWaitForHiveMount @ 0x140AAE520 (CmpWaitForHiveMount.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmListGetNextElement @ 0x140BBB940 (CmListGetNextElement.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
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
  int v118; // eax
  __int64 v119; // rcx
  NTSTATUS v120; // eax
  int v121; // r8d
  __int64 v122; // rcx
  __int64 v124; // rax
  __int64 v125; // rdx
  int *v126; // r15
  __int64 v127; // rcx
  __int16 v128; // bx
  GUID *v129; // rdi
  int ComponentNameAtIndex; // ebx
  unsigned __int8 v131; // dl
  __int64 v132; // r8
  __int16 v133; // r9
  __int64 v134; // rax
  unsigned int v135; // ecx
  bool v136; // zf
  unsigned __int64 v137; // rax
  wchar_t *v138; // r10
  unsigned int v139; // edx
  __int64 v141; // rax
  __int64 v142; // r13
  int v143; // eax
  ULONG_PTR v144; // r9
  int v145; // eax
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // r8
  ULONG_PTR v149; // r9
  int v150; // edx
  int v151; // r8d
  __int64 v152; // rcx
  int v153; // edx
  int v154; // r8d
  __int64 v155; // rdx
  bool v156; // r8
  __int64 v157; // rcx
  unsigned int v158; // r8d
  __int64 v159; // r12
  __int64 v160; // rcx
  int ComponentHashAtIndex; // ebx
  __int64 v162; // rcx
  __int64 v163; // r8
  ULONG_PTR v164; // rdx
  unsigned int *v165; // rdi
  ULONG_PTR v166; // rcx
  int HiveRootCell; // eax
  int updated; // eax
  __int64 v169; // rbx
  __int64 v170; // rbx
  int v171; // eax
  GUID *v172; // r9
  __int64 v173; // r8
  int v174; // eax
  ULONG_PTR v175; // rcx
  int v176; // r13d
  int v177; // eax
  ULONG_PTR v178; // rdi
  __int64 v179; // r12
  ULONG_PTR v180; // rcx
  __int64 v181; // rcx
  char v182; // bl
  __int64 v183; // rdi
  __int64 v184; // r15
  __int64 v185; // rax
  __int64 v186; // rdx
  __int64 v187; // r8
  __int64 v188; // rax
  __int64 v189; // rdx
  __int64 v190; // r8
  const UNICODE_STRING *v191; // rbx
  int v192; // r9d
  __int64 v193; // r8
  NTSTATUS v194; // eax
  int v195; // eax
  __int64 v196; // r8
  __int64 v197; // rcx
  _KPROCESS *CurrentThreadProcess; // rdi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  __int64 v201; // rcx
  __int64 v202; // r8
  int v203; // r8d
  __int64 v204; // rcx
  int v205; // edx
  int v206; // r8d
  __int64 v207; // rcx
  int Logic; // eax
  __int64 v209; // rcx
  int v210; // r9d
  _KPROCESS *v211; // rdi
  __int64 v212; // rax
  int v213; // ebx
  __int64 v214; // rcx
  bool IsKeyStackSymlink; // al
  int SymbolicLinkTarget; // eax
  __int64 v217; // rcx
  __int64 v218; // rbx
  int v219; // r9d
  bool v220; // al
  __int64 v221; // rbx
  int v222; // eax
  __int64 v223; // rcx
  NTSTATUS v224; // eax
  __int64 v225; // rbx
  NTSTATUS v226; // eax
  PVOID v227; // rax
  int SourceString; // [rsp+20h] [rbp-E0h]
  int TransactionId; // [rsp+30h] [rbp-D0h]
  GUID *TransactionIda; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v231; // [rsp+38h] [rbp-C8h]
  char v232; // [rsp+60h] [rbp-A0h]
  char v233; // [rsp+61h] [rbp-9Fh]
  char v234; // [rsp+62h] [rbp-9Eh]
  NTSTATUS KeyBody; // [rsp+64h] [rbp-9Ch] BYREF
  char v236; // [rsp+68h] [rbp-98h]
  __int16 v237; // [rsp+69h] [rbp-97h] BYREF
  ULONG_PTR v238; // [rsp+70h] [rbp-90h]
  __int64 v239; // [rsp+78h] [rbp-88h]
  unsigned __int8 v240; // [rsp+80h] [rbp-80h]
  bool v241[11]; // [rsp+81h] [rbp-7Fh] BYREF
  int v242; // [rsp+8Ch] [rbp-74h]
  __int64 v243; // [rsp+90h] [rbp-70h] BYREF
  int v244[2]; // [rsp+98h] [rbp-68h]
  ULONG_PTR v245; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v246; // [rsp+A8h] [rbp-58h]
  GUID *v247; // [rsp+B0h] [rbp-50h]
  void *v248; // [rsp+B8h] [rbp-48h]
  GUID *v249; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v251; // [rsp+D0h] [rbp-30h] BYREF
  PCUNICODE_STRING String2; // [rsp+D8h] [rbp-28h]
  struct _ACCESS_STATE *v253; // [rsp+E0h] [rbp-20h]
  ULONG_PTR BugCheckParameter3; // [rsp+E8h] [rbp-18h]
  int v255; // [rsp+F0h] [rbp-10h]
  __int64 v256; // [rsp+F8h] [rbp-8h]
  __m128i v257; // [rsp+100h] [rbp+0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+110h] [rbp+10h] BYREF
  __int64 v259; // [rsp+118h] [rbp+18h]
  _QWORD v260[2]; // [rsp+120h] [rbp+20h] BYREF
  __m128i v261; // [rsp+130h] [rbp+30h] BYREF
  __int64 v262; // [rsp+140h] [rbp+40h] BYREF
  int v263[2]; // [rsp+148h] [rbp+48h] BYREF
  ULONG_PTR v264[2]; // [rsp+150h] [rbp+50h] BYREF
  __m128i v265; // [rsp+160h] [rbp+60h]
  __int128 v266; // [rsp+170h] [rbp+70h] BYREF
  _QWORD *v267; // [rsp+180h] [rbp+80h]
  __int64 v268[2]; // [rsp+190h] [rbp+90h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+1A0h] [rbp+A0h]
  int v270[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  PPRIVILEGE_SET v271[2]; // [rsp+1C0h] [rbp+C0h]
  struct _KAPC_STATE ApcState; // [rsp+1D0h] [rbp+D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+200h] [rbp+100h] BYREF
  char v274[32]; // [rsp+220h] [rbp+120h] BYREF
  ULONG_PTR *v275; // [rsp+240h] [rbp+140h]
  __int64 v276; // [rsp+248h] [rbp+148h]

  v9 = 0;
  v10 = a1;
  v239 = a7;
  String2 = a5;
  v267 = a9;
  v12 = 0LL;
  v246 = a1;
  v247 = 0LL;
  v249 = 0LL;
  v233 = 0;
  LOWORD(v243) = 0;
  v234 = 0;
  *(_WORD *)&v241[1] = 0;
  v241[0] = 0;
  v237 = 0;
  v240 = a3;
  v253 = a2;
  LOWORD(v251) = 0;
  KeyBody = 0;
  DestinationString = 0LL;
  v262 = 0LL;
  v266 = 0LL;
  v260[0] = 0LL;
  Object = 0LL;
  BugCheckParameter3 = 0LL;
  v245 = 0LL;
  *(_QWORD *)v263 = 0LL;
  *(_QWORD *)v244 = 0LL;
  v232 = 0;
  LOWORD(v242) = 0;
  *(_WORD *)&v241[7] = 0;
  v264[0] = 0LL;
  HvpGetCellContextInitialize(&v262);
  v13 = *a6;
  v257 = *a6;
  CmpInitializeDelayDerefContext(&v266);
  *(_OWORD *)v268 = 0LL;
  WORD1(v268[0]) = -1;
  *(_OWORD *)v270 = 0LL;
  HIWORD(v270[0]) = -1;
  *(_OWORD *)(a7 + 160) = 0LL;
  v241[3] = 0;
  *(_OWORD *)(a7 + 176) = 0LL;
  v256 = 0LL;
  ApcState.ApcListHead[0] = 0LL;
  WORD1(ApcState.ApcListHead[0].Flink) = -1;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_QWORD *)(a7 + 208) = 0LL;
  v248 = (void *)(a7 + 216);
  *(_OWORD *)Privileges = 0LL;
  *(_OWORD *)v271 = 0LL;
  ApcState.ApcListHead[1] = 0LL;
  memset_0((void *)(a7 + 216), 0, 0xA8uLL);
  memset_0((void *)(a7 + 384), 0, 0x50uLL);
  if ( a7 )
    *(_QWORD *)(a7 + 384) = *(_QWORD *)(a7 + 88);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v14 = *(_QWORD *)(a7 + 88);
  v15 = *(_QWORD *)(a7 + 72);
  v238 = v14;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v15 )
  {
    v124 = *(_QWORD *)(v10 + 56);
    if ( v124 && v15 != v124 )
    {
      v37 = v239;
      KeyBody = -1072103422;
      CmpRecordParseFailure(v239, 256, -1072103422);
      v85 = 0;
      v33 = v149;
      goto LABEL_145;
    }
    v259 = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(v10 + 56);
    v259 = *(_QWORD *)(v10 + 64);
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(v10 + 50);
  v16 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( *(_QWORD *)(v10 + 8) != v16 )
  {
    if ( v14 )
    {
      CmpLockRegistry(v16);
      CmpDereferenceKeyControlBlock(v238);
      v238 = 0LL;
      CmpUnlockRegistry(v49);
      goto LABEL_10;
    }
LABEL_9:
    LOWORD(v242) = 0;
    v238 = v14;
    v232 = 0;
LABEL_10:
    v17 = 0;
    v236 = 0;
LABEL_11:
    v233 = 0;
LABEL_12:
    v18 = *(_QWORD *)(v10 + 8);
    v19 = 0;
    BugCheckParameter2 = v18;
    v261 = v13;
    v265 = v13;
    v241[7] = 0;
    v255 = _mm_cvtsi128_si32(v13);
    if ( (_WORD)v255 )
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
          v118 = -1073741811;
LABEL_320:
          v37 = v239;
          KeyBody = v118;
          CmpRecordParseFailure(v239, 1280, v118);
          goto LABEL_321;
        }
        if ( *v21 == 92 )
        {
          ++v20;
          v261.m128i_i16[0] -= v22;
          v261.m128i_i16[1] = v261.m128i_i16[0];
          if ( v20 > 8 && !v19 )
          {
            v118 = CmpExpandPathInfo((__int64)v248);
            if ( v118 < 0 )
              goto LABEL_320;
            v241[7] = 1;
          }
          v142 = (unsigned int)(v20 - 1);
          if ( (unsigned int)v142 >= 8 )
          {
            *(__m128i *)(*((_QWORD *)v248 + 20) + 16 * ((unsigned int)(v20 - 9) + 6LL)) = v261;
            v145 = CmpHashUnicodeComponent(&v261);
            *(_DWORD *)(*((_QWORD *)v248 + 20) + 4LL * (unsigned int)(v20 - 9)) = v145;
          }
          else
          {
            *((__m128i *)v248 + (unsigned int)v142 + 2) = v261;
            v143 = CmpHashUnicodeComponent(&v261);
            v144 = v238;
            *((_DWORD *)v248 + v142) = v143;
            v238 = v144;
          }
          do
          {
            if ( *v21 != 92 )
              break;
            ++v21;
            v22 -= 2;
            epi16 -= 2;
            v265.m128i_i64[1] = (__int64)v21;
            v265.m128i_i16[0] = v22;
            v265.m128i_i16[1] = epi16;
          }
          while ( v22 );
          v13 = v265;
          v19 = v241[7];
          v261 = v265;
        }
        else
        {
          ++v21;
          v22 -= 2;
          epi16 -= 2;
          v265.m128i_i64[1] = (__int64)v21;
          v265.m128i_i16[1] = epi16;
          v265.m128i_i16[0] = v22;
        }
      }
      v25 = (__m128i *)v248;
      v26 = v20 + 1;
      if ( v26 > 8 && !v19 )
      {
        v118 = CmpExpandPathInfo((__int64)v248);
        if ( v118 < 0 )
          goto LABEL_320;
      }
      if ( v24 >= 8 )
      {
        v113 = v24 - 8;
        *(__m128i *)(v25[10].m128i_i64[0] + 16 * ((unsigned int)v113 + 6LL)) = v13;
        *(_DWORD *)(v25[10].m128i_i64[0] + 4 * v113) = CmpHashUnicodeComponent(&v261);
      }
      else
      {
        v25[v24 + 2] = v13;
        v27 = CmpHashUnicodeComponent(&v261);
        v28 = v236;
        v25->m128i_i32[v24] = v27;
        v236 = v28;
      }
      v18 = BugCheckParameter2;
      v29 = v26;
      v17 = v236;
    }
    else
    {
      v25 = (__m128i *)v248;
      v29 = 0;
    }
    *(_WORD *)&v241[7] = v29;
    KeyBody = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= v29 )
      {
        v32 = v242;
        v33 = v238;
        v12 = BugCheckParameter3;
        goto LABEL_26;
      }
      v31 = i >= 8 ? (char *)(v25[10].m128i_i64[0] + 16 * (i - 8 + 6LL)) : (char *)&v25[i + 2];
      if ( *(_WORD *)v31 > 0x200u )
        break;
    }
    v37 = v239;
    KeyBody = -1073741811;
    CmpRecordParseFailure(v239, 1536, -1073741811);
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
  v233 = 1;
  v50 = *(_QWORD *)(v238 + 296);
  v51 = v50 & 1;
  if ( (v50 & 1) != 0 )
    v50 &= ~1uLL;
  if ( !v50 || v51 || !RtlPrefixUnicodeString((PCUNICODE_STRING)v50, String2, 1u) )
  {
    CmpDereferenceKeyControlBlock(v238);
    v238 = 0LL;
    CmpUnlockRegistry(v116);
    v17 = 0;
    v13 = v257;
    v247 = v249;
    v236 = 0;
    BugCheckParameter3 = v245;
    goto LABEL_11;
  }
  v52 = &String2->Buffer[(unsigned __int64)*(unsigned __int16 *)v50 >> 1];
  v53 = String2->Length - *(_WORD *)v50;
  v54 = String2->MaximumLength - *(_WORD *)v50;
  v257.m128i_i64[1] = (__int64)v52;
  v257.m128i_i16[0] = v53;
  v257.m128i_i16[1] = v54;
  if ( v53 )
  {
    do
    {
      if ( *v52 != 92 )
        break;
      v53 -= 2;
      v54 -= 2;
      ++v52;
      v257.m128i_i16[0] = v53;
      v257.m128i_i16[1] = v54;
    }
    while ( v53 );
    v257.m128i_i64[1] = (__int64)v52;
  }
  v55 = ((*(_DWORD *)(v238 + 8) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)v239 & 1) == 0 || v53 )
  {
    v32 = v242;
  }
  else
  {
    v133 = String2->MaximumLength - *(_WORD *)v50;
    v134 = *(_QWORD *)(v238 + 80);
    v135 = *(unsigned __int16 *)(v134 + 24);
    v136 = (*(_DWORD *)v134 & 1) == 0;
    v137 = *(unsigned __int16 *)(v134 + 24);
    if ( v136 )
      v137 = (unsigned __int64)v135 >> 1;
    else
      LOWORD(v135) = 2 * v135;
    v138 = &String2->Buffer[((unsigned __int64)*(unsigned __int16 *)v50 >> 1) - v137];
    v257.m128i_i16[0] = v135 + String2->Length - *(_WORD *)v50;
    v257.m128i_i64[1] = (__int64)v138;
    v32 = 1;
    v257.m128i_i16[1] = v135 + v133;
    --v55;
    v242 = 1;
  }
  v56 = v248;
  v57 = CmpComputeComponentHashes(&v257, (__int16 *)&v241[7], (__int64)v248);
  KeyBody = v57;
  if ( v57 < 0 )
  {
    v150 = 512;
LABEL_331:
    v37 = v239;
    CmpRecordParseFailure(v239, v150, v57);
    v12 = v245;
    v85 = 0;
    goto LABEL_287;
  }
  v29 = *(_WORD *)&v241[7];
  if ( (unsigned int)(*(__int16 *)&v241[7] + v55) > 0x20 )
  {
    v57 = -1073741811;
    v150 = 768;
    KeyBody = -1073741811;
    goto LABEL_331;
  }
  for ( j = 0; j < *(__int16 *)&v241[7]; ++j )
  {
    if ( j >= 8 )
      v59 = (_WORD *)(v56[20] + 16 * (j - 8 + 6LL));
    else
      v59 = &v56[2 * j + 4];
    if ( *v59 > 0x200u )
    {
      v57 = -1073741811;
      v150 = 1024;
      KeyBody = -1073741811;
      goto LABEL_331;
    }
  }
  v33 = v238;
  KeyBody = 0;
  if ( (_WORD)v32 == *(_WORD *)&v241[7] )
  {
    CmpLockHashEntrySharedByKcb(v238);
    v60 = 1;
    v232 = 1;
  }
  else
  {
    v60 = 0;
  }
  v236 = v60;
  v61 = v60;
  CmpLockKcbShared(v238);
  if ( CmpIsKeyDeleted(v238, 0LL) || (*(_DWORD *)(v238 + 8) & 0x40000) != 0 )
  {
    CmpUnlockKcb(v238);
    v117 = v232;
    if ( v232 )
    {
      CmpUnlockHashEntryByKcb(v238);
      v117 = 0;
      v232 = 0;
    }
    CmpDereferenceKeyControlBlock(v238);
    v13 = *a6;
    v238 = 0LL;
    v257 = v13;
    v242 = 0;
    CmpCleanupPathInfo((__int64)v248);
    memset_0(v248, 0, 0xA8uLL);
    v17 = v117;
    v10 = v246;
    v247 = v249;
    v236 = v117;
    BugCheckParameter3 = v245;
    goto LABEL_12;
  }
  CmpUnlockKcb(v238);
  v18 = v238;
  v17 = v236;
  v247 = v249;
  v232 = v61;
  v12 = v245;
  v255 = v257.m128i_u16[0];
  BugCheckParameter2 = v238;
LABEL_26:
  v34 = v239;
  v238 = v33;
  *(_QWORD *)(v239 + 392) = v18;
  *(_QWORD *)(v34 + 416) = v18;
  v35 = v29 + ((*(_DWORD *)(v18 + 8) >> 21) & 0x3FF) - (unsigned int)(unsigned __int16)v32;
  if ( (unsigned int)v35 > 0x200 )
  {
    v37 = v239;
    KeyBody = -1073741811;
    CmpRecordParseFailure(v239, 1792, -1073741811);
    v85 = v232;
    goto LABEL_145;
  }
  if ( !v233 )
  {
    if ( (*(_DWORD *)v34 & 0x400) != 0 )
      CmpLockRegistryExclusive(v35);
    else
      CmpLockRegistry(v35);
    v18 = BugCheckParameter2;
    v233 = 1;
  }
  v36 = *(_DWORD *)(v246 + 48);
  if ( (v36 & 9) != 0 )
  {
    v37 = v239;
    v151 = -1073740763;
    if ( (v36 & 1) == 0 )
      v151 = -1073741444;
    KeyBody = v151;
    CmpRecordParseFailure(v239, 2048, v151);
    v85 = v232;
    goto LABEL_145;
  }
  if ( (_WORD)v32 == v29 )
  {
    CmpReferenceKeyControlBlockUnsafe(v18);
    v245 = BugCheckParameter2;
    v12 = BugCheckParameter2;
    if ( BugCheckParameter2 == v33 )
    {
      v232 = 0;
    }
    else
    {
      CmpLockHashEntrySharedByKcb(BugCheckParameter2);
      v17 = 1;
    }
    HIBYTE(v237) = v17;
    v37 = v239;
  }
  else
  {
    v37 = v239;
    v38 = CmpPerformCompleteKcbCacheLookup(
            (volatile signed __int64 *)v18,
            (unsigned __int16)v32,
            v29,
            v239 + 216,
            (_DWORD *)v239,
            &v245,
            (char *)&v237 + 1,
            &v251);
    KeyBody = v38;
    if ( v38 < 0 || v38 == 259 )
    {
      CmpRecordParseFailure(v37, 2432, v38);
      v12 = v245;
      v85 = v232;
      goto LABEL_145;
    }
    v39 = v251;
    v12 = v245;
    LOWORD(v32) = v251 + v32;
    v242 = v32;
    *(_QWORD *)(v37 + 400) = v245;
    *(_BYTE *)(v37 + 424) = v39;
    *(_QWORD *)(v37 + 416) = v12;
  }
  if ( (_WORD)v32 == v29 && (*(_DWORD *)v37 & 1) == 0 )
  {
    CmpUnlockHashEntryByKcb(v12);
    HIBYTE(v237) = 0;
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
    DestinationString.Length = v255 - 2 * (((__int64)DestinationString.Buffer - v257.m128i_i64[1]) >> 1);
    DestinationString.MaximumLength = DestinationString.Length;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  p_SubjectSecurityContext = &v253->SubjectSecurityContext;
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
      if ( (unsigned __int8)CmpIsSystemEntity(v240) )
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
    v85 = v232;
LABEL_287:
    v33 = v238;
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
      v139 = dword_140E09F58;
      if ( (unsigned int)dword_140E09F58 > 5 )
      {
        if ( (qword_140E09F68 & 0x200000010000LL) != 0 && (qword_140E09F70 & 0x200000010000LL) == qword_140E09F70 )
        {
          v264[0] = 0x1000000LL;
          v275 = v264;
          v276 = 8LL;
          tlgWriteAgg((__int64)&dword_140E09F58, (unsigned __int8 *)&unk_140055380, 0x200000010000LL, 3u, (__int64)v274);
          v139 = dword_140E09F58;
        }
        if ( v139 > 5 )
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E09F58,
            (unsigned __int8 *)word_1400553D2,
            0LL,
            0LL,
            2u,
            (PEVENT_DATA_DESCRIPTOR)&DestinationString);
      }
    }
    v141 = *(unsigned __int8 *)(v37 + 426);
    KeyBody = -1073741790;
    if ( (unsigned __int8)v141 < 4u )
    {
      *(_DWORD *)(v37 + 8 * v141 + 428) = -1073741790;
      *(_DWORD *)(v37 + 8LL * (unsigned __int8)(*(_BYTE *)(v37 + 426))++ + 432) = 2560;
    }
    goto LABEL_286;
  }
LABEL_90:
  v62 = v259;
  if ( v15 || v259 )
  {
    if ( *(_QWORD *)(v12 + 32) == CmpMasterHive )
    {
      BYTE1(v243) = 1;
    }
    else
    {
      if ( !v15 && !v259 || !*(_WORD *)(v12 + 66) )
        goto LABEL_92;
      CmpLogUnsupportedOperation(8LL);
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        KeyBody = -1072103419;
        CmpRecordParseFailure(v37, 2816, -1072103419);
        v85 = v232;
        v33 = v238;
        goto LABEL_145;
      }
    }
    v15 = 0LL;
    v259 = 0LL;
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
        v247 = v65;
        if ( v65 )
        {
          v249 = v65;
          v64 = 0;
        }
        else
        {
          v64 = -1072103422;
          v247 = v249;
        }
        if ( v15 )
          ObfDereferenceObject((PVOID)(v15 & 0xFFFFFFFFFFFFFFFEuLL));
        v12 = v245;
        v29 = *(_WORD *)&v241[7];
      }
      LODWORD(v62) = v259;
    }
    else
    {
      v64 = CmpTransSearchAddTransFromRm(*(_QWORD *)(v63 + 4152), v15, v62, 0, (__int64)&v249);
      v247 = v249;
    }
    if ( v64 < 0 )
    {
LABEL_214:
      if ( HIBYTE(v237) )
      {
        CmpUnlockHashEntryByKcb(v12);
        HIBYTE(v237) = 0;
      }
      CmpUnlockRegistry(v63);
      v119 = *(_QWORD *)(v12 + 32);
      if ( v119 )
      {
        if ( (v15 & 1) != 0 )
          v120 = CmpTransSearchAddLightWeightTrans(v15, *(_QWORD *)(v12 + 32), 1LL, &v249);
        else
          v120 = CmpTransSearchAddTransFromRm(*(_QWORD *)(v119 + 4152), v15, v62, 1, (__int64)&v249);
      }
      else
      {
        v120 = -1073741811;
      }
      KeyBody = v120;
      CmpLockRegistry(v119);
      v121 = KeyBody;
      v233 = 1;
      if ( KeyBody >= 0 )
      {
        v121 = -1073741267;
        KeyBody = -1073741267;
      }
      CmpRecordParseFailure(v37, 3072, v121);
      v85 = v232;
      v33 = v238;
      goto LABEL_145;
    }
  }
  else
  {
    v247 = 0LL;
    v249 = 0LL;
  }
  started = CmpStartKcbStack((__int64)v268, *(_WORD *)(v12 + 66));
  KeyBody = started;
  if ( started < 0 )
  {
    CmpRecordParseFailure(v37, 3328, started);
    goto LABEL_286;
  }
  v67 = CmpStartKcbStack((__int64)v270, *(_WORD *)(v12 + 66));
  KeyBody = v67;
  if ( v67 < 0 )
  {
    CmpRecordParseFailure(v37, 3584, v67);
    goto LABEL_286;
  }
  v68 = v268;
  v69 = v270;
  CmpPopulateKcbStack(v268, v12);
  LOWORD(v70) = v242;
  v71 = v29;
  while ( 2 )
  {
    if ( (__int16)v70 >= v29 )
    {
      v125 = *(_QWORD *)(v12 + 72);
      v126 = v69;
      *(_QWORD *)v244 = v69;
      if ( v125 )
      {
        CmpPopulateKcbStack(v69, v125);
      }
      else
      {
        v126 = 0LL;
        *(_QWORD *)v244 = 0LL;
      }
      v86 = v246;
      v127 = *(_QWORD *)(v246 + 8);
      if ( v12 != v127 && *(_QWORD *)(v12 + 72) != v127 )
      {
        CmpLockKcbShared(v127);
        LOBYTE(v237) = 1;
      }
      if ( v126 )
      {
        CmpLockKcbStackShared(v126);
        v234 = 1;
      }
      CmpLockKcbStackShared(v68);
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v86, 0LL) )
      {
        v153 = 5888;
      }
      else
      {
        if ( (*(_DWORD *)(v12 + 8) & 0x20000) != 0 )
        {
          KeyBody = -1073741772;
          v153 = 6016;
          v154 = -1073741772;
          goto LABEL_370;
        }
        v128 = v70 - 1;
        if ( (*(_DWORD *)(v12 + 184) & 0x20000) != 0 )
        {
          KeyBody = -1073741772;
          v153 = 6144;
          v154 = -1073741772;
          goto LABEL_370;
        }
        v129 = v247;
        if ( !(unsigned __int8)CmRmIsKcbStackVisible(v68, v247) )
        {
          KeyBody = -1073741772;
          v153 = 6400;
          v154 = -1073741772;
          goto LABEL_370;
        }
        if ( (*(_DWORD *)v239 & 2) == 0 )
        {
          if ( (*(_DWORD *)v239 & 0x20) != 0 )
          {
            CmpUnlockKcbStack((__int64)v68);
            CmpUnlockKcbStack(*(__int64 *)v244);
            CmpLockKcbStackTopExclusiveRestShared(*(__int64 *)v244);
            CmpLockKcbStackTopExclusiveRestShared((__int64)v68);
            if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v244, v129) )
            {
              KeyBody = -1073741772;
              v153 = 8960;
              v154 = -1073741772;
            }
            else
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v12 + 72) + 184LL) & 0x20000) == 0 )
              {
                ComponentNameAtIndex = CmpGetComponentNameAtIndex(v248, (unsigned int)v128);
                if ( (*(_DWORD *)(v12 + 184) & 0x400000) == 0 && (*(_DWORD *)(v12 + 8) & 8) != 0 )
                {
                  CmpDelayDerefKeyControlBlock(*(_QWORD *)(v12 + 104));
                  *(_QWORD *)(v12 + 104) = 0LL;
                  *(_WORD *)(v12 + 8) &= ~8u;
                }
                *(_WORD *)(v12 + 186) |= 0x40u;
                v131 = v240;
                v132 = v239;
                *(_DWORD *)(v12 + 100) = -1;
                *(_DWORD *)(v12 + 96) = *(_DWORD *)(v132 + 56);
                KeyBody = CmpCreateKeyBody(v12, v131, v132, (__int64)v129, 3, (__int64)v68, (ULONG_PTR **)&Object, v241);
                if ( KeyBody < 0 )
                  goto LABEL_257;
                if ( (unsigned __int8)CmpIsKeyStackDeleted(v68, v129) )
                {
                  KeyBody = CmpCreateChild(
                              v244[0],
                              (_DWORD)v68,
                              (_DWORD)v253,
                              ComponentNameAtIndex,
                              v239,
                              64,
                              0,
                              0,
                              (__int64)v129);
                  if ( KeyBody < 0 )
                  {
LABEL_257:
                    v33 = v238;
                    v85 = v232;
                    CmpUnlockKcbStack((__int64)v68);
                    goto LABEL_137;
                  }
                  v155 = v239;
                  v156 = 0;
                  *(_DWORD *)(v239 + 32) = 1;
                  goto LABEL_408;
                }
                goto LABEL_361;
              }
              KeyBody = -1073741772;
              v153 = 9216;
              v154 = -1073741772;
            }
            goto LABEL_370;
          }
          if ( (unsigned __int8)CmpIsKeyStackDeleted(v68, v129) )
          {
            if ( BYTE1(v243) )
            {
              v153 = 9728;
              KeyBody = -1073741811;
              v154 = -1073741811;
              goto LABEL_370;
            }
            v184 = *(_QWORD *)v244;
            if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v244, v129)
              || !(unsigned __int8)CmRmIsKcbStackVisible(v184, v129) )
            {
              KeyBody = -1073741772;
              v153 = 9984;
              v154 = -1073741772;
              goto LABEL_370;
            }
            if ( (*(_DWORD *)(*(_QWORD *)(v12 + 72) + 184LL) & 0x20000) != 0 )
            {
              KeyBody = -1073741772;
              v153 = 10240;
              v154 = -1073741772;
              goto LABEL_370;
            }
            if ( (*(_DWORD *)v239 & 1) == 0 )
            {
              if ( CmpLoadingSystemHivesActive )
              {
                v12 = v245;
                if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                  && *(_QWORD *)(v245 + 32) == CmpMasterHive
                  && (*(_DWORD *)(v245 + 8) & 0x7FE00000) == 0x600000 )
                {
                  v185 = CmpGetComponentNameAtIndex(v239 + 216, (unsigned int)v128);
                  if ( (unsigned __int8)CmpWaitForHiveMount(v185, v186, v187, v187 + 136) )
                  {
                    v153 = 10496;
                    KeyBody = 259;
                    v154 = 259;
                    v157 = v239;
                    *(_DWORD *)v239 |= 0x100u;
                    goto LABEL_372;
                  }
                }
              }
              KeyBody = -1073741772;
              v153 = 10752;
              v154 = -1073741772;
              goto LABEL_370;
            }
            if ( *(_QWORD *)(v12 + 32) == CmpMasterHive && CmpNoMasterCreates )
            {
              v12 = v245;
              if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
              {
                if ( CmpLoadingSystemHivesActive )
                {
                  if ( (*(_DWORD *)(v245 + 8) & 0x7FE00000) == 0x600000 )
                  {
                    v188 = CmpGetComponentNameAtIndex(v239 + 216, (unsigned int)v128);
                    if ( (unsigned __int8)CmpWaitForHiveMount(v188, v189, v190, v190 + 136) )
                    {
                      v153 = 11008;
                      KeyBody = 259;
                      v154 = 259;
                      v157 = v239;
                      *(_DWORD *)v239 |= 0x100u;
                      goto LABEL_372;
                    }
                  }
                }
                v153 = 11264;
                KeyBody = -1073741811;
                v154 = -1073741811;
                goto LABEL_370;
              }
              v129 = v249;
            }
            v191 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v239 + 216, (unsigned int)v128);
            LOBYTE(v192) = 1;
            v194 = CmpDoWritethroughReparse(v12, (int)v68, v184, v192, v191, v193, (__int64)String2);
            KeyBody = v194;
            if ( v194 != -1073741199 )
            {
              v154 = v194;
              v153 = 11392;
              goto LABEL_370;
            }
            v195 = CmpCreateKeyBody(v12, v240, v239, (__int64)v129, 0, (__int64)v68, (ULONG_PTR **)&Object, v241);
            KeyBody = v195;
            if ( v195 < 0 )
            {
              v154 = v195;
              v153 = 11456;
              goto LABEL_370;
            }
            v196 = v239;
            if ( (*(_DWORD *)(v239 + 160) & 1) == 0 )
            {
              CmpAttachToRegistryProcess((PRKAPC_STATE)(v239 + 168));
              v196 = v239;
              *(_DWORD *)(v239 + 160) |= 1u;
            }
            if ( *(_DWORD *)(*(_QWORD *)(v12 + 72) + 40LL) == -1 )
            {
              v197 = *(_DWORD *)(v196 + 24) >> 2;
              LOBYTE(v197) = (*(_DWORD *)(v196 + 24) & 4) != 0;
              if ( !CmpCheckCreateAccessOnKcbStack(
                      v197,
                      v184,
                      v196,
                      v253,
                      v240,
                      16 * (*(_DWORD *)(v196 + 24) & 2),
                      v197,
                      (__int64)v129,
                      Object,
                      1,
                      &KeyBody) )
              {
                v12 = v245;
                if ( KeGetCurrentThread()->PreviousMode == 1 )
                {
                  CurrentThreadProcess = PsGetCurrentThreadProcess();
                  ProcessServerSilo = PsGetProcessServerSilo((__int64)CurrentThreadProcess);
                  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
                  if ( (unsigned int)PsGetSessionIdEx((__int64)CurrentThreadProcess) != ServerSiloServiceSessionId )
                  {
                    if ( CmpCheckKeyOwnerForPca(v184, (__int64)v249) )
                    {
                      v201 = *(_QWORD *)(v12 + 72);
                      v241[3] = 1;
                      v256 = CmpConstructName(v201);
                    }
                  }
                }
                v154 = KeyBody;
                v153 = 11520;
                goto LABEL_370;
              }
              CmpUnlockKcbStack((__int64)v68);
              CmpUnlockKcbStack(v184);
              if ( (_BYTE)v237 )
              {
                CmpUnlockKcb(*(_QWORD *)(v86 + 8));
                LOBYTE(v237) = 0;
              }
              LOBYTE(v202) = 1;
              KeyBody = CmpPromoteKey(v184, 0LL, v202);
              v203 = KeyBody;
              if ( KeyBody < 0 )
              {
                if ( KeyBody == -1073741444 )
                {
                  v203 = -1073741772;
                  KeyBody = -1073741772;
                }
                v37 = v239;
                CmpRecordParseFailure(v239, 11776, v203);
                v33 = v238;
                v85 = v232;
                goto LABEL_141;
              }
            }
            else
            {
              CmpUnlockKcbStack((__int64)v68);
              CmpUnlockKcbStack(v184);
              CmpLockKcbStackTopExclusiveRestShared(v184);
            }
            CmpLockKcbStackTopExclusiveRestShared((__int64)v68);
            if ( !(unsigned __int8)CmRmIsKcbStackVisible(v68, v129) )
            {
              v204 = v239;
              v205 = 12032;
              KeyBody = -1073741772;
              v206 = -1073741772;
LABEL_508:
              CmpRecordParseFailure(v204, v205, v206);
              v33 = v238;
              v85 = v232;
              v234 = 1;
              goto LABEL_133;
            }
            if ( (*(_DWORD *)(v12 + 8) & 0x20000) != 0 )
            {
              v204 = v239;
              v205 = 12160;
              KeyBody = -1073741772;
              v206 = -1073741772;
              goto LABEL_508;
            }
            if ( (unsigned __int8)CmpIsKeyStackDeleted(v68, v129) )
            {
              if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v244, v129)
                || !(unsigned __int8)CmRmIsKcbStackVisible(*(_QWORD *)v244, v129) )
              {
                v204 = v239;
                v205 = 12288;
                KeyBody = -1073741772;
                v206 = -1073741772;
                goto LABEL_508;
              }
              v207 = *(_QWORD *)(v12 + 72);
              if ( (*(_DWORD *)(v207 + 184) & 0x20000) != 0 )
              {
                v204 = v239;
                v205 = 12544;
                KeyBody = -1073741772;
                v206 = -1073741772;
                goto LABEL_508;
              }
              LOBYTE(SourceString) = v240;
              Logic = CmpVEExecuteCreateLogic(
                        v207,
                        v12,
                        v191,
                        v253,
                        SourceString,
                        16 * (*(_DWORD *)(v239 + 24) & 2u),
                        v129,
                        v239,
                        String2);
              KeyBody = Logic;
              if ( Logic == -1073741739 )
              {
                v206 = -1073741267;
                KeyBody = -1073741267;
                v205 = 12672;
                v204 = v239;
                *(_DWORD *)v239 |= 0x400u;
                goto LABEL_508;
              }
              if ( Logic != -1073741199 )
              {
                v204 = v239;
                v205 = 12736;
LABEL_507:
                v206 = Logic;
                goto LABEL_508;
              }
              v209 = *(_DWORD *)(v239 + 24) >> 2;
              LOBYTE(v209) = (*(_DWORD *)(v239 + 24) & 4) != 0;
              if ( !CmpCheckCreateAccessOnKcbStack(
                      v209,
                      *(__int64 *)v244,
                      v239,
                      v253,
                      v240,
                      16 * (*(_DWORD *)(v239 + 24) & 2),
                      v209,
                      (__int64)v129,
                      Object,
                      0,
                      &KeyBody) )
              {
                v12 = v245;
                if ( KeGetCurrentThread()->PreviousMode == 1 )
                {
                  v211 = PsGetCurrentThreadProcess();
                  v212 = PsGetProcessServerSilo((__int64)v211);
                  v213 = PsGetServerSiloServiceSessionId(v212);
                  if ( (unsigned int)PsGetSessionIdEx((__int64)v211) != v213 )
                  {
                    if ( CmpCheckKeyOwnerForPca(*(__int64 *)v244, (__int64)v249) )
                    {
                      v214 = *(_QWORD *)(v12 + 72);
                      v241[3] = 1;
                      v256 = CmpConstructName(v214);
                    }
                  }
                }
                v206 = KeyBody;
                v205 = 12800;
                v204 = v239;
                goto LABEL_508;
              }
              LOBYTE(v210) = 1;
              Logic = CmpEnlistKeyBody((_DWORD)Object, v12, (_DWORD)v129, v210, (__int64)v68);
              v204 = v239;
              KeyBody = Logic;
              if ( Logic < 0 )
              {
                v205 = 12928;
                goto LABEL_507;
              }
              Logic = CmpCreateChild(
                        v244[0],
                        (_DWORD)v68,
                        (_DWORD)v253,
                        (_DWORD)v191,
                        v239,
                        8 * (*(_WORD *)(v239 + 24) & 2u),
                        0,
                        0,
                        (__int64)v129);
              KeyBody = Logic;
              if ( Logic < 0 )
              {
                v204 = v239;
                v205 = 12992;
                goto LABEL_507;
              }
              v155 = v239;
              *(_DWORD *)(v239 + 32) = 1;
LABEL_510:
              v182 = 1;
              v156 = 0;
              v234 = 1;
LABEL_409:
              if ( *(_DWORD *)(v155 + 32) == 1 )
              {
                v183 = v239;
                *((_WORD *)Object + 2) = *(_WORD *)(*((_QWORD *)Object + 1) + 66LL);
              }
              else
              {
                TransactionIda = v129;
                v183 = v239;
                if ( !(unsigned __int8)CmpCheckOpenAccessOnKeyBody(
                                         (char *)Object,
                                         (__int64)v68,
                                         (_DWORD *)v239,
                                         v253,
                                         v240,
                                         (*(_DWORD *)(v155 + 24) & 4) != 0,
                                         TransactionIda,
                                         &v241[3],
                                         &KeyBody) )
                {
                  if ( v241[3] )
                  {
                    if ( (*(_DWORD *)(v183 + 160) & 1) == 0 )
                    {
                      CmpAttachToRegistryProcess((PRKAPC_STATE)(v183 + 168));
                      *(_DWORD *)(v183 + 160) |= 1u;
                    }
                    v256 = CmpConstructName(v12);
                  }
                  CmpRecordParseFailure(v183, 15584, KeyBody);
LABEL_134:
                  v87 = v241[1];
                  goto LABEL_135;
                }
                v156 = v241[2];
              }
              v227 = Object;
              Object = 0LL;
              *v267 = v227;
              if ( !*(_DWORD *)(v183 + 32) )
                *(_DWORD *)(v183 + 32) = 2;
              if ( v241[0] )
              {
                KeyBody = 1073741846;
              }
              else
              {
                KeyBody = 0;
                v234 = v182;
                v241[2] = v156;
              }
              goto LABEL_134;
            }
            IsKeyStackSymlink = CmpIsKeyStackSymlink((__int64)v68);
            v204 = v239;
            if ( IsKeyStackSymlink && !_bittest((const signed __int32 *)v239, 9u) )
            {
              if ( (*(_DWORD *)(v239 + 24) & 2) == 0 )
              {
                CmpUnlockKcbStack(*(__int64 *)v244);
                if ( (_BYTE)v237 )
                {
                  CmpUnlockKcb(*(_QWORD *)(v86 + 8));
                  LOBYTE(v237) = 0;
                }
                if ( HIBYTE(v237) )
                {
                  CmpUnlockHashEntryByKcb(v12);
                  HIBYTE(v237) = 0;
                }
                v37 = v239;
                SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                       (_DWORD)v68,
                                       (int)v239 + 216,
                                       0,
                                       0,
                                       (__int64)v129,
                                       v239,
                                       (__int64)&v266,
                                       (__int64)String2,
                                       v239 + 88,
                                       (__int64)v260);
                KeyBody = SymbolicLinkTarget;
                if ( SymbolicLinkTarget >= 0 )
                {
                  *(_DWORD *)v37 &= ~8u;
                  if ( !*(_QWORD *)(v37 + 64) )
                  {
                    v217 = *(_QWORD *)(v260[0] + 32LL);
                    if ( (*(_DWORD *)(v217 + 4112) & 1) != 0 )
                      *(_QWORD *)(v37 + 64) = v217;
                  }
                  KeyBody = 260;
                  CmpRecordParseFailure(v37, 13440, 260);
                  v33 = v238;
                  v85 = v232;
                }
                else
                {
                  CmpRecordParseFailure(v37, 13312, SymbolicLinkTarget);
                  v33 = v238;
                  v85 = v232;
                }
                goto LABEL_141;
              }
              KeyBody = -1073741771;
              v205 = 13056;
              v206 = -1073741771;
              goto LABEL_508;
            }
            if ( (*(_DWORD *)(v12 + 184) & 0x20000) != 0 )
            {
              KeyBody = -1073741772;
              v205 = 13568;
              v206 = -1073741772;
              goto LABEL_508;
            }
            if ( (*(_DWORD *)(v239 + 24) & 2) != 0 )
            {
              KeyBody = -1073741771;
              v205 = 13824;
              v206 = -1073741771;
              goto LABEL_508;
            }
            Logic = CmpDoWritethroughReparse(v12, (int)v68, v244[0], 0, 0LL, v239, (__int64)String2);
            KeyBody = Logic;
            if ( Logic != -1073741199 )
            {
              v204 = v239;
              v205 = 13888;
              goto LABEL_507;
            }
            v218 = v239;
            Logic = CmpVEExecuteOpenLogic(v12, v240, (__int64)&v253->SubjectSecurityContext);
            KeyBody = Logic;
            if ( Logic == -1073741199 )
            {
              LOBYTE(v219) = 1;
              Logic = CmpEnlistKeyBody((_DWORD)Object, v12, (_DWORD)v129, v219, (__int64)v68);
              KeyBody = Logic;
              if ( Logic >= 0 )
              {
                v155 = v218;
                goto LABEL_510;
              }
              v205 = 14016;
            }
            else
            {
              v205 = 13952;
            }
            v204 = v218;
            goto LABEL_507;
          }
          v220 = CmpIsKeyStackSymlink((__int64)v68);
          v221 = v239;
          if ( v220 && !_bittest((const signed __int32 *)v239, 9u) )
          {
            if ( (*(_DWORD *)(v239 + 24) & 2) == 0 )
            {
              v88 = *(_QWORD *)v244;
              if ( v234 )
              {
                CmpUnlockKcbStack(*(__int64 *)v244);
                v234 = 0;
              }
              if ( (_BYTE)v237 )
              {
                CmpUnlockKcb(*(_QWORD *)(v86 + 8));
                LOBYTE(v237) = 0;
              }
              if ( HIBYTE(v237) )
              {
                CmpUnlockHashEntryByKcb(v12);
                HIBYTE(v237) = 0;
              }
              v222 = CmpGetSymbolicLinkTarget(
                       (_DWORD)v68,
                       (int)v221 + 216,
                       0,
                       0,
                       (__int64)v129,
                       v221,
                       (__int64)&v266,
                       (__int64)String2,
                       v221 + 88,
                       (__int64)v260);
              KeyBody = v222;
              if ( v222 >= 0 )
              {
                *(_DWORD *)v221 &= ~8u;
                if ( !*(_QWORD *)(v221 + 64) )
                {
                  v223 = *(_QWORD *)(v260[0] + 32LL);
                  if ( (*(_DWORD *)(v223 + 4112) & 1) != 0 )
                    *(_QWORD *)(v221 + 64) = v223;
                }
                KeyBody = 260;
                CmpRecordParseFailure(v221, 14592, 260);
                v33 = v238;
                v85 = v232;
              }
              else
              {
                CmpRecordParseFailure(v221, 14336, v222);
                v33 = v238;
                v85 = v232;
              }
              goto LABEL_138;
            }
            KeyBody = -1073741771;
            v153 = 14080;
            v154 = -1073741771;
            v157 = v239;
            goto LABEL_372;
          }
          if ( BYTE1(v243) )
          {
            v153 = 14848;
            KeyBody = -1073741811;
            v154 = -1073741811;
            v157 = v239;
            goto LABEL_372;
          }
          if ( (*(_DWORD *)(v12 + 184) & 0x20000) != 0 )
          {
            KeyBody = -1073741772;
            v153 = 15104;
            v154 = -1073741772;
            v157 = v239;
            goto LABEL_372;
          }
          if ( (*(_DWORD *)(v239 + 24) & 2) != 0 )
          {
            KeyBody = -1073741771;
            v153 = 15360;
            v154 = -1073741771;
            v157 = v239;
            goto LABEL_372;
          }
          v224 = CmpDoWritethroughReparse(v12, (int)v68, v244[0], 0, 0LL, v239, (__int64)String2);
          KeyBody = v224;
          if ( v224 == -1073741199 )
          {
            v225 = v239;
            v226 = CmpVEExecuteOpenLogic(v12, v240, (__int64)&v253->SubjectSecurityContext);
            KeyBody = v226;
            if ( v226 == -1073741199 )
            {
              KeyBody = CmpCreateKeyBody(v12, v240, v225, (__int64)v129, 2, (__int64)v68, (ULONG_PTR **)&Object, v241);
              v154 = KeyBody;
              if ( KeyBody >= 0 )
              {
LABEL_361:
                v156 = 0;
LABEL_407:
                v155 = v239;
LABEL_408:
                v182 = v234;
                goto LABEL_409;
              }
              if ( KeyBody == -1073741444 )
              {
                v154 = -1073741772;
                KeyBody = -1073741772;
              }
              v153 = 15552;
              v157 = v225;
            }
            else
            {
              v154 = v226;
              v153 = 15488;
              v157 = v225;
            }
LABEL_372:
            CmpRecordParseFailure(v157, v153, v154);
            goto LABEL_257;
          }
          v154 = v224;
          v153 = 15424;
LABEL_370:
          v157 = v239;
          goto LABEL_372;
        }
        CmpUnlockKcbStack((__int64)v68);
        CmpUnlockKcbStack(*(__int64 *)v244);
        if ( (_BYTE)v237 )
          CmpUnlockKcb(*(_QWORD *)(v86 + 8));
        v241[2] = CmpTryToLockHashEntryExclusive(*(_QWORD *)(v239 + 48), 0LL);
        if ( (_BYTE)v237 )
          CmpLockKcbShared(*(_QWORD *)(v86 + 8));
        CmpLockKcbStackTopExclusiveRestShared(*(__int64 *)v244);
        CmpLockKcbStackTopExclusiveRestShared((__int64)v68);
        v159 = CmpGetComponentNameAtIndex(v248, (unsigned int)v128);
        ComponentHashAtIndex = CmpGetComponentHashAtIndex(v160, v158);
        if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v246, 0LL) )
        {
          if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)v244, v129) )
          {
            v82 = 6912;
            goto LABEL_130;
          }
          if ( !(unsigned __int8)CmpIsKeyStackDeleted(v68, v129) )
          {
            KeyBody = -1073741790;
            v82 = 7168;
            v83 = -1073741790;
            goto LABEL_131;
          }
          v162 = *(_QWORD *)(v12 + 72);
          if ( *(_QWORD *)(v162 + 32) != CmpMasterHive )
          {
            KeyBody = -1073741790;
            v82 = 7424;
            v83 = -1073741790;
            goto LABEL_131;
          }
          if ( (*(_DWORD *)(v162 + 184) & 0x20000) != 0 )
          {
            v82 = 7680;
            goto LABEL_130;
          }
          v163 = v239;
          if ( (*(_DWORD *)(v239 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess((PRKAPC_STATE)(v239 + 168));
            v163 = v239;
            *(_DWORD *)(v239 + 160) |= 1u;
          }
          v164 = *(unsigned int *)(v163 + 40);
          v165 = (unsigned int *)(v163 + 40);
          v166 = *(_QWORD *)(v163 + 48);
          if ( (_DWORD)v164 == -1 )
          {
            HiveRootCell = CmpCreateHiveRootCell(v166, (__int64)v165);
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
            updated = CmpUpdateHiveRootCellFlags(v166, v164);
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
          v169 = v239;
          KeyBody = CmpCreateKeyControlBlock(
                      *(_QWORD *)(v239 + 48),
                      0xFFFFFFFFLL,
                      v12,
                      *(_QWORD *)(v239 + 80),
                      1,
                      v159,
                      TransactionId,
                      0,
                      v264);
          *(_WORD *)(v12 + 186) &= ~2u;
          v83 = KeyBody;
          if ( KeyBody < 0 )
          {
            v82 = 0x2000;
            v84 = v169;
            goto LABEL_132;
          }
          v170 = v12;
          v12 = v264[0];
          BugCheckParameter3 = v264[0];
          CmpDereferenceKeyControlBlockUnsafe(v170);
          CmpUnlockHashEntryByKcb(v170);
          HIBYTE(v237) = 0;
          v171 = CmpStartKcbStackForTopLayerKcb((__int64)&ApcState, v12);
          KeyBody = v171;
          if ( v171 < 0 )
          {
            v83 = v171;
            v82 = 8448;
            goto LABEL_131;
          }
          *(_WORD *)(v170 + 186) |= 2u;
          CmpLockKcbStackTopExclusiveRestShared((__int64)&ApcState);
          v172 = v247;
          v173 = v239;
          *(_WORD *)(v170 + 186) &= ~2u;
          v241[1] = 1;
          v174 = CmpCreateKeyBody(v12, v240, v173, (__int64)v172, 3, (__int64)&ApcState, (ULONG_PTR **)&Object, v241);
          KeyBody = v174;
          if ( v174 < 0 )
          {
            CmpRecordParseFailure(v239, 8576, v174);
            v33 = v238;
            v85 = v232;
            v86 = v246;
LABEL_266:
            CmpUnlockKcbStack((__int64)&ApcState);
            goto LABEL_133;
          }
          HvLockHiveFlusherShared(*(_QWORD *)(v170 + 32));
          HvLockHiveFlusherExclusive(*(_QWORD *)(v12 + 32));
          v175 = *(_QWORD *)(v12 + 32);
          v176 = *(_DWORD *)(v175 + 104);
          v177 = HvpMarkCellDirty(v175, *v165);
          KeyBody = v177;
          if ( v177 >= 0 )
          {
            KeyBody = CmpCreateChild(v244[0], (_DWORD)v68, (_DWORD)v253, v159, v239, 10, 0, 1, (__int64)v247);
            if ( KeyBody >= 0 )
            {
              v178 = BugCheckParameter3;
              v179 = v239;
              v180 = BugCheckParameter3;
              *(_DWORD *)(BugCheckParameter3 + 40) = *(_DWORD *)(v239 + 40);
              *(_DWORD *)(CmpGetKeyNodeForKcb(v180, &v262, 1LL) + 16) = *(_DWORD *)(v170 + 40);
              ++*(_QWORD *)(v178 + 304);
              CmpRebuildKcbCacheFromNode(v178);
              v181 = *(_QWORD *)(v178 + 32);
              if ( (*(_BYTE *)(v181 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v181, &v262);
              else
                HvpReleaseCellPaged(v181, &v262);
              v136 = v176 == 0;
              v12 = BugCheckParameter3;
              if ( v136 )
                HvResetDirtyData(*(_QWORD *)(BugCheckParameter3 + 32));
              HvUnlockHiveFlusherExclusive(*(_QWORD *)(v12 + 32));
              HvUnlockHiveFlusherShared(*(_QWORD *)(v170 + 32));
              *(_WORD *)(v170 + 8) |= 8u;
              CmpReferenceKeyControlBlockUnsafe(v12);
              *(_QWORD *)(v170 + 104) = v12;
              CmpUnlockHashEntry(*(PVOID *)(v179 + 48), 0);
              v129 = v247;
              v156 = 0;
              *(_DWORD *)(v179 + 32) = 1;
              v86 = v246;
              v241[2] = 0;
              goto LABEL_407;
            }
          }
          else
          {
            CmpRecordParseFailure(v239, 8704, v177);
          }
          v12 = BugCheckParameter3;
          HvUnlockHiveFlusherExclusive(*(_QWORD *)(BugCheckParameter3 + 32));
          HvUnlockHiveFlusherShared(*(_QWORD *)(v170 + 32));
          v86 = v246;
          v87 = 1;
          v256 = 0LL;
LABEL_135:
          v33 = v238;
          v85 = v232;
          if ( !v87 )
            goto LABEL_133;
          goto LABEL_266;
        }
        v86 = v246;
        v153 = 6656;
      }
      v154 = -1073740763;
      if ( (*(_BYTE *)(v86 + 48) & 1) == 0 )
        v154 = -1073741444;
      KeyBody = v154;
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
      v84 = v239;
LABEL_132:
      CmpRecordParseFailure(v84, v82, v83);
      v33 = v238;
      v85 = v232;
      v86 = v246;
LABEL_133:
      CmpUnlockKcbStack((__int64)v68);
LABEL_137:
      v88 = *(_QWORD *)v244;
LABEL_138:
      if ( v234 )
        CmpUnlockKcbStack(v88);
      v37 = v239;
LABEL_141:
      if ( (_BYTE)v237 )
        CmpUnlockKcb(*(_QWORD *)(v86 + 8));
      if ( v241[2] )
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
          || (v12 = v245, (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread())
          || *(_QWORD *)(v245 + 32) != CmpMasterHive
          || (*(_DWORD *)(v245 + 8) & 0x7FE00000) != 0x600000
          || (__int16)v70 <= 0
          || (v146 = CmpGetComponentNameAtIndex(v248, (unsigned int)((__int16)v70 - 1)),
              !(unsigned __int8)CmpWaitForHiveMount(v146, v147, v148, v239 + 136)) )
        {
          v82 = 4096;
          goto LABEL_130;
        }
        v82 = 3840;
        KeyBody = 259;
        v83 = 259;
        v84 = v239;
        *(_DWORD *)v239 |= 0x100u;
        goto LABEL_132;
      }
      if ( *(_DWORD *)(v73 + 40) != -1 )
        break;
      --v72;
    }
    if ( v247 )
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
      v37 = v239;
      v110 = CmpGetSymbolicLinkTarget(
               (_DWORD)v68,
               (int)v239 + 216,
               (unsigned __int16)v70,
               (unsigned __int16)v29,
               v74,
               v239,
               (__int64)&v266,
               (__int64)String2,
               v239 + 88,
               (__int64)v260);
      KeyBody = v110;
      if ( v110 < 0 )
      {
        CmpRecordParseFailure(v37, 4608, v110);
        goto LABEL_286;
      }
      *(_DWORD *)v37 &= ~8u;
      if ( !*(_QWORD *)(v37 + 64) )
      {
        v111 = *(_QWORD *)(v260[0] + 32LL);
        if ( (*(_DWORD *)(v111 + 4112) & 1) != 0 )
          *(_QWORD *)(v37 + 64) = v111;
      }
      v112 = *(unsigned __int8 *)(v37 + 426);
      v33 = v238;
      v85 = v232;
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
        v77 = (char *)(*((_QWORD *)v248 + 20) + 16 * ((unsigned int)(v75 - 8) + 6LL));
        v76 = *(_DWORD *)(*((_QWORD *)v248 + 20) + 4LL * (unsigned int)(v75 - 8));
      }
      else
      {
        v76 = *((_DWORD *)v248 + v75);
        v77 = (char *)v248 + 16 * (unsigned int)v75 + 32;
      }
      v78 = (*(_DWORD *)v239 & 1) != 0 && (_DWORD)v75 == v71 - 1;
      LODWORD(v231) = v76 + 37 * *(_DWORD *)(v12 + 16);
      KeyBody = CmpWalkOneLevel(
                  v12,
                  (int)v68,
                  (int)v263,
                  (int)v69,
                  (__int64)&v243,
                  (__int64)v77,
                  v76,
                  v231,
                  (__int64)v247,
                  v78,
                  v239);
      if ( KeyBody == -1073741772 && CmpLoadingSystemHivesActive )
      {
        v12 = v245;
        if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() && *(_QWORD *)(v245 + 32) == CmpMasterHive )
        {
          if ( (*(_DWORD *)(v245 + 8) & 0x7FE00000) == 0x600000 && (__int16)v70 > 0 )
          {
            v103 = CmpGetComponentNameAtIndex(v248, (unsigned int)((__int16)v70 - 1));
            v104 = (_DWORD *)v239;
            if ( (unsigned __int8)CmpWaitForHiveMount(v103, v105, v106, v239 + 136) )
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
            v104 = (_DWORD *)v239;
          }
          if ( (*(_DWORD *)(v12 + 8) & 0x7FE00000) == 0x400000 )
          {
            v107 = CmpGetComponentNameAtIndex(v104 + 54, (unsigned int)(__int16)v70);
            if ( (unsigned __int8)CmpWaitForHiveMount(v107, v108, v109, v104 + 34) )
            {
              v37 = v239;
              KeyBody = 259;
              v152 = v239;
              *(_DWORD *)v239 |= 0x100u;
              CmpRecordParseFailure(v152, 5376, 259);
              goto LABEL_286;
            }
          }
        }
        v29 = *(_WORD *)&v241[7];
        v247 = v249;
      }
      if ( KeyBody >= 0 )
      {
        v79 = v239;
        v80 = *(_QWORD *)v263;
        ++*(_BYTE *)(v239 + 425);
        *(_QWORD *)(v79 + 408) = v80;
        *(_QWORD *)(v79 + 416) = v80;
        CmpDereferenceKeyControlBlockUnsafe(v12);
        v12 = v80;
        v245 = v80;
        HIWORD(v70) = HIWORD(v242);
        HIBYTE(v237) = v243;
        LOWORD(v70) = v242 + 1;
        v81 = v68;
        *(_QWORD *)v263 = 0LL;
        v68 = (__int64 *)v69;
        LOBYTE(v243) = 0;
        v69 = (int *)v81;
        v242 = v70;
        continue;
      }
      v37 = v239;
      CmpRecordParseFailure(v239, 5504, KeyBody);
      v85 = v232;
      v33 = v238;
    }
    break;
  }
LABEL_145:
  v89 = (void *)v256;
  if ( HIBYTE(v237) )
    CmpUnlockHashEntryByKcb(v12);
  if ( v85 )
    CmpUnlockHashEntryByKcb(v33);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v271[1] )
    CmSiFreeMemory(v271[1]);
  if ( ApcState.ApcListHead[1].Blink )
    CmSiFreeMemory((PPRIVILEGE_SET)ApcState.ApcListHead[1].Blink);
  v90 = *(_QWORD *)v263;
  if ( *(_QWORD *)v263 )
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
    v267 = v95;
    v255 = v96;
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
          v96 = v255;
          ++v9;
          v95 = v267;
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
    v37 = v239;
    v93 = v89;
    *(_DWORD *)(v239 + 100) &= ~2u;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v266);
  if ( v233 )
    CmpUnlockRegistry(v122);
  if ( v93 )
  {
    if ( v241[3] && (unsigned __int8)CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(v37, v93);
    CmpFreeTransientPoolWithTag(v93, 0x624E4D43u);
  }
  if ( (*(_DWORD *)(v37 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(v37 + 168);
  if ( Object )
    ObfDereferenceObject(Object);
  CmpCleanupPathInfo(v37 + 216);
  return (unsigned int)KeyBody;
}
