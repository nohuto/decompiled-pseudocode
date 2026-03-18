/*
 * XREFs of ExAllocateHeapPool @ 0x1402DAB20
 * Callers:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402DAA60 (ExpAllocatePoolWithTagFromNode.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     MmDeterminePoolType @ 0x1402DAA10 (MmDeterminePoolType.c)
 *     ExpFreePoolChecks @ 0x1402DE730 (ExpFreePoolChecks.c)
 *     RtlpHpFreeHeap @ 0x1402DE7F0 (RtlpHpFreeHeap.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402E0260 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpHpLfhContextFree @ 0x1402E04D0 (RtlpHpLfhContextFree.c)
 *     ExpPoolTrackerReturnLimit @ 0x1402E0770 (ExpPoolTrackerReturnLimit.c)
 *     RtlpHpVsContextFree @ 0x1402E0830 (RtlpHpVsContextFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402E0DA0 (RtlpHpSegPageRangeShrink.c)
 *     ExpFreeHeapSpecialPool @ 0x1402F7C14 (ExpFreeHeapSpecialPool.c)
 *     KasanPoolAllocate @ 0x1402F8790 (KasanPoolAllocate.c)
 *     RtlpHpAllocateHeapBackend @ 0x1402F89B0 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpSegAlloc @ 0x1402F89EC (RtlpHpSegAlloc.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402FA31C (RtlpHpVaMgrCtxQuery.c)
 *     ExpAddTagForBigPages @ 0x1402FCDC0 (ExpAddTagForBigPages.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpPlFindLimitEntry @ 0x1402FE01C (ExpPlFindLimitEntry.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1402FE0E0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpPoolTrackerChargeEntry @ 0x1402FE260 (ExpPoolTrackerChargeEntry.c)
 *     ExpTrackTableGetMoreLimit @ 0x1402FE32C (ExpTrackTableGetMoreLimit.c)
 *     EtwTracePool @ 0x1402FE3D8 (EtwTracePool.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1403BBC64 (RtlpHpEnvCompactionSchedule.c)
 *     ExpCheckForWorker @ 0x1403BD890 (ExpCheckForWorker.c)
 *     PspReturnResourceQuota @ 0x1403C651C (PspReturnResourceQuota.c)
 *     ExIsSpecialPoolAddress @ 0x1403C6C50 (ExIsSpecialPoolAddress.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1403C7D9C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1403C870C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1403CA350 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpVsContextAllocate @ 0x1403CA760 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x1403CAA94 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1403CAEB8 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLargeFree @ 0x1403CB4FC (RtlpHpLargeFree.c)
 *     ExCheckSingleFilter @ 0x1403F904C (ExCheckSingleFilter.c)
 *     RtlpHpVsContextMultiAlloc @ 0x14043C778 (RtlpHpVsContextMultiAlloc.c)
 *     FREE_CHECK_ERESOURCE @ 0x1404925E0 (FREE_CHECK_ERESOURCE.c)
 *     ExpCheckForLookaside @ 0x140499B14 (ExpCheckForLookaside.c)
 *     ExpTrackTableReturnLimit @ 0x1404A579C (ExpTrackTableReturnLimit.c)
 *     KeCheckForTimer @ 0x1404CEE18 (KeCheckForTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2D18 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404F87B0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1406A8670 (InterlockedPushListSList.c)
 *     RtlHeapZero @ 0x1406A9C60 (RtlHeapZero.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140B64240 (ExpPoolFlagsToPoolType.c)
 *     ViFreeTrackedPool @ 0x140B98FF0 (ViFreeTrackedPool.c)
 *     VfPtFreePoolNotification @ 0x140B99718 (VfPtFreePoolNotification.c)
 */

ULONG_PTR __fastcall ExAllocateHeapPool(
        ULONG_PTR BugCheckParameter2,
        size_t Size,
        ULONG_PTR BugCheckParameter4,
        unsigned int a4)
{
  ULONG_PTR v4; // r15
  ULONG_PTR v5; // r13
  unsigned int v6; // r12d
  unsigned int v7; // r9d
  size_t v8; // r8
  ULONG_PTR v9; // rbx
  ULONG_PTR v10; // r14
  ULONG_PTR v11; // rdi
  __int64 *v12; // rsi
  int v13; // r10d
  unsigned __int64 v14; // rbx
  ULONG_PTR v15; // r9
  char *v16; // r15
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // r14
  int v20; // r14d
  __int64 v21; // rbx
  __int64 *v22; // rbx
  __int64 v23; // r10
  ULONG_PTR v24; // rdx
  char v25; // cl
  ULONG_PTR v26; // r9
  ULONG_PTR v27; // r9
  char v28; // r11
  ULONG_PTR v29; // rdx
  unsigned int v30; // r15d
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r13
  unsigned __int64 v35; // rdx
  signed __int64 v36; // rcx
  ULONG_PTR v37; // rcx
  unsigned int v38; // edi
  unsigned __int8 v39; // dl
  unsigned __int8 CurrentIrql; // al
  char v41; // al
  ULONG_PTR v42; // r12
  ULONG_PTR v43; // rcx
  ULONG_PTR v44; // rsi
  char v45; // r8
  int v46; // ecx
  unsigned int v47; // ebx
  int v48; // edx
  int v49; // edx
  int v50; // ecx
  int v51; // edx
  int v52; // ecx
  int v53; // edi
  __int64 v54; // r14
  __int64 v55; // r8
  __int64 v56; // r11
  unsigned int v57; // edx
  unsigned int v58; // r10d
  int v59; // eax
  __int64 v60; // r9
  unsigned __int8 v61; // di
  __int64 v62; // rdx
  unsigned int k; // edx
  char *v64; // rcx
  int v65; // r9d
  volatile signed __int64 *v66; // r8
  volatile signed __int64 *v67; // rax
  signed __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // r10
  ULONG_PTR v73; // r8
  char v74; // cl
  ULONG_PTR v75; // rdx
  ULONG_PTR v76; // rdx
  ULONG_PTR v77; // r9
  char v78; // r8
  unsigned int v79; // r8d
  volatile signed __int64 *v80; // rdx
  volatile signed __int64 *v81; // rax
  signed __int64 v82; // rcx
  __int64 v83; // r11
  signed __int64 v84; // rax
  unsigned __int64 v85; // r10
  signed __int64 v86; // rbx
  signed __int64 v87; // rtt
  ULONG_PTR v88; // r14
  unsigned __int8 v89; // r15
  signed __int32 v90; // eax
  signed __int32 v91; // ett
  __int64 v92; // r8
  char *v93; // r9
  int v94; // r10d
  unsigned int v95; // edx
  char *v96; // rcx
  signed __int64 v97; // rdx
  int v98; // r14d
  ULONG_PTR v99; // rdi
  __int64 v100; // r14
  __int64 v101; // rdi
  unsigned __int64 v102; // r14
  unsigned __int64 v103; // rsi
  int v104; // r8d
  __int64 v105; // r11
  unsigned int v106; // edx
  unsigned int v107; // r10d
  int v108; // eax
  __int64 v109; // r9
  char v110; // al
  unsigned __int64 v111; // r10
  __int64 v112; // r8
  __int64 v113; // r10
  signed __int64 v114; // rcx
  signed __int64 v115; // rdx
  unsigned __int64 v116; // r8
  __int16 v117; // r14
  ULONG_PTR v118; // rcx
  __int16 v119; // ax
  unsigned int v120; // esi
  ULONG_PTR v121; // rbx
  struct _KPROCESS *v122; // rdi
  ULONG_PTR v123; // r9
  ULONG_PTR v124; // r11
  __int64 v125; // r14
  ULONG_PTR v126; // r12
  unsigned __int64 *v127; // r15
  char v128; // r13
  unsigned __int64 v129; // r14
  unsigned __int64 v130; // rax
  __int64 v131; // r8
  unsigned __int64 v132; // rdx
  ULONG_PTR v133; // r10
  bool v134; // zf
  signed __int64 v135; // rax
  signed __int64 v136; // rsi
  bool v137; // cc
  signed __int64 v138; // rsi
  __int64 v139; // rax
  unsigned __int64 v140; // r14
  unsigned __int64 v141; // r14
  unsigned __int64 v142; // r8
  unsigned __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // r10
  unsigned int v146; // r8d
  unsigned int v147; // r11d
  _QWORD *ExSaPageArray; // r9
  int v149; // edx
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // r10
  __int64 v153; // r8
  __int64 v154; // rdx
  signed __int64 m; // r11
  signed __int64 v156; // rax
  struct _KTHREAD *v157; // r9
  unsigned __int64 v158; // r11
  struct _LIST_ENTRY *v159; // rcx
  unsigned __int64 v160; // rdx
  int v161; // r10d
  __int64 v162; // r8
  unsigned __int64 v163; // rdx
  _QWORD *v164; // rcx
  __int64 v165; // r10
  unsigned int v166; // r14d
  int v167; // r9d
  __int64 v168; // rax
  _QWORD *v169; // r8
  signed __int64 v174; // rax
  unsigned __int64 v175; // rax
  unsigned __int64 v176; // rcx
  __int64 v177; // r11
  __int64 v178; // r10
  int v179; // eax
  unsigned int v180; // edx
  unsigned int v181; // ecx
  int v182; // r9d
  __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rdi
  __int64 v187; // r8
  __int64 v188; // rdx
  signed __int64 v189; // rbx
  signed __int64 v190; // rax
  struct _KTHREAD *v191; // r9
  unsigned __int64 v192; // rdi
  struct _LIST_ENTRY *v193; // rcx
  unsigned __int64 v194; // rdx
  __int64 v195; // r10
  __int64 v196; // r8
  unsigned __int64 v197; // rdx
  unsigned __int64 v198; // rcx
  _QWORD *v199; // r10
  int v200; // r9d
  __int64 v201; // rax
  _QWORD *v202; // r8
  signed __int64 v207; // rax
  int v208; // eax
  __int64 v209; // rax
  int v210; // eax
  __int64 v211; // rax
  __int64 v212; // r11
  __int64 v213; // rcx
  int v214; // edx
  __int64 v215; // r9
  unsigned int v216; // r15d
  __int64 v217; // r13
  int v218; // eax
  __int64 v219; // r12
  int v220; // ecx
  volatile signed __int64 *v221; // r14
  volatile signed __int64 *v222; // rax
  ULONG_PTR v223; // r9
  signed __int64 v224; // r15
  __int64 v225; // r13
  signed __int64 v226; // rax
  unsigned __int64 v227; // rax
  signed __int64 v228; // rtt
  __int64 v229; // rax
  ULONG_PTR v230; // rbx
  ULONG_PTR v231; // rcx
  unsigned __int64 v232; // rtt
  __int64 v233; // r8
  __int64 v234; // rax
  int v235; // eax
  __int64 *v236; // r13
  ULONG_PTR v237; // r12
  unsigned __int64 *v238; // r14
  unsigned __int64 v239; // r15
  unsigned __int64 v240; // rax
  __int64 v241; // r8
  unsigned __int64 v242; // rdx
  ULONG_PTR j; // r10
  signed __int64 v244; // rax
  signed __int64 v245; // rsi
  signed __int64 v246; // rsi
  unsigned __int64 v247; // rax
  volatile signed __int64 *v248; // rcx
  ULONG_PTR v249; // r13
  __int64 HeapBackend; // rax
  __int64 Slow; // r14
  __int64 v252; // r8
  unsigned int v253; // ecx
  int v254; // r14d
  __int64 v255; // r14
  int v256; // eax
  int v257; // r10d
  __int64 v258; // rcx
  unsigned int v259; // r9d
  unsigned int v260; // ecx
  __int64 v261; // rdi
  int v262; // eax
  unsigned __int64 v263; // r10
  __int64 v264; // r13
  ULONG_PTR v265; // r8
  signed __int64 v266; // rax
  unsigned __int64 v267; // rdx
  signed __int64 v268; // rtt
  __int64 v269; // r9
  signed __int64 v270; // rax
  __int64 v271; // r11
  signed __int64 v272; // rax
  signed __int64 v273; // rtt
  signed __int64 v274; // r8
  unsigned __int64 v275; // rtt
  __int64 v276; // r8
  __int64 v277; // rax
  __int64 v278; // rdx
  __int64 v279; // rax
  unsigned __int64 v280; // rdx
  __int64 v281; // rcx
  int v282; // eax
  unsigned __int64 v284; // rax
  unsigned int v285; // eax
  unsigned __int64 v288; // rax
  unsigned int v289; // eax
  ULONG_PTR v291; // rax
  char v292; // dl
  char v293; // cl
  char v294; // r8
  char v295; // cl
  char v296; // dl
  char v297; // cl
  char v298; // dl
  ULONG_PTR v299; // r13
  unsigned int Number; // eax
  unsigned __int64 v301; // r13
  __int64 v302; // r9
  __int64 v303; // r8
  unsigned int v304; // r14d
  unsigned int v305; // r10d
  int v306; // eax
  __int64 v307; // r12
  int v308; // ecx
  volatile signed __int64 *v309; // rdi
  volatile signed __int64 *v310; // rax
  ULONG_PTR v311; // r11
  signed __int64 v312; // r14
  __int64 v313; // r13
  signed __int64 v314; // rax
  unsigned __int64 MoreLimit; // rax
  signed __int64 v316; // rtt
  ULONG_PTR v317; // rdx
  unsigned int v318; // ecx
  ULONG_PTR v319; // r8
  __int64 v320; // rcx
  size_t v321; // r13
  ULONG_PTR v322; // rcx
  ULONG_PTR v323; // rcx
  ULONG_PTR v324; // rbx
  ULONG_PTR v325; // r13
  ULONG_PTR v326; // rax
  int v327; // r11d
  __int64 v328; // rdx
  __int64 v329; // rax
  __int64 v330; // rdx
  __int64 v331; // rax
  __int64 v332; // rdx
  __int64 v333; // rcx
  unsigned __int16 *v334; // rax
  unsigned int v335; // ecx
  int v336; // edx
  int v337; // edx
  char *v338; // r11
  signed __int64 v339; // rax
  unsigned __int64 v340; // r10
  signed __int64 v341; // rbx
  signed __int64 v342; // rtt
  int v343; // edx
  __int64 v344; // rax
  __int64 v345; // rax
  char v346; // bl
  unsigned __int64 v347; // rcx
  size_t v348; // rdx
  unsigned int v349; // r9d
  __int64 v350; // r10
  __int64 v351; // rdx
  __int64 v352; // rax
  signed __int64 v353; // r11
  unsigned int v354; // r8d
  __int64 v355; // rdx
  int v356; // eax
  __int64 v357; // rcx
  int v358; // ebx
  int v359; // eax
  __int64 v360; // r10
  __int64 LimitEntry; // rax
  unsigned __int64 v362; // rdx
  signed __int64 v363; // r8
  int v364; // eax
  ULONG v365; // eax
  int v366; // edx
  unsigned __int64 v367; // r11
  __int64 v368; // rcx
  __int64 v369; // rax
  __int64 v370; // rdx
  __int64 v371; // rax
  __int64 v372; // rdx
  int v373; // edx
  __int64 v374; // rax
  unsigned __int64 v375; // r11
  struct _KTHREAD *CurrentThread; // r9
  __int64 v377; // r10
  unsigned int v378; // eax
  unsigned __int64 v379; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v381; // r8
  unsigned __int64 v382; // rdx
  __int64 v383; // r10
  size_t *v384; // rdx
  __int64 v385; // rax
  unsigned __int64 v386; // r11
  struct _KTHREAD *v387; // r9
  __int64 v388; // r10
  struct _LIST_ENTRY *v389; // rcx
  unsigned __int64 v390; // rdx
  int v391; // edi
  __int64 v392; // r8
  unsigned __int64 v393; // rdx
  int v394; // r9d
  unsigned __int64 v395; // r10
  _QWORD *v396; // rdx
  unsigned __int64 v397; // r8
  signed __int64 v398; // rax
  signed __int64 v399; // rtt
  __int64 v400; // r10
  signed __int64 v401; // rax
  signed __int64 v402; // rax
  signed __int64 v403; // rtt
  unsigned __int64 v404; // rcx
  unsigned __int64 v405; // rcx
  _BYTE *v408; // r8
  int v409; // ecx
  _BYTE *i; // r8
  __int64 v411; // rsi
  _WORD *v412; // rbx
  ULONG_PTR v413; // r14
  unsigned __int8 v414; // cl
  __int64 v415; // rdi
  _BYTE *v416; // rbx
  ULONG_PTR v417; // r12
  _BYTE *v418; // r13
  size_t v419; // r12
  size_t v420; // r8
  void *v421; // rcx
  _BYTE *v422; // r15
  ULONG_PTR v423; // rdi
  size_t v424; // rdi
  ULONG_PTR v434; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v435; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v436; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v437; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v438; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v439; // [rsp+30h] [rbp-D0h]
  __int16 v440; // [rsp+38h] [rbp-C8h]
  ULONG_PTR v441; // [rsp+38h] [rbp-C8h]
  int v442; // [rsp+40h] [rbp-C0h]
  int v443; // [rsp+40h] [rbp-C0h]
  ULONG_PTR v444; // [rsp+40h] [rbp-C0h]
  char v445; // [rsp+48h] [rbp-B8h] BYREF
  char v446; // [rsp+49h] [rbp-B7h] BYREF
  char v447; // [rsp+4Ah] [rbp-B6h] BYREF
  char v448; // [rsp+4Bh] [rbp-B5h] BYREF
  char v449; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v450; // [rsp+50h] [rbp-B0h]
  __int64 v451; // [rsp+58h] [rbp-A8h]
  char v452; // [rsp+60h] [rbp-A0h] BYREF
  char v453; // [rsp+61h] [rbp-9Fh] BYREF
  char v454; // [rsp+62h] [rbp-9Eh] BYREF
  char v455; // [rsp+63h] [rbp-9Dh] BYREF
  char v456[4]; // [rsp+64h] [rbp-9Ch] BYREF
  int v457; // [rsp+68h] [rbp-98h]
  unsigned __int64 v458; // [rsp+70h] [rbp-90h]
  size_t v459; // [rsp+78h] [rbp-88h]
  __int64 v460; // [rsp+80h] [rbp-80h]
  unsigned int v461; // [rsp+88h] [rbp-78h]
  __int64 v462; // [rsp+90h] [rbp-70h]
  signed __int64 v463; // [rsp+98h] [rbp-68h]
  signed __int64 v464; // [rsp+A0h] [rbp-60h]
  int v465; // [rsp+A8h] [rbp-58h] BYREF
  int v466; // [rsp+ACh] [rbp-54h] BYREF
  int v467; // [rsp+B0h] [rbp-50h] BYREF
  int v468; // [rsp+B4h] [rbp-4Ch]
  int v469; // [rsp+B8h] [rbp-48h] BYREF
  int v470; // [rsp+BCh] [rbp-44h] BYREF
  unsigned int v471; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v472; // [rsp+C8h] [rbp-38h]
  __int64 v473; // [rsp+D0h] [rbp-30h]
  unsigned int v474; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v475[3]; // [rsp+DCh] [rbp-24h] BYREF
  __int64 v476; // [rsp+E8h] [rbp-18h]
  size_t v477; // [rsp+F0h] [rbp-10h]
  size_t *v478; // [rsp+F8h] [rbp-8h] BYREF
  int v479; // [rsp+100h] [rbp+0h]
  int v480; // [rsp+104h] [rbp+4h]
  int v481; // [rsp+108h] [rbp+8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+110h] [rbp+10h] BYREF
  PSLIST_ENTRY ListEnd; // [rsp+128h] [rbp+28h] BYREF
  _DWORD v484[2]; // [rsp+130h] [rbp+30h]
  __int128 v485; // [rsp+138h] [rbp+38h]
  struct _KLOCK_QUEUE_HANDLE v486; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v487; // [rsp+160h] [rbp+60h] BYREF
  int v488; // [rsp+178h] [rbp+78h]
  void *v489; // [rsp+180h] [rbp+80h]
  __int64 v490; // [rsp+188h] [rbp+88h]
  int *v491; // [rsp+190h] [rbp+90h]
  struct _KLOCK_QUEUE_HANDLE v492; // [rsp+198h] [rbp+98h] BYREF
  __int128 v493; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v494; // [rsp+1C0h] [rbp+C0h]
  __int64 v495; // [rsp+1D0h] [rbp+D0h]
  _UNKNOWN *retaddr; // [rsp+228h] [rbp+128h]
  __int64 *SchedulingGroup; // [rsp+230h] [rbp+130h]
  unsigned int v498; // [rsp+230h] [rbp+130h]
  __int64 v499; // [rsp+230h] [rbp+130h]
  unsigned __int8 v500; // [rsp+230h] [rbp+130h]
  unsigned int v501; // [rsp+230h] [rbp+130h]
  __int64 v502; // [rsp+230h] [rbp+130h]
  unsigned __int8 v503; // [rsp+230h] [rbp+130h]
  unsigned int v504; // [rsp+230h] [rbp+130h]
  int v505; // [rsp+230h] [rbp+130h]
  char v506; // [rsp+230h] [rbp+130h]
  unsigned int v507; // [rsp+230h] [rbp+130h]
  int v508; // [rsp+230h] [rbp+130h]
  unsigned int v509; // [rsp+230h] [rbp+130h]
  unsigned int v510; // [rsp+230h] [rbp+130h]
  ULONG_PTR BugCheckParameter3; // [rsp+238h] [rbp+138h]
  ULONG_PTR BugCheckParameter3a; // [rsp+238h] [rbp+138h]
  int BugCheckParameter3b; // [rsp+238h] [rbp+138h]
  int BugCheckParameter3c; // [rsp+238h] [rbp+138h]
  ULONG_PTR BugCheckParameter3d; // [rsp+238h] [rbp+138h]
  unsigned int BugCheckParameter3e; // [rsp+238h] [rbp+138h]
  unsigned int BugCheckParameter3f; // [rsp+238h] [rbp+138h]
  ULONG_PTR BugCheckParameter3g; // [rsp+238h] [rbp+138h]
  ULONG_PTR BugCheckParameter3h; // [rsp+238h] [rbp+138h]
  ULONG_PTR BugCheckParameter3i; // [rsp+238h] [rbp+138h]
  ULONG_PTR BugCheckParameter3j; // [rsp+238h] [rbp+138h]
  int BugCheckParameter3k; // [rsp+238h] [rbp+138h]
  unsigned int v523; // [rsp+240h] [rbp+140h]

  v523 = BugCheckParameter4;
  v4 = a4;
  v459 = 0LL;
  v468 = 1;
  v5 = BugCheckParameter2 & 2;
  v6 = 2;
  v7 = BugCheckParameter4;
  v8 = (unsigned int)ExpPoolFlags;
  if ( (BugCheckParameter2 & 2) != 0 )
    v6 = 0;
  v9 = BugCheckParameter2 & 0xFFFFFFFFFFFFFFF7uLL;
  v10 = Size;
  v11 = 0LL;
  if ( (BugCheckParameter2 & 0x408) != 0x408 )
    v9 = BugCheckParameter2;
  v440 = v9;
  if ( (v9 & 0x140) == 0 && (ExpPoolFlags & 0x400) != 0 )
  {
    v9 = v9 & 0xFFFFFFFFFFFFFF3FuLL | 0x40;
    v440 = v9;
  }
  v12 = qword_140EEE980;
  v13 = 4096;
  if ( Size > 0xFE0
    || (!MmSpecialPoolTag
     || !Size
     || !(unsigned int)ExCheckSingleFilter(v7, (unsigned int)MmSpecialPoolTag) && (v367 < v10 + 16 || v367 >= v10 + 32))
    && (v9 & 0x100000000LL) == 0 )
  {
    goto LABEL_10;
  }
  v472 = v9;
  v37 = v9 & 0x1C0;
  v38 = v9;
  if ( v37 == 256 || (v8 & 0x400) == 0 )
  {
    v39 = 1;
    CurrentIrql = KeGetCurrentIrql();
    if ( v37 == 256 )
      goto LABEL_58;
  }
  else
  {
    v38 = v9 & 0xFFFFFF3F | 0x40;
    v472 = v9 & 0xFFFFFFFFFFFFFF3FuLL | 0x40;
    CurrentIrql = KeGetCurrentIrql();
  }
  v39 = 2;
LABEL_58:
  if ( CurrentIrql > v39 )
    KeBugCheckEx(0xC1u, CurrentIrql, v38, v10, 0x30uLL);
  if ( (v38 & 0x10) != 0 )
  {
    v345 = qword_140EEE998;
  }
  else
  {
    if ( (v38 & 0x100) != 0 )
      v344 = 2LL;
    else
      v344 = (v38 & 0x80u) == 0;
    v345 = qword_140EEE980[v344];
  }
  v473 = v345;
  v476 = RtlpHpSegAlloc((int)v345 + 320, v13, v13, v13, 4);
  if ( !v476 )
  {
    v7 = v523;
    v11 = 0LL;
    goto LABEL_10;
  }
  v346 = MEMORY[0xFFFFF78000000320];
  memset_0((void *)(v476 + 16), MEMORY[0xFFFFF78000000320] | 1, 0xFF0uLL);
  v347 = v476;
  v348 = v10 - 8;
  *(_QWORD *)(v476 + 8) = 0LL;
  if ( (v38 & 0x400) == 0 )
    v348 = v10;
  *(_DWORD *)v347 = v348;
  *(_BYTE *)(v347 + 2) = v346 | 1;
  *(_DWORD *)(v347 + 4) = v523;
  v477 = v348;
  if ( (v38 & 0x400) != 0 )
    *(_DWORD *)v347 |= 0x4000u;
  v11 = (v347 - v348 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v472 & 2) == 0 )
  {
    memset_0((void *)((v347 - v348 + 4096) & 0xFFFFFFFFFFFFFFF0uLL), 0, v348);
    v347 = v476;
  }
  v350 = MmDeterminePoolType(v347);
  BugCheckParameter3i = v350;
  v465 = 0;
  v445 = 0;
  v452 = 0;
  v450 = (v351 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  memset(&v492, 0, sizeof(v492));
  if ( v349 == PoolHitTag )
    __debugbreak();
  v352 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v352 = ExpPoolFlagsToPoolType(v350, v350 & 0x10, (unsigned int)&v465, (unsigned int)&v445, (__int64)&v452);
    if ( (int)v352 >= 0 )
    {
      v373 = v465;
      if ( v445 )
      {
        v373 = v465 | 8;
        v465 |= 8u;
      }
      v352 = EtwTracePool(3616, v373, v523, v476, v450);
    }
    v350 = BugCheckParameter3i;
    v349 = v523;
  }
  LODWORD(v352) = KeGetPcr()->Prcb.Number;
  BugCheckParameter3j = v350 & 0xFFFFFFFFFFFFFFFBuLL;
  v462 = PoolTrackTableMask;
  v353 = (signed __int64)*(&ExPoolTagTables + v352);
  v451 = PoolTrackTableSize;
  v464 = v353;
  v354 = PoolTrackTableMask & ((40543 * v349) ^ ((40543 * (unsigned __int64)v349) >> 32));
  v463 = v354;
  v510 = v354;
  while ( 1 )
  {
    v355 = 80LL * v354;
    v356 = *(_DWORD *)(v355 + v353);
    v357 = v355 + v353;
    v472 = v355;
    if ( v356 == v349 )
      break;
    if ( v356 )
    {
LABEL_604:
      v354 = v462 & (v354 + 1);
      v463 = v354;
      if ( v354 == v510 )
      {
        ExpInsertPoolTrackerExpansion(v349, v450, BugCheckParameter3j);
        KasanPoolAllocate(v11 & 0xFFFFFFFFFFFFF000uLL);
        goto LABEL_599;
      }
    }
    else
    {
      v359 = *(_DWORD *)(v355 + PoolTrackTable);
      if ( v359 )
      {
        *(_DWORD *)v357 = v359;
        v360 = *(_QWORD *)(v355 + PoolTrackTable + 72);
        if ( v360 )
          *(_QWORD *)(v357 + 72) = v360;
      }
      else
      {
        if ( v354 == v451 - 1 )
          goto LABEL_604;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v492);
        v460 = v472 + PoolTrackTable;
        if ( !*(_DWORD *)(v472 + PoolTrackTable) )
        {
          LimitEntry = ExpPlFindLimitEntry(v523);
          v362 = v472;
          v363 = v464;
          *(_QWORD *)(v460 + 72) = LimitEntry;
          *(_QWORD *)(v362 + v363 + 72) = LimitEntry;
          *(_DWORD *)(v362 + PoolTrackTable) = v523;
          *(_DWORD *)(v362 + v363) = v523;
        }
        KeReleaseInStackQueuedSpinLock(&v492);
        v349 = v523;
        v354 = v463;
        v353 = v464;
      }
    }
  }
  v358 = ExpPoolTrackerChargeEntry((BugCheckParameter3j & 0x100) == 0, v450, v355 + v353);
  KasanPoolAllocate(v11 & 0xFFFFFFFFFFFFF000uLL);
  if ( !v358 )
  {
    ExpFreeHeapSpecialPool(v473, v11);
    v7 = v523;
    LOWORD(v9) = v440;
    v11 = 0LL;
    goto LABEL_10;
  }
LABEL_599:
  if ( v11 )
  {
    _InterlockedIncrement(&ExpSpecialAllocations);
    return v11;
  }
  v7 = v523;
  LOWORD(v9) = v440;
LABEL_10:
  v441 = v9 & 0xFFF;
  v14 = 1LL;
  if ( v10 )
    v14 = v10;
  v472 = v14;
  if ( (_DWORD)v4 == 0x80000000 )
    goto LABEL_13;
  if ( (unsigned int)v4 >= (unsigned __int16)KeNumberNodes )
    KeBugCheckEx(0xC2u, 0xEuLL, v4, v441 & 0xFFFFFFFFFFFFFDFFuLL, v7);
  if ( (_DWORD)v4 == 0x80000000 )
LABEL_13:
    LODWORD(v4) = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( (unsigned int)v4 >= dword_140E6B950 )
    LODWORD(v4) = 0;
  v15 = v441;
  v16 = (char *)&unk_140E6B980 + 8384 * (unsigned int)v4;
  if ( (v441 & 0x10) != 0 )
  {
    v18 = *((_QWORD *)v16 + 3);
  }
  else
  {
    if ( (v441 & 0x100) != 0 )
      v17 = 2LL;
    else
      v17 = (v441 & 0x80u) == 0LL;
    v18 = *(_QWORD *)&v16[8 * v17];
  }
  if ( v14 <= 0xFE0 )
  {
    v140 = v14 + 16;
    if ( (v441 & 8) != 0 )
    {
      v140 += (unsigned int)ExpCacheLineSize;
      if ( v140 > 0xFE0 )
      {
        v140 -= (unsigned int)ExpCacheLineSize;
        LODWORD(v15) = v441 & 0xFFFFFFF7;
        v441 &= ~8uLL;
      }
    }
    v141 = (v140 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v435 = v141;
    v459 = v141;
    if ( v141 - 513 > 0xD7F
      || (v332 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v141 + 15) >> 4)),
          v141 = (unsigned __int16)RtlpBucketBlockSizes[v332],
          v459 = v141,
          v333 = *(_QWORD *)(v18 + 56),
          v435 = v141,
          v509 = v332 - 33,
          (v451 = v333) == 0) )
    {
LABEL_242:
      v142 = 1LL;
      if ( v141 > 1 )
        v142 = v141;
      v143 = *(unsigned __int16 *)(v18 + 900);
      v458 = v142;
      if ( v142 >= v143 )
      {
        v249 = v435;
        goto LABEL_365;
      }
      v144 = (unsigned int)(v142 + 15) >> 4;
      v145 = (*(_DWORD *)(v18 + 908) >> 4) & 0x1FF;
      v146 = (*(_DWORD *)(v18 + 908) >> 13) & 0x3FFFF;
      v147 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + v144) - 1;
      _BitScanReverse((unsigned int *)&v144, v146);
      ExSaPageArray = KeGetCurrentPrcb()->ExSaPageArray;
      v149 = 1 << v144;
      v150 = (unsigned int)(v144 - 2);
      v480 = v150;
      v498 = v147;
      v151 = *(_QWORD *)(*(_QWORD *)(ExSaPageArray[v150] + 8LL * (v146 ^ v149) + 8) + 8 * v145);
      if ( !v151 )
      {
        v151 = RtlpHpLfhThreadDataInitializeSet(v18 + 832);
        v147 = v498;
      }
      v152 = v18 + 832;
      v462 = v151;
      BugCheckParameter3a = v18 + 832 + ((unsigned __int16)v151 << 6);
      v499 = 2LL * v147;
      v451 = BugCheckParameter3a + v499;
      v153 = *(unsigned __int16 *)(BugCheckParameter3a + v499);
      if ( !*(_WORD *)(BugCheckParameter3a + v499) )
      {
        if ( !RtlpHpLfhBucketCheckAndUpdate(v18 + 832, v147, v153) )
        {
          v249 = v435;
LABEL_364:
          v142 = v458;
LABEL_365:
          if ( v142 > 0x20000 )
          {
            if ( v142 > *(unsigned int *)(v18 + 528) )
              HeapBackend = RtlpHpLargeAlloc(v18, v249, v142, v6);
            else
              HeapBackend = RtlpHpAllocateHeapBackend(v18, v249, v142, v6);
          }
          else
          {
            HeapBackend = RtlpHpVsContextAllocate(v18 + 704, (unsigned int)v249, v142, v6);
          }
          Slow = HeapBackend;
          v444 = HeapBackend;
LABEL_368:
          if ( !Slow )
            goto LABEL_371;
          v15 = v441;
LABEL_370:
          v11 = Slow;
          v291 = v15 & 0x1C0;
          if ( v291 == 256 )
          {
            v292 = 1;
            if ( (v15 & 0x10) != 0 )
              v292 = 1;
            goto LABEL_466;
          }
          v326 = v291 - 64;
          if ( !v326 )
          {
            v292 = 0;
LABEL_466:
            v293 = v292 | 0x20;
            if ( (v15 & 4) == 0 )
              v293 = v292;
            v294 = v293;
            if ( (v15 & 2) != 0 )
              v294 = v293;
            if ( (v15 & 0x100000629LL) != 0 )
            {
              v295 = v294 | 4;
              if ( (v15 & 8) == 0 )
                v295 = v294;
              v296 = v295 | 0x80;
              if ( (v15 & 0x200) == 0 )
                v296 = v295;
              v297 = v296 | 0x40;
              if ( (v15 & 0x400) == 0 )
                v297 = v296;
              v294 = v297;
              if ( (v15 & 1) != 0 )
              {
                v294 = v297 | 8;
                if ( (v15 & 0x20) != 0 )
                  v294 = v297;
              }
              else if ( (v15 & 0x20) != 0 )
              {
                v294 = v297 | 0x10;
              }
            }
            *(_DWORD *)(Slow + 4) = v523;
            *(_BYTE *)Slow = 0;
            *(_BYTE *)(Slow + 2) = v459 >> 4;
            v298 = v294 | 8;
            if ( (v15 & 1) == 0 )
              v298 = v294;
            v467 = 0;
            v447 = 0;
            *(_BYTE *)(Slow + 3) = v298 & 0x6D | 2;
            v299 = v15 & 0x3CD;
            v454 = 0;
            BugCheckParameter3g = v459;
            memset(&v487, 0, sizeof(v487));
            if ( v523 == PoolHitTag )
              __debugbreak();
            if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
              && (int)ExpPoolFlagsToPoolType(v299, 0, (unsigned int)&v467, (unsigned int)&v447, (__int64)&v454) >= 0 )
            {
              v336 = v467;
              if ( v447 )
              {
                v336 = v467 | 8;
                v467 |= 8u;
              }
              EtwTracePool(3616, v336, v523, Slow + 16, BugCheckParameter3g);
            }
            Number = KeGetPcr()->Prcb.Number;
            v301 = v299 & 0xFFFFFFFFFFFFFFFBuLL;
            v302 = PoolTrackTableMask;
            v458 = PoolTrackTableMask;
            v303 = (__int64)*(&ExPoolTagTables + Number);
            v462 = v303;
            v451 = PoolTrackTableSize;
            v304 = PoolTrackTableMask & ((40543 * v523) ^ ((40543 * (unsigned __int64)v523) >> 32));
            v305 = v304;
            v507 = v304;
            while ( 1 )
            {
              v306 = *(_DWORD *)(v303 + 80LL * v304);
              v307 = v303 + 80LL * v304;
              if ( v306 == v523 )
              {
                if ( (v301 & 0x100) != 0 )
                {
                  v308 = 0;
                  v309 = (volatile signed __int64 *)(v307 + 32);
                  v310 = (volatile signed __int64 *)(v307 + 40);
                }
                else
                {
                  v308 = 1;
                  v309 = (volatile signed __int64 *)(v307 + 8);
                  v310 = (volatile signed __int64 *)(v307 + 16);
                }
                v508 = v308;
                _InterlockedIncrement64(v310);
                v311 = BugCheckParameter3g;
                v312 = _InterlockedExchangeAdd64(v309, BugCheckParameter3g);
                if ( *(_QWORD *)(v307 + 72) )
                {
                  v313 = v307 + 8LL * v308;
                  while ( 1 )
                  {
                    v314 = *(_QWORD *)(v313 + 56);
                    while ( 1 )
                    {
                      v464 = v314;
                      if ( (v314 & 1) != 0 || v314 >= v312 )
                        goto LABEL_501;
                      MoreLimit = ExpTrackTableGetMoreLimit(*(_QWORD *)(v307 + 72), v311, (unsigned int)v308);
                      if ( !MoreLimit )
                      {
                        v20 = 0;
LABEL_502:
                        v317 = v444;
                        if ( (v441 & 8) != 0 )
                        {
                          *(_BYTE *)(v444 + 3) &= ~4u;
                          v318 = (ExpCacheLineSize - 1) & (-16 - v444);
                          if ( v318 )
                          {
                            v319 = v444 + v318;
                            v320 = (__int64)v318 >> 4;
                            *(_BYTE *)v319 = v320;
                            *(_BYTE *)(v319 + 2) = *(_BYTE *)(v444 + 2) - v320;
                            *(_BYTE *)(v319 + 1) = *(_BYTE *)(v444 + 1);
                            *(_BYTE *)(v319 + 3) = *(_BYTE *)(v444 + 3) | 4;
                            *(_DWORD *)(v319 + 4) = *(_DWORD *)(v444 + 4);
                            if ( (unsigned __int8)*(_WORD *)v319 > 1u )
                              *(_QWORD *)(v444 + 16) = ExpPoolQuotaCookie ^ v319;
                            v317 = v319;
                          }
                        }
                        v321 = v459;
                        v322 = v317 + 16;
                        Size = (unsigned __int8)byte_140FCDC68;
                        BugCheckParameter3 = v322;
                        v11 = 0LL;
                        v323 = v322 - (((_BYTE)v322 - (_BYTE)v444) & 7);
                        v8 = v323 - v444;
                        if ( byte_140FCDC68 )
                        {
                          if ( v444 < 0xFFFF800000000000uLL )
                            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v444, 0LL);
                          if ( (v444 & 7) != 0 )
                            KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v444, 8uLL);
                          if ( v323 < v444 )
                            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v444, v323 - v444);
                          v8 = (v8 - (((_BYTE)v8 - 1) & 7) + 7) >> 3;
                          if ( v8 )
                          {
                            LOBYTE(Size) = -115;
                            memset_0((void *)(KasaniShadow + ((v444 + 0x800000000000LL) >> 3)), Size, v8);
                            Size = (unsigned __int8)byte_140FCDC68;
                          }
                        }
                        v15 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFF8uLL;
                        v324 = BugCheckParameter3 + v14 - (BugCheckParameter3 & 0xFFFFFFFFFFFFFFF8uLL);
                        v325 = v444 + v321 - (BugCheckParameter3 & 0xFFFFFFFFFFFFFFF8uLL);
                        if ( (_BYTE)Size )
                        {
                          if ( v15 < 0xFFFF800000000000uLL )
                            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v15, 0LL);
                          if ( v324 > v325 )
                            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v324, v325);
                          if ( v15 + v325 < v15 )
                            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v15, v325);
                          v417 = v325 + (((_BYTE)v324 - 1) & 7) - (unsigned __int64)(((_BYTE)v325 - 1) & 7) - v324;
                          v418 = (_BYTE *)(KasaniShadow + ((v15 + 0x800000000000LL) >> 3));
                          if ( v324 >> 3 )
                          {
                            memset_0((void *)(KasaniShadow + ((v15 + 0x800000000000LL) >> 3)), 0, v324 >> 3);
                            v418 += v324 >> 3;
                          }
                          if ( (v324 & 7) != 0 )
                            *v418++ = v324 & 7;
                          v419 = v417 >> 3;
                          if ( v419 )
                          {
                            v420 = v419;
                            LOBYTE(Size) = -122;
                            v421 = v418;
                            goto LABEL_763;
                          }
                        }
LABEL_26:
                        v21 = v18;
                        if ( !v11 )
                          goto LABEL_32;
LABEL_27:
                        if ( (_WORD)v11 )
                        {
                          v22 = (__int64 *)(v21 + 320);
                        }
                        else
                        {
                          v234 = RtlCSparseBitmapBitmaskRead(&dword_140E68050, 2 * ((v11 - qword_140E68048) >> 20));
                          if ( !v234 || (v235 = v234 - 1, v235 == 2) )
                          {
                            RtlpHpLargeFree(v18, v11);
                            goto LABEL_32;
                          }
                          v22 = (__int64 *)(v18 + 320);
                          if ( v235 == 1 )
                            v22 = (__int64 *)(v18 + 512);
                        }
                        v23 = *v22;
                        v24 = v11 & *v22;
                        if ( (__int64 *)(v24 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v24 + 0x10)) != v22 )
                        {
                          RtlpLogHeapFailure(9, v22[7], v11, 0LL, 0LL, 0LL);
                          goto LABEL_32;
                        }
                        v25 = *((_BYTE *)v22 + 8);
                        v26 = v24 + 32LL * ((unsigned int)(v11 - v24) >> v25);
                        v27 = -32LL * *(unsigned __int8 *)(v26 + 26) + v26;
                        v28 = *(_BYTE *)(v27 + 24);
                        v29 = ((__int64)(v27 - v24) >> 5 << v25) + v24;
                        if ( (v29 == v11) + v28 == 11 )
                        {
                          RtlpHpLfhContextFree(v22[3], v29, v11);
                          goto LABEL_32;
                        }
                        v30 = 0;
                        v475[0] = 0;
                        v35 = ((__int64)(v27 - (v23 & v27)) >> 5 << v25) + (v23 & v27);
                        if ( (v28 & 3) == 3 )
                        {
                          if ( v11 == v35 )
                            goto LABEL_220;
                          if ( v28 == 15 )
                          {
                            if ( v11 > v35 )
                            {
                              if ( (unsigned int)RtlpHpVsContextFree(v22[4], v35, v11, v475) )
                              {
                                Size = v22[3];
                                if ( v475[0] < (unsigned int)*(unsigned __int16 *)(Size + 68) )
                                {
                                  v15 = Size
                                      + 8LL
                                      * ((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                                       + ((unsigned int)(v475[0] + 15) >> 4))
                                       - 1);
                                  do
                                  {
                                    v8 = *(_QWORD *)(v15 + 448);
                                    v36 = v8;
                                    v460 = v8;
                                    if ( (v8 & 1) == 0 )
                                      break;
                                    if ( WORD1(v8) > 1u )
                                    {
                                      WORD1(v460) = WORD1(v8) - 1;
                                      v36 = v460;
                                    }
                                  }
                                  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 448), v36, v8) != v8 );
                                }
                              }
LABEL_33:
                              v11 = BugCheckParameter3;
                              if ( v20 )
                              {
                                v110 = v441;
                                if ( !BugCheckParameter3 )
                                  goto LABEL_167;
                                return v11;
                              }
                              v485 = 0LL;
                              LOWORD(v485) = 259;
                              BYTE2(v485) = 0;
                              if ( (_WORD)BugCheckParameter3 )
                              {
                                v31 = 0;
                                goto LABEL_36;
                              }
                              v229 = RtlCSparseBitmapBitmaskRead(
                                       &dword_140E68050,
                                       2 * ((BugCheckParameter3 - qword_140E68048) >> 20));
                              if ( v229 && (v31 = v229 - 1, v31 != 2) )
                              {
LABEL_36:
                                v32 = v31;
                                v484[0] = 0x100000;
                                v484[1] = 0x1000000;
                                v33 = BugCheckParameter3 & ~((unsigned int)v484[v31] - 1LL);
                                v34 = (v33 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v33 + 16)) - 192 * v32 - 320;
                              }
                              else
                              {
                                v493 = 0LL;
                                v494 = 0LL;
                                RtlpHpVaMgrCtxQuery(&unk_140E68098, BugCheckParameter3, &v493);
                                v495 = v494;
                                v488 = DWORD2(v494);
                                v34 = *(_QWORD *)v494;
                              }
                              v450 = v34;
                              if ( !v34 )
                                KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
                              if ( ExpSpecialAllocations )
                              {
                                while ( (__int64)v12 < (__int64)qword_140EEE9A0 )
                                {
                                  if ( v34 == *v12 )
                                  {
                                    _InterlockedDecrement(&ExpSpecialAllocations);
                                    v411 = MmDeterminePoolType(BugCheckParameter3);
                                    v412 = (_WORD *)(BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL);
                                    if ( byte_140FCDC68 )
                                    {
                                      if ( (unsigned __int64)v412 < 0xFFFF800000000000uLL )
                                        KeBugCheckEx(
                                          0x1F1u,
                                          2uLL,
                                          1uLL,
                                          BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL,
                                          0LL);
                                      if ( v412 + 2048 < v412 )
                                        KeBugCheckEx(
                                          0x1F1u,
                                          2uLL,
                                          3uLL,
                                          BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL,
                                          0x1000uLL);
                                      memset_0(
                                        (void *)(KasaniShadow + ((unsigned __int64)(v412 + 0x400000000000LL) >> 3)),
                                        0,
                                        0x200uLL);
                                    }
                                    v413 = 4096 - (unsigned int)(BugCheckParameter3 & 0xFFF);
                                    ExpFreePoolChecks(BugCheckParameter3, BugCheckParameter3);
                                    v414 = KeGetCurrentIrql();
                                    if ( v414 > (unsigned __int8)(((v411 & 0x100) == 0) + 1) )
                                      KeBugCheckEx(0xC1u, v414, 0x100uLL, BugCheckParameter3, 0x31uLL);
                                    v415 = *v412 & 0x1FFF;
                                    if ( ((v415 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != v413 )
                                      KeBugCheckEx(0xC1u, BugCheckParameter3, *v412 & 0x1FFF, v413, 0x21uLL);
                                    v408 = v412 + 8;
                                    v409 = HIWORD(*(_DWORD *)v412);
                                    if ( (*(_DWORD *)v412 & 0x4000) != 0 )
                                      v408 = v412 + 12;
                                    while ( (unsigned __int64)v408 < BugCheckParameter3 )
                                    {
                                      if ( *v408 != (_BYTE)v409 )
                                        KeBugCheckEx(
                                          0xC1u,
                                          BugCheckParameter3,
                                          (ULONG_PTR)v408,
                                          *(unsigned int *)v412,
                                          0x23uLL);
                                      ++v408;
                                    }
                                    for ( i = (_BYTE *)(v415 + BugCheckParameter3);
                                          (unsigned __int64)i < ((BugCheckParameter3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
                                          ++i )
                                    {
                                      if ( *i != (_BYTE)v409 )
                                        KeBugCheckEx(
                                          0xC1u,
                                          BugCheckParameter3,
                                          (ULONG_PTR)i,
                                          *(unsigned int *)v412,
                                          0x24uLL);
                                    }
                                    if ( (*(_DWORD *)v412 & 0x4000) != 0 )
                                      ViFreeTrackedPool(BugCheckParameter3, *v412 & 0x1FFF);
                                    v100 = v415 + 15;
                                    v101 = *(unsigned int *)((BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL) + 4);
                                    v102 = v100 & 0xFFFFFFFFFFFFFFF0uLL;
                                    v469 = 0;
                                    v448 = 0;
                                    v455 = 0;
                                    if ( (_DWORD)v101 == PoolHitTag )
                                      __debugbreak();
                                    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
                                      && (int)ExpPoolFlagsToPoolType(
                                                v411,
                                                v411 & 0x10,
                                                (unsigned int)&v469,
                                                (unsigned int)&v448,
                                                (__int64)&v455) >= 0 )
                                    {
                                      v343 = v469;
                                      if ( v448 )
                                      {
                                        v343 = v469 | 8;
                                        v469 |= 8u;
                                      }
                                      EtwTracePool(3618, v343, v101, BugCheckParameter3, v102);
                                    }
                                    v103 = v411 & 0xFFFFFFFFFFFFFFFBuLL;
                                    v104 = PoolTrackTableMask;
                                    v105 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
                                    v106 = PoolTrackTableMask & ((40543 * v101) ^ ((unsigned __int64)(40543 * v101) >> 32));
                                    v107 = v106;
                                    while ( 1 )
                                    {
                                      v108 = *(_DWORD *)(v105 + 80LL * v106);
                                      v109 = v105 + 80LL * v106;
                                      if ( v108 == (_DWORD)v101 )
                                        break;
                                      if ( v108 || (v210 = *(_DWORD *)(PoolTrackTable + 80LL * v106)) == 0 )
                                      {
                                        v106 = v104 & (v106 + 1);
                                        if ( v106 == v107 )
                                        {
                                          ExpRemovePoolTrackerExpansion((unsigned int)v101, v102, v103, v109);
                                          goto LABEL_165;
                                        }
                                      }
                                      else
                                      {
                                        *(_DWORD *)v109 = v210;
                                        v211 = *(_QWORD *)(PoolTrackTable + 80LL * v106 + 72);
                                        if ( v211 )
                                          *(_QWORD *)(v109 + 72) = v211;
                                      }
                                    }
                                    ExpPoolTrackerReturnLimit((v103 & 0x100) == 0, v102, v105 + 80LL * v106);
LABEL_165:
                                    RtlpHpFreeHeap(v34, v412);
                                    goto LABEL_166;
                                  }
                                  ++v12;
                                }
                              }
                              if ( (BugCheckParameter3 & 0xFFF) != 0 )
                              {
                                v41 = *(_BYTE *)(BugCheckParameter3 - 13);
                                v42 = BugCheckParameter3 - 16;
                                v460 = BugCheckParameter3 - 16;
                                v43 = BugCheckParameter3 - 16;
                                if ( (v41 & 8) == 0 )
                                  goto LABEL_63;
                                if ( (v41 & 4) != 0 )
                                  v43 -= 16LL * (unsigned __int8)*(_WORD *)v42;
                                if ( !(v43 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v43 + 8))
                                  || (v43 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v43 + 8)) == 0xFFFFFFFFFFFFFFFFuLL
                                  || ExpSpecialAllocations
                                  && (unsigned int)ExIsSpecialPoolAddress(BugCheckParameter3, Size, v8, v15) )
                                {
                                  goto LABEL_63;
                                }
                                v116 = 0xFFFF800000000000uLL;
                                if ( BugCheckParameter3 >= 0xFFFF800000000000uLL
                                  && byte_140E38768[((BugCheckParameter3 >> 39) & 0x1FF) - 256] == 5 )
                                {
                                  v117 = 256;
                                }
                                else
                                {
                                  v117 = 64;
                                }
                                v118 = BugCheckParameter3 - 16;
                                if ( (*(_BYTE *)(BugCheckParameter3 - 13) & 4) != 0 )
                                  v118 -= 16LL * (unsigned __int8)*(_WORD *)v118;
                                v119 = *(_WORD *)(v118 + 2);
                                v120 = *(_DWORD *)(v118 + 4);
                                v121 = 16LL * (unsigned __int8)v119;
                                if ( (v119 & 0x800) == 0 )
                                {
LABEL_63:
                                  v44 = BugCheckParameter3;
                                }
                                else
                                {
                                  v122 = (struct _KPROCESS *)(*(_QWORD *)(v118 + 8) ^ ExpPoolQuotaCookie ^ v118);
                                  *(_QWORD *)(v118 + 8) = ExpPoolQuotaCookie ^ v118;
                                  v123 = v441;
                                  v124 = BugCheckParameter3;
                                  if ( v122 )
                                  {
                                    if ( v122 != (struct _KPROCESS *)-1LL )
                                    {
                                      if ( (unsigned __int64)v122 < 0xFFFF800000000000uLL
                                        || (v122->Header.Type & 0x7F) != 3 )
                                      {
                                        if ( v118 )
                                          v30 = v120;
                                        KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter3, v30, (ULONG_PTR)v122);
                                      }
                                      v125 = v117 & 0x100;
                                      if ( v122 != PsInitialSystemProcess )
                                      {
                                        v126 = v125 != 0;
                                        v127 = (unsigned __int64 *)(&v122[1].SchedulingGroup->Policy + 16 * v126);
                                        SchedulingGroup = (__int64 *)v122[1].SchedulingGroup;
                                        v128 = PspResourceFlags[8 * v126];
                                        _m_prefetchw(v127);
                                        v129 = *v127;
                                        v130 = v127[8];
                                        if ( v127[10] )
                                        {
                                          v131 = 7 * v126;
                                          if ( v130 > v129 )
                                          {
                                            v132 = qword_140F05468[v131];
                                            if ( v130 - v129 > v132 )
                                            {
                                              if ( v132 > v121 )
                                                v132 = v121;
                                              v232 = v127[8];
                                              if ( v232 == _InterlockedCompareExchange64(
                                                             (volatile signed __int64 *)v127 + 8,
                                                             v130 - v132,
                                                             v130)
                                                && _InterlockedExchangeAdd64((volatile signed __int64 *)v127 + 9, v132)
                                                 + v132 > qword_140F05468[v131] )
                                              {
                                                v233 = _InterlockedExchange64((volatile __int64 *)v127 + 9, 0LL);
                                                if ( v233 )
                                                {
                                                  PspReturnResourceQuota((unsigned int)v126, v127, v233, 0LL);
                                                  v124 = BugCheckParameter3;
                                                }
                                              }
                                            }
                                          }
                                        }
                                        BugCheckParameter3 = v124;
                                        v133 = v126 << 7;
                                        v123 = v121;
                                        while ( 1 )
                                        {
                                          do
                                          {
                                            v116 = v129;
                                            if ( v121 < v129 )
                                              v116 = v121;
                                            Size = 0LL;
                                            if ( v121 < v129 )
                                              Size = v129 - v121;
                                            v135 = _InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)v127,
                                                     Size,
                                                     v129);
                                            v134 = v129 == v135;
                                            v129 = v135;
                                          }
                                          while ( !v134 );
                                          v121 -= v116;
                                          if ( !v121 )
                                            break;
                                          if ( SchedulingGroup == &PspSystemQuotaBlock )
                                            KeBugCheckEx(0x21u, (ULONG_PTR)v122, v126, v123, v121);
                                          SchedulingGroup = &PspSystemQuotaBlock;
                                          v127 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v133);
                                          _m_prefetchw((char *)&PspSystemQuotaBlock + v133);
                                          v129 = *(__int64 *)((char *)&PspSystemQuotaBlock + v133);
                                        }
                                        v134 = (v128 & 4) == 0;
                                        v34 = v450;
                                        if ( !v134 )
                                        {
                                          v123 = -(__int64)v123;
                                          _InterlockedAdd64(
                                            (volatile signed __int64 *)&v122[1].ThreadListHead.Blink + v126,
                                            v123);
                                        }
                                        v42 = v460;
                                      }
                                      if ( ObpTraceFlags )
                                        ObpPushStackInfo((__int64)&v122[-1].ExtendedFeatureDisableMask, 0, 1u, v120);
                                      v136 = _InterlockedExchangeAdd64(
                                               (volatile signed __int64 *)&v122[-1].ExtendedFeatureDisableMask,
                                               0xFFFFFFFFFFFFFFFFuLL);
                                      v137 = v136 <= 1;
                                      v138 = v136 - 1;
                                      if ( v137 )
                                      {
                                        if ( *(_QWORD *)&v122[-1].PrimaryGroup )
                                          KeBugCheckEx(
                                            0x18u,
                                            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v122[-1].CpuPartitionList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v122 - 48) >> 8)],
                                            (ULONG_PTR)v122,
                                            3uLL,
                                            *(_QWORD *)&v122[-1].PrimaryGroup);
                                        if ( v138 < 0 )
                                          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v122, 4uLL, v138);
                                        ObpDeferObjectDeletion(&v122[-1].ExtendedFeatureDisableMask, Size, v116, v123);
                                      }
                                    }
                                    goto LABEL_63;
                                  }
                                  v44 = BugCheckParameter3;
                                }
                                if ( (*(_BYTE *)(v42 + 3) & 4) != 0 )
                                {
                                  v42 -= 16LL * (unsigned __int8)*(_WORD *)v42;
                                  *(_BYTE *)(v42 + 3) |= 4u;
                                }
                                v45 = *(_BYTE *)(v42 + 3);
                                v46 = 256;
                                v47 = *(_DWORD *)(v42 + 4);
                                if ( (v45 & 1) == 0 )
                                  v46 = 128;
                                v48 = v46 | 4;
                                if ( (v45 & 0x20) == 0 )
                                  v48 = v46;
                                v49 = v48 | 2;
                                v442 = v49;
                                if ( (*(_BYTE *)(v42 + 3) & 8) != 0 )
                                {
                                  v49 |= 1u;
                                  v442 = v49;
                                }
                                if ( (v45 & 0xDE) != 0 )
                                {
                                  v50 = v49 | 8;
                                  if ( (v45 & 4) == 0 )
                                    v50 = v49;
                                  v51 = v50 | 0x200;
                                  if ( (v45 & 0x80) == 0 )
                                    v51 = v50;
                                  v52 = v51 | 0x400;
                                  if ( (v45 & 0x40) == 0 )
                                    v52 = v51;
                                  v442 = v52;
                                  if ( (*(_BYTE *)(v42 + 3) & 8) == 0 )
                                  {
                                    v442 = v52;
                                    if ( (v45 & 0x10) != 0 )
                                      v442 = v52 | 0x20;
                                  }
                                }
                                v53 = v42 + 16;
                                v54 = 16LL * (unsigned __int8)*(_WORD *)(v42 + 2);
                                v434 = v54;
                              }
                              else
                              {
                                if ( BugCheckParameter3 >= 0xFFFF800000000000uLL
                                  && byte_140E38768[((BugCheckParameter3 >> 39) & 0x1FF) - 256] == 5 )
                                {
                                  v88 = 256LL;
                                }
                                else
                                {
                                  v88 = 64LL;
                                }
                                v489 = 0LL;
                                v490 = 0LL;
                                v491 = 0LL;
                                v89 = KeGetCurrentIrql();
                                __writecr8(2uLL);
                                if ( KiIrqlFlags )
                                  KiRaiseIrqlProcessIrqlFlags(v89);
                                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
                                {
                                  _m_prefetchw(&ExpLargePoolTableLock);
                                  v90 = ExpLargePoolTableLock & 0x7FFFFFFF;
                                  while ( 1 )
                                  {
                                    v91 = v90;
                                    v90 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v90 + 1, v90);
                                    if ( v91 == v90 )
                                      break;
                                    if ( v90 < 0 )
                                    {
                                      ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, v89);
                                      break;
                                    }
                                  }
                                }
                                else
                                {
                                  ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, v89);
                                }
                                v92 = PoolBigPageTableSize;
                                v93 = (char *)PoolBigPageTable;
                                v94 = 1;
                                v95 = (((40543 * (BugCheckParameter3 >> 12)) >> 32) ^ (40543 * (BugCheckParameter3 >> 12))) & (PoolBigPageTableSize - 1);
                                while ( 1 )
                                {
                                  v96 = (char *)PoolBigPageTable + 32 * v95;
                                  if ( *(_QWORD *)v96 == BugCheckParameter3 )
                                    break;
                                  if ( ++v95 >= (unsigned __int64)PoolBigPageTableSize )
                                  {
                                    if ( !v94 )
                                      goto LABEL_145;
                                    v95 = 0;
                                    v94 = 0;
                                  }
                                }
                                if ( !v96 )
LABEL_145:
                                  KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter3, v88, 0LL);
                                v489 = PoolBigPageTable;
                                v491 = &ExpPoolBigEntriesInUse;
                                v490 = PoolBigPageTableSize;
                                v97 = *((_QWORD *)v96 + 2);
                                v47 = *((_DWORD *)v96 + 2);
                                v98 = (*((_DWORD *)v96 + 3) >> 8) & 0xFFF;
                                v434 = v97;
                                v442 = v98;
                                if ( (*((_DWORD *)v96 + 3) & 0x100) != 0 )
                                  v99 = BugCheckParameter3 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v96 + 3);
                                else
                                  v99 = -1LL;
                                _InterlockedExchangeAdd(&ExpPoolBigEntriesInUse, 0xFFFFFFFF);
                                *((_QWORD *)v96 + 3) = 0LL;
                                _InterlockedIncrement64((volatile signed __int64 *)v96);
                                if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                                {
                                  _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
                                  _InterlockedDecrement(&ExpLargePoolTableLock);
                                }
                                else
                                {
                                  ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
                                }
                                if ( KiIrqlFlags )
                                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v89);
                                __writecr8(v89);
                                if ( v99 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
                                {
                                  if ( (PEPROCESS)v99 != PsInitialSystemProcess )
                                  {
                                    v236 = *(__int64 **)(v99 + 760);
                                    v237 = (v98 & 0x100) != 0LL;
                                    v238 = (unsigned __int64 *)&v236[16 * v237];
                                    v506 = PspResourceFlags[8 * v237];
                                    _m_prefetchw(v238);
                                    v239 = *v238;
                                    v240 = v238[8];
                                    if ( v238[10] )
                                    {
                                      v241 = 7 * v237;
                                      if ( v240 > v239 )
                                      {
                                        v242 = qword_140F05468[v241];
                                        if ( v240 - v239 > v242 )
                                        {
                                          if ( v242 > v434 )
                                            v242 = v434;
                                          v275 = v238[8];
                                          if ( v275 == _InterlockedCompareExchange64(
                                                         (volatile signed __int64 *)v238 + 8,
                                                         v240 - v242,
                                                         v240)
                                            && _InterlockedExchangeAdd64((volatile signed __int64 *)v238 + 9, v242)
                                             + v242 > qword_140F05468[v241] )
                                          {
                                            v276 = _InterlockedExchange64((volatile __int64 *)v238 + 9, 0LL);
                                            if ( v276 )
                                              PspReturnResourceQuota((unsigned int)v237, &v236[16 * v237], v276, 0LL);
                                          }
                                        }
                                      }
                                    }
                                    v93 = (char *)v434;
                                    for ( j = v237 << 7; ; v239 = *(__int64 *)((char *)&PspSystemQuotaBlock + j) )
                                    {
                                      do
                                      {
                                        v92 = v239;
                                        if ( (unsigned __int64)v93 < v239 )
                                          v92 = (__int64)v93;
                                        v97 = 0LL;
                                        if ( (unsigned __int64)v93 < v239 )
                                          v97 = v239 - (_QWORD)v93;
                                        v244 = _InterlockedCompareExchange64((volatile signed __int64 *)v238, v97, v239);
                                        v134 = v239 == v244;
                                        v239 = v244;
                                      }
                                      while ( !v134 );
                                      v93 -= v92;
                                      if ( !v93 )
                                        break;
                                      if ( v236 == &PspSystemQuotaBlock )
                                        KeBugCheckEx(0x21u, v99, v237, v434, (ULONG_PTR)v93);
                                      v236 = &PspSystemQuotaBlock;
                                      v238 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + j);
                                      _m_prefetchw((char *)&PspSystemQuotaBlock + j);
                                    }
                                    v34 = v450;
                                    if ( (v506 & 4) != 0 )
                                      _InterlockedAdd64(
                                        (volatile signed __int64 *)(v99 + 8 * v237 + 512),
                                        -(__int64)v434);
                                  }
                                  if ( ObpTraceFlags )
                                    ObpPushStackInfo(v99 - 48, 0, 1u, v47);
                                  v245 = _InterlockedExchangeAdd64(
                                           (volatile signed __int64 *)(v99 - 48),
                                           0xFFFFFFFFFFFFFFFFuLL);
                                  v137 = v245 <= 1;
                                  v246 = v245 - 1;
                                  if ( v137 )
                                  {
                                    if ( *(_QWORD *)(v99 - 40) )
                                      KeBugCheckEx(
                                        0x18u,
                                        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v99 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v99 - 48) >> 8)],
                                        v99,
                                        3uLL,
                                        *(_QWORD *)(v99 - 40));
                                    if ( v246 < 0 )
                                      KeBugCheckEx(0x18u, 0LL, v99, 4uLL, v246);
                                    ObpDeferObjectDeletion(v99 - 48, v97, v92, v93);
                                  }
                                }
                                v44 = BugCheckParameter3;
                                v54 = v434;
                                v42 = BugCheckParameter3;
                                v53 = BugCheckParameter3;
                              }
                              if ( (ExpPoolFlags & 0x207) != 0 )
                              {
                                if ( (v442 & 0xC0) != 0 && (ExpPoolFlags & 0x200) != 0 )
                                  ExpCheckForLookaside(v42, v54);
                                if ( (ExpPoolFlags & 1) != 0 )
                                  KeCheckForTimer(v42);
                                FREE_CHECK_ERESOURCE(v42, v54);
                                if ( (ExpPoolFlags & 2) != 0 )
                                  ExpCheckForWorker(v42);
                              }
                              if ( (ExpPoolFlags & 0x10) != 0 )
                                VfPtFreePoolNotification(v42, v47, v54, v44);
                              v470 = 0;
                              v449 = 0;
                              v456[0] = 0;
                              if ( v47 == PoolHitTag )
                                __debugbreak();
                              if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
                                && (int)ExpPoolFlagsToPoolType(
                                          v442,
                                          v442 & 0x10,
                                          (unsigned int)&v470,
                                          (unsigned int)&v449,
                                          (__int64)v456) >= 0 )
                              {
                                v337 = v470;
                                if ( v449 )
                                {
                                  v337 = v470 | 8;
                                  v470 |= 8u;
                                }
                                EtwTracePool(3618, v337, v47, v53, v434);
                              }
                              v55 = PoolTrackTableMask;
                              v56 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
                              v57 = PoolTrackTableMask & ((40543 * v47) ^ ((40543 * (unsigned __int64)v47) >> 32));
                              v58 = v57;
                              while ( 1 )
                              {
                                v59 = *(_DWORD *)(v56 + 80LL * v57);
                                v60 = v56 + 80LL * v57;
                                if ( v59 == v47 )
                                  break;
                                if ( v59 || (v208 = *(_DWORD *)(PoolTrackTable + 80LL * v57)) == 0 )
                                {
                                  v57 = v55 & (v57 + 1);
                                  if ( v57 == v58 )
                                  {
                                    LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
                                    LockHandle.LockQueue.Next = 0LL;
                                    *(_QWORD *)&LockHandle.OldIrql = 0LL;
                                    v61 = KeGetCurrentIrql();
                                    __writecr8(2uLL);
                                    if ( KiIrqlFlags )
                                      KiRaiseIrqlProcessIrqlFlags(v61);
                                    LockHandle.OldIrql = v61;
                                    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
                                    {
                                      v62 = _InterlockedExchange64(
                                              (volatile __int64 *)&ExpTaggedPoolLock,
                                              (__int64)&LockHandle);
                                      if ( v62 )
                                        KxWaitForLockOwnerShip(&LockHandle, v62, v55, v60);
                                    }
                                    else
                                    {
                                      KiAcquireQueuedSpinLockInstrumented(&LockHandle, &ExpTaggedPoolLock);
                                    }
                                    for ( k = 0; ; ++k )
                                    {
                                      if ( k >= (unsigned __int64)PoolTrackTableExpansionSize )
                                      {
LABEL_360:
                                        KeReleaseInStackQueuedSpinLock(&LockHandle);
                                        v247 = -(__int64)v434;
                                        v248 = (volatile signed __int64 *)((char *)*(&ExPoolTagTables
                                                                                   + KeGetPcr()->Prcb.Number)
                                                                         + 80 * (unsigned int)(PoolTrackTableSize - 1));
                                        if ( (v442 & 0x100) != 0 )
                                        {
                                          _InterlockedIncrement64(v248 + 6);
                                          _InterlockedAdd64(v248 + 4, v247);
                                        }
                                        else
                                        {
                                          _InterlockedIncrement64(v248 + 3);
                                          _InterlockedAdd64(v248 + 1, v247);
                                        }
                                        goto LABEL_110;
                                      }
                                      v64 = (char *)PoolTrackTableExpansion + 80 * k;
                                      if ( *(_DWORD *)v64 == v47 )
                                        break;
                                      if ( !*(_DWORD *)v64 )
                                        goto LABEL_360;
                                    }
                                    if ( (v442 & 0x100) != 0 )
                                    {
                                      v65 = 0;
                                      v66 = (volatile signed __int64 *)(v64 + 32);
                                      v67 = (volatile signed __int64 *)(v64 + 48);
                                    }
                                    else
                                    {
                                      v65 = 1;
                                      v66 = (volatile signed __int64 *)(v64 + 8);
                                      v67 = (volatile signed __int64 *)(v64 + 24);
                                    }
                                    _InterlockedIncrement64(v67);
                                    v68 = _InterlockedExchangeAdd64(v66, -(__int64)v434);
                                    if ( *((_QWORD *)v64 + 9) )
                                    {
                                      v338 = &v64[8 * v65];
                                      if ( (v338[56] & 1) == 0 )
                                      {
                                        v339 = *((_QWORD *)v338 + 7);
                                        v340 = (4 * v434 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
                                        if ( v340 == 64 )
                                          v340 = 128LL;
                                        while ( 1 )
                                        {
                                          v341 = v340 + v68;
                                          if ( v68 >= v339 || v341 >= v339 )
                                            break;
                                          v342 = v339;
                                          v339 = _InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)v338 + 7,
                                                   v341,
                                                   v339);
                                          if ( v342 == v339 )
                                          {
                                            v368 = *((_QWORD *)v64 + 9);
                                            v369 = v339 - v341;
                                            v370 = -v369;
                                            if ( v369 >= 0 )
                                              v370 = v369;
                                            ExpTrackTableReturnLimit(v368, v370);
                                            break;
                                          }
                                          v68 = *v66;
                                        }
                                      }
                                    }
                                    KeReleaseInStackQueuedSpinLock(&LockHandle);
                                    goto LABEL_110;
                                  }
                                }
                                else
                                {
                                  *(_DWORD *)v60 = v208;
                                  v209 = *(_QWORD *)(PoolTrackTable + 80LL * v57 + 72);
                                  if ( v209 )
                                    *(_QWORD *)(v60 + 72) = v209;
                                }
                              }
                              if ( (v442 & 0x100) != 0 )
                              {
                                v79 = 0;
                                v80 = (volatile signed __int64 *)(v60 + 32);
                                v81 = (volatile signed __int64 *)(v60 + 48);
                              }
                              else
                              {
                                v79 = 1;
                                v80 = (volatile signed __int64 *)(v60 + 8);
                                v81 = (volatile signed __int64 *)(v60 + 24);
                              }
                              _InterlockedIncrement64(v81);
                              v82 = _InterlockedExchangeAdd64(v80, -(__int64)v434);
                              if ( *(_QWORD *)(v60 + 72) )
                              {
                                v83 = v60 + 8LL * v79;
                                if ( (*(_BYTE *)(v83 + 56) & 1) == 0 )
                                {
                                  v84 = *(_QWORD *)(v83 + 56);
                                  v85 = (4 * v434 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
                                  if ( v85 == 64 )
                                    v85 = 128LL;
                                  while ( 1 )
                                  {
                                    v86 = v85 + v82;
                                    if ( v82 >= v84 || v86 >= v84 )
                                      break;
                                    v87 = v84;
                                    v84 = _InterlockedCompareExchange64((volatile signed __int64 *)(v83 + 56), v86, v84);
                                    if ( v87 == v84 )
                                    {
                                      v371 = v84 - v86;
                                      v372 = -v371;
                                      if ( v371 >= 0 )
                                        v372 = v371;
                                      ExpTrackTableReturnLimit(*(_QWORD *)(v60 + 72), v372);
                                      break;
                                    }
                                    v82 = *v80;
                                  }
                                }
                              }
LABEL_110:
                              if ( (v442 & 0x400) != 0 )
                                ViFreeTrackedPool(v44, v434);
                              if ( byte_140FCDC68 )
                              {
                                if ( v42 < 0xFFFF800000000000uLL )
                                  KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v42, 0LL);
                                if ( (v42 & 7) != 0 )
                                  KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v42, 8uLL);
                                if ( v434 + v42 < v42 )
                                  KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v42, v434);
                                v416 = (_BYTE *)(KasaniShadow + ((v42 + 0x800000000000LL) >> 3));
                                if ( v434 >> 3 )
                                {
                                  memset_0((void *)(KasaniShadow + ((v42 + 0x800000000000LL) >> 3)), 0, v434 >> 3);
                                  v416 += v434 >> 3;
                                }
                                if ( (v434 & 7) != 0 )
                                  *v416 = v434 & 7;
                              }
                              v69 = *(_QWORD *)(v34 + 56);
                              if ( v434 - 513 <= 0xD7F && v69 )
                              {
                                v281 = v69
                                     + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                                       + ((unsigned int)(v434 + 15) >> 4))
                                       - 33
                                       + 1LL) << 6);
                                ++*(_DWORD *)(v281 + 28);
                                if ( *(_WORD *)v281 >= *(_WORD *)(v281 + 16) )
                                {
                                  ++*(_DWORD *)(v281 + 32);
                                  v282 = 0;
                                }
                                else
                                {
                                  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v281, (PSLIST_ENTRY)v42);
                                  v282 = 1;
                                }
                                if ( v282 )
                                {
LABEL_166:
                                  v110 = v441;
                                  v11 = 0LL;
                                  goto LABEL_167;
                                }
                              }
                              if ( (_WORD)v42 )
                              {
                                v70 = v34 + 320;
                              }
                              else
                              {
                                v71 = RtlCSparseBitmapBitmaskRead(&dword_140E68050, 2 * ((v42 - qword_140E68048) >> 20));
                                if ( !v71 || (_DWORD)v71 == 3 )
                                {
                                  RtlpHpLargeFree(v34, v42);
                                  goto LABEL_166;
                                }
                                v70 = v34 + 320;
                                if ( (_DWORD)v71 == 2 )
                                  v70 = v34 + 512;
                              }
                              v72 = *(_QWORD *)v70;
                              v73 = v42 & *(_QWORD *)v70;
                              if ( (v73 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v73 + 0x10)) == v70 )
                              {
                                v74 = *(_BYTE *)(v70 + 8);
                                v75 = v73 + 32 * ((unsigned __int64)(unsigned int)(v42 - v73) >> v74);
                                v76 = -32LL * *(unsigned __int8 *)(v75 + 26) + v75;
                                v77 = v73 + ((__int64)(v76 - v73) >> 5 << v74);
                                v78 = *(_BYTE *)(v76 + 24);
                                if ( v78 + (v77 == v42) == 11 )
                                {
                                  RtlpHpLfhContextFree(*(_QWORD *)(v70 + 24), v77, v42);
                                  goto LABEL_166;
                                }
                                v474 = 0;
                                v111 = (v72 & v76) + ((__int64)(v76 - (v72 & v76)) >> 5 << v74);
                                if ( (v78 & 3) == 3 )
                                {
                                  if ( v42 == v111 )
                                  {
LABEL_237:
                                    RtlpHpSegPageRangeShrink(v70, v76);
                                    goto LABEL_166;
                                  }
                                  if ( v78 == 15 )
                                  {
                                    if ( v42 > v111 )
                                    {
                                      if ( (unsigned int)RtlpHpVsContextFree(*(_QWORD *)(v70 + 32), v111, v42, &v474) )
                                      {
                                        v112 = *(_QWORD *)(v70 + 24);
                                        if ( v474 < *(unsigned __int16 *)(v112 + 68) )
                                        {
                                          v113 = v112
                                               + 8LL
                                               * ((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                                                + ((unsigned __int64)(v474 + 15) >> 4))
                                                - 1);
                                          do
                                          {
                                            v451 = *(_QWORD *)(v113 + 448);
                                            v114 = v451;
                                            v115 = v451;
                                            if ( (v451 & 1) == 0 )
                                              break;
                                            if ( WORD1(v451) > 1u )
                                            {
                                              --WORD1(v451);
                                              v115 = v451;
                                            }
                                          }
                                          while ( _InterlockedCompareExchange64(
                                                    (volatile signed __int64 *)(v113 + 448),
                                                    v115,
                                                    v114) != v114 );
                                        }
                                      }
                                      goto LABEL_166;
                                    }
                                    goto LABEL_237;
                                  }
                                }
                              }
                              RtlpLogHeapFailure(9, *(_QWORD *)(v70 + 56), v42, 0LL, 0LL, 0LL);
                              goto LABEL_166;
                            }
LABEL_220:
                            RtlpHpSegPageRangeShrink(v22, v27);
                            goto LABEL_33;
                          }
                        }
                        RtlpLogHeapFailure(9, v22[7], v11, 0LL, 0LL, 0LL);
                        goto LABEL_33;
                      }
                      if ( MoreLimit == 1 )
                        break;
                      v314 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v313 + 56), MoreLimit);
                      v312 = *v309;
                      v308 = v508;
                      v311 = BugCheckParameter3g;
                    }
                    v316 = v464;
                    if ( v316 == _InterlockedCompareExchange64((volatile signed __int64 *)(v313 + 56), 1LL, v464) )
                      break;
                    v308 = v508;
                    v311 = BugCheckParameter3g;
                  }
                }
LABEL_501:
                v20 = 1;
                goto LABEL_502;
              }
              if ( v306 )
              {
LABEL_499:
                v304 = v302 & (v304 + 1);
                if ( v304 == v305 )
                {
                  ExpInsertPoolTrackerExpansion(v523, BugCheckParameter3g, v301);
                  goto LABEL_501;
                }
              }
              else
              {
                v327 = *(_DWORD *)(PoolTrackTable + 80LL * v304);
                if ( v327 )
                {
                  *(_DWORD *)v307 = v327;
                  v328 = *(_QWORD *)(PoolTrackTable + 80LL * v304 + 72);
                  if ( v328 )
                    *(_QWORD *)(v307 + 72) = v328;
                }
                else
                {
                  if ( v304 == v451 - 1 )
                    goto LABEL_499;
                  v487.LockQueue.Next = 0LL;
                  v487.LockQueue.Lock = &ExpTaggedPoolLock;
                  v329 = KeGetCurrentIrql();
                  v460 = v329;
                  __writecr8(2uLL);
                  if ( KiIrqlFlags )
                  {
                    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v329);
                    LOBYTE(v329) = v460;
                  }
                  v487.OldIrql = v329;
                  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
                  {
                    v330 = _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&v487);
                    if ( v330 )
                      KxWaitForLockOwnerShip(&v487, v330, v303, v302);
                  }
                  else
                  {
                    KiAcquireQueuedSpinLockInstrumented(&v487, &ExpTaggedPoolLock);
                  }
                  v460 = 80LL * v304 + PoolTrackTable;
                  if ( !*(_DWORD *)v460 )
                  {
                    v331 = ExpPlFindLimitEntry(v523);
                    *(_QWORD *)(v460 + 72) = v331;
                    *(_QWORD *)(v307 + 72) = v331;
                    *(_DWORD *)(PoolTrackTable + 80LL * v304) = v523;
                    *(_DWORD *)v307 = v523;
                  }
                  KeReleaseInStackQueuedSpinLock(&v487);
                  v303 = v462;
                  v302 = v458;
                  v305 = v507;
                }
              }
            }
          }
          if ( v326 == 64 )
          {
            v292 = 0;
            goto LABEL_466;
          }
LABEL_371:
          v20 = v468;
          goto LABEL_25;
        }
        v152 = v18 + 832;
        v404 = v18 + 832 + ((unsigned __int64)BYTE4(v462) << 8) + 1472;
        LODWORD(v153) = *(unsigned __int16 *)(v404 + v499);
        if ( BugCheckParameter3a != v404 )
          *(_WORD *)v451 = *(_WORD *)(v404 + v499);
      }
      v154 = v152 + (unsigned int)((_DWORD)v153 << 6);
      v451 = v154;
      if ( *(_WORD *)(v154 + 4) )
      {
        v374 = *(_QWORD *)(v154 + 56);
        if ( (v374 & 0xFFF) != 0 )
        {
          v438 = v141;
          v375 = v374 & 0xFFFFFFFFFFFFF000uLL;
          *(_QWORD *)(v154 + 56) = v374 - 1;
          CurrentThread = KeGetCurrentThread();
          v377 = (unsigned int)*(unsigned __int8 *)((v374 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
          v378 = qword_140E27FC8 ^ *(_DWORD *)((v374 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v374 & 0xFFFFFFFFFFFFF000uLL) >> 12);
          v379 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
          BugCheckParameter3k = (unsigned __int16)v378;
          Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
          v461 = v378;
          v381 = (__int64)Blink + v379;
          v382 = (unsigned __int64)Blink ^ v379;
          CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v382 ^ (v382 << 16) ^ __ROL8__(Blink, 24));
          CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v382, 37);
          v15 = v375 + 64;
          v383 = v375 + 64 + 8 * (v377 - 1);
          v384 = (size_t *)(v375 + 64 + 8LL * *(unsigned __int8 *)(v375 + 36));
          while ( *v384 == -1LL )
          {
            if ( v384 == (size_t *)v383 )
              v384 = (size_t *)(v375 + 64);
            else
              ++v384;
          }
          _RAX = 1LL << ((unsigned __int16)(BYTE4(v381) * (unsigned __int16)__popcnt(~*v384)) >> 8);
          __asm { pdep    rcx, rax, rcx }
          v8 = _RCX | *v384;
          __asm { tzcnt   rax, rcx }
          *v384 = v8;
          Size = (unsigned int)((_DWORD)v384 - v15);
          *(_BYTE *)(v375 + 36) = (unsigned int)(_RAX + 8 * Size) >> 6;
          Slow = v375 + (unsigned int)HIWORD(v461) + ((_DWORD)_RAX + 8 * (_DWORD)Size) * BugCheckParameter3k;
          v134 = v5 == 0;
          v444 = Slow;
          v249 = v438;
          if ( v134 )
            RtlHeapZero(Slow, ((unsigned int)v438 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
        }
        else
        {
          v249 = v141;
          Slow = RtlpHpLfhSlotAllocateSlow(v152);
          v444 = Slow;
        }
      }
      else
      {
        v457 = 0;
        _m_prefetchw((const void *)(v154 + 56));
        for ( m = *(_QWORD *)(v154 + 56); ; m = v156 )
        {
          if ( (m & 0xFFF) == 0 )
          {
            v249 = v141;
            Slow = RtlpHpLfhSlotAllocateSlow(v152);
            v444 = Slow;
            goto LABEL_381;
          }
          v156 = _InterlockedCompareExchange64((volatile signed __int64 *)(v154 + 56), m - 1, m);
          if ( m == v156 )
            break;
          v457 = 1;
        }
        v157 = KeGetCurrentThread();
        v158 = m & 0xFFFFFFFFFFFFF000uLL;
        v436 = v141;
        v450 = v158;
        v159 = v157[1].SchedulerApc.ApcListEntry.Blink;
        v160 = (unsigned __int64)v157[1].SchedulerApc.Reserved[0];
        v161 = *(unsigned __int8 *)(v158 + 24);
        v471 = qword_140E27FC8 ^ *(_DWORD *)(v158 + 40) ^ (v158 >> 12);
        v162 = (__int64)v159 + v160;
        v461 = (unsigned __int16)v471;
        v163 = (unsigned __int64)v159 ^ v160;
        v157[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v163 ^ (v163 << 16) ^ __ROL8__(v159, 24));
        v157[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v163, 37);
        v164 = (_QWORD *)(v158 + 64);
        v165 = v158 + 64 + 8 * ((unsigned int)(v161 - 8) - 1LL);
        v166 = *(unsigned __int8 *)(v158 + 50);
        v167 = BYTE4(v162);
        v500 = *(_BYTE *)(v158 + 39);
        v168 = *(unsigned __int8 *)(v158 + 36);
        BugCheckParameter3b = BYTE4(v162);
        v462 = v165;
        v169 = (_QWORD *)(v158 + 64 + 8 * v168);
LABEL_253:
        while ( 1 )
        {
          _RDX = ~*v169;
          if ( *v169 != -1LL )
            break;
          if ( v169 == (_QWORD *)v165 )
            goto LABEL_422;
          ++v169;
        }
        while ( 1 )
        {
          if ( (qword_140E27FE8 & 4) != 0 )
          {
            _RAX = 1LL << ((unsigned __int16)(v167 * __popcnt(_RDX)) >> 8);
            __asm
            {
              pdep    r9, rax, rdx
              tzcnt   r10, r9
            }
          }
          else
          {
            if ( v166 != 64 || v169 == (_QWORD *)v165 )
            {
              __asm { tzcnt   rcx, rdx }
              _BitScanReverse64(&v284, _RDX);
              v475[1] = v284;
              v285 = v284 - _RCX + 1;
              if ( v166 < v285 )
                v285 = v166;
              BugCheckParameter3b = _RCX + ((v285 * v167) >> 8);
              _RDX = __ROR8__(_RDX, BugCheckParameter3b);
              __asm { tzcnt   r10, rdx }
              LODWORD(_R10) = BugCheckParameter3b + _R10;
            }
            else
            {
              _RDX = __ROR8__(_RDX, v167);
              __asm { tzcnt   r10, rdx }
              LODWORD(_R10) = ((_BYTE)v167 + (_BYTE)_R10) & 0x3F;
            }
            _R9 = 1LL << _R10;
          }
          _m_prefetchw(v169);
          v174 = _InterlockedOr64(v169, _R9);
          Size = v174;
          if ( (_R9 & v174) == 0 )
            break;
          v167 = BugCheckParameter3b;
          _RDX = ~v174;
          v165 = v462;
          if ( v174 == -1 )
          {
            v164 = (_QWORD *)(v158 + 64);
            if ( v169 != (_QWORD *)v462 )
            {
              ++v169;
              goto LABEL_253;
            }
LABEL_422:
            v169 = v164;
            goto LABEL_253;
          }
        }
        v15 = v461;
        v8 = (unsigned int)((_DWORD)v169 - (v158 + 64));
        v253 = _R10 + 8 * v8;
        BugCheckParameter3e = v253;
        v254 = v461 * v253;
        *(_BYTE *)(v158 + 36) = v253 >> 6;
        v255 = (unsigned int)HIWORD(v471) + v254;
        if ( v500 <= 1u )
        {
          if ( v253 > *(unsigned __int16 *)(v158 + 48) )
          {
            RtlpHpLfhSubsegmentPrefetch(v18 + 832, v158, (unsigned int)v255);
            v158 = Size;
          }
LABEL_378:
          Slow = v158 + v255;
          v134 = v5 == 0;
          v444 = Slow;
          v249 = v436;
          if ( v134 )
          {
            RtlHeapZero(Slow, ((unsigned int)v436 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
            v158 = v450;
          }
LABEL_380:
          if ( !Slow )
            goto LABEL_665;
        }
        else
        {
          v256 = RtlpHpLfhSubsegmentCommitBlock(v18 + 832, v158, (unsigned int)v255);
          v158 = v450;
          if ( v256 >= 0 )
            goto LABEL_378;
          v15 = 0LL;
          v444 = 0LL;
          Slow = 0LL;
          if ( BugCheckParameter3e == -1 )
          {
            v249 = v436;
            goto LABEL_380;
          }
          v397 = v450 + 8LL * (BugCheckParameter3e >> 6);
          _m_prefetchw((const void *)(v397 + 64));
          _InterlockedAnd64((volatile signed __int64 *)(v397 + 64), __ROL8__(-2LL, BugCheckParameter3e & 0x3F));
          v249 = v436;
          v444 = 0LL;
LABEL_665:
          v398 = *(_QWORD *)(v158 + 16);
          v8 = v18 + 832;
          do
          {
            v464 = v398;
            v439 = v398;
            if ( BYTE6(v398) == 1 )
              BYTE6(v439) = 2;
            WORD1(v439) = WORD1(v398) + 1;
            Size = (unsigned __int64)*(unsigned __int16 *)(v158 + 44) << 6;
            v399 = v398;
            v398 = _InterlockedCompareExchange64((volatile signed __int64 *)(v158 + 16), v439, v398);
          }
          while ( v399 != v398 );
          if ( !*(_BYTE *)(Size + v8 + 92) )
          {
            *(_BYTE *)(Size + v8 + 92) = 1;
            if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v8 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
            {
              RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)v8 + 56LL));
              v158 = v450;
              v8 = v18 + 832;
            }
          }
          if ( BYTE6(v464) == 1 )
          {
            v15 = v8 + (WORD2(v464) << 6);
            _m_prefetchw((const void *)(v15 + 8));
            v400 = *(_QWORD *)(v158 + 24);
            v401 = *(_QWORD *)(v15 + 8);
            Size = v401 & 0xFFF;
            *(_QWORD *)(v158 + 24) = v400 ^ (v401 ^ v400) & 0xFFFFFFFFFFFFF000uLL;
            v403 = v401;
            v402 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 8), Size | v158, v401);
            if ( v403 != v402 )
            {
              do
              {
                v8 = v402;
                *(_QWORD *)(v158 + 24) = v400 ^ (v400 ^ v402) & 0xFFFFFFFFFFFFF000uLL;
                Size = v158 | v402 & 0xFFF;
                v402 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 8), Size, v402);
              }
              while ( v402 != v8 );
              v14 = v472;
            }
          }
        }
LABEL_381:
        if ( v457 )
          RtlpHpLfhBucketUpdateAffinityMapping(
            v18 + 832,
            v18 + 832 + ((unsigned __int64)*(unsigned __int16 *)(v451 + 2) << 6));
      }
      if ( Slow != -1 )
        goto LABEL_368;
      goto LABEL_364;
    }
    v334 = (unsigned __int16 *)(v333 + (((unsigned int)(v332 - 33) + 1LL) << 6));
    BugCheckParameter3h = (ULONG_PTR)v334;
    ++*((_DWORD *)v334 + 5);
    if ( *v334 )
    {
      v444 = (ULONG_PTR)RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v333 + (((unsigned int)(v332 - 33) + 1LL) << 6)));
      Slow = v444;
      if ( v444 )
        goto LABEL_553;
      v334 = (unsigned __int16 *)BugCheckParameter3h;
    }
    ++*((_DWORD *)v334 + 6);
    v8 = v334[8];
    v335 = *v334;
    Size = v459;
    v478 = 0LL;
    ListEnd = 0LL;
    if ( v335 < (unsigned int)v8
      && (v8 = ((unsigned int)v8 - v335) >> 1, (_DWORD)v8)
      && (v8 = (unsigned int)(v8 + 1), v459 <= 0x20000)
      && (v364 = RtlpHpVsContextMultiAlloc((int)v18 + 704, v459, v8, v15, (__int64)&v478, (__int64)&ListEnd)) != 0 )
    {
      Slow = (__int64)v478;
      v444 = (ULONG_PTR)v478;
      Size = *v478;
      v478 = (size_t *)*v478;
      v365 = v364 - 1;
      if ( v365 )
        InterlockedPushListSList((PSLIST_HEADER)(v451 + ((v509 + 1LL) << 6)), (PSLIST_ENTRY)Size, ListEnd, v365);
    }
    else
    {
      v444 = 0LL;
      Slow = 0LL;
    }
LABEL_553:
    v15 = v441;
    if ( (v441 & 2) == 0 )
    {
      if ( !Slow )
      {
LABEL_557:
        v141 = v459;
        v435 = v459;
        goto LABEL_242;
      }
      RtlHeapZero(Slow + 16, v459 - 16);
      v15 = v441;
    }
    if ( Slow )
      goto LABEL_370;
    goto LABEL_557;
  }
  v19 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v459 = v19;
  if ( (((_WORD)v14 + 15) & 0xFF0u) > 0xFC0 || v19 >= 0x10000 )
  {
    v19 = (v19 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v459 = v19;
  }
  if ( v19 < v14 )
  {
    v20 = 1;
LABEL_25:
    BugCheckParameter3 = 0LL;
    goto LABEL_26;
  }
  if ( (v19 & 0xFFF) == 0 && v19 <= *(unsigned int *)(v18 + 528) )
  {
    v139 = RtlpHpAllocateHeapBackend(v18, v19, v19, ~(_BYTE)v441 & 2);
    goto LABEL_230;
  }
  v175 = *(unsigned __int16 *)(v18 + 900);
  v176 = 1LL;
  if ( v19 > 1 )
    v176 = v19;
  v473 = v176;
  if ( v176 >= v175 )
    goto LABEL_374;
  v177 = v18 + 832;
  v178 = (*(_DWORD *)(v18 + 908) >> 4) & 0x1FF;
  v179 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v176 + 15) >> 4));
  v180 = (*(_DWORD *)(v18 + 908) >> 13) & 0x3FFFF;
  _BitScanReverse(&v181, v180);
  v182 = 1 << v181;
  v183 = v181 - 2;
  v501 = v179 - 1;
  v481 = v183;
  v184 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v183) + 8LL * (v180 ^ v182) + 8)
                   + 8 * v178);
  if ( !v184 )
  {
    v184 = RtlpHpLfhThreadDataInitializeSet(v18 + 832);
    v177 = v18 + 832;
  }
  v185 = v501;
  v458 = v184;
  v186 = v177 + ((unsigned __int16)v184 << 6);
  v502 = 2LL * v501;
  v187 = *(unsigned __int16 *)(v502 + v186);
  if ( !*(_WORD *)(v502 + v186) )
  {
    if ( RtlpHpLfhBucketCheckAndUpdate(v177, v185, v187) )
    {
      v177 = v18 + 832;
      v405 = v18 + 832 + ((unsigned __int64)BYTE4(v458) << 8) + 1472;
      LODWORD(v187) = *(unsigned __int16 *)(v405 + v502);
      if ( v186 != v405 )
        *(_WORD *)(v502 + v186) = *(_WORD *)(v405 + v502);
      goto LABEL_272;
    }
    v176 = v473;
LABEL_374:
    v252 = (unsigned int)v176;
    goto LABEL_400;
  }
LABEL_272:
  v188 = v177 + (unsigned int)((_DWORD)v187 << 6);
  v451 = v188;
  if ( *(_WORD *)(v188 + 4) )
  {
    v385 = *(_QWORD *)(v188 + 56);
    if ( (v385 & 0xFFF) != 0 )
    {
      v386 = v385 & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v188 + 56) = v385 - 1;
      v387 = KeGetCurrentThread();
      v388 = (unsigned int)*(unsigned __int8 *)((v385 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
      v389 = v387[1].SchedulerApc.ApcListEntry.Blink;
      v390 = (unsigned __int64)v387[1].SchedulerApc.Reserved[0];
      v457 = qword_140E27FC8 ^ *(_DWORD *)((v385 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v385 & 0xFFFFFFFFFFFFF000uLL) >> 12);
      v391 = (unsigned __int16)v457;
      v392 = (__int64)v389 + v390;
      v393 = (unsigned __int64)v389 ^ v390;
      v387[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v393 ^ (v393 << 16) ^ __ROL8__(v389, 24));
      v387[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v393, 37);
      v394 = (v385 & 0xFFFFF000) + 64;
      v395 = (v385 & 0xFFFFFFFFFFFFF000uLL) + 64 + 8 * (v388 - 1);
      v396 = (_QWORD *)((v385 & 0xFFFFFFFFFFFFF000uLL)
                      + 64
                      + 8LL * *(unsigned __int8 *)((v385 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
      while ( *v396 == -1LL )
      {
        if ( v396 == (_QWORD *)v395 )
          v396 = (_QWORD *)(v386 + 64);
        else
          ++v396;
      }
      _RAX = 1LL << ((unsigned __int16)(BYTE4(v392) * (unsigned __int16)__popcnt(~*v396)) >> 8);
      __asm { pdep    rcx, rax, rcx }
      __asm { tzcnt   rax, rcx }
      *v396 |= _RCX;
      LODWORD(_RCX) = _RAX + 8 * ((_DWORD)v396 - v394);
      *(_BYTE *)(v386 + 36) = (unsigned int)_RCX >> 6;
      v11 = v386 + (unsigned int)HIWORD(v457) + (_DWORD)_RCX * v391;
      if ( !v5 )
        RtlHeapZero(v11, ((unsigned int)v19 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    else
    {
      v11 = RtlpHpLfhSlotAllocateSlow(v177);
    }
    goto LABEL_399;
  }
  v457 = 0;
  _m_prefetchw((const void *)(v188 + 56));
  v189 = *(_QWORD *)(v188 + 56);
  while ( 2 )
  {
    if ( (v189 & 0xFFF) == 0 )
    {
      v11 = RtlpHpLfhSlotAllocateSlow(v177);
      goto LABEL_395;
    }
    v190 = _InterlockedCompareExchange64((volatile signed __int64 *)(v188 + 56), v189 - 1, v189);
    if ( v189 != v190 )
    {
      v457 = 1;
      v189 = v190;
      continue;
    }
    break;
  }
  v191 = KeGetCurrentThread();
  v192 = v189 & 0xFFFFFFFFFFFFF000uLL;
  v437 = v189 & 0xFFFFFFFFFFFFF000uLL;
  v193 = v191[1].SchedulerApc.ApcListEntry.Blink;
  v194 = (unsigned __int64)v191[1].SchedulerApc.Reserved[0];
  v443 = qword_140E27FC8 ^ *(_DWORD *)((v189 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v189 & 0xFFFFFFFFFFFFF000uLL) >> 12);
  v195 = (unsigned int)*(unsigned __int8 *)((v189 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
  v196 = (__int64)v193 + v194;
  v461 = (unsigned __int16)v443;
  v197 = (unsigned __int64)v193 ^ v194;
  v191[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v197 ^ (v197 << 16) ^ __ROL8__(v193, 24));
  v191[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v197, 37);
  v198 = (v189 & 0xFFFFFFFFFFFFF000uLL) + 64;
  v471 = *(unsigned __int8 *)((v189 & 0xFFFFFFFFFFFFF000uLL) + 0x32);
  v199 = (_QWORD *)(v198 + 8 * (v195 - 1));
  v200 = BYTE4(v196);
  v503 = *(_BYTE *)((v189 & 0xFFFFFFFFFFFFF000uLL) + 0x27);
  v201 = *(unsigned __int8 *)((v189 & 0xFFFFFFFFFFFFF000uLL) + 0x24);
  BugCheckParameter3c = BYTE4(v196);
  v458 = (unsigned __int64)v199;
  v202 = (_QWORD *)(v198 + 8 * v201);
LABEL_277:
  while ( 1 )
  {
    _RDX = ~*v202;
    if ( *v202 != -1LL )
      break;
    if ( v202 == v199 )
LABEL_424:
      v202 = (_QWORD *)v198;
    else
      ++v202;
  }
  while ( 1 )
  {
    if ( (qword_140E27FE8 & 4) != 0 )
    {
      _RAX = 1LL << ((unsigned __int16)(v200 * __popcnt(_RDX)) >> 8);
      __asm
      {
        pdep    r9, rax, rdx
        tzcnt   r10, r9
      }
    }
    else
    {
      if ( v202 == v199 || v471 != 64 )
      {
        __asm { tzcnt   rcx, rdx }
        _BitScanReverse64(&v288, _RDX);
        v479 = v288;
        v289 = v288 - _RCX + 1;
        if ( v471 < v289 )
          v289 = v471;
        BugCheckParameter3c = _RCX + ((v289 * v200) >> 8);
        _RDX = __ROR8__(_RDX, BugCheckParameter3c);
        __asm { tzcnt   r10, rdx }
        LODWORD(_R10) = BugCheckParameter3c + _R10;
      }
      else
      {
        _RDX = __ROR8__(_RDX, v200);
        __asm { tzcnt   r10, rdx }
        LODWORD(_R10) = ((_BYTE)v200 + (_BYTE)_R10) & 0x3F;
      }
      _R9 = 1LL << _R10;
    }
    _m_prefetchw(v202);
    v207 = _InterlockedOr64(v202, _R9);
    if ( (_R9 & v207) == 0 )
      break;
    v200 = BugCheckParameter3c;
    _RDX = ~v207;
    v199 = (_QWORD *)v458;
    if ( v207 == -1 )
    {
      v198 = v192 + 64;
      if ( v202 == (_QWORD *)v458 )
        goto LABEL_424;
      ++v202;
      goto LABEL_277;
    }
  }
  v259 = v461;
  v260 = _R10 + 8 * ((_DWORD)v202 - (v192 + 64));
  BugCheckParameter3f = v260;
  *(_BYTE *)((v189 & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v260 >> 6;
  v261 = HIWORD(v443) + v259 * v260;
  if ( v503 <= 1u )
  {
    v263 = v189 & 0xFFFFFFFFFFFFF000uLL;
    if ( v260 > *(unsigned __int16 *)((v189 & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
    {
      RtlpHpLfhSubsegmentPrefetch(v177, v437, (unsigned int)v261);
      v263 = v280;
    }
LABEL_392:
    v11 = v263 + v261;
    if ( !v5 )
    {
      RtlHeapZero(v11, ((unsigned int)v19 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
      v263 = v189 & 0xFFFFFFFFFFFFF000uLL;
    }
LABEL_394:
    if ( !v11 )
      goto LABEL_404;
LABEL_395:
    v264 = v18 + 832;
    goto LABEL_396;
  }
  v262 = RtlpHpLfhSubsegmentCommitBlock(v177, v437, (unsigned int)v261);
  v263 = v189 & 0xFFFFFFFFFFFFF000uLL;
  if ( v262 >= 0 )
    goto LABEL_392;
  v11 = 0LL;
  if ( BugCheckParameter3f == -1 )
    goto LABEL_394;
  v265 = v437 + 8LL * (BugCheckParameter3f >> 6);
  _m_prefetchw((const void *)(v265 + 64));
  _InterlockedAnd64((volatile signed __int64 *)(v265 + 64), __ROL8__(-2LL, BugCheckParameter3f & 0x3F));
LABEL_404:
  v266 = *(_QWORD *)(v263 + 16);
  v264 = v18 + 832;
  do
  {
    v463 = v266;
    v450 = v266;
    if ( BYTE6(v266) == 1 )
      BYTE6(v450) = 2;
    ++WORD1(v450);
    v267 = (unsigned __int64)*(unsigned __int16 *)(v263 + 44) << 6;
    v268 = v266;
    v266 = _InterlockedCompareExchange64((volatile signed __int64 *)(v263 + 16), v450, v266);
  }
  while ( v268 != v266 );
  if ( !*(_BYTE *)(v267 + v264 + 92) )
  {
    *(_BYTE *)(v267 + v264 + 92) = 1;
    if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v264 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
    {
      RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)v264 + 56LL));
      v263 = v189 & 0xFFFFFFFFFFFFF000uLL;
    }
  }
  if ( BYTE6(v463) == 1 )
  {
    v269 = v264 + (WORD2(v463) << 6);
    _m_prefetchw((const void *)(v269 + 8));
    v270 = *(_QWORD *)(v269 + 8);
    v271 = *(_DWORD *)(v263 + 24) & 0xFFF;
    *(_QWORD *)(v263 + 24) = (v270 - (v270 & 0xFFF)) | v271;
    v273 = v270;
    v272 = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(v269 + 8),
             v270 ^ (v189 ^ v270) & 0xFFFFFFFFFFFFF000uLL,
             v270);
    if ( v273 != v272 )
    {
      do
      {
        v274 = v272;
        *(_QWORD *)(v263 + 24) = (v272 - (v272 & 0xFFF)) | v271;
        v272 = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(v269 + 8),
                 v272 ^ (v189 ^ v272) & 0xFFFFFFFFFFFFF000uLL,
                 v272);
      }
      while ( v272 != v274 );
    }
  }
LABEL_396:
  if ( v457 )
    RtlpHpLfhBucketUpdateAffinityMapping(v264, v264 + ((unsigned __int64)*(unsigned __int16 *)(v451 + 2) << 6));
  v14 = v472;
LABEL_399:
  v176 = v473;
  v252 = (unsigned int)v473;
  if ( v11 == -1LL )
  {
LABEL_400:
    if ( v176 > 0x20000 )
    {
      if ( v176 > *(unsigned int *)(v18 + 528) )
        v139 = RtlpHpLargeAlloc(v18, v19, v176, v6);
      else
        v139 = RtlpHpAllocateHeapBackend(v18, v19, v176, v6);
    }
    else
    {
      v139 = RtlpHpVsContextAllocate(v18 + 704, (unsigned int)v19, v252, v6);
    }
LABEL_230:
    v11 = v139;
  }
  if ( v11 )
  {
    if ( !(unsigned int)ExpAddTagForBigPages(v11, v523, v459, v441, 0, 0) )
    {
      v20 = v468;
      BugCheckParameter3 = 0LL;
      v21 = v18;
      goto LABEL_27;
    }
    v446 = 0;
    v453 = 0;
    BugCheckParameter3d = v459;
    v466 = 0;
    memset(&v486, 0, sizeof(v486));
    if ( v523 == PoolHitTag )
      __debugbreak();
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
      && (int)ExpPoolFlagsToPoolType(v441, v441 & 0x10, (unsigned int)&v466, (unsigned int)&v446, (__int64)&v453) >= 0 )
    {
      v366 = v466;
      if ( v446 )
      {
        v366 = v466 | 8;
        v466 |= 8u;
      }
      EtwTracePool(3616, v366, v523, v11, BugCheckParameter3d);
    }
    v212 = PoolTrackTableSize;
    v213 = KeGetPcr()->Prcb.Number;
    v458 = v441 & 0xFFFFFFFFFFFFFFFBuLL;
    v214 = PoolTrackTableMask;
    v460 = PoolTrackTableMask;
    v215 = (__int64)*(&ExPoolTagTables + v213);
    v462 = v215;
    v473 = PoolTrackTableSize;
    v216 = PoolTrackTableMask & ((40543 * v523) ^ ((40543 * (unsigned __int64)v523) >> 32));
    v8 = v216;
    v504 = v216;
    while ( 1 )
    {
      v217 = 80LL * v216;
      v218 = *(_DWORD *)(v215 + v217);
      v219 = v215 + v217;
      if ( v218 == v523 )
      {
        Size = 1LL;
        if ( (v458 & 0x100) != 0 )
        {
          v220 = 0;
          v221 = (volatile signed __int64 *)(v219 + 32);
          v222 = (volatile signed __int64 *)(v219 + 40);
        }
        else
        {
          v220 = 1;
          v221 = (volatile signed __int64 *)(v219 + 8);
          v222 = (volatile signed __int64 *)(v219 + 16);
        }
        v505 = v220;
        _InterlockedIncrement64(v222);
        v223 = BugCheckParameter3d;
        v224 = _InterlockedExchangeAdd64(v221, BugCheckParameter3d);
        if ( *(_QWORD *)(v219 + 72) )
        {
          v225 = v219 + 8LL * v220;
LABEL_306:
          v226 = *(_QWORD *)(v225 + 56);
          while ( 1 )
          {
            v463 = v226;
            if ( (v226 & 1) != 0 || v226 >= v224 )
              break;
            v227 = ExpTrackTableGetMoreLimit(*(_QWORD *)(v219 + 72), v223, (unsigned int)v220);
            Size = 1LL;
            if ( !v227 )
            {
              v20 = 0;
              goto LABEL_320;
            }
            if ( v227 == 1 )
            {
              v228 = v463;
              if ( v228 == _InterlockedCompareExchange64((volatile signed __int64 *)(v225 + 56), 1LL, v463) )
                break;
              v220 = v505;
              v223 = BugCheckParameter3d;
              goto LABEL_306;
            }
            v226 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v225 + 56), v227);
            v224 = *v221;
            v220 = v505;
            v223 = BugCheckParameter3d;
          }
        }
LABEL_319:
        v20 = 1;
LABEL_320:
        BugCheckParameter3 = v11;
        if ( byte_140FCDC68 )
        {
          if ( v11 < 0xFFFF800000000000uLL )
            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v11, 0LL);
          if ( (v11 & 7) != 0 )
            KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v11, 8uLL);
        }
        v15 = v11 & 0xFFFFFFFFFFFFFFF8uLL;
        v230 = v11 + v14 - (v11 & 0xFFFFFFFFFFFFFFF8uLL);
        v231 = v459 + v11 - (v11 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( !byte_140FCDC68 )
        {
          v30 = 0;
          goto LABEL_33;
        }
        if ( v15 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v15, 0LL);
        if ( v230 > v231 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v230, v459 + v11 - (v11 & 0xFFFFFFFFFFFFFFF8uLL));
        if ( v231 + v15 < v15 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v15, v459 + v11 - (v11 & 0xFFFFFFFFFFFFFFF8uLL));
        v422 = (_BYTE *)(KasaniShadow + ((v15 + 0x800000000000LL) >> 3));
        v423 = v231 + (((_BYTE)v230 - 1) & 7) - (unsigned __int64)(((_BYTE)v231 - 1) & 7) - v230;
        if ( v230 >> 3 )
        {
          memset_0((void *)(KasaniShadow + ((v15 + 0x800000000000LL) >> 3)), 0, v230 >> 3);
          v422 += v230 >> 3;
        }
        if ( (v230 & 7) != 0 )
          *v422++ = v230 & 7;
        v424 = v423 >> 3;
        if ( v424 )
        {
          v420 = v424;
          LOBYTE(Size) = -122;
          v421 = v422;
LABEL_763:
          memset_0(v421, Size, v420);
        }
LABEL_32:
        v30 = 0;
        goto LABEL_33;
      }
      if ( v218 )
        goto LABEL_317;
      v257 = *(_DWORD *)(PoolTrackTable + 80LL * v216);
      if ( v257 )
      {
        *(_DWORD *)v219 = v257;
        v258 = *(_QWORD *)(PoolTrackTable + v217 + 72);
        if ( v258 )
          *(_QWORD *)(v219 + 72) = v258;
        continue;
      }
      if ( v216 == v212 - 1 )
      {
LABEL_317:
        v216 = v214 & (v216 + 1);
        if ( v216 == (_DWORD)v8 )
        {
          ExpInsertPoolTrackerExpansion(v523, BugCheckParameter3d, v458);
          Size = 1LL;
          goto LABEL_319;
        }
      }
      else
      {
        v486.LockQueue.Next = 0LL;
        v486.LockQueue.Lock = &ExpTaggedPoolLock;
        v277 = KeGetCurrentIrql();
        v451 = v277;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v277);
          LOBYTE(v277) = v451;
        }
        v486.OldIrql = v277;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v278 = _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&v486);
          if ( v278 )
            KxWaitForLockOwnerShip(&v486, v278, v8, v215);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&v486, &ExpTaggedPoolLock);
        }
        v451 = v217 + PoolTrackTable;
        if ( !*(_DWORD *)(v217 + PoolTrackTable) )
        {
          v279 = ExpPlFindLimitEntry(v523);
          *(_QWORD *)(v451 + 72) = v279;
          *(_QWORD *)(v219 + 72) = v279;
          *(_DWORD *)(PoolTrackTable + 80LL * v216) = v523;
          *(_DWORD *)v219 = v523;
        }
        KeReleaseInStackQueuedSpinLock(&v486);
        v214 = v460;
        v8 = v504;
        v215 = v462;
        v212 = v473;
      }
    }
  }
  v110 = v441;
LABEL_167:
  if ( (v110 & 0x20) != 0 )
    RtlRaiseStatus(-1073741670);
  return v11;
}
