/*
 * XREFs of NvmeCompletionDpcRoutine @ 0x14011A4A0
 * Callers:
 *     NvmeStorMQCompletionDpcRoutine @ 0x1400719D0 (NvmeStorMQCompletionDpcRoutine.c)
 *     NvmeControllerIoPollingTimerCallback @ 0x1400F10F0 (NvmeControllerIoPollingTimerCallback.c)
 *     NvmeIoPollingDpcRoutine @ 0x14011C900 (NvmeIoPollingDpcRoutine.c)
 *     NvmeInvokeCompletionDpcRoutineAtDispatchLevel @ 0x14012ACC8 (NvmeInvokeCompletionDpcRoutineAtDispatchLevel.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorpTelemetryCollectNvmeErrorData @ 0x1400B27E4 (StorpTelemetryCollectNvmeErrorData.c)
 *     StorpTelemetryCollectNvmePerfData @ 0x1400B2A40 (StorpTelemetryCollectNvmePerfData.c)
 *     StorpTelemetryCollectNvmePerfData2 @ 0x1400B2FA0 (StorpTelemetryCollectNvmePerfData2.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x140120370 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeControllerProcessPendingCommand @ 0x1401297E0 (NvmeControllerProcessPendingCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void __fastcall NvmeCompletionDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        volatile signed __int32 *SystemArgument1,
        char *SystemArgument2)
{
  unsigned __int8 *v4; // rsi
  char *v5; // r14
  volatile signed __int32 *v6; // rdi
  PVOID v7; // rbx
  char v8; // al
  unsigned int *v9; // r13
  ULONG CurrentProcessorNumber; // eax
  __int16 v11; // cx
  __int16 v12; // dx
  __int64 v13; // r11
  __int64 v14; // r12
  __int16 v15; // r15
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  unsigned int v24; // eax
  signed __int32 v25; // eax
  _DWORD *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  PIRP v29; // r15
  int GenericIrpExtension; // eax
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  __int64 v41; // rax
  _WORD *v42; // r8
  const wchar_t *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  const wchar_t *v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  const wchar_t *v49; // rdx
  const wchar_t *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int16 v54; // r8
  int *v55; // r13
  unsigned int v56; // edx
  unsigned int v57; // ecx
  __int64 v58; // rdx
  unsigned int v59; // r8d
  __int64 v60; // rcx
  unsigned int v61; // edx
  _DWORD *v62; // r8
  __int64 v63; // rdi
  _QWORD *v64; // rcx
  __int128 v65; // xmm1
  int v66; // ecx
  unsigned int v67; // eax
  int v68; // edx
  int v69; // r12d
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 (__fastcall *v72)(_QWORD *); // r15
  __int64 v73; // r14
  __int64 (__fastcall *v74)(__int64, __int64); // r12
  _QWORD **v75; // rsi
  _QWORD *v76; // rdi
  __int64 v77; // rax
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rdi
  unsigned __int16 v81; // si
  bool v82; // zf
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 (__fastcall *v85)(_QWORD *); // r15
  __int64 v86; // r14
  __int64 (__fastcall *v87)(__int64, __int64); // r12
  _QWORD **v88; // rsi
  _QWORD *v89; // rdi
  __int64 v90; // rax
  int v91; // eax
  __int64 v92; // r14
  unsigned __int16 v93; // r13
  _QWORD *v94; // r13
  _LARGE_INTEGER ByteOffset; // r14
  __int64 v96; // rbx
  char v97; // si
  __int64 v98; // rdi
  KIRQL v99; // r15
  __int64 v100; // rcx
  __int64 v101; // rax
  PIRP v102; // rbx
  PIRP v103; // rdi
  unsigned __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rax
  __int64 v107; // rbx
  unsigned int v108; // edx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG64 v110; // rax
  bool v111; // sf
  __int64 v112; // rax
  __int64 v113; // r14
  __int64 v114; // rdx
  IO_PRIORITY_HINT IoPriorityHint; // eax
  __int64 v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rbx
  __int64 v119; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v120; // rcx
  __int64 v121; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v122; // rcx
  __int64 v123; // rcx
  int v124; // ecx
  unsigned __int64 v125; // rdx
  __int64 v126; // rcx
  unsigned int *Information; // rax
  __int64 v128; // rcx
  const EVENT_DESCRIPTOR *v129; // rdx
  __int64 v130; // r11
  char v131; // r14
  unsigned __int8 v132; // di
  char v133; // r15
  char v134; // r13
  char v135; // r12
  _BYTE *v136; // r10
  unsigned int v137; // ebx
  __int64 v138; // r9
  __int64 v139; // rcx
  unsigned __int64 v140; // r8
  int v141; // ecx
  int v142; // ecx
  unsigned __int64 v143; // rcx
  unsigned __int64 v144; // rcx
  _BYTE *v145; // rax
  unsigned int v146; // eax
  char v147; // al
  PIRP v148; // rdi
  __int64 v149; // rbx
  unsigned int v150; // eax
  __int64 v151; // rax
  __int64 v152; // rcx
  union _SLIST_HEADER *v153; // rbx
  unsigned __int16 v154; // r15
  __int64 v155; // rdx
  unsigned __int16 *v156; // r9
  unsigned __int64 v157; // rax
  __int64 v158; // rax
  unsigned __int64 v159; // rcx
  __int64 v160; // rdx
  unsigned __int16 v161; // r9
  signed __int32 v162; // ecx
  IRP *v163; // r12
  PIRP v164; // r13
  _LARGE_INTEGER v165; // rsi
  unsigned __int16 v166; // bx
  __int64 v167; // r14
  __int64 v168; // r12
  char v169; // di
  __int64 v170; // rbx
  KIRQL v171; // r13
  __int64 v172; // rcx
  __int64 v173; // rax
  int v174; // r15d
  unsigned __int64 v175; // rax
  _IO_STACK_LOCATION *v176; // r8
  __int64 v177; // rdi
  _LARGE_INTEGER *QuadPart; // rcx
  __int64 v179; // r14
  _LARGE_INTEGER v180; // rbx
  PIRP v181; // r13
  unsigned __int16 v182; // bx
  _LIST_ENTRY *Blink; // rax
  __int64 v184; // rbx
  _LIST_ENTRY *v185; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v186; // rcx
  _LIST_ENTRY *v187; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v188; // rcx
  __int64 v189; // rcx
  char v190; // al
  __int16 v191; // r15
  void *v192; // rax
  __int64 v193; // r10
  volatile signed __int32 *v194; // rax
  __int64 v195; // r8
  __int64 v196; // r9
  unsigned int v197; // eax
  unsigned int v198; // ecx
  __int64 v199; // rax
  _WORD *v200; // rdx
  const wchar_t *v201; // rcx
  __int16 v202; // ax
  __int64 v203; // rax
  int v204; // eax
  const wchar_t *v205; // rcx
  __int64 v206; // rax
  int v207; // eax
  const wchar_t *v208; // rdx
  const wchar_t *v209; // rcx
  __int64 v210; // rax
  __int64 v211; // rax
  unsigned int v212; // eax
  __int64 v213; // rax
  __int64 v214; // rcx
  signed __int32 v215[8]; // [rsp+0h] [rbp-100h] BYREF
  LPCGUID ActivityId; // [rsp+20h] [rbp-E0h]
  LPCGUID RelatedActivityId; // [rsp+28h] [rbp-D8h]
  __int64 UserDataCount; // [rsp+30h] [rbp-D0h]
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-C8h]
  __int64 v220; // [rsp+40h] [rbp-C0h]
  __int64 v221; // [rsp+48h] [rbp-B8h]
  PIRP v222; // [rsp+50h] [rbp-B0h]
  int v223; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v224; // [rsp+64h] [rbp-9Ch]
  int v225; // [rsp+68h] [rbp-98h]
  PIRP Irp; // [rsp+70h] [rbp-90h]
  __int16 v227; // [rsp+78h] [rbp-88h]
  char v228; // [rsp+7Ah] [rbp-86h]
  __int64 v229; // [rsp+80h] [rbp-80h]
  PVOID Context; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v231; // [rsp+90h] [rbp-70h]
  char v232; // [rsp+98h] [rbp-68h]
  int v233; // [rsp+9Ch] [rbp-64h]
  unsigned int v234; // [rsp+A0h] [rbp-60h] BYREF
  int v235; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v236; // [rsp+A8h] [rbp-58h]
  signed __int32 v237; // [rsp+ACh] [rbp-54h]
  unsigned int *v238; // [rsp+B0h] [rbp-50h]
  volatile signed __int32 *v239; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v240; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 *v241; // [rsp+C8h] [rbp-38h]
  PVOID v242; // [rsp+D0h] [rbp-30h]
  __int128 v243; // [rsp+D8h] [rbp-28h]
  __int128 v244; // [rsp+E8h] [rbp-18h]
  __int64 v245; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v246; // [rsp+100h] [rbp+0h] BYREF
  __int64 v247; // [rsp+108h] [rbp+8h] BYREF
  __int64 v248; // [rsp+110h] [rbp+10h] BYREF
  __int64 v249; // [rsp+118h] [rbp+18h] BYREF
  PIRP v250; // [rsp+120h] [rbp+20h] BYREF
  __int64 v251; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+130h] [rbp+30h] BYREF
  IRP *v253; // [rsp+138h] [rbp+38h]
  __int64 v254; // [rsp+140h] [rbp+40h] BYREF
  __int64 v255; // [rsp+148h] [rbp+48h] BYREF
  __int64 v256; // [rsp+150h] [rbp+50h] BYREF
  __int64 v257; // [rsp+158h] [rbp+58h] BYREF
  __int64 v258; // [rsp+160h] [rbp+60h] BYREF
  __int64 v259; // [rsp+168h] [rbp+68h] BYREF
  __int16 v260; // [rsp+170h] [rbp+70h]
  __int16 v261; // [rsp+172h] [rbp+72h]
  int v262; // [rsp+174h] [rbp+74h]
  const wchar_t *v263; // [rsp+178h] [rbp+78h]
  __int16 v264; // [rsp+180h] [rbp+80h]
  __int16 v265; // [rsp+182h] [rbp+82h]
  int v266; // [rsp+184h] [rbp+84h]
  const wchar_t *v267; // [rsp+188h] [rbp+88h]
  __int64 v268; // [rsp+190h] [rbp+90h] BYREF
  GUID v269; // [rsp+198h] [rbp+98h] BYREF
  __int128 v270; // [rsp+1A8h] [rbp+A8h] BYREF
  __int128 v271; // [rsp+1B8h] [rbp+B8h]
  EVENT_DESCRIPTOR v272; // [rsp+1C8h] [rbp+C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+1D8h] [rbp+D8h] BYREF
  GUID v274; // [rsp+1E8h] [rbp+E8h] BYREF
  GUID v275; // [rsp+1F8h] [rbp+F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v276; // [rsp+210h] [rbp+110h] BYREF
  __int64 v277; // [rsp+220h] [rbp+120h]
  __int64 v278; // [rsp+228h] [rbp+128h]
  const wchar_t *v279; // [rsp+230h] [rbp+130h]
  int v280; // [rsp+238h] [rbp+138h]
  int v281; // [rsp+23Ch] [rbp+13Ch]
  const wchar_t *v282; // [rsp+240h] [rbp+140h]
  int v283; // [rsp+248h] [rbp+148h]
  int v284; // [rsp+24Ch] [rbp+14Ch]
  _DWORD *v285; // [rsp+250h] [rbp+150h]
  __int64 v286; // [rsp+258h] [rbp+158h]
  _DWORD *v287; // [rsp+260h] [rbp+160h]
  __int64 v288; // [rsp+268h] [rbp+168h]
  const wchar_t *v289; // [rsp+270h] [rbp+170h]
  int v290; // [rsp+278h] [rbp+178h]
  int v291; // [rsp+27Ch] [rbp+17Ch]
  _DWORD *v292; // [rsp+280h] [rbp+180h]
  int v293; // [rsp+288h] [rbp+188h]
  int v294; // [rsp+28Ch] [rbp+18Ch]
  char *v295; // [rsp+290h] [rbp+190h]
  int v296; // [rsp+298h] [rbp+198h]
  int v297; // [rsp+29Ch] [rbp+19Ch]
  const wchar_t *v298; // [rsp+2A0h] [rbp+1A0h]
  __int64 v299; // [rsp+2A8h] [rbp+1A8h]
  const wchar_t *v300; // [rsp+2B0h] [rbp+1B0h]
  __int64 v301; // [rsp+2B8h] [rbp+1B8h]
  __int64 *v302; // [rsp+2C0h] [rbp+1C0h]
  __int64 v303; // [rsp+2C8h] [rbp+1C8h]
  const wchar_t *v304; // [rsp+2D0h] [rbp+1D0h]
  __int64 v305; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v306; // [rsp+2E0h] [rbp+1E0h]
  __int64 v307; // [rsp+2E8h] [rbp+1E8h]
  const wchar_t *v308; // [rsp+2F0h] [rbp+1F0h]
  __int64 v309; // [rsp+2F8h] [rbp+1F8h]
  __int64 *v310; // [rsp+300h] [rbp+200h]
  __int64 v311; // [rsp+308h] [rbp+208h]
  const wchar_t *v312; // [rsp+310h] [rbp+210h]
  __int64 v313; // [rsp+318h] [rbp+218h]
  __int64 *v314; // [rsp+320h] [rbp+220h]
  __int64 v315; // [rsp+328h] [rbp+228h]
  const wchar_t *v316; // [rsp+330h] [rbp+230h]
  __int64 v317; // [rsp+338h] [rbp+238h]
  __int64 *v318; // [rsp+340h] [rbp+240h]
  __int64 v319; // [rsp+348h] [rbp+248h]
  const wchar_t *v320; // [rsp+350h] [rbp+250h]
  __int64 v321; // [rsp+358h] [rbp+258h]
  __int64 *v322; // [rsp+360h] [rbp+260h]
  __int64 v323; // [rsp+368h] [rbp+268h]
  const wchar_t *v324; // [rsp+370h] [rbp+270h]
  __int64 v325; // [rsp+378h] [rbp+278h]
  PIRP *v326; // [rsp+380h] [rbp+280h]
  __int64 v327; // [rsp+388h] [rbp+288h]
  const wchar_t *v328; // [rsp+390h] [rbp+290h]
  __int64 v329; // [rsp+398h] [rbp+298h]
  __int64 *v330; // [rsp+3A0h] [rbp+2A0h]
  __int64 v331; // [rsp+3A8h] [rbp+2A8h]
  struct _EVENT_DATA_DESCRIPTOR v332; // [rsp+400h] [rbp+300h] BYREF
  __int64 v333; // [rsp+410h] [rbp+310h]
  __int64 v334; // [rsp+418h] [rbp+318h]
  const wchar_t *v335; // [rsp+420h] [rbp+320h]
  int v336; // [rsp+428h] [rbp+328h]
  int v337; // [rsp+42Ch] [rbp+32Ch]
  const wchar_t *v338; // [rsp+430h] [rbp+330h]
  int v339; // [rsp+438h] [rbp+338h]
  int v340; // [rsp+43Ch] [rbp+33Ch]
  char *v341; // [rsp+440h] [rbp+340h]
  __int64 v342; // [rsp+448h] [rbp+348h]
  char *v343; // [rsp+450h] [rbp+350h]
  __int64 v344; // [rsp+458h] [rbp+358h]
  const wchar_t *v345; // [rsp+460h] [rbp+360h]
  int v346; // [rsp+468h] [rbp+368h]
  int v347; // [rsp+46Ch] [rbp+36Ch]
  char *v348; // [rsp+470h] [rbp+370h]
  int v349; // [rsp+478h] [rbp+378h]
  int v350; // [rsp+47Ch] [rbp+37Ch]
  char *v351; // [rsp+480h] [rbp+380h]
  int v352; // [rsp+488h] [rbp+388h]
  int v353; // [rsp+48Ch] [rbp+38Ch]
  const wchar_t *v354; // [rsp+490h] [rbp+390h]
  __int64 v355; // [rsp+498h] [rbp+398h]
  const wchar_t *v356; // [rsp+4A0h] [rbp+3A0h]
  __int64 v357; // [rsp+4A8h] [rbp+3A8h]
  volatile signed __int32 **v358; // [rsp+4B0h] [rbp+3B0h]
  __int64 v359; // [rsp+4B8h] [rbp+3B8h]
  const wchar_t *v360; // [rsp+4C0h] [rbp+3C0h]
  __int64 v361; // [rsp+4C8h] [rbp+3C8h]
  PVOID *p_Context; // [rsp+4D0h] [rbp+3D0h]
  __int64 v363; // [rsp+4D8h] [rbp+3D8h]
  const wchar_t *v364; // [rsp+4E0h] [rbp+3E0h]
  __int64 v365; // [rsp+4E8h] [rbp+3E8h]
  __int64 *v366; // [rsp+4F0h] [rbp+3F0h]
  __int64 v367; // [rsp+4F8h] [rbp+3F8h]
  const wchar_t *v368; // [rsp+500h] [rbp+400h]
  __int64 v369; // [rsp+508h] [rbp+408h]
  __int64 *v370; // [rsp+510h] [rbp+410h]
  __int64 v371; // [rsp+518h] [rbp+418h]
  const wchar_t *v372; // [rsp+520h] [rbp+420h]
  __int64 v373; // [rsp+528h] [rbp+428h]
  __int64 *v374; // [rsp+530h] [rbp+430h]
  __int64 v375; // [rsp+538h] [rbp+438h]
  const wchar_t *v376; // [rsp+540h] [rbp+440h]
  __int64 v377; // [rsp+548h] [rbp+448h]
  __int64 *v378; // [rsp+550h] [rbp+450h]
  __int64 v379; // [rsp+558h] [rbp+458h]
  const wchar_t *v380; // [rsp+560h] [rbp+460h]
  __int64 v381; // [rsp+568h] [rbp+468h]
  __int64 *v382; // [rsp+570h] [rbp+470h]
  __int64 v383; // [rsp+578h] [rbp+478h]
  const wchar_t *v384; // [rsp+580h] [rbp+480h]
  __int64 v385; // [rsp+588h] [rbp+488h]
  __int64 *v386; // [rsp+590h] [rbp+490h]
  __int64 v387; // [rsp+598h] [rbp+498h]

  v4 = 0LL;
  Context = SystemArgument2;
  v239 = SystemArgument1;
  v5 = SystemArgument2;
  v234 = 0;
  v6 = SystemArgument1;
  v227 = 0;
  LOBYTE(v7) = 0;
  v237 = 0;
  v240 = 0LL;
  v231 = 0LL;
  if ( !SystemArgument2 || !SystemArgument1 )
    return;
  while ( _InterlockedCompareExchange(SystemArgument1 + 10, 1, 0) )
    ;
  if ( _InterlockedCompareExchange(SystemArgument1 + 11, 1, 0) )
  {
    _InterlockedExchange(SystemArgument1 + 10, 0);
    goto LABEL_301;
  }
  _InterlockedOr(v215, 0);
  _InterlockedExchange(SystemArgument1 + 10, 0);
  _InterlockedOr(v215, 0);
  if ( **((_QWORD **)SystemArgument2 + 161) == 1LL )
    goto LABEL_299;
  v7 = DeferredContext;
  v8 = SystemArgument2[1728];
  v9 = (unsigned int *)(*(_QWORD *)SystemArgument1 + 16LL * *((unsigned __int16 *)SystemArgument1 + 17));
  v238 = v9;
  v228 = v8;
  if ( !DeferredContext )
    v7 = 0LL;
  v242 = v7;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v11 = *((_WORD *)v6 + 18);
  v12 = *((_WORD *)v9 + 7) & 1;
  v236 = CurrentProcessorNumber;
  if ( v12 == v11 )
    goto LABEL_299;
  v13 = -1LL;
  while ( 1 )
  {
    v14 = *((unsigned __int16 *)v9 + 5);
    v15 = *((_WORD *)v9 + 4);
    v16 = *((unsigned __int16 *)v9 + 6);
    v17 = *((unsigned __int16 *)v9 + 7);
    v224 = *((_WORD *)v9 + 6);
    v18 = (_WORD)v14 ? 192 * v14 + *((_QWORD *)v5 + 91) - 192LL : *((_QWORD *)v5 + 89);
    v19 = *(unsigned int *)(v18 + 124);
    v229 = v18;
    v233 = v19 - 1;
    if ( (unsigned int)v16 >= (int)v19 - 1 )
      break;
    v20 = v16 << 7;
    *(_BYTE *)(*(_QWORD *)(v18 + 32) + (v16 << 7) + 60) &= ~1u;
    if ( (*(_BYTE *)(*(_QWORD *)(v18 + 32) + (v16 << 7) + 60) & 8) != 0
      || (*(_BYTE *)(*(_QWORD *)(v18 + 32) + v20 + 60) & 2) != 0 )
    {
      Irp = 0LL;
    }
    else
    {
      Irp = *(PIRP *)(*(_QWORD *)(v18 + 32) + v20 + 24);
    }
    v21 = *(_QWORD *)(v18 + 32);
    v22 = *(_QWORD *)(v21 + v20 + 16);
    if ( v22 )
    {
      *(_QWORD *)(v21 + v20 + 16) = 0LL;
      v23 = *(unsigned __int16 *)(*(_QWORD *)(v18 + 32) + v20 + 52);
      v24 = *(_DWORD *)(v22 + 32);
      if ( v24 )
      {
        memset_0(*(void **)(v22 + 16), 0, 8LL * v24);
        *(_DWORD *)(v22 + 32) = 0;
      }
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*((_QWORD *)Context + 110) + 8 * v23), (PSLIST_ENTRY)v22);
      v18 = v229;
      v4 = 0LL;
    }
    *(_WORD *)(v18 + 140) = v15;
    if ( (((unsigned int)v17 >> 9) & 7) != 0 )
    {
      if ( (((unsigned int)v17 >> 9) & 7) == 1 )
      {
        switch ( (unsigned __int8)((unsigned int)v17 >> 1) )
        {
          case 0u:
          case 1u:
          case 2u:
          case 3u:
          case 5u:
          case 6u:
          case 7u:
          case 8u:
          case 9u:
          case 0xAu:
          case 0xCu:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x1Cu:
          case 0x1Fu:
          case 0x20u:
          case 0x21u:
          case 0x22u:
          case 0x80u:
          case 0x81u:
          case 0x83u:
            goto LABEL_30;
          case 0xBu:
          case 0x10u:
          case 0x11u:
            v223 = -2147483210;
            break;
          case 0x12u:
          case 0x13u:
          case 0x16u:
          case 0x18u:
          case 0x19u:
          case 0x1Au:
            goto LABEL_36;
          case 0x14u:
            v223 = -1073741800;
            break;
          case 0x1Bu:
            v223 = -1073741637;
            break;
          case 0x1Eu:
          case 0x82u:
            goto LABEL_28;
          default:
            goto LABEL_41;
        }
      }
      else
      {
        if ( (((unsigned int)v17 >> 9) & 7) == 2 && (unsigned __int8)((unsigned int)v17 >> 1) == 134 )
          JUMPOUT(0x14011A726LL);
LABEL_41:
        v223 = -1073741435;
      }
    }
    else
    {
      switch ( (unsigned __int8)((unsigned int)v17 >> 1) )
      {
        case 0u:
          v223 = 0;
          break;
        case 1u:
        case 2u:
        case 0xBu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x16u:
        case 0x18u:
        case 0x1Eu:
        case 0x80u:
        case 0x81u:
        case 0x83u:
LABEL_30:
          v223 = -1073741808;
          break;
        case 5u:
        case 6u:
        case 0x14u:
LABEL_36:
          v223 = -1073741436;
          break;
        case 7u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0x1Bu:
          v223 = -1073741248;
          break;
        case 0xCu:
          v223 = -1073740758;
          break;
        case 0x15u:
LABEL_28:
          v223 = -1073741790;
          break;
        case 0x19u:
        case 0x1Au:
          v223 = -1073741643;
          break;
        case 0x82u:
          v223 = -1073741661;
          break;
        default:
          goto LABEL_41;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v18 + 32) + v20 + 61) & 1) != 0 )
    {
      v25 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*(_QWORD *)_InterlockedExchange64(
                                                       (volatile __int64 *)(*(_QWORD *)(v18 + 32) + v20 + 80),
                                                       0LL)
                                        + 4268LL),
              1,
              0);
      v26 = Context;
      if ( !v25 )
      {
        v16 = *((_QWORD *)Context + 16);
        v27 = *(_QWORD *)(v16 + 160);
        if ( *(_BYTE *)v27 == 1
          && _InterlockedExchangeAdd(
               *(volatile signed __int32 **)(*(_QWORD *)(v27 + 16)
                                           + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v18 + 32) + v20 + 52)),
               0xFFFFFFFF) == 1 )
        {
          PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v16 + 160) + 8LL), 0LL, 2LL);
          v18 = v229;
        }
      }
    }
    else
    {
      v26 = Context;
    }
    v28 = *(_QWORD *)(v18 + 32);
    if ( *(_QWORD *)(v28 + v20 + 32) )
    {
      (*(void (__fastcall **)(_DWORD *, _QWORD, unsigned int *))(v28 + v20 + 32))(v26, *(_QWORD *)(v28 + v20 + 40), v9);
      v18 = v229;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v18 + 32) + v20 + 60) & 0x20) != 0 && !_interlockedbittestandset(v26 + 268, 6u) )
    {
      IoQueueWorkItem(
        *((PIO_WORKITEM *)v26 + 130),
        (PIO_WORKITEM_ROUTINE)NvmeControllerRestartRoutine,
        DelayedWorkQueue,
        v26);
      v18 = v229;
    }
    v29 = Irp;
    if ( !Irp )
      goto LABEL_170;
    if ( v223 < 0 )
    {
      Irp->IoStatus.Information = 0LL;
      v235 = 0;
      GenericIrpExtension = IoGetGenericIrpExtension(v29, &v235, 4LL);
      if ( (int)(GenericIrpExtension + 0x80000000) < 0 || GenericIrpExtension == -1073741275 )
      {
        BYTE1(v235) |= 4u;
        HIWORD(v235) = v17;
        LOBYTE(v31) = 1;
        IoSetGenericIrpExtension(v29, &v235, 4LL, v31);
      }
      v32 = *((_QWORD *)v26 + 16);
      v251 = v17;
      v250 = v29;
      v33 = *(_QWORD *)(v229 + 24);
      v34 = *(_QWORD *)(v229 + 32);
      v249 = v14;
      v35 = v20 + v34;
      v274 = 0LL;
      v262 = 0;
      v36 = 2LL * *(unsigned __int16 *)(v35 + 56);
      EventDescriptor = (EVENT_DESCRIPTOR)EventNVMeControllerError;
      v248 = *(_QWORD *)(*(_QWORD *)(v33 + 8 * v36) + 56LL);
      v247 = *(_QWORD *)(*(_QWORD *)(v33 + 16LL * *(unsigned __int16 *)(v35 + 56)) + 48LL);
      v246 = *(_QWORD *)(*(_QWORD *)(v33 + 16LL * *(unsigned __int16 *)(v35 + 56)) + 40LL);
      v245 = *(unsigned int *)(*(_QWORD *)(v33 + 16LL * *(unsigned __int16 *)(v35 + 56)) + 4LL);
      v82 = (v26[34] & 2) == 0;
      v268 = **(unsigned int **)(v33 + 16LL * *(unsigned __int16 *)(v35 + 56));
      if ( !v82 )
        EventDescriptor.Keyword |= 0x8000uLL;
      v37 = *(_QWORD *)(v32 + 16);
      v38 = *(_QWORD *)(v37 + 48);
      if ( !v38 )
        goto LABEL_68;
      v39 = *(unsigned __int16 *)(v37 + 40);
      if ( !(_WORD)v39 )
        goto LABEL_68;
      v40 = v39 >> 1;
      if ( !(v39 >> 1) )
        goto LABEL_68;
      while ( 1 )
      {
        v41 = v40 - 1;
        v42 = (_WORD *)(v38 + 2 * v41);
        --v40;
        if ( *v42 == 92 )
          break;
        if ( !(_DWORD)v41 )
          goto LABEL_68;
      }
      v43 = v42 + 1;
      if ( !v42 )
LABEL_68:
        v43 = *(const wchar_t **)(v37 + 48);
      v263 = v43;
      v260 = *(_WORD *)(v37 + 40) + v38 - (_WORD)v43;
      v276.Ptr = v32 + 56;
      v261 = v260 + 2;
      *(_QWORD *)&v276.Size = 4LL;
      v277 = v32 + 1032;
      v278 = 16LL;
      if ( v43 )
      {
        v44 = -1LL;
        do
          v82 = v43[++v44] == 0;
        while ( !v82 );
        v45 = 2 * v44 + 2;
      }
      else
      {
        v45 = 10;
        v43 = L"NULL";
      }
      v279 = v43;
      v46 = (const wchar_t *)*((_QWORD *)v26 + 99);
      v280 = v45;
      v281 = 0;
      if ( v46 )
      {
        v47 = -1LL;
        do
          ++v47;
        while ( *((_BYTE *)v46 + v47) );
        v48 = v47 + 1;
        v49 = &word_140150F48;
      }
      else
      {
        v49 = &word_140150F48;
        v48 = 1;
        v46 = &word_140150F48;
      }
      v283 = v48;
      v282 = v46;
      v50 = (const wchar_t *)*((_QWORD *)v26 + 94);
      v285 = v26 + 1;
      v287 = v26 + 186;
      v284 = 0;
      v286 = 2LL;
      v288 = 1LL;
      if ( v50 )
        v49 = v50;
      else
        v50 = &word_140150F48;
      v51 = -1LL;
      do
        ++v51;
      while ( *((_BYTE *)v50 + v51) );
      v289 = v49;
      v290 = v51 + 1;
      v52 = -1LL;
      v291 = 0;
      v292 = v26 + 200;
      do
        ++v52;
      while ( *((_BYTE *)v26 + v52 + 800) );
      v294 = 0;
      v293 = v52 + 1;
      v53 = -1LL;
      v295 = (char *)v26 + 841;
      do
        ++v53;
      while ( *((_BYTE *)v26 + v53 + 841) );
      v297 = 0;
      v296 = v53 + 1;
      v299 = 40LL;
      v298 = L"NVMe command failed";
      v301 = 10LL;
      v300 = L"CDW0";
      v302 = &v268;
      v304 = L"NSID";
      v306 = &v245;
      v308 = L"CDW10|CDW11";
      v310 = &v246;
      v312 = L"CDW12|CDW13";
      v314 = &v247;
      v316 = L"CDW14|CDW15";
      v318 = &v248;
      v320 = L"SQ ID";
      v322 = &v249;
      v324 = L"Irp";
      v326 = &v250;
      v328 = L"Command status";
      v330 = &v251;
      v303 = 8LL;
      v305 = 10LL;
      v307 = 8LL;
      v309 = 24LL;
      v311 = 8LL;
      v313 = 24LL;
      v315 = 8LL;
      v317 = 24LL;
      v319 = 8LL;
      v321 = 12LL;
      v323 = 8LL;
      v325 = 8LL;
      v327 = 8LL;
      v329 = 30LL;
      v331 = 8LL;
      EtwWriteEx(StorPortEventProvider_Context, &EventDescriptor, 0LL, 1u, &v274, 0LL, 0x1Au, &v276);
      v18 = v229;
    }
    else
    {
      Irp->IoStatus.Information = *(unsigned int *)(*(_QWORD *)(v18 + 32) + v20 + 48);
    }
    v54 = v224;
    v55 = *(int **)(*(_QWORD *)(v18 + 24)
                  + 16LL * *(unsigned __int16 *)(((unsigned __int64)v224 << 7) + *(_QWORD *)(v18 + 32) + 56));
    if ( (v26[340] & 2) != 0 )
    {
      v56 = v238[1];
      v57 = *v238;
      v82 = *v26 == 1314276178;
      *(_DWORD *)((char *)&v244 + 10) = 0;
      HIWORD(v244) = 0;
      LOWORD(v243) = v14;
      WORD1(v243) = *((_WORD *)v239 + 16);
      DWORD1(v243) = *v55;
      *((_QWORD *)&v243 + 1) = v29;
      *(_QWORD *)&v244 = __PAIR64__(v56, v57);
      WORD4(v244) = v17;
      if ( v82 )
      {
        v58 = *(_QWORD *)(*((_QWORD *)v26 + 171) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
        v59 = *(_DWORD *)(v58 + 12);
        v60 = v58 + 64;
        _InterlockedOr(v215, 0);
        if ( v59 && v58 != -64 )
        {
          v61 = _InterlockedIncrement((volatile signed __int32 *)v58) % v59;
          v62 = Context;
          v63 = v60 + ((unsigned __int64)v61 << 6);
          if ( (*((_DWORD *)Context + 334) & 1) != 0 )
            *(_DWORD *)(v63 + 4) = _InterlockedIncrement((volatile signed __int32 *)Context + 352);
          else
            *(_DWORD *)(v63 + 4) = v61;
          *(_WORD *)v63 = 1;
          v64 = (_QWORD *)(v63 + 8);
          *(_WORD *)(v63 + 2) = (_WORD)v14 != 0;
          if ( (v62[334] & 2) != 0 )
            KeQuerySystemTimePrecise(v64);
          else
            *v64 = MEMORY[0xFFFFF78000000014];
          v65 = v244;
          *(_OWORD *)(v63 + 16) = v243;
          *(_OWORD *)(v63 + 32) = v65;
          v26 = Context;
        }
        v18 = v229;
        v54 = v224;
      }
    }
    v66 = *v55;
    v67 = (unsigned __int8)*v55;
    if ( v67 <= 8 && (v68 = 310, _bittest(&v68, v67)) || (v69 = 0, v67 == 25) )
      v69 = 1;
    v225 = v69;
    if ( FeatureFixTRIMAddSCSIPassthrough )
    {
      if ( !v69 )
        goto LABEL_144;
      v70 = *(_QWORD *)(v18 + 32);
      v231 = 0LL;
      v71 = *(unsigned int *)(((unsigned __int64)v54 << 7) + v70 + 88);
      if ( !(_DWORD)v71 )
      {
        v231 = 0LL;
        goto LABEL_144;
      }
      v72 = (__int64 (__fastcall *)(_QWORD *))*((_QWORD *)v26 + 86);
      v73 = *(unsigned int *)(((unsigned __int64)v54 << 7) + v70 + 88);
      v74 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)v26 + 87);
      v75 = (_QWORD **)(*((_QWORD *)v26 + 85)
                      + 16LL * ((*((unsigned int (__fastcall **)(__int64))v26 + 88))(v71) % v26[167]));
      v76 = *v75;
      if ( *v75 == v75 )
      {
        v79 = (__int64)v231;
      }
      else
      {
        while ( 1 )
        {
          v77 = v72(v76);
          v78 = v74(v77, v73);
          if ( !v78 )
            break;
          if ( v78 >= 0 )
          {
            v76 = (_QWORD *)*v76;
            if ( v76 != v75 )
              continue;
          }
          goto LABEL_113;
        }
        v79 = (__int64)(v76 - 5);
        v231 = v76 - 5;
      }
      if ( !v79 )
        goto LABEL_142;
      v80 = v229;
      v81 = v224;
      if ( (*(_DWORD *)(*(_QWORD *)(v79 + 608) + 4LL) & 1) != 0 )
      {
        StorpTelemetryCollectNvmePerfData2(*(_QWORD *)(v229 + 32) + ((unsigned __int64)v224 << 7), v55, v79, v223, v236);
        v79 = (__int64)v231;
      }
      if ( (v17 & 0x1FE) == 0 )
        goto LABEL_142;
      v82 = (*(_DWORD *)(*(_QWORD *)(v79 + 608) + 4LL) & 2) == 0;
      goto LABEL_140;
    }
    if ( !v69 )
    {
      if ( (_BYTE)v66 == 9 )
      {
        if ( (v55[11] & 4) == 0 )
          goto LABEL_144;
      }
      else if ( (_BYTE)v66 )
      {
        goto LABEL_144;
      }
    }
    v83 = *(_QWORD *)(v18 + 32);
    v231 = 0LL;
    v84 = *(unsigned int *)(((unsigned __int64)v54 << 7) + v83 + 88);
    if ( !(_DWORD)v84 )
    {
      v231 = 0LL;
      goto LABEL_144;
    }
    v85 = (__int64 (__fastcall *)(_QWORD *))*((_QWORD *)v26 + 86);
    v86 = *(unsigned int *)(((unsigned __int64)v54 << 7) + v83 + 88);
    v87 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)v26 + 87);
    v88 = (_QWORD **)(*((_QWORD *)v26 + 85)
                    + 16LL * ((*((unsigned int (__fastcall **)(__int64))v26 + 88))(v84) % v26[167]));
    v89 = *v88;
    if ( *v88 == v88 )
    {
      v79 = (__int64)v231;
    }
    else
    {
      while ( 1 )
      {
        v90 = v85(v89);
        v91 = v87(v90, v86);
        if ( !v91 )
          break;
        if ( v91 < 0 )
        {
LABEL_113:
          v4 = 0LL;
          v231 = 0LL;
          goto LABEL_143;
        }
        v89 = (_QWORD *)*v89;
        if ( v89 == v88 )
        {
          v4 = 0LL;
          v231 = 0LL;
          goto LABEL_143;
        }
      }
      v79 = (__int64)(v89 - 5);
      v231 = v89 - 5;
    }
    if ( v79 )
    {
      v80 = v229;
      v81 = v224;
      if ( (*(_DWORD *)(*(_QWORD *)(v79 + 608) + 4LL) & 1) != 0 )
      {
        StorpTelemetryCollectNvmePerfData(*(_QWORD *)(v229 + 32) + ((unsigned __int64)v224 << 7), v55, v79, v223, v236);
        v79 = (__int64)v231;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v79 + 608) + 4LL) & 2) != 0 )
      {
        v82 = (v17 & 0x1FE) == 0;
LABEL_140:
        if ( !v82 )
          StorpTelemetryCollectNvmeErrorData(*(_DWORD *)(v80 + 32) + (v81 << 7), v79, v55, (int)v238);
      }
    }
LABEL_142:
    v4 = 0LL;
LABEL_143:
    v29 = Irp;
    v69 = v225;
LABEL_144:
    v92 = v229;
    v93 = v224;
    if ( *(char *)(((unsigned __int64)v224 << 7) + *(_QWORD *)(v229 + 32) + 60) < 0 )
    {
      v94 = Context;
      ByteOffset = v29->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset;
      v96 = *((_QWORD *)Context + 16);
      v97 = *(_BYTE *)(ByteOffset.QuadPart + 126);
      v98 = *(_QWORD *)(ByteOffset.QuadPart + 24);
      v99 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v96 + 1144) + 8LL) + 96LL))(
        *(_QWORD *)(v96 + 1144),
        v98,
        (v97 & 1) == 0);
      if ( v99 < 2u )
        KeLowerIrql(v99);
      v4 = 0LL;
      v100 = *(_QWORD *)(*(_QWORD *)(ByteOffset.QuadPart + 40) + 184LL);
      *(_QWORD *)(v100 + 8) = *(_QWORD *)(ByteOffset.QuadPart + 48);
      *(_QWORD *)(v100 + 24) = *(_QWORD *)(ByteOffset.QuadPart + 56);
      v101 = *(unsigned int *)(ByteOffset.QuadPart + 120);
      *(_QWORD *)(ByteOffset.QuadPart + 24) = 0LL;
      *(_QWORD *)(ByteOffset.QuadPart + 88) = 0LL;
      *(_BYTE *)(ByteOffset.QuadPart + 126) = 0;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(v94[112] + 8 * v101), (PSLIST_ENTRY)ByteOffset.QuadPart);
      v92 = v229;
      v93 = v224;
    }
    v102 = Irp;
    if ( (int)IoGetIoAttributionHandle(Irp, &v240) >= 0 )
    {
      v103 = Irp;
      v104 = (unsigned __int64)v93 << 7;
      v105 = *(_QWORD *)(*(_QWORD *)(v92 + 32) + v104 + 64);
      v106 = *(_QWORD *)(v92 + 32);
      v107 = v240;
      v270 = 0LL;
      QpcTimeStamp = 0LL;
      v108 = *(_DWORD *)(v106 + v104 + 48);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      v271 = 0LL;
      LODWORD(v270) = 1;
      LODWORD(v104) = CurrentStackLocation->MajorFunction;
      *(_QWORD *)&v271 = v105;
      *(_QWORD *)((char *)&v270 + 4) = __PAIR64__(v108, v104);
      v110 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      v111 = v103->IoStatus.Status < 0;
      *((_QWORD *)&v271 + 1) = v110;
      if ( v111 )
        DWORD1(v270) |= 0x400u;
      IoRecordIoAttribution(v107, &v270);
      v102 = v103;
    }
    v112 = *(_QWORD *)(v92 + 32);
    v113 = v236;
    v114 = *(unsigned __int16 *)(((unsigned __int64)v93 << 7) + v112 + 52);
    if ( (_DWORD)v114 == v236 )
    {
      if ( v69 )
      {
        if ( FeatureFixFUAForReadIoPerf )
        {
          IoPriorityHint = IoGetIoPriorityHint(v102);
          v116 = (__int64)v231;
          if ( IoPriorityHint > IoPriorityLow )
            _InterlockedDecrement(*(volatile signed __int32 **)(v231[85] + 8 * v113));
        }
        else
        {
          v116 = (__int64)v231;
        }
        v102->IoStatus.Status = v223;
        IofCompleteRequest(v102, 0);
        v117 = *(_QWORD *)(v116 + 128);
        if ( !*(_BYTE *)v117
          && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v117 + 24) + 8 * v113), 0xFFFFFFFF) == 1 )
        {
          v118 = *(_QWORD *)(*(_QWORD *)(v116 + 16) + 128LL);
          v119 = *(_QWORD *)(v116 + 128);
          if ( v119 )
          {
            if ( *(_QWORD *)(v119 + 8) )
            {
              v120 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v119 + 40);
              if ( v120 )
              {
                if ( ExAcquireRundownProtectionCacheAware(v120) )
                {
                  PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v116 + 128) + 8LL), 0LL, 2LL);
                  v121 = *(_QWORD *)(v116 + 128);
                  if ( v121 )
                  {
                    if ( *(_QWORD *)(v121 + 8) )
                    {
                      v122 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v121 + 40);
                      if ( v122 )
                        ExReleaseRundownProtectionCacheAware(v122);
                    }
                  }
                }
              }
            }
          }
          v123 = *(_QWORD *)(v118 + 160);
          if ( *(_BYTE *)v123 == 1 )
            PoFxIdleComponent(**(_QWORD **)(v123 + 8), 0LL, 2LL);
        }
      }
      else
      {
        v82 = StorEtwLoggingEnabled == 0;
        v102->IoStatus.Status = v223;
        *((_BYTE *)&v102->Tail.CompletionKey + 21) = -84;
        if ( v82 )
          goto LABEL_234;
        v269 = 0LL;
        IoGetActivityIdIrp(v102, &v269);
        v126 = (__int64)v102->Tail.Overlay.CurrentStackLocation;
        if ( *(_BYTE *)v126 == 14 )
        {
          if ( (byte_140171462 & 8) == 0 )
            goto LABEL_234;
          v129 = &EventNonReadWriteRequestComplete;
          goto LABEL_233;
        }
        if ( *(_BYTE *)v126 != 15 )
        {
          if ( *(_BYTE *)v126 != 27 )
            goto LABEL_234;
          if ( *(_BYTE *)(v126 + 1) == 7 && !*(_DWORD *)(v126 + 8) )
          {
            if ( (byte_140171462 & 0x40) != 0 )
            {
              Information = (unsigned int *)v102->IoStatus.Information;
              if ( Information )
                v128 = *Information;
              else
                v128 = 0LL;
              LODWORD(RelatedActivityId) = v102->IoStatus.Status;
              LODWORD(ActivityId) = v128;
              McTemplateK0pqd_EtwWriteTransfer(v128, v125, &v269, v102, ActivityId, RelatedActivityId);
            }
            goto LABEL_234;
          }
          if ( (byte_140171462 & 0x20) == 0 )
            goto LABEL_234;
          v129 = &EventPnpRequestComplete;
LABEL_233:
          LODWORD(ActivityId) = v102->IoStatus.Status;
          McTemplateK0pd_EtwWriteTransfer(v126, v129, &v269, v102, ActivityId);
          goto LABEL_234;
        }
        if ( byte_140171461 >= 0 )
          goto LABEL_234;
        v130 = *(_QWORD *)(v126 + 8);
        v131 = 0;
        v132 = 0;
        v133 = 0;
        v134 = 0;
        v135 = 0;
        v136 = 0LL;
        if ( *(_BYTE *)(v130 + 2) == 40 )
        {
          if ( *(_DWORD *)(v130 + 20) )
            goto LABEL_234;
          v137 = *(_DWORD *)(v130 + 56);
          v138 = 0LL;
          if ( !v137 )
            goto LABEL_210;
          while ( 2 )
          {
            v139 = *(unsigned int *)(v130 + 4 * v138 + 120);
            if ( (unsigned int)v139 >= 0x80 )
            {
              v140 = *(unsigned int *)(v130 + 16);
              if ( (unsigned int)v139 < (unsigned int)v140 )
              {
                v125 = (unsigned int)v139;
                v141 = *(_DWORD *)(v139 + v130) - 64;
                if ( v141 )
                {
                  v142 = v141 - 1;
                  if ( v142 )
                  {
                    if ( v142 == 1 && v125 + 40 <= v140 )
                    {
                      if ( *(_DWORD *)(v125 + v130 + 12) )
                        v4 = (unsigned __int8 *)(v125 + v130 + 32);
                      v136 = *(_BYTE **)(v125 + v130 + 24);
                      goto LABEL_209;
                    }
                    goto LABEL_204;
                  }
                  v143 = v125 + 56;
                }
                else
                {
                  v143 = v125 + 40;
                }
                if ( v143 <= v140 )
                {
                  if ( *(_BYTE *)(v125 + v130 + 10) )
                    v4 = (unsigned __int8 *)(v125 + v130 + 24);
                  v136 = *(_BYTE **)(v125 + v130 + 16);
LABEL_209:
                  v131 = *(_BYTE *)(v125 + v130 + 8);
                  v132 = *(_BYTE *)(v125 + v130 + 9);
LABEL_210:
                  if ( v4 )
                  {
                    v144 = *v4;
                    v102 = Irp;
                    goto LABEL_213;
                  }
                  goto LABEL_234;
                }
              }
            }
LABEL_204:
            v138 = (unsigned int)(v138 + 1);
            if ( (unsigned int)v138 >= v137 )
              goto LABEL_210;
            continue;
          }
        }
        v144 = *(unsigned __int8 *)(v130 + 72);
        v136 = *(_BYTE **)(v130 + 32);
        v132 = *(_BYTE *)(v130 + 11);
        v131 = *(_BYTE *)(v130 + 4);
        if ( *(_BYTE *)(v130 + 2) )
          goto LABEL_234;
LABEL_213:
        LOBYTE(v144) = v144 - 8;
        if ( (v144 & 0x5D) == 0 )
        {
          if ( *(_BYTE *)(v130 + 3) == 1 || !v136 || !v132 )
            goto LABEL_229;
          LOBYTE(v125) = 0;
          v144 = (unsigned __int64)&v136[v132];
          v145 = v136 + 8;
          if ( (unsigned __int8)((*v136 & 0x7F) - 114) <= 1u )
          {
            if ( (unsigned __int64)v145 <= v144 )
            {
              v134 = v136[2];
              v133 = v136[1] & 0xF;
              v135 = v136[3];
              goto LABEL_227;
            }
          }
          else if ( (unsigned __int64)v145 <= v144 )
          {
            v125 = (unsigned __int64)(v136 + 13);
            v133 = v136[2] & 0xF;
            v146 = v132;
            if ( (unsigned int)(unsigned __int8)v136[7] + 8 <= v132 )
              v146 = (unsigned __int8)v136[7] + 8;
            v144 = (unsigned __int64)&v136[v146];
            if ( v125 <= v144 )
              v134 = v136[12];
            if ( (unsigned __int64)(v136 + 14) <= v144 )
              v135 = *(_BYTE *)v125;
LABEL_227:
            LOBYTE(v125) = 1;
          }
          if ( !(_BYTE)v125 )
          {
LABEL_229:
            v135 = 0;
            v134 = 0;
            v133 = 0;
          }
          v147 = *(_BYTE *)(v130 + 3);
          v222 = v102;
          LOBYTE(v221) = v135;
          LOBYTE(v220) = v134;
          LOBYTE(UserData) = v133;
          LOBYTE(UserDataCount) = v131;
          LOBYTE(RelatedActivityId) = v147;
          LODWORD(ActivityId) = v102->IoStatus.Status;
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v144,
            v125,
            &v269,
            v102,
            ActivityId,
            RelatedActivityId,
            UserDataCount,
            UserData,
            v220,
            v221,
            v102);
        }
LABEL_234:
        IofCompleteRequest(Irp, 0);
        v4 = 0LL;
      }
LABEL_170:
      v5 = (char *)Context;
      goto LABEL_171;
    }
    v5 = (char *)Context;
    v148 = Irp;
    v149 = *(_QWORD *)(*((_QWORD *)Context + 138) + 8 * v114);
    Irp->IoStatus.Status = v223;
    if ( v69 )
      _InterlockedExchange64(
        &v148->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
        (__int64)v231);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(v149 + 192),
      (PSLIST_ENTRY)(((unsigned __int64)&v148->Tail.Overlay.DriverContext[1] + 7) & 0xFFFFFFFFFFFFFFF0uLL));
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v149 + 256), 1, 0) )
      KeInsertQueueDpc(*(PRKDPC *)(v149 + 24), (PVOID)v149, 0LL);
LABEL_171:
    _InterlockedOr(v215, 0);
    v6 = v239;
    while ( _InterlockedCompareExchange(v6 + 10, 1, 0) )
      ;
    v124 = *((unsigned __int16 *)v6 + 17);
    if ( v124 == v233 )
    {
      *((_WORD *)v6 + 18) = *((_WORD *)v6 + 18) != 1;
      *((_WORD *)v6 + 17) = 0;
    }
    else
    {
      *((_WORD *)v6 + 17) = v124 + 1;
    }
    v9 = (unsigned int *)(*(_QWORD *)v6 + 16LL * *((unsigned __int16 *)v6 + 17));
    v238 = v9;
    if ( (*((_WORD *)v9 + 7) & 1) == *((_WORD *)v6 + 18) )
    {
      v150 = *((unsigned __int16 *)v6 + 17) | v234 & 0xFFFF0000;
      v234 = v150;
      if ( v228 == 1 )
      {
        v151 = *((_QWORD *)v5 + 16);
        v152 = *((_QWORD *)v5 + 206);
        ActivityId = (LPCGUID)&v234;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(v151 + 528))(v152 + 64, *((unsigned int *)v6 + 4), 4LL);
      }
      else
      {
        **((_DWORD **)v6 + 2) = v150;
        _InterlockedOr(v215, 0);
      }
      v237 = _InterlockedCompareExchange(v6 + 11, 0, 1);
    }
    _InterlockedCompareExchange(v6 + 10, 0, 1);
    _InterlockedOr(v215, 0);
    v153 = (union _SLIST_HEADER *)v229;
    v154 = v224;
    ++v227;
    v155 = *(_QWORD *)(v229 + 32);
    v156 = (unsigned __int16 *)(((unsigned __int64)v224 << 7) + v155 + 54);
    v82 = *((_DWORD *)v5 + 237) == 0;
    v241 = v156;
    if ( v82 )
    {
      if ( *(_WORD *)(v229 + 136) )
      {
        v157 = (unsigned __int64)*v156 << 7;
        v232 = 0;
        if ( (*(_BYTE *)(v157 + v155 + 60) & 8) != 0 )
        {
          v158 = *(_QWORD *)(v229 + 32);
          v159 = (unsigned __int64)*v156 << 7;
          v160 = *(_QWORD *)(v159 + v158 + 40);
          v161 = *(_WORD *)(v159 + v158 + 52);
          v162 = v223;
          LOWORD(v233) = v161;
          v163 = *(IRP **)(v160 + 24);
          v164 = *(PIRP *)(v160 + 16);
          Irp = v164;
          v253 = v163;
          v165 = v163->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset;
          v166 = *(_WORD *)(v165.QuadPart + 32);
          LOWORD(v225) = v166;
          _InterlockedExchange((volatile __int32 *)(v160 + 104), 5);
          *(_DWORD *)(v160 + 112) = v162;
          if ( v162 < 0 )
            _InterlockedCompareExchange((volatile signed __int32 *)(v165.QuadPart + 112), v162, 0);
          v167 = _InterlockedExchange64((volatile __int64 *)(v160 + 88), 0LL);
          if ( v167 )
          {
            v168 = *(_QWORD *)(v167 + 24);
            if ( v168 )
            {
              v169 = *(_BYTE *)(v167 + 126);
              v170 = *(_QWORD *)(*(_QWORD *)&v164->Flags + 128LL);
              v171 = KfRaiseIrql(2u);
              (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v170 + 1144) + 8LL) + 96LL))(
                *(_QWORD *)(v170 + 1144),
                v168,
                (v169 & 1) == 0);
              if ( v171 < 2u )
                KeLowerIrql(v171);
              v166 = v225;
              v164 = Irp;
            }
            v172 = *(_QWORD *)&v164->Flags;
            v173 = *(unsigned int *)(v167 + 120);
            *(_QWORD *)(v167 + 24) = 0LL;
            *(_QWORD *)(v167 + 88) = 0LL;
            *(_BYTE *)(v167 + 126) = 0;
            ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v172 + 896) + 8 * v173), (PSLIST_ENTRY)v167);
            v161 = v233;
            v163 = v253;
          }
          if ( _InterlockedIncrement((volatile signed __int32 *)(v165.QuadPart + 116)) < v166 )
          {
            v5 = (char *)Context;
          }
          else
          {
            v174 = *(_DWORD *)(v165.QuadPart + 112);
            if ( v174 < 0 )
              v175 = 0LL;
            else
              v175 = *(unsigned int *)(v165.QuadPart + 48);
            v163->IoStatus.Information = v175;
            v176 = v163->Tail.Overlay.CurrentStackLocation;
            v177 = *(_QWORD *)&v164->Flags;
            QuadPart = (_LARGE_INTEGER *)v176->Parameters.Read.ByteOffset.QuadPart;
            v176->Parameters.Create.SecurityContext = (_IO_SECURITY_CONTEXT *)QuadPart[8].QuadPart;
            v176->Parameters.Read.ByteOffset = QuadPart[9];
            v179 = 8LL * v161;
            do
            {
              v180 = *(_LARGE_INTEGER *)(v165.QuadPart + 96);
              *(_QWORD *)(v165.QuadPart + 88) = 0LL;
              *(_DWORD *)(v165.QuadPart + 108) = 0;
              *(_DWORD *)(v165.QuadPart + 104) = 0;
              ExpInterlockedPushEntrySList(
                *(PSLIST_HEADER *)(*(_QWORD *)(v177 + 888) + v179),
                (PSLIST_ENTRY)v165.QuadPart);
              v165 = v180;
            }
            while ( v180.QuadPart );
            v181 = Irp;
            if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v163) > IoPriorityLow )
            {
              v182 = v233;
              _InterlockedDecrement(*(volatile signed __int32 **)(v181[3].IoStatus.Information
                                                                + 8LL * (unsigned __int16)v233));
            }
            else
            {
              v182 = v233;
            }
            v163->IoStatus.Status = v174;
            IofCompleteRequest(v163, 0);
            Blink = v181->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
            if ( !LOBYTE(Blink->Flink)
              && _InterlockedExchangeAdd(*((volatile signed __int32 **)&Blink[1].Blink->Flink + v182), 0xFFFFFFFF) == 1 )
            {
              v184 = *(_QWORD *)(*(_QWORD *)&v181->Flags + 128LL);
              v185 = v181->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
              if ( v185 )
              {
                if ( v185->Blink )
                {
                  v186 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v185[2].Blink;
                  if ( v186 )
                  {
                    if ( ExAcquireRundownProtectionCacheAware(v186) )
                    {
                      PoFxIdleComponent(
                        v181->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink->Blink->Flink,
                        0LL,
                        2LL);
                      v187 = v181->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
                      if ( v187 )
                      {
                        if ( v187->Blink )
                        {
                          v188 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v187[2].Blink;
                          if ( v188 )
                            ExReleaseRundownProtectionCacheAware(v188);
                        }
                      }
                    }
                  }
                }
              }
              v189 = *(_QWORD *)(v184 + 160);
              if ( *(_BYTE *)v189 == 1 )
                PoFxIdleComponent(**(_QWORD **)(v189 + 8), 0LL, 2LL);
            }
            v5 = (char *)Context;
            if ( v174 == 259 )
            {
              v190 = 1;
LABEL_290:
              v9 = v238;
              v4 = 0LL;
              v6 = v239;
              v153 = (union _SLIST_HEADER *)v229;
              v154 = v224;
              goto LABEL_293;
            }
          }
          v153 = (union _SLIST_HEADER *)v229;
          v156 = v241;
        }
        if ( *((_DWORD *)v5 + 238) )
        {
          v190 = NvmeProcessPendingIoInCompletionDpc(v5, v153, v16, v156);
        }
        else if ( *((_DWORD *)v5 + 240) )
        {
          v190 = NvmeControllerProcessPendingCommand(
                   (_DWORD)v5,
                   *(unsigned __int16 *)(((unsigned __int64)*v156 << 7) + v153[2].Alignment + 52),
                   (_DWORD)v153,
                   (_DWORD)v156,
                   0);
        }
        else
        {
          v190 = v232;
        }
        goto LABEL_290;
      }
      if ( *((_DWORD *)v5 + 239) )
      {
        v190 = NvmeControllerProcessPendingCommand(
                 (_DWORD)v5,
                 *(unsigned __int16 *)(((unsigned __int64)*v156 << 7) + *(_QWORD *)(v229 + 32) + 52),
                 v229,
                 (_DWORD)v156,
                 1);
LABEL_293:
        if ( v190 )
          goto LABEL_295;
      }
    }
    else if ( **((_DWORD **)v5 + 161) == 1 && !*(_DWORD *)(*((_QWORD *)v5 + 161) + 4LL) )
    {
      goto LABEL_295;
    }
    ExpInterlockedPushEntrySList(v153 + 4, (PSLIST_ENTRY)(v153[2].Alignment + ((unsigned __int64)v154 << 7)));
LABEL_295:
    LOBYTE(v7) = (_BYTE)v242;
    if ( !v237 )
    {
      v13 = -1LL;
      if ( (*((_WORD *)v9 + 7) & 1) != *((_WORD *)v6 + 18) )
        continue;
    }
    v191 = v227;
    goto LABEL_298;
  }
  v259 = *((_QWORD *)v5 + 121);
  v258 = *(unsigned __int16 *)(v18 + 142);
  v257 = *(unsigned __int16 *)(v18 + 140);
  v255 = v9[3];
  v254 = v9[2];
  v192 = (void *)*((unsigned __int16 *)v6 + 17);
  v82 = (v5[136] & 2) == 0;
  v193 = *((_QWORD *)v5 + 16);
  v275 = 0LL;
  Context = v192;
  v194 = (volatile signed __int32 *)*((unsigned __int16 *)v6 + 16);
  v256 = v19;
  v272 = (EVENT_DESCRIPTOR)EventNVMeControllerError;
  v239 = v194;
  v266 = 0;
  if ( !v82 )
    v272.Keyword |= 0x8000uLL;
  v195 = *(_QWORD *)(v193 + 16);
  v196 = *(_QWORD *)(v195 + 48);
  if ( !v196 )
    goto LABEL_313;
  v197 = *(unsigned __int16 *)(v195 + 40);
  if ( !(_WORD)v197 )
    goto LABEL_313;
  v198 = v197 >> 1;
  if ( !(v197 >> 1) )
    goto LABEL_313;
  while ( 1 )
  {
    v199 = v198 - 1;
    v200 = (_WORD *)(v196 + 2 * v199);
    --v198;
    if ( *v200 == 92 )
      break;
    if ( !(_DWORD)v199 )
      goto LABEL_313;
  }
  v201 = v200 + 1;
  if ( !v200 )
LABEL_313:
    v201 = *(const wchar_t **)(v195 + 48);
  v202 = *(_WORD *)(v195 + 48) - (_WORD)v201;
  v267 = v201;
  v264 = *(_WORD *)(v195 + 40) + v202;
  v265 = v264 + 2;
  v332.Ptr = v193 + 56;
  v333 = v193 + 1032;
  *(_QWORD *)&v332.Size = 4LL;
  v334 = 16LL;
  if ( v201 )
  {
    v203 = -1LL;
    do
      v82 = v201[++v203] == 0;
    while ( !v82 );
    v204 = 2 * v203 + 2;
  }
  else
  {
    v201 = L"NULL";
    v204 = 10;
  }
  v335 = v201;
  v205 = (const wchar_t *)*((_QWORD *)v5 + 99);
  v336 = v204;
  v337 = 0;
  if ( v205 )
  {
    v206 = -1LL;
    do
      ++v206;
    while ( *((_BYTE *)v205 + v206) );
    v207 = v206 + 1;
    v208 = &word_140150F48;
  }
  else
  {
    v208 = &word_140150F48;
    v207 = 1;
    v205 = &word_140150F48;
  }
  v339 = v207;
  v338 = v205;
  v209 = (const wchar_t *)*((_QWORD *)v5 + 94);
  v341 = v5 + 4;
  v343 = v5 + 744;
  v340 = 0;
  v342 = 2LL;
  v344 = 1LL;
  if ( v209 )
    v208 = v209;
  else
    v209 = &word_140150F48;
  v210 = -1LL;
  do
    ++v210;
  while ( *((_BYTE *)v209 + v210) );
  v345 = v208;
  v346 = v210 + 1;
  v211 = -1LL;
  v347 = 0;
  v348 = v5 + 800;
  do
    ++v211;
  while ( v5[v211 + 800] );
  v350 = 0;
  v349 = v211 + 1;
  v351 = v5 + 841;
  do
    ++v13;
  while ( v5[v13 + 841] );
  v354 = L"Invalid command ID in CQ entry";
  v353 = 0;
  v356 = L"CQ ID";
  v352 = v13 + 1;
  v358 = &v239;
  v355 = 62LL;
  v360 = L"CQ Head";
  v357 = 12LL;
  p_Context = &Context;
  v364 = L"CQ entry DW2";
  v366 = &v254;
  v368 = L"CQ entry DW3";
  v370 = &v255;
  v372 = L"Queue Depth";
  v374 = &v256;
  v376 = L"SQ Head";
  v378 = &v257;
  v380 = L"SQ Tail";
  v382 = &v258;
  v384 = L"Controller state";
  v386 = &v259;
  v359 = 8LL;
  v361 = 16LL;
  v363 = 8LL;
  v365 = 26LL;
  v367 = 8LL;
  v369 = 26LL;
  v371 = 8LL;
  v373 = 24LL;
  v375 = 8LL;
  v377 = 16LL;
  v379 = 8LL;
  v381 = 16LL;
  v383 = 8LL;
  v385 = 34LL;
  v387 = 8LL;
  EtwWriteEx(StorPortEventProvider_Context, &v272, 0LL, 1u, &v275, 0LL, 0x1Au, &v332);
  v191 = v227;
  if ( v227 )
  {
    while ( _InterlockedCompareExchange(v6 + 10, 1, 0) )
      ;
    v212 = *((unsigned __int16 *)v6 + 17) | v234 & 0xFFFF0000;
    v234 = v212;
    if ( v228 == 1 )
    {
      v213 = *((_QWORD *)v5 + 16);
      v214 = *((_QWORD *)v5 + 206);
      ActivityId = (LPCGUID)&v234;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v213 + 528))(v214 + 64, *((unsigned int *)v6 + 4), 4LL);
    }
    else
    {
      **((_DWORD **)v6 + 2) = v212;
      _InterlockedOr(v215, 0);
    }
    _InterlockedCompareExchange(v6 + 11, 0, 1);
    _InterlockedCompareExchange(v6 + 10, 0, 1);
  }
  LOBYTE(v7) = (_BYTE)v242;
LABEL_298:
  if ( !v191 )
LABEL_299:
    _InterlockedCompareExchange(v6 + 11, 0, 1);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
LABEL_301:
    if ( *((_DWORD *)v5 + 226) != 3 )
    {
      *(_DWORD *)(*((_QWORD *)v5 + 115) + 16LL) = 1 << *((_BYTE *)v6 + 24);
      _InterlockedOr(v215, 0);
    }
  }
}
