/*
 * XREFs of PopBatteryWorker @ 0x140AC5DB0
 * Callers:
 *     <none>
 * Callees:
 *     IoSynchronousCallDriver @ 0x14025D510 (IoSynchronousCallDriver.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     PopBatteryQueueWork @ 0x14049F07C (PopBatteryQueueWork.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F6FAC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline @ 0x1405D5270 (Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1406AA1B0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PopBatteryQueryStatus @ 0x1407594B4 (PopBatteryQueryStatus.c)
 *     PopEvaluateWeakChargerStateV1 @ 0x140759DB0 (PopEvaluateWeakChargerStateV1.c)
 *     PopPowerAdapterPublishRecState @ 0x14075A5D4 (PopPowerAdapterPublishRecState.c)
 *     PopPowerAdapterQueryStatus @ 0x14075A84C (PopPowerAdapterQueryStatus.c)
 *     PopPowerAdapterTraceFailure @ 0x14075AEC8 (PopPowerAdapterTraceFailure.c)
 *     PopResetCBTriggers @ 0x14075B008 (PopResetCBTriggers.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409A2DCC (PopSetPowerSettingValueAcDc.c)
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 *     PopPrepareIoctl @ 0x140A54F18 (PopPrepareIoctl.c)
 *     PopBatteryUpdateCompositeInformation @ 0x140A61AE8 (PopBatteryUpdateCompositeInformation.c)
 *     PopEvaluateWeakChargerState @ 0x140A67028 (PopEvaluateWeakChargerState.c)
 *     PopBatteryQueryEstimatedTime @ 0x140A7CB50 (PopBatteryQueryEstimatedTime.c)
 *     PopEstimateChargeTime @ 0x140A7D338 (PopEstimateChargeTime.c)
 *     PopBatteryEstimatesSpoiled @ 0x140A7D4C4 (PopBatteryEstimatesSpoiled.c)
 *     PopAccountBatteryEnergyChange @ 0x140A95B84 (PopAccountBatteryEnergyChange.c)
 *     PopBatteryReadTag @ 0x140AA8E2C (PopBatteryReadTag.c)
 *     PopBatteryWaitTag @ 0x140AB4CB0 (PopBatteryWaitTag.c)
 *     PopBatteryInitialize @ 0x140AC5B8C (PopBatteryInitialize.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopBatteryWorker()
{
  int v0; // r13d
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
  int v43; // esi
  __int64 v44; // rdi
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
  __int64 *v66; // rdi
  unsigned int v67; // ebx
  int v68; // eax
  unsigned int v69; // ecx
  char v70; // r14
  int v71; // ecx
  NTSTATUS updated; // edi
  int v73; // r8d
  const CHAR *v74; // rdx
  const CHAR *v75; // r9
  char v76; // r8
  const CHAR *v77; // rdx
  const CHAR *v78; // r9
  char v79; // r8
  const CHAR *v80; // rdx
  const CHAR *v81; // r9
  char v82; // r8
  const CHAR *v83; // rdx
  int v84; // edi
  __int16 v85; // r15
  __int64 v86; // rsi
  char v87; // al
  char v88; // cl
  __int16 v89; // di
  __int64 *k; // rdi
  char v91; // al
  char v92; // bl
  char v93; // bl
  const CHAR *v94; // rdx
  char v95; // r8
  const CHAR *v96; // rdx
  const CHAR *v97; // r11
  char v98; // r8
  const CHAR *v99; // rdx
  const CHAR *v100; // r11
  char v101; // r8
  const CHAR *v102; // rdx
  const CHAR *v103; // r11
  const CHAR *v104; // rdx
  char v105; // r8
  const CHAR *v106; // r11
  char v107; // r8
  const CHAR *v108; // rdx
  const CHAR *v109; // r11
  char v110; // r8
  const CHAR *v111; // rdx
  const CHAR *v112; // r11
  const CHAR *v113; // rdx
  char v114; // r8
  const CHAR *v115; // r11
  const CHAR *v116; // rdx
  int v117; // r10d
  ULONG v118; // eax
  unsigned __int64 v119; // rax
  const CHAR *v120; // rdx
  int v121; // r9d
  NTSTATUS v122; // eax
  signed __int32 v124[8]; // [rsp+8h] [rbp-100h] BYREF
  PVOID Buffer; // [rsp+28h] [rbp-E0h]
  PULONG BufferSize; // [rsp+30h] [rbp-D8h]
  __int64 CheckStamp; // [rsp+38h] [rbp-D0h]
  __int64 v128; // [rsp+40h] [rbp-C8h]
  __int64 v129; // [rsp+48h] [rbp-C0h]
  bool v130; // [rsp+58h] [rbp-B0h] BYREF
  char v131; // [rsp+59h] [rbp-AFh] BYREF
  bool v132; // [rsp+5Ah] [rbp-AEh]
  bool v133; // [rsp+5Bh] [rbp-ADh] BYREF
  int v134; // [rsp+5Ch] [rbp-ACh]
  int v135; // [rsp+60h] [rbp-A8h]
  ULONG v136; // [rsp+64h] [rbp-A4h] BYREF
  int v137; // [rsp+68h] [rbp-A0h]
  ULONG ChangeStamp; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v139; // [rsp+70h] [rbp-98h]
  int v140; // [rsp+74h] [rbp-94h]
  __int64 v141; // [rsp+78h] [rbp-90h] BYREF
  int v142; // [rsp+80h] [rbp-88h] BYREF
  int v143; // [rsp+84h] [rbp-84h]
  int v144; // [rsp+88h] [rbp-80h]
  unsigned int v145; // [rsp+8Ch] [rbp-7Ch]
  int v146; // [rsp+90h] [rbp-78h] BYREF
  __int64 v147; // [rsp+98h] [rbp-70h] BYREF
  BOOL v148; // [rsp+A0h] [rbp-68h]
  int v149; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v150; // [rsp+ACh] [rbp-5Ch]
  unsigned int v151; // [rsp+B4h] [rbp-54h]
  __int128 v152; // [rsp+B8h] [rbp-50h]
  int v153; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v154; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v155; // [rsp+D8h] [rbp-30h] BYREF
  BOOL v156; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v157; // [rsp+E4h] [rbp-24h] BYREF
  int v158; // [rsp+ECh] [rbp-1Ch] BYREF
  int v159; // [rsp+F0h] [rbp-18h] BYREF
  int v160; // [rsp+F4h] [rbp-14h] BYREF
  int v161; // [rsp+F8h] [rbp-10h]
  NTSTATUS v162; // [rsp+FCh] [rbp-Ch] BYREF
  int v163; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 v164; // [rsp+108h] [rbp+0h] BYREF
  int v165; // [rsp+110h] [rbp+8h] BYREF
  __int64 v166; // [rsp+118h] [rbp+10h] BYREF
  __int64 v167; // [rsp+120h] [rbp+18h] BYREF
  __int128 v168; // [rsp+128h] [rbp+20h]
  _OWORD v169[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v170; // [rsp+158h] [rbp+50h]
  _OWORD v171[2]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v172; // [rsp+188h] [rbp+80h]
  __m128i v173; // [rsp+198h] [rbp+90h]
  __int128 v174; // [rsp+1A8h] [rbp+A0h]
  __int64 v175; // [rsp+1B8h] [rbp+B0h]
  __int128 v176; // [rsp+1C0h] [rbp+B8h] BYREF
  __int128 v177; // [rsp+1D0h] [rbp+C8h]
  _BYTE v178[24]; // [rsp+1E0h] [rbp+D8h] BYREF
  int v179; // [rsp+1F8h] [rbp+F0h]
  struct _EVENT_DATA_DESCRIPTOR v180; // [rsp+208h] [rbp+100h] BYREF
  ULONG *p_ChangeStamp; // [rsp+228h] [rbp+120h]
  __int64 v182; // [rsp+230h] [rbp+128h]
  __int64 *v183; // [rsp+238h] [rbp+130h]
  __int64 v184; // [rsp+240h] [rbp+138h]
  ULONG *v185; // [rsp+248h] [rbp+140h]
  __int64 v186; // [rsp+250h] [rbp+148h]
  int *v187; // [rsp+258h] [rbp+150h]
  __int64 v188; // [rsp+260h] [rbp+158h]
  __int64 *v189; // [rsp+268h] [rbp+160h]
  __int64 v190; // [rsp+270h] [rbp+168h]
  char *v191; // [rsp+278h] [rbp+170h]
  __int64 v192; // [rsp+280h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v193; // [rsp+288h] [rbp+180h] BYREF
  int *v194; // [rsp+2A8h] [rbp+1A0h]
  __int64 v195; // [rsp+2B0h] [rbp+1A8h]
  char v196[16]; // [rsp+2B8h] [rbp+1B0h] BYREF
  char v197[16]; // [rsp+2C8h] [rbp+1C0h] BYREF
  char v198[16]; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v199[16]; // [rsp+2E8h] [rbp+1E0h] BYREF
  char v200[16]; // [rsp+2F8h] [rbp+1F0h] BYREF
  char v201[16]; // [rsp+308h] [rbp+200h] BYREF
  char v202[16]; // [rsp+318h] [rbp+210h] BYREF
  char v203[16]; // [rsp+328h] [rbp+220h] BYREF
  char v204[16]; // [rsp+338h] [rbp+230h] BYREF
  ULONG *v205; // [rsp+348h] [rbp+240h]
  __int64 v206; // [rsp+350h] [rbp+248h]
  ULONG *v207; // [rsp+358h] [rbp+250h]
  __int64 v208; // [rsp+360h] [rbp+258h]
  int *v209; // [rsp+368h] [rbp+260h]
  __int64 v210; // [rsp+370h] [rbp+268h]
  int *v211; // [rsp+378h] [rbp+270h]
  __int64 v212; // [rsp+380h] [rbp+278h]
  __int64 *v213; // [rsp+388h] [rbp+280h]
  __int64 v214; // [rsp+390h] [rbp+288h]
  char *v215; // [rsp+398h] [rbp+290h]
  __int64 v216; // [rsp+3A0h] [rbp+298h]
  int *v217; // [rsp+3A8h] [rbp+2A0h]
  __int64 v218; // [rsp+3B0h] [rbp+2A8h]
  int *v219; // [rsp+3B8h] [rbp+2B0h]
  __int64 v220; // [rsp+3C0h] [rbp+2B8h]
  char v221[16]; // [rsp+3C8h] [rbp+2C0h] BYREF
  __int64 *v222; // [rsp+3D8h] [rbp+2D0h]
  __int64 v223; // [rsp+3E0h] [rbp+2D8h]
  __int64 *v224; // [rsp+3E8h] [rbp+2E0h]
  __int64 v225; // [rsp+3F0h] [rbp+2E8h]
  struct _EVENT_DATA_DESCRIPTOR v226; // [rsp+3F8h] [rbp+2F0h] BYREF
  bool *v227; // [rsp+418h] [rbp+310h]
  __int64 v228; // [rsp+420h] [rbp+318h]
  NTSTATUS *v229; // [rsp+428h] [rbp+320h]
  __int64 v230; // [rsp+430h] [rbp+328h]
  int *v231; // [rsp+438h] [rbp+330h]
  __int64 v232; // [rsp+440h] [rbp+338h]
  char v233[16]; // [rsp+448h] [rbp+340h] BYREF
  char v234[16]; // [rsp+458h] [rbp+350h] BYREF
  char v235[16]; // [rsp+468h] [rbp+360h] BYREF
  char v236[16]; // [rsp+478h] [rbp+370h] BYREF
  __int64 *v237; // [rsp+488h] [rbp+380h]
  __int64 v238; // [rsp+490h] [rbp+388h]
  struct _EVENT_DATA_DESCRIPTOR v239; // [rsp+498h] [rbp+390h] BYREF
  __int64 *v240; // [rsp+4B8h] [rbp+3B0h]
  __int64 v241; // [rsp+4C0h] [rbp+3B8h]

  v1 = 0;
  v154 = 0LL;
  v155 = 0LL;
  v164 = 0LL;
  v130 = 0;
  v176 = 0LL;
  v177 = 0LL;
  v179 = 0;
  memset(v178, 0, sizeof(v178));
  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
  v147 = 0LL;
  ChangeStamp = 0;
  v136 = 8;
  v2 = ZwQueryWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL, &ChangeStamp, &v147, &v136);
  if ( v2 == -1073741670 || v2 == -1073741431 )
  {
    v134 = 0;
  }
  else if ( v2 || v136 != 8 )
  {
    v134 = 1;
  }
  else
  {
    v134 = (v147 != 0) + 2;
  }
  IsEnabledDeviceUsageNoInline = Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline();
  v4 = (__int64 *)qword_140F0BCB0;
  v5 = qword_140F0BF30 & -(__int64)(IsEnabledDeviceUsageNoInline != 0);
  v141 = v5;
  while ( v4 != &qword_140F0BCB0 )
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
  for ( i = (__int64 *)qword_140F0BCB0; i != &qword_140F0BCB0; i = (__int64 *)*i )
    KeWaitForSingleObject(i + 2, Executive, 0, 0, 0LL);
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline()
    && v5
    && (unsigned int)(*(_DWORD *)(v5 + 128) - 1) <= 1 )
  {
    KeWaitForSingleObject((PVOID)(v5 + 104), Executive, 0, 0, 0LL);
  }
  LOBYTE(v0) = 0;
  v131 = 0;
  v137 = v0;
  for ( LOBYTE(v8) = 0; ; LOBYTE(v8) = v139 )
  {
    v8 = (unsigned __int8)v8;
    v9 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v140 = v9;
    v10 = (v9 & 2) != 0;
    if ( (v9 & 8) != 0 )
      v8 = 1;
    v139 = v8;
    if ( (v9 & 0x10) != 0 )
    {
      PopAcquirePolicyLock(16LL, v7);
      PopResetCBTriggers(0x80u);
      PopReleasePolicyLock(v12, v11, v13, v14, Buffer);
    }
    v132 = (v9 & 0x40) != 0;
    v148 = v132;
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline()
      && (v9 & 0x80u) != 0
      && v5
      && (unsigned int)(*(_DWORD *)(v5 + 128) - 1) <= 1 )
    {
      v1 = (*(_BYTE *)(v5 + 140) & 1) != 0;
    }
    v15 = qword_140F0BCB0;
    if ( (__int64 *)qword_140F0BCB0 != &qword_140F0BCB0 )
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
          ++dword_140F0BD0C;
          --dword_140F0BC94;
          byte_140F0BC98 = 1;
          if ( (int)PopBatteryReadTag(v15 - 64) < 0 )
            PopBatteryWaitTag(v17);
          v10 = 1;
        }
        v15 = (__int64)v16;
      }
      while ( v16 != &qword_140F0BCB0 );
    }
    for ( j = qword_140F0BCA0; (__int64 *)j != &qword_140F0BCA0; j = *(_QWORD *)j )
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
    v20 = qword_140F0BCB0;
    if ( (__int64 *)qword_140F0BCB0 != &qword_140F0BCB0 )
    {
      do
      {
        v168 = *(_OWORD *)(v20 + 84);
        if ( PopBatteryQueryStatus(v20 - 64, 1) >= 0 )
        {
          PopAccountBatteryEnergyChange(v20 - 64);
          v21 = *(_DWORD *)(v20 + 84);
          if ( (((unsigned __int8)v168 ^ *(_BYTE *)(v20 + 84)) & 7) != 0 )
          {
            LOBYTE(v0) = 1;
          }
          else if ( DWORD1(v168) != *(_DWORD *)(v20 + 88) || HIDWORD(v168) != *(_DWORD *)(v20 + 96) )
          {
            LOBYTE(v139) = 1;
          }
          EstimatedTime = -1;
          if ( (v21 & 2) != 0 )
            EstimatedTime = PopBatteryQueryEstimatedTime(v20 - 64, 0);
          *(_DWORD *)(v20 + 120) = EstimatedTime;
          v23 = 0;
          if ( EstimatedTime != -1 )
            v23 = EstimatedTime;
          v24 = *(_DWORD *)(v20 + 96);
          LODWORD(v129) = v23;
          LODWORD(v128) = v24;
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
            v128,
            v129);
        }
        else
        {
          *(_DWORD *)(v20 + 40) = 2;
          PopBatteryQueueWork(1u);
        }
        v20 = *(_QWORD *)v20;
      }
      while ( (__int64 *)v20 != &qword_140F0BCB0 );
      v5 = v141;
      LOBYTE(v9) = v140;
      v137 = v0;
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
          v142 = 0;
          v28 = (v27 & 4) == 0;
          v29 = *(IRP **)(v5 + 56);
          *(_WORD *)((char *)&v142 + 1) = !v28;
          PopPrepareIoctl(v29, 0x294074u, 0, (struct _IRP *)&v142, 4u, 0);
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
        v173 = v31;
        v174 = v32;
        v175 = v33;
        Status = PopPowerAdapterQueryStatus(v5, 1);
        if ( Status >= 0 )
        {
          v0 = (unsigned __int8)v0;
          *(_DWORD *)(v5 + 128) = 1;
          v35 = *(_DWORD *)(v5 + 140);
          if ( ((*(_BYTE *)(v5 + 180) ^ (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v31, 4))) & 1) != 0 )
            v0 = 1;
          v137 = v0;
          if ( (v35 & 1) != 0 )
          {
            v36 = *(_OWORD *)(v5 + 192);
            v169[0] = *(_OWORD *)(v5 + 176);
            v170 = *(_QWORD *)(v5 + 208);
            v169[1] = v36;
            v171[0] = v31;
            v171[1] = v32;
            v172 = v33;
            PopPowerAdapterPublishRecState((__int64)v171, (LARGE_INTEGER *)v169);
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
      v137 = v0;
    }
    if ( (v9 & 4) != 0 || (_BYTE)v0 )
    {
      if ( PopEstimateSpoilerMask )
      {
        PopEstimateSpoiledUntilTime = -1LL;
        KeCancelTimer(&stru_140F085A0);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KiSetTimerEx((__int64)&stru_140F085A0, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
      }
    }
    v37 = 0;
    v153 = 0;
    v149 = 0;
    v38 = 0x80000000;
    v140 = -1;
    v161 = -1;
    v150 = -1LL;
    v144 = 0x80000000;
    v152 = 0LL;
    v151 = 0x80000000;
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
    {
      v39 = -1;
      *(_QWORD *)((char *)&v152 + 4) = -1LL;
      v40 = -1;
      v41 = -1;
      HIDWORD(v152) = -1;
      v37 = -1;
      v153 = -1;
    }
    else
    {
      v41 = HIDWORD(v152);
      v39 = DWORD2(v152);
      v40 = DWORD1(v152);
    }
    v154 = -1LL;
    v42 = 0;
    v155 = -1LL;
    v135 = v39;
    v143 = 0;
    v145 = -1;
    if ( dword_140F0BC94 )
    {
      v44 = qword_140F0BCB0;
      v43 = v149;
      if ( (__int64 *)qword_140F0BCB0 != &qword_140F0BCB0 )
      {
        v45 = v161;
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
          v143 = v51;
          v149 = v43;
          if ( v52 != -1 )
          {
            if ( v45 == -1 )
              v45 = 0;
            v45 += v52;
            LODWORD(v150) = v45;
          }
          v53 = *(_DWORD *)(v44 + 92);
          if ( v53 != -1 )
          {
            v54 = v140;
            if ( v140 == -1 )
              v54 = 0;
            if ( v53 > v54 )
              v54 = *(_DWORD *)(v44 + 92);
            v140 = v54;
            HIDWORD(v150) = v54;
          }
          v55 = *(_DWORD *)(v44 + 96);
          if ( v55 != 0x80000000 )
          {
            if ( v38 == 0x80000000 )
              v38 = 0;
            v38 += v55;
            v151 = v38;
          }
          if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
          {
            v56 = *(_DWORD *)(v44 + 92);
            if ( v56 != -1 )
            {
              v57 = *(_DWORD *)(v44 + 96);
              if ( v57 != 0x80000000 )
              {
                v58 = v144;
                if ( v144 == 0x80000000 )
                  v58 = 0;
                if ( v56 )
                  v59 = (int)(1000 * v57 + (v56 >> 1)) / (int)v56;
                else
                  v59 = 0;
                v144 = v59 + v58;
              }
            }
            v60 = *(_DWORD *)(v44 + 104);
            if ( v60 != -1 )
            {
              if ( v40 == -1 )
                v40 = 0;
              v40 += v60;
              DWORD1(v152) = v40;
            }
            v61 = *(_DWORD *)(v44 + 112);
            if ( v61 != -1 )
            {
              if ( v41 == -1 )
                v41 = 0;
              v41 += v61;
              HIDWORD(v152) = v41;
            }
            if ( *(_DWORD *)(v44 + 108) != -1 )
            {
              v62 = v135;
              if ( v135 == -1 )
                v62 = *(_DWORD *)(v44 + 108);
              v135 = v62;
              DWORD2(v152) = v62;
            }
            if ( *(_DWORD *)(v44 + 116) != -1 )
            {
              if ( v37 == -1 )
                v37 = *(_DWORD *)(v44 + 116);
              v153 = v37;
            }
          }
          v44 = *(_QWORD *)v44;
          v42 = v143;
        }
        while ( (__int64 *)v44 != &qword_140F0BCB0 );
        v5 = v141;
      }
      v135 = v43;
      if ( (v43 & 2) != 0 )
      {
        v43 &= ~4u;
        v135 = v43;
        v149 = v43;
      }
      if ( (v43 & 1) != 0 )
      {
        if ( (v43 & 4) != 0 )
          v154 = PopEstimateChargeTime();
LABEL_162:
        v1 = 0;
        goto LABEL_163;
      }
      v1 = 0;
      if ( !PopDisableBatteryDischargeEstimator )
      {
        v63 = qword_140F0BCB0;
        v64 = 0;
        if ( (__int64 *)qword_140F0BCB0 != &qword_140F0BCB0 )
        {
          do
          {
            v65 = *(_DWORD *)(v63 + 120);
            if ( v65 - 1 <= 0xFFFFFFFD )
              v64 -= 3600 * *(_DWORD *)(v63 + 88) / v65;
            v63 = *(_QWORD *)v63;
          }
          while ( (__int64 *)v63 != &qword_140F0BCB0 );
          if ( v64 )
          {
            v66 = (__int64 *)qword_140F0BCB0;
            v67 = v145;
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
            while ( v66 != &qword_140F0BCB0 );
            LOBYTE(v43) = v135;
            v145 = v67;
            v5 = v141;
          }
        }
      }
    }
    else
    {
      LOBYTE(v43) = 1;
      v149 = 1;
      if ( v134 != 3 )
        goto LABEL_162;
      v1 = 0;
      if ( (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v134 = 1;
    }
LABEL_163:
    v70 = v43 & 1;
    if ( v134 == 2 && !v70 || v134 == 3 && v70 )
      v134 = 1;
    v71 = v43 & 0x10;
    if ( (xmmword_140F0BCC0 & 0x10) != v71 )
    {
      v130 = v71 != 0;
      v156 = v71 != 0;
      updated = ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LIMITING_MODE, &v130, 1u, 0LL, 0LL, 0, 0);
      PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_CHARGE_LIMITING_MODE, 4u, (__int64)&v156);
      if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
      {
        v227 = &v133;
        v74 = "DC + BCL";
        v163 = v73;
        v229 = &v162;
        v133 = v130;
        if ( (v143 & 1) == 0 )
          v74 = "-";
        v231 = &v163;
        v228 = 1LL;
        v162 = updated;
        v230 = 4LL;
        v232 = 4LL;
        tlgCreate1Sz_char((__int64)v233, v74);
        v77 = "AC + BCL";
        if ( (v76 & 2) == 0 )
          v77 = v75;
        tlgCreate1Sz_char((__int64)v234, v77);
        v80 = "DC + !BCL";
        if ( (v79 & 4) == 0 )
          v80 = v78;
        tlgCreate1Sz_char((__int64)v235, v80);
        v83 = "AC + !BCL";
        if ( (v82 & 8) == 0 )
          v83 = v81;
        tlgCreate1Sz_char((__int64)v236, v83);
        v167 = 0x1000000LL;
        v237 = &v167;
        v238 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)&word_14004CAAE,
          0LL,
          0LL,
          0xAu,
          &v226);
      }
    }
    if ( (v43 & 0x20) != 0 )
      v84 = ((v43 & 0x40) != 0) + 1;
    else
      v84 = 0;
    if ( (_DWORD)qword_140F0BE74 == v84 )
    {
      v85 = v148;
    }
    else
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock);
      LODWORD(qword_140F0BE74) = v84;
      PopWeakChargerNotificationBatteryMiniport = v84;
      PopReleaseRwLock(&PopWeakChargerLock);
      v85 = v148 | 2;
      v132 = 1;
    }
    v86 = v145;
    v87 = PopBatteryApplyCompositeState((__int64)&v149, v145, v144);
    v88 = v132;
    if ( v87 )
      v88 = 1;
    v89 = v85 | 4;
    if ( !v87 )
      v89 = v85;
    if ( v88 )
    {
      if ( (unsigned int)Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline() )
        PopEvaluateWeakChargerStateV1(v70, v89);
      else
        PopEvaluateWeakChargerState(v70, v89);
    }
    _InterlockedAnd(&PopBatteryWorkRequests, 0xFFFFFFDF);
    qword_140F0BE80 = MEMORY[0xFFFFF78000000008];
    _InterlockedOr(v124, 0);
    if ( qword_140F0BE88 )
      ExfUnblockPushLock((__int64)&qword_140F0BE88, 0LL);
    if ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) == 0x80000000 )
      break;
    v0 = v137;
  }
  for ( k = (__int64 *)qword_140F0BCB0; k != &qword_140F0BCB0; k = (__int64 *)*k )
    PopBatteryQueryStatus((__int64)(k - 8), 0);
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline()
    && v5
    && (unsigned int)(*(_DWORD *)(v5 + 128) - 1) <= 1 )
  {
    PopPowerAdapterQueryStatus(v5, 0);
  }
  if ( !PopUserBatteryChargingEstimator )
    ZwUpdateWnfStateData(&WNF_PO_CHARGE_ESTIMATE, &v154, 8u, 0LL, 0LL, 0, 0);
  if ( PopDisableBatteryDischargeEstimator )
  {
    v92 = v131;
  }
  else
  {
    v91 = PopBatteryEstimatesSpoiled();
    v92 = v91;
    if ( (_DWORD)v86 != -1 && !v91 )
      v155 = v86;
    ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_ESTIMATE, &v155, 8u, 0LL, 0LL, 0, 0);
  }
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    ChangeStamp = PopUserBatteryChargingEstimator;
    v184 = 8LL;
    v182 = 4LL;
    p_ChangeStamp = &ChangeStamp;
    v141 = v154;
    v183 = &v141;
    v136 = PopDisableBatteryDischargeEstimator;
    v185 = &v136;
    v187 = &v146;
    v147 = v155;
    v189 = &v147;
    v191 = &v131;
    v186 = 4LL;
    v146 = v86;
    v188 = 4LL;
    v190 = 8LL;
    v131 = v92;
    v192 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07680,
      (unsigned __int8 *)&word_14004C6EE,
      0LL,
      0LL,
      8u,
      &v180);
  }
  v93 = v137;
  LOBYTE(v139) = v137 | v139;
  if ( (_BYTE)v139 )
  {
    *(_DWORD *)v178 = dword_140F0BD08;
    v176 = unk_140F0BCE8;
    v179 = dword_140F0BC90;
    *(_OWORD *)&v178[4] = xmmword_140F0BCC0;
    *(_DWORD *)&v178[20] = dword_140F0BC94;
    v177 = *(_OWORD *)((char *)&qword_140F0BCF4 + 4);
    ZwUpdateWnfStateData(&WNF_PO_COMPOSITE_BATTERY, &v176, 0x3Cu, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
    {
      v94 = "AC Power";
      v194 = &v146;
      v146 = dword_140F0BC94;
      v195 = 4LL;
      if ( (xmmword_140F0BCC0 & 1) == 0 )
        v94 = "DC Power";
      tlgCreate1Sz_char((__int64)v196, v94);
      v96 = "Battery Discharging";
      if ( (v95 & 2) == 0 )
        v96 = "-";
      tlgCreate1Sz_char((__int64)v197, v96);
      v99 = "Battery Charging";
      if ( (v98 & 4) == 0 )
        v99 = v97;
      tlgCreate1Sz_char((__int64)v198, v99);
      v102 = "Battery Critical";
      if ( (v101 & 8) == 0 )
        v102 = v100;
      tlgCreate1Sz_char((__int64)v199, v102);
      v104 = "Battery charge limiting mode";
      if ( (v105 & 0x10) == 0 )
        v104 = v103;
      tlgCreate1Sz_char((__int64)v200, v104);
      v108 = "Battery charging state power supply present";
      if ( (v107 & 0x20) == 0 )
        v108 = v106;
      tlgCreate1Sz_char((__int64)v201, v108);
      v111 = "Battery charging state adequate";
      if ( (v110 & 0x40) == 0 )
        v111 = v109;
      tlgCreate1Sz_char((__int64)v202, v111);
      v113 = "Battery trip point supported";
      if ( v114 >= 0 )
        v113 = v112;
      tlgCreate1Sz_char((__int64)v203, v113);
      v116 = "Platform BCL Enabled";
      if ( (byte_140F0BF18 & 1) == 0 )
        v116 = v115;
      tlgCreate1Sz_char((__int64)v204, v116);
      if ( HIDWORD(qword_140F0BCF4) )
        v118 = (unsigned int)((HIDWORD(qword_140F0BCF4) >> 1) + 100 * DWORD1(xmmword_140F0BCC0))
             / HIDWORD(qword_140F0BCF4);
      else
        v118 = 0;
      ChangeStamp = v118;
      v205 = &ChangeStamp;
      v206 = 4LL;
      if ( HIDWORD(qword_140F0BCF4) )
        v119 = 100000 * (unsigned __int64)DWORD1(xmmword_140F0BCC0) / HIDWORD(qword_140F0BCF4);
      else
        LODWORD(v119) = 0;
      v120 = "Relative Capacity Unit";
      v136 = v119;
      v208 = 4LL;
      v207 = &v136;
      v165 = DWORD1(xmmword_140F0BCC0);
      v209 = &v165;
      v211 = &v160;
      v157 = *((_QWORD *)&xmmword_140F0BCC0 + 1);
      v213 = &v157;
      v215 = (char *)&v157 + 4;
      v158 = dword_140F0BC90;
      v217 = &v158;
      v219 = &v159;
      if ( (unk_140F0BCE8 & 0x40000000) == 0 )
        v120 = "mWh Unit";
      v210 = 4LL;
      v160 = HIDWORD(qword_140F0BCF4);
      v212 = 4LL;
      v214 = 4LL;
      v216 = 4LL;
      v218 = 4LL;
      v159 = v117;
      v220 = 4LL;
      tlgCreate1Sz_char((__int64)v221, v120);
      v222 = &v147;
      LODWORD(v147) = qword_140F0BCF4;
      v224 = &v141;
      LODWORD(v141) = v121;
      v223 = 4LL;
      v225 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)&word_14004C79E,
        0LL,
        0LL,
        0x17u,
        &v193);
    }
    if ( v134 == 1 )
    {
      if ( v70 )
        v166 = 0LL;
      else
        v166 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, &v166, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v93 )
    {
      v164 = 0xFFFFFFFF00000000uLL;
      v122 = ZwUpdateWnfStateData(&WNF_PO_POWER_STATE_CHANGE, &v164, 8u, 0LL, 0LL, 0, 0);
      if ( (unsigned int)dword_140E07680 > 5 )
      {
        LODWORD(v141) = v122;
        v241 = 4LL;
        v240 = &v141;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)byte_14004C9BB,
          0LL,
          0LL,
          3u,
          &v239);
      }
    }
  }
  PopReleaseRwLock((signed __int64 *)&PopCB);
  return PopReleaseRwLock(&PopPolicyDeviceLock);
}
