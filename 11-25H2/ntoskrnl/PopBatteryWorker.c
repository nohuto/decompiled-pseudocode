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
  ULONG v0; // r13d
  bool v1; // r12
  NTSTATUS v2; // eax
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
  NTSTATUS updated; // r14d
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
  NTSTATUS v128; // eax
  signed __int32 v130[8]; // [rsp+8h] [rbp-100h] BYREF
  PVOID Buffer; // [rsp+28h] [rbp-E0h]
  PULONG BufferSize; // [rsp+30h] [rbp-D8h]
  __int64 CheckStamp; // [rsp+38h] [rbp-D0h]
  __int64 v134; // [rsp+40h] [rbp-C8h]
  __int64 v135; // [rsp+48h] [rbp-C0h]
  bool v136; // [rsp+58h] [rbp-B0h] BYREF
  char v137; // [rsp+59h] [rbp-AFh] BYREF
  bool v138; // [rsp+5Ah] [rbp-AEh]
  bool v139; // [rsp+5Bh] [rbp-ADh] BYREF
  int v140; // [rsp+5Ch] [rbp-ACh]
  ULONG v141; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v142; // [rsp+64h] [rbp-A4h]
  ULONG ChangeStamp[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v144; // [rsp+70h] [rbp-98h] BYREF
  int v145; // [rsp+78h] [rbp-90h]
  int v146; // [rsp+7Ch] [rbp-8Ch]
  int v147; // [rsp+80h] [rbp-88h] BYREF
  int v148; // [rsp+84h] [rbp-84h]
  int v149; // [rsp+88h] [rbp-80h]
  int v150; // [rsp+8Ch] [rbp-7Ch]
  int v151; // [rsp+90h] [rbp-78h] BYREF
  __int64 v152; // [rsp+98h] [rbp-70h] BYREF
  int v153; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v154; // [rsp+A4h] [rbp-64h]
  unsigned int v155; // [rsp+ACh] [rbp-5Ch]
  __int128 v156; // [rsp+B0h] [rbp-58h]
  int v157; // [rsp+C0h] [rbp-48h]
  BOOL v158; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v159; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v160; // [rsp+D8h] [rbp-30h] BYREF
  BOOL v161; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v162; // [rsp+E4h] [rbp-24h] BYREF
  int v163; // [rsp+ECh] [rbp-1Ch] BYREF
  int v164; // [rsp+F0h] [rbp-18h] BYREF
  int v165; // [rsp+F4h] [rbp-14h] BYREF
  int v166; // [rsp+F8h] [rbp-10h]
  NTSTATUS v167; // [rsp+FCh] [rbp-Ch] BYREF
  int v168; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 v169; // [rsp+108h] [rbp+0h] BYREF
  int v170; // [rsp+110h] [rbp+8h] BYREF
  __int64 v171; // [rsp+118h] [rbp+10h] BYREF
  __int64 v172; // [rsp+120h] [rbp+18h] BYREF
  __int128 v173; // [rsp+128h] [rbp+20h]
  _OWORD v174[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v175; // [rsp+158h] [rbp+50h]
  _OWORD v176[2]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v177; // [rsp+188h] [rbp+80h]
  __m128i v178; // [rsp+198h] [rbp+90h]
  __int128 v179; // [rsp+1A8h] [rbp+A0h]
  __int64 v180; // [rsp+1B8h] [rbp+B0h]
  __int128 v181; // [rsp+1C0h] [rbp+B8h] BYREF
  __int128 v182; // [rsp+1D0h] [rbp+C8h]
  _BYTE v183[24]; // [rsp+1E0h] [rbp+D8h] BYREF
  int v184; // [rsp+1F8h] [rbp+F0h]
  struct _EVENT_DATA_DESCRIPTOR v185; // [rsp+208h] [rbp+100h] BYREF
  ULONG *v186; // [rsp+228h] [rbp+120h]
  __int64 v187; // [rsp+230h] [rbp+128h]
  __int64 *v188; // [rsp+238h] [rbp+130h]
  __int64 v189; // [rsp+240h] [rbp+138h]
  ULONG *v190; // [rsp+248h] [rbp+140h]
  __int64 v191; // [rsp+250h] [rbp+148h]
  int *v192; // [rsp+258h] [rbp+150h]
  __int64 v193; // [rsp+260h] [rbp+158h]
  __int64 *v194; // [rsp+268h] [rbp+160h]
  __int64 v195; // [rsp+270h] [rbp+168h]
  char *v196; // [rsp+278h] [rbp+170h]
  __int64 v197; // [rsp+280h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v198; // [rsp+288h] [rbp+180h] BYREF
  int *v199; // [rsp+2A8h] [rbp+1A0h]
  __int64 v200; // [rsp+2B0h] [rbp+1A8h]
  char v201[16]; // [rsp+2B8h] [rbp+1B0h] BYREF
  char v202[16]; // [rsp+2C8h] [rbp+1C0h] BYREF
  char v203[16]; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v204[16]; // [rsp+2E8h] [rbp+1E0h] BYREF
  char v205[16]; // [rsp+2F8h] [rbp+1F0h] BYREF
  char v206[16]; // [rsp+308h] [rbp+200h] BYREF
  char v207[16]; // [rsp+318h] [rbp+210h] BYREF
  char v208[16]; // [rsp+328h] [rbp+220h] BYREF
  char v209[16]; // [rsp+338h] [rbp+230h] BYREF
  ULONG *v210; // [rsp+348h] [rbp+240h]
  __int64 v211; // [rsp+350h] [rbp+248h]
  ULONG *v212; // [rsp+358h] [rbp+250h]
  __int64 v213; // [rsp+360h] [rbp+258h]
  int *v214; // [rsp+368h] [rbp+260h]
  __int64 v215; // [rsp+370h] [rbp+268h]
  int *v216; // [rsp+378h] [rbp+270h]
  __int64 v217; // [rsp+380h] [rbp+278h]
  __int64 *v218; // [rsp+388h] [rbp+280h]
  __int64 v219; // [rsp+390h] [rbp+288h]
  char *v220; // [rsp+398h] [rbp+290h]
  __int64 v221; // [rsp+3A0h] [rbp+298h]
  int *v222; // [rsp+3A8h] [rbp+2A0h]
  __int64 v223; // [rsp+3B0h] [rbp+2A8h]
  int *v224; // [rsp+3B8h] [rbp+2B0h]
  __int64 v225; // [rsp+3C0h] [rbp+2B8h]
  char v226[16]; // [rsp+3C8h] [rbp+2C0h] BYREF
  __int64 *v227; // [rsp+3D8h] [rbp+2D0h]
  __int64 v228; // [rsp+3E0h] [rbp+2D8h]
  __int64 *v229; // [rsp+3E8h] [rbp+2E0h]
  __int64 v230; // [rsp+3F0h] [rbp+2E8h]
  struct _EVENT_DATA_DESCRIPTOR v231; // [rsp+3F8h] [rbp+2F0h] BYREF
  bool *v232; // [rsp+418h] [rbp+310h]
  __int64 v233; // [rsp+420h] [rbp+318h]
  NTSTATUS *v234; // [rsp+428h] [rbp+320h]
  __int64 v235; // [rsp+430h] [rbp+328h]
  int *v236; // [rsp+438h] [rbp+330h]
  __int64 v237; // [rsp+440h] [rbp+338h]
  char v238[16]; // [rsp+448h] [rbp+340h] BYREF
  char v239[16]; // [rsp+458h] [rbp+350h] BYREF
  char v240[16]; // [rsp+468h] [rbp+360h] BYREF
  char v241[16]; // [rsp+478h] [rbp+370h] BYREF
  __int64 *v242; // [rsp+488h] [rbp+380h]
  __int64 v243; // [rsp+490h] [rbp+388h]
  struct _EVENT_DATA_DESCRIPTOR v244; // [rsp+498h] [rbp+390h] BYREF
  __int64 *v245; // [rsp+4B8h] [rbp+3B0h]
  __int64 v246; // [rsp+4C0h] [rbp+3B8h]

  v1 = 0;
  v159 = 0LL;
  v160 = 0LL;
  v169 = 0LL;
  v136 = 0;
  v181 = 0LL;
  v182 = 0LL;
  v184 = 0;
  memset(v183, 0, sizeof(v183));
  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
  v152 = 0LL;
  ChangeStamp[1] = 0;
  v141 = 8;
  v2 = ZwQueryWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL, &ChangeStamp[1], &v152, &v141);
  if ( v2 == -1073741670 || v2 == -1073741431 )
  {
    v140 = 0;
  }
  else if ( v2 || v141 != 8 )
  {
    v140 = 1;
  }
  else
  {
    v140 = (v152 != 0) + 2;
  }
  IsEnabledDeviceUsageNoInline = Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline();
  v4 = (__int64 *)qword_140F0AAD0;
  v5 = qword_140F0AD50 & -(__int64)(IsEnabledDeviceUsageNoInline != 0);
  v144 = v5;
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
  ChangeStamp[0] = v0;
  for ( LOBYTE(v8) = 0; ; LOBYTE(v8) = v145 )
  {
    v8 = (unsigned __int8)v8;
    v9 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v146 = v9;
    v10 = (v9 & 2) != 0;
    if ( (v9 & 8) != 0 )
      v8 = 1;
    v145 = v8;
    if ( (v9 & 0x10) != 0 )
    {
      PopAcquirePolicyLock(16LL, v7);
      PopResetCBTriggers(0x80u);
      PopReleasePolicyLock(v12, v11, v13, v14, Buffer);
    }
    v138 = (v9 & 0x40) != 0;
    v158 = v138;
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
        v173 = *(_OWORD *)(v20 + 84);
        if ( PopBatteryQueryStatus(v20 - 64, 1) >= 0 )
        {
          PopAccountBatteryEnergyChange(v20 - 64);
          v21 = *(_DWORD *)(v20 + 84);
          if ( (((unsigned __int8)v173 ^ *(_BYTE *)(v20 + 84)) & 7) != 0 )
          {
            LOBYTE(v0) = 1;
          }
          else if ( DWORD1(v173) != *(_DWORD *)(v20 + 88) || HIDWORD(v173) != *(_DWORD *)(v20 + 96) )
          {
            LOBYTE(v145) = 1;
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
          LODWORD(CheckStamp) = *(_DWORD *)(v20 + 92);
          LODWORD(BufferSize) = *(_DWORD *)(v20 + 88);
          LODWORD(Buffer) = *(_DWORD *)(v20 + 84);
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
            Buffer,
            BufferSize,
            CheckStamp,
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
      v5 = v144;
      LOBYTE(v9) = v146;
      ChangeStamp[0] = v0;
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
          v147 = 0;
          v28 = (v27 & 4) == 0;
          v29 = *(IRP **)(v5 + 56);
          *(_WORD *)((char *)&v147 + 1) = !v28;
          PopPrepareIoctl(v29, 0x294074u, 0, (struct _IRP *)&v147, 4u, 0);
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
        v178 = v31;
        v179 = v32;
        v180 = v33;
        Status = PopPowerAdapterQueryStatus(v5, 1);
        if ( Status >= 0 )
        {
          v0 = (unsigned __int8)v0;
          *(_DWORD *)(v5 + 128) = 1;
          v35 = *(_DWORD *)(v5 + 140);
          if ( ((*(_BYTE *)(v5 + 180) ^ (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v31, 4))) & 1) != 0 )
            v0 = 1;
          ChangeStamp[0] = v0;
          if ( (v35 & 1) != 0 )
          {
            v36 = *(_OWORD *)(v5 + 192);
            v174[0] = *(_OWORD *)(v5 + 176);
            v175 = *(_QWORD *)(v5 + 208);
            v174[1] = v36;
            v176[0] = v31;
            v176[1] = v32;
            v177 = v33;
            PopPowerAdapterPublishRecState((__int64)v176, (LARGE_INTEGER *)v174);
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
      ChangeStamp[0] = v0;
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
    v157 = 0;
    v153 = 0;
    v38 = 0x80000000;
    v146 = -1;
    v166 = -1;
    v154 = -1LL;
    v150 = 0x80000000;
    v156 = 0LL;
    v155 = 0x80000000;
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
    {
      v39 = -1;
      *(_QWORD *)((char *)&v156 + 4) = -1LL;
      v40 = -1;
      v41 = -1;
      HIDWORD(v156) = -1;
      v37 = -1;
      v157 = -1;
    }
    else
    {
      v41 = HIDWORD(v156);
      v39 = DWORD2(v156);
      v40 = DWORD1(v156);
    }
    v159 = -1LL;
    v42 = 0;
    v160 = -1LL;
    v148 = v39;
    v149 = 0;
    v142 = -1;
    if ( dword_140F0AAB4 )
    {
      v44 = qword_140F0AAD0;
      v43 = v153;
      if ( (__int64 *)qword_140F0AAD0 != &qword_140F0AAD0 )
      {
        v45 = v166;
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
          v149 = v51;
          if ( v52 != -1 )
          {
            if ( v45 == -1 )
              v45 = 0;
            v45 += v52;
            LODWORD(v154) = v45;
          }
          v53 = *(_DWORD *)(v44 + 92);
          if ( v53 != -1 )
          {
            v54 = v146;
            if ( v146 == -1 )
              v54 = 0;
            if ( v53 > v54 )
              v54 = *(_DWORD *)(v44 + 92);
            v146 = v54;
            HIDWORD(v154) = v54;
          }
          v55 = *(_DWORD *)(v44 + 96);
          if ( v55 != 0x80000000 )
          {
            if ( v38 == 0x80000000 )
              v38 = 0;
            v38 += v55;
            v155 = v38;
          }
          if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
          {
            v56 = *(_DWORD *)(v44 + 92);
            if ( v56 != -1 )
            {
              v57 = *(_DWORD *)(v44 + 96);
              if ( v57 != 0x80000000 )
              {
                v58 = v150;
                if ( v150 == 0x80000000 )
                  v58 = 0;
                if ( v56 )
                  v59 = (int)(1000 * v57 + (v56 >> 1)) / (int)v56;
                else
                  v59 = 0;
                v150 = v59 + v58;
              }
            }
            v60 = *(_DWORD *)(v44 + 104);
            if ( v60 != -1 )
            {
              if ( v40 == -1 )
                v40 = 0;
              v40 += v60;
              DWORD1(v156) = v40;
            }
            v61 = *(_DWORD *)(v44 + 112);
            if ( v61 != -1 )
            {
              if ( v41 == -1 )
                v41 = 0;
              v41 += v61;
              HIDWORD(v156) = v41;
            }
            if ( *(_DWORD *)(v44 + 108) != -1 )
            {
              v62 = v148;
              if ( v148 == -1 )
                v62 = *(_DWORD *)(v44 + 108);
              v148 = v62;
              DWORD2(v156) = v62;
            }
            if ( *(_DWORD *)(v44 + 116) != -1 )
            {
              if ( v37 == -1 )
                v37 = *(_DWORD *)(v44 + 116);
              v157 = v37;
            }
          }
          v44 = *(_QWORD *)v44;
          v42 = v149;
        }
        while ( (__int64 *)v44 != &qword_140F0AAD0 );
        v5 = v144;
        v153 = v43;
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
        v153 = v43;
      }
      if ( (v43 & 2) != 0 )
      {
        v43 &= ~4u;
        v153 = v43;
      }
      if ( (v43 & 1) != 0 )
      {
        if ( (v43 & 4) != 0 )
          v159 = PopEstimateChargeTime();
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
            v5 = v144;
          }
        }
      }
    }
    else
    {
      LOBYTE(v43) = 1;
      v153 = 1;
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
      v136 = v77 != 0;
      v161 = v77 != 0;
      updated = ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LIMITING_MODE, &v136, 1u, 0LL, 0LL, 0, 0);
      PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_CHARGE_LIMITING_MODE, 4u, (__int64)&v161);
      if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
      {
        v232 = &v139;
        v80 = "DC + BCL";
        v168 = v79;
        v234 = &v167;
        v139 = v136;
        if ( (v149 & 1) == 0 )
          v80 = "-";
        v236 = &v168;
        v233 = 1LL;
        v167 = updated;
        v235 = 4LL;
        v237 = 4LL;
        tlgCreate1Sz_char((__int64)v238, v80);
        v83 = "AC + BCL";
        if ( (v82 & 2) == 0 )
          v83 = v81;
        tlgCreate1Sz_char((__int64)v239, v83);
        v86 = "DC + !BCL";
        if ( (v85 & 4) == 0 )
          v86 = v84;
        tlgCreate1Sz_char((__int64)v240, v86);
        v89 = "AC + !BCL";
        if ( (v88 & 8) == 0 )
          v89 = v87;
        tlgCreate1Sz_char((__int64)v241, v89);
        v172 = 0x1000000LL;
        v242 = &v172;
        v243 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)byte_14004B7D0,
          0LL,
          0LL,
          0xAu,
          &v231);
      }
    }
    if ( (v43 & 0x20) != 0 )
      v90 = ((v43 & 0x40) != 0) + 1;
    else
      v90 = 0;
    if ( (_DWORD)qword_140F0AC94 == v90 )
    {
      v91 = v158;
    }
    else
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock);
      LODWORD(qword_140F0AC94) = v90;
      PopWeakChargerNotificationBatteryMiniport = v90;
      PopReleaseRwLock(&PopWeakChargerLock);
      v91 = v158 | 2;
      v138 = 1;
    }
    v92 = v142;
    v93 = PopBatteryApplyCompositeState((__int64)&v153, v142, v150);
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
    v0 = ChangeStamp[0];
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
    ZwUpdateWnfStateData(&WNF_PO_CHARGE_ESTIMATE, &v159, 8u, 0LL, 0LL, 0, 0);
  if ( PopDisableBatteryDischargeEstimator )
  {
    v98 = v137;
  }
  else
  {
    v97 = PopBatteryEstimatesSpoiled();
    v98 = v97;
    if ( (_DWORD)v92 != -1 && !v97 )
      v160 = v92;
    ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_ESTIMATE, &v160, 8u, 0LL, 0LL, 0, 0);
  }
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    ChangeStamp[1] = PopUserBatteryChargingEstimator;
    v189 = 8LL;
    v187 = 4LL;
    v186 = &ChangeStamp[1];
    v144 = v159;
    v188 = &v144;
    v141 = PopDisableBatteryDischargeEstimator;
    v190 = &v141;
    v192 = &v151;
    v152 = v160;
    v194 = &v152;
    v196 = &v137;
    v191 = 4LL;
    v151 = v92;
    v193 = 4LL;
    v195 = 8LL;
    v137 = v98;
    v197 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07680,
      (unsigned __int8 *)&byte_14004B87F,
      0LL,
      0LL,
      8u,
      &v185);
  }
  v99 = ChangeStamp[0];
  LOBYTE(v145) = LOBYTE(ChangeStamp[0]) | v145;
  if ( (_BYTE)v145 )
  {
    *(_DWORD *)v183 = dword_140F0AB28;
    v181 = unk_140F0AB08;
    v184 = dword_140F0AAB0;
    *(_OWORD *)&v183[4] = xmmword_140F0AAE0;
    *(_DWORD *)&v183[20] = dword_140F0AAB4;
    v182 = *(_OWORD *)((char *)&qword_140F0AB14 + 4);
    ZwUpdateWnfStateData(&WNF_PO_COMPOSITE_BATTERY, &v181, 0x3Cu, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
    {
      v100 = "AC Power";
      v199 = &v151;
      v151 = dword_140F0AAB4;
      v200 = 4LL;
      if ( (xmmword_140F0AAE0 & 1) == 0 )
        v100 = "DC Power";
      tlgCreate1Sz_char((__int64)v201, v100);
      v102 = "Battery Discharging";
      if ( (v101 & 2) == 0 )
        v102 = "-";
      tlgCreate1Sz_char((__int64)v202, v102);
      v105 = "Battery Charging";
      if ( (v104 & 4) == 0 )
        v105 = v103;
      tlgCreate1Sz_char((__int64)v203, v105);
      v108 = "Battery Critical";
      if ( (v107 & 8) == 0 )
        v108 = v106;
      tlgCreate1Sz_char((__int64)v204, v108);
      v110 = "Battery charge limiting mode";
      if ( (v111 & 0x10) == 0 )
        v110 = v109;
      tlgCreate1Sz_char((__int64)v205, v110);
      v114 = "Battery charging state power supply present";
      if ( (v113 & 0x20) == 0 )
        v114 = v112;
      tlgCreate1Sz_char((__int64)v206, v114);
      v117 = "Battery charging state adequate";
      if ( (v116 & 0x40) == 0 )
        v117 = v115;
      tlgCreate1Sz_char((__int64)v207, v117);
      v119 = "Battery trip point supported";
      if ( v120 >= 0 )
        v119 = v118;
      tlgCreate1Sz_char((__int64)v208, v119);
      v122 = "Platform BCL Enabled";
      if ( (byte_140F0AD38 & 1) == 0 )
        v122 = v121;
      tlgCreate1Sz_char((__int64)v209, v122);
      if ( HIDWORD(qword_140F0AB14) )
        v124 = (unsigned int)((HIDWORD(qword_140F0AB14) >> 1) + 100 * DWORD1(xmmword_140F0AAE0))
             / HIDWORD(qword_140F0AB14);
      else
        v124 = 0;
      ChangeStamp[1] = v124;
      v210 = &ChangeStamp[1];
      v211 = 4LL;
      if ( HIDWORD(qword_140F0AB14) )
        v125 = 100000 * (unsigned __int64)DWORD1(xmmword_140F0AAE0) / HIDWORD(qword_140F0AB14);
      else
        LODWORD(v125) = 0;
      v126 = "Relative Capacity Unit";
      v141 = v125;
      v213 = 4LL;
      v212 = &v141;
      v170 = DWORD1(xmmword_140F0AAE0);
      v214 = &v170;
      v216 = &v165;
      v162 = *((_QWORD *)&xmmword_140F0AAE0 + 1);
      v218 = &v162;
      v220 = (char *)&v162 + 4;
      v163 = dword_140F0AAB0;
      v222 = &v163;
      v224 = &v164;
      if ( (unk_140F0AB08 & 0x40000000) == 0 )
        v126 = "mWh Unit";
      v215 = 4LL;
      v165 = HIDWORD(qword_140F0AB14);
      v217 = 4LL;
      v219 = 4LL;
      v221 = 4LL;
      v223 = 4LL;
      v164 = v123;
      v225 = 4LL;
      tlgCreate1Sz_char((__int64)v226, v126);
      v227 = &v152;
      LODWORD(v152) = qword_140F0AB14;
      v229 = &v144;
      LODWORD(v144) = v127;
      v228 = 4LL;
      v230 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)&byte_14004B92F,
        0LL,
        0LL,
        0x17u,
        &v198);
    }
    if ( v140 == 1 )
    {
      if ( v76 )
        v171 = 0LL;
      else
        v171 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, &v171, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v99 )
    {
      v169 = 0xFFFFFFFF00000000uLL;
      v128 = ZwUpdateWnfStateData(&WNF_PO_POWER_STATE_CHANGE, &v169, 8u, 0LL, 0LL, 0, 0);
      if ( (unsigned int)dword_140E07680 > 5 )
      {
        LODWORD(v144) = v128;
        v246 = 4LL;
        v245 = &v144;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)byte_14004BBA0,
          0LL,
          0LL,
          3u,
          &v244);
      }
    }
  }
  PopReleaseRwLock((signed __int64 *)&PopCB);
  return PopReleaseRwLock(&PopPolicyDeviceLock);
}
