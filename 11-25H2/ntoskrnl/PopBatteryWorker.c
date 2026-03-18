/*
 * XREFs of PopBatteryWorker @ 0x140AC2900
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     IoSynchronousCallDriver @ 0x14035DF20 (IoSynchronousCallDriver.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x140428104 (_tlgCreate1Sz_char.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x1404A406C (PopBatteryQueueWork.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1405C86A4 (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DisableRemoteBatteryEstimationRegkey__private_IsEnabledDeviceUsageNoInline @ 0x1405D30E4 (Feature_DisableRemoteBatteryEstimationRegkey__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline @ 0x1405D3138 (Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x14069DF40 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PopEvaluateWeakChargerStateV1 @ 0x14074EA74 (PopEvaluateWeakChargerStateV1.c)
 *     PopPowerAdapterPublishRecState @ 0x14074F05C (PopPowerAdapterPublishRecState.c)
 *     PopPowerAdapterQueryStatus @ 0x14074F2D4 (PopPowerAdapterQueryStatus.c)
 *     PopPowerAdapterTraceFailure @ 0x14074F618 (PopPowerAdapterTraceFailure.c)
 *     PopResetCBTriggers @ 0x14074F758 (PopResetCBTriggers.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409649CC (PopSetPowerSettingValueAcDc.c)
 *     PopPrepareIoctl @ 0x140A5AE80 (PopPrepareIoctl.c)
 *     PopBatteryUpdateCompositeInformation @ 0x140A659E8 (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryInitialize @ 0x140A68504 (PopBatteryInitialize.c)
 *     PopEvaluateWeakChargerState @ 0x140A6B4B0 (PopEvaluateWeakChargerState.c)
 *     PopBatteryQueryEstimatedTime @ 0x140A7E8F0 (PopBatteryQueryEstimatedTime.c)
 *     PopEstimateChargeTime @ 0x140A7ECB4 (PopEstimateChargeTime.c)
 *     PopBatteryEstimatesSpoiled @ 0x140A7EE40 (PopBatteryEstimatesSpoiled.c)
 *     PopAccountBatteryEnergyChange @ 0x140A948F4 (PopAccountBatteryEnergyChange.c)
 *     PopBatteryReadTag @ 0x140AA89F8 (PopBatteryReadTag.c)
 *     PopBatteryWaitTag @ 0x140AB58B0 (PopBatteryWaitTag.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 *     PopBatteryQueryStatus @ 0x140AC26B4 (PopBatteryQueryStatus.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopBatteryWorker()
{
  int v0; // r13d
  bool v1; // r12
  int WnfStateData; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 *i; // rdi
  __int64 v7; // rdx
  int v8; // eax
  __int32 v9; // r15d
  bool v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rsi
  __int64 **v18; // rcx
  __int64 j; // rdi
  __int64 v20; // rdi
  int v21; // ecx
  int EstimatedTime; // eax
  int v23; // ecx
  int v24; // eax
  signed __int8 v25; // di
  int v26; // ecx
  unsigned int v27; // ecx
  bool v28; // zf
  IRP *v29; // rcx
  NTSTATUS v30; // eax
  __m128i v31; // xmm6
  __int128 v32; // xmm7
  __int64 v33; // xmm8_8
  NTSTATUS Status; // eax
  int v35; // eax
  __int128 v36; // xmm1
  int v37; // r12d
  unsigned int v38; // r13d
  int v39; // eax
  int v40; // r14d
  int v41; // r15d
  int v42; // r9d
  int v43; // edi
  __int64 v44; // rsi
  int v45; // ebx
  int v46; // edx
  int v47; // r8d
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int v51; // r9d
  int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // ecx
  int v55; // eax
  unsigned int v56; // r8d
  int v57; // ecx
  int v58; // r9d
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // ecx
  __int64 v63; // rcx
  int v64; // r14d
  unsigned int v65; // r8d
  __int64 *v66; // rsi
  unsigned int v67; // ebx
  int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // rcx
  int v71; // r14d
  unsigned int v72; // r8d
  __int64 *v73; // rsi
  int v74; // eax
  unsigned int v75; // ecx
  char v76; // si
  int v77; // ecx
  int updated; // r14d
  int v79; // r8d
  const CHAR *v80; // rdx
  const CHAR *v81; // r9
  char v82; // r8
  const CHAR *v83; // rdx
  const CHAR *v84; // r9
  char v85; // r8
  const CHAR *v86; // rdx
  const CHAR *v87; // r9
  char v88; // r8
  const CHAR *v89; // rdx
  int v90; // edi
  __int16 v91; // r15
  __int64 v92; // r14
  char v93; // al
  char v94; // cl
  __int16 v95; // di
  __int64 *k; // rdi
  char v97; // al
  char v98; // bl
  char v99; // bl
  const CHAR *v100; // rdx
  char v101; // r8
  const CHAR *v102; // rdx
  const CHAR *v103; // r11
  char v104; // r8
  const CHAR *v105; // rdx
  const CHAR *v106; // r11
  char v107; // r8
  const CHAR *v108; // rdx
  const CHAR *v109; // r11
  const CHAR *v110; // rdx
  char v111; // r8
  const CHAR *v112; // r11
  char v113; // r8
  const CHAR *v114; // rdx
  const CHAR *v115; // r11
  char v116; // r8
  const CHAR *v117; // rdx
  const CHAR *v118; // r11
  const CHAR *v119; // rdx
  char v120; // r8
  const CHAR *v121; // r11
  const CHAR *v122; // rdx
  int v123; // r10d
  unsigned int v124; // eax
  unsigned __int64 v125; // rax
  const CHAR *v126; // rdx
  int v127; // r9d
  int v128; // eax
  signed __int32 v130[8]; // [rsp+8h] [rbp-100h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  int *v132; // [rsp+30h] [rbp-D8h]
  __int64 v133; // [rsp+38h] [rbp-D0h]
  __int64 v134; // [rsp+40h] [rbp-C8h]
  __int64 v135; // [rsp+48h] [rbp-C0h]
  bool v136; // [rsp+58h] [rbp-B0h] BYREF
  char v137; // [rsp+59h] [rbp-AFh] BYREF
  bool v138; // [rsp+5Ah] [rbp-AEh]
  bool v139; // [rsp+5Bh] [rbp-ADh] BYREF
  int v140; // [rsp+5Ch] [rbp-ACh]
  int v141; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v142; // [rsp+64h] [rbp-A4h]
  int v143; // [rsp+68h] [rbp-A0h]
  int v144; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v145; // [rsp+70h] [rbp-98h] BYREF
  int v146; // [rsp+78h] [rbp-90h]
  int v147; // [rsp+7Ch] [rbp-8Ch]
  int v148; // [rsp+80h] [rbp-88h] BYREF
  int v149; // [rsp+84h] [rbp-84h]
  int v150; // [rsp+88h] [rbp-80h]
  int v151; // [rsp+8Ch] [rbp-7Ch]
  int v152; // [rsp+90h] [rbp-78h] BYREF
  __int64 v153; // [rsp+98h] [rbp-70h] BYREF
  int v154; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v155; // [rsp+A4h] [rbp-64h]
  unsigned int v156; // [rsp+ACh] [rbp-5Ch]
  __int128 v157; // [rsp+B0h] [rbp-58h]
  int v158; // [rsp+C0h] [rbp-48h]
  BOOL v159; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v160; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v161; // [rsp+D8h] [rbp-30h] BYREF
  BOOL v162; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v163; // [rsp+E4h] [rbp-24h] BYREF
  int v164; // [rsp+ECh] [rbp-1Ch] BYREF
  int v165; // [rsp+F0h] [rbp-18h] BYREF
  int v166; // [rsp+F4h] [rbp-14h] BYREF
  int v167; // [rsp+F8h] [rbp-10h]
  int v168; // [rsp+FCh] [rbp-Ch] BYREF
  int v169; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 v170; // [rsp+108h] [rbp+0h] BYREF
  int v171; // [rsp+110h] [rbp+8h] BYREF
  __int64 v172; // [rsp+118h] [rbp+10h] BYREF
  __int64 v173; // [rsp+120h] [rbp+18h] BYREF
  __int128 v174; // [rsp+128h] [rbp+20h]
  _OWORD v175[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v176; // [rsp+158h] [rbp+50h]
  _OWORD v177[2]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v178; // [rsp+188h] [rbp+80h]
  __m128i v179; // [rsp+198h] [rbp+90h]
  __int128 v180; // [rsp+1A8h] [rbp+A0h]
  __int64 v181; // [rsp+1B8h] [rbp+B0h]
  __int128 v182; // [rsp+1C0h] [rbp+B8h] BYREF
  __int128 v183; // [rsp+1D0h] [rbp+C8h]
  _BYTE v184[24]; // [rsp+1E0h] [rbp+D8h] BYREF
  int v185; // [rsp+1F8h] [rbp+F0h]
  struct _EVENT_DATA_DESCRIPTOR v186; // [rsp+208h] [rbp+100h] BYREF
  int *v187; // [rsp+228h] [rbp+120h]
  __int64 v188; // [rsp+230h] [rbp+128h]
  __int64 *v189; // [rsp+238h] [rbp+130h]
  __int64 v190; // [rsp+240h] [rbp+138h]
  int *v191; // [rsp+248h] [rbp+140h]
  __int64 v192; // [rsp+250h] [rbp+148h]
  int *v193; // [rsp+258h] [rbp+150h]
  __int64 v194; // [rsp+260h] [rbp+158h]
  __int64 *v195; // [rsp+268h] [rbp+160h]
  __int64 v196; // [rsp+270h] [rbp+168h]
  char *v197; // [rsp+278h] [rbp+170h]
  __int64 v198; // [rsp+280h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v199; // [rsp+288h] [rbp+180h] BYREF
  int *v200; // [rsp+2A8h] [rbp+1A0h]
  __int64 v201; // [rsp+2B0h] [rbp+1A8h]
  char v202[16]; // [rsp+2B8h] [rbp+1B0h] BYREF
  char v203[16]; // [rsp+2C8h] [rbp+1C0h] BYREF
  char v204[16]; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v205[16]; // [rsp+2E8h] [rbp+1E0h] BYREF
  char v206[16]; // [rsp+2F8h] [rbp+1F0h] BYREF
  char v207[16]; // [rsp+308h] [rbp+200h] BYREF
  char v208[16]; // [rsp+318h] [rbp+210h] BYREF
  char v209[16]; // [rsp+328h] [rbp+220h] BYREF
  char v210[16]; // [rsp+338h] [rbp+230h] BYREF
  int *v211; // [rsp+348h] [rbp+240h]
  __int64 v212; // [rsp+350h] [rbp+248h]
  int *v213; // [rsp+358h] [rbp+250h]
  __int64 v214; // [rsp+360h] [rbp+258h]
  int *v215; // [rsp+368h] [rbp+260h]
  __int64 v216; // [rsp+370h] [rbp+268h]
  int *v217; // [rsp+378h] [rbp+270h]
  __int64 v218; // [rsp+380h] [rbp+278h]
  __int64 *v219; // [rsp+388h] [rbp+280h]
  __int64 v220; // [rsp+390h] [rbp+288h]
  char *v221; // [rsp+398h] [rbp+290h]
  __int64 v222; // [rsp+3A0h] [rbp+298h]
  int *v223; // [rsp+3A8h] [rbp+2A0h]
  __int64 v224; // [rsp+3B0h] [rbp+2A8h]
  int *v225; // [rsp+3B8h] [rbp+2B0h]
  __int64 v226; // [rsp+3C0h] [rbp+2B8h]
  char v227[16]; // [rsp+3C8h] [rbp+2C0h] BYREF
  __int64 *v228; // [rsp+3D8h] [rbp+2D0h]
  __int64 v229; // [rsp+3E0h] [rbp+2D8h]
  __int64 *v230; // [rsp+3E8h] [rbp+2E0h]
  __int64 v231; // [rsp+3F0h] [rbp+2E8h]
  struct _EVENT_DATA_DESCRIPTOR v232; // [rsp+3F8h] [rbp+2F0h] BYREF
  bool *v233; // [rsp+418h] [rbp+310h]
  __int64 v234; // [rsp+420h] [rbp+318h]
  int *v235; // [rsp+428h] [rbp+320h]
  __int64 v236; // [rsp+430h] [rbp+328h]
  int *v237; // [rsp+438h] [rbp+330h]
  __int64 v238; // [rsp+440h] [rbp+338h]
  char v239[16]; // [rsp+448h] [rbp+340h] BYREF
  char v240[16]; // [rsp+458h] [rbp+350h] BYREF
  char v241[16]; // [rsp+468h] [rbp+360h] BYREF
  char v242[16]; // [rsp+478h] [rbp+370h] BYREF
  __int64 *v243; // [rsp+488h] [rbp+380h]
  __int64 v244; // [rsp+490h] [rbp+388h]
  struct _EVENT_DATA_DESCRIPTOR v245; // [rsp+498h] [rbp+390h] BYREF
  __int64 *v246; // [rsp+4B8h] [rbp+3B0h]
  __int64 v247; // [rsp+4C0h] [rbp+3B8h]

  v1 = 0;
  v160 = 0LL;
  v161 = 0LL;
  v170 = 0LL;
  v136 = 0;
  v182 = 0LL;
  v183 = 0LL;
  v185 = 0;
  memset(v184, 0, sizeof(v184));
  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
  v153 = 0LL;
  v132 = &v141;
  v144 = 0;
  Timeout = (PLARGE_INTEGER)&v153;
  v141 = 8;
  WnfStateData = ZwQueryWnfStateData((__int64)&WNF_PO_DISCHARGE_START_FILETIME, 0LL);
  if ( WnfStateData == -1073741670 || WnfStateData == -1073741431 )
  {
    v140 = 0;
  }
  else if ( WnfStateData || v141 != 8 )
  {
    v140 = 1;
  }
  else
  {
    v140 = (v153 != 0) + 2;
  }
  IsEnabledDeviceUsageNoInline = Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline();
  v4 = (__int64 *)qword_140F0AAD0;
  v5 = qword_140F0AD50 & -(__int64)(IsEnabledDeviceUsageNoInline != 0);
  v145 = v5;
  while ( v4 != &qword_140F0AAD0 )
  {
    IoCancelIrp((PIRP)*(v4 - 1));
    v4 = (__int64 *)*v4;
  }
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline()
    && v5
    && (unsigned int)(*(_DWORD *)(v5 + 128) - 1) <= 1 )
  {
    IoCancelIrp(*(PIRP *)(v5 + 56));
  }
  for ( i = (__int64 *)qword_140F0AAD0; i != &qword_140F0AAD0; i = (__int64 *)*i )
    KeWaitForSingleObject(i + 2, Executive, 0, 0, 0LL);
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline()
    && v5
    && (unsigned int)(*(_DWORD *)(v5 + 128) - 1) <= 1 )
  {
    KeWaitForSingleObject((PVOID)(v5 + 104), Executive, 0, 0, 0LL);
  }
  LOBYTE(v0) = 0;
  v137 = 0;
  v143 = v0;
  for ( LOBYTE(v8) = 0; ; LOBYTE(v8) = v146 )
  {
    v8 = (unsigned __int8)v8;
    v9 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v147 = v9;
    v10 = (v9 & 2) != 0;
    if ( (v9 & 8) != 0 )
      v8 = 1;
    v146 = v8;
    if ( (v9 & 0x10) != 0 )
    {
      PopAcquirePolicyLock(16LL, v7);
      PopResetCBTriggers(0x80u);
      PopReleasePolicyLock(v12, v11, v13, v14, Timeout);
    }
    v138 = (v9 & 0x40) != 0;
    v159 = v138;
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline()
      && (v9 & 0x80u) != 0
      && v5
      && (unsigned int)(*(_DWORD *)(v5 + 128) - 1) <= 1 )
    {
      v1 = (*(_BYTE *)(v5 + 140) & 1) != 0;
    }
    v15 = qword_140F0AAD0;
    if ( (__int64 *)qword_140F0AAD0 != &qword_140F0AAD0 )
    {
      do
      {
        v16 = *(__int64 **)v15;
        v17 = v15 - 64;
        if ( *(_DWORD *)(v15 - 64 + 104) == 2 )
        {
          if ( v16[1] != v15 || (v18 = *(__int64 ***)(v15 + 8), *v18 != (__int64 *)v15) )
            __fastfail(3u);
          *v18 = v16;
          v16[1] = (__int64)v18;
          *(_QWORD *)v15 = 0LL;
          ++dword_140F0AB2C;
          --dword_140F0AAB4;
          byte_140F0AAB8 = 1;
          if ( (int)PopBatteryReadTag(v15 - 64) < 0 )
            PopBatteryWaitTag(v17);
          v10 = 1;
        }
        v15 = (__int64)v16;
      }
      while ( v16 != &qword_140F0AAD0 );
    }
    for ( j = qword_140F0AAC0; (__int64 *)j != &qword_140F0AAC0; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 104) == 1 )
      {
        KeWaitForSingleObject((PVOID)(j + 80), Executive, 0, 0, 0LL);
        if ( PopBatteryInitialize(j) < 0 )
          PopBatteryWaitTag(j);
        else
          v10 = 1;
      }
    }
    v20 = qword_140F0AAD0;
    if ( (__int64 *)qword_140F0AAD0 != &qword_140F0AAD0 )
    {
      do
      {
        v174 = *(_OWORD *)(v20 + 84);
        if ( PopBatteryQueryStatus(v20 - 64, 1) >= 0 )
        {
          PopAccountBatteryEnergyChange(v20 - 64);
          v21 = *(_DWORD *)(v20 + 84);
          if ( (((unsigned __int8)v174 ^ *(_BYTE *)(v20 + 84)) & 7) != 0 )
          {
            LOBYTE(v0) = 1;
          }
          else if ( DWORD1(v174) != *(_DWORD *)(v20 + 88) || HIDWORD(v174) != *(_DWORD *)(v20 + 96) )
          {
            LOBYTE(v146) = 1;
          }
          EstimatedTime = -1;
          if ( (v21 & 2) != 0 )
            EstimatedTime = PopBatteryQueryEstimatedTime(v20 - 64, 0);
          *(_DWORD *)(v20 + 120) = EstimatedTime;
          v23 = 0;
          if ( EstimatedTime != -1 )
            v23 = EstimatedTime;
          v24 = *(_DWORD *)(v20 + 96);
          LODWORD(v135) = v23;
          LODWORD(v134) = v24;
          LODWORD(v133) = *(_DWORD *)(v20 + 92);
          LODWORD(v132) = *(_DWORD *)(v20 + 88);
          LODWORD(Timeout) = *(_DWORD *)(v20 + 84);
          DbgPrintEx(
            0x92u,
            3u,
            "\n"
            "Battery Status [%p]\n"
            "|-- PowerState = 0x%08x\n"
            "|-- Capacity   = %u\n"
            "|-- Voltage    = %u\n"
            "|-- Rate       = %d\n"
            "|-- Est Time   = %u\n",
            v20 - 64,
            Timeout,
            v132,
            v133,
            v134,
            v135);
        }
        else
        {
          *(_DWORD *)(v20 + 40) = 2;
          PopBatteryQueueWork(1u);
        }
        v20 = *(_QWORD *)v20;
      }
      while ( (__int64 *)v20 != &qword_140F0AAD0 );
      v5 = v145;
      LOBYTE(v9) = v147;
      v143 = v0;
    }
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline()
      && v5
      && (unsigned int)(*(_DWORD *)(v5 + 128) - 1) <= 1 )
    {
      if ( v1 )
      {
        _m_prefetchw(&PopPowerAdapterRecOverride);
        v25 = _InterlockedOr8(&PopPowerAdapterRecOverride, 0);
        if ( v25 != *(_BYTE *)(v5 + 216) )
        {
          v26 = *(_DWORD *)(v5 + 180);
          if ( v25 )
            v27 = v26 | 4;
          else
            v27 = v26 & 0xFFFFFFFB;
          *(_DWORD *)(v5 + 180) = v27;
          v148 = 0;
          v28 = (v27 & 4) == 0;
          v29 = *(IRP **)(v5 + 56);
          *(_WORD *)((char *)&v148 + 1) = !v28;
          PopPrepareIoctl(v29, 0x294074u, 0, (struct _IRP *)&v148, 4u, 0);
          v30 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(v5 + 48), *(IRP **)(v5 + 56));
          if ( v30 >= 0 )
          {
            *(_DWORD *)(v5 + 128) = 1;
            *(_BYTE *)(v5 + 216) = v25;
          }
          else
          {
            PopPowerAdapterTraceFailure((_DWORD *)v5, 3, v30);
          }
        }
      }
      else
      {
        v31 = *(__m128i *)(v5 + 176);
        v32 = *(_OWORD *)(v5 + 192);
        v33 = *(_QWORD *)(v5 + 208);
        v179 = v31;
        v180 = v32;
        v181 = v33;
        Status = PopPowerAdapterQueryStatus(v5, 1);
        if ( Status >= 0 )
        {
          v0 = (unsigned __int8)v0;
          *(_DWORD *)(v5 + 128) = 1;
          v35 = *(_DWORD *)(v5 + 140);
          if ( ((*(_BYTE *)(v5 + 180) ^ (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v31, 4))) & 1) != 0 )
            v0 = 1;
          v143 = v0;
          if ( (v35 & 1) != 0 )
          {
            v36 = *(_OWORD *)(v5 + 192);
            v175[0] = *(_OWORD *)(v5 + 176);
            v176 = *(_QWORD *)(v5 + 208);
            v175[1] = v36;
            v177[0] = v31;
            v177[1] = v32;
            v178 = v33;
            PopPowerAdapterPublishRecState((__int64)v177, (LARGE_INTEGER *)v175);
          }
        }
        else
        {
          PopPowerAdapterTraceFailure((_DWORD *)v5, 4, Status);
        }
      }
    }
    if ( v10 )
    {
      PopBatteryUpdateCompositeInformation();
      LOBYTE(v0) = 1;
      PopMaxChargeRate = 0LL;
      v143 = v0;
    }
    if ( (v9 & 4) != 0 || (_BYTE)v0 )
    {
      if ( PopEstimateSpoilerMask )
      {
        PopEstimateSpoiledUntilTime = -1LL;
        KeCancelTimer(&stru_140F07BC0);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KiSetTimerEx((__int64)&stru_140F07BC0, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
      }
    }
    v37 = 0;
    v158 = 0;
    v154 = 0;
    v38 = 0x80000000;
    v147 = -1;
    v167 = -1;
    v155 = -1LL;
    v151 = 0x80000000;
    v157 = 0LL;
    v156 = 0x80000000;
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
    {
      v39 = -1;
      *(_QWORD *)((char *)&v157 + 4) = -1LL;
      v40 = -1;
      v41 = -1;
      HIDWORD(v157) = -1;
      v37 = -1;
      v158 = -1;
    }
    else
    {
      v41 = HIDWORD(v157);
      v39 = DWORD2(v157);
      v40 = DWORD1(v157);
    }
    v160 = -1LL;
    v42 = 0;
    v161 = -1LL;
    v149 = v39;
    v150 = 0;
    v142 = -1;
    if ( dword_140F0AAB4 )
    {
      v44 = qword_140F0AAD0;
      v43 = v154;
      if ( (__int64 *)qword_140F0AAD0 != &qword_140F0AAD0 )
      {
        v45 = v167;
        do
        {
          v46 = *(_DWORD *)(v44 + 84);
          v47 = v46 & 0xE7 | 8;
          if ( (v46 & 0xA) != 0xA )
            v47 = *(_DWORD *)(v44 + 84) & 0xE7;
          v48 = 0;
          if ( (v43 & 0x10) == 0 && (v46 & 0x11) == 0x11 )
            v48 = 16;
          v49 = v46 & 0x10;
          if ( (v46 & 1) != 0 )
            v50 = v49 != 0 ? 2 : 8;
          else
            v50 = v49 != 0 ? 1 : 4;
          v51 = v50 | v42;
          v52 = *(_DWORD *)(v44 + 88);
          v43 = v47 | v48 ^ v43;
          v150 = v51;
          if ( v52 != -1 )
          {
            if ( v45 == -1 )
              v45 = 0;
            v45 += v52;
            LODWORD(v155) = v45;
          }
          v53 = *(_DWORD *)(v44 + 92);
          if ( v53 != -1 )
          {
            v54 = v147;
            if ( v147 == -1 )
              v54 = 0;
            if ( v53 > v54 )
              v54 = *(_DWORD *)(v44 + 92);
            v147 = v54;
            HIDWORD(v155) = v54;
          }
          v55 = *(_DWORD *)(v44 + 96);
          if ( v55 != 0x80000000 )
          {
            if ( v38 == 0x80000000 )
              v38 = 0;
            v38 += v55;
            v156 = v38;
          }
          if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
          {
            v56 = *(_DWORD *)(v44 + 92);
            if ( v56 != -1 )
            {
              v57 = *(_DWORD *)(v44 + 96);
              if ( v57 != 0x80000000 )
              {
                v58 = v151;
                if ( v151 == 0x80000000 )
                  v58 = 0;
                if ( v56 )
                  v59 = (int)(1000 * v57 + (v56 >> 1)) / (int)v56;
                else
                  v59 = 0;
                v151 = v59 + v58;
              }
            }
            v60 = *(_DWORD *)(v44 + 104);
            if ( v60 != -1 )
            {
              if ( v40 == -1 )
                v40 = 0;
              v40 += v60;
              DWORD1(v157) = v40;
            }
            v61 = *(_DWORD *)(v44 + 112);
            if ( v61 != -1 )
            {
              if ( v41 == -1 )
                v41 = 0;
              v41 += v61;
              HIDWORD(v157) = v41;
            }
            if ( *(_DWORD *)(v44 + 108) != -1 )
            {
              v62 = v149;
              if ( v149 == -1 )
                v62 = *(_DWORD *)(v44 + 108);
              v149 = v62;
              DWORD2(v157) = v62;
            }
            if ( *(_DWORD *)(v44 + 116) != -1 )
            {
              if ( v37 == -1 )
                v37 = *(_DWORD *)(v44 + 116);
              v158 = v37;
            }
          }
          v44 = *(_QWORD *)v44;
          v42 = v150;
        }
        while ( (__int64 *)v44 != &qword_140F0AAD0 );
        v5 = v145;
        v154 = v43;
      }
      v1 = 0;
      if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline()
        && v5
        && *(_DWORD *)(v5 + 128) == 1 )
      {
        if ( (*(_DWORD *)(v5 + 180) & 1) != 0 )
          v43 |= 1u;
        else
          v43 &= ~1u;
        v154 = v43;
      }
      if ( (v43 & 2) != 0 )
      {
        v43 &= ~4u;
        v154 = v43;
      }
      if ( (v43 & 1) != 0 )
      {
        if ( (v43 & 4) != 0 )
          v160 = PopEstimateChargeTime();
      }
      else if ( (unsigned int)Feature_DisableRemoteBatteryEstimationRegkey__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !PopDisableBatteryDischargeEstimator )
        {
          v70 = qword_140F0AAD0;
          v71 = 0;
          if ( (__int64 *)qword_140F0AAD0 != &qword_140F0AAD0 )
          {
            do
            {
              v72 = *(_DWORD *)(v70 + 120);
              if ( v72 - 1 <= 0xFFFFFFFD )
                v71 -= 3600 * *(_DWORD *)(v70 + 88) / v72;
              v70 = *(_QWORD *)v70;
            }
            while ( (__int64 *)v70 != &qword_140F0AAD0 );
            if ( v71 )
            {
              v73 = (__int64 *)qword_140F0AAD0;
              v67 = v142;
              do
              {
                v74 = PopBatteryQueryEstimatedTime((__int64)(v73 - 8), v71);
                if ( v74 != -1 )
                {
                  v75 = 0;
                  if ( v67 != -1 )
                    v75 = v67;
                  v67 = v74 + v75;
                }
                v73 = (__int64 *)*v73;
              }
              while ( v73 != &qword_140F0AAD0 );
              goto LABEL_166;
            }
          }
        }
      }
      else
      {
        v63 = qword_140F0AAD0;
        v64 = 0;
        if ( (__int64 *)qword_140F0AAD0 != &qword_140F0AAD0 )
        {
          do
          {
            v65 = *(_DWORD *)(v63 + 120);
            if ( v65 - 1 <= 0xFFFFFFFD )
              v64 -= 3600 * *(_DWORD *)(v63 + 88) / v65;
            v63 = *(_QWORD *)v63;
          }
          while ( (__int64 *)v63 != &qword_140F0AAD0 );
          if ( v64 )
          {
            v66 = (__int64 *)qword_140F0AAD0;
            v67 = v142;
            do
            {
              v68 = PopBatteryQueryEstimatedTime((__int64)(v66 - 8), v64);
              if ( v68 != -1 )
              {
                v69 = 0;
                if ( v67 != -1 )
                  v69 = v67;
                v67 = v68 + v69;
              }
              v66 = (__int64 *)*v66;
            }
            while ( v66 != &qword_140F0AAD0 );
LABEL_166:
            v142 = v67;
            v5 = v145;
          }
        }
      }
    }
    else
    {
      LOBYTE(v43) = 1;
      v154 = 1;
      if ( v140 == 3 )
      {
        v1 = 0;
        if ( (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
          v140 = 1;
      }
      else
      {
        v1 = 0;
      }
    }
    v76 = v43 & 1;
    if ( v140 == 2 && !v76 || v140 == 3 && v76 )
      v140 = 1;
    v77 = v43 & 0x10;
    if ( (xmmword_140F0AAE0 & 0x10) != v77 )
    {
      LODWORD(v133) = 0;
      LODWORD(v132) = 0;
      Timeout = 0LL;
      v136 = v77 != 0;
      v162 = v77 != 0;
      updated = ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_CHARGE_LIMITING_MODE, (__int64)&v136);
      PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_CHARGE_LIMITING_MODE, 4u, (__int64)&v162);
      if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
      {
        v233 = &v139;
        v80 = "DC + BCL";
        v169 = v79;
        v235 = &v168;
        v139 = v136;
        if ( (v150 & 1) == 0 )
          v80 = "-";
        v237 = &v169;
        v234 = 1LL;
        v168 = updated;
        v236 = 4LL;
        v238 = 4LL;
        tlgCreate1Sz_char((__int64)v239, v80);
        v83 = "AC + BCL";
        if ( (v82 & 2) == 0 )
          v83 = v81;
        tlgCreate1Sz_char((__int64)v240, v83);
        v86 = "DC + !BCL";
        if ( (v85 & 4) == 0 )
          v86 = v84;
        tlgCreate1Sz_char((__int64)v241, v86);
        v89 = "AC + !BCL";
        if ( (v88 & 8) == 0 )
          v89 = v87;
        tlgCreate1Sz_char((__int64)v242, v89);
        v173 = 0x1000000LL;
        v243 = &v173;
        v244 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)byte_14004B7D0,
          0LL,
          0LL,
          0xAu,
          &v232);
      }
    }
    if ( (v43 & 0x20) != 0 )
      v90 = ((v43 & 0x40) != 0) + 1;
    else
      v90 = 0;
    if ( (_DWORD)qword_140F0AC94 == v90 )
    {
      v91 = v159;
    }
    else
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock);
      LODWORD(qword_140F0AC94) = v90;
      PopWeakChargerNotificationBatteryMiniport = v90;
      PopReleaseRwLock(&PopWeakChargerLock);
      v91 = v159 | 2;
      v138 = 1;
    }
    v92 = v142;
    v93 = PopBatteryApplyCompositeState((__int64)&v154, v142, v151);
    v94 = v138;
    if ( v93 )
      v94 = 1;
    v95 = v91 | 4;
    if ( !v93 )
      v95 = v91;
    if ( v94 )
    {
      if ( (unsigned int)Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline() )
        PopEvaluateWeakChargerStateV1(v76, v95);
      else
        PopEvaluateWeakChargerState(v76, v95);
    }
    _InterlockedAnd(&PopBatteryWorkRequests, 0xFFFFFFDF);
    qword_140F0ACA0 = MEMORY[0xFFFFF78000000008];
    _InterlockedOr(v130, 0);
    if ( qword_140F0ACA8 )
      ExfUnblockPushLock((__int64)&qword_140F0ACA8, 0LL);
    if ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) == 0x80000000 )
      break;
    v0 = v143;
  }
  for ( k = (__int64 *)qword_140F0AAD0; k != &qword_140F0AAD0; k = (__int64 *)*k )
    PopBatteryQueryStatus((__int64)(k - 8), 0);
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline()
    && v5
    && (unsigned int)(*(_DWORD *)(v5 + 128) - 1) <= 1 )
  {
    PopPowerAdapterQueryStatus(v5, 0);
  }
  if ( !PopUserBatteryChargingEstimator )
  {
    LODWORD(v133) = 0;
    LODWORD(v132) = 0;
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_CHARGE_ESTIMATE, (__int64)&v160);
  }
  if ( PopDisableBatteryDischargeEstimator )
  {
    v98 = v137;
  }
  else
  {
    v97 = PopBatteryEstimatesSpoiled();
    v98 = v97;
    if ( (_DWORD)v92 != -1 && !v97 )
      v161 = v92;
    LODWORD(v133) = 0;
    LODWORD(v132) = 0;
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISCHARGE_ESTIMATE, (__int64)&v161);
  }
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    v144 = PopUserBatteryChargingEstimator;
    v190 = 8LL;
    v188 = 4LL;
    v187 = &v144;
    v145 = v160;
    v189 = &v145;
    v141 = PopDisableBatteryDischargeEstimator;
    v191 = &v141;
    v193 = &v152;
    v153 = v161;
    v195 = &v153;
    v197 = &v137;
    v192 = 4LL;
    v152 = v92;
    v194 = 4LL;
    v196 = 8LL;
    v137 = v98;
    v198 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07680,
      (unsigned __int8 *)&byte_14004B87F,
      0LL,
      0LL,
      8u,
      &v186);
  }
  v99 = v143;
  LOBYTE(v146) = v143 | v146;
  if ( (_BYTE)v146 )
  {
    *(_DWORD *)v184 = dword_140F0AB28;
    v182 = unk_140F0AB08;
    v185 = dword_140F0AAB0;
    LODWORD(v133) = 0;
    LODWORD(v132) = 0;
    *(_OWORD *)&v184[4] = xmmword_140F0AAE0;
    *(_DWORD *)&v184[20] = dword_140F0AAB4;
    v183 = *(_OWORD *)((char *)&qword_140F0AB14 + 4);
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_COMPOSITE_BATTERY, (__int64)&v182);
    if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
    {
      v100 = "AC Power";
      v200 = &v152;
      v152 = dword_140F0AAB4;
      v201 = 4LL;
      if ( (xmmword_140F0AAE0 & 1) == 0 )
        v100 = "DC Power";
      tlgCreate1Sz_char((__int64)v202, v100);
      v102 = "Battery Discharging";
      if ( (v101 & 2) == 0 )
        v102 = "-";
      tlgCreate1Sz_char((__int64)v203, v102);
      v105 = "Battery Charging";
      if ( (v104 & 4) == 0 )
        v105 = v103;
      tlgCreate1Sz_char((__int64)v204, v105);
      v108 = "Battery Critical";
      if ( (v107 & 8) == 0 )
        v108 = v106;
      tlgCreate1Sz_char((__int64)v205, v108);
      v110 = "Battery charge limiting mode";
      if ( (v111 & 0x10) == 0 )
        v110 = v109;
      tlgCreate1Sz_char((__int64)v206, v110);
      v114 = "Battery charging state power supply present";
      if ( (v113 & 0x20) == 0 )
        v114 = v112;
      tlgCreate1Sz_char((__int64)v207, v114);
      v117 = "Battery charging state adequate";
      if ( (v116 & 0x40) == 0 )
        v117 = v115;
      tlgCreate1Sz_char((__int64)v208, v117);
      v119 = "Battery trip point supported";
      if ( v120 >= 0 )
        v119 = v118;
      tlgCreate1Sz_char((__int64)v209, v119);
      v122 = "Platform BCL Enabled";
      if ( (byte_140F0AD38 & 1) == 0 )
        v122 = v121;
      tlgCreate1Sz_char((__int64)v210, v122);
      if ( HIDWORD(qword_140F0AB14) )
        v124 = (unsigned int)((HIDWORD(qword_140F0AB14) >> 1) + 100 * DWORD1(xmmword_140F0AAE0))
             / HIDWORD(qword_140F0AB14);
      else
        v124 = 0;
      v144 = v124;
      v211 = &v144;
      v212 = 4LL;
      if ( HIDWORD(qword_140F0AB14) )
        v125 = 100000 * (unsigned __int64)DWORD1(xmmword_140F0AAE0) / HIDWORD(qword_140F0AB14);
      else
        LODWORD(v125) = 0;
      v126 = "Relative Capacity Unit";
      v141 = v125;
      v214 = 4LL;
      v213 = &v141;
      v171 = DWORD1(xmmword_140F0AAE0);
      v215 = &v171;
      v217 = &v166;
      v163 = *((_QWORD *)&xmmword_140F0AAE0 + 1);
      v219 = &v163;
      v221 = (char *)&v163 + 4;
      v164 = dword_140F0AAB0;
      v223 = &v164;
      v225 = &v165;
      if ( (unk_140F0AB08 & 0x40000000) == 0 )
        v126 = "mWh Unit";
      v216 = 4LL;
      v166 = HIDWORD(qword_140F0AB14);
      v218 = 4LL;
      v220 = 4LL;
      v222 = 4LL;
      v224 = 4LL;
      v165 = v123;
      v226 = 4LL;
      tlgCreate1Sz_char((__int64)v227, v126);
      v228 = &v153;
      LODWORD(v153) = qword_140F0AB14;
      v230 = &v145;
      LODWORD(v145) = v127;
      v229 = 4LL;
      v231 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)&byte_14004B92F,
        0LL,
        0LL,
        0x17u,
        &v199);
    }
    if ( v140 == 1 )
    {
      if ( v76 )
        v172 = 0LL;
      else
        v172 = MEMORY[0xFFFFF78000000014];
      LODWORD(v133) = 0;
      LODWORD(v132) = 0;
      Timeout = 0LL;
      ZwUpdateWnfStateData((__int64)&WNF_PO_DISCHARGE_START_FILETIME, (__int64)&v172);
    }
    if ( v99 )
    {
      LODWORD(v133) = 0;
      v170 = 0xFFFFFFFF00000000uLL;
      LODWORD(v132) = 0;
      Timeout = 0LL;
      v128 = ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_STATE_CHANGE, (__int64)&v170);
      if ( (unsigned int)dword_140E07680 > 5 )
      {
        LODWORD(v145) = v128;
        v247 = 4LL;
        v246 = &v145;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)byte_14004BBA0,
          0LL,
          0LL,
          3u,
          &v245);
      }
    }
  }
  PopReleaseRwLock((signed __int64 *)&PopCB);
  return PopReleaseRwLock(&PopPolicyDeviceLock);
}
