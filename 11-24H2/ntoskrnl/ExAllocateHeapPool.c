/*
 * XREFs of ExAllocateHeapPool @ 0x1402ACDB0
 * Callers:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402ACCF0 (ExpAllocatePoolWithTagFromNode.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     PspReturnResourceQuota @ 0x14024B468 (PspReturnResourceQuota.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     ExpFreePoolChecks @ 0x1402B0D90 (ExpFreePoolChecks.c)
 *     RtlpHpFreeHeap @ 0x1402B2660 (RtlpHpFreeHeap.c)
 *     MmDeterminePoolType @ 0x1402B2B50 (MmDeterminePoolType.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402B2BA0 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     ExpPoolTrackerReturnLimit @ 0x1402B2E60 (ExpPoolTrackerReturnLimit.c)
 *     RtlpHpVsContextFree @ 0x1402B2F20 (RtlpHpVsContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1402B381C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     ExIsSpecialPoolAddress @ 0x1402B4928 (ExIsSpecialPoolAddress.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402B7624 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpVsContextAllocate @ 0x1402B7840 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1402B9010 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402BC4B0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextMultiAlloc @ 0x1402C0B14 (RtlpHpVsContextMultiAlloc.c)
 *     KasanPoolAllocate @ 0x1402C0EE0 (KasanPoolAllocate.c)
 *     RtlpHpAllocateHeapBackend @ 0x1402C15F0 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpSegAlloc @ 0x1402C162C (RtlpHpSegAlloc.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402C27C8 (RtlpHpVaMgrCtxQuery.c)
 *     ExpAddTagForBigPages @ 0x1402C4180 (ExpAddTagForBigPages.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ExpFreeHeapSpecialPool @ 0x1403A8B6C (ExpFreeHeapSpecialPool.c)
 *     ExpPlFindLimitEntry @ 0x1403A9D04 (ExpPlFindLimitEntry.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403A9DD0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpPoolTrackerChargeEntry @ 0x1403A9F50 (ExpPoolTrackerChargeEntry.c)
 *     ExpTrackTableGetMoreLimit @ 0x1403AA01C (ExpTrackTableGetMoreLimit.c)
 *     EtwTracePool @ 0x1403AA0C8 (EtwTracePool.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     ExpCheckForWorker @ 0x1403D3B6C (ExpCheckForWorker.c)
 *     ExCheckSingleFilter @ 0x140401588 (ExCheckSingleFilter.c)
 *     RtlpHpLargeAlloc @ 0x140420250 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x140420C64 (RtlpHpLargeFree.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x140421D08 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x1404839D4 (RtlpHpEnvCompactionIsScheduled.c)
 *     FREE_CHECK_ERESOURCE @ 0x1404917EC (FREE_CHECK_ERESOURCE.c)
 *     ExpCheckForLookaside @ 0x140499BEC (ExpCheckForLookaside.c)
 *     ExpTrackTableReturnLimit @ 0x1404A62A8 (ExpTrackTableReturnLimit.c)
 *     KeCheckForTimer @ 0x1404CEC7C (KeCheckForTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F561C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404FAC50 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     InterlockedPushListSList @ 0x1406B3940 (InterlockedPushListSList.c)
 *     RtlHeapZero @ 0x1406B4F30 (RtlHeapZero.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140B744E0 (ExpPoolFlagsToPoolType.c)
 *     ViFreeTrackedPool @ 0x140BA8FD0 (ViFreeTrackedPool.c)
 *     VfPtFreePoolNotification @ 0x140BA96EC (VfPtFreePoolNotification.c)
 */

ULONG_PTR __fastcall ExAllocateHeapPool(
        ULONG_PTR BugCheckParameter2,
        size_t Size,
        ULONG_PTR BugCheckParameter4,
        unsigned int a4)
{
  ULONG_PTR v4; // r12
  ULONG_PTR v5; // r13
  unsigned int v6; // r15d
  unsigned int v7; // r9d
  __int16 v8; // r8
  ULONG_PTR v9; // rbx
  ULONG_PTR v10; // r14
  unsigned __int64 Slow; // rdi
  __int64 *v12; // rsi
  int v13; // r11d
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rbx
  ULONG_PTR v16; // r9
  char *v17; // r12
  __int64 v18; // rax
  __int64 v19; // r12
  unsigned __int64 v20; // r14
  int v21; // r13d
  __int64 v22; // r14
  __int64 v23; // rax
  int v24; // eax
  unsigned __int64 v25; // rdx
  char v26; // r10
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r8
  char v29; // r11
  unsigned __int64 v30; // rbx
  __int64 v31; // r15
  int v32; // eax
  unsigned __int64 v33; // r14
  ULONG_PTR v34; // r12
  __int64 v35; // r10
  unsigned int v36; // r8d
  unsigned int v37; // ecx
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  signed __int64 v42; // rax
  __int16 v43; // r14
  __int64 v44; // rdx
  ULONG_PTR v45; // rcx
  signed __int64 v46; // rtt
  __int64 v47; // r10
  signed __int64 v48; // rax
  signed __int64 v49; // rax
  signed __int64 v50; // rtt
  ULONG_PTR v51; // r13
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r15
  ULONG_PTR v56; // rcx
  unsigned int v57; // edi
  unsigned __int8 v58; // dl
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v60; // rdx
  signed __int64 v61; // rcx
  __int64 HeapBackend; // rax
  ULONG_PTR v63; // r13
  unsigned __int64 v64; // r14
  unsigned __int64 v65; // r14
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r10
  unsigned int v69; // r8d
  unsigned int v70; // r11d
  _QWORD *ExSaPageArray; // r9
  int v72; // edx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // r10
  __int64 v76; // r8
  __int64 v77; // rdx
  signed __int64 j; // r11
  signed __int64 v79; // rax
  struct _KTHREAD *v80; // r9
  unsigned __int64 v81; // r11
  struct _LIST_ENTRY *v82; // rcx
  unsigned __int64 v83; // rdx
  int v84; // r10d
  __int64 v85; // r8
  unsigned __int64 v86; // rdx
  _QWORD *v87; // rcx
  __int64 v88; // r10
  unsigned int v89; // r14d
  int v90; // r9d
  __int64 v91; // rax
  _QWORD *v92; // r8
  signed __int64 v98; // rax
  unsigned int v99; // ecx
  int v100; // r14d
  __int64 v101; // r14
  int v102; // eax
  ULONG_PTR v103; // r14
  bool v104; // zf
  unsigned __int64 v105; // r13
  ULONG_PTR v106; // r15
  __int64 v107; // rax
  __int64 v108; // rax
  char v109; // bl
  __int64 v110; // r8
  __int64 v111; // rcx
  size_t v112; // rdx
  __int64 v113; // r9
  __int64 v114; // rbx
  unsigned int v115; // r9d
  __int64 v116; // rdx
  __int64 v117; // rax
  unsigned __int64 v118; // rbx
  ULONG_PTR v119; // r11
  unsigned int v120; // r10d
  __int64 v121; // rdx
  int v122; // eax
  ULONG_PTR v123; // rcx
  int v124; // ebx
  char v125; // al
  ULONG_PTR v126; // r14
  char v127; // r8
  __int64 v128; // rcx
  unsigned int v129; // ebx
  __int64 v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rdx
  __int64 v134; // rcx
  int v135; // edi
  unsigned __int64 v136; // r15
  __int16 v137; // ax
  int v138; // esi
  volatile CCHAR v139; // al
  int v140; // r8d
  __int64 v141; // r11
  unsigned int v142; // edx
  unsigned int v143; // r10d
  int v144; // eax
  __int64 v145; // r9
  unsigned __int8 v146; // di
  unsigned int n; // edx
  char *v148; // rcx
  int v149; // r9d
  volatile signed __int64 *v150; // r8
  volatile signed __int64 *v151; // rax
  signed __int64 v152; // rdx
  __int64 v153; // rbx
  __int64 v154; // rdx
  __int64 *v155; // rbx
  __int64 v156; // rax
  __int64 v157; // r9
  ULONG_PTR v158; // rdx
  char v159; // r10
  ULONG_PTR v160; // r8
  ULONG_PTR v161; // r8
  char v162; // r11
  ULONG_PTR v163; // rdi
  __int64 v164; // rsi
  unsigned __int64 v165; // rdx
  unsigned __int64 v166; // rbx
  unsigned int v167; // eax
  unsigned int v168; // ecx
  __int64 v169; // r8
  int v170; // r9d
  __int64 v171; // rcx
  __int64 v172; // rax
  __int64 v173; // r8
  __int64 v174; // rax
  signed __int64 v175; // rax
  __int64 v176; // r8
  char v177; // cl
  int v178; // edx
  unsigned __int64 v179; // rdx
  signed __int64 v180; // rtt
  __int64 v181; // r9
  signed __int64 v182; // rax
  __int64 v183; // r10
  signed __int64 v184; // rax
  signed __int64 v185; // rtt
  signed __int64 v186; // r8
  unsigned int v187; // r8d
  volatile signed __int64 *v188; // rdx
  volatile signed __int64 *v189; // rax
  signed __int64 v190; // rcx
  __int64 v191; // r11
  signed __int64 v192; // rax
  unsigned __int64 v193; // r10
  signed __int64 v194; // rbx
  signed __int64 v195; // rtt
  ULONG_PTR v196; // rcx
  __int64 v197; // rcx
  __int16 v198; // r14
  ULONG_PTR v199; // rdx
  __int16 v200; // ax
  int v201; // esi
  ULONG_PTR v202; // rbx
  __int64 v203; // rdi
  struct _KPROCESS *v204; // rdi
  __int64 v205; // r14
  ULONG_PTR v206; // r12
  unsigned __int64 *v207; // r15
  char v208; // r13
  unsigned __int64 v209; // r14
  unsigned __int64 v210; // rax
  __int64 v211; // r8
  unsigned __int64 v212; // rdx
  ULONG_PTR v213; // r10
  ULONG_PTR v214; // r9
  unsigned __int64 v215; // r8
  signed __int64 v216; // rdx
  signed __int64 v217; // rax
  signed __int64 v218; // rsi
  bool v219; // cc
  signed __int64 v220; // rsi
  ULONG_PTR v221; // r14
  unsigned __int8 v222; // r15
  int v223; // r10d
  unsigned int v224; // edx
  char *v225; // rcx
  unsigned int v226; // eax
  unsigned int v227; // r14d
  ULONG_PTR v228; // rdi
  unsigned __int64 v229; // rdx
  __int64 v230; // r8
  __int64 v231; // r10
  signed __int64 v232; // rcx
  signed __int64 v233; // rdx
  signed __int32 v234; // eax
  signed __int32 v235; // ett
  unsigned __int64 v236; // rax
  unsigned __int64 v237; // rcx
  __int64 v238; // r11
  __int64 v239; // r10
  unsigned int v240; // r8d
  int v241; // eax
  unsigned int v242; // ecx
  int v243; // edx
  __int64 v244; // rcx
  volatile signed __int64 *v245; // rax
  __int64 v246; // rdx
  __int64 v247; // rdi
  __int64 v248; // r8
  __int64 v249; // rdx
  signed __int64 i; // rbx
  signed __int64 v251; // rax
  struct _KTHREAD *v252; // r9
  unsigned __int64 v253; // rdi
  struct _LIST_ENTRY *v254; // rcx
  unsigned __int64 v255; // rdx
  int v256; // r10d
  __int64 v257; // r8
  unsigned __int64 v258; // rdx
  unsigned __int64 v259; // rcx
  volatile signed __int64 *v260; // r10
  int v261; // r9d
  __int64 v262; // rax
  volatile signed __int64 *v263; // r8
  signed __int64 v268; // rax
  unsigned int v269; // ecx
  __int64 v270; // rdi
  int v271; // eax
  unsigned __int64 v272; // r10
  __int64 v273; // r13
  int v274; // eax
  __int64 v275; // rax
  __int64 v277; // rax
  unsigned int Number; // eax
  int v279; // r8d
  __int64 v280; // r10
  unsigned int v281; // r15d
  unsigned int v282; // r9d
  __int64 v283; // rcx
  int v284; // eax
  __int64 v285; // r13
  int v286; // edx
  volatile signed __int64 *v287; // r14
  volatile signed __int64 *v288; // rax
  ULONG_PTR v289; // r10
  signed __int64 v290; // r15
  volatile signed __int64 *v291; // rcx
  signed __int64 v292; // rcx
  unsigned __int64 MoreLimit; // rax
  signed __int64 v294; // rtt
  __int64 v295; // rdx
  unsigned __int64 v296; // rtt
  __int64 v297; // r8
  ULONG_PTR v298; // rcx
  ULONG_PTR v299; // rbx
  ULONG_PTR v300; // rcx
  __int64 *v301; // r13
  ULONG_PTR v302; // r12
  unsigned __int64 *v303; // r14
  unsigned __int64 v304; // r15
  unsigned __int64 v305; // rax
  __int64 v306; // r8
  ULONG_PTR v307; // rdx
  ULONG_PTR v308; // r9
  ULONG_PTR m; // r10
  unsigned __int64 v310; // r8
  signed __int64 v311; // rdx
  signed __int64 v312; // rax
  signed __int64 v313; // rsi
  signed __int64 v314; // rsi
  volatile signed __int64 *v315; // rcx
  unsigned __int64 v316; // rax
  unsigned __int64 v319; // rdx
  signed __int64 v320; // rax
  signed __int64 v321; // rtt
  __int64 v322; // r10
  signed __int64 v323; // rax
  signed __int64 v324; // rax
  signed __int64 v325; // rtt
  int v326; // r11d
  __int64 v327; // rdx
  unsigned __int64 v328; // rdx
  signed __int64 v329; // rax
  signed __int64 v330; // rtt
  signed __int64 v331; // rax
  __int64 v332; // r11
  signed __int64 v333; // rax
  signed __int64 v334; // rtt
  signed __int64 v335; // r8
  unsigned __int64 v336; // rtt
  __int64 v337; // r8
  __int64 v338; // rax
  __int64 v339; // rax
  signed __int64 v340; // rcx
  int v341; // r11d
  __int64 v342; // r8
  __int64 LimitEntry; // rax
  unsigned __int64 v344; // rdx
  __int64 v345; // rcx
  int v346; // eax
  unsigned __int64 v348; // rax
  unsigned int v349; // eax
  ULONG_PTR v352; // rax
  char v353; // dl
  char v354; // cl
  char v355; // r8
  char v356; // cl
  char v357; // dl
  char v358; // cl
  char v359; // dl
  ULONG_PTR v360; // r13
  __int64 v361; // r14
  unsigned int v362; // eax
  unsigned __int64 v363; // r13
  int v364; // r8d
  __int64 v365; // r10
  unsigned int v366; // r14d
  unsigned int v367; // r11d
  int v368; // eax
  signed __int64 v369; // r9
  int v370; // ecx
  volatile signed __int64 *v371; // rdi
  volatile signed __int64 *v372; // rax
  ULONG_PTR v373; // rdx
  signed __int64 v374; // r14
  signed __int64 v375; // r13
  signed __int64 v376; // rax
  ULONG_PTR v377; // r14
  unsigned int v378; // ecx
  ULONG_PTR v379; // rdx
  __int64 v380; // rcx
  ULONG_PTR v381; // r10
  size_t v382; // r15
  ULONG_PTR v383; // rcx
  ULONG_PTR v384; // r15
  ULONG_PTR v385; // rax
  int v386; // eax
  __int64 v387; // rdx
  __int64 v388; // rax
  __int64 v389; // rax
  signed __int64 v390; // rdx
  unsigned __int64 v392; // rax
  unsigned int v393; // eax
  unsigned __int64 v395; // rax
  signed __int64 v396; // rtt
  int v397; // edx
  unsigned __int64 v398; // r9
  __int64 v399; // rdx
  _WORD *v400; // rcx
  unsigned __int16 *v401; // rax
  ULONG_PTR v402; // r14
  unsigned int v403; // ecx
  volatile CCHAR v404; // al
  volatile CCHAR v405; // al
  int v406; // edx
  char *v407; // r11
  signed __int64 v408; // rax
  unsigned __int64 v409; // r10
  signed __int64 v410; // rbx
  signed __int64 v411; // rtt
  int v412; // edx
  unsigned __int64 v413; // r10
  __int64 v414; // rax
  __int64 v415; // r8
  unsigned __int64 v416; // rcx
  size_t v417; // rax
  __int64 v418; // rcx
  __int64 v419; // rax
  __int64 v420; // rdx
  __int64 v421; // rax
  unsigned __int64 v422; // r11
  struct _KTHREAD *v423; // r9
  __int64 v424; // r10
  unsigned int v425; // eax
  unsigned __int64 v426; // rdx
  struct _LIST_ENTRY *v427; // rcx
  __int64 v428; // r8
  unsigned __int64 v429; // rdx
  __int64 v430; // r10
  unsigned __int64 *v431; // rdx
  __int64 v432; // rax
  unsigned __int64 v433; // r11
  struct _KTHREAD *CurrentThread; // r9
  __int64 v435; // r10
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v437; // rdx
  int v438; // edi
  __int64 v439; // r8
  unsigned __int64 v440; // rdx
  _QWORD *v441; // r10
  _QWORD *v442; // rdx
  __int64 v443; // rax
  __int64 v444; // rdx
  __int64 v445; // rdx
  __int64 v446; // r9
  int v447; // edx
  unsigned __int64 v450; // rcx
  unsigned __int64 v451; // rcx
  _BYTE *v452; // r8
  int v453; // ecx
  _BYTE *k; // r8
  __int64 v455; // r14
  __int64 v456; // rdi
  unsigned __int64 v457; // r14
  unsigned __int64 v458; // rsi
  int v459; // r8d
  __int64 v460; // r11
  unsigned int v461; // edx
  unsigned int v462; // r10d
  int v463; // eax
  __int64 v464; // r9
  int v465; // eax
  __int64 v466; // rax
  int v467; // edx
  __int64 v468; // rsi
  _WORD *v469; // rbx
  ULONG_PTR v470; // r14
  unsigned __int8 v471; // cl
  __int64 v472; // rdi
  int v473; // eax
  ULONG v474; // eax
  _BYTE *v475; // rbx
  size_t v476; // rax
  ULONG_PTR v477; // r14
  _BYTE *v478; // r15
  size_t v479; // r14
  unsigned __int64 v487; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v488; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v489; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v490; // [rsp+30h] [rbp-D0h]
  char v491; // [rsp+38h] [rbp-C8h] BYREF
  char v492; // [rsp+39h] [rbp-C7h] BYREF
  char v493; // [rsp+3Ah] [rbp-C6h] BYREF
  char v494; // [rsp+3Bh] [rbp-C5h] BYREF
  char v495; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v496; // [rsp+40h] [rbp-C0h]
  char v497; // [rsp+48h] [rbp-B8h] BYREF
  char v498; // [rsp+49h] [rbp-B7h] BYREF
  char v499; // [rsp+4Ah] [rbp-B6h] BYREF
  char v500; // [rsp+4Bh] [rbp-B5h] BYREF
  char v501[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG_PTR v502; // [rsp+50h] [rbp-B0h]
  int v503; // [rsp+58h] [rbp-A8h]
  volatile signed __int64 *v504; // [rsp+60h] [rbp-A0h]
  int v505; // [rsp+68h] [rbp-98h]
  _WORD *v506; // [rsp+70h] [rbp-90h]
  size_t v507; // [rsp+78h] [rbp-88h]
  ULONG_PTR v508; // [rsp+80h] [rbp-80h]
  ULONG_PTR v509; // [rsp+88h] [rbp-78h]
  __int64 v510; // [rsp+90h] [rbp-70h]
  unsigned int v511; // [rsp+98h] [rbp-68h]
  signed __int64 v512; // [rsp+A0h] [rbp-60h]
  __int64 v513; // [rsp+A8h] [rbp-58h]
  __int64 v514; // [rsp+B0h] [rbp-50h]
  int v515; // [rsp+B8h] [rbp-48h] BYREF
  int v516; // [rsp+BCh] [rbp-44h] BYREF
  int v517; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v518; // [rsp+C4h] [rbp-3Ch]
  signed __int64 v519; // [rsp+C8h] [rbp-38h]
  int v520; // [rsp+D0h] [rbp-30h] BYREF
  int v521; // [rsp+D4h] [rbp-2Ch] BYREF
  unsigned __int64 v522; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v523; // [rsp+E0h] [rbp-20h]
  signed __int64 v524; // [rsp+E8h] [rbp-18h]
  signed __int64 v525; // [rsp+F0h] [rbp-10h]
  unsigned int v526; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v527; // [rsp+100h] [rbp+0h]
  _DWORD v528[2]; // [rsp+108h] [rbp+8h] BYREF
  signed __int64 v529; // [rsp+110h] [rbp+10h]
  int v530; // [rsp+118h] [rbp+18h]
  int v531; // [rsp+11Ch] [rbp+1Ch]
  int v532; // [rsp+120h] [rbp+20h]
  int v533; // [rsp+124h] [rbp+24h]
  int v534; // [rsp+128h] [rbp+28h]
  __int64 v535; // [rsp+130h] [rbp+30h]
  size_t v536; // [rsp+138h] [rbp+38h]
  size_t *v537; // [rsp+140h] [rbp+40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+148h] [rbp+48h] BYREF
  _DWORD v539[2]; // [rsp+160h] [rbp+60h]
  PSLIST_ENTRY ListEnd; // [rsp+168h] [rbp+68h] BYREF
  __int128 v541; // [rsp+170h] [rbp+70h]
  struct _KLOCK_QUEUE_HANDLE v542; // [rsp+180h] [rbp+80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v543; // [rsp+198h] [rbp+98h] BYREF
  int v544; // [rsp+1B0h] [rbp+B0h]
  int v545; // [rsp+1B4h] [rbp+B4h]
  int v546; // [rsp+1B8h] [rbp+B8h]
  void *v547; // [rsp+1C0h] [rbp+C0h]
  __int64 v548; // [rsp+1C8h] [rbp+C8h]
  int *v549; // [rsp+1D0h] [rbp+D0h]
  struct _KLOCK_QUEUE_HANDLE v550; // [rsp+1D8h] [rbp+D8h] BYREF
  __int128 v551; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v552; // [rsp+200h] [rbp+100h]
  __int64 v553; // [rsp+218h] [rbp+118h]
  __int64 v554; // [rsp+228h] [rbp+128h]
  __int64 retaddr; // [rsp+288h] [rbp+188h]
  unsigned int v556; // [rsp+290h] [rbp+190h]
  __int64 v557; // [rsp+290h] [rbp+190h]
  unsigned __int8 v558; // [rsp+290h] [rbp+190h]
  unsigned int v559; // [rsp+290h] [rbp+190h]
  __int64 *SchedulingGroup; // [rsp+290h] [rbp+190h]
  unsigned int v561; // [rsp+290h] [rbp+190h]
  __int64 v562; // [rsp+290h] [rbp+190h]
  unsigned __int8 v563; // [rsp+290h] [rbp+190h]
  unsigned int v564; // [rsp+290h] [rbp+190h]
  int v565; // [rsp+290h] [rbp+190h]
  char v566; // [rsp+290h] [rbp+190h]
  unsigned int v567; // [rsp+290h] [rbp+190h]
  int v568; // [rsp+290h] [rbp+190h]
  int v569; // [rsp+290h] [rbp+190h]
  __int16 v570; // [rsp+290h] [rbp+190h]
  ULONG_PTR v571; // [rsp+290h] [rbp+190h]
  ULONG_PTR BugCheckParameter3; // [rsp+298h] [rbp+198h]
  ULONG_PTR BugCheckParameter3a; // [rsp+298h] [rbp+198h]
  int BugCheckParameter3b; // [rsp+298h] [rbp+198h]
  unsigned int BugCheckParameter3c; // [rsp+298h] [rbp+198h]
  ULONG_PTR BugCheckParameter3d; // [rsp+298h] [rbp+198h]
  int BugCheckParameter3e; // [rsp+298h] [rbp+198h]
  unsigned int BugCheckParameter3f; // [rsp+298h] [rbp+198h]
  ULONG_PTR BugCheckParameter3g; // [rsp+298h] [rbp+198h]
  ULONG_PTR BugCheckParameter3h; // [rsp+298h] [rbp+198h]
  ULONG_PTR BugCheckParameter3i; // [rsp+298h] [rbp+198h]
  int BugCheckParameter3j; // [rsp+298h] [rbp+198h]
  unsigned int v583; // [rsp+2A0h] [rbp+1A0h]

  v583 = BugCheckParameter4;
  v4 = a4;
  v507 = 0LL;
  v505 = 1;
  v5 = BugCheckParameter2 & 2;
  v6 = 2;
  v7 = BugCheckParameter4;
  v8 = *(_WORD *)&KeNumberProcessorsGroup0[9];
  if ( (BugCheckParameter2 & 2) != 0 )
    v6 = 0;
  v9 = BugCheckParameter2 & 0xFFFFFFFFFFFFFFF7uLL;
  v10 = Size;
  Slow = 0LL;
  if ( (BugCheckParameter2 & 0x408) != 0x408 )
    v9 = BugCheckParameter2;
  v508 = v9;
  if ( (v9 & 0x140) == 0 && (v8 & 0x400) != 0 )
  {
    v9 = v9 & 0xFFFFFFFFFFFFFF3FuLL | 0x40;
    v508 = v9;
  }
  v12 = qword_140EEEC40;
  v13 = 4096;
  if ( Size > 0xFE0
    || (!MmSpecialPoolTag
     || !Size
     || !(unsigned int)ExCheckSingleFilter(v7, (unsigned int)MmSpecialPoolTag) && (v413 < v10 + 16 || v413 >= v10 + 32))
    && (v9 & 0x100000000LL) == 0 )
  {
    goto LABEL_10;
  }
  v523 = v9;
  v56 = v9 & 0x1C0;
  v57 = v9;
  if ( v56 == 256 || (v8 & 0x400) == 0 )
  {
    v58 = 1;
    CurrentIrql = KeGetCurrentIrql();
    if ( v56 == 256 )
      goto LABEL_62;
  }
  else
  {
    v57 = v9 & 0xFFFFFF3F | 0x40;
    v523 = v9 & 0xFFFFFFFFFFFFFF3FuLL | 0x40;
    CurrentIrql = KeGetCurrentIrql();
  }
  v58 = 2;
LABEL_62:
  if ( CurrentIrql > v58 )
    KeBugCheckEx(0xC1u, CurrentIrql, v57, v10, 0x30uLL);
  if ( (v57 & 0x10) != 0 )
  {
    v108 = qword_140EEEC58;
  }
  else
  {
    if ( (v57 & 0x100) != 0 )
      v107 = 2LL;
    else
      v107 = (v57 & 0x80u) == 0;
    v108 = qword_140EEEC40[v107];
  }
  v527 = v108;
  v535 = RtlpHpSegAlloc((int)v108 + 320, v13, v13, v13, 4);
  if ( !v535 )
  {
    v7 = v583;
    Slow = 0LL;
    goto LABEL_10;
  }
  v109 = MEMORY[0xFFFFF78000000320];
  memset_0((void *)(v535 + 16), MEMORY[0xFFFFF78000000320] | 1, 0xFF0uLL);
  v111 = v535;
  v112 = v10 - 8;
  *(_QWORD *)(v535 + 8) = 0LL;
  v113 = v583;
  if ( (v57 & 0x400) == 0 )
    v112 = v10;
  *(_DWORD *)v111 = v112;
  *(_BYTE *)(v111 + 2) = v109 | 1;
  *(_DWORD *)(v111 + 4) = v583;
  v536 = v112;
  if ( (v57 & 0x400) != 0 )
    *(_DWORD *)v111 |= 0x4000u;
  Slow = (v111 - v112 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v523 & 2) == 0 )
  {
    memset_0((void *)((v111 - v112 + 4096) & 0xFFFFFFFFFFFFFFF0uLL), 0, v112);
    v113 = v583;
    v111 = v535;
    v112 = v536;
  }
  v114 = MmDeterminePoolType(v111, v112, v110, v113);
  v515 = 0;
  v491 = 0;
  v497 = 0;
  v522 = (v116 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  memset(&v550, 0, sizeof(v550));
  if ( v115 == PoolHitTag )
    __debugbreak();
  v117 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v117 = ExpPoolFlagsToPoolType(v114, v114 & 0x10, (unsigned int)&v515, (unsigned int)&v491, (__int64)&v497);
    if ( (int)v117 >= 0 )
    {
      v447 = v515;
      if ( v491 )
      {
        v447 = v515 | 8;
        v515 |= 8u;
      }
      v117 = EtwTracePool(3616, v447, v583, v535, v522);
    }
    v115 = v583;
  }
  LODWORD(v117) = KeGetPcr()->Prcb.Number;
  v118 = v114 & 0xFFFFFFFFFFFFFFFBuLL;
  v513 = PoolTrackTableMask;
  v119 = (ULONG_PTR)*(&ExPoolTagTables + v117);
  v510 = PoolTrackTableSize;
  BugCheckParameter3d = v119;
  v120 = PoolTrackTableMask & ((40543 * v115) ^ ((40543 * (unsigned __int64)v115) >> 32));
  v525 = v120;
  v559 = v120;
  do
  {
    while ( 1 )
    {
      v121 = 80LL * v120;
      v122 = *(_DWORD *)(v121 + v119);
      v123 = v121 + v119;
      v523 = v121;
      if ( v122 == v115 )
      {
        v124 = ExpPoolTrackerChargeEntry((v118 & 0x100) == 0, v522, v123);
        KasanPoolAllocate(Slow & 0xFFFFFFFFFFFFF000uLL);
        if ( v124 )
          goto LABEL_141;
        ExpFreeHeapSpecialPool(v527, Slow);
        v7 = v583;
        LOWORD(v9) = v508;
        Slow = 0LL;
        goto LABEL_10;
      }
      if ( v122 )
        break;
      v341 = *(_DWORD *)(v121 + PoolTrackTable);
      if ( v341 )
      {
        *(_DWORD *)v123 = v341;
        v119 = BugCheckParameter3d;
        v342 = *(_QWORD *)(v121 + PoolTrackTable + 72);
        if ( v342 )
          *(_QWORD *)(v123 + 72) = v342;
      }
      else
      {
        if ( v120 == v510 - 1 )
        {
          v119 = BugCheckParameter3d;
          break;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v550);
        v514 = v523 + PoolTrackTable;
        if ( !*(_DWORD *)(v523 + PoolTrackTable) )
        {
          LimitEntry = ExpPlFindLimitEntry(v583);
          v344 = v523;
          *(_QWORD *)(v514 + 72) = LimitEntry;
          *(_QWORD *)(v344 + BugCheckParameter3d + 72) = LimitEntry;
          *(_DWORD *)(v344 + PoolTrackTable) = v583;
          *(_DWORD *)(v344 + BugCheckParameter3d) = v583;
        }
        KeReleaseInStackQueuedSpinLock(&v550);
        v115 = v583;
        v120 = v525;
        v119 = BugCheckParameter3d;
      }
    }
    v120 = v513 & (v120 + 1);
    v525 = v120;
  }
  while ( v120 != v559 );
  ExpInsertPoolTrackerExpansion(v115, v522, v118);
  KasanPoolAllocate(Slow & 0xFFFFFFFFFFFFF000uLL);
LABEL_141:
  if ( Slow )
  {
    _InterlockedIncrement(&ExpSpecialAllocations);
    BugCheckParameter3 = Slow;
    Slow = 0LL;
    v19 = 0LL;
    goto LABEL_143;
  }
  v7 = v583;
  LOWORD(v9) = v508;
LABEL_10:
  v14 = 1LL;
  v508 = v9 & 0xFFF;
  v15 = 1LL;
  if ( v10 )
    v15 = v10;
  v523 = v15;
  if ( (_DWORD)v4 == 0x80000000 )
    goto LABEL_13;
  if ( (unsigned int)v4 >= (unsigned __int16)KeNumberNodes )
    KeBugCheckEx(0xC2u, 0xEuLL, v4, v508 & 0xFFFFFFFFFFFFFDFFuLL, v7);
  if ( (_DWORD)v4 == 0x80000000 )
LABEL_13:
    LODWORD(v4) = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( (unsigned int)v4 >= dword_140E6BC10 )
    LODWORD(v4) = 0;
  v16 = v508;
  v17 = (char *)&unk_140E6BC40 + 8384 * (unsigned int)v4;
  if ( (v508 & 0x10) != 0 )
  {
    v19 = *((_QWORD *)v17 + 3);
  }
  else
  {
    if ( (v508 & 0x100) != 0 )
      v18 = 2LL;
    else
      v18 = (v508 & 0x80u) == 0LL;
    v19 = *(_QWORD *)&v17[8 * v18];
  }
  if ( v15 > 0xFE0 )
  {
    v20 = (v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v507 = v20;
    if ( (((_WORD)v15 + 15) & 0xFF0u) > 0xFC0 || v20 >= 0x10000 )
    {
      v20 = (v20 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v507 = v20;
    }
    if ( v20 < v15 )
    {
      BugCheckParameter3 = 0LL;
      v21 = 1;
      goto LABEL_25;
    }
    if ( (v20 & 0xFFF) == 0 && v20 <= *(unsigned int *)(v19 + 528) )
    {
      HeapBackend = RtlpHpAllocateHeapBackend(v19, v20, v20, ~(_BYTE)v508 & 2);
      goto LABEL_87;
    }
    v236 = *(unsigned __int16 *)(v19 + 900);
    v237 = 1LL;
    if ( v20 > 1 )
      v237 = v20;
    v527 = v237;
    if ( v237 < v236 )
    {
      v238 = v19 + 832;
      v239 = (*(_DWORD *)(v19 + 908) >> 4) & 0x1FF;
      v240 = (*(_DWORD *)(v19 + 908) >> 13) & 0x3FFFF;
      v241 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v237 + 15) >> 4)) - 1;
      _BitScanReverse(&v242, v240);
      v561 = v241;
      v243 = 1 << v242;
      v244 = v242 - 2;
      v528[1] = v244;
      v245 = *(volatile signed __int64 **)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v244)
                                                     + 8LL * (v240 ^ v243)
                                                     + 8)
                                         + 8 * v239);
      if ( !v245 )
      {
        v245 = (volatile signed __int64 *)RtlpHpLfhThreadDataInitializeSet(v19 + 832);
        v238 = v19 + 832;
      }
      v246 = v561;
      v504 = v245;
      v247 = v238 + ((unsigned __int16)v245 << 6);
      v562 = 2LL * v561;
      v248 = *(unsigned __int16 *)(v562 + v247);
      if ( *(_WORD *)(v562 + v247) )
      {
LABEL_319:
        v249 = v238 + (unsigned int)((_DWORD)v248 << 6);
        v506 = (_WORD *)v249;
        if ( *(_WORD *)(v249 + 4) )
        {
          v432 = *(_QWORD *)(v249 + 56);
          if ( (v432 & 0xFFF) != 0 )
          {
            v433 = v432 & 0xFFFFFFFFFFFFF000uLL;
            *(_QWORD *)(v249 + 56) = v432 - 1;
            CurrentThread = KeGetCurrentThread();
            v435 = (unsigned int)*(unsigned __int8 *)((v432 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
            Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
            v437 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
            v503 = qword_140E28208 ^ *(_DWORD *)((v432 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v432 & 0xFFFFFFFFFFFFF000uLL) >> 12);
            v438 = (unsigned __int16)v503;
            v439 = (__int64)Blink + v437;
            v440 = (unsigned __int64)Blink ^ v437;
            CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v440 ^ (v440 << 16) ^ __ROL8__(Blink, 24));
            CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v440, 37);
            v16 = (v432 & 0xFFFFFFFFFFFFF000uLL) + 64;
            v441 = (_QWORD *)(v16 + 8 * (v435 - 1));
            v442 = (_QWORD *)(v16 + 8LL * *(unsigned __int8 *)((v432 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
            while ( *v442 == -1LL )
            {
              if ( v442 == v441 )
                v442 = (_QWORD *)(v433 + 64);
              else
                ++v442;
            }
            _RAX = 1LL << ((unsigned __int16)(BYTE4(v439) * (unsigned __int16)__popcnt(~*v442)) >> 8);
            __asm
            {
              pdep    rcx, rax, rcx
              tzcnt   rax, rcx
            }
            *v442 |= _RCX;
            Size = (unsigned int)((_DWORD)v442 - v16);
            *(_BYTE *)(v433 + 36) = (unsigned int)(_RAX + 8 * Size) >> 6;
            Slow = v433 + (unsigned int)HIWORD(v503) + ((_DWORD)_RAX + 8 * (_DWORD)Size) * v438;
            if ( !v5 )
              RtlHeapZero(Slow, ((unsigned int)v20 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          }
          else
          {
            Slow = RtlpHpLfhSlotAllocateSlow(v238);
          }
        }
        else
        {
          v503 = 0;
          _m_prefetchw((const void *)(v249 + 56));
          for ( i = *(_QWORD *)(v249 + 56); ; i = v251 )
          {
            if ( (i & 0xFFF) == 0 )
            {
              Slow = RtlpHpLfhSlotAllocateSlow(v238);
              goto LABEL_336;
            }
            v251 = _InterlockedCompareExchange64((volatile signed __int64 *)(v249 + 56), i - 1, i);
            if ( i == v251 )
              break;
            v503 = 1;
          }
          v252 = KeGetCurrentThread();
          v253 = i & 0xFFFFFFFFFFFFF000uLL;
          v489 = i & 0xFFFFFFFFFFFFF000uLL;
          v254 = v252[1].SchedulerApc.ApcListEntry.Blink;
          v255 = (unsigned __int64)v252[1].SchedulerApc.Reserved[0];
          v256 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x18);
          LODWORD(v502) = qword_140E28208 ^ *(_DWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((i & 0xFFFFFFFFFFFFF000uLL) >> 12);
          v257 = (__int64)v254 + v255;
          v511 = (unsigned __int16)v502;
          v258 = (unsigned __int64)v254 ^ v255;
          v252[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v258 ^ (v258 << 16) ^ __ROL8__(v254, 24));
          v252[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v258, 37);
          v259 = (i & 0xFFFFFFFFFFFFF000uLL) + 64;
          v518 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x32);
          v260 = (volatile signed __int64 *)(v259 + 8 * ((unsigned int)(v256 - 8) - 1LL));
          v261 = BYTE4(v257);
          v563 = *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x27);
          v262 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24);
          BugCheckParameter3e = BYTE4(v257);
          v504 = v260;
          v263 = (volatile signed __int64 *)(v259 + 8 * v262);
LABEL_324:
          while ( 1 )
          {
            _RDX = ~*v263;
            if ( *v263 != -1 )
              break;
            if ( v263 == v260 )
              goto LABEL_485;
            ++v263;
          }
          while ( 1 )
          {
            if ( (qword_140E28228 & 4) != 0 )
            {
              _RAX = 1LL << ((unsigned __int16)(v261 * __popcnt(_RDX)) >> 8);
              __asm
              {
                pdep    r9, rax, rdx
                tzcnt   r10, r9
              }
            }
            else
            {
              if ( v263 == v260 || v518 != 64 )
              {
                __asm { tzcnt   rcx, rdx }
                _BitScanReverse64(&v392, _RDX);
                v530 = v392;
                v393 = v392 - _RCX + 1;
                if ( v518 < v393 )
                  v393 = v518;
                BugCheckParameter3e = _RCX + ((v393 * v261) >> 8);
                _RDX = __ROR8__(_RDX, BugCheckParameter3e);
                __asm { tzcnt   r10, rdx }
                LODWORD(_R10) = BugCheckParameter3e + _R10;
              }
              else
              {
                _RDX = __ROR8__(_RDX, v261);
                __asm { tzcnt   r10, rdx }
                LODWORD(_R10) = ((_BYTE)v261 + (_BYTE)_R10) & 0x3F;
              }
              _R9 = 1LL << _R10;
            }
            _m_prefetchw((const void *)v263);
            v268 = _InterlockedOr64(v263, _R9);
            Size = v268;
            if ( (_R9 & v268) == 0 )
              break;
            v261 = BugCheckParameter3e;
            _RDX = ~v268;
            v260 = v504;
            if ( v268 == -1 )
            {
              v259 = v253 + 64;
              if ( v263 != v504 )
              {
                ++v263;
                goto LABEL_324;
              }
LABEL_485:
              v263 = (volatile signed __int64 *)v259;
              goto LABEL_324;
            }
          }
          v16 = v511;
          v269 = _R10 + 8 * ((_DWORD)v263 - (v253 + 64));
          BugCheckParameter3f = v269;
          *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v269 >> 6;
          v270 = WORD1(v502) + (unsigned int)v16 * v269;
          if ( v563 <= 1u )
          {
            v272 = i & 0xFFFFFFFFFFFFF000uLL;
            if ( v269 > *(unsigned __int16 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
            {
              RtlpHpLfhSubsegmentPrefetch(v238, v489, (unsigned int)v270);
              v272 = Size;
            }
LABEL_333:
            Slow = v272 + v270;
            if ( !v5 )
            {
              RtlHeapZero(Slow, ((unsigned int)v20 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
              v272 = i & 0xFFFFFFFFFFFFF000uLL;
            }
          }
          else
          {
            v271 = RtlpHpLfhSubsegmentCommitBlock(v238, v489, (unsigned int)v270);
            v272 = i & 0xFFFFFFFFFFFFF000uLL;
            if ( v271 >= 0 )
              goto LABEL_333;
            v16 = 0LL;
            Slow = 0LL;
            if ( BugCheckParameter3f != -1 )
            {
              v328 = v489 + 8LL * (BugCheckParameter3f >> 6);
              _m_prefetchw((const void *)(v328 + 64));
              _InterlockedAnd64((volatile signed __int64 *)(v328 + 64), __ROL8__(-2LL, BugCheckParameter3f & 0x3F));
              goto LABEL_453;
            }
          }
          if ( Slow )
          {
LABEL_336:
            v273 = v19 + 832;
          }
          else
          {
LABEL_453:
            v329 = *(_QWORD *)(v272 + 16);
            v273 = v19 + 832;
            do
            {
              v512 = v329;
              v519 = v329;
              if ( BYTE6(v329) == 1 )
                BYTE6(v519) = 2;
              ++WORD1(v519);
              Size = (unsigned __int64)*(unsigned __int16 *)(v272 + 44) << 6;
              v330 = v329;
              v329 = _InterlockedCompareExchange64((volatile signed __int64 *)(v272 + 16), v519, v329);
            }
            while ( v330 != v329 );
            if ( !*(_BYTE *)(Size + v273 + 92) )
            {
              *(_BYTE *)(Size + v273 + 92) = 1;
              if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v273 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
              {
                RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)v273 + 56LL));
                v272 = i & 0xFFFFFFFFFFFFF000uLL;
              }
            }
            if ( BYTE6(v512) == 1 )
            {
              v16 = v273 + (WORD2(v512) << 6);
              _m_prefetchw((const void *)(v16 + 8));
              v331 = *(_QWORD *)(v16 + 8);
              v332 = *(_DWORD *)(v272 + 24) & 0xFFF;
              Size = v331 - (v331 & 0xFFF);
              *(_QWORD *)(v272 + 24) = Size | v332;
              v334 = v331;
              v333 = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)(v16 + 8),
                       v331 ^ (i ^ v331) & 0xFFFFFFFFFFFFF000uLL,
                       v331);
              if ( v334 != v333 )
              {
                do
                {
                  v335 = v333;
                  Size = v333 - (v333 & 0xFFF);
                  *(_QWORD *)(v272 + 24) = Size | v332;
                  v333 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v16 + 8),
                           v333 ^ (i ^ v333) & 0xFFFFFFFFFFFFF000uLL,
                           v333);
                }
                while ( v333 != v335 );
              }
            }
          }
          if ( v503 )
            RtlpHpLfhBucketUpdateAffinityMapping(v273, v273 + ((unsigned __int64)(unsigned __int16)v506[1] << 6));
          v15 = v523;
        }
        v237 = v527;
        v14 = (unsigned int)v527;
        if ( Slow == -1LL )
          goto LABEL_341;
        goto LABEL_88;
      }
      if ( RtlpHpLfhBucketCheckAndUpdate(v238, v246, v248) )
      {
        v238 = v19 + 832;
        v451 = v19 + 832 + ((unsigned __int64)BYTE4(v504) << 8) + 1472;
        LODWORD(v248) = *(unsigned __int16 *)(v562 + v451);
        if ( v247 != v451 )
          *(_WORD *)(v562 + v247) = *(_WORD *)(v562 + v451);
        goto LABEL_319;
      }
      v237 = v527;
    }
    v14 = (unsigned int)v237;
LABEL_341:
    if ( v237 > 0x20000 )
    {
      if ( v237 > *(unsigned int *)(v19 + 528) )
        HeapBackend = RtlpHpLargeAlloc(v19, v20, v237, v6);
      else
        HeapBackend = RtlpHpAllocateHeapBackend(v19, v20, v237, v6);
    }
    else
    {
      HeapBackend = RtlpHpVsContextAllocate(v19 + 704, (unsigned int)v20, v14, v6);
    }
LABEL_87:
    Slow = HeapBackend;
LABEL_88:
    if ( Slow )
    {
      v63 = v508;
      if ( !(unsigned int)ExpAddTagForBigPages(Slow, v583, v507, v508, 0, 0) )
      {
        v21 = v505;
        BugCheckParameter3 = 0LL;
        goto LABEL_25;
      }
      v492 = 0;
      v498 = 0;
      BugCheckParameter3g = v507;
      v516 = 0;
      memset(&v542, 0, sizeof(v542));
      if ( v583 == PoolHitTag )
        __debugbreak();
      if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
        && (int)ExpPoolFlagsToPoolType(v63, v63 & 0x10, (unsigned int)&v516, (unsigned int)&v492, (__int64)&v498) >= 0 )
      {
        v412 = v516;
        if ( v492 )
        {
          v412 = v516 | 8;
          v516 |= 8u;
        }
        EtwTracePool(3616, v412, v583, Slow, BugCheckParameter3g);
      }
      Number = KeGetPcr()->Prcb.Number;
      v279 = PoolTrackTableMask;
      v504 = (volatile signed __int64 *)(v63 & 0xFFFFFFFFFFFFFFFBuLL);
      v514 = PoolTrackTableMask;
      v280 = (__int64)*(&ExPoolTagTables + Number);
      v513 = v280;
      v506 = (_WORD *)PoolTrackTableSize;
      v281 = PoolTrackTableMask & ((40543 * v583) ^ ((40543 * (unsigned __int64)v583) >> 32));
      v282 = v281;
      v564 = v281;
      while ( 1 )
      {
        while ( 1 )
        {
          v283 = 80LL * v281;
          v284 = *(_DWORD *)(v280 + v283);
          v285 = v280 + v283;
          v519 = v283;
          if ( v284 == v583 )
          {
            v14 = 1LL;
            if ( ((unsigned __int16)v504 & 0x100) != 0 )
            {
              v286 = 0;
              v287 = (volatile signed __int64 *)(v285 + 32);
              v288 = (volatile signed __int64 *)(v285 + 40);
            }
            else
            {
              v286 = 1;
              v287 = (volatile signed __int64 *)(v285 + 8);
              v288 = (volatile signed __int64 *)(v285 + 16);
            }
            v565 = v286;
            _InterlockedIncrement64(v288);
            v289 = BugCheckParameter3g;
            v290 = _InterlockedExchangeAdd64(v287, BugCheckParameter3g);
            if ( *(_QWORD *)(v285 + 72) )
            {
              v291 = (volatile signed __int64 *)(v285 + 8LL * v286 + 56);
              v504 = v291;
LABEL_362:
              v292 = *v291;
              while ( 1 )
              {
                v512 = v292;
                if ( (v292 & 1) != 0 || v292 >= v290 )
                  break;
                MoreLimit = ExpTrackTableGetMoreLimit(*(_QWORD *)(v285 + 72), v289, (unsigned int)v286);
                v14 = 1LL;
                if ( !MoreLimit )
                {
                  v21 = 0;
                  goto LABEL_381;
                }
                if ( MoreLimit == 1 )
                {
                  v291 = v504;
                  v294 = v512;
                  if ( v294 == _InterlockedCompareExchange64(v504, 1LL, v512) )
                    break;
                  v286 = v565;
                  v289 = BugCheckParameter3g;
                  goto LABEL_362;
                }
                v292 = _InterlockedExchangeAdd64(v504, MoreLimit);
                v290 = *v287;
                v286 = v565;
                v289 = BugCheckParameter3g;
              }
            }
LABEL_380:
            v21 = 1;
LABEL_381:
            v298 = Slow;
            Slow = 0LL;
            BugCheckParameter3 = v298;
            Size = 0xFFFF800000000000uLL;
            if ( byte_140FCDC28 )
            {
              if ( v298 < 0xFFFF800000000000uLL )
                KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v298, 0LL);
              if ( (v298 & 7) != 0 )
                KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v298, 8uLL);
            }
            v16 = v298 & 0xFFFFFFFFFFFFFFF8uLL;
            v299 = v298 + v15 - (v298 & 0xFFFFFFFFFFFFFFF8uLL);
            v300 = v507 + v298 - (v298 & 0xFFFFFFFFFFFFFFF8uLL);
            if ( byte_140FCDC28 )
            {
              if ( v16 < 0xFFFF800000000000uLL )
                KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v16, 0LL);
              if ( v299 > v300 )
                KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v299, v300);
              if ( v300 + v16 < v16 )
                KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v16, v300);
              v478 = (_BYTE *)(KasaniShadow + ((v16 + 0x800000000000LL) >> 3));
              v477 = v300 + (((_BYTE)v299 - 1) & 7) - (unsigned __int64)(((_BYTE)v300 - 1) & 7) - v299;
              v476 = v299 >> 3;
              v571 = v299 >> 3;
              if ( v299 >> 3 )
                goto LABEL_780;
              goto LABEL_763;
            }
            goto LABEL_25;
          }
          if ( !v284 )
          {
            v326 = *(_DWORD *)(v283 + PoolTrackTable);
            if ( v326 )
            {
              *(_DWORD *)v285 = v326;
              v327 = *(_QWORD *)(v283 + PoolTrackTable + 72);
              if ( v327 )
                *(_QWORD *)(v285 + 72) = v327;
              continue;
            }
            if ( (_WORD *)v281 != (_WORD *)((char *)v506 - 1) )
              break;
          }
          v281 = v279 & (v281 + 1);
          if ( v281 == v282 )
          {
            ExpInsertPoolTrackerExpansion(v583, BugCheckParameter3g, v504);
            v14 = 1LL;
            goto LABEL_380;
          }
        }
        v542.LockQueue.Next = 0LL;
        v542.LockQueue.Lock = &ExpTaggedPoolLock;
        v338 = KeGetCurrentIrql();
        v510 = v338;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v338, 2LL);
          v283 = v519;
          LOBYTE(v338) = v510;
        }
        v542.OldIrql = v338;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( !_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&v542) )
            goto LABEL_481;
          KxWaitForLockOwnerShip(&v542);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&v542, &ExpTaggedPoolLock);
        }
        v283 = v519;
LABEL_481:
        v510 = v283 + PoolTrackTable;
        if ( !*(_DWORD *)(v283 + PoolTrackTable) )
        {
          v339 = ExpPlFindLimitEntry(v583);
          *(_QWORD *)(v510 + 72) = v339;
          v340 = v519;
          *(_QWORD *)(v285 + 72) = v339;
          *(_DWORD *)(v340 + PoolTrackTable) = v583;
          *(_DWORD *)v285 = v583;
        }
        KeReleaseInStackQueuedSpinLock(&v542);
        v279 = v514;
        v282 = v564;
        v280 = v513;
      }
    }
LABEL_123:
    BugCheckParameter3 = 0LL;
LABEL_143:
    v21 = v505;
    goto LABEL_25;
  }
  v64 = v15 + 16;
  if ( (v508 & 8) != 0 )
  {
    v64 += (unsigned int)ExpCacheLineSize;
    if ( v64 > 0xFE0 )
    {
      v64 -= (unsigned int)ExpCacheLineSize;
      v508 &= ~8uLL;
    }
  }
  v65 = (v64 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v487 = v65;
  v507 = v65;
  if ( v65 - 513 <= 0xD7F )
  {
    v398 = 0x140000000uLL;
    v399 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v65 + 15) >> 4));
    v507 = (unsigned __int16)RtlpBucketBlockSizes[v399];
    v400 = *(_WORD **)(v19 + 56);
    v569 = v399 - 33;
    v506 = v400;
    if ( !v400 )
    {
LABEL_617:
      v65 = v507;
      v487 = v507;
      goto LABEL_93;
    }
    v401 = &v400[32 * (unsigned int)(v399 - 33) + 32];
    BugCheckParameter3i = (ULONG_PTR)v401;
    ++*((_DWORD *)v401 + 5);
    if ( *v401 )
    {
      v502 = (ULONG_PTR)RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v400[32 * (unsigned int)(v399 - 33) + 32]);
      v402 = v502;
      if ( v502 )
        goto LABEL_608;
      v401 = (unsigned __int16 *)BugCheckParameter3i;
    }
    ++*((_DWORD *)v401 + 6);
    v14 = v401[8];
    v403 = *v401;
    Size = v507;
    v537 = 0LL;
    ListEnd = 0LL;
    if ( v403 < (unsigned int)v14
      && (v14 = ((unsigned int)v14 - v403) >> 1, (_DWORD)v14)
      && (v14 = (unsigned int)(v14 + 1), v507 <= 0x20000)
      && (v473 = RtlpHpVsContextMultiAlloc((int)v19 + 704, v507, v14, v398, (__int64)&v537, (__int64)&ListEnd)) != 0 )
    {
      v402 = (ULONG_PTR)v537;
      v502 = (ULONG_PTR)v537;
      Size = *v537;
      v537 = (size_t *)*v537;
      v474 = v473 - 1;
      if ( v474 )
        InterlockedPushListSList((PSLIST_HEADER)&v506[32 * v569 + 32], (PSLIST_ENTRY)Size, ListEnd, v474);
    }
    else
    {
      v502 = 0LL;
      v402 = 0LL;
    }
LABEL_608:
    v16 = v508;
    if ( (v508 & 2) == 0 )
    {
      if ( !v402 )
      {
LABEL_616:
        v14 = 1LL;
        goto LABEL_617;
      }
      RtlHeapZero(v402 + 16, v507 - 16);
      v16 = v508;
    }
    if ( v402 )
    {
      v106 = v502;
      goto LABEL_122;
    }
    goto LABEL_616;
  }
LABEL_93:
  if ( v65 > 1 )
    v14 = v65;
  v66 = *(unsigned __int16 *)(v19 + 900);
  v504 = (volatile signed __int64 *)v14;
  if ( v14 >= v66 )
  {
    v105 = v487;
    goto LABEL_420;
  }
  v67 = (unsigned int)(v14 + 15) >> 4;
  v68 = (*(_DWORD *)(v19 + 908) >> 4) & 0x1FF;
  v69 = (*(_DWORD *)(v19 + 908) >> 13) & 0x3FFFF;
  v70 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + v67) - 1;
  _BitScanReverse((unsigned int *)&v67, v69);
  ExSaPageArray = KeGetCurrentPrcb()->ExSaPageArray;
  v72 = 1 << v67;
  v73 = (unsigned int)(v67 - 2);
  v531 = v73;
  v556 = v70;
  v74 = *(_QWORD *)(*(_QWORD *)(ExSaPageArray[v73] + 8LL * (v69 ^ v72) + 8) + 8 * v68);
  if ( !v74 )
  {
    v74 = RtlpHpLfhThreadDataInitializeSet(v19 + 832);
    v70 = v556;
  }
  v75 = v19 + 832;
  v513 = v74;
  BugCheckParameter3a = v19 + 832 + ((unsigned __int16)v74 << 6);
  v557 = 2LL * v70;
  v506 = (_WORD *)(BugCheckParameter3a + v557);
  v76 = *(unsigned __int16 *)(BugCheckParameter3a + v557);
  if ( !*(_WORD *)(BugCheckParameter3a + v557) )
  {
    if ( RtlpHpLfhBucketCheckAndUpdate(v19 + 832, v70, v76) )
    {
      v75 = v19 + 832;
      v450 = v19 + 832 + ((unsigned __int64)BYTE4(v513) << 8) + 1472;
      LODWORD(v76) = *(unsigned __int16 *)(v450 + v557);
      if ( BugCheckParameter3a != v450 )
        *v506 = *(_WORD *)(v450 + v557);
      goto LABEL_99;
    }
    v105 = v487;
    goto LABEL_419;
  }
LABEL_99:
  v77 = v75 + (unsigned int)((_DWORD)v76 << 6);
  v506 = (_WORD *)v77;
  if ( *(_WORD *)(v77 + 4) )
  {
    v421 = *(_QWORD *)(v77 + 56);
    if ( (v421 & 0xFFF) != 0 )
    {
      v490 = v65;
      v422 = v421 & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v77 + 56) = v421 - 1;
      v423 = KeGetCurrentThread();
      v424 = (unsigned int)*(unsigned __int8 *)((v421 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
      v425 = qword_140E28208 ^ *(_DWORD *)((v421 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v421 & 0xFFFFFFFFFFFFF000uLL) >> 12);
      v426 = (unsigned __int64)v423[1].SchedulerApc.Reserved[0];
      BugCheckParameter3j = (unsigned __int16)v425;
      v427 = v423[1].SchedulerApc.ApcListEntry.Blink;
      v511 = v425;
      v428 = (__int64)v427 + v426;
      v429 = (unsigned __int64)v427 ^ v426;
      v423[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v429 ^ (v429 << 16) ^ __ROL8__(v427, 24));
      v423[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v429, 37);
      v16 = v422 + 64;
      v570 = BYTE4(v428);
      v430 = v422 + 64 + 8 * (v424 - 1);
      v431 = (unsigned __int64 *)(v422 + 64 + 8LL * *(unsigned __int8 *)(v422 + 36));
      while ( 1 )
      {
        v14 = *v431;
        if ( *v431 != -1LL )
          break;
        if ( v431 == (unsigned __int64 *)v430 )
          v431 = (unsigned __int64 *)(v422 + 64);
        else
          ++v431;
      }
      _RAX = 1LL << ((unsigned __int16)(v570 * __popcnt(~*v431)) >> 8);
      __asm
      {
        pdep    rcx, rax, rcx
        tzcnt   rax, rcx
      }
      *v431 = v14 | _RCX;
      Size = (unsigned int)((_DWORD)v431 - v16);
      *(_BYTE *)(v422 + 36) = (unsigned int)(_RAX + 8 * Size) >> 6;
      v103 = v422 + (unsigned int)HIWORD(v511) + ((_DWORD)_RAX + 8 * (_DWORD)Size) * BugCheckParameter3j;
      v104 = v5 == 0;
      v502 = v103;
      v105 = v490;
      if ( v104 )
        RtlHeapZero(v103, ((unsigned int)v490 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    else
    {
      v105 = v65;
      v103 = RtlpHpLfhSlotAllocateSlow(v75);
      v502 = v103;
    }
    goto LABEL_118;
  }
  v503 = 0;
  _m_prefetchw((const void *)(v77 + 56));
  for ( j = *(_QWORD *)(v77 + 56); ; j = v79 )
  {
    if ( (j & 0xFFF) == 0 )
    {
      v105 = v65;
      v103 = RtlpHpLfhSlotAllocateSlow(v75);
      v502 = v103;
      goto LABEL_116;
    }
    v79 = _InterlockedCompareExchange64((volatile signed __int64 *)(v77 + 56), j - 1, j);
    if ( j == v79 )
      break;
    v503 = 1;
  }
  v80 = KeGetCurrentThread();
  v81 = j & 0xFFFFFFFFFFFFF000uLL;
  v488 = v65;
  v496 = v81;
  v82 = v80[1].SchedulerApc.ApcListEntry.Blink;
  v83 = (unsigned __int64)v80[1].SchedulerApc.Reserved[0];
  v84 = *(unsigned __int8 *)(v81 + 24);
  v518 = qword_140E28208 ^ *(_DWORD *)(v81 + 40) ^ (v81 >> 12);
  v85 = (__int64)v82 + v83;
  v511 = (unsigned __int16)v518;
  v86 = (unsigned __int64)v82 ^ v83;
  v80[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v86 ^ (v86 << 16) ^ __ROL8__(v82, 24));
  v80[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v86, 37);
  v87 = (_QWORD *)(v81 + 64);
  LODWORD(v502) = *(unsigned __int8 *)(v81 + 50);
  v88 = v81 + 64 + 8 * ((unsigned int)(v84 - 8) - 1LL);
  v89 = v502;
  v90 = BYTE4(v85);
  v558 = *(_BYTE *)(v81 + 39);
  v91 = *(unsigned __int8 *)(v81 + 36);
  BugCheckParameter3b = BYTE4(v85);
  v513 = v88;
  v92 = (_QWORD *)(v81 + 64 + 8 * v91);
LABEL_104:
  while ( 1 )
  {
    _RDX = ~*v92;
    if ( *v92 != -1LL )
      break;
    if ( v92 == (_QWORD *)v88 )
LABEL_484:
      v92 = v87;
    else
      ++v92;
  }
  while ( 1 )
  {
    if ( (qword_140E28228 & 4) != 0 )
    {
      _RAX = 1LL << ((unsigned __int16)(v90 * __popcnt(_RDX)) >> 8);
      __asm
      {
        pdep    r10, rax, rdx
        tzcnt   r9, r10
      }
    }
    else
    {
      if ( v92 == (_QWORD *)v88 || v89 != 64 )
      {
        __asm { tzcnt   rcx, rdx }
        _BitScanReverse64(&v348, _RDX);
        v532 = v348;
        v349 = v348 - _RCX + 1;
        if ( v89 < v349 )
          v349 = v89;
        BugCheckParameter3b = _RCX + ((v349 * v90) >> 8);
        _RDX = __ROR8__(_RDX, BugCheckParameter3b);
        __asm { tzcnt   rax, rdx }
        LODWORD(_R9) = _RAX + BugCheckParameter3b;
      }
      else
      {
        _RDX = __ROR8__(_RDX, v90);
        __asm { tzcnt   rax, rdx }
        LODWORD(_R9) = ((_BYTE)_RAX + (_BYTE)v90) & 0x3F;
      }
      _R10 = 1LL << _R9;
    }
    _m_prefetchw(v92);
    v98 = _InterlockedOr64(v92, _R10);
    Size = v98;
    if ( (_R10 & v98) == 0 )
      break;
    v90 = BugCheckParameter3b;
    _RDX = ~v98;
    v88 = v513;
    if ( v98 == -1 )
    {
      v87 = (_QWORD *)(v81 + 64);
      if ( v92 == (_QWORD *)v513 )
        goto LABEL_484;
      ++v92;
      goto LABEL_104;
    }
  }
  v14 = (unsigned int)((_DWORD)v92 - (v81 + 64));
  v99 = _R9 + 8 * v14;
  v16 = v511;
  BugCheckParameter3c = v99;
  v100 = v511 * v99;
  *(_BYTE *)(v81 + 36) = v99 >> 6;
  v101 = (unsigned int)HIWORD(v518) + v100;
  if ( v558 <= 1u )
  {
    if ( v99 > *(unsigned __int16 *)(v81 + 48) )
    {
      RtlpHpLfhSubsegmentPrefetch(v19 + 832, v81, (unsigned int)v101);
      v81 = Size;
    }
LABEL_113:
    v103 = v81 + v101;
    v104 = v5 == 0;
    v502 = v103;
    v105 = v488;
    if ( v104 )
    {
      RtlHeapZero(v103, ((unsigned int)v488 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
      v81 = v496;
    }
    goto LABEL_115;
  }
  v102 = RtlpHpLfhSubsegmentCommitBlock(v19 + 832, v81, (unsigned int)v101);
  v81 = v496;
  if ( v102 >= 0 )
    goto LABEL_113;
  v16 = 0LL;
  v502 = 0LL;
  v103 = 0LL;
  if ( BugCheckParameter3c == -1 )
  {
    v105 = v488;
LABEL_115:
    if ( v103 )
      goto LABEL_116;
    goto LABEL_439;
  }
  v319 = v496 + 8LL * (BugCheckParameter3c >> 6);
  _m_prefetchw((const void *)(v319 + 64));
  _InterlockedAnd64((volatile signed __int64 *)(v319 + 64), __ROL8__(-2LL, BugCheckParameter3c & 0x3F));
  v105 = v488;
  v502 = 0LL;
LABEL_439:
  v320 = *(_QWORD *)(v81 + 16);
  v14 = v19 + 832;
  do
  {
    v524 = v320;
    v522 = v320;
    if ( BYTE6(v320) == 1 )
      BYTE6(v522) = 2;
    ++WORD1(v522);
    Size = (unsigned __int64)*(unsigned __int16 *)(v81 + 44) << 6;
    v321 = v320;
    v320 = _InterlockedCompareExchange64((volatile signed __int64 *)(v81 + 16), v522, v320);
  }
  while ( v321 != v320 );
  if ( !*(_BYTE *)(Size + v14 + 92) )
  {
    *(_BYTE *)(Size + v14 + 92) = 1;
    if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v14 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
    {
      RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)v14 + 56LL));
      v81 = v496;
      v14 = v19 + 832;
    }
  }
  if ( BYTE6(v524) == 1 )
  {
    v16 = v14 + (WORD2(v524) << 6);
    _m_prefetchw((const void *)(v16 + 8));
    v322 = *(_QWORD *)(v81 + 24);
    v323 = *(_QWORD *)(v16 + 8);
    Size = v323 & 0xFFF;
    *(_QWORD *)(v81 + 24) = v322 ^ (v323 ^ v322) & 0xFFFFFFFFFFFFF000uLL;
    v325 = v323;
    v324 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 8), Size | v81, v323);
    if ( v325 != v324 )
    {
      do
      {
        v14 = v324;
        *(_QWORD *)(v81 + 24) = v322 ^ (v322 ^ v324) & 0xFFFFFFFFFFFFF000uLL;
        Size = v81 | v324 & 0xFFF;
        v324 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 8), Size, v324);
      }
      while ( v324 != v14 );
      v15 = v523;
    }
  }
LABEL_116:
  if ( v503 )
    RtlpHpLfhBucketUpdateAffinityMapping(v19 + 832, v19 + 832 + ((unsigned __int64)(unsigned __int16)v506[1] << 6));
LABEL_118:
  if ( v103 != -1LL )
  {
    v106 = v502;
    goto LABEL_120;
  }
LABEL_419:
  v14 = (unsigned __int64)v504;
LABEL_420:
  if ( v14 > 0x20000 )
  {
    if ( v14 > *(unsigned int *)(v19 + 528) )
      v106 = RtlpHpLargeAlloc(v19, v105, v14, v6);
    else
      v106 = RtlpHpAllocateHeapBackend(v19, v105, v14, v6);
  }
  else
  {
    v106 = RtlpHpVsContextAllocate(v19 + 704, (unsigned int)v105, v14, v6);
  }
LABEL_120:
  if ( !v106 )
    goto LABEL_123;
  v16 = v508;
LABEL_122:
  Slow = v106;
  v352 = v16 & 0x1C0;
  if ( v352 == 256 )
  {
    v353 = 1;
    if ( (v16 & 0x10) != 0 )
      v353 = 1;
  }
  else
  {
    v385 = v352 - 64;
    if ( v385 )
    {
      if ( v385 != 64 )
        goto LABEL_123;
      v353 = 0;
    }
    else
    {
      v353 = 0;
    }
  }
  v354 = v353 | 0x20;
  if ( (v16 & 4) == 0 )
    v354 = v353;
  v355 = v354;
  if ( (v16 & 2) != 0 )
    v355 = v354;
  if ( (v16 & 0x100000629LL) != 0 )
  {
    v356 = v355 | 4;
    if ( (v16 & 8) == 0 )
      v356 = v355;
    v357 = v356 | 0x80;
    if ( (v16 & 0x200) == 0 )
      v357 = v356;
    v358 = v357 | 0x40;
    if ( (v16 & 0x400) == 0 )
      v358 = v357;
    v355 = v358;
    if ( (v16 & 1) != 0 )
    {
      v355 = v358 | 8;
      if ( (v16 & 0x20) != 0 )
        v355 = v358;
    }
    else if ( (v16 & 0x20) != 0 )
    {
      v355 = v358 | 0x10;
    }
  }
  *(_DWORD *)(v106 + 4) = v583;
  *(_BYTE *)v106 = 0;
  *(_BYTE *)(v106 + 2) = v507 >> 4;
  v359 = v355 | 8;
  if ( (v16 & 1) == 0 )
    v359 = v355;
  v517 = 0;
  v493 = 0;
  *(_BYTE *)(v106 + 3) = v359 & 0x6D | 2;
  v360 = v16 & 0x3CD;
  v361 = v507;
  v499 = 0;
  BugCheckParameter3h = v507;
  memset(&v543, 0, sizeof(v543));
  if ( v583 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
    && (int)ExpPoolFlagsToPoolType(v360, 0, (unsigned int)&v517, (unsigned int)&v493, (__int64)&v499) >= 0 )
  {
    v397 = v517;
    if ( v493 )
    {
      v397 = v517 | 8;
      v517 |= 8u;
    }
    EtwTracePool(3616, v397, v583, v106 + 16, v361);
  }
  v362 = KeGetPcr()->Prcb.Number;
  v363 = v360 & 0xFFFFFFFFFFFFFFFBuLL;
  v364 = PoolTrackTableMask;
  v514 = PoolTrackTableMask;
  v365 = (__int64)*(&ExPoolTagTables + v362);
  v513 = v365;
  v506 = (_WORD *)PoolTrackTableSize;
  v366 = PoolTrackTableMask & ((40543 * v583) ^ ((40543 * (unsigned __int64)v583) >> 32));
  v367 = v366;
  v567 = v366;
  while ( 1 )
  {
    v368 = *(_DWORD *)(v365 + 80LL * v366);
    v369 = v365 + 80LL * v366;
    v512 = v369;
    if ( v368 == v583 )
      break;
    if ( v368 )
      goto LABEL_561;
    v386 = *(_DWORD *)(PoolTrackTable + 80LL * v366);
    if ( v386 )
    {
      *(_DWORD *)v369 = v386;
      v387 = *(_QWORD *)(PoolTrackTable + 80LL * v366 + 72);
      if ( v387 )
        *(_QWORD *)(v369 + 72) = v387;
      continue;
    }
    if ( (_WORD *)v366 == (_WORD *)((char *)v506 - 1) )
    {
LABEL_561:
      v366 = v364 & (v366 + 1);
      if ( v366 == v367 )
      {
        ExpInsertPoolTrackerExpansion(v583, BugCheckParameter3h, v363);
        v21 = 1;
        goto LABEL_551;
      }
    }
    else
    {
      v543.LockQueue.Next = 0LL;
      v543.LockQueue.Lock = &ExpTaggedPoolLock;
      v388 = KeGetCurrentIrql();
      v510 = v388;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v388, 2LL);
        LOBYTE(v388) = v510;
      }
      v543.OldIrql = v388;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&v543) )
          KxWaitForLockOwnerShip(&v543);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&v543, &ExpTaggedPoolLock);
      }
      v510 = 80LL * v366 + PoolTrackTable;
      if ( !*(_DWORD *)v510 )
      {
        v389 = ExpPlFindLimitEntry(v583);
        v390 = v512;
        *(_QWORD *)(v510 + 72) = v389;
        *(_QWORD *)(v390 + 72) = v389;
        *(_DWORD *)(PoolTrackTable + 80LL * v366) = v583;
        *(_DWORD *)v390 = v583;
      }
      KeReleaseInStackQueuedSpinLock(&v543);
      v364 = v514;
      v365 = v513;
      v367 = v567;
    }
  }
  if ( (v363 & 0x100) != 0 )
  {
    v370 = 0;
    v371 = (volatile signed __int64 *)(v369 + 32);
    v372 = (volatile signed __int64 *)(v369 + 40);
  }
  else
  {
    v370 = 1;
    v371 = (volatile signed __int64 *)(v369 + 8);
    v372 = (volatile signed __int64 *)(v369 + 16);
  }
  v568 = v370;
  _InterlockedIncrement64(v372);
  v373 = BugCheckParameter3h;
  v374 = _InterlockedExchangeAdd64(v371, BugCheckParameter3h);
  if ( *(_QWORD *)(v369 + 72) )
  {
    v375 = v369 + 8LL * v370;
LABEL_548:
    v376 = *(_QWORD *)(v375 + 56);
    while ( 1 )
    {
      v524 = v376;
      if ( (v376 & 1) != 0 || v376 >= v374 )
        break;
      v395 = ExpTrackTableGetMoreLimit(*(_QWORD *)(v369 + 72), v373, (unsigned int)v370);
      if ( !v395 )
      {
        v21 = 0;
        goto LABEL_551;
      }
      if ( v395 == 1 )
      {
        v396 = v524;
        if ( v396 == _InterlockedCompareExchange64((volatile signed __int64 *)(v375 + 56), 1LL, v524) )
          break;
        v369 = v512;
        v370 = v568;
        v373 = BugCheckParameter3h;
        goto LABEL_548;
      }
      v376 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v375 + 56), v395);
      v374 = *v371;
      v369 = v512;
      v370 = v568;
      v373 = BugCheckParameter3h;
    }
  }
  v21 = 1;
LABEL_551:
  v377 = v106;
  if ( (v508 & 8) != 0 )
  {
    *(_BYTE *)(v106 + 3) &= ~4u;
    v378 = (ExpCacheLineSize - 1) & (-16 - v106);
    if ( v378 )
    {
      v379 = v106 + v378;
      v380 = (__int64)v378 >> 4;
      *(_BYTE *)v379 = v380;
      *(_BYTE *)(v379 + 2) = *(_BYTE *)(v106 + 2) - v380;
      *(_BYTE *)(v379 + 1) = *(_BYTE *)(v106 + 1);
      *(_BYTE *)(v379 + 3) = *(_BYTE *)(v106 + 3) | 4;
      *(_DWORD *)(v379 + 4) = *(_DWORD *)(v106 + 4);
      if ( (unsigned __int8)*(_WORD *)v379 > 1u )
        *(_QWORD *)(v106 + 16) = ExpPoolQuotaCookie ^ v379;
      v106 = v379;
    }
  }
  Size = (unsigned __int8)byte_140FCDC28;
  v381 = v106 + 16;
  v382 = v507;
  BugCheckParameter3 = v381;
  v383 = v381 - (((_BYTE)v381 - (_BYTE)v377) & 7);
  Slow = 0LL;
  v14 = v383 - v377;
  if ( byte_140FCDC28 )
  {
    if ( v377 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v377, 0LL);
    if ( (v377 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v377, 8uLL);
    if ( v383 < v377 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v377, v14);
    v14 = (v14 - (((_BYTE)v14 - 1) & 7) + 7) >> 3;
    if ( v14 )
    {
      LOBYTE(Size) = -115;
      memset_0((void *)(KasaniShadow + ((v377 + 0x800000000000LL) >> 3)), Size, v14);
      Size = (unsigned __int8)byte_140FCDC28;
      v381 = BugCheckParameter3;
    }
  }
  v16 = v381 & 0xFFFFFFFFFFFFFFF8uLL;
  v299 = v381 + v15 - (v381 & 0xFFFFFFFFFFFFFFF8uLL);
  v384 = v377 + v382 - (v381 & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (_BYTE)Size )
  {
    if ( v16 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v16, 0LL);
    if ( v299 > v384 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v299, v384);
    if ( v384 + v16 < v16 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v16, v384);
    v476 = v299 >> 3;
    v477 = v384 + (((_BYTE)v299 - 1) & 7) - (unsigned __int64)(((_BYTE)v384 - 1) & 7) - v299;
    v571 = v299 >> 3;
    v478 = (_BYTE *)(KasaniShadow + ((v16 + 0x800000000000LL) >> 3));
    if ( v299 >> 3 )
    {
LABEL_780:
      memset_0(v478, 0, v476);
      v478 += v571;
    }
LABEL_763:
    if ( (v299 & 7) != 0 )
      *v478++ = v299 & 7;
    v479 = v477 >> 3;
    if ( v479 )
    {
      LOBYTE(Size) = -122;
      memset_0(v478, Size, v479);
    }
  }
LABEL_25:
  if ( !Slow )
  {
LABEL_78:
    v34 = 0LL;
    goto LABEL_50;
  }
  if ( (_WORD)Slow )
  {
    v22 = v19 + 320;
    goto LABEL_32;
  }
  v23 = RtlCSparseBitmapBitmaskRead(&dword_140E68310, 2 * ((Slow - qword_140E68308) >> 20));
  if ( !v23 || (v24 = v23 - 1, v24 == 2) )
  {
    RtlpHpLargeFree(v19, Slow);
    goto LABEL_78;
  }
  v22 = v19 + 320;
  if ( v24 == 1 )
    v22 = v19 + 512;
LABEL_32:
  v16 = *(_QWORD *)v22;
  v25 = Slow & *(_QWORD *)v22;
  if ( (v25 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v25 + 0x10)) != v22 )
  {
    v34 = 0LL;
    goto LABEL_49;
  }
  v26 = *(_BYTE *)(v22 + 8);
  v27 = v25 + 32LL * ((unsigned int)(Slow - v25) >> v26);
  v28 = -32LL * *(unsigned __int8 *)(v27 + 26) + v27;
  v29 = *(_BYTE *)(v28 + 24);
  v30 = v25 + ((__int64)(v28 - v25) >> 5 << v26);
  if ( (v30 == Slow) + v29 != 11 )
  {
    v34 = 0LL;
    v526 = 0;
    v60 = ((__int64)(v28 - (v16 & v28)) >> 5 << v26) + (v16 & v28);
    if ( (v29 & 3) == 3 )
    {
      if ( Slow == v60 )
        goto LABEL_82;
      if ( v29 == 15 )
      {
        if ( Slow > v60 )
        {
          if ( (unsigned int)RtlpHpVsContextFree(*(_QWORD *)(v22 + 32), v60, Slow, &v526) )
          {
            Size = *(_QWORD *)(v22 + 24);
            if ( v526 < *(unsigned __int16 *)(Size + 68) )
            {
              v16 = Size + 8LL * ((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((v526 + 15) >> 4)) - 1);
              do
              {
                v14 = *(_QWORD *)(v16 + 448);
                v61 = v14;
                v514 = v14;
                if ( (v14 & 1) == 0 )
                  break;
                if ( WORD1(v14) > 1u )
                {
                  WORD1(v514) = WORD1(v14) - 1;
                  v61 = v514;
                }
              }
              while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 448), v61, v14) != v14 );
            }
          }
          goto LABEL_50;
        }
LABEL_82:
        RtlpHpSegPageRangeShrink(v22, v28);
        goto LABEL_50;
      }
    }
LABEL_49:
    RtlpLogHeapFailure(9, *(_QWORD *)(v22 + 56), Slow, 0, 0LL, 0LL);
    goto LABEL_50;
  }
  v31 = *(_QWORD *)(v22 + 24);
  v32 = v30 + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v30 + 40) ^ (unsigned int)(v30 >> 12)) >> 16);
  v545 = qword_140E28208 ^ *(_DWORD *)(v30 + 40) ^ (v30 >> 12);
  Size = (unsigned __int64)*(unsigned __int16 *)(v30 + 44) << 6;
  v33 = ((unsigned int)(Slow - v32) * (unsigned __int64)*(unsigned int *)(Size + v31 + 72)) >> 32;
  v14 = (unsigned int)(Slow
                     - v32
                     - (unsigned __int16)v545
                     * (((unsigned int)(Slow - v32) * (unsigned __int64)*(unsigned int *)(Size + v31 + 72)) >> 32));
  v544 = v14;
  if ( (_DWORD)v14 )
    goto LABEL_78;
  v34 = 0LL;
  v35 = (*(_DWORD *)(v31 + 76) >> 4) & 0x1FF;
  v16 = (ULONG_PTR)KeGetCurrentPrcb()->ExSaPageArray;
  v36 = (*(_DWORD *)(v31 + 76) >> 13) & 0x3FFFF;
  _BitScanReverse(&v37, v36);
  v38 = 1 << v37;
  v39 = v37 - 2;
  v533 = v39;
  v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * v39) + 8LL * (v36 ^ v38) + 8) + 8 * v35);
  if ( !v40 )
    LOWORD(v40) = RtlpHpLfhThreadDataInitializeSet(v31);
  if ( (_WORD)v40 == *(_WORD *)(v30 + 46) && *(_BYTE *)(v30 + 22) != 1 )
  {
    v414 = (unsigned int)v33 >> 6;
    Size = *(_QWORD *)(v30 + 8 * v414 + 64);
    v415 = __ROL8__(-2LL, v33 & 0x3F);
    v416 = v30 + 8 * v414;
    v417 = v415 & Size;
    v14 = ~v415;
    *(_QWORD *)(v416 + 64) = v417;
    if ( (v14 & Size) != 0 )
    {
      ++*(_WORD *)(v30 + 32);
      goto LABEL_50;
    }
LABEL_83:
    RtlpLogHeapFailure(17, *(_QWORD *)v31, Slow, v30, v33, 0LL);
    goto LABEL_50;
  }
  v41 = *(_QWORD *)(v30 + 8LL * ((unsigned int)v33 >> 6) + 64);
  if ( !_bittest64(&v41, v33 & 0x3F) )
    goto LABEL_83;
  v42 = *(_QWORD *)(v30 + 16);
  v43 = v33 + 1;
  do
  {
    v529 = v42;
    v509 = v42;
    if ( BYTE6(v42) == 1 )
      BYTE6(v509) = 2;
    v44 = *(_QWORD *)(v31 + 80);
    ++WORD1(v509);
    *(_WORD *)Slow = v509;
    v553 = v44;
    v14 = (unsigned int)Slow ^ HIDWORD(v44) ^ __ROL4__(*(_DWORD *)Slow ^ v44, *(_BYTE *)Slow);
    LOWORD(v509) = v43;
    v45 = v509;
    *(_DWORD *)(Slow + 8) = v14;
    Size = (unsigned __int64)*(unsigned __int16 *)(v30 + 44) << 6;
    v46 = v42;
    v42 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 16), v45, v42);
  }
  while ( v46 != v42 );
  if ( !*(_BYTE *)(Size + v31 + 92) )
  {
    *(_BYTE *)(Size + v31 + 92) = 1;
    if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v31 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
      RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)v31 + 56LL));
  }
  if ( BYTE6(v529) == 1 )
  {
    v16 = v31 + (WORD2(v529) << 6);
    _m_prefetchw((const void *)(v16 + 8));
    v47 = *(_QWORD *)(v30 + 24);
    v48 = *(_QWORD *)(v16 + 8);
    Size = v48 & 0xFFF;
    *(_QWORD *)(v30 + 24) = v47 ^ (v48 ^ v47) & 0xFFFFFFFFFFFFF000uLL;
    v50 = v48;
    v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 8), Size | v30, v48);
    if ( v50 != v49 )
    {
      do
      {
        Size = v49 & 0xFFF;
        v14 = v49;
        *(_QWORD *)(v30 + 24) = v47 ^ (v47 ^ v49) & 0xFFFFFFFFFFFFF000uLL;
        v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 8), Size | v30, v49);
      }
      while ( v49 != v14 );
    }
  }
LABEL_50:
  if ( !v21 )
  {
    v541 = 0LL;
    BYTE2(v541) = 0;
    v51 = BugCheckParameter3;
    LOWORD(v541) = 259;
    if ( (_WORD)BugCheckParameter3 )
    {
      v52 = 0;
      goto LABEL_53;
    }
    v277 = RtlCSparseBitmapBitmaskRead(&dword_140E68310, 2 * ((BugCheckParameter3 - qword_140E68308) >> 20));
    if ( v277 && (v52 = v277 - 1, v52 != 2) )
    {
LABEL_53:
      v53 = v52;
      v539[0] = 0x100000;
      v539[1] = 0x1000000;
      v54 = BugCheckParameter3 & ~((unsigned int)v539[v52] - 1LL);
      v55 = (v54 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v54 + 16)) - 192 * v53 - 320;
    }
    else
    {
      v551 = 0LL;
      v552 = 0LL;
      RtlpHpVaMgrCtxQuery(&unk_140E68358, BugCheckParameter3, &v551);
      v554 = v552;
      v546 = DWORD2(v552);
      v55 = *(_QWORD *)v552;
    }
    v514 = v55;
    if ( !v55 )
      KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
    if ( ExpSpecialAllocations )
    {
      while ( (__int64)v12 < (__int64)qword_140EEEC60 )
      {
        if ( v55 == *v12 )
        {
          _InterlockedDecrement(&ExpSpecialAllocations);
          v468 = MmDeterminePoolType(BugCheckParameter3, Size, v14, v16);
          v469 = (_WORD *)(BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL);
          if ( byte_140FCDC28 )
          {
            if ( (unsigned __int64)v469 < 0xFFFF800000000000uLL )
              KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL, 0LL);
            if ( v469 + 2048 < v469 )
              KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL);
            memset_0((void *)(KasaniShadow + ((unsigned __int64)(v469 + 0x400000000000LL) >> 3)), 0, 0x200uLL);
          }
          v470 = 4096 - (unsigned int)(BugCheckParameter3 & 0xFFF);
          ExpFreePoolChecks(BugCheckParameter3, BugCheckParameter3);
          v471 = KeGetCurrentIrql();
          if ( v471 > (unsigned __int8)(((v468 & 0x100) == 0) + 1) )
            KeBugCheckEx(0xC1u, v471, 0x100uLL, BugCheckParameter3, 0x31uLL);
          v472 = *v469 & 0x1FFF;
          if ( ((v472 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != v470 )
            KeBugCheckEx(0xC1u, BugCheckParameter3, *v469 & 0x1FFF, v470, 0x21uLL);
          v452 = v469 + 8;
          v453 = HIWORD(*(_DWORD *)v469);
          if ( (*(_DWORD *)v469 & 0x4000) != 0 )
            v452 = v469 + 12;
          while ( (unsigned __int64)v452 < BugCheckParameter3 )
          {
            if ( *v452 != (_BYTE)v453 )
              KeBugCheckEx(0xC1u, BugCheckParameter3, (ULONG_PTR)v452, *(unsigned int *)v469, 0x23uLL);
            ++v452;
          }
          for ( k = (_BYTE *)(v472 + BugCheckParameter3);
                (unsigned __int64)k < ((BugCheckParameter3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
                ++k )
          {
            if ( *k != (_BYTE)v453 )
              KeBugCheckEx(0xC1u, BugCheckParameter3, (ULONG_PTR)k, *(unsigned int *)v469, 0x24uLL);
          }
          if ( (*(_DWORD *)v469 & 0x4000) != 0 )
            ViFreeTrackedPool(BugCheckParameter3, *v469 & 0x1FFF);
          v455 = v472 + 15;
          v456 = *(unsigned int *)((BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL) + 4);
          v457 = v455 & 0xFFFFFFFFFFFFFFF0uLL;
          v521 = 0;
          v494 = 0;
          v500 = 0;
          if ( (_DWORD)v456 == PoolHitTag )
            __debugbreak();
          if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
            && (int)ExpPoolFlagsToPoolType(v468, v468 & 0x10, (unsigned int)&v521, (unsigned int)&v494, (__int64)&v500) >= 0 )
          {
            v467 = v521;
            if ( v494 )
            {
              v467 = v521 | 8;
              v521 |= 8u;
            }
            EtwTracePool(3618, v467, v456, BugCheckParameter3, v457);
          }
          v458 = v468 & 0xFFFFFFFFFFFFFFFBuLL;
          v459 = PoolTrackTableMask;
          v460 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
          v461 = PoolTrackTableMask & ((40543 * v456) ^ ((unsigned __int64)(40543 * v456) >> 32));
          v462 = v461;
          while ( 1 )
          {
            v463 = *(_DWORD *)(v460 + 80LL * v461);
            v464 = v460 + 80LL * v461;
            if ( v463 == (_DWORD)v456 )
              break;
            if ( v463 || (v465 = *(_DWORD *)(PoolTrackTable + 80LL * v461)) == 0 )
            {
              v461 = v459 & (v461 + 1);
              if ( v461 == v462 )
              {
                ExpRemovePoolTrackerExpansion((unsigned int)v456, v457, v458, v464);
                goto LABEL_723;
              }
            }
            else
            {
              *(_DWORD *)v464 = v465;
              v466 = *(_QWORD *)(PoolTrackTable + 80LL * v461 + 72);
              if ( v466 )
                *(_QWORD *)(v464 + 72) = v466;
            }
          }
          ExpPoolTrackerReturnLimit((v458 & 0x100) == 0, v457, v460 + 80LL * v461);
LABEL_723:
          RtlpHpFreeHeap(v55, BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL);
          goto LABEL_222;
        }
        ++v12;
      }
    }
    if ( (BugCheckParameter3 & 0xFFF) != 0 )
    {
      v125 = *(_BYTE *)(BugCheckParameter3 - 13);
      v126 = BugCheckParameter3 - 16;
      if ( (v125 & 8) != 0 )
      {
        v196 = BugCheckParameter3 - 16;
        if ( (v125 & 4) != 0 )
          v196 = v126 - 16LL * (unsigned __int8)*(_WORD *)v126;
        v197 = ExpPoolQuotaCookie ^ *(_QWORD *)(v196 + 8) ^ v196;
        if ( v197 && v197 != -1 && (!ExpSpecialAllocations || !(unsigned int)ExIsSpecialPoolAddress(BugCheckParameter3)) )
        {
          if ( BugCheckParameter3 >= 0xFFFF800000000000uLL
            && byte_140E389A8[((BugCheckParameter3 >> 39) & 0x1FF) - 256] == 5 )
          {
            v198 = 256;
          }
          else
          {
            v198 = 64;
          }
          v199 = BugCheckParameter3 - 16;
          if ( (*(_BYTE *)(BugCheckParameter3 - 13) & 4) != 0 )
            v199 -= 16LL * (unsigned __int8)*(_WORD *)v199;
          v200 = *(_WORD *)(v199 + 2);
          v201 = *(_DWORD *)(v199 + 4);
          v202 = 16LL * (unsigned __int8)v200;
          if ( (v200 & 0x800) == 0 )
            goto LABEL_267;
          v203 = *(_QWORD *)(v199 + 8) ^ ExpPoolQuotaCookie;
          *(_QWORD *)(v199 + 8) = ExpPoolQuotaCookie ^ v199;
          v204 = (struct _KPROCESS *)(v199 ^ v203);
          if ( !v204 || v204 == (struct _KPROCESS *)-1LL )
            goto LABEL_267;
          if ( (unsigned __int64)v204 < 0xFFFF800000000000uLL || (v204->Header.Type & 0x7F) != 3 )
          {
            if ( v199 )
              LODWORD(v34) = v201;
            KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter3, (unsigned int)v34, (ULONG_PTR)v204);
          }
          v205 = v198 & 0x100;
          if ( v204 != PsInitialSystemProcess )
          {
            v206 = v205 != 0;
            v207 = (unsigned __int64 *)(&v204[1].SchedulingGroup->Policy + 16 * v206);
            SchedulingGroup = (__int64 *)v204[1].SchedulingGroup;
            v208 = PspResourceFlags[8 * v206];
            _m_prefetchw(v207);
            v209 = *v207;
            v210 = v207[8];
            if ( v207[10] )
            {
              v211 = 7 * v206;
              if ( v210 > v209 )
              {
                v212 = qword_140F05848[v211];
                if ( v210 - v209 > v212 )
                {
                  if ( v212 > v202 )
                    v212 = v202;
                  v296 = v207[8];
                  if ( v296 == _InterlockedCompareExchange64((volatile signed __int64 *)v207 + 8, v210 - v212, v210)
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v207 + 9, v212) + v212 > qword_140F05848[v211] )
                  {
                    v297 = _InterlockedExchange64((volatile __int64 *)v207 + 9, 0LL);
                    if ( v297 )
                      PspReturnResourceQuota(v206, (__int64)v207, v297, 0);
                  }
                }
              }
            }
            v213 = v206 << 7;
            v214 = v202;
            while ( 1 )
            {
              do
              {
                v215 = v209;
                if ( v202 < v209 )
                  v215 = v202;
                v216 = 0LL;
                if ( v202 < v209 )
                  v216 = v209 - v202;
                v217 = _InterlockedCompareExchange64((volatile signed __int64 *)v207, v216, v209);
                v104 = v209 == v217;
                v209 = v217;
              }
              while ( !v104 );
              v202 -= v215;
              if ( !v202 )
                break;
              if ( SchedulingGroup == &PspSystemQuotaBlock )
                KeBugCheckEx(0x21u, (ULONG_PTR)v204, v206, v214, v202);
              SchedulingGroup = &PspSystemQuotaBlock;
              v207 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v213);
              _m_prefetchw((char *)&PspSystemQuotaBlock + v213);
              v209 = *(__int64 *)((char *)&PspSystemQuotaBlock + v213);
            }
            v104 = (v208 & 4) == 0;
            v51 = BugCheckParameter3;
            if ( !v104 )
              _InterlockedAdd64((volatile signed __int64 *)&v204[1].ThreadListHead.Blink + v206, -(__int64)v214);
            v34 = 0LL;
          }
          if ( ObpTraceFlags )
            ObpPushStackInfo((_DWORD)v204 - 48);
          v218 = _InterlockedExchangeAdd64(
                   (volatile signed __int64 *)&v204[-1].ExtendedFeatureDisableMask,
                   0xFFFFFFFFFFFFFFFFuLL);
          v219 = v218 <= 1;
          v220 = v218 - 1;
          if ( v219 )
          {
            if ( *(_QWORD *)&v204[-1].PrimaryGroup )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v204[-1].CpuPartitionList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v204 - 48) >> 8)],
                (ULONG_PTR)v204,
                3uLL,
                *(_QWORD *)&v204[-1].PrimaryGroup);
            if ( v220 < 0 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v204, 4uLL, v220);
            ObpDeferObjectDeletion(&v204[-1].ExtendedFeatureDisableMask);
            v126 = v51 - 16;
          }
          else
          {
LABEL_267:
            v126 = v51 - 16;
          }
        }
      }
      if ( (*(_BYTE *)(v126 + 3) & 4) != 0 )
      {
        v126 -= 16LL * (unsigned __int8)*(_WORD *)v126;
        *(_BYTE *)(v126 + 3) |= 4u;
      }
      v127 = *(_BYTE *)(v126 + 3);
      v128 = 256LL;
      v129 = *(_DWORD *)(v126 + 4);
      if ( (v127 & 1) == 0 )
        v128 = 128LL;
      v130 = (unsigned int)v128 | 4LL;
      if ( (v127 & 0x20) == 0 )
        v130 = v128;
      v131 = v130 | 2;
      v496 = v131;
      if ( (v127 & 8) != 0 )
      {
        v131 |= 1uLL;
        v496 = v131;
      }
      if ( (v127 & 0xDE) != 0 )
      {
        v132 = v131 | 8;
        if ( (v127 & 4) == 0 )
          v132 = v131;
        v133 = v132 | 0x200;
        if ( (v127 & 0x80) == 0 )
          v133 = v132;
        v134 = v133 | 0x400;
        if ( (v127 & 0x40) == 0 )
          v134 = v133;
        v496 = v134;
        if ( (v127 & 8) == 0 )
        {
          v496 = v134;
          if ( (v127 & 0x10) != 0 )
            v496 = v134 | 0x20;
        }
      }
      v135 = v126 + 16;
      v136 = 16LL * (unsigned __int8)*(_WORD *)(v126 + 2);
    }
    else
    {
      if ( BugCheckParameter3 >= 0xFFFF800000000000uLL
        && byte_140E389A8[((BugCheckParameter3 >> 39) & 0x1FF) - 256] == 5 )
      {
        v221 = 256LL;
      }
      else
      {
        v221 = 64LL;
      }
      v547 = 0LL;
      v548 = 0LL;
      v549 = 0LL;
      v222 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v222, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(&ExpLargePoolTableLock);
        v234 = ExpLargePoolTableLock & 0x7FFFFFFF;
        while ( 1 )
        {
          v235 = v234;
          v234 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v234 + 1, v234);
          if ( v235 == v234 )
            break;
          if ( v234 < 0 )
          {
            ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, v222);
            break;
          }
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, v222);
      }
      v223 = 1;
      v224 = (((40543 * (BugCheckParameter3 >> 12)) >> 32) ^ (40543 * (BugCheckParameter3 >> 12))) & (PoolBigPageTableSize - 1);
      while ( 1 )
      {
        v225 = (char *)PoolBigPageTable + 32 * v224;
        if ( *(_QWORD *)v225 == BugCheckParameter3 )
          break;
        if ( ++v224 >= (unsigned __int64)PoolBigPageTableSize )
        {
          if ( !v223 )
            goto LABEL_280;
          v224 = 0;
          v223 = 0;
        }
      }
      if ( !v225 )
LABEL_280:
        KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter3, v221, 0LL);
      v547 = PoolBigPageTable;
      v549 = &ExpPoolBigEntriesInUse;
      v548 = PoolBigPageTableSize;
      v226 = *((_DWORD *)v225 + 3);
      v129 = *((_DWORD *)v225 + 2);
      v227 = (v226 >> 8) & 0xFFF;
      v509 = *((_QWORD *)v225 + 2);
      v496 = v227;
      if ( (v226 & 0x100) != 0 )
        v228 = BugCheckParameter3 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v225 + 3);
      else
        v228 = -1LL;
      _InterlockedExchangeAdd(&ExpPoolBigEntriesInUse, 0xFFFFFFFF);
      *((_QWORD *)v225 + 3) = 0LL;
      _InterlockedIncrement64((volatile signed __int64 *)v225);
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
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v222);
      __writecr8(v222);
      if ( v228 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( (PEPROCESS)v228 != PsInitialSystemProcess )
        {
          v301 = *(__int64 **)(v228 + 760);
          v302 = (v227 & 0x100) != 0LL;
          v303 = (unsigned __int64 *)&v301[16 * v302];
          v566 = PspResourceFlags[8 * v302];
          _m_prefetchw(v303);
          v304 = *v303;
          v305 = v303[8];
          if ( v303[10] )
          {
            v306 = 7 * v302;
            if ( v305 > v304 )
            {
              v307 = qword_140F05848[v306];
              if ( v305 - v304 > v307 )
              {
                if ( v307 > v509 )
                  v307 = v509;
                v336 = v303[8];
                if ( v336 == _InterlockedCompareExchange64((volatile signed __int64 *)v303 + 8, v305 - v307, v305)
                  && _InterlockedExchangeAdd64((volatile signed __int64 *)v303 + 9, v307) + v307 > qword_140F05848[v306] )
                {
                  v337 = _InterlockedExchange64((volatile __int64 *)v303 + 9, 0LL);
                  if ( v337 )
                    PspReturnResourceQuota(v302, (__int64)&v301[16 * v302], v337, 0);
                }
              }
            }
          }
          v308 = v509;
          for ( m = v302 << 7; ; v304 = *(__int64 *)((char *)&PspSystemQuotaBlock + m) )
          {
            do
            {
              v310 = v304;
              if ( v308 < v304 )
                v310 = v308;
              v311 = 0LL;
              if ( v308 < v304 )
                v311 = v304 - v308;
              v312 = _InterlockedCompareExchange64((volatile signed __int64 *)v303, v311, v304);
              v104 = v304 == v312;
              v304 = v312;
            }
            while ( !v104 );
            v308 -= v310;
            if ( !v308 )
              break;
            if ( v301 == &PspSystemQuotaBlock )
              KeBugCheckEx(0x21u, v228, v302, v509, v308);
            v301 = &PspSystemQuotaBlock;
            v303 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + m);
            _m_prefetchw((char *)&PspSystemQuotaBlock + m);
          }
          v51 = BugCheckParameter3;
          if ( (v566 & 4) != 0 )
            _InterlockedAdd64((volatile signed __int64 *)(v228 + 8 * v302 + 512), -(__int64)v509);
          v34 = 0LL;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo(v228 - 48);
        v313 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v228 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v219 = v313 <= 1;
        v314 = v313 - 1;
        if ( v219 )
        {
          if ( *(_QWORD *)(v228 - 40) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v228 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v228 - 48) >> 8)],
              v228,
              3uLL,
              *(_QWORD *)(v228 - 40));
          if ( v314 < 0 )
            KeBugCheckEx(0x18u, 0LL, v228, 4uLL, v314);
          ObpDeferObjectDeletion(v228 - 48);
        }
      }
      v136 = v509;
      v126 = v51;
      v135 = v51;
    }
    v137 = *(_WORD *)&KeNumberProcessorsGroup0[9];
    v138 = v496;
    if ( (v137 & 0x207) != 0 )
    {
      if ( (v496 & 0xC0) != 0 && (v137 & 0x200) != 0 )
        ExpCheckForLookaside(v126, v136);
      v404 = KeNumberProcessorsGroup0[9];
      if ( (v404 & 1) != 0 )
        KeCheckForTimer(v126);
      FREE_CHECK_ERESOURCE(v126, v136);
      v405 = KeNumberProcessorsGroup0[9];
      if ( (v405 & 2) != 0 )
        ExpCheckForWorker(v126);
    }
    v139 = KeNumberProcessorsGroup0[9];
    if ( (v139 & 0x10) != 0 )
      VfPtFreePoolNotification(v126, v129, v136, v51);
    v520 = 0;
    v495 = 0;
    v501[0] = 0;
    if ( v129 == PoolHitTag )
      __debugbreak();
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
      && (int)ExpPoolFlagsToPoolType(v138, v138 & 0x10, (unsigned int)&v520, (unsigned int)&v495, (__int64)v501) >= 0 )
    {
      v406 = v520;
      if ( v495 )
      {
        v406 = v520 | 8;
        v520 |= 8u;
      }
      EtwTracePool(3618, v406, v129, v135, v136);
    }
    v140 = PoolTrackTableMask;
    v141 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
    v142 = PoolTrackTableMask & ((40543 * v129) ^ ((40543 * (unsigned __int64)v129) >> 32));
    v143 = v142;
    while ( 1 )
    {
      v144 = *(_DWORD *)(v141 + 80LL * v142);
      v145 = v141 + 80LL * v142;
      if ( v144 == v129 )
        break;
      if ( v144 || (v274 = *(_DWORD *)(PoolTrackTable + 80LL * v142)) == 0 )
      {
        v142 = v140 & (v142 + 1);
        if ( v142 == v143 )
        {
          LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
          LockHandle.LockQueue.Next = 0LL;
          *(_QWORD *)&LockHandle.OldIrql = 0LL;
          v146 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v146, 2LL);
          LockHandle.OldIrql = v146;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            if ( _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle) )
              KxWaitForLockOwnerShip(&LockHandle);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented(&LockHandle, &ExpTaggedPoolLock);
          }
          for ( n = 0; ; ++n )
          {
            if ( n >= (unsigned __int64)PoolTrackTableExpansionSize )
            {
LABEL_423:
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              v315 = (volatile signed __int64 *)((char *)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number)
                                               + 80 * (unsigned int)(PoolTrackTableSize - 1));
              v316 = -(__int64)v136;
              if ( (v138 & 0x100) != 0 )
              {
                _InterlockedIncrement64(v315 + 6);
                _InterlockedAdd64(v315 + 4, v316);
              }
              else
              {
                _InterlockedIncrement64(v315 + 3);
                _InterlockedAdd64(v315 + 1, v316);
              }
              goto LABEL_193;
            }
            v148 = (char *)PoolTrackTableExpansion + 80 * n;
            if ( *(_DWORD *)v148 == v129 )
              break;
            if ( !*(_DWORD *)v148 )
              goto LABEL_423;
          }
          if ( (v138 & 0x100) != 0 )
          {
            v149 = 0;
            v150 = (volatile signed __int64 *)(v148 + 32);
            v151 = (volatile signed __int64 *)(v148 + 48);
          }
          else
          {
            v149 = 1;
            v150 = (volatile signed __int64 *)(v148 + 8);
            v151 = (volatile signed __int64 *)(v148 + 24);
          }
          _InterlockedIncrement64(v151);
          v152 = _InterlockedExchangeAdd64(v150, -(__int64)v136);
          if ( *((_QWORD *)v148 + 9) )
          {
            v407 = &v148[8 * v149];
            if ( (v407[56] & 1) == 0 )
            {
              v408 = *((_QWORD *)v407 + 7);
              v409 = (4 * v136 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
              if ( v409 == 64 )
                v409 = 128LL;
              while ( 1 )
              {
                v410 = v409 + v152;
                if ( v152 >= v408 || v410 >= v408 )
                  break;
                v411 = v408;
                v408 = _InterlockedCompareExchange64((volatile signed __int64 *)v407 + 7, v410, v408);
                if ( v411 == v408 )
                {
                  v418 = *((_QWORD *)v148 + 9);
                  v419 = v408 - v410;
                  v420 = -v419;
                  if ( v419 >= 0 )
                    v420 = v419;
                  ExpTrackTableReturnLimit(v418, v420);
                  break;
                }
                v152 = *v150;
              }
            }
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          goto LABEL_193;
        }
      }
      else
      {
        *(_DWORD *)v145 = v274;
        v275 = *(_QWORD *)(PoolTrackTable + 80LL * v142 + 72);
        if ( v275 )
          *(_QWORD *)(v145 + 72) = v275;
      }
    }
    if ( (v138 & 0x100) != 0 )
    {
      v187 = 0;
      v188 = (volatile signed __int64 *)(v145 + 32);
      v189 = (volatile signed __int64 *)(v145 + 48);
    }
    else
    {
      v187 = 1;
      v188 = (volatile signed __int64 *)(v145 + 8);
      v189 = (volatile signed __int64 *)(v145 + 24);
    }
    _InterlockedIncrement64(v189);
    v190 = _InterlockedExchangeAdd64(v188, -(__int64)v136);
    if ( *(_QWORD *)(v145 + 72) )
    {
      v191 = v145 + 8LL * v187;
      if ( (*(_BYTE *)(v191 + 56) & 1) == 0 )
      {
        v192 = *(_QWORD *)(v191 + 56);
        v193 = (4 * v136 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
        if ( v193 == 64 )
          v193 = 128LL;
        while ( 1 )
        {
          v194 = v193 + v190;
          if ( v190 >= v192 || v194 >= v192 )
            break;
          v195 = v192;
          v192 = _InterlockedCompareExchange64((volatile signed __int64 *)(v191 + 56), v194, v192);
          if ( v195 == v192 )
          {
            v443 = v192 - v194;
            v444 = -v443;
            if ( v443 >= 0 )
              v444 = v443;
            ExpTrackTableReturnLimit(*(_QWORD *)(v145 + 72), v444);
            break;
          }
          v190 = *v188;
        }
      }
    }
LABEL_193:
    if ( (v138 & 0x400) != 0 )
      ViFreeTrackedPool(v51, v136);
    if ( byte_140FCDC28 )
    {
      if ( v126 < 0xFFFF800000000000uLL )
        KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v126, 0LL);
      if ( (v126 & 7) != 0 )
        KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v126, 8uLL);
      if ( v136 + v126 < v126 )
        KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v126, v136);
      v475 = (_BYTE *)(KasaniShadow + ((v126 + 0x800000000000LL) >> 3));
      if ( v136 >> 3 )
      {
        memset_0((void *)(KasaniShadow + ((v126 + 0x800000000000LL) >> 3)), 0, v136 >> 3);
        v475 += v136 >> 3;
      }
      if ( (v136 & 7) != 0 )
        *v475 = v136 & 7;
    }
    v153 = v514;
    v154 = *(_QWORD *)(v514 + 56);
    if ( v136 - 513 <= 0xD7F && v154 )
    {
      v345 = v154
           + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v136 + 15) >> 4)) - 33 + 1LL) << 6);
      ++*(_DWORD *)(v345 + 28);
      if ( *(_WORD *)v345 >= *(_WORD *)(v345 + 16) )
      {
        ++*(_DWORD *)(v345 + 32);
        v346 = 0;
      }
      else
      {
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v345, (PSLIST_ENTRY)v126);
        v346 = 1;
      }
      if ( v346 )
      {
LABEL_222:
        if ( (v508 & 0x20) != 0 )
          RtlRaiseStatus(-1073741670);
        return v34;
      }
    }
    if ( (_WORD)v126 )
    {
      v155 = (__int64 *)(v153 + 320);
    }
    else
    {
      v156 = RtlCSparseBitmapBitmaskRead(&dword_140E68310, 2 * ((v126 - qword_140E68308) >> 20));
      if ( !v156 || (_DWORD)v156 == 3 )
      {
        RtlpHpLargeFree(v153, v126);
        goto LABEL_222;
      }
      v155 = (__int64 *)(v153 + 320);
      if ( (_DWORD)v156 == 2 )
        v155 += 24;
    }
    v157 = *v155;
    v158 = v126 & *v155;
    if ( (__int64 *)(v158 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v158 + 0x10)) == v155 )
    {
      v159 = *((_BYTE *)v155 + 8);
      v160 = v158 + 32LL * ((unsigned int)(v126 - v158) >> v159);
      v161 = -32LL * *(unsigned __int8 *)(v160 + 26) + v160;
      v162 = *(_BYTE *)(v161 + 24);
      v163 = v158 + ((__int64)(v161 - v158) >> 5 << v159);
      if ( (v163 == v126) + v162 == 11 )
      {
        v164 = v155[3];
        v165 = (unsigned __int64)*(unsigned __int16 *)(v163 + 44) << 6;
        v166 = (((unsigned int)v126
               - ((_DWORD)v163
                + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v163 + 40) ^ (unsigned int)(v163 >> 12)) >> 16)))
              * (unsigned __int64)*(unsigned int *)(v165 + v164 + 72)) >> 32;
        if ( (_DWORD)v126
           - ((_DWORD)v163
            + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v163 + 40) ^ (unsigned int)(v163 >> 12)) >> 16)) != (unsigned __int16)(qword_140E28208 ^ *(_WORD *)(v163 + 40) ^ (v163 >> 12)) * ((((unsigned int)v126 - ((_DWORD)v163 + (((unsigned int)qword_140E28208 ^ *(_DWORD *)(v163 + 40) ^ (unsigned int)(v163 >> 12)) >> 16))) * (unsigned __int64)*(unsigned int *)(v165 + v164 + 72)) >> 32) )
          goto LABEL_222;
        v167 = (*(_DWORD *)(v164 + 76) >> 13) & 0x3FFFF;
        _BitScanReverse(&v168, v167);
        v169 = (*(_DWORD *)(v164 + 76) >> 4) & 0x1FF;
        v170 = 1 << v168;
        v171 = v168 - 2;
        v534 = v171;
        v172 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v171) + 8LL * (v167 ^ v170) + 8)
                         + 8 * v169);
        if ( !v172 )
          LOWORD(v172) = RtlpHpLfhThreadDataInitializeSet(v164);
        if ( (_WORD)v172 != *(_WORD *)(v163 + 46) || *(_BYTE *)(v163 + 22) == 1 )
        {
          v173 = v166;
          v174 = *(_QWORD *)(v163 + 8 * (v166 >> 6) + 64);
          if ( _bittest64(&v174, v166 & 0x3F) )
          {
            v175 = *(_QWORD *)(v163 + 16);
            do
            {
              v525 = v175;
              v496 = v175;
              if ( BYTE6(v175) == 1 )
                BYTE6(v496) = 2;
              if ( v126 )
              {
                v176 = *(_QWORD *)(v164 + 80);
                v177 = v496;
                *(_WORD *)v126 = v496;
                v178 = __ROL4__(*(_DWORD *)v126 ^ v176, v177);
                LOWORD(v496) = v166 + 1;
                *(_DWORD *)(v126 + 8) = v126 ^ HIDWORD(v176) ^ v178;
              }
              ++WORD1(v496);
              v179 = (unsigned __int64)*(unsigned __int16 *)(v163 + 44) << 6;
              v180 = v175;
              v175 = _InterlockedCompareExchange64((volatile signed __int64 *)(v163 + 16), v496, v175);
            }
            while ( v180 != v175 );
            if ( !*(_BYTE *)(v179 + v164 + 92) )
            {
              *(_BYTE *)(v179 + v164 + 92) = 1;
              if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(*(_QWORD *)(*(_QWORD *)v164 + 56LL)) )
                RtlpHpEnvCompactionSchedule(*(_QWORD *)(v295 + 56));
            }
            if ( BYTE6(v525) == 1 )
            {
              v181 = v164 + (WORD2(v525) << 6);
              _m_prefetchw((const void *)(v181 + 8));
              v182 = *(_QWORD *)(v181 + 8);
              v183 = *(_QWORD *)(v163 + 24);
              *(_QWORD *)(v163 + 24) = v183 & 0xFFF | (v182 - (v182 & 0xFFF));
              v185 = v182;
              v184 = _InterlockedCompareExchange64((volatile signed __int64 *)(v181 + 8), v182 & 0xFFF | v163, v182);
              if ( v185 != v184 )
              {
                do
                {
                  v186 = v184;
                  *(_QWORD *)(v163 + 24) = v183 ^ (v183 ^ v184) & 0xFFFFFFFFFFFFF000uLL;
                  v184 = _InterlockedCompareExchange64((volatile signed __int64 *)(v181 + 8), v184 & 0xFFF | v163, v184);
                }
                while ( v184 != v186 );
              }
            }
            goto LABEL_222;
          }
        }
        else
        {
          v445 = *(_QWORD *)(v163 + 8 * (v166 >> 6) + 64);
          v446 = __ROL8__(-2LL, v166 & 0x3F);
          v173 = v166;
          *(_QWORD *)(v163 + 8 * (v166 >> 6) + 64) = v446 & v445;
          if ( (~v446 & v445) != 0 )
          {
            ++*(_WORD *)(v163 + 32);
            goto LABEL_222;
          }
        }
        RtlpLogHeapFailure(17, *(_QWORD *)v164, v126, v163, v173, 0LL);
        goto LABEL_222;
      }
      v528[0] = 0;
      v229 = (v161 & v157) + ((__int64)(v161 - (v161 & v157)) >> 5 << v159);
      if ( (v162 & 3) == 3 )
      {
        if ( v126 == v229 )
          goto LABEL_309;
        if ( v162 == 15 )
        {
          if ( v126 > v229 )
          {
            if ( (unsigned int)RtlpHpVsContextFree(v155[4], v229, v126, v528) )
            {
              v230 = v155[3];
              if ( v528[0] < (unsigned int)*(unsigned __int16 *)(v230 + 68) )
              {
                v231 = v230
                     + 8LL
                     * ((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                      + ((unsigned __int64)(unsigned int)(v528[0] + 15) >> 4))
                      - 1);
                do
                {
                  v510 = *(_QWORD *)(v231 + 448);
                  v232 = v510;
                  v233 = v510;
                  if ( (v510 & 1) == 0 )
                    break;
                  if ( WORD1(v510) > 1u )
                  {
                    --WORD1(v510);
                    v233 = v510;
                  }
                }
                while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v231 + 448), v233, v232) != v232 );
              }
            }
            goto LABEL_222;
          }
LABEL_309:
          RtlpHpSegPageRangeShrink(v155, v161);
          goto LABEL_222;
        }
      }
    }
    RtlpLogHeapFailure(9, v155[7], v126, 0, 0LL, 0LL);
    goto LABEL_222;
  }
  v34 = BugCheckParameter3;
  if ( !BugCheckParameter3 )
    goto LABEL_222;
  return v34;
}
