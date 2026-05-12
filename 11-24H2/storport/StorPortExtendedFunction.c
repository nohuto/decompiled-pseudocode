/*
 * XREFs of StorPortExtendedFunction @ 0x140046040
 * Callers:
 *     NvmeDumpFreeDumpAdapterInfo @ 0x14019F718 (NvmeDumpFreeDumpAdapterInfo.c)
 *     NvmeDumpPopulateMiniportDumpInfo @ 0x14019FB64 (NvmeDumpPopulateMiniportDumpInfo.c)
 * Callees:
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x140008324 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     StorpInitializeWorkItem @ 0x14000E63C (StorpInitializeWorkItem.c)
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1400130A8 (NvmeAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x14001BDD0 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x14001BEEC (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x14001C05C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x14001C0A0 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidGetStartIoPerfParams @ 0x140025BD0 (RaidGetStartIoPerfParams.c)
 *     StorpGetOriginalMdl @ 0x140028CB0 (StorpGetOriginalMdl.c)
 *     RaidGetMessageNumberFromProcessorNumber @ 0x140028DF0 (RaidGetMessageNumberFromProcessorNumber.c)
 *     RaidAdapterAcquireStartIoLock @ 0x140029420 (RaidAdapterAcquireStartIoLock.c)
 *     StorpGetRequestInfo @ 0x14002ABE0 (StorpGetRequestInfo.c)
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 *     RaidNtStatusToStorStatus @ 0x140033780 (RaidNtStatusToStorStatus.c)
 *     RaidSyncAcpiEvalMethod @ 0x1400397F0 (RaidSyncAcpiEvalMethod.c)
 *     StorpTelemetryMiniportEvent @ 0x140039E04 (StorpTelemetryMiniportEvent.c)
 *     StorpGetDeviceObjects @ 0x14003BE70 (StorpGetDeviceObjects.c)
 *     StorpGetSystemAddress @ 0x14003D594 (StorpGetSystemAddress.c)
 *     StorpCompleteServiceIrp @ 0x14003D874 (StorpCompleteServiceIrp.c)
 *     StorReset @ 0x140040430 (StorReset.c)
 *     StorpAllocateHostMemoryBuffer @ 0x140040D6C (StorpAllocateHostMemoryBuffer.c)
 *     RaidRegisterPerfStates @ 0x1400415CC (RaidRegisterPerfStates.c)
 *     RaidInitializePerfOpts @ 0x140041BFC (RaidInitializePerfOpts.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x140042470 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorEtwMiniportLogError @ 0x140042658 (StorEtwMiniportLogError.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x140042A9C (StorpLogRegisterAdapterPerfStates.c)
 *     RaidCaptureLiveDump @ 0x140042C58 (RaidCaptureLiveDump.c)
 *     RaidInitializeCryptoEngine @ 0x1400457B4 (RaidInitializeCryptoEngine.c)
 *     StorpRequestTimer @ 0x14004CEE0 (StorpRequestTimer.c)
 *     StorpFreeHostMemoryBuffer @ 0x1400538E8 (StorpFreeHostMemoryBuffer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140053AB4 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     NvmeInitializePerfOpts @ 0x140053B54 (NvmeInitializePerfOpts.c)
 *     StorpFreeWorkItem @ 0x140053CE0 (StorpFreeWorkItem.c)
 *     StorpFreeTimer @ 0x1400542FC (StorpFreeTimer.c)
 *     StorpUnitInitializePoFxPower @ 0x14005456C (StorpUnitInitializePoFxPower.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x140055684 (RaidAdapterCacheOperationalPowerRange.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     RaMiniportSaveFeatureList @ 0x1400559E0 (RaMiniportSaveFeatureList.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     RaidGetD3ColdCapability @ 0x140055CE0 (RaidGetD3ColdCapability.c)
 *     NvmeFreeContiguousMemorySpecifyCacheEx @ 0x140055D98 (NvmeFreeContiguousMemorySpecifyCacheEx.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline @ 0x14005669C (Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     FreeNvmeIceEntry @ 0x1400695BC (FreeNvmeIceEntry.c)
 *     RaidNvmeIceIoStart @ 0x140072D4C (RaidNvmeIceIoStart.c)
 *     StorpAdapterInitializePoFxPower @ 0x140074E94 (StorpAdapterInitializePoFxPower.c)
 *     StorpQueueWorkItemInternal @ 0x140075B64 (StorpQueueWorkItemInternal.c)
 *     WPP_SF_is @ 0x140075F48 (WPP_SF_is.c)
 *     RaidGetD3ColdInterface @ 0x140077DF4 (RaidGetD3ColdInterface.c)
 *     RaidTranslateResourceListAddress @ 0x14007ADAC (RaidTranslateResourceListAddress.c)
 *     NvmeGetMessageNumberFromProcessorNumber @ 0x140088018 (NvmeGetMessageNumberFromProcessorNumber.c)
 *     RaidAllocateAddressMapping @ 0x14008AADC (RaidAllocateAddressMapping.c)
 *     StorCreateSystemLogEntry @ 0x14008F060 (StorCreateSystemLogEntry.c)
 *     StorEtwMiniportLogByteStream @ 0x1400A8AB0 (StorEtwMiniportLogByteStream.c)
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400A8EE0 (StorEtwNVMeICEInterfaceEvent.c)
 *     StorEtwNvmeMiniportEvent @ 0x1400A9580 (StorEtwNvmeMiniportEvent.c)
 *     StorEtwRaidMiniportEvent @ 0x1400A9F58 (StorEtwRaidMiniportEvent.c)
 *     NvmeAdapterStorMQAddController @ 0x1400D95B8 (NvmeAdapterStorMQAddController.c)
 *     NvmeControllerCompleteAllRequests @ 0x1400EBA14 (NvmeControllerCompleteAllRequests.c)
 *     NvmeControllerStorMQQuiesceCompletionDPCs @ 0x1400F5410 (NvmeControllerStorMQQuiesceCompletionDPCs.c)
 *     NvmeControllerWaitForOutstandingIoComplete @ 0x1400F5D14 (NvmeControllerWaitForOutstandingIoComplete.c)
 *     PortSrbGetLbaFromCdb @ 0x14013AC9C (PortSrbGetLbaFromCdb.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 StorPortExtendedFunction(unsigned int a1, __int64 a2, ...)
{
  __int64 v3; // r13
  unsigned int SystemAddress; // ebx
  int *v5; // rsi
  int *v6; // r15
  __int64 v7; // r12
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  __int64 v10; // rcx
  int **v11; // rax
  int v12; // r8d
  int *v13; // rdx
  unsigned int v14; // r10d
  unsigned __int64 v15; // r8
  int v17; // edx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v18; // rdi
  __int64 v19; // r15
  unsigned int v20; // r12d
  PDEVICE_OBJECT v21; // rcx
  __int64 v22; // rdx
  __int64 Pool2; // rax
  PDEVICE_OBJECT v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rdi
  PDEVICE_OBJECT v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // r15
  ULONG v30; // r12d
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v31; // rdi
  PMDL Mdl; // rax
  struct _MDL *v33; // rdi
  struct _MDL *v34; // rdi
  _QWORD *v35; // rbx
  __int16 *v36; // rdi
  int v37; // r15d
  PHYSICAL_ADDRESS v38; // r12
  union _LARGE_INTEGER *v39; // r14
  int **v40; // rax
  int *v41; // rdx
  int v42; // ecx
  bool v43; // zf
  __int64 v44; // rcx
  PDEVICE_OBJECT v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 (__fastcall *v49)(__int64, __int64, _QWORD *, __int16 *, int, union _LARGE_INTEGER *, PHYSICAL_ADDRESS, _DWORD, PLARGE_INTEGER, ULONG); // rax
  int D3ColdInterface; // eax
  _QWORD *v51; // rdi
  unsigned __int8 v52; // r14
  int **v53; // rax
  int *v54; // rcx
  int v55; // edx
  __int64 v56; // rcx
  __int16 *v57; // rdi
  int **v58; // rax
  int *v59; // rcx
  int v60; // edx
  __int64 v61; // rdx
  __int64 v62; // rdx
  int **v63; // rax
  int *v64; // rcx
  int v65; // edx
  __int64 v66; // r8
  __int64 v67; // r8
  __int64 v68; // r9
  __int16 *v69; // rdx
  int **v70; // rax
  int *v71; // rcx
  int v72; // r8d
  __int64 v73; // r8
  unsigned __int8 *v74; // r8
  __int64 v75; // rax
  int v76; // ecx
  __int16 *v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // eax
  __int64 v80; // rax
  int v81; // ecx
  _QWORD *v82; // rbx
  PVOID *v83; // rdi
  PVOID *v84; // r14
  PVOID **v85; // rax
  int v86; // edx
  int v87; // ecx
  int v88; // ecx
  unsigned int v89; // r14d
  int v90; // r15d
  int v91; // r12d
  __int64 *Unit; // rax
  __int16 *v93; // rdi
  USHORT v94; // bx
  USHORT *v95; // rbx
  _DWORD *v96; // r15
  USHORT v97; // bx
  USHORT HighestNodeNumber; // r14
  unsigned __int16 v99; // di
  _DWORD *v100; // rbx
  __int16 *v101; // rbx
  ULONG ProcessorIndexFromNumber; // eax
  int v103; // ecx
  int LockArray_high; // eax
  int v105; // ecx
  ULONG *v106; // rbx
  NTSTATUS LogicalProcessorRelationship; // eax
  int v108; // edi
  union _LARGE_INTEGER *v109; // rbx
  __int64 ContiguousNodeMemory; // rax
  int v111; // ecx
  __int64 v112; // r12
  __int16 *v113; // r15
  __int64 *v114; // r14
  __int64 v115; // r14
  __int64 v116; // rdi
  __int64 Pool; // rax
  __int64 v118; // rcx
  __int128 v119; // xmm0
  _QWORD *v120; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v121; // r15
  ULONG v122; // r12d
  union _LARGE_INTEGER *v123; // rdi
  __int64 v124; // rcx
  __int64 v125; // rcx
  struct _DEVICE_OBJECT *v126; // rcx
  __int64 *v127; // rax
  int v128; // eax
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int16 *v131; // rbx
  __int16 *v132; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v133; // rbx
  __int16 *v134; // rbx
  _QWORD *v135; // rcx
  int **v136; // rax
  int v137; // r8d
  int v138; // eax
  _QWORD *v139; // r15
  int *v140; // rdi
  int **v141; // rax
  int *v142; // rbx
  int v143; // ecx
  __int64 v144; // r9
  __int64 v145; // rax
  _QWORD *v146; // r14
  volatile signed __int32 *v147; // rcx
  int *v148; // rax
  int **v149; // rax
  int *v150; // rdx
  int v151; // r8d
  bool v152; // zf
  __int64 v153; // rax
  char v154; // bl
  __int64 v155; // rdx
  __int64 v156; // r8
  __int64 *v157; // rax
  __int64 *v158; // r8
  int v159; // eax
  LARGE_INTEGER *v160; // rbx
  union _LARGE_INTEGER *v161; // rcx
  _QWORD *v162; // rbx
  __int16 *v163; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v164; // r14
  _QWORD *v165; // rdi
  int v166; // r14d
  int **v167; // rax
  int v168; // r8d
  char v169; // al
  int v170; // r15d
  KIRQL CurrentIrql; // r13
  __int64 *v172; // rax
  __int64 v173; // r14
  unsigned int v174; // edi
  unsigned int v175; // eax
  _QWORD *v176; // rdi
  int v177; // r14d
  int **v178; // rax
  int v179; // r8d
  __int64 *v180; // rdi
  KIRQL v181; // al
  ULONG v182; // edx
  KIRQL v183; // al
  ULONG v184; // edx
  _QWORD *v185; // rbx
  unsigned int v186; // r12d
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v187; // r14
  int **v188; // rax
  int v189; // edx
  __int64 *v190; // rax
  __int64 *v191; // rdi
  _QWORD *v192; // rcx
  unsigned int v193; // edx
  _QWORD *v194; // rcx
  unsigned int v195; // edx
  _QWORD *v196; // rbx
  unsigned int v197; // r12d
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v198; // r14
  int **v199; // rax
  int v200; // edx
  __int64 *v201; // rax
  _QWORD *v202; // rcx
  unsigned int v203; // edx
  _QWORD *v204; // rcx
  unsigned int v205; // edx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v206; // rdi
  _QWORD *v207; // rbx
  __int16 *v208; // r12
  union _LARGE_INTEGER *v209; // r14
  int **v210; // rax
  int v211; // edx
  __int64 *v212; // rax
  int v213; // eax
  _QWORD *v214; // rcx
  int v215; // eax
  char v216; // bl
  int **v217; // rax
  int v218; // edx
  int v219; // ecx
  int v220; // r8d
  __int64 v221; // rbx
  int **v222; // rax
  int v223; // edx
  __int64 v224; // rax
  unsigned int v225; // edi
  unsigned int v226; // r12d
  unsigned int v227; // edi
  __int64 v228; // rax
  KIRQL v229; // al
  __int64 v230; // rdx
  unsigned int v231; // ecx
  ULONG v232; // ecx
  __int64 v233; // r8
  __int64 v234; // rcx
  __int64 v235; // r9
  _QWORD *v236; // rbx
  PVOID SystemRoutineAddress; // rax
  int v238; // ebx
  _QWORD *v239; // rcx
  __int16 *v240; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v241; // r14
  __int64 v242; // rax
  int v243; // r8d
  __int16 *v244; // rdi
  _QWORD *v245; // rcx
  int **v246; // rax
  int v247; // r8d
  __int64 *v248; // rax
  struct _DEVICE_OBJECT *v249; // rcx
  int **v250; // rax
  int v251; // edx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v252; // r10
  __int16 *v253; // rdx
  union _LARGE_INTEGER *v254; // r9
  __int64 v255; // r11
  __int64 v256; // rcx
  int v257; // ecx
  int **v258; // rax
  int v259; // edx
  __int16 *v260; // rdi
  unsigned int v261; // r14d
  __int64 v262; // rbx
  __int64 v263; // rcx
  int v264; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v265; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v266; // rbx
  __int16 *v267; // rbx
  __int64 v268; // rax
  int *v269; // rcx
  int v270; // edx
  __int16 *v271; // r8
  __int64 v272; // rdx
  unsigned int v273; // eax
  bool v274; // zf
  __int64 v275; // rax
  int *v276; // rcx
  int v277; // edx
  unsigned int v278; // eax
  bool v279; // zf
  __int64 v280; // rax
  int *v281; // rcx
  int v282; // edx
  int **v283; // rax
  int v284; // edx
  int v285; // r9d
  int **v286; // rax
  int v287; // edx
  union _LARGE_INTEGER *v288; // r12
  PHYSICAL_ADDRESS *v289; // r14
  __int64 v290; // rax
  int v291; // edi
  int v292; // edi
  bool v293; // zf
  void *v294; // rax
  __int64 v295; // rax
  int v296; // ecx
  __int64 v297; // rcx
  bool v298; // zf
  __int64 v299; // rax
  __int64 v300; // rax
  va_list v301; // rdx
  int v302; // r11d
  int v303; // r8d
  int v304; // r9d
  unsigned int *v305; // rbx
  __int64 v306; // r15
  unsigned int v307; // r12d
  char v308; // r13
  __int64 v309; // r14
  unsigned int v310; // edi
  __int64 v311; // r10
  __int64 v312; // rcx
  __int64 v313; // rax
  int v314; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v315; // rbx
  __int64 Timer; // rax
  _BYTE *v317; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v318; // rdi
  char v319; // al
  _BYTE *v320; // rdi
  int v321; // ecx
  __int16 *v322; // r15
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v323; // rdi
  _DWORD *v324; // r14
  __int64 v325; // rax
  int v326; // ecx
  int v327; // ecx
  int v328; // ecx
  int v329; // ecx
  __int16 *v330; // rdi
  __int16 *v331; // rdi
  __int64 v332; // rax
  int *v333; // rcx
  int v334; // edx
  __int64 v335; // rax
  int *v336; // rcx
  int v337; // edx
  __int64 v338; // rax
  int v339; // eax
  union _LARGE_INTEGER *v340; // rbx
  _QWORD *v341; // rdi
  BOOLEAN v342; // r15
  struct _KEVENT *v343; // rbx
  __int64 v344; // rax
  int v345; // ecx
  __int16 *v346; // rbx
  int **v347; // rax
  int v348; // r8d
  __int64 *v349; // rax
  int v350; // eax
  unsigned int v351; // ecx
  char v352; // dl
  int **v353; // rax
  int v354; // edx
  struct _KDPC_WATCHDOG_INFORMATION *v355; // rdi
  KIRQL v356; // bl
  NTSTATUS v357; // edi
  NTSTATUS DpcWatchdogInformation; // eax
  int **v359; // rax
  int v360; // r8d
  int v361; // ebx
  _QWORD *v362; // rcx
  __int64 v363; // rax
  __int64 v364; // rcx
  __int64 v365; // rax
  __int64 v366; // r8
  __int64 (__fastcall *v367)(_QWORD); // rax
  KIRQL *v368; // rbx
  KSTART_ROUTINE *v369; // rbx
  __int16 *v370; // r13
  KPRIORITY *v371; // r12
  union _LARGE_INTEGER *v372; // r14
  int **v373; // rax
  int v374; // edx
  NTSTATUS v375; // eax
  NTSTATUS v376; // ebx
  _QWORD *v377; // rdi
  KPRIORITY v378; // ebx
  NTSTATUS v379; // edi
  struct _GROUP_AFFINITY *v380; // rbx
  struct _GROUP_AFFINITY *v381; // rdi
  struct _GROUP_AFFINITY *v382; // rbx
  int v383; // eax
  unsigned int v384; // ecx
  __int64 v385; // rdi
  __int16 *v386; // r12
  union _LARGE_INTEGER *v387; // r14
  int **v388; // rax
  int v389; // edx
  __int64 *v390; // r9
  __int64 v391; // rdi
  int v392; // eax
  __int16 *v393; // rbx
  NTSTATUS ProcessorNumberFromIndex; // eax
  __int64 v395; // rax
  int *v396; // rcx
  int v397; // edx
  int NodeActiveAffinity2; // eax
  _QWORD *v399; // rbx
  int **v400; // rax
  int *v401; // rdi
  int v402; // ecx
  __int64 v403; // rax
  __int64 v404; // rax
  PLARGE_INTEGER v405; // rcx
  union _LARGE_INTEGER *v406; // rdi
  __int64 *v407; // r12
  int **v408; // rax
  int v409; // edx
  __int64 v410; // rax
  int v411; // edx
  int v412; // r10d
  int v413; // ebx
  __int64 v414; // r12
  char v415; // di
  union _LARGE_INTEGER *v416; // r14
  __int64 *v417; // r15
  __int64 v418; // r15
  int v419; // r8d
  const char *v420; // rax
  __int64 v421; // r8
  __int64 v422; // rax
  int AddressMapping; // eax
  char v424; // dl
  int v425; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v426; // rbx
  __int64 DrvrPxyWrapper; // rcx
  _QWORD *v428; // rbx
  unsigned __int64 v429; // rdx
  unsigned __int64 v430; // r12
  __int64 v431; // rcx
  __int64 v432; // rax
  int v433; // r8d
  __int64 v434; // r15
  _QWORD *v435; // rdi
  unsigned int v436; // r11d
  unsigned int i; // r10d
  __int64 v438; // rcx
  unsigned __int64 v439; // rdx
  char *v440; // r9
  __int64 v441; // r8
  int v442; // ecx
  int v443; // ecx
  unsigned __int64 v444; // rcx
  unsigned __int8 v445; // r11
  unsigned int v446; // r14d
  unsigned int v447; // r9d
  __int64 v448; // rcx
  unsigned __int64 v449; // rdx
  char *v450; // r10
  __int64 v451; // r8
  int v452; // ecx
  int v453; // ecx
  unsigned __int64 v454; // rcx
  unsigned __int64 LbaFromCdb; // r9
  unsigned __int64 v456; // kr00_8
  unsigned __int64 v457; // rax
  __int64 v458; // rcx
  __int64 v459; // rax
  ULONG_PTR v460; // r14
  __int64 v461; // r15
  __int64 v462; // rcx
  __int64 (__fastcall *v463)(_QWORD, _QWORD); // rax
  __int64 v464; // rcx
  __int64 (__fastcall *v465)(_QWORD, _QWORD); // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v466; // r13
  PVOID *v467; // rdi
  _QWORD *v468; // rax
  PVOID *v469; // r14
  volatile signed __int32 *v470; // rbx
  int v471; // r15d
  PVOID *v472; // rcx
  PVOID **v473; // rax
  __int64 v474; // rax
  int v475; // ecx
  int v476; // eax
  int **v477; // rax
  int v478; // edx
  __int64 v479; // rax
  int v480; // ecx
  __int64 v481; // rax
  __int64 v482; // r14
  _QWORD *j; // rax
  signed __int32 v484[8]; // [rsp+0h] [rbp-100h] BYREF
  PIRP Irp; // [rsp+20h] [rbp-E0h]
  PKSTART_ROUTINE StartRoutine; // [rsp+28h] [rbp-D8h]
  PVOID StartContext; // [rsp+30h] [rbp-D0h]
  __int64 v488; // [rsp+38h] [rbp-C8h]
  __int64 v489; // [rsp+48h] [rbp-B8h]
  ULONG v490; // [rsp+60h] [rbp-A0h]
  PHYSICAL_ADDRESS v491; // [rsp+68h] [rbp-98h]
  va_list v492; // [rsp+70h] [rbp-90h]
  char LowPart; // [rsp+78h] [rbp-88h]
  USHORT Count; // [rsp+7Ch] [rbp-84h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+80h] [rbp-80h]
  unsigned int v496; // [rsp+88h] [rbp-78h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v498; // [rsp+94h] [rbp-6Ch] BYREF
  int v499; // [rsp+98h] [rbp-68h] BYREF
  int v500; // [rsp+9Ch] [rbp-64h] BYREF
  int v501; // [rsp+A0h] [rbp-60h] BYREF
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v502; // [rsp+A8h] [rbp-58h]
  union _LARGE_INTEGER *QuadPart; // [rsp+B0h] [rbp-50h]
  PVOID v504; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v505; // [rsp+C0h] [rbp-40h] BYREF
  int v506; // [rsp+C8h] [rbp-38h] BYREF
  void *ThreadHandle; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v509; // [rsp+E0h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-18h] BYREF
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v511; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v512[2]; // [rsp+108h] [rbp+8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v515; // [rsp+158h] [rbp+58h] BYREF
  __int128 v516; // [rsp+170h] [rbp+70h] BYREF
  __int16 *v517; // [rsp+180h] [rbp+80h]
  union _LARGE_INTEGER *v518; // [rsp+188h] [rbp+88h]
  __int64 v519; // [rsp+190h] [rbp+90h]
  int *v520; // [rsp+198h] [rbp+98h]
  __int128 v521; // [rsp+1A0h] [rbp+A0h]
  __int128 v522; // [rsp+1B0h] [rbp+B0h]
  __int128 v523; // [rsp+1C0h] [rbp+C0h]
  __int128 v524; // [rsp+1D0h] [rbp+D0h]
  _QWORD v525[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v526[8]; // [rsp+220h] [rbp+120h] BYREF
  _OWORD v527[3]; // [rsp+260h] [rbp+160h] BYREF
  __int128 v528; // [rsp+290h] [rbp+190h]
  char v529[64]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _QWORD *v531; // [rsp+350h] [rbp+250h] BYREF
  va_list va; // [rsp+350h] [rbp+250h]
  __int16 *v533; // [rsp+358h] [rbp+258h] BYREF
  va_list va1; // [rsp+358h] [rbp+258h]
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v535; // [rsp+360h] [rbp+260h]
  union _LARGE_INTEGER *v536; // [rsp+368h] [rbp+268h] BYREF
  va_list va2; // [rsp+368h] [rbp+268h]
  PHYSICAL_ADDRESS v538; // [rsp+370h] [rbp+270h]
  PHYSICAL_ADDRESS v539; // [rsp+378h] [rbp+278h]
  union _LARGE_INTEGER *v540; // [rsp+380h] [rbp+280h] BYREF
  va_list va3; // [rsp+380h] [rbp+280h]
  PHYSICAL_ADDRESS *v542; // [rsp+388h] [rbp+288h]
  unsigned int *v543; // [rsp+390h] [rbp+290h] BYREF
  va_list va4; // [rsp+390h] [rbp+290h]
  __int64 v545; // [rsp+398h] [rbp+298h]
  __int64 v546; // [rsp+3A0h] [rbp+2A0h]
  __int64 v547; // [rsp+3A8h] [rbp+2A8h]
  __int64 v548; // [rsp+3B0h] [rbp+2B0h]
  __int64 v549; // [rsp+3B8h] [rbp+2B8h]
  __int64 v550; // [rsp+3C0h] [rbp+2C0h]
  __int64 v551; // [rsp+3C8h] [rbp+2C8h]
  __int64 v552; // [rsp+3D0h] [rbp+2D0h]
  __int64 v553; // [rsp+3D8h] [rbp+2D8h]
  __int64 v554; // [rsp+3E0h] [rbp+2E0h]
  __int64 v555; // [rsp+3E8h] [rbp+2E8h]
  __int64 v556; // [rsp+3F0h] [rbp+2F0h]
  __int64 v557; // [rsp+3F8h] [rbp+2F8h]
  __int64 v558; // [rsp+400h] [rbp+300h]
  __int64 v559; // [rsp+408h] [rbp+308h]
  va_list va5; // [rsp+410h] [rbp+310h] BYREF

  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v531 = va_arg(va1, _QWORD *);
  va_copy(va2, va1);
  v533 = va_arg(va2, __int16 *);
  v535 = va_arg(va2, struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *);
  va_copy(va3, va2);
  v536 = va_arg(va3, union _LARGE_INTEGER *);
  v538.QuadPart = va_arg(va3, _QWORD);
  v539.QuadPart = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v540 = va_arg(va4, union _LARGE_INTEGER *);
  v542 = va_arg(va4, PHYSICAL_ADDRESS *);
  va_copy(va5, va4);
  v543 = va_arg(va5, unsigned int *);
  v545 = va_arg(va5, _QWORD);
  v546 = va_arg(va5, _QWORD);
  v547 = va_arg(va5, _QWORD);
  v548 = va_arg(va5, _QWORD);
  v549 = va_arg(va5, _QWORD);
  v550 = va_arg(va5, _QWORD);
  v551 = va_arg(va5, _QWORD);
  v552 = va_arg(va5, _QWORD);
  v553 = va_arg(va5, _QWORD);
  v554 = va_arg(va5, _QWORD);
  v555 = va_arg(va5, _QWORD);
  v556 = va_arg(va5, _QWORD);
  v557 = va_arg(va5, _QWORD);
  v558 = va_arg(va5, _QWORD);
  v559 = va_arg(va5, _QWORD);
  v496 = a1;
  v3 = a2;
  v492 = 0LL;
  SystemAddress = -1056964606;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = a1 - 122;
  if ( !v8 || (v9 = v8 - 1) == 0 || v9 - 1 < 2 )
  {
    if ( !a2 )
      goto LABEL_5;
    return 3238002694LL;
  }
  if ( !a2 )
    return 3238002694LL;
LABEL_5:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 82LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids, a1);
    v3 = a2;
  }
  v10 = 3221225474LL;
  if ( !StorpControl )
  {
LABEL_23:
    v13 = v6;
    va_copy(v492, va);
    v14 = a1;
    v15 = 0x140000000uLL;
    switch ( a1 )
    {
      case 0u:
        v18 = v535;
        v19 = (unsigned int)v531;
        SystemAddress = 0;
        v20 = (unsigned int)v533;
        if ( !v535 )
          goto LABEL_34;
        *(_QWORD *)&v535->Relationship = 0LL;
        if ( KeGetCurrentIrql() > 2u )
        {
          v21 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v22 = 30LL;
            goto LABEL_40;
          }
          goto LABEL_41;
        }
        Pool2 = ExAllocatePool2(64LL, v19, v20);
        *(_QWORD *)&v18->Relationship = Pool2;
        if ( !Pool2 )
        {
          v24 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v25 = 31LL;
            goto LABEL_47;
          }
          goto LABEL_48;
        }
        goto LABEL_1446;
      case 1u:
        v26 = v531;
        SystemAddress = 0;
        if ( !v531 )
        {
          v27 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v28 = (unsigned int)((_DWORD)v531 + 32);
            goto LABEL_54;
          }
          goto LABEL_34;
        }
        if ( KeGetCurrentIrql() > 2u )
        {
          v21 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v22 = 33LL;
            goto LABEL_40;
          }
          goto LABEL_41;
        }
        ExFreePoolWithTag(v26, 0);
        goto LABEL_1446;
      case 2u:
        v29 = v531;
        v30 = (unsigned int)v533;
        SystemAddress = 0;
        v31 = v535;
        if ( !v531 )
        {
          v27 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v28 = (unsigned int)((_DWORD)v531 + 34);
            goto LABEL_54;
          }
          goto LABEL_34;
        }
        if ( !v535 )
        {
          v27 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v28 = (unsigned int)((_DWORD)v535 + 35);
            goto LABEL_54;
          }
          goto LABEL_34;
        }
        *(_QWORD *)&v535->Relationship = 0LL;
        if ( KeGetCurrentIrql() > 2u )
        {
          v21 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v22 = 36LL;
            goto LABEL_40;
          }
          goto LABEL_41;
        }
        Mdl = IoAllocateMdl(v29, v30, 0, 0, 0LL);
        *(_QWORD *)&v31->Relationship = Mdl;
        if ( !Mdl )
        {
          v24 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v25 = 37LL;
LABEL_47:
            WPP_SF_(v24->AttachedDevice, v25, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
          }
          goto LABEL_48;
        }
        goto LABEL_1446;
      case 3u:
        v33 = (struct _MDL *)v531;
        SystemAddress = 0;
        if ( !v531 )
        {
          v27 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v28 = (unsigned int)((_DWORD)v531 + 38);
            goto LABEL_54;
          }
          goto LABEL_34;
        }
        if ( KeGetCurrentIrql() > 2u )
        {
          v21 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v22 = 39LL;
            goto LABEL_40;
          }
          goto LABEL_41;
        }
        IoFreeMdl(v33);
        goto LABEL_1446;
      case 4u:
        v34 = (struct _MDL *)v531;
        SystemAddress = 0;
        if ( !v531 )
        {
          v27 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v28 = (unsigned int)((_DWORD)v531 + 40);
            goto LABEL_54;
          }
          goto LABEL_34;
        }
        if ( KeGetCurrentIrql() > 2u )
        {
          v21 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v22 = 41LL;
            goto LABEL_40;
          }
          goto LABEL_41;
        }
        MmBuildMdlForNonPagedPool(v34);
        goto LABEL_1446;
      case 5u:
        SystemAddress = StorpGetSystemAddress(3221225474LL, (__int64)v531, 0, v533);
        goto LABEL_1446;
      case 6u:
        SystemAddress = StorpGetOriginalMdl(3221225474LL, (__int64)v531, 0, v533);
        goto LABEL_1446;
      case 7u:
        SystemAddress = StorpCompleteServiceIrp(v3, (__int64)v531);
        goto LABEL_1446;
      case 8u:
        SystemAddress = StorpGetDeviceObjects(v3, v531, v533, v535);
        goto LABEL_1446;
      case 9u:
        v35 = v531;
        v36 = v533;
        v37 = (int)v535;
        v38 = v538;
        LowPart = v539.LowPart;
        Timeout = v540;
        v39 = v536;
        v490 = (unsigned int)v542;
        if ( !v3 )
        {
          v27 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v28 = 52LL;
            goto LABEL_54;
          }
          goto LABEL_34;
        }
        if ( KeGetCurrentIrql() > 2u )
        {
          v21 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v22 = 53LL;
            goto LABEL_40;
          }
          goto LABEL_41;
        }
        v40 = *(int ***)(v3 - 16);
        if ( !v40 )
          goto LABEL_34;
        v41 = *v40;
        if ( !*v40 )
          goto LABEL_34;
        v42 = *v41;
        if ( ((_BYTE)v40[31] & 1) != 0 )
        {
          v43 = v42 == 1314275652;
          goto LABEL_121;
        }
        if ( v42 != 1094997074 )
          goto LABEL_34;
        v44 = *((_QWORD *)v41 + 110);
        if ( v44 )
        {
          v47 = *(_QWORD *)(v44 + 8);
          v48 = *((_QWORD *)v41 + 1);
          LODWORD(v489) = v490;
          v49 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int16 *, int, union _LARGE_INTEGER *, PHYSICAL_ADDRESS, _DWORD, PLARGE_INTEGER, ULONG))(v47 + 112);
          LOBYTE(v488) = LowPart;
          D3ColdInterface = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD))v49)(
                              v44,
                              v48,
                              v35,
                              v36,
                              v37,
                              v39,
                              (PHYSICAL_ADDRESS)v38.QuadPart,
                              v488,
                              Timeout,
                              v490);
          goto LABEL_132;
        }
        v45 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v46 = 54LL;
          goto LABEL_129;
        }
        goto LABEL_130;
      case 0xAu:
        v51 = v531;
        v52 = (unsigned __int8)v533;
        SystemAddress = 0;
        if ( !v3 )
        {
          v27 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v28 = 55LL;
            goto LABEL_54;
          }
          goto LABEL_34;
        }
        if ( KeGetCurrentIrql() > 2u )
        {
          v21 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v22 = 56LL;
            goto LABEL_40;
          }
          goto LABEL_41;
        }
        v53 = *(int ***)(v3 - 16);
        if ( !v53 )
          goto LABEL_34;
        v54 = *v53;
        if ( !*v53 )
          goto LABEL_34;
        v55 = *v54;
        if ( ((_BYTE)v53[31] & 1) != 0 )
        {
          if ( v55 != 1314275652 )
            goto LABEL_34;
          SystemAddress = -1056964606;
          goto LABEL_1446;
        }
        if ( v55 != 1094997074 )
          goto LABEL_34;
        v56 = *((_QWORD *)v54 + 110);
        if ( v56 )
        {
          (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)(v56 + 8) + 96LL))(v56, v51, v52);
          goto LABEL_1446;
        }
        v45 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v46 = 57LL;
LABEL_129:
          WPP_SF_(v45->AttachedDevice, v46, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
        }
        goto LABEL_130;
      case 0xBu:
        v57 = v533;
        SystemAddress = 0;
        if ( !v3 )
        {
          v27 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v28 = 58LL;
            goto LABEL_54;
          }
          goto LABEL_34;
        }
        v58 = *(int ***)(v3 - 16);
        if ( !v58 )
          goto LABEL_34;
        v59 = *v58;
        if ( !*v58 )
          goto LABEL_34;
        v60 = *v59;
        if ( ((_BYTE)v58[31] & 1) != 0 )
        {
          if ( v60 != 1314275652 )
            goto LABEL_34;
          if ( (v59[36] & 0x800LL) == 0 )
            goto LABEL_130;
          v61 = *((_QWORD *)v59 + 73);
          if ( !v61 )
            goto LABEL_130;
          v62 = *(_QWORD *)(v61 + 120);
        }
        else
        {
          if ( v60 != 1094997074 )
            goto LABEL_34;
          if ( !*((_BYTE *)v59 + 4369) )
            goto LABEL_130;
          v62 = *((_QWORD *)v59 + 544);
        }
        if ( (unsigned int)v531 >= *(_DWORD *)(v62 + 4) )
          goto LABEL_34;
        *(_DWORD *)v57 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v62 + 48LL * (unsigned int)v531 + 24));
        goto LABEL_1446;
      case 0xCu:
        SystemAddress = 0;
        if ( !v3 )
        {
          v27 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v28 = 59LL;
            goto LABEL_54;
          }
          goto LABEL_34;
        }
        v63 = *(int ***)(v3 - 16);
        if ( !v63 )
          goto LABEL_34;
        v64 = *v63;
        if ( !*v63 )
          goto LABEL_34;
        v65 = *v64;
        if ( ((_BYTE)v63[31] & 1) != 0 )
        {
          if ( v65 != 1314275652 )
            goto LABEL_34;
          if ( (v64[36] & 0x800LL) == 0 )
            goto LABEL_130;
          v66 = *((_QWORD *)v64 + 73);
          if ( !v66 )
            goto LABEL_130;
          v67 = *(_QWORD *)(v66 + 120);
        }
        else
        {
          if ( v65 != 1094997074 )
            goto LABEL_34;
          if ( !*((_BYTE *)v64 + 4369) )
            goto LABEL_130;
          v67 = *((_QWORD *)v64 + 544);
        }
        if ( (unsigned int)v531 >= *(_DWORD *)(v67 + 4) )
          goto LABEL_34;
        KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v67 + 48LL * (unsigned int)v531 + 24), (KIRQL)v533);
        goto LABEL_1446;
      case 0xDu:
        v68 = (unsigned int)v531;
        v69 = v533;
        SystemAddress = 0;
        if ( !v3 )
        {
          v27 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v28 = 60LL;
            goto LABEL_54;
          }
          goto LABEL_34;
        }
        if ( !v533 )
        {
          v27 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v28 = 61LL;
            goto LABEL_54;
          }
          goto LABEL_34;
        }
        v70 = *(int ***)(v3 - 16);
        if ( !v70 )
          goto LABEL_34;
        v71 = *v70;
        if ( !*v70 )
          goto LABEL_34;
        v72 = *v71;
        if ( ((_BYTE)v70[31] & 1) != 0 )
        {
          if ( v72 != 1314275652 )
            goto LABEL_34;
          if ( (v71[36] & 0x800LL) == 0 )
            goto LABEL_130;
          v73 = *((_QWORD *)v71 + 73);
          if ( !v73 )
            goto LABEL_130;
          v74 = *(unsigned __int8 **)(v73 + 120);
        }
        else
        {
          if ( v72 != 1094997074 )
            goto LABEL_34;
          if ( !*((_BYTE *)v71 + 4369) )
            goto LABEL_130;
          v74 = (unsigned __int8 *)*((_QWORD *)v71 + 544);
        }
        if ( (unsigned int)v531 >= *((_DWORD *)v74 + 1) )
          goto LABEL_34;
        *(_DWORD *)v533 = (_DWORD)v531;
        *((_DWORD *)v69 + 1) = *(_DWORD *)&v74[48 * v68 + 32];
        *((_QWORD *)v69 + 1) = *(_QWORD *)&v74[48 * v68 + 8];
        *((_DWORD *)v69 + 4) = *(_DWORD *)&v74[48 * v68 + 36];
        *((_DWORD *)v69 + 5) = *v74;
        *((_DWORD *)v69 + 6) = *(_DWORD *)&v74[48 * v68 + 44];
        goto LABEL_1446;
      case 0xEu:
        if ( v5 )
          goto LABEL_220;
        if ( v6 )
          goto LABEL_217;
        v5 = 0LL;
        v75 = *(_QWORD *)(v3 - 16);
        if ( !v75 )
          goto LABEL_34;
        v6 = *(int **)v75;
        if ( !*(_QWORD *)v75 )
          goto LABEL_34;
        v76 = *v6;
        if ( (*(_BYTE *)(v75 + 248) & 1) != 0 )
        {
          if ( v76 != 1314275652 )
            goto LABEL_34;
LABEL_217:
          SystemAddress = NvmeInitializePerfOpts(v6, (unsigned __int8)v531, v533);
        }
        else
        {
          if ( v76 != 1094997074 )
            goto LABEL_34;
          v5 = *(int **)v75;
LABEL_220:
          SystemAddress = RaidInitializePerfOpts((__int64)v5, (char)v531, (unsigned int *)v533);
        }
        goto LABEL_1446;
      case 0xFu:
        if ( v5 )
          goto LABEL_243;
        if ( v6 )
          goto LABEL_240;
        v5 = 0LL;
        v80 = *(_QWORD *)(v3 - 16);
        if ( !v80 )
          goto LABEL_34;
        v6 = *(int **)v80;
        if ( !*(_QWORD *)v80 )
          goto LABEL_34;
        v81 = *v6;
        if ( (*(_BYTE *)(v80 + 248) & 1) != 0 )
        {
          if ( v81 != 1314275652 )
            goto LABEL_34;
LABEL_240:
          SystemAddress = RaidGetStartIoPerfParams((__int64)v6, (__int64)v531, v533);
        }
        else
        {
          if ( v81 != 1094997074 )
            goto LABEL_34;
          v5 = *(int **)v80;
LABEL_243:
          SystemAddress = RaidGetStartIoPerfParams((__int64)v5, (__int64)v531, v533);
        }
        goto LABEL_1446;
      case 0x10u:
        v82 = v531;
        Timeout = (PLARGE_INTEGER)v533;
        v491.LowPart = 0;
        v83 = 0LL;
        v84 = 0LL;
        v85 = *(PVOID ***)(v3 - 16);
        if ( !v85 || !*v85 )
          goto LABEL_34;
        v86 = *(_DWORD *)*v85;
        if ( ((_BYTE)v85[31] & 1) != 0 )
        {
          if ( v86 != 1314275652 )
            goto LABEL_34;
          v84 = *v85;
        }
        else
        {
          if ( v86 != 1094997074 )
            goto LABEL_34;
          v83 = *v85;
        }
        if ( (*(_DWORD *)v531 & 0xFFFFFF00) > 0x100 )
        {
          *(_DWORD *)v531 = 511;
          SystemAddress = -1056964597;
          goto LABEL_1446;
        }
        if ( *((_DWORD *)v531 + 10) && !v531[6] || *((_DWORD *)v531 + 14) && !v531[8] )
          goto LABEL_34;
        if ( KeGetCurrentIrql() > 2u )
          goto LABEL_41;
        v87 = *((_DWORD *)v82 + 3);
        if ( !v87 )
          goto LABEL_261;
        v88 = v87 - 1;
        if ( v88 )
        {
          if ( v88 != 1 )
            goto LABEL_34;
LABEL_261:
          if ( v83 )
            goto LABEL_262;
          SystemAddress = StorCreateSystemLogEntry(v84[1]);
        }
        else
        {
          if ( !v83 )
            goto LABEL_34;
          v89 = *((unsigned __int8 *)v82 + 16);
          v90 = *((unsigned __int8 *)v82 + 20);
          v91 = *((unsigned __int8 *)v82 + 24);
          LOBYTE(v491.LowPart) = *((_BYTE *)v82 + 16);
          BYTE1(v491.LowPart) = v90;
          BYTE2(v491.u.LowPart) = v91;
          Unit = RaidAdapterFindUnit((__int64)v83, v491.LowPart);
          if ( !Unit )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
            {
              WPP_SF_DDD(
                WPP_GLOBAL_Control->AttachedDevice,
                25LL,
                &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids,
                v89,
                v90,
                v91);
            }
LABEL_262:
            SystemAddress = StorCreateSystemLogEntry(v83[1]);
            goto LABEL_1446;
          }
          SystemAddress = StorCreateSystemLogEntry((PVOID)Unit[1]);
        }
        goto LABEL_1446;
      case 0x11u:
        if ( !v531 )
          goto LABEL_34;
        KeGetCurrentProcessorNumberEx((PPROCESSOR_NUMBER)v531);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x12u:
        v95 = (USHORT *)v531;
        if ( !v531 )
          goto LABEL_34;
        *v95 = KeQueryActiveGroupCount();
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x13u:
        v93 = v533;
        v94 = (unsigned __int16)v531;
        if ( !v533 )
          goto LABEL_34;
        if ( v94 > KeQueryActiveGroupCount() )
          goto LABEL_276;
        *(_QWORD *)v93 = KeQueryGroupAffinity(v94);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x14u:
        v96 = v531;
        v97 = 0;
        Timeout = (PLARGE_INTEGER)v531;
        Count = 0;
        if ( !v531 )
          goto LABEL_34;
        HighestNodeNumber = KeQueryHighestNodeNumber();
        *v96 = 0;
        v99 = 0;
        do
        {
          Count = 0;
          KeQueryNodeActiveAffinity(v97, 0LL, &Count);
          if ( Count )
            ++v99;
          ++v97;
        }
        while ( v97 <= HighestNodeNumber );
        Timeout->LowPart = v99;
        goto LABEL_289;
      case 0x15u:
        if ( !v533 || (unsigned int)v531 > 0xFFFF )
          goto LABEL_34;
        KeQueryNodeActiveAffinity((USHORT)v531, (PGROUP_AFFINITY)v533, 0LL);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x16u:
        v100 = v531;
        if ( !v531 )
          goto LABEL_34;
        *v100 = KeQueryHighestNodeNumber();
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x17u:
        LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                         (PPROCESSOR_NUMBER)v531,
                                         (LOGICAL_PROCESSOR_RELATIONSHIP)v533,
                                         v535,
                                         (PULONG)v536);
        if ( LogicalProcessorRelationship == -1073741820 )
        {
          SystemAddress = -1056964604;
        }
        else
        {
          if ( LogicalProcessorRelationship == -1073741811 )
            goto LABEL_34;
          SystemAddress = RaidNtStatusToStorStatus(LogicalProcessorRelationship);
        }
        goto LABEL_1446;
      case 0x18u:
        v108 = 4;
        v109 = v540;
        if ( v538.LowPart != 1 )
        {
          v108 = 516;
          if ( v538.LowPart == 2 )
            v108 = 1028;
        }
        ContiguousNodeMemory = MmAllocateContiguousNodeMemory(v531, v533, v535, v536, v108, v539.LowPart);
        v111 = 0;
        v109->QuadPart = ContiguousNodeMemory;
        if ( !ContiguousNodeMemory )
          v111 = -1056964605;
        SystemAddress = v111;
        goto LABEL_1446;
      case 0x19u:
        goto LABEL_313;
      case 0x1Au:
        v112 = (unsigned int)v531;
        v113 = v533;
        SystemAddress = 0;
        v114 = *(__int64 **)(v3 - 16);
        if ( (v114[31] & 1) != 0 )
        {
          SystemAddress = -1056964606;
          goto LABEL_1446;
        }
        v115 = *v114;
        if ( !v115 )
          goto LABEL_34;
        v116 = (unsigned int)v531;
        Pool = RaidAllocatePool(64LL, 24LL * (unsigned int)v531, 1161912658LL, *(_QWORD *)(v115 + 8));
        if ( !Pool )
          goto LABEL_48;
        *(_QWORD *)(v115 + 4808) = Pool;
        *(_QWORD *)(v115 + 4816) = Pool + 16 * v112;
        *(_DWORD *)(v115 + 4800) = v112;
        if ( (_DWORD)v112 )
        {
          v118 = 0LL;
          do
          {
            v119 = *(_OWORD *)&v113[v118];
            v118 += 8LL;
            *(_OWORD *)(*(_QWORD *)(v115 + 4808) + v118 * 2 - 16) = v119;
            --v116;
          }
          while ( v116 );
        }
        goto LABEL_1446;
      case 0x1Bu:
        v120 = v531;
        v121 = v535;
        v122 = (unsigned int)v536;
        v123 = v540;
        Timeout = (PLARGE_INTEGER)v538.QuadPart;
        v490 = v539.LowPart;
        v491.LowPart = 0;
        if ( KeGetCurrentIrql() )
          goto LABEL_41;
        if ( v123 )
          v123->LowPart = 0;
        v124 = *(_QWORD *)(v3 - 16);
        if ( (*(_BYTE *)(v124 + 248) & 1) != 0 )
        {
          SystemAddress = -1056964606;
          goto LABEL_1446;
        }
        v125 = *(_QWORD *)v124;
        if ( !v125 )
          goto LABEL_34;
        if ( v120 )
        {
          if ( *(_WORD *)v120 != 1 )
            goto LABEL_34;
          if ( *((_DWORD *)v120 + 1) < 4u )
            goto LABEL_34;
          LOWORD(v491.LowPart) = *((_WORD *)v120 + 4);
          BYTE2(v491.u.LowPart) = *((_BYTE *)v120 + 10);
          v127 = RaidAdapterFindUnit(v125, v491.LowPart);
          if ( !v127 )
            goto LABEL_34;
          v126 = (struct _DEVICE_OBJECT *)v127[1];
        }
        else
        {
          v126 = *(struct _DEVICE_OBJECT **)(v125 + 8);
        }
        if ( !v126 )
          goto LABEL_34;
        v128 = RaidSyncAcpiEvalMethod(v126, v121, v122, Timeout, v490, v123);
        SystemAddress = RaidNtStatusToStorStatus(v128);
        goto LABEL_1446;
      case 0x1Cu:
        SystemAddress = StorpGetRequestInfo(3221225474LL, (__int64)v531, v533);
        goto LABEL_1446;
      case 0x1Du:
        SystemAddress = StorpInitializeWorkItem(v3, (PIO_WORKITEM **)v531);
        goto LABEL_1446;
      case 0x1Eu:
        SystemAddress = StorpQueueWorkItemInternal(v3, v531, v533, v535, 0LL);
        goto LABEL_1446;
      case 0x1Fu:
        SystemAddress = StorpFreeWorkItem(v3, v531);
        goto LABEL_1446;
      case 0x20u:
        v139 = v531;
        if ( v3 && v531 )
        {
          if ( KeGetCurrentIrql() > 2u )
          {
            v21 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              v22 = 73LL;
LABEL_40:
              WPP_SF_(v21->AttachedDevice, v22, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
            }
            goto LABEL_41;
          }
          v140 = 0LL;
          v141 = *(int ***)(v3 - 16);
          if ( v141 )
          {
            v142 = *v141;
            if ( *v141 )
            {
              v143 = *v142;
              if ( ((_BYTE)v141[31] & 1) != 0 )
              {
                if ( v143 == 1314275652 )
                {
                  v144 = *((_QWORD *)v142 + 1);
                  goto LABEL_389;
                }
              }
              else if ( v143 == 1094997074 )
              {
                v144 = *((_QWORD *)v142 + 1);
                v140 = *v141;
                v142 = 0LL;
LABEL_389:
                v145 = RaidAllocatePool(64LL, 160LL, 1413570898LL, v144);
                v146 = (_QWORD *)v145;
                if ( v145 )
                {
                  KeInitializeTimer((PKTIMER)(v145 + 8));
                  KeInitializeDpc((PRKDPC)(v146 + 9), (PKDEFERRED_ROUTINE)StorportTimerDpc, v146);
                  v147 = v140 + 1032;
                  v148 = v140;
                  if ( !v140 )
                    v148 = v142;
                  *v146 = v148;
                  if ( !v140 )
                    v147 = v142 + 271;
                  _InterlockedIncrement(v147);
                  *v139 = v146;
                  SystemAddress = 0;
                }
                else
                {
LABEL_48:
                  SystemAddress = -1056964605;
                }
                goto LABEL_1446;
              }
            }
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 74LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids, v3);
            SystemAddress = -1056964602;
            goto LABEL_1446;
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            72LL,
            &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids,
            v3,
            v531);
          SystemAddress = -1056964602;
          goto LABEL_1446;
        }
        goto LABEL_34;
      case 0x21u:
        SystemAddress = StorpRequestTimer(v3, (_DWORD)v531, (_DWORD)v533, (_DWORD)v535, (__int64)v536, v538.QuadPart);
        goto LABEL_1446;
      case 0x22u:
        SystemAddress = StorpFreeTimer(v3, v531);
        goto LABEL_1446;
      case 0x23u:
        InitializeSListHead((PSLIST_HEADER)v531);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x24u:
        v131 = v533;
        *(_QWORD *)v131 = ExpInterlockedFlushSList((PSLIST_HEADER)v531);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x25u:
        v132 = v533;
        *(_QWORD *)v132 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v531);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x26u:
        v133 = v535;
        *(_QWORD *)&v133->Relationship = ExpInterlockedPushEntrySList((PSLIST_HEADER)v531, (PSLIST_ENTRY)v533);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x27u:
        v134 = v533;
        *v134 = ExQueryDepthSList((PSLIST_HEADER)v531);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x28u:
        if ( !v531 || !v533 )
          goto LABEL_34;
        if ( *((_BYTE *)v531 + 2) == 40 )
        {
          v129 = v531[10];
        }
        else
        {
          v130 = v531[6];
          if ( !v130 || *(_DWORD *)v130 != 523124044 )
            goto LABEL_345;
          v129 = *(_QWORD *)(v130 + 176);
        }
        if ( v129 )
        {
          SystemAddress = ((int)IoGetActivityIdIrp(v129, v533) >> 31) & 0xC1000001;
          goto LABEL_1446;
        }
LABEL_345:
        SystemAddress = -1056964607;
        if ( EtwActivityIdControl(3u, (LPGUID)v533) >= 0 )
          SystemAddress = 0;
        goto LABEL_1446;
      case 0x29u:
        v135 = v531;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
          SystemAddress = 0;
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v136 = *(int ***)(v3 - 16);
          SystemAddress = 0;
          v5 = 0LL;
          if ( !v136 || !*v136 )
            goto LABEL_34;
          v137 = **v136;
          if ( ((_BYTE)v136[31] & 1) != 0 )
          {
            v43 = v137 == 1314275652;
            goto LABEL_121;
          }
          if ( v137 != 1094997074 )
            goto LABEL_34;
          v5 = *v136;
        }
        v138 = v5[14];
        if ( v138 == -1 )
        {
          SystemAddress = -1056964599;
          goto LABEL_1446;
        }
        if ( !v531 || *(_WORD *)v531 != 1 )
          goto LABEL_34;
        if ( *((_DWORD *)v531 + 1) < 4u )
          goto LABEL_424;
        *((_WORD *)v531 + 1) = v138;
        *((_WORD *)v135 + 4) = -1;
        *((_BYTE *)v135 + 10) = -1;
        goto LABEL_1446;
      case 0x2Au:
        SystemAddress = StorpGetOriginalMdl(3221225474LL, (__int64)v531, 1, v533);
        goto LABEL_1446;
      case 0x2Bu:
        SystemAddress = StorpGetSystemAddress(3221225474LL, (__int64)v531, 1, v533);
        goto LABEL_1446;
      case 0x2Cu:
        v149 = *(int ***)(v3 - 16);
        if ( !v149 )
          goto LABEL_34;
        v150 = *v149;
        if ( !*v149 )
          goto LABEL_34;
        v151 = *v150;
        if ( ((_BYTE)v149[31] & 1) != 0 )
        {
          v152 = v151 == 1314275652;
        }
        else
        {
          if ( v151 != 1094997074 )
            goto LABEL_34;
          v152 = (*((_BYTE *)v150 + 4371) & 4) == 0;
        }
        if ( !v152 )
          goto LABEL_34;
        if ( v533 )
        {
          SystemAddress = 0;
          if ( *((_BYTE *)v531 + 2) == 40 )
            v153 = *(_QWORD *)(v531[12] + 152LL);
          else
            v153 = *(_QWORD *)(v531[6] + 152LL);
          *(_QWORD *)v533 = v153;
        }
        else
        {
          v27 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            goto LABEL_34;
          }
          v28 = (unsigned int)((_DWORD)v533 + 47);
LABEL_54:
          WPP_SF_(v27->AttachedDevice, v28, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
          SystemAddress = -1056964602;
        }
        goto LABEL_1446;
      case 0x2Eu:
        v154 = (char)v533;
        v491.LowPart = 0;
        if ( (unsigned int)v533 >= 0x10 )
          goto LABEL_424;
        v155 = *(_QWORD *)(v3 - 16);
        if ( (*(_BYTE *)(v155 + 248) & 1) != 0 )
        {
          SystemAddress = -1056964606;
          goto LABEL_1446;
        }
        v156 = *(_QWORD *)v155;
        if ( !*(_QWORD *)v155 )
        {
          SystemAddress = -1056964602;
          goto LABEL_1446;
        }
        if ( !v531 || *(_WORD *)v531 != 1 || *((_DWORD *)v531 + 1) < 4u )
          goto LABEL_424;
        LOWORD(v491.LowPart) = *((_WORD *)v531 + 4);
        BYTE2(v491.u.LowPart) = *((_BYTE *)v531 + 10);
        v157 = RaidAdapterFindUnit(v156, v491.LowPart);
        v158 = v157;
        if ( v157 )
        {
          v159 = *((_DWORD *)v157 + 488) ^ ((unsigned __int8)*((_DWORD *)v157 + 488) ^ (unsigned __int8)(2 * v154)) & 2 ^ ((unsigned __int8)(2 * v154) ^ *((_BYTE *)v157 + 1952) ^ ((unsigned __int8)*((_DWORD *)v157 + 488) ^ (unsigned __int8)(2 * v154)) & 2) & 4;
          *((_DWORD *)v158 + 488) = v159 ^ ((unsigned __int8)(2 * v154) ^ (unsigned __int8)v159) & 8 ^ ((unsigned __int8)(v159 ^ ((2 * v154) ^ v159) & 8) ^ (unsigned __int8)(8 * v154)) & 0x40;
          SystemAddress = 0;
        }
        else
        {
          SystemAddress = -1056964602;
        }
        goto LABEL_1446;
      case 0x2Fu:
        v160 = (LARGE_INTEGER *)v533;
        v161 = (union _LARGE_INTEGER *)v531;
        if ( !v533 )
          goto LABEL_34;
        if ( v531 )
          *v531 = 1LL;
        if ( UseQPCTime )
          *v160 = KeQueryPerformanceCounter(v161);
        else
          v160->QuadPart = KeQueryUnbiasedInterruptTime();
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x30u:
        v162 = v531;
        v163 = v533;
        v164 = v535;
        if ( KeGetCurrentIrql() )
          goto LABEL_41;
        if ( v162 )
          SystemAddress = StorpUnitInitializePoFxPower(a2, v162, v163, v164);
        else
          SystemAddress = StorpAdapterInitializePoFxPower(a2, v163, v164);
        goto LABEL_1446;
      case 0x31u:
        SystemAddress = 0;
        v165 = v531;
        v166 = (int)v536;
        v490 = (unsigned int)v535;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v167 = *(int ***)(v3 - 16);
          v5 = 0LL;
          if ( v167 && *v167 )
          {
            v168 = **v167;
            if ( ((_BYTE)v167[31] & 1) != 0 )
            {
              if ( v168 == 1314275652 )
                goto LABEL_122;
            }
            else if ( v168 == 1094997074 )
            {
              v5 = *v167;
            }
          }
        }
        if ( v533 )
        {
          v169 = *((_BYTE *)v533 + 2);
          if ( v169 == 40 )
            v7 = *((_QWORD *)v533 + 12);
          else
            v7 = *((_QWORD *)v533 + 6);
          if ( !v7 || *(_DWORD *)v7 != 523124044 )
            goto LABEL_34;
          if ( v169 == 40 )
            v170 = *((_DWORD *)v533 + 6);
          else
            v170 = *((_DWORD *)v533 + 3);
        }
        else
        {
          v170 = 0;
        }
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 2u )
          goto LABEL_41;
        if ( v166 || !v5 )
          goto LABEL_34;
        if ( v165 )
        {
          if ( *(_WORD *)v165 != 1 )
            goto LABEL_34;
          if ( *((_DWORD *)v165 + 1) < 4u )
            goto LABEL_34;
          v491.LowPart = 0;
          LOWORD(v491.LowPart) = *((_WORD *)v165 + 4);
          BYTE2(v491.u.LowPart) = *((_BYTE *)v165 + 10);
          v172 = RaidAdapterFindUnit((__int64)v5, v491.LowPart);
          v173 = (__int64)v172;
          if ( !v172 )
            goto LABEL_34;
          if ( RuntimePowerDisabled )
            goto LABEL_1446;
          if ( (v170 & 0x100800) != 0 )
          {
            if ( RaidUnitCheckAndAcquirePoFx((__int64)v172) )
            {
              ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v173 + 1864));
              goto LABEL_1446;
            }
            if ( !*(_QWORD *)(*(_QWORD *)(v173 + 24) + 4960LL) )
              goto LABEL_1446;
          }
          if ( CurrentIrql == 2 || (*(_BYTE *)(v173 + 505) & 1) != 0 || *(char *)(v173 + 504) < 0 )
            v174 = 2;
          else
            v174 = 0;
          v175 = RaidUnitPoFxActivateComponentFromMiniport(v173, v490, v174);
          goto LABEL_484;
        }
        if ( RuntimePowerDisabled )
          goto LABEL_1446;
        if ( *((_QWORD *)v5 + 620) && (v170 & 0x100800) == 0 )
        {
          if ( CurrentIrql == 2 || (*((_BYTE *)v5 + 107) & 6) != 0 )
            v175 = RaidAdapterPoFxActivateComponentFromMiniport((__int64)v5, v490, 2LL);
          else
            v175 = RaidAdapterPoFxActivateComponentFromMiniport((__int64)v5, v490, 0LL);
LABEL_484:
          SystemAddress = v175;
          if ( v7 )
            *(_BYTE *)(v7 + 16) |= 0x80u;
          goto LABEL_1446;
        }
        goto LABEL_130;
      case 0x32u:
        v176 = v531;
        v177 = (int)v536;
        v490 = (unsigned int)v535;
        if ( v5 )
        {
          if ( v6 )
            goto LABEL_1446;
        }
        else
        {
          if ( v6 )
            goto LABEL_1446;
          v5 = 0LL;
          v178 = *(int ***)(v3 - 16);
          if ( v178 && *v178 )
          {
            v179 = **v178;
            if ( ((_BYTE)v178[31] & 1) != 0 )
            {
              if ( v179 == 1314275652 )
                goto LABEL_1446;
            }
            else if ( v179 == 1094997074 )
            {
              v5 = *v178;
            }
          }
        }
        SystemAddress = 0;
        if ( !v533 )
          goto LABEL_510;
        if ( *((_BYTE *)v533 + 2) == 40 )
          v7 = *((_QWORD *)v533 + 12);
        else
          v7 = *((_QWORD *)v533 + 6);
        if ( !v7 || *(_DWORD *)v7 != 523124044 )
          goto LABEL_34;
        if ( *(char *)(v7 + 16) >= 0 )
          goto LABEL_1446;
LABEL_510:
        if ( KeGetCurrentIrql() > 2u && !v7 )
          goto LABEL_41;
        if ( v177 || !v5 )
          goto LABEL_34;
        if ( v176 )
        {
          if ( *(_WORD *)v176 != 1 )
            goto LABEL_34;
          if ( *((_DWORD *)v176 + 1) < 4u )
            goto LABEL_34;
          v491.LowPart = 0;
          LOWORD(v491.LowPart) = *((_WORD *)v176 + 4);
          BYTE2(v491.u.LowPart) = *((_BYTE *)v176 + 10);
          v180 = RaidAdapterFindUnit((__int64)v5, v491.LowPart);
          if ( !v180 )
            goto LABEL_34;
          if ( !RuntimePowerDisabled )
          {
            v181 = KeGetCurrentIrql();
            v182 = v490;
            if ( v181 <= 2u )
            {
              SystemAddress = RaidUnitPoFxIdleComponentFromMiniport((__int64)v180, v490);
            }
            else
            {
              *(_BYTE *)(v7 + 17) |= 2u;
              SystemAddress = -1056964596;
              *(_DWORD *)(v7 + 748) = v182;
            }
          }
          goto LABEL_1446;
        }
        if ( RuntimePowerDisabled )
          goto LABEL_1446;
        if ( *((_QWORD *)v5 + 620) )
        {
          v183 = KeGetCurrentIrql();
          v184 = v490;
          if ( v183 <= 2u )
          {
            SystemAddress = RaidAdapterPoFxIdleComponentFromMiniport((__int64)v5, v490);
          }
          else
          {
            *(_BYTE *)(v7 + 17) |= 1u;
            SystemAddress = -1056964596;
            *(_DWORD *)(v7 + 748) = v184;
          }
          goto LABEL_1446;
        }
        goto LABEL_130;
      case 0x33u:
        v185 = v531;
        v186 = (unsigned int)v533;
        v187 = v535;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v5 = 0LL;
          v188 = *(int ***)(v3 - 16);
          if ( v188 && *v188 )
          {
            v189 = **v188;
            if ( ((_BYTE)v188[31] & 1) != 0 )
            {
              if ( v189 == 1314275652 )
                goto LABEL_122;
            }
            else if ( v189 == 1094997074 )
            {
              v5 = *v188;
            }
          }
        }
        if ( KeGetCurrentIrql() > 2u )
          goto LABEL_41;
        if ( !v5 )
          goto LABEL_34;
        if ( v185 )
        {
          if ( *(_WORD *)v185 != 1 )
            goto LABEL_34;
          if ( *((_DWORD *)v185 + 1) < 4u )
            goto LABEL_34;
          v490 = 0;
          LOWORD(v490) = *((_WORD *)v185 + 4);
          BYTE2(v490) = *((_BYTE *)v185 + 10);
          v190 = RaidAdapterFindUnit((__int64)v5, v490);
          v191 = v190;
          if ( !v190 )
            goto LABEL_34;
          if ( RuntimePowerDisabled )
          {
            SystemAddress = 0;
            goto LABEL_1446;
          }
          if ( RaidUnitCheckAndAcquirePoFx((__int64)v190) )
          {
            v192 = (_QWORD *)v191[234];
            v193 = *(_DWORD *)(v192[1] + 8LL);
            if ( v186 + 1 >= v193 && v186 + 1 <= v193 )
            {
              PoFxSetComponentLatency(*v192, v186, v187);
              SystemAddress = 0;
              goto LABEL_550;
            }
            goto LABEL_549;
          }
          goto LABEL_130;
        }
        if ( RuntimePowerDisabled )
        {
          SystemAddress = 0;
          goto LABEL_1446;
        }
        v194 = (_QWORD *)*((_QWORD *)v5 + 620);
        if ( !v194 )
          goto LABEL_130;
        v195 = *(_DWORD *)(v194[1] + 8LL);
        if ( v186 + 1 >= v195 && v186 + 1 <= v195 )
        {
          PoFxSetComponentLatency(*v194, v186, v187);
          SystemAddress = 0;
          goto LABEL_1446;
        }
        goto LABEL_34;
      case 0x34u:
        v196 = v531;
        v197 = (unsigned int)v533;
        v198 = v535;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v5 = 0LL;
          v199 = *(int ***)(v3 - 16);
          if ( v199 && *v199 )
          {
            v200 = **v199;
            if ( ((_BYTE)v199[31] & 1) != 0 )
            {
              if ( v200 == 1314275652 )
                goto LABEL_122;
            }
            else if ( v200 == 1094997074 )
            {
              v5 = *v199;
            }
          }
        }
        if ( KeGetCurrentIrql() > 2u )
          goto LABEL_41;
        if ( !v5 )
          goto LABEL_34;
        if ( v196 )
        {
          if ( *(_WORD *)v196 != 1 )
            goto LABEL_34;
          if ( *((_DWORD *)v196 + 1) < 4u )
            goto LABEL_34;
          v490 = 0;
          LOWORD(v490) = *((_WORD *)v196 + 4);
          BYTE2(v490) = *((_BYTE *)v196 + 10);
          v201 = RaidAdapterFindUnit((__int64)v5, v490);
          v191 = v201;
          if ( !v201 )
            goto LABEL_34;
          if ( RuntimePowerDisabled )
          {
            SystemAddress = 0;
            goto LABEL_1446;
          }
          if ( RaidUnitCheckAndAcquirePoFx((__int64)v201) )
          {
            v202 = (_QWORD *)v191[234];
            v203 = *(_DWORD *)(v202[1] + 8LL);
            if ( v197 + 1 < v203 || v197 + 1 > v203 )
            {
LABEL_549:
              SystemAddress = -1056964602;
            }
            else
            {
              PoFxSetComponentResidency(*v202, v197, v198);
              SystemAddress = 0;
            }
            goto LABEL_550;
          }
          goto LABEL_130;
        }
        if ( RuntimePowerDisabled )
        {
          SystemAddress = 0;
          goto LABEL_1446;
        }
        v204 = (_QWORD *)*((_QWORD *)v5 + 620);
        if ( !v204 )
          goto LABEL_130;
        v205 = *(_DWORD *)(v204[1] + 8LL);
        if ( v197 + 1 >= v205 && v197 + 1 <= v205 )
        {
          PoFxSetComponentResidency(*v204, v197, v198);
          SystemAddress = 0;
          goto LABEL_1446;
        }
        goto LABEL_34;
      case 0x35u:
        v206 = v535;
        v207 = v531;
        v208 = v533;
        Timeout = v536;
        QuadPart = (union _LARGE_INTEGER *)v538.QuadPart;
        v209 = v540;
        v491 = v539;
        v502 = v535;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v5 = 0LL;
          v210 = *(int ***)(v3 - 16);
          if ( v210 && *v210 )
          {
            v211 = **v210;
            if ( ((_BYTE)v210[31] & 1) != 0 )
            {
              if ( v211 == 1314275652 )
                goto LABEL_122;
            }
            else if ( v211 == 1094997074 )
            {
              v5 = *v210;
            }
          }
        }
        if ( KeGetCurrentIrql() > 2u )
        {
          if ( !v209 )
            goto LABEL_41;
          v209->QuadPart = 0LL;
          SystemAddress = -1056964600;
          goto LABEL_1446;
        }
        if ( !v5 )
          goto LABEL_34;
        if ( v207 )
        {
          if ( *(_WORD *)v207 != 1 )
            goto LABEL_34;
          if ( *((_DWORD *)v207 + 1) < 4u )
            goto LABEL_34;
          v490 = 0;
          LOWORD(v490) = *((_WORD *)v207 + 4);
          BYTE2(v490) = *((_BYTE *)v207 + 10);
          v212 = RaidAdapterFindUnit((__int64)v5, v490);
          v191 = v212;
          if ( !v212 )
            goto LABEL_34;
          if ( RuntimePowerDisabled )
          {
            SystemAddress = 0;
            goto LABEL_1446;
          }
          if ( RaidUnitCheckAndAcquirePoFx((__int64)v212) )
          {
            v213 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                     *(_QWORD *)v191[234],
                     v208,
                     v502,
                     Timeout,
                     QuadPart,
                     (PHYSICAL_ADDRESS)v491.QuadPart,
                     v209);
            SystemAddress = RaidNtStatusToStorStatus(v213);
LABEL_550:
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v191[233]);
            goto LABEL_1446;
          }
        }
        else
        {
          if ( RuntimePowerDisabled )
          {
            SystemAddress = 0;
            goto LABEL_1446;
          }
          v214 = (_QWORD *)*((_QWORD *)v5 + 620);
          if ( v214 )
          {
            v215 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                     *v214,
                     v208,
                     v206,
                     Timeout,
                     QuadPart,
                     (PHYSICAL_ADDRESS)v491.QuadPart,
                     v209);
            SystemAddress = RaidNtStatusToStorStatus(v215);
            goto LABEL_1446;
          }
        }
        goto LABEL_130;
      case 0x36u:
        if ( !v531 )
          goto LABEL_34;
        v234 = *((_BYTE *)v531 + 2) == 40 ? v531[12] : v531[6];
        if ( !v234 )
          goto LABEL_34;
        if ( *(_DWORD *)v234 != 523124044 )
          goto LABEL_34;
        v235 = *(_QWORD *)(v234 + 144);
        if ( !v235 )
        {
          v235 = *(_QWORD *)(v234 + 104);
          if ( !v235 )
            goto LABEL_34;
        }
        if ( (*((_DWORD *)v531 + 3) & 0x40) == 0 )
          goto LABEL_289;
        LOBYTE(v15) = 1;
        KeFlushIoBuffers(v235, 0LL, v15);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x37u:
        v239 = v531;
        v240 = v533;
        v241 = v535;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
          SystemAddress = 0;
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v242 = *(_QWORD *)(v3 - 16);
          SystemAddress = 0;
          v5 = 0LL;
          if ( v242 )
          {
            v13 = *(int **)v242;
            if ( *(_QWORD *)v242 )
            {
              v243 = *v13;
              if ( (*(_BYTE *)(v242 + 248) & 1) != 0 )
              {
                if ( v243 == 1314275652 )
                {
                  SystemAddress = -1056964606;
                  goto LABEL_1446;
                }
              }
              else if ( v243 == 1094997074 )
              {
                v5 = *(int **)v242;
              }
            }
          }
        }
        if ( !v535 || !v5 )
          goto LABEL_34;
        v535->Relationship = RelationProcessorCore;
        if ( !v239 )
          goto LABEL_709;
        if ( *(_WORD *)v239 != 1 || *((_DWORD *)v239 + 1) < 4u )
          goto LABEL_34;
        v490 = *((unsigned __int8 *)v239 + 8);
        *(_WORD *)((char *)&v490 + 1) = *(_WORD *)((char *)v239 + 9);
        SystemAddress = -1056964602;
        if ( !RaidAdapterFindUnit((__int64)v5, v490) )
          goto LABEL_1446;
        SystemAddress = 0;
LABEL_709:
        if ( *(_QWORD *)v240 == 0x481F895FDCAF9C10LL && *((_QWORD *)v240 + 1) == 0x3356F5D2CED492A4LL )
        {
          v241->Relationship = (unsigned __int8)g_InWinPE;
          goto LABEL_1446;
        }
        if ( *(_QWORD *)v240 == 0x444B2B37D52CE820LL && *((_QWORD *)v240 + 1) == 0x7BD091E5920033A6LL )
        {
          v241->Relationship = RelationNumaNode;
          goto LABEL_1446;
        }
        if ( *(_QWORD *)v240 != 0x48E8F89B2B9443ACLL || *((_QWORD *)v240 + 1) != 0x5AFD6EC9B62C92B2LL )
          goto LABEL_122;
        v241->Relationship = (unsigned __int8)ExIsSoftBoot(v239, v13);
        goto LABEL_1446;
      case 0x38u:
        v101 = v533;
        if ( !v531 || !v533 )
          goto LABEL_34;
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v531);
        v103 = 0;
        *(_DWORD *)v101 = ProcessorIndexFromNumber;
        if ( ProcessorIndexFromNumber == -1 )
          v103 = -1056964602;
        SystemAddress = v103;
        goto LABEL_1446;
      case 0x39u:
        v216 = (char)v533;
        if ( v531 )
          goto LABEL_34;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v5 = 0LL;
          v217 = *(int ***)(v3 - 16);
          if ( !v217 || !*v217 )
            goto LABEL_34;
          v218 = **v217;
          if ( ((_BYTE)v217[31] & 1) != 0 )
          {
            v43 = v218 == 1314275652;
            goto LABEL_121;
          }
          if ( v218 != 1094997074 )
            goto LABEL_34;
          v5 = *v217;
        }
        if ( RuntimePowerDisabled )
        {
          SystemAddress = 0;
          goto LABEL_1446;
        }
        if ( !*((_QWORD *)v5 + 620) || *((char *)v5 + 107) < 0 )
          goto LABEL_276;
        RaidAdapterPoFxSetDeviceIdleTimeout((__int64)v5, (unsigned int)v533, 0x140000000LL, 0);
        if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
        {
          McTemplateK0pqqq_EtwWriteTransfer(
            v219,
            (unsigned int)&EventAdapterIdleTimeoutSet,
            v220,
            **((_QWORD **)v5 + 620),
            v5[14],
            v216,
            v5[1244]);
          SystemAddress = 0;
          goto LABEL_1446;
        }
        goto LABEL_289;
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
        goto LABEL_1446;
      case 0x3Du:
        if ( !v531 )
          goto LABEL_34;
        SystemAddress = 0;
        *(_BYTE *)v531 = g_OSisUpgrade;
        goto LABEL_1446;
      case 0x3Eu:
        SystemAddress = StorAdapterDeviceRegistryKeyProxy(v3, 1, (__int64)va);
        goto LABEL_1446;
      case 0x3Fu:
        SystemAddress = StorAdapterDeviceRegistryKeyProxy(v3, 0, (__int64)va);
        goto LABEL_1446;
      case 0x40u:
        SystemAddress = 0;
        if ( !v5 && !v6 )
        {
          v250 = *(int ***)(v3 - 16);
          v5 = 0LL;
          v6 = 0LL;
          if ( v250 )
          {
            if ( *v250 )
            {
              v251 = **v250;
              if ( ((_BYTE)v250[31] & 1) != 0 )
              {
                if ( v251 == 1314275652 )
                  v6 = *v250;
              }
              else if ( v251 == 1094997074 )
              {
                v5 = *v250;
              }
            }
          }
        }
        if ( (unsigned int)v531 >= 0x15 )
          goto LABEL_34;
        if ( v6 )
        {
          if ( (v6[104] & 2) == 0 )
            goto LABEL_276;
          *((_QWORD *)v6 + 18) = *((_QWORD *)v6 + 18) & 0xFFFFFFFFFFFFFFFEuLL | ((_DWORD)v531 == 20);
          goto LABEL_1446;
        }
        if ( !v5 )
          goto LABEL_34;
        if ( (v5[156] & 2) != 0 )
        {
          v5[1069] = (int)v531;
          goto LABEL_1446;
        }
        goto LABEL_967;
      case 0x41u:
        v221 = v538.QuadPart;
        v498 = (unsigned int)v536;
        if ( v531 )
          goto LABEL_34;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v5 = 0LL;
          v222 = *(int ***)(v3 - 16);
          if ( !v222 || !*v222 )
            goto LABEL_34;
          v223 = **v222;
          if ( ((_BYTE)v222[31] & 1) != 0 )
          {
            v43 = v223 == 1314275652;
            goto LABEL_121;
          }
          if ( v223 != 1094997074 )
            goto LABEL_34;
          v5 = *v222;
        }
        if ( RuntimePowerDisabled )
        {
          SystemAddress = 0;
          goto LABEL_1446;
        }
        v224 = *((_QWORD *)v5 + 620);
        if ( !v224 || *(_BYTE *)(v224 + 28) )
          goto LABEL_276;
        D3ColdInterface = RaidRegisterPerfStates(
                            *((_QWORD *)v5 + 1),
                            (unsigned int)v533,
                            (unsigned __int64)v535,
                            &v498,
                            v538.QuadPart,
                            0LL,
                            *(_QWORD *)v224);
        if ( D3ColdInterface < 0 )
          goto LABEL_132;
        v225 = v498;
        goto LABEL_646;
      case 0x42u:
        v226 = (unsigned int)v535;
        v227 = (unsigned int)v536;
        v491.LowPart = (unsigned int)v533;
        v490 = v538.LowPart;
        v502 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)v539.QuadPart;
        if ( v531 || (_DWORD)v535 )
          goto LABEL_34;
        if ( v5 )
        {
          if ( v6 )
            goto LABEL_1446;
        }
        else
        {
          if ( v6 )
            goto LABEL_1446;
          v5 = 0LL;
          v228 = *(_QWORD *)(v3 - 16);
          if ( !v228 || !*(_QWORD *)v228 || (*(_BYTE *)(v228 + 248) & 1) != 0 || **(_DWORD **)v228 != 1094997074 )
            goto LABEL_1446;
          v5 = *(int **)v228;
        }
        if ( RuntimePowerDisabled )
        {
          SystemAddress = 0;
          goto LABEL_1446;
        }
        if ( !*((_QWORD *)v5 + 620) )
          goto LABEL_276;
        v229 = KeGetCurrentIrql();
        v230 = *((_QWORD *)v5 + 620);
        v231 = *(unsigned __int8 *)(v230 + 28);
        if ( !(_BYTE)v231 || v227 >= v231 )
          goto LABEL_34;
        if ( _interlockedbittestandset((volatile signed __int32 *)(v230 + 120), 0) )
        {
          SystemAddress = -1056964599;
        }
        else
        {
          v232 = v490;
          *(_DWORD *)(*((_QWORD *)v5 + 620) + 128LL) = v227;
          v233 = v491.LowPart;
          if ( v229 >= 2u )
            v226 = 2;
          *(_DWORD *)(*((_QWORD *)v5 + 620) + 136LL) = v232;
          PoFxIssueComponentPerfStateChange(**((_QWORD **)v5 + 620), v226, v233, *((_QWORD *)v5 + 620) + 128LL, v502);
          SystemAddress = 0;
        }
        goto LABEL_1446;
      case 0x43u:
        if ( KeGetCurrentIrql() )
          goto LABEL_41;
        v244 = v533;
        SystemAddress = -1056964602;
        v245 = v531;
        if ( !v533 )
          goto LABEL_1446;
        *(_BYTE *)v533 = 0;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v5 = 0LL;
          v246 = *(int ***)(a2 - 16);
          if ( !v246 || !*v246 )
            goto LABEL_1446;
          v247 = **v246;
          if ( ((_BYTE)v246[31] & 1) != 0 )
          {
            if ( v247 == 1314275652 )
              SystemAddress = -1056964606;
            goto LABEL_1446;
          }
          if ( v247 != 1094997074 )
            goto LABEL_1446;
          v5 = *v246;
        }
        if ( v245 )
        {
          if ( *(_WORD *)v245 != 1 )
            goto LABEL_1446;
          if ( *((_DWORD *)v245 + 1) < 4u )
            goto LABEL_1446;
          v490 = 0;
          LOWORD(v490) = *((_WORD *)v245 + 4);
          BYTE2(v490) = *((_BYTE *)v245 + 10);
          v248 = RaidAdapterFindUnit((__int64)v5, v490);
          if ( !v248 )
            goto LABEL_1446;
          v249 = (struct _DEVICE_OBJECT *)v248[1];
        }
        else
        {
          v249 = (struct _DEVICE_OBJECT *)*((_QWORD *)v5 + 1);
        }
        if ( !v249 )
          goto LABEL_1446;
        SystemAddress = 0;
        v509 = 0LL;
        D3ColdInterface = RaidGetD3ColdInterface(v249);
        if ( D3ColdInterface >= 0 )
        {
          *(_BYTE *)v244 = RaidGetD3ColdCapability(v509);
          goto LABEL_1446;
        }
        goto LABEL_132;
      case 0x44u:
        v77 = v533;
        if ( !v5 && !v6 )
        {
          v78 = *(_QWORD *)(v3 - 16);
          v5 = 0LL;
          if ( v78 )
          {
            if ( *(_QWORD *)v78 && (*(_BYTE *)(v78 + 248) & 1) == 0 && **(_DWORD **)v78 == 1094997074 )
              v5 = *(int **)v78;
          }
        }
        if ( v531 || !v5 )
          goto LABEL_130;
        SystemAddress = 0;
        v5[1390] = *((_DWORD *)v533 + 2);
        v79 = *((_DWORD *)v77 + 3);
        if ( v79 >= 0x200
          && (v5[1391] = v79,
              *((_BYTE *)v5 + 5568) = *((_BYTE *)v77 + 16),
              *((_WORD *)v5 + 2785) = v77[9],
              *((_DWORD *)v77 + 10) == 1) )
        {
          v5[1398] = 1;
          *(_OWORD *)(v5 + 1394) = *(_OWORD *)(v77 + 12);
        }
        else
        {
          SystemAddress = -1056964602;
          v5[1390] = 0;
        }
        goto LABEL_1446;
      case 0x45u:
        SystemAddress = StorpAllocateHostMemoryBuffer(
                          v3,
                          (int)v531,
                          (unsigned __int64)v533,
                          (__int64)v535,
                          (unsigned int)v536,
                          v538,
                          v539,
                          (__int64)v540,
                          (__int64)v542,
                          v543);
        goto LABEL_1446;
      case 0x46u:
        SystemAddress = StorpFreeHostMemoryBuffer(v3, v6);
        goto LABEL_1446;
      case 0x47u:
        if ( v5 )
        {
          if ( v6 )
            goto LABEL_1446;
        }
        else
        {
          if ( v6 )
            goto LABEL_1446;
          v5 = 0LL;
          v258 = *(int ***)(v3 - 16);
          if ( !v258 || !*v258 )
            goto LABEL_34;
          v259 = **v258;
          if ( ((_BYTE)v258[31] & 1) != 0 )
          {
            if ( v259 != 1314275652 )
              goto LABEL_34;
            goto LABEL_1446;
          }
          if ( v259 != 1094997074 )
            goto LABEL_34;
          v5 = *v258;
        }
        if ( !*((_BYTE *)v5 + 580) )
          goto LABEL_130;
        v260 = v533;
        v261 = (unsigned int)v535;
        if ( !v531 || !v533 )
          goto LABEL_34;
        if ( *((_BYTE *)v531 + 2) == 40 )
        {
          v262 = v531[10];
        }
        else
        {
          v263 = v531[6];
          if ( !v263 || *(_DWORD *)v263 != 523124044 )
            goto LABEL_34;
          v262 = *(_QWORD *)(v263 + 176);
        }
        if ( !v262 )
          goto LABEL_34;
        if ( KeGetCurrentIrql() <= 2u )
        {
          if ( v261 )
          {
            v264 = IoPropagateIrpExtension(v262, v260, v261);
            SystemAddress = RaidNtStatusToStorStatus(v264);
          }
          else
          {
            SystemAddress = 0;
          }
          goto LABEL_1446;
        }
        goto LABEL_41;
      case 0x48u:
        v265 = v535;
        *(_QWORD *)&v265->Relationship = ExInterlockedInsertHeadList(
                                           (PLIST_ENTRY)v531,
                                           (PLIST_ENTRY)v533,
                                           (PKSPIN_LOCK)&v536->QuadPart);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x49u:
        v266 = v535;
        *(_QWORD *)&v266->Relationship = ExInterlockedInsertTailList(
                                           (PLIST_ENTRY)v531,
                                           (PLIST_ENTRY)v533,
                                           (PKSPIN_LOCK)&v536->QuadPart);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x4Au:
        v267 = v533;
        *(_QWORD *)v267 = ExInterlockedRemoveHeadList((PLIST_ENTRY)v531, (PKSPIN_LOCK)v535);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x4Bu:
        KeInitializeSpinLock(v531);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x4Cu:
        v252 = v535;
        v253 = v533;
        v254 = v536;
        v255 = *(_QWORD *)(v3 - 16);
        if ( !v535 || !v536 || !v538.QuadPart || !v533 || !v531 )
          goto LABEL_34;
        v256 = *((_BYTE *)v531 + 2) == 40 ? v531[12] : v531[6];
        if ( v533 != *(__int16 **)(v256 + 136) && v533 != *(__int16 **)(v256 + 104) )
          goto LABEL_34;
        v257 = *((_DWORD *)v533 + 11);
        *(_DWORD *)v538.QuadPart = v257;
        if ( (v257 & *(_DWORD *)(v255 + 56)) != 0 )
        {
          SystemAddress = -1056964607;
        }
        else
        {
          *(_QWORD *)&v252->Relationship = v253 + 24;
          v254->LowPart = (*((unsigned int *)v253 + 10)
                         + 4095LL
                         + (unsigned __int64)((*((_DWORD *)v253 + 11) + *((_DWORD *)v253 + 8)) & 0xFFF)) >> 12;
          SystemAddress = 0;
        }
        goto LABEL_1446;
      case 0x4Du:
        if ( !v531 )
          goto LABEL_34;
        if ( v5 )
        {
          if ( !v6 )
            SystemAddress = RaidInitializeCryptoEngine((__int64)v5, (unsigned __int16 *)v531);
          goto LABEL_1446;
        }
        if ( v6 )
          goto LABEL_1446;
        v5 = 0LL;
        v268 = *(_QWORD *)(v3 - 16);
        if ( !v268 )
          goto LABEL_34;
        v269 = *(int **)v268;
        if ( !*(_QWORD *)v268 )
          goto LABEL_34;
        v270 = *v269;
        if ( (*(_BYTE *)(v268 + 248) & 1) != 0 )
        {
          if ( v270 != 1314275652 )
            goto LABEL_34;
        }
        else
        {
          if ( v270 != 1094997074 )
            goto LABEL_34;
          v5 = *(int **)v268;
          SystemAddress = RaidInitializeCryptoEngine((__int64)v269, (unsigned __int16 *)v531);
        }
        goto LABEL_1446;
      case 0x4Eu:
        v271 = v533;
        if ( !v531 || !v533 )
          goto LABEL_34;
        if ( *((_BYTE *)v531 + 2) == 40 )
          v272 = v531[12];
        else
          v272 = v531[6];
        SystemAddress = 0;
        *(_DWORD *)v533 = **(_DWORD **)(v272 + 792);
        *((_DWORD *)v271 + 1) = *(_DWORD *)(*(_QWORD *)(v272 + 792) + 4LL);
        *((_DWORD *)v271 + 2) = *(_DWORD *)(*(_QWORD *)(v272 + 792) + 8LL);
        *((_QWORD *)v271 + 2) = *(_QWORD *)(*(_QWORD *)(v272 + 792) + 16LL);
        goto LABEL_1446;
      case 0x4Fu:
        if ( !v533 )
          goto LABEL_34;
        v273 = *((_DWORD *)v533 + 12);
        if ( v273 > 0x1000 )
        {
          SystemAddress = -1056964598;
          goto LABEL_1446;
        }
        if ( v273 )
        {
          v274 = *((_QWORD *)v533 + 7) == 0LL;
        }
        else
        {
          if ( !*((_QWORD *)v533 + 7) )
            goto LABEL_826;
          v274 = 1;
        }
        if ( v274 )
          goto LABEL_34;
LABEL_826:
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
          }
          else
          {
            SystemAddress = 0;
            StorpTelemetryMiniportEvent((__int64)v5, (__int64)v531, (__int64)v533, 0);
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v275 = *(_QWORD *)(v3 - 16);
          SystemAddress = 0;
          v5 = 0LL;
          if ( v275 )
          {
            v276 = *(int **)v275;
            if ( *(_QWORD *)v275 )
            {
              v277 = *v276;
              if ( (*(_BYTE *)(v275 + 248) & 1) != 0 )
              {
                if ( v277 == 1314275652 )
                  SystemAddress = -1056964606;
              }
              else if ( v277 == 1094997074 )
              {
                v5 = *(int **)v275;
                StorpTelemetryMiniportEvent((__int64)v276, (__int64)v531, (__int64)v533, 0);
              }
            }
          }
        }
        goto LABEL_1446;
      case 0x50u:
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
          SystemAddress = 0;
          goto LABEL_869;
        }
        if ( v6 )
          goto LABEL_122;
        v283 = *(int ***)(v3 - 16);
        SystemAddress = 0;
        v5 = 0LL;
        if ( v283 && *v283 )
        {
          v284 = **v283;
          if ( ((_BYTE)v283[31] & 1) != 0 )
          {
            v43 = v284 == 1314275652;
            goto LABEL_121;
          }
          if ( v284 == 1094997074 )
          {
            v5 = *v283;
LABEL_869:
            if ( (v5[26] & 0x10) != 0 )
              v5[147] = (int)v531;
            else
              SystemAddress = -1056964601;
            goto LABEL_1446;
          }
        }
        goto LABEL_34;
      case 0x51u:
        if ( !(_DWORD)v531 )
          goto LABEL_289;
        StorDelayExecution((ULONG)v531);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x52u:
        v288 = v540;
        v289 = v542;
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_897;
        }
        else if ( !v6 )
        {
          v5 = 0LL;
          v290 = *(_QWORD *)(v3 - 16);
          if ( v290 )
          {
            v6 = *(int **)v290;
            if ( *(_QWORD *)v290 )
            {
              v291 = *v6;
              if ( (*(_BYTE *)(v290 + 248) & 1) != 0 )
              {
                if ( v291 != 1314275652 )
                  goto LABEL_1446;
                goto LABEL_904;
              }
              if ( v291 != 1094997074 )
                goto LABEL_1446;
              v5 = *(int **)v290;
LABEL_897:
              v511 = v535;
              v292 = 4;
              v512[0] = v533;
              if ( v538.LowPart != 1 )
              {
                v292 = 516;
                if ( v538.LowPart == 2 )
                  v292 = 1028;
              }
              if ( *v5 == 1094997074 )
              {
                if ( !*((_BYTE *)v5 + 888) )
                  goto LABEL_910;
                v293 = v5[227] == 3;
              }
              else
              {
                if ( *v5 != 1314275652 || !*((_BYTE *)v5 + 1152) )
                  goto LABEL_910;
                v293 = v5[293] == 3;
              }
              if ( v293 )
              {
                v288->QuadPart = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX **, _QWORD, _DWORD, _QWORD, unsigned int, PHYSICAL_ADDRESS *))(*(_QWORD *)(*((_QWORD *)v5 + 110) + 8LL) + 272LL))(
                                   *((_QWORD *)v5 + 110),
                                   v512,
                                   &v511,
                                   (unsigned int)v531,
                                   0,
                                   0LL,
                                   v539.LowPart,
                                   v542);
LABEL_916:
                SystemAddress = -1056964605;
                if ( v288->QuadPart )
                  SystemAddress = 0;
                goto LABEL_1446;
              }
LABEL_910:
              if ( (*(_DWORD *)(*((_QWORD *)v5 + 76) + 184LL) & 0x2000) != 0 && (unsigned __int64)v531 <= 0x1000 )
                v294 = (void *)RaidAllocatePool(72LL, 4096LL, 1161912658LL, *((_QWORD *)v5 + 1));
              else
                v294 = (void *)MmAllocateContiguousNodeMemory(v531, v533, v535, v536, v292, v539.LowPart);
              v288->QuadPart = (__int64)v294;
              if ( v294 )
                *v289 = MmGetPhysicalAddress(v294);
              goto LABEL_916;
            }
          }
LABEL_1446:
          v492 = 0LL;
          if ( StorpControl )
          {
            va_copy(v492, va);
            if ( !DisableExtensionDriver )
            {
              if ( EnableExtensionCalls )
              {
                _InterlockedIncrement(&ExtRefCount);
                ((void (__fastcall *)(int *, _QWORD, int *))ExtExtendedFuncPost)(&dword_1401701E8, v496, v5);
                _InterlockedDecrement(&ExtRefCount);
              }
            }
          }
          return SystemAddress;
        }
LABEL_904:
        LODWORD(StartContext) = v539.LowPart;
        LODWORD(StartRoutine) = v538.LowPart;
        SystemAddress = NvmeAllocateContiguousMemorySpecifyCacheNodeEx(
                          (__int64)v6,
                          (unsigned __int64)v531,
                          v533,
                          v535,
                          v536,
                          StartRoutine,
                          StartContext,
                          v540,
                          v542);
        goto LABEL_1446;
      case 0x53u:
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_928;
        }
        else if ( !v6 )
        {
          v5 = 0LL;
          v295 = *(_QWORD *)(v3 - 16);
          if ( !v295 )
            goto LABEL_1446;
          v6 = *(int **)v295;
          if ( !*(_QWORD *)v295 )
            goto LABEL_1446;
          v296 = *v6;
          if ( (*(_BYTE *)(v295 + 248) & 1) != 0 )
          {
            if ( v296 != 1314275652 )
              goto LABEL_1446;
            goto LABEL_932;
          }
          if ( v296 != 1094997074 )
            goto LABEL_1446;
          v5 = *(int **)v295;
LABEL_928:
          v297 = *((_QWORD *)v5 + 110);
          if ( *v5 == 1094997074 )
          {
            if ( !*((_BYTE *)v5 + 888) )
              goto LABEL_938;
            v298 = v5[227] == 3;
          }
          else
          {
            if ( *v5 != 1314275652 || !*((_BYTE *)v5 + 1152) )
              goto LABEL_938;
            v298 = v5[293] == 3;
          }
          if ( v298 )
          {
            v299 = *(_QWORD *)(v297 + 8);
            LOBYTE(Irp) = 1;
            (*(void (__fastcall **)(__int64, __int16 *, union _LARGE_INTEGER *, _QWORD *, _DWORD))(v299 + 24))(
              v297,
              v533,
              v536,
              v531,
              (_DWORD)Irp);
            SystemAddress = 0;
            goto LABEL_1446;
          }
LABEL_938:
          if ( (*(_DWORD *)(*((_QWORD *)v5 + 76) + 184LL) & 0x2000) == 0 || (unsigned __int64)v533 > 0x1000 )
          {
LABEL_313:
            MmFreeContiguousMemorySpecifyCache(v531, (SIZE_T)v533, (MEMORY_CACHING_TYPE)v535);
            SystemAddress = 0;
            goto LABEL_1446;
          }
          if ( v531 )
          {
            ExFreePoolWithTag(v531, 0x45416152u);
            SystemAddress = 0;
          }
          else
          {
LABEL_289:
            SystemAddress = 0;
          }
          goto LABEL_1446;
        }
LABEL_932:
        SystemAddress = NvmeFreeContiguousMemorySpecifyCacheEx(
                          (_DWORD)v6,
                          (_DWORD)v531,
                          (_DWORD)v533,
                          (_DWORD)v535,
                          (__int64)v536);
        goto LABEL_1446;
      case 0x54u:
        v285 = (int)v533;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
          SystemAddress = 0;
          goto LABEL_883;
        }
        if ( v6 )
          goto LABEL_122;
        v286 = *(int ***)(v3 - 16);
        SystemAddress = 0;
        v5 = 0LL;
        if ( v286 && *v286 )
        {
          v287 = **v286;
          if ( ((_BYTE)v286[31] & 1) != 0 )
          {
            v43 = v287 == 1314275652;
            goto LABEL_121;
          }
          if ( v287 == 1094997074 )
          {
            v5 = *v286;
LABEL_883:
            if ( (v5[26] & 0x10) != 0 )
            {
              v5[147] = (int)v531;
              v5[148] = v285;
            }
            else
            {
              SystemAddress = -1056964601;
            }
            goto LABEL_1446;
          }
        }
        goto LABEL_34;
      case 0x55u:
      case 0x56u:
      case 0x57u:
        if ( v5 )
          goto LABEL_950;
        if ( v6 )
          goto LABEL_34;
        v5 = 0LL;
        v300 = *(_QWORD *)(v3 - 16);
        if ( !v300 || !*(_QWORD *)v300 || (*(_BYTE *)(v300 + 248) & 1) != 0 || **(_DWORD **)v300 != 1094997074 )
          goto LABEL_34;
        v5 = *(int **)v300;
LABEL_950:
        va_copy(v301, va4);
        memset(v527, 0, sizeof(v527));
        v528 = 0LL;
        v302 = (int)v531;
        v303 = (int)v533;
        v304 = (int)v535;
        v305 = (unsigned int *)v536;
        v306 = v538.QuadPart;
        v307 = v539.LowPart;
        v308 = (char)v540;
        v309 = (__int64)v542;
        if ( a1 == 58 || a1 == 85 )
        {
          v310 = 2;
        }
        else if ( a1 == 59 || a1 == 86 )
        {
          v310 = 4;
        }
        else
        {
          v310 = 8;
        }
        v311 = v310;
        v312 = 0LL;
        do
        {
          v313 = *(_QWORD *)v301;
          v301 += 16;
          *(_QWORD *)((char *)v527 + v312) = v313;
          v312 += 8LL;
          *(_QWORD *)&v529[v312 - 8] = *((_QWORD *)v301 - 1);
          --v311;
        }
        while ( v311 );
        v314 = StorEtwRaidMiniportEvent(
                 (_DWORD)v5,
                 v302,
                 v303,
                 v304,
                 (__int64)v305,
                 v306,
                 v307,
                 v308,
                 v309,
                 v310,
                 (__int64)v527,
                 (__int64)v529);
        SystemAddress = RaidNtStatusToStorStatus(v314);
        goto LABEL_1446;
      case 0x58u:
        v315 = v535;
        Timer = ExAllocateTimer(v531, v533, 4LL);
        *(_QWORD *)&v315->Relationship = Timer;
        SystemAddress = -1056964607;
        if ( Timer )
          SystemAddress = 0;
        goto LABEL_1446;
      case 0x59u:
        v317 = (_BYTE *)v538.QuadPart;
        if ( !v538.QuadPart )
          goto LABEL_34;
        SystemAddress = 0;
        *v317 = ExSetTimer(v531, v533, v535, v536);
        goto LABEL_1446;
      case 0x5Au:
        v318 = v535;
        if ( !v535 )
          goto LABEL_34;
        SystemAddress = 0;
        v319 = ExCancelTimer(v531, v533);
        LOBYTE(v318->Relationship) = v319;
        if ( !v319 )
          goto LABEL_967;
        goto LABEL_1446;
      case 0x5Bu:
        v320 = (_BYTE *)v538.QuadPart;
        if ( !v538.QuadPart )
          goto LABEL_34;
        SystemAddress = 0;
        *v320 = ExDeleteTimer(v531, (unsigned __int8)v533, (unsigned __int8)v535, v536);
        goto LABEL_1446;
      case 0x5Cu:
        SystemAddress = -1056964602;
        if ( v531 )
        {
          LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
          *(_DWORD *)v531 = LockArray_high;
          v105 = 0;
          if ( LockArray_high == -1 )
            v105 = -1056964602;
          SystemAddress = v105;
        }
        goto LABEL_1446;
      case 0x5Du:
        v321 = (int)v531;
        v322 = v533;
        SystemAddress = 0;
        v323 = v535;
        v324 = 0LL;
        v325 = *(_QWORD *)(v3 - 16);
        if ( v325 && *(_QWORD *)v325 && (*(_BYTE *)(v325 + 248) & 1) == 0 && **(_DWORD **)v325 == 1094997074 )
        {
          v324 = *(_DWORD **)v325;
        }
        else if ( (unsigned int)((_DWORD)v531 - 2) <= 1 )
        {
          goto LABEL_34;
        }
        if ( v535 )
        {
          v535->Relationship = (int)v531;
          v326 = v321 - 1;
          if ( v326 )
          {
            v327 = v326 - 1;
            if ( !v327 )
            {
              if ( KeGetCurrentIrql() <= 2u )
              {
                RaidAdapterAcquireStartIoLock((__int64)v324, (struct _KLOCK_QUEUE_HANDLE *)&v323->8);
                goto LABEL_1446;
              }
              goto LABEL_41;
            }
            v328 = v327 - 1;
            if ( !v328 )
            {
              if ( KeGetCurrentIrql() <= 2u )
              {
                v323->Processor.Reserved[14] = RaidAdapterAcquireInterruptLock((__int64)v324);
                goto LABEL_1446;
              }
              goto LABEL_41;
            }
            v329 = v328 - 1;
            if ( v329 )
            {
              if ( v329 != 1 )
              {
                v323->Relationship = RelationProcessorCore;
                SystemAddress = -1056964602;
                goto LABEL_1446;
              }
              if ( KeGetCurrentIrql() >= 2u )
              {
                if ( v322 )
                {
                  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v322 + 8, (PKLOCK_QUEUE_HANDLE)&v323->8);
                  goto LABEL_1446;
                }
                goto LABEL_34;
              }
LABEL_41:
              SystemAddress = -1056964600;
              goto LABEL_1446;
            }
            if ( v322 )
            {
              KeAcquireInStackQueuedSpinLockForDpc((PKSPIN_LOCK)v322 + 8, (PKLOCK_QUEUE_HANDLE)&v323->8);
              goto LABEL_1446;
            }
          }
          else
          {
            if ( KeGetCurrentIrql() > 2u )
              goto LABEL_41;
            if ( v322 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v322 + 8, (PKLOCK_QUEUE_HANDLE)&v323->8);
              goto LABEL_1446;
            }
          }
        }
LABEL_34:
        SystemAddress = -1056964602;
        goto LABEL_1446;
      case 0x5Eu:
        v106 = (ULONG *)v531;
        if ( !v531 )
          goto LABEL_34;
        *v106 = KeQueryActiveProcessorCountEx(0xFFFFu);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x5Fu:
        v330 = v533;
        if ( !v531 || !v533 )
          goto LABEL_34;
        SystemAddress = 0;
        *(_BYTE *)v330 = KeRemoveQueueDpc((PRKDPC)v531);
        goto LABEL_1446;
      case 0x60u:
        if ( !v533 )
          goto LABEL_34;
        v278 = *((_DWORD *)v533 + 12);
        if ( v278 > 0x1000 )
        {
          SystemAddress = -1056964598;
          goto LABEL_1446;
        }
        if ( v278 )
        {
          v279 = *((_QWORD *)v533 + 7) == 0LL;
        }
        else
        {
          if ( !*((_QWORD *)v533 + 7) )
            goto LABEL_846;
          v279 = 1;
        }
        if ( v279 )
          goto LABEL_34;
LABEL_846:
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
          }
          else
          {
            SystemAddress = 0;
            StorpTelemetryMiniportEvent((__int64)v5, (__int64)v531, (__int64)v533, (int)v535);
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v280 = *(_QWORD *)(v3 - 16);
          SystemAddress = 0;
          v5 = 0LL;
          if ( v280 )
          {
            v281 = *(int **)v280;
            if ( *(_QWORD *)v280 )
            {
              v282 = *v281;
              if ( (*(_BYTE *)(v280 + 248) & 1) != 0 )
              {
                if ( v282 == 1314275652 )
                  SystemAddress = -1056964606;
              }
              else if ( v282 == 1094997074 )
              {
                v5 = *(int **)v280;
                StorpTelemetryMiniportEvent((__int64)v281, (__int64)v531, (__int64)v533, (int)v535);
              }
            }
          }
        }
        goto LABEL_1446;
      case 0x61u:
        v331 = v533;
        if ( (unsigned int)v531 >= 3 || !v533 )
        {
          SystemAddress = -1056964602;
          if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline(
                               3221225474LL,
                               v6)
            && v331 )
          {
            SystemAddress = -1056964606;
          }
          goto LABEL_1446;
        }
        if ( !(_DWORD)v531 )
        {
          if ( v5 )
          {
            if ( !v6 )
            {
              *(_BYTE *)v533 = (v5[28] & 0x40) != 0;
              SystemAddress = 0;
            }
            goto LABEL_1446;
          }
          if ( v6 )
            goto LABEL_1446;
          v5 = 0LL;
          v332 = *(_QWORD *)(v3 - 16);
          if ( v332 )
          {
            v333 = *(int **)v332;
            if ( *(_QWORD *)v332 )
            {
              v334 = *v333;
              if ( (*(_BYTE *)(v332 + 248) & 1) != 0 )
              {
                if ( v334 != 1314275652 )
                  goto LABEL_34;
              }
              else
              {
                if ( v334 != 1094997074 )
                  goto LABEL_34;
                v5 = *(int **)v332;
                *(_BYTE *)v533 = (v333[28] & 0x40) != 0;
                SystemAddress = 0;
              }
              goto LABEL_1446;
            }
          }
          goto LABEL_34;
        }
        if ( (_DWORD)v531 == 2 )
        {
          if ( !(unsigned int)Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline(3221225474LL, v6) )
            goto LABEL_1446;
          if ( v5 )
          {
            if ( !v6 )
            {
              *(_BYTE *)v331 = (v5[28] & 0x20) != 0;
              SystemAddress = 0;
            }
            goto LABEL_1446;
          }
          if ( v6 )
            goto LABEL_1446;
          v5 = 0LL;
          v335 = *(_QWORD *)(a2 - 16);
          if ( v335 )
          {
            v336 = *(int **)v335;
            if ( *(_QWORD *)v335 )
            {
              v337 = *v336;
              if ( (*(_BYTE *)(v335 + 248) & 1) != 0 )
              {
                if ( v337 != 1314275652 )
                  goto LABEL_34;
              }
              else
              {
                if ( v337 != 1094997074 )
                  goto LABEL_34;
                v5 = *(int **)v335;
                *(_BYTE *)v331 = (v336[28] & 0x20) != 0;
                SystemAddress = 0;
              }
              goto LABEL_1446;
            }
          }
          goto LABEL_34;
        }
        if ( (_DWORD)v531 != 1 )
          goto LABEL_1446;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
          SystemAddress = 0;
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v338 = *(_QWORD *)(v3 - 16);
          SystemAddress = 0;
          v5 = 0LL;
          if ( !v338 )
            goto LABEL_34;
          v10 = *(_QWORD *)v338;
          if ( !*(_QWORD *)v338 )
            goto LABEL_34;
          v13 = (int *)*(unsigned int *)v10;
          if ( (*(_BYTE *)(v338 + 248) & 1) != 0 )
          {
            v43 = (_DWORD)v13 == 1314275652;
            goto LABEL_121;
          }
          if ( (_DWORD)v13 != 1094997074 )
            goto LABEL_34;
          v5 = *(int **)v338;
        }
        if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline(v10, v13) )
          *(_BYTE *)v331 = NvmeIceList != &NvmeIceList;
        else
          *(_BYTE *)v331 = (v5[28] & 0x10) != 0;
        goto LABEL_1446;
      case 0x62u:
        if ( !v535 || !v538.QuadPart || !(_DWORD)v536 )
          goto LABEL_34;
        SystemAddress = StorEtwMiniportLogError(
                          v3,
                          (__int64)v531,
                          (int)v533,
                          (const wchar_t *)v535,
                          (int)v536,
                          v538.QuadPart);
        goto LABEL_1446;
      case 0x63u:
        if ( !v531 )
          goto LABEL_34;
        KeInitializeEvent((PRKEVENT)v531, (EVENT_TYPE)v533, (BOOLEAN)v535);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x64u:
        v340 = (union _LARGE_INTEGER *)v535;
        v341 = v531;
        v342 = (unsigned __int8)v533;
        if ( !v535 || *(_QWORD *)&v535->Relationship )
          goto LABEL_1055;
        if ( KeGetCurrentIrql() > 2u )
          goto LABEL_41;
        if ( !v340->QuadPart )
          goto LABEL_1056;
LABEL_1055:
        if ( KeGetCurrentIrql() > 1u )
          goto LABEL_41;
LABEL_1056:
        if ( !v341 )
          goto LABEL_34;
        SystemAddress = KeWaitForSingleObject(v341, Executive, 0, v342, v340) != 0 ? 0xC1000001 : 0;
        goto LABEL_1446;
      case 0x65u:
        v343 = (struct _KEVENT *)v531;
        if ( KeGetCurrentIrql() > 2u )
          goto LABEL_41;
        if ( !v343 )
          goto LABEL_34;
        KeSetEvent(v343, 0, 0);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x66u:
        Irp = 0LL;
        v339 = StorReset(v3, (unsigned int)v531, 1, 0);
        SystemAddress = RaidNtStatusToStorStatus(v339);
        goto LABEL_1446;
      case 0x67u:
        if ( !v533 || (unsigned int)((_DWORD)v531 - 1) > 0xF )
          goto LABEL_34;
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_1072;
        }
        else if ( !v6 )
        {
          v5 = 0LL;
          v344 = *(_QWORD *)(v3 - 16);
          if ( !v344 )
            goto LABEL_34;
          v6 = *(int **)v344;
          if ( !*(_QWORD *)v344 )
            goto LABEL_34;
          v345 = *v6;
          if ( (*(_BYTE *)(v344 + 248) & 1) != 0 )
          {
            if ( v345 != 1314275652 )
              goto LABEL_34;
            goto LABEL_1074;
          }
          if ( v345 != 1094997074 )
            goto LABEL_34;
          v5 = *(int **)v344;
LABEL_1072:
          SystemAddress = ((int)RaMiniportSaveFeatureList(v5 + 94) >> 31) & 0xC1000001;
          goto LABEL_1446;
        }
LABEL_1074:
        SystemAddress = ((int)RaMiniportSaveFeatureList(v6 + 42) >> 31) & 0xC1000001;
        goto LABEL_1446;
      case 0x68u:
        if ( KeGetCurrentIrql() )
          goto LABEL_41;
        v346 = v533;
        if ( !v533 )
          goto LABEL_34;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v5 = 0LL;
          v347 = *(int ***)(a2 - 16);
          if ( !v347 || !*v347 )
            goto LABEL_34;
          v348 = **v347;
          if ( ((_BYTE)v347[31] & 1) != 0 )
          {
            v43 = v348 == 1314275652;
            goto LABEL_121;
          }
          if ( v348 != 1094997074 )
            goto LABEL_34;
          v5 = *v347;
        }
        if ( v531 && *(_WORD *)v531 == 1 && *((_DWORD *)v531 + 1) >= 4u )
        {
          v490 = 0;
          LOWORD(v490) = *((_WORD *)v531 + 4);
          BYTE2(v490) = *((_BYTE *)v531 + 10);
          v349 = RaidAdapterFindUnit((__int64)v5, v490);
        }
        else
        {
          v349 = 0LL;
        }
        v350 = RaidCaptureLiveDump((__int64)v5, (__int64)v349, (__int64)v346);
        SystemAddress = RaidNtStatusToStorStatus(v350);
        goto LABEL_1446;
      case 0x69u:
        v351 = v539.LowPart;
        v352 = (char)v540;
        v490 = v539.LowPart;
        v491.LowPart = (unsigned int)v540;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v5 = 0LL;
          v353 = *(int ***)(v3 - 16);
          if ( !v353 || !*v353 )
            goto LABEL_34;
          v354 = **v353;
          if ( ((_BYTE)v353[31] & 1) != 0 )
          {
            v43 = v354 == 1314275652;
            goto LABEL_121;
          }
          if ( v354 != 1094997074 )
            goto LABEL_34;
          v352 = v491.LowPart;
          v5 = *v353;
          v351 = v490;
        }
        if ( v536 && v543 && (unsigned __int16)((_WORD)v542 - 1) <= 0x3FFu )
        {
          SystemAddress = StorEtwMiniportLogByteStream(
                            (_DWORD)v5,
                            (_DWORD)v531,
                            (_DWORD)v533,
                            (_DWORD)v535,
                            (__int64)v536,
                            v538.QuadPart,
                            v351,
                            v352,
                            (unsigned __int16)v542,
                            (__int64)v543);
          goto LABEL_1446;
        }
        goto LABEL_34;
      case 0x6Au:
        v355 = (struct _KDPC_WATCHDOG_INFORMATION *)v531;
        if ( !v531 )
          goto LABEL_34;
        if ( KeGetCurrentIrql() >= 2u )
        {
          DpcWatchdogInformation = KeQueryDpcWatchdogInformation(v355);
          SystemAddress = RaidNtStatusToStorStatus(DpcWatchdogInformation);
        }
        else
        {
          v356 = KfRaiseIrql(2u);
          v357 = KeQueryDpcWatchdogInformation(v355);
          KeLowerIrql(v356);
          SystemAddress = RaidNtStatusToStorStatus(v357);
        }
        goto LABEL_1446;
      case 0x6Bu:
        if ( !v531 )
          goto LABEL_34;
        SystemAddress = 0;
        *(_DWORD *)v531 = StorMinimumTimeInterval;
        goto LABEL_1446;
      case 0x6Cu:
        if ( v5 )
        {
          if ( v6 )
            goto LABEL_1446;
        }
        else
        {
          if ( v6 )
            goto LABEL_1446;
          v5 = 0LL;
          v359 = *(int ***)(v3 - 16);
          if ( !v359 || !*v359 )
            goto LABEL_34;
          v360 = **v359;
          if ( ((_BYTE)v359[31] & 1) != 0 )
          {
            if ( v360 != 1314275652 )
              goto LABEL_34;
            goto LABEL_1446;
          }
          if ( v360 != 1094997074 )
            goto LABEL_34;
          v5 = *v359;
        }
        v361 = -1073741637;
        v362 = 0LL;
        if ( *v5 == 1094997074 )
        {
          if ( *((_BYTE *)v5 + 4369) )
          {
            v363 = *((_QWORD *)v5 + 544);
            if ( v363 )
            {
              if ( (unsigned int)v531 >= *(_DWORD *)(v363 + 4) )
                goto LABEL_1127;
              v362 = v5 + 1480;
              goto LABEL_1136;
            }
          }
        }
        else
        {
          if ( *v5 != 1314275652 )
          {
LABEL_1136:
            if ( (_BYTE)v533 )
              v367 = (__int64 (__fastcall *)(_QWORD))v362[5];
            else
              v367 = (__int64 (__fastcall *)(_QWORD))v362[6];
            if ( v367 )
              v361 = v367(v362[1]);
            goto LABEL_1141;
          }
          if ( (v5[36] & 0x800LL) != 0 )
          {
            v364 = *((_QWORD *)v5 + 72);
            if ( v364 )
            {
              v365 = *((_QWORD *)v5 + 73);
              if ( v365 )
              {
                v366 = *(_QWORD *)(v365 + 120);
                if ( v366 )
                {
                  if ( (unsigned int)v531 >= *(_DWORD *)(v366 + 4) )
                    goto LABEL_1127;
                  v362 = (_QWORD *)(v364 + 72);
                  goto LABEL_1136;
                }
              }
            }
          }
        }
LABEL_1141:
        SystemAddress = RaidNtStatusToStorStatus(v361);
        goto LABEL_1446;
      case 0x6Du:
        v368 = (KIRQL *)v531;
        if ( !v531 )
          goto LABEL_34;
        *v368 = KeGetCurrentIrql();
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x6Eu:
        v369 = (KSTART_ROUTINE *)v531;
        v370 = v533;
        v371 = (KPRIORITY *)v535;
        v372 = v536;
        if ( KeGetCurrentIrql() )
          goto LABEL_41;
        if ( !v369 )
          goto LABEL_34;
        if ( v371 )
        {
          switch ( *v371 )
          {
            case 7:
            case 8:
            case 12:
            case 13:
            case 14:
            case 15:
            case 18:
              break;
            default:
              goto LABEL_34;
          }
        }
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v5 = 0LL;
          v373 = *(int ***)(a2 - 16);
          if ( !v373 || !*v373 )
            goto LABEL_34;
          v374 = **v373;
          if ( ((_BYTE)v373[31] & 1) != 0 )
          {
            v43 = v374 == 1314275652;
            goto LABEL_121;
          }
          if ( v374 != 1094997074 )
            goto LABEL_34;
          v5 = *v373;
        }
        ThreadHandle = 0LL;
        memset(&ObjectAttributes, 0, 44);
        if ( _InterlockedExchangeAdd(v5 + 1504, 1u) >= (unsigned int)v5[1503] )
        {
          _InterlockedDecrement(v5 + 1504);
          SystemAddress = -1056964601;
          goto LABEL_1446;
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v375 = PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, v369, v370);
        if ( v375 < 0 )
        {
          _InterlockedDecrement(v5 + 1504);
        }
        else
        {
          if ( v372 )
            v372->QuadPart = (__int64)ThreadHandle;
          if ( v371 )
          {
            Object = 0LL;
            v376 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
            if ( v376 < 0 )
            {
              SystemAddress = RaidNtStatusToStorStatus(0);
            }
            else
            {
              KeSetPriorityThread((PKTHREAD)Object, *v371);
              ObfDereferenceObject(Object);
              SystemAddress = RaidNtStatusToStorStatus(v376);
            }
            goto LABEL_1446;
          }
        }
        SystemAddress = RaidNtStatusToStorStatus(v375);
        goto LABEL_1446;
      case 0x6Fu:
        v377 = v531;
        v378 = (int)v533;
        v504 = 0LL;
        if ( KeGetCurrentIrql() )
          goto LABEL_41;
        switch ( v378 )
        {
          case 7:
          case 8:
          case 12:
          case 13:
          case 14:
          case 15:
          case 18:
            if ( !v377 )
              goto LABEL_34;
            v379 = ObReferenceObjectByHandle(v377, 0x1FFFFFu, 0LL, 0, &v504, 0LL);
            if ( v379 >= 0 )
            {
              KeSetPriorityThread((PKTHREAD)v504, v378);
              ObfDereferenceObject(v504);
            }
            SystemAddress = RaidNtStatusToStorStatus(v379);
            break;
          default:
            goto LABEL_34;
        }
        goto LABEL_1446;
      case 0x70u:
        v380 = (struct _GROUP_AFFINITY *)v533;
        v381 = (struct _GROUP_AFFINITY *)v535;
        if ( !v533 )
          goto LABEL_34;
        if ( KeGetCurrentIrql() > 2u )
          goto LABEL_41;
        KeSetSystemGroupAffinityThread(v380, v381);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x71u:
        v382 = (struct _GROUP_AFFINITY *)v533;
        if ( !v533 )
          goto LABEL_34;
        if ( KeGetCurrentIrql() > 2u )
          goto LABEL_41;
        KeRevertToUserGroupAffinityThread(v382);
        SystemAddress = 0;
        goto LABEL_1446;
      case 0x72u:
        if ( ((unsigned __int8)v533 & 1) != 0 )
          goto LABEL_34;
        Irp = (PIRP)v535;
        v383 = StorReset(v3, (unsigned int)v531, 1, (char)v533);
        SystemAddress = RaidNtStatusToStorStatus(v383);
        goto LABEL_1446;
      case 0x73u:
        v384 = (unsigned int)v535;
        v385 = (__int64)v531;
        v386 = v533;
        v387 = v536;
        v491.LowPart = (unsigned int)v535;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v388 = *(int ***)(v3 - 16);
          v5 = 0LL;
          if ( !v388 || !*v388 )
            goto LABEL_34;
          v389 = **v388;
          if ( ((_BYTE)v388[31] & 1) != 0 )
          {
            v43 = v389 == 1314275652;
            goto LABEL_121;
          }
          if ( v389 != 1094997074 )
            goto LABEL_34;
          v5 = *v388;
          v384 = v491.LowPart;
        }
        if ( !v533 || !v384 || !v536 )
          goto LABEL_34;
        if ( v531 )
        {
          if ( *(_WORD *)v531 != 1 || *((_DWORD *)v531 + 1) < 4u )
            goto LABEL_34;
          v490 = *((unsigned __int8 *)v531 + 8);
          *(_WORD *)((char *)&v490 + 1) = *(_WORD *)((char *)v531 + 9);
          SystemAddress = -1056964601;
          v390 = RaidAdapterFindUnit((__int64)v5, v490);
          if ( !v390 )
            goto LABEL_1446;
          v384 = v491.LowPart;
        }
        else
        {
          v390 = (__int64 *)v5;
        }
        v391 = -v385;
        if ( DisableExtensionDriver
          || !EnableExtensionCalls
          || (_InterlockedIncrement(&ExtRefCount),
              v392 = ((__int64 (__fastcall *)(__int16 *, _QWORD, int *, __int64 *, _QWORD, union _LARGE_INTEGER *))ExtSendMiniportData)(
                       v386,
                       2 - (unsigned int)(v391 != 0),
                       &dword_1401701B0,
                       v390,
                       v384,
                       v387),
              _InterlockedDecrement(&ExtRefCount),
              v392 < 0) )
        {
LABEL_967:
          SystemAddress = -1056964607;
        }
        else
        {
          SystemAddress = 0;
        }
        goto LABEL_1446;
      case 0x74u:
        v393 = v533;
        ProcNumber = 0;
        if ( (_DWORD)v531 == -1 )
        {
          SystemAddress = -1056964602;
        }
        else
        {
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex((ULONG)v531, &ProcNumber);
          if ( ProcessorNumberFromIndex >= 0 )
          {
            v395 = *(_QWORD *)(v3 - 16);
            if ( v395 )
            {
              v396 = *(int **)v395;
              if ( *(_QWORD *)v395 )
              {
                v397 = *v396;
                if ( (*(_BYTE *)(v395 + 248) & 1) != 0 )
                {
                  if ( v397 == 1314275652 )
                  {
                    SystemAddress = NvmeGetMessageNumberFromProcessorNumber(v396, &ProcNumber, v393);
                    goto LABEL_1446;
                  }
                }
                else if ( v397 == 1094997074 )
                {
                  SystemAddress = RaidGetMessageNumberFromProcessorNumber((__int64)v396, &ProcNumber.Group, v393);
                  goto LABEL_1446;
                }
              }
            }
LABEL_424:
            SystemAddress = -1056964602;
            goto LABEL_1446;
          }
          SystemAddress = RaidNtStatusToStorStatus(ProcessorNumberFromIndex);
        }
        goto LABEL_1446;
      case 0x75u:
        if ( (unsigned int)v531 > 0xFFFF || !v533 || !(_WORD)v535 || !v536 )
          goto LABEL_34;
        NodeActiveAffinity2 = KeQueryNodeActiveAffinity2((unsigned int)v531, v533, (unsigned __int16)v535, v536);
        SystemAddress = RaidNtStatusToStorStatus(NodeActiveAffinity2);
        goto LABEL_1446;
      case 0x76u:
        v399 = v531;
        if ( !EnableRegistryWatch )
          goto LABEL_122;
        if ( !v531 )
          goto LABEL_34;
        v400 = *(int ***)(v3 - 16);
        if ( !v400 )
          goto LABEL_34;
        v401 = *v400;
        if ( !*v400 )
          goto LABEL_34;
        v402 = *v401;
        if ( ((_BYTE)v400[31] & 1) != 0 )
        {
          if ( v402 != 1314275652 )
            goto LABEL_34;
          if ( ExAcquireRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v401 + 19)) )
          {
            v403 = *((_QWORD *)v401 + 124);
            if ( v403 )
              *(_QWORD *)(*(_QWORD *)v403 + 8LL) = v399;
            SystemAddress = 0;
            ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v401 + 19));
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v402 != 1094997074 )
            goto LABEL_34;
          if ( ExAcquireRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v401 + 42)) )
          {
            v404 = *((_QWORD *)v401 + 756);
            if ( v404 )
              *(_QWORD *)(*(_QWORD *)v404 + 8LL) = v399;
            SystemAddress = 0;
            ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v401 + 42));
            goto LABEL_1446;
          }
        }
        goto LABEL_1229;
      case 0x77u:
        v405 = (PLARGE_INTEGER)v535;
        v406 = v536;
        v221 = v538.QuadPart;
        v407 = (__int64 *)v539.QuadPart;
        Timeout = (PLARGE_INTEGER)v535;
        if ( v531 )
          goto LABEL_34;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v5 = 0LL;
          v408 = *(int ***)(v3 - 16);
          if ( !v408 || !*v408 )
            goto LABEL_34;
          v409 = **v408;
          if ( ((_BYTE)v408[31] & 1) != 0 )
          {
            v43 = v409 == 1314275652;
            goto LABEL_121;
          }
          if ( v409 != 1094997074 )
            goto LABEL_34;
          v5 = *v408;
          v405 = Timeout;
        }
        if ( RuntimePowerDisabled )
        {
          SystemAddress = 0;
          goto LABEL_1446;
        }
        v410 = *((_QWORD *)v5 + 620);
        if ( v410 && !*(_BYTE *)(v410 + 28) )
        {
          D3ColdInterface = RaidRegisterPerfStates(
                              *((_QWORD *)v5 + 1),
                              (unsigned int)v533,
                              (unsigned __int64)v405,
                              (unsigned int *)v536,
                              v538.QuadPart,
                              (PHYSICAL_ADDRESS)v539.QuadPart,
                              *(_QWORD *)v410);
          if ( D3ColdInterface < 0 )
          {
LABEL_132:
            SystemAddress = RaidNtStatusToStorStatus(D3ColdInterface);
          }
          else
          {
            if ( v406 )
              v225 = v406->LowPart;
            else
              v225 = 0;
            if ( ((unsigned __int16)Timeout & 0x1000) != 0 )
              v221 = *v407;
LABEL_646:
            if ( (unsigned __int8)RaidAdapterCacheOperationalPowerRange(*((_QWORD *)v5 + 620), v225, v221) )
            {
              *(_QWORD *)(*((_QWORD *)v5 + 620) + 48LL) = -1LL;
              *(_QWORD *)(*((_QWORD *)v5 + 620) + 56LL) = -1LL;
              *(_QWORD *)(*((_QWORD *)v5 + 620) + 64LL) = -1LL;
            }
            *(_BYTE *)(*((_QWORD *)v5 + 620) + 28LL) = v225;
            StorpLogRegisterAdapterPerfStates((__int64)v5, v221);
            SystemAddress = 0;
          }
          goto LABEL_1446;
        }
        goto LABEL_276;
      case 0x78u:
        v236 = v531;
        if ( (_DWORD)v535 != 4 )
          goto LABEL_34;
        v517 = v533;
        v506 = 0;
        v518 = v536;
        v516 = 0LL;
        v520 = &v506;
        v521 = 0LL;
        DWORD2(v516) = 292;
        v522 = 0LL;
        v519 = 67108868LL;
        v523 = 0LL;
        LODWORD(v521) = 4;
        v524 = 0LL;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
        SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
        if ( !SystemRoutineAddress )
          SystemRoutineAddress = RtlQueryRegistryValues;
        v238 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int128 *, _QWORD, _QWORD))SystemRoutineAddress)(
                 0x80000000LL,
                 v236,
                 &v516,
                 0LL,
                 0LL);
        if ( v238 < 0
          && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            18LL,
            &WPP_fe6d764451ce35c6dcc82ee897ab329f_Traceguids,
            (unsigned int)v238);
        }
        SystemAddress = RaidNtStatusToStorStatus(v238);
        goto LABEL_1446;
      case 0x79u:
        v411 = (int)v533;
        v412 = (int)v531;
        v413 = (int)v535;
        v414 = (unsigned int)v536;
        v415 = v538.LowPart;
        v416 = v540;
        v491.LowPart = (unsigned int)v533;
        v490 = v539.LowPart;
        if ( !v3 )
          goto LABEL_34;
        if ( !v535 )
          goto LABEL_34;
        if ( !(_DWORD)v536 )
          goto LABEL_34;
        if ( !v540 )
          goto LABEL_34;
        v540->QuadPart = 0LL;
        v417 = *(__int64 **)(v3 - 16);
        v505 = 0LL;
        if ( (v417[31] & 1) != 0 )
          goto LABEL_34;
        v418 = *v417;
        if ( !v418 )
          goto LABEL_34;
        if ( (int)RaidTranslateResourceListAddress(
                    (int)v418 + 360,
                    v412,
                    v411,
                    v413,
                    v414,
                    (_DWORD)StartRoutine,
                    (__int64)&v505) >= 0 )
        {
          if ( v415 )
          {
            SystemAddress = 0;
            v416->QuadPart = v505;
          }
          else
          {
            v421 = 1028LL;
            if ( !v490 )
              v421 = 516LL;
            v422 = MmMapIoSpaceEx(v505, v414, v421);
            v416->QuadPart = v422;
            if ( v422 )
            {
              AddressMapping = RaidAllocateAddressMapping(
                                 (int)v418 + 952,
                                 v413,
                                 v422,
                                 v414,
                                 v491.LowPart,
                                 *(_QWORD *)(v418 + 8));
              SystemAddress = 0;
              if ( AddressMapping == -1073741801 )
              {
                v416->QuadPart = 0LL;
                SystemAddress = -1056964605;
              }
              else if ( AddressMapping < 0 )
              {
                v416->QuadPart = 0LL;
                SystemAddress = -1056964607;
              }
            }
            else
            {
              SystemAddress = -1056964607;
            }
          }
        }
        else if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
               || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
LABEL_276:
          SystemAddress = -1056964607;
        }
        else
        {
          v420 = "Io";
          if ( !v415 )
            v420 = "Memory";
          WPP_SF_is(WPP_GLOBAL_Control->AttachedDevice, 27, v419, v413, (__int64)v420);
          SystemAddress = -1056964607;
        }
        goto LABEL_1446;
      case 0x7Au:
        SystemAddress = 0;
        v424 = 0;
        v499 = 0;
        if ( GetDriverProxyFeatures )
        {
          GetDriverProxyFeatures(v531, &v499);
          v424 = v499;
        }
        if ( (v424 & 1) == 0 )
          SystemAddress = -1056964606;
        goto LABEL_1446;
      case 0x7Bu:
        if ( CreateDriverProxyExt )
          LODWORD(v10) = CreateDriverProxyExt(v531, 0LL, v533);
        goto LABEL_1289;
      case 0x7Cu:
        if ( RegisterDrvrPxyEndpoints )
          LODWORD(v10) = ((__int64 (__fastcall *)(_QWORD *, __int16 *, _QWORD, _QWORD, _QWORD))RegisterDrvrPxyEndpoints)(
                           v531,
                           v533,
                           (unsigned int)v535,
                           0LL,
                           0LL);
LABEL_1289:
        SystemAddress = RaidNtStatusToStorStatus(v10);
        goto LABEL_1446;
      case 0x7Du:
        v425 = (int)GetDrvrPxyWrapper;
        v426 = v535;
        if ( GetDrvrPxyWrapper )
        {
          DrvrPxyWrapper = GetDrvrPxyWrapper(v531, (unsigned int)v533);
          v425 = 0;
        }
        else
        {
          DrvrPxyWrapper = 0LL;
        }
        *(_QWORD *)&v426->Relationship = DrvrPxyWrapper;
        if ( !DrvrPxyWrapper )
          v425 = -1056964607;
        SystemAddress = v425;
        goto LABEL_1446;
      case 0x7Eu:
        v428 = v531;
        v429 = (unsigned int)v535;
        v43 = *((_BYTE *)v531 + 2) == 40;
        v430 = (unsigned int)v533;
        va_copy(v492, va3);
        v490 = (unsigned int)v535;
        QuadPart = v536;
        Timeout = (PLARGE_INTEGER)v538.QuadPart;
        v502 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)v539.QuadPart;
        if ( v43 )
          v431 = v531[12];
        else
          v431 = v531[6];
        if ( !v431 )
          goto LABEL_34;
        if ( *(_DWORD *)(v431 + 800) == -1 )
          goto LABEL_289;
        if ( !(_DWORD)v533 || !(_DWORD)v535 || !v536 && !v538.QuadPart && !v539.QuadPart )
          goto LABEL_34;
        if ( v5 )
        {
          if ( v6 )
          {
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
        }
        else
        {
          if ( v6 )
            goto LABEL_122;
          v5 = 0LL;
          v432 = *(_QWORD *)(v3 - 16);
          if ( !v432 )
            goto LABEL_34;
          v429 = *(_QWORD *)v432;
          if ( !*(_QWORD *)v432 )
            goto LABEL_34;
          v433 = *(_DWORD *)v429;
          if ( (*(_BYTE *)(v432 + 248) & 1) != 0 )
          {
            v43 = v433 == 1314275652;
LABEL_121:
            if ( !v43 )
              goto LABEL_34;
LABEL_122:
            SystemAddress = -1056964606;
            goto LABEL_1446;
          }
          if ( v433 != 1094997074 )
            goto LABEL_34;
          v5 = *(int **)v432;
        }
        v434 = *(_QWORD *)(v431 + 224);
        if ( !v434 )
        {
LABEL_130:
          SystemAddress = -1056964601;
          goto LABEL_1446;
        }
        if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline(v431, v429) )
          goto LABEL_1358;
        if ( *((_BYTE *)v428 + 2) != 40 )
        {
          v445 = *((_BYTE *)v428 + 10);
          v435 = v428 + 9;
          goto LABEL_1354;
        }
        v435 = 0LL;
        if ( !*((_DWORD *)v428 + 5) )
        {
          v436 = *((_DWORD *)v428 + 14);
          for ( i = 0; i < v436; ++i )
          {
            v438 = *((unsigned int *)v428 + i + 30);
            if ( (unsigned int)v438 < 0x80 )
              continue;
            v439 = *((unsigned int *)v428 + 4);
            if ( (unsigned int)v438 >= (unsigned int)v439 )
              continue;
            v440 = (char *)v428 + v438;
            v441 = (unsigned int)v438;
            v442 = *(_DWORD *)((char *)v428 + v438) - 64;
            if ( v442 )
            {
              v443 = v442 - 1;
              if ( v443 )
              {
                if ( v443 == 1 && v441 + 40 <= v439 )
                {
                  if ( *((_DWORD *)v440 + 3) )
                    v435 = v440 + 32;
                  break;
                }
                continue;
              }
              v444 = v441 + 56;
            }
            else
            {
              v444 = v441 + 40;
            }
            if ( v444 <= v439 )
            {
              if ( v440[10] )
                v435 = v440 + 24;
              break;
            }
          }
        }
        v445 = 0;
        if ( *((_DWORD *)v428 + 5) || (v446 = *((_DWORD *)v428 + 14), v447 = 0, !v446) )
        {
LABEL_1354:
          LbaFromCdb = PortSrbGetLbaFromCdb(v435, v445);
          if ( !LbaFromCdb )
            goto LABEL_34;
          v456 = *(unsigned int *)(v434 + 932);
          v512[1] = (v430 * (unsigned __int128)*(unsigned int *)(v434 + 932)) >> 64;
          if ( !is_mul_ok(v430, v456) )
            goto LABEL_34;
          v457 = LbaFromCdb + v430 * v456;
          if ( v457 < LbaFromCdb || v457 > *(_QWORD *)(v434 + 3464) )
            goto LABEL_34;
LABEL_1358:
          SystemAddress = RaidNvmeIceIoStart(v428, 0LL, (unsigned int)v430, v490, QuadPart, Timeout, v502);
          goto LABEL_1446;
        }
        break;
      case 0x7Fu:
        if ( !v531 )
          goto LABEL_34;
        v458 = *((unsigned __int8 *)v531 + 2);
        v459 = (_BYTE)v458 == 40 ? v531[12] : v531[6];
        if ( !v459 )
          goto LABEL_34;
        if ( *(_DWORD *)(v459 + 800) == -1 )
          goto LABEL_289;
        v460 = (_BYTE)v458 == 40 ? v531[12] : v531[6];
        if ( *(_DWORD *)(v460 + 800) == -1 )
          goto LABEL_289;
        if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline(v458, v6) )
        {
          v461 = *(_QWORD *)(*(_QWORD *)(v460 + 224) + 3600LL);
          v464 = *(_QWORD *)(v461 + 48);
          v465 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v464 + 64);
          if ( !v465 )
            goto LABEL_289;
          SystemAddress = v465(*(_QWORD *)(v464 + 8), *(_QWORD *)(v460 + 848));
          *(_QWORD *)(v460 + 848) = 0LL;
        }
        else
        {
          v461 = *(_QWORD *)(*(_QWORD *)(v460 + 216) + 6192LL);
          v462 = *(_QWORD *)(v461 + 40);
          v463 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v462 + 64);
          if ( !v463 )
            goto LABEL_289;
          SystemAddress = v463(*(_QWORD *)(v462 + 8), *(_QWORD *)(v460 + 848));
        }
        if ( SystemAddress )
        {
          StorEtwNVMeICEInterfaceEvent(
            *(_QWORD *)(v460 + 216),
            v461,
            SystemAddress,
            (unsigned int)L"NVMe ICE IOComplete failed.",
            2);
          KeBugCheckEx(0x176u, 2uLL, 3uLL, v460, SystemAddress);
        }
        goto LABEL_1446;
      case 0x80u:
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_34;
        }
        else if ( !v6 )
        {
          v5 = 0LL;
          v474 = *(_QWORD *)(v3 - 16);
          if ( !v474 )
            goto LABEL_34;
          v6 = *(int **)v474;
          if ( !*(_QWORD *)v474 )
            goto LABEL_34;
          v475 = *v6;
          if ( (*(_BYTE *)(v474 + 248) & 1) == 0 )
          {
            if ( v475 != 1094997074 )
              goto LABEL_34;
            v5 = *(int **)v474;
            SystemAddress = -1056964602;
            goto LABEL_1446;
          }
          if ( v475 != 1314275652 )
            goto LABEL_34;
        }
        v526[0] = v543;
        v525[0] = v545;
        v526[1] = v546;
        v525[1] = v547;
        v526[2] = v548;
        v525[2] = v549;
        v526[3] = v550;
        v525[3] = v551;
        v526[4] = v552;
        v525[4] = v553;
        v526[5] = v554;
        v525[5] = v555;
        v526[6] = v556;
        v525[6] = v557;
        v526[7] = v558;
        v525[7] = v559;
        v476 = StorEtwNvmeMiniportEvent(
                 (_DWORD)v6,
                 (_DWORD)v531,
                 (_DWORD)v533,
                 (_DWORD)v535,
                 (char)v536,
                 v538.QuadPart,
                 v539.QuadPart,
                 (_DWORD)v540,
                 (char)v542,
                 v489,
                 (__int64)v526,
                 (__int64)v525);
        SystemAddress = RaidNtStatusToStorStatus(v476);
        goto LABEL_1446;
      case 0x81u:
        if ( v5 )
        {
          if ( !v6 )
            SystemAddress = -1056964602;
          goto LABEL_1446;
        }
        if ( v6 )
          goto LABEL_1446;
        v5 = 0LL;
        v477 = *(int ***)(v3 - 16);
        if ( !v477 || !*v477 )
          goto LABEL_34;
        v478 = **v477;
        if ( ((_BYTE)v477[31] & 1) != 0 )
        {
          if ( v478 != 1314275652 )
            goto LABEL_34;
        }
        else
        {
          if ( v478 != 1094997074 )
            goto LABEL_34;
          v5 = *v477;
          SystemAddress = -1056964602;
        }
        goto LABEL_1446;
      case 0x84u:
        if ( v6 )
          goto LABEL_1421;
        v5 = 0LL;
        v479 = *(_QWORD *)(v3 - 16);
        if ( !v479 )
          goto LABEL_34;
        v6 = *(int **)v479;
        if ( !*(_QWORD *)v479 )
          goto LABEL_34;
        v480 = *v6;
        if ( (*(_BYTE *)(v479 + 248) & 1) == 0 )
          goto LABEL_1422;
        if ( v480 != 1314275652 )
          goto LABEL_34;
LABEL_1421:
        SystemAddress = NvmeAdapterStorMQAddController(v6, (unsigned int)v531, v533);
        goto LABEL_1446;
      case 0x85u:
        va_copy(v492, va1);
        if ( v6 )
          goto LABEL_1430;
        v481 = *(_QWORD *)(v3 - 16);
        v5 = 0LL;
        if ( !v481 )
          goto LABEL_34;
        v6 = *(int **)v481;
        if ( !*(_QWORD *)v481 )
          goto LABEL_34;
        v480 = *v6;
        if ( (*(_BYTE *)(v481 + 248) & 1) != 0 )
        {
          if ( v480 != 1314275652 )
            goto LABEL_34;
LABEL_1430:
          memset(&v515, 0, sizeof(v515));
          if ( v531 )
          {
            if ( v6[21] != 1 || (v482 = *(v531 - 8), *(_DWORD *)(v482 + 976) == 4) || *(_DWORD *)(v482 + 976) == 3 )
            {
              SystemAddress = RaidNtStatusToStorStatus(-1073741661);
            }
            else if ( ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v482 + 552)) )
            {
              *(_DWORD *)(v482 + 976) = 3;
              _InterlockedOr(v484, 0);
              _interlockedbittestandset((volatile signed __int32 *)(v482 + 948), 1u);
              NvmeControllerWaitForOutstandingIoComplete(v482, 1LL);
              NvmeControllerStorMQQuiesceCompletionDPCs(v482);
              NvmeControllerCompleteAllRequests(v482, 0LL, 3221225486LL);
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v482 + 632), &v515);
              for ( j = *(_QWORD **)(v482 + 640); j != (_QWORD *)(v482 + 640); j = (_QWORD *)*j )
                j[11] &= ~2uLL;
              KeReleaseInStackQueuedSpinLock(&v515);
              IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)v6 + 4), BusRelations);
              IoQueueWorkItemEx(
                *(PIO_WORKITEM *)(v482 + 176),
                NvmeAdapterStorMQControllerRemoveWorker,
                DelayedWorkQueue,
                (PVOID)v482);
              SystemAddress = RaidNtStatusToStorStatus(0);
            }
            else
            {
LABEL_1229:
              SystemAddress = RaidNtStatusToStorStatus(-1073741738);
            }
          }
          else
          {
LABEL_1127:
            SystemAddress = RaidNtStatusToStorStatus(-1073741811);
          }
        }
        else
        {
LABEL_1422:
          SystemAddress = -1056964602;
          if ( v480 == 1094997074 )
            v5 = v6;
        }
        goto LABEL_1446;
      case 0x86u:
        if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline(
                              3221225474LL,
                              v6) )
          goto LABEL_1441;
        SystemAddress = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RaidNvmeIceIoStart)(
                          v531,
                          v533,
                          (unsigned int)v535,
                          (unsigned int)v536,
                          (PHYSICAL_ADDRESS)v538.QuadPart,
                          (PHYSICAL_ADDRESS)v539.QuadPart,
                          v540);
        goto LABEL_1446;
      case 0x87u:
        if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline(3221225474LL, v6) )
        {
          v500 = 0;
          v466 = v535;
          va_copy(v492, va2);
          if ( (unsigned int)v531 >= 0x1000000 || (unsigned int)v533 >= 0x100 )
            goto LABEL_34;
          v500 = ((unsigned __int8)v533 >> 5) | (8 * ((32 * (_DWORD)v531) | (unsigned __int8)v533 & 0x1F));
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock(&NvmeIceListSpinLock, &LockHandle);
          v467 = (PVOID *)NvmeIceList;
          if ( NvmeIceList != &NvmeIceList )
          {
            do
            {
              v468 = v467[6];
              v469 = v467;
              if ( v468 && v468[15] )
              {
                v470 = (volatile signed __int32 *)(v467 + 2);
                _InterlockedIncrement((volatile signed __int32 *)v467 + 4);
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                v471 = (*((__int64 (__fastcall **)(_QWORD, int *))v467[6] + 15))(*((_QWORD *)v467[6] + 1), &v500);
                KeAcquireInStackQueuedSpinLock(&NvmeIceListSpinLock, &LockHandle);
                v467 = (PVOID *)*v467;
                if ( _InterlockedExchangeAdd(v470, 0xFFFFFFFF) == 1 )
                {
                  v472 = (PVOID *)*v469;
                  if ( *((PVOID **)*v469 + 1) != v469 || (v473 = (PVOID **)v469[1], *v473 != v469) )
                    __fastfail(3u);
                  *v473 = v472;
                  v472[1] = v473;
                  FreeNvmeIceEntry(v469);
                }
                else if ( !v471 )
                {
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                  *(_QWORD *)&v466->Relationship = v469;
                  SystemAddress = 0;
                  goto LABEL_1446;
                }
              }
              else
              {
                v467 = (PVOID *)*v467;
              }
            }
            while ( v467 != &NvmeIceList );
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          *(_QWORD *)&v466->Relationship = 0LL;
          SystemAddress = 0;
        }
        else
        {
LABEL_1441:
          v14 = a1;
LABEL_1442:
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 83LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids, v14);
          }
        }
        goto LABEL_1446;
      case 0x88u:
        v501 = (int)v536;
        SystemAddress = StorpQueueWorkItemInternal(v3, v531, v533, v535, &v501);
        goto LABEL_1446;
      default:
        goto LABEL_1442;
    }
    while ( 1 )
    {
      v448 = *((unsigned int *)v428 + v447 + 30);
      if ( (unsigned int)v448 < 0x80 )
        goto LABEL_1350;
      v449 = *((unsigned int *)v428 + 4);
      if ( (unsigned int)v448 >= (unsigned int)v449 )
        goto LABEL_1350;
      v450 = (char *)v428 + v448;
      v451 = (unsigned int)v448;
      v452 = *(_DWORD *)((char *)v428 + v448) - 64;
      if ( v452 )
      {
        v453 = v452 - 1;
        if ( v453 )
        {
          if ( v453 == 1 && v451 + 40 <= v449 )
            goto LABEL_1354;
          goto LABEL_1350;
        }
        v454 = v451 + 56;
      }
      else
      {
        v454 = v451 + 40;
      }
      if ( v454 <= v449 )
      {
        v445 = v450[10];
        goto LABEL_1354;
      }
LABEL_1350:
      if ( ++v447 >= v446 )
        goto LABEL_1354;
    }
  }
  if ( !v3 || (v11 = *(int ***)(v3 - 16)) == 0LL || !*v11 )
  {
LABEL_16:
    if ( StorpControl && v5 )
    {
      va_copy(v492, va);
      if ( !DisableExtensionDriver )
      {
        if ( EnableExtensionCalls )
        {
          _InterlockedIncrement(&ExtRefCount);
          ((void (__fastcall *)(int *, _QWORD, int *))ExtExtendedFuncPre)(&dword_1401701E8, a1, v5);
          v10 = 3221225474LL;
          _InterlockedDecrement(&ExtRefCount);
        }
        v3 = a2;
      }
      v492 = 0LL;
    }
    goto LABEL_23;
  }
  v12 = **v11;
  if ( ((_BYTE)v11[31] & 1) != 0 )
  {
    if ( v12 == 1314275652 )
      v6 = *v11;
    goto LABEL_16;
  }
  if ( v12 != 1094997074 )
    goto LABEL_16;
  v5 = *v11;
  va_copy(v492, va);
  v17 = -1073741822;
  if ( !DisableExtensionDriver )
  {
    if ( EnableExtensionCalls )
    {
      _InterlockedIncrement(&ExtRefCount);
      v17 = ((__int64 (__fastcall *)(int *, _QWORD, int *))ExtExtendedFuncReplace)(&dword_1401701E8, a1, v5);
      v10 = 3221225474LL;
      _InterlockedDecrement(&ExtRefCount);
    }
    v3 = a2;
  }
  v492 = 0LL;
  if ( v17 == -1073741822 )
    goto LABEL_16;
  return (unsigned int)RaidNtStatusToStorStatus(v17);
}
