/*
 * XREFs of RaidUnitCompleteRequest @ 0x14001F490
 * Callers:
 *     RaidCheckPerProcessorCompletions @ 0x14001F090 (RaidCheckPerProcessorCompletions.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x14001F240 (RaidpAdapterRedirectDpcRoutine.c)
 * Callees:
 *     StorpTelemetryCollectPerfData @ 0x14000B4A0 (StorpTelemetryCollectPerfData.c)
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAdapterRestartQueues @ 0x14000FD00 (RaidAdapterRestartQueues.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidLogRequestComplete @ 0x14001512C (RaidLogRequestComplete.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x14001BDD0 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidStartNextIoPacket @ 0x140021350 (RaidStartNextIoPacket.c)
 *     StorpTelemetryCollectErrorData @ 0x1400220F0 (StorpTelemetryCollectErrorData.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140022C5C (McTemplateK0dud_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuussssx_EtwWriteTransfer @ 0x1400241BC (McTemplateK0zqjuuussssx_EtwWriteTransfer.c)
 *     StorUnmapSenseInfo @ 0x140025620 (StorUnmapSenseInfo.c)
 *     IsZonedWriteRequest @ 0x140025E10 (IsZonedWriteRequest.c)
 *     RaUnitAsyncError @ 0x140029460 (RaUnitAsyncError.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x140032C14 (RaidIsUnresponsiveBlockedCmd.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x14003F518 (StorEtwLogoRequestServiceTimeEventData.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x14003F900 (StorEtwIORequestServiceTimeEventData.c)
 *     StorRemoveIoGatewayItem @ 0x140050F10 (StorRemoveIoGatewayItem.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x140053848 (McTemplateK0zx_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x140055F58 (RaidAdapterReleaseCryptoKeyResources.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidReleaseNvmeIceKeyResources @ 0x14006AB70 (RaidReleaseNvmeIceKeyResources.c)
 *     GetZoneCountFromUnit @ 0x14006CDBC (GetZoneCountFromUnit.c)
 *     Feature_SteelixLbaSizeFix__private_IsEnabledDeviceUsageNoInline @ 0x140090490 (Feature_SteelixLbaSizeFix__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0zqjuuussss_EtwWriteTransfer @ 0x140090D28 (McTemplateK0zqjuuussss_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuussssxq_EtwWriteTransfer @ 0x1400910B8 (McTemplateK0zqjuuussssxq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuussssxx_EtwWriteTransfer @ 0x1400912A4 (McTemplateK0zqjuuussssxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaidUnitCompleteRequest(_QWORD *a1)
{
  _QWORD *v1; // rdi
  IRP *v2; // rcx
  int v3; // r13d
  union _LARGE_INTEGER v4; // r12
  char v5; // al
  __int64 v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // r9d
  __int64 v9; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rbx
  int *v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rbx
  char *v15; // rdi
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v17; // rcx
  char v18; // al
  int v19; // r9d
  __int64 *v20; // rcx
  __int64 *v21; // r8
  __int64 **v22; // rax
  __int64 *v23; // rcx
  __int64 *v24; // rdx
  __int64 **v25; // rax
  char v26; // al
  int v27; // r9d
  __int64 *v28; // rcx
  __int64 *v29; // r8
  __int64 **v30; // rax
  __int64 *v31; // rcx
  __int64 *v32; // rdx
  __int64 **v33; // rax
  __int64 v34; // rsi
  int v35; // edx
  int v36; // ecx
  int v37; // r9d
  unsigned __int8 *v38; // r15
  unsigned int v39; // r11d
  unsigned int i; // r10d
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // r8
  int v45; // ecx
  int v46; // ecx
  unsigned __int64 v47; // rcx
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rdx
  char v51; // al
  char v52; // bl
  unsigned int v53; // r11d
  _BYTE *v54; // rsi
  unsigned __int8 v55; // r15
  char v56; // di
  unsigned int v57; // r11d
  __int64 v58; // r10
  __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  __int64 v61; // r9
  __int64 v62; // r8
  int v63; // ecx
  int v64; // ecx
  unsigned __int64 v65; // rcx
  unsigned int v66; // ebx
  __int64 v67; // r10
  __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  __int64 v70; // r9
  __int64 v71; // r8
  int v72; // ecx
  int v73; // ecx
  PIRP v74; // rbx
  _QWORD *v75; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 v77; // bl
  __int64 v78; // rdi
  _QWORD *v79; // rcx
  __int64 v80; // rax
  unsigned int HighestNodeNumber; // r8d
  __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  int v84; // ecx
  bool v85; // zf
  unsigned int v86; // r11d
  unsigned int v87; // r9d
  __int64 v88; // rcx
  unsigned __int64 v89; // rdx
  __int64 v90; // r10
  __int64 v91; // r8
  int v92; // ecx
  int v93; // ecx
  unsigned __int64 v94; // rcx
  char v95; // di
  _BYTE *v96; // rbx
  unsigned __int64 v97; // rax
  __int64 Pool; // rbx
  PIO_WORKITEM WorkItem; // rax
  PIRP v100; // rsi
  __int64 v101; // rax
  unsigned int v102; // edx
  unsigned __int8 v103; // cl
  int v104; // eax
  __int64 v105; // rcx
  const wchar_t *v106; // r9
  int v107; // eax
  __int64 v108; // r8
  char v109; // r8
  _BYTE *v110; // rdx
  int v111; // r10d
  char v112; // cl
  __int64 v113; // rsi
  __int64 v114; // rbx
  unsigned int v115; // edx
  int k; // ecx
  int j; // ecx
  const wchar_t *v118; // rdi
  int v119; // eax
  int v120; // eax
  const wchar_t *v121; // rdi
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rcx
  const wchar_t *v125; // r8
  unsigned int v126; // eax
  __int64 v127; // r9
  const wchar_t *v128; // rdi
  const wchar_t *v129; // rdi
  ULONG ZoneCountFromUnit; // edi
  __int64 v131; // rax
  ULONG *v132; // rax
  void *v133; // rcx
  _IO_SECURITY_CONTEXT *v134; // rdi
  __int64 v135; // rsi
  __int64 v136; // r15
  int *v137; // r13
  __int64 v138; // rbx
  KSPIN_LOCK *v139; // r12
  KIRQL v140; // al
  KSPIN_LOCK *v141; // rcx
  char v142; // al
  int v143; // r9d
  __int64 v144; // rcx
  KSPIN_LOCK v145; // r8
  _QWORD *v146; // rax
  __int64 v147; // rcx
  KSPIN_LOCK v148; // rdx
  KSPIN_LOCK *v149; // rax
  char v150; // al
  int v151; // r9d
  __int64 v152; // rcx
  KSPIN_LOCK v153; // r8
  _QWORD *v154; // rax
  __int64 v155; // rcx
  KSPIN_LOCK v156; // rdx
  KSPIN_LOCK *v157; // rax
  int v158; // edx
  int v159; // ecx
  int v160; // r9d
  __int64 v161; // rcx
  __int64 v162; // rdx
  __int64 v163; // rax
  __int64 v164; // r13
  LARGE_INTEGER v165; // rax
  LARGE_INTEGER v166; // rbx
  unsigned int AccessState; // r8d
  __int64 v168; // rdx
  __int64 v169; // rcx
  unsigned __int64 DesiredAccess; // rax
  __int64 v171; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v173; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v175; // r8
  char v176; // r9
  __int64 v177; // r9
  unsigned int v178; // r11d
  unsigned int v179; // edx
  __int64 v180; // rcx
  unsigned __int64 v181; // r9
  __int64 v182; // r8
  int v183; // eax
  int AccessState_high; // eax
  unsigned __int64 v185; // r8
  int v186; // eax
  signed __int32 v187; // eax
  signed __int32 v188; // ett
  __int64 v189; // rdi
  __int64 v190; // rcx
  __int64 v191; // rdx
  int *v192; // rax
  void *v193; // rdx
  __int64 v194; // rdx
  char v195; // r13
  unsigned __int8 v196; // r11
  char v197; // bl
  char v198; // r12
  char v199; // r15
  unsigned __int8 *v200; // rdi
  unsigned int v201; // esi
  _BYTE *v202; // r10
  __int64 v203; // rcx
  unsigned __int64 v204; // r8
  __int64 v205; // r9
  int v206; // ecx
  int v207; // ecx
  unsigned __int64 v208; // rcx
  char *v209; // rcx
  char v210; // r8
  char *v211; // rax
  unsigned int v212; // eax
  unsigned __int64 v213; // r8
  char v214; // cl
  char result; // al
  char v216; // bl
  char v217; // al
  __int64 v218; // rcx
  char v219; // [rsp+80h] [rbp-80h]
  char v220; // [rsp+80h] [rbp-80h]
  PIRP Irp; // [rsp+88h] [rbp-78h]
  unsigned int v222; // [rsp+90h] [rbp-70h]
  unsigned int v223; // [rsp+90h] [rbp-70h]
  unsigned int v224; // [rsp+94h] [rbp-6Ch]
  unsigned int v225; // [rsp+94h] [rbp-6Ch]
  int v226; // [rsp+98h] [rbp-68h]
  __int64 v228; // [rsp+A0h] [rbp-60h]
  unsigned __int8 *v229; // [rsp+A8h] [rbp-58h]
  __int64 v230; // [rsp+A8h] [rbp-58h]
  char v231; // [rsp+B0h] [rbp-50h]
  unsigned int v232; // [rsp+B4h] [rbp-4Ch]
  BOOL v233; // [rsp+B4h] [rbp-4Ch]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v235; // [rsp+C0h] [rbp-40h]
  __int64 v236; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v237; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v238; // [rsp+D8h] [rbp-28h]
  _QWORD *v239; // [rsp+E0h] [rbp-20h]
  _QWORD *v240; // [rsp+E8h] [rbp-18h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v242; // [rsp+108h] [rbp+8h] BYREF
  __int128 v243; // [rsp+120h] [rbp+20h] BYREF
  __int128 v244; // [rsp+130h] [rbp+30h] BYREF

  v1 = a1;
  v2 = (IRP *)a1[20];
  LOBYTE(v3) = 0;
  v237 = 0LL;
  v236 = 0LL;
  v4 = (union _LARGE_INTEGER)v1[21];
  v5 = *((_BYTE *)v1 + 16);
  v6 = v1[28];
  v239 = v1;
  v231 = v5;
  v7 = *(unsigned __int8 *)(v4.QuadPart + 2);
  Irp = v2;
  PerformanceFrequency = v4;
  if ( (_BYTE)v7 == 40 )
  {
    v8 = *(_DWORD *)(v4.QuadPart + 20);
    v238 = *(_QWORD *)(v4.QuadPart + 104);
    v240 = v1 + 110;
    v9 = *(_QWORD *)(v6 + 24);
    v226 = *(_DWORD *)(v4.QuadPart + 24);
    v222 = v8;
    v232 = *(_DWORD *)(v4.QuadPart + 32);
    v224 = *(_DWORD *)(v4.QuadPart + 60);
    if ( *(_DWORD *)v9 == 1094997074 && (*(_BYTE *)(v9 + 111) & 4) != 0 && (*(_BYTE *)(v4.QuadPart + 3) & 0x3F) == 1 )
      *(_DWORD *)(v4.QuadPart + 44) = 0;
  }
  else
  {
    v222 = v7;
    v238 = *(_QWORD *)(v4.QuadPart + 56);
    v240 = *(_QWORD **)(v4.QuadPart + 32);
    v232 = *(unsigned __int8 *)(v4.QuadPart + 8);
    v226 = *(_DWORD *)(v4.QuadPart + 12);
    v224 = *(_DWORD *)(v4.QuadPart + 16);
  }
  SecurityContext = v2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  if ( (SecurityQos[1].ImpersonationLevel & 2) == 0 )
  {
    v34 = (__int64)Irp;
LABEL_47:
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_140171461 & 1) != 0 )
        StorEtwIORequestServiceTimeEventData(v1, 0LL, 0LL);
      if ( *(_DWORD *)(v6 + 1940) && (byte_140171463 & 2) != 0 )
        StorEtwLogoRequestServiceTimeEventData(v1, 0LL, 0LL);
    }
    goto LABEL_53;
  }
  v12 = *(int **)(v6 + 560);
  v13 = (SecurityQos[7].Length + 1LL) << 6;
  v14 = (__int64 *)&SecurityQos[4];
  v15 = (char *)v12 + v13;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  v17 = (KSPIN_LOCK *)(v15 + 40);
  if ( CurrentIrql == 2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v17, &LockHandle);
    v18 = *((_BYTE *)v14 - 32);
    v19 = *v12;
    if ( (v18 & 2) != 0 )
    {
      *((_BYTE *)v14 - 32) = v18 & 0xFD;
      v20 = (__int64 *)*v14;
      v21 = *(__int64 **)v15;
      if ( *(__int64 **)(*v14 + 8) != v14 )
        goto LABEL_325;
      v22 = (__int64 **)v14[1];
      if ( *v22 != v14 )
        goto LABEL_325;
      *v22 = v20;
      v20[1] = (__int64)v22;
      if ( (v14[6] & 1) != 0 )
      {
        v23 = v14 + 2;
        if ( *((__int64 **)v15 + 4) == v14 + 2 )
          *((_QWORD *)v15 + 4) = *v23;
        v24 = (__int64 *)*v23;
        if ( *(__int64 **)(*v23 + 8) != v23 )
          goto LABEL_325;
        v25 = (__int64 **)v14[3];
        if ( *v25 != v23 )
          goto LABEL_325;
        *v25 = v24;
        v24[1] = (__int64)v25;
        *((_DWORD *)v14 + 12) &= ~1u;
      }
      if ( (v19 & 4) == 0 && v21 == v14 )
      {
        if ( *(char **)v15 == v15 )
          *((_DWORD *)v15 + 12) = -1;
        else
          *((_DWORD *)v15 + 12) = *(_DWORD *)(*(_QWORD *)v15 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v17, &LockHandle);
    v26 = *((_BYTE *)v14 - 32);
    v27 = *v12;
    if ( (v26 & 2) != 0 )
    {
      *((_BYTE *)v14 - 32) = v26 & 0xFD;
      v28 = (__int64 *)*v14;
      v29 = *(__int64 **)v15;
      if ( *(__int64 **)(*v14 + 8) != v14 )
        goto LABEL_325;
      v30 = (__int64 **)v14[1];
      if ( *v30 != v14 )
        goto LABEL_325;
      *v30 = v28;
      v28[1] = (__int64)v30;
      if ( (v14[6] & 1) != 0 )
      {
        v31 = v14 + 2;
        if ( *((__int64 **)v15 + 4) == v14 + 2 )
          *((_QWORD *)v15 + 4) = *v31;
        v32 = (__int64 *)*v31;
        if ( *(__int64 **)(*v31 + 8) != v31 )
          goto LABEL_325;
        v33 = (__int64 **)v14[3];
        if ( *v33 != v31 )
          goto LABEL_325;
        *v33 = v32;
        v32[1] = (__int64)v33;
        *((_DWORD *)v14 + 12) &= ~1u;
      }
      if ( (v27 & 4) == 0 && v29 == v14 )
      {
        if ( *(char **)v15 == v15 )
          *((_DWORD *)v15 + 12) = -1;
        else
          *((_DWORD *)v15 + 12) = *(_DWORD *)(*(_QWORD *)v15 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v34 = (__int64)Irp;
  if ( StorEtwLoggingEnabled )
  {
    v243 = 0LL;
    IoGetActivityIdIrp(Irp, &v243);
    if ( byte_140171462 < 0 )
      McTemplateK0dud_EtwWriteTransfer(v36, v35, (unsigned int)&v243, v37, 4);
    v1 = a1;
    goto LABEL_47;
  }
LABEL_53:
  if ( *(_BYTE *)(v4.QuadPart + 2) != 40 )
  {
    v38 = (unsigned __int8 *)(v4.QuadPart + 72);
    goto LABEL_72;
  }
  v38 = 0LL;
  v229 = 0LL;
  if ( !*(_DWORD *)(v4.QuadPart + 20) )
  {
    v39 = *(_DWORD *)(v4.QuadPart + 56);
    for ( i = 0; i < v39; ++i )
    {
      v41 = *(unsigned int *)(v4.QuadPart + 4LL * i + 120);
      if ( (unsigned int)v41 < 0x80 )
        continue;
      v42 = *(unsigned int *)(v4.QuadPart + 16);
      if ( (unsigned int)v41 >= (unsigned int)v42 )
        continue;
      v43 = v41 + v4.QuadPart;
      v44 = (unsigned int)v41;
      v45 = *(_DWORD *)(v41 + v4.QuadPart) - 64;
      if ( v45 )
      {
        v46 = v45 - 1;
        if ( v46 )
        {
          if ( v46 == 1 && v44 + 40 <= v42 )
          {
            if ( !*(_DWORD *)(v43 + 12) )
              break;
            v38 = (unsigned __int8 *)(v43 + 32);
            goto LABEL_72;
          }
          continue;
        }
        v47 = v44 + 56;
      }
      else
      {
        v47 = v44 + 40;
      }
      if ( v47 <= v42 )
      {
        if ( !*(_BYTE *)(v43 + 10) )
          break;
        v38 = (unsigned __int8 *)(v43 + 24);
LABEL_72:
        v229 = v38;
        break;
      }
    }
  }
  if ( *(_DWORD *)(v6 + 2372) )
  {
    if ( v38 )
    {
      v48 = *v38;
      if ( !v222 )
      {
        if ( (unsigned __int8)(v48 - 8) <= 0x3Au
          && (v49 = 0x400200500000005LL, _bittest64(&v49, (unsigned int)(v48 - 8)))
          || (unsigned __int8)(v48 + 120) <= 0x22u && (v50 = 0x500000205LL, _bittest64(&v50, (unsigned int)(v48 + 120))) )
        {
          StorpTelemetryCollectPerfData(a1, v4.QuadPart, v6, v34, v48);
        }
      }
    }
  }
  if ( !g_StorpTraceLoggingErrorDataEnabled || !v38 )
  {
LABEL_118:
    v74 = Irp;
    v75 = a1;
    goto LABEL_119;
  }
  v51 = *(_BYTE *)(v4.QuadPart + 2);
  v52 = 0;
  v53 = *(unsigned __int8 *)(v4.QuadPart + 3);
  v54 = 0LL;
  v55 = 0;
  v219 = *(_BYTE *)(v4.QuadPart + 3);
  v56 = 0;
  if ( v51 != 40 )
  {
    v56 = *(_BYTE *)(v4.QuadPart + 4);
    LOBYTE(v53) = v53 & 0x3F;
    if ( !v51 )
    {
      v54 = *(_BYTE **)(v4.QuadPart + 32);
      v55 = *(_BYTE *)(v4.QuadPart + 11);
    }
    goto LABEL_109;
  }
  if ( *(_DWORD *)(v4.QuadPart + 20) )
    goto LABEL_98;
  v57 = *(_DWORD *)(v4.QuadPart + 56);
  v58 = 0LL;
  if ( !v57 )
    goto LABEL_97;
  while ( 1 )
  {
    v59 = *(unsigned int *)(v4.QuadPart + 4 * v58 + 120);
    if ( (unsigned int)v59 < 0x80 )
      goto LABEL_93;
    v60 = *(unsigned int *)(v4.QuadPart + 16);
    if ( (unsigned int)v59 >= (unsigned int)v60 )
      goto LABEL_93;
    v61 = v59 + v4.QuadPart;
    v62 = (unsigned int)v59;
    v63 = *(_DWORD *)(v59 + v4.QuadPart) - 64;
    if ( !v63 )
    {
LABEL_91:
      v65 = v62 + 40;
      goto LABEL_92;
    }
    v64 = v63 - 1;
    if ( !v64 )
      break;
    if ( v64 == 1 )
      goto LABEL_91;
LABEL_93:
    v58 = (unsigned int)(v58 + 1);
    if ( (unsigned int)v58 >= v57 )
      goto LABEL_97;
  }
  v65 = v62 + 56;
LABEL_92:
  if ( v65 > v60 )
    goto LABEL_93;
  v56 = *(_BYTE *)(v61 + 8);
LABEL_97:
  v53 = (unsigned __int8)v219;
LABEL_98:
  LOBYTE(v53) = v53 & 0x3F;
  if ( *(_DWORD *)(v4.QuadPart + 20) )
    goto LABEL_109;
  v66 = *(_DWORD *)(v4.QuadPart + 56);
  v67 = 0LL;
  if ( !v66 )
    goto LABEL_108;
  while ( 2 )
  {
    v68 = *(unsigned int *)(v4.QuadPart + 4 * v67 + 120);
    if ( (unsigned int)v68 < 0x80 )
      goto LABEL_141;
    v69 = *(unsigned int *)(v4.QuadPart + 16);
    if ( (unsigned int)v68 >= (unsigned int)v69 )
      goto LABEL_141;
    v70 = v68 + v4.QuadPart;
    v71 = (unsigned int)v68;
    v72 = *(_DWORD *)(v68 + v4.QuadPart) - 64;
    if ( v72 )
    {
      v73 = v72 - 1;
      if ( v73 )
      {
        if ( v73 == 1 && v71 + 40 <= v69 )
        {
          v54 = *(_BYTE **)(v70 + 24);
          goto LABEL_107;
        }
        goto LABEL_141;
      }
      v83 = v71 + 56;
    }
    else
    {
      v83 = v71 + 40;
    }
    if ( v83 > v69 )
    {
LABEL_141:
      v67 = (unsigned int)(v67 + 1);
      if ( (unsigned int)v67 >= v66 )
        goto LABEL_108;
      continue;
    }
    break;
  }
  v54 = *(_BYTE **)(v70 + 16);
LABEL_107:
  v55 = *(_BYTE *)(v70 + 9);
LABEL_108:
  v52 = 0;
LABEL_109:
  if ( v219 >= 0 )
  {
    if ( v56 != 2 && (unsigned __int8)v53 <= 0x12u )
    {
      v84 = 262211;
      if ( _bittest(&v84, v53) )
        goto LABEL_117;
    }
  }
  else
  {
    if ( v54 && v55 >= 0x12u && (unsigned __int8)((*v54 & 0x7F) - 112) <= 1u )
    {
      v52 = v54[12];
      LOBYTE(v3) = v54[2] & 0xF;
    }
    if ( (_BYTE)v53 == 1 && !(_BYTE)v3 && !v52 )
    {
LABEL_117:
      v38 = v229;
      LOBYTE(v3) = 0;
      goto LABEL_118;
    }
  }
  v75 = a1;
  v74 = Irp;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))StorpTelemetryCollectErrorData)(
    v6,
    Irp,
    a1,
    (union _LARGE_INTEGER)v4.QuadPart);
  v38 = v229;
  LOBYTE(v3) = 0;
LABEL_119:
  if ( (*((_BYTE *)v75 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v6, *((_DWORD *)v75 + 187));
    *((_BYTE *)v75 + 17) &= ~2u;
  }
  CurrentStackLocation = v74->Tail.Overlay.CurrentStackLocation;
  v77 = CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter & 3;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v78 = *(_QWORD *)(v6 + 24);
  if ( (v77 & 1) != 0
    && (*(_DWORD *)(v6 + 504) & 0x8000) != 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 1864)) )
  {
    PoFxIdleComponent(**(_QWORD **)(v6 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 1864));
  }
  if ( v77 >= 2u )
  {
    v79 = *(_QWORD **)(v78 + 4960);
    if ( v79 )
      PoFxIdleComponent(*v79, 0LL, 0LL);
  }
  v80 = *(_QWORD *)(v6 + 24);
  if ( *(_DWORD *)v80 != 1094997074 || (*(_BYTE *)(v80 + 111) & 4) == 0 )
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( v232 / *(_DWORD *)(v6 + 648) < HighestNodeNumber + 1 )
      HighestNodeNumber = v232 / *(_DWORD *)(v6 + 648);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(v6 + 576) + ((unsigned __int64)HighestNodeNumber << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(v6 + 640) + 16LL * v232));
  }
  v233 = 0;
  if ( (v226 & 0x102) != 0x102 && (v226 & 0x80010) == 0 )
  {
    if ( v222 > 0x20 || (v82 = 0x1000D0000LL, !_bittest64(&v82, v222)) )
      v233 = 1;
  }
  if ( (*(_BYTE *)(v6 + 506) & 2) != 0
    && (unsigned __int8)((__int64 (__fastcall *)(_QWORD))RaidIsUnresponsiveBlockedCmd)((union _LARGE_INTEGER)v4.QuadPart) )
  {
    v85 = *(_BYTE *)(v4.QuadPart + 2) == 40;
    *(_BYTE *)(v4.QuadPart + 3) = 56;
    if ( v85 )
    {
      if ( !*(_DWORD *)(v4.QuadPart + 20) )
      {
        v86 = *(_DWORD *)(v4.QuadPart + 56);
        v87 = 0;
        if ( v86 )
        {
          while ( 1 )
          {
            v88 = *(unsigned int *)(v4.QuadPart + 4LL * v87 + 120);
            if ( (unsigned int)v88 < 0x80 )
              goto LABEL_163;
            v89 = *(unsigned int *)(v4.QuadPart + 16);
            if ( (unsigned int)v88 >= (unsigned int)v89 )
              goto LABEL_163;
            v90 = v88 + v4.QuadPart;
            v91 = (unsigned int)v88;
            v92 = *(_DWORD *)(v88 + v4.QuadPart) - 64;
            if ( !v92 )
              goto LABEL_161;
            v93 = v92 - 1;
            if ( v93 )
              break;
            v94 = v91 + 56;
LABEL_162:
            if ( v94 <= v89 )
            {
              *(_BYTE *)(v90 + 8) = 0;
              goto LABEL_168;
            }
LABEL_163:
            if ( ++v87 >= v86 )
              goto LABEL_168;
          }
          if ( v93 != 1 )
            goto LABEL_163;
LABEL_161:
          v94 = v91 + 40;
          goto LABEL_162;
        }
      }
    }
    else
    {
      *(_BYTE *)(v4.QuadPart + 4) = 0;
    }
LABEL_168:
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 2232));
  }
  if ( (*(_BYTE *)(v4.QuadPart + 3) & 0x3F) != 1 )
  {
    if ( (*(_BYTE *)(v6 + 136) & 2) != 0 )
    {
      v217 = IsZonedWriteRequest(v6, 0LL, v75, 0LL);
      v218 = *(_QWORD *)(v6 + 24);
      if ( v217 )
      {
        ++*(_DWORD *)(v218 + 5656);
        ++*(_DWORD *)(v6 + 2284);
        v214 = RaUnitAsyncError(v6, v75);
        goto LABEL_456;
      }
      ++*(_DWORD *)(v218 + 5660);
    }
    v214 = RaUnitAsyncError(v6, v75);
    goto LABEL_456;
  }
  v95 = 0;
  v220 = 0;
  if ( *(_BYTE *)(v4.QuadPart + 2) == 40 )
    v96 = *(_BYTE **)(v4.QuadPart + 64);
  else
    v96 = *(_BYTE **)(v4.QuadPart + 24);
  if ( v38 && *v38 == 29 && v96 )
  {
    v85 = MmIsAddressValid(v96) == 0;
    v97 = v224;
    if ( !v85 && v224 >= 9 && *v96 == 14 && v96[8] == 15 )
    {
      v95 = 1;
      Irp->IoStatus.Status = 0;
      Irp->IoStatus.Information = v224;
LABEL_183:
      if ( *v38 == 59 && (v38[1] & 0x1F) == 0xF )
        goto LABEL_186;
      goto LABEL_185;
    }
  }
  else
  {
    v97 = v224;
  }
  Irp->IoStatus.Status = 0;
  Irp->IoStatus.Information = v97;
  if ( v38 )
    goto LABEL_183;
LABEL_185:
  if ( v95 )
  {
LABEL_186:
    Pool = RaidAllocatePool(64LL, 16LL, 1230463314LL, *(_QWORD *)(v6 + 8));
    if ( Pool )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v6 + 8));
      *(_QWORD *)Pool = WorkItem;
      if ( WorkItem )
      {
        v100 = Irp;
        *(_QWORD *)(Pool + 8) = Irp;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 1032));
        IoQueueWorkItem(*(PIO_WORKITEM *)Pool, RaidUpdateUnitIdentityWorkRoutine, CriticalWorkQueue, (PVOID)Pool);
        v220 = 1;
        goto LABEL_282;
      }
      ExFreePoolWithTag((PVOID)Pool, 0x49576152u);
    }
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v6 + 24) + 32LL), BusRelations);
    goto LABEL_281;
  }
  if ( (*(_BYTE *)(v6 + 136) & 2) == 0 && *(_DWORD *)(v6 + 3432) != 17 )
  {
    if ( !(unsigned int)Feature_SteelixLbaSizeFix__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_242;
    v101 = *(_QWORD *)(v6 + 3600);
    if ( !v101 || !*(_QWORD *)(v101 + 104) )
      goto LABEL_242;
  }
  v102 = v222;
  if ( !v38
    || (v103 = *v38, v222)
    || v103 != 37 && v103 != 0x9E
    || (v104 = *(_DWORD *)(v6 + 3616), (v104 & 1) != 0) && (v103 != 0x9E || (v104 & 2) != 0)
    || !v96 )
  {
LABEL_243:
    if ( (*(_BYTE *)(v6 + 136) & 2) == 0
      || !v38
      || v102
      || *v38 != 0x95
      || v38[1]
      || (*(_DWORD *)(v6 + 3616) & 1) == 0
      || FeatureServicingScsiPassthroughRobustness && (*(_DWORD *)(v6 + 3484) & 1) != 0
      || !v96
      || !MmIsAddressValid(v96) )
    {
      goto LABEL_281;
    }
    v122 = *(_QWORD *)(v6 + 3416);
    HIBYTE(v230) = v96[72];
    BYTE6(v230) = v96[73];
    BYTE5(v230) = v96[74];
    BYTE4(v230) = v96[75];
    BYTE3(v230) = v96[76];
    BYTE2(v230) = v96[77];
    BYTE1(v230) = v96[78];
    LOBYTE(v230) = v96[79];
    v123 = v230 * *(unsigned int *)(v6 + 932);
    if ( v122 != v123 )
    {
      *(_QWORD *)(v6 + 3416) = v123;
      v122 = v123;
    }
    if ( v122 )
    {
      if ( *(_QWORD *)(v6 + 3440) )
        goto LABEL_281;
      ZoneCountFromUnit = GetZoneCountFromUnit(v6);
      v131 = RaidAllocatePool(64LL, ZoneCountFromUnit, 1381654866LL, *(_QWORD *)(v6 + 8));
      *(_QWORD *)(v6 + 3440) = v131;
      if ( v131 )
      {
        v132 = (ULONG *)RaidAllocatePool(64LL, (ZoneCountFromUnit + 3) & 0xFFFFFFFC, 1381654866LL, *(_QWORD *)(v6 + 8));
        if ( v132 )
        {
          RtlInitializeBitMap((PRTL_BITMAP)(v6 + 3448), v132, ZoneCountFromUnit);
          RtlClearAllBits((PRTL_BITMAP)(v6 + 3448));
          if ( FeatureServicingScsiPassthroughRobustness )
            *(_DWORD *)(v6 + 3484) |= 1u;
          goto LABEL_281;
        }
      }
      v133 = *(void **)(v6 + 3440);
      if ( v133 )
      {
        ExFreePoolWithTag(v133, 0x525A6152u);
        *(_QWORD *)(v6 + 3440) = 0LL;
      }
      *(_BYTE *)(v6 + 507) |= 1u;
    }
    else
    {
      v124 = *(_QWORD *)(v6 + 160);
      v125 = 0LL;
      v126 = *(_DWORD *)(v6 + 104);
      if ( v124 )
      {
        v125 = (const wchar_t *)(v124 + 90);
      }
      else
      {
        v127 = *(_QWORD *)(v6 + 152);
        if ( v127 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 608LL) + 184LL) & 0x40) != 0 )
          v125 = (const wchar_t *)(v127 + 41);
      }
      if ( FeatureServicingScsiPassthroughRobustness )
      {
        if ( (byte_140171464 & 2) != 0 )
        {
          v128 = &word_140150F48;
          if ( v125 )
            v128 = v125;
          McTemplateK0zqjuuussssxx_EtwWriteTransfer(
            v126 >> 8,
            *(_QWORD *)(v6 + 24) + 5064,
            v6 + 242,
            *(_QWORD *)(*(_QWORD *)(v6 + 24) + 4720LL),
            *(_DWORD *)(*(_QWORD *)(v6 + 24) + 56LL),
            *(_QWORD *)(v6 + 24) + 5064LL,
            v126,
            SBYTE1(v126),
            SBYTE2(v126),
            v6 + 168,
            v6 + 177,
            v6 + 242,
            (__int64)v128,
            0,
            v230);
        }
      }
      else
      {
        if ( (byte_140171464 & 2) == 0 )
          goto LABEL_281;
        v129 = &word_140150F48;
        if ( v125 )
          v129 = v125;
        McTemplateK0zqjuuussssx_EtwWriteTransfer(
          BYTE1(v126),
          v6 + 177,
          v6 + 168,
          *(_QWORD *)(*(_QWORD *)(v6 + 24) + 4720LL),
          *(_DWORD *)(*(_QWORD *)(v6 + 24) + 56LL),
          *(_QWORD *)(v6 + 24) + 5064LL,
          v126,
          SBYTE1(v126),
          SBYTE2(v126),
          v6 + 168,
          v6 + 177,
          v6 + 242,
          (__int64)v129,
          0);
      }
      if ( !FeatureServicingScsiPassthroughRobustness )
        goto LABEL_281;
      *(_DWORD *)(v6 + 3484) |= 2u;
    }
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v6 + 8));
    goto LABEL_281;
  }
  if ( !MmIsAddressValid(v96) )
  {
LABEL_242:
    v102 = v222;
    goto LABEL_243;
  }
  v105 = *(_QWORD *)(v6 + 160);
  v106 = 0LL;
  v107 = *(_DWORD *)(v6 + 104);
  if ( v105 )
  {
    v106 = (const wchar_t *)(v105 + 90);
  }
  else
  {
    v108 = *(_QWORD *)(v6 + 152);
    if ( v108 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 608LL) + 184LL) & 0x40) != 0 )
      v106 = (const wchar_t *)(v108 + 41);
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(v6 + 512), 8u) )
  {
    if ( byte_140171468 < 0 )
    {
      v121 = &word_140150F48;
      if ( v106 )
        v121 = v106;
      McTemplateK0zqjuuussss_EtwWriteTransfer(
        BYTE1(v107),
        v6 + 177,
        v6 + 168,
        *(_QWORD *)(*(_QWORD *)(v6 + 24) + 4720LL),
        *(_DWORD *)(*(_QWORD *)(v6 + 24) + 56LL),
        *(_QWORD *)(v6 + 24) + 5064LL,
        v107,
        SBYTE1(v107),
        SBYTE2(v107),
        v6 + 168,
        v6 + 177,
        v6 + 242,
        (__int64)v121);
    }
    goto LABEL_281;
  }
  v109 = 1;
  v110 = (_BYTE *)v75[23];
  v111 = 512;
  if ( *v38 != 37 )
  {
    HIBYTE(v223) = v110[8];
    BYTE2(v223) = v110[9];
    BYTE1(v223) = v110[10];
    LOBYTE(v223) = v110[11];
    v113 = v223;
    HIBYTE(v228) = *v110;
    BYTE6(v228) = v110[1];
    BYTE5(v228) = v110[2];
    BYTE4(v228) = v110[3];
    BYTE3(v228) = v110[4];
    BYTE2(v228) = v110[5];
    BYTE1(v228) = v110[6];
    LOBYTE(v228) = v110[7];
    v114 = v228;
    if ( v223 < 0x200 )
    {
      v109 = 0;
      goto LABEL_224;
    }
    v115 = v223;
    for ( j = v223 & (v223 - 1); j; j &= j - 1 )
      v115 = j;
LABEL_221:
    if ( v114 * v113 >= 0x100000 )
      LODWORD(v113) = v115;
    else
      v109 = 0;
    goto LABEL_224;
  }
  HIBYTE(v225) = v110[4];
  BYTE2(v225) = v110[5];
  BYTE1(v225) = v110[6];
  LOBYTE(v225) = v110[7];
  v112 = *v110;
  v113 = v225;
  v235 = 0LL;
  BYTE3(v235) = v112;
  BYTE2(v235) = v110[1];
  BYTE1(v235) = v110[2];
  LOBYTE(v235) = v110[3];
  v114 = (unsigned int)v235;
  if ( v225 >= 0x200 )
  {
    v115 = v225;
    for ( k = v225 & (v225 - 1); k; k &= k - 1 )
      v115 = k;
    goto LABEL_221;
  }
  v109 = 0;
LABEL_224:
  if ( v109 )
  {
    v120 = *(_DWORD *)(v6 + 3616) | 1;
    *(_DWORD *)(v6 + 932) = v113;
    *(_DWORD *)(v6 + 3616) = v120;
    *(_QWORD *)(v6 + 3464) = v114;
    if ( *v38 == 0x9E )
      *(_DWORD *)(v6 + 3616) = v120 | 2;
  }
  else
  {
    if ( !*(_DWORD *)(v6 + 932) )
    {
      if ( (*(_BYTE *)(v6 + 136) & 2) != 0 )
        v111 = 4096;
      *(_DWORD *)(v6 + 932) = v111;
    }
    if ( *(_QWORD *)(v6 + 3464) )
    {
      if ( (byte_140171468 & 0x20) != 0 )
      {
        v118 = &word_140150F48;
        if ( v106 )
          v118 = v106;
        McTemplateK0zqjuuussssxq_EtwWriteTransfer(
          BYTE1(v107),
          v6 + 177,
          v6 + 168,
          *(_QWORD *)(*(_QWORD *)(v6 + 24) + 4720LL),
          *(_DWORD *)(*(_QWORD *)(v6 + 24) + 56LL),
          *(_QWORD *)(v6 + 24) + 5064LL,
          v107,
          SBYTE1(v107),
          SBYTE2(v107),
          v6 + 168,
          v6 + 177,
          v6 + 242,
          (__int64)v118,
          v114,
          v113);
      }
      v119 = *(_DWORD *)(v6 + 3616);
      *(_DWORD *)(v6 + 3620) = v113;
      *(_QWORD *)(v6 + 3624) = v114;
      *(_DWORD *)(v6 + 3616) = v119 ^ (v119 ^ (v119 + 4)) & 0x3FFFC;
      _interlockedbittestandreset((volatile signed __int32 *)(v6 + 512), 8u);
      goto LABEL_281;
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(v6 + 512), 8u);
LABEL_281:
  v100 = Irp;
LABEL_282:
  v134 = v100->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(v134->SecurityQos) == 40 )
    v135 = (__int64)v134[4].SecurityQos;
  else
    v135 = (__int64)v134[2].SecurityQos;
  v136 = *(_QWORD *)(v135 + 224);
  if ( (*(_BYTE *)(v135 + 16) & 2) == 0 )
    goto LABEL_320;
  v137 = *(int **)(v136 + 560);
  v138 = v135 + 48;
  v139 = (KSPIN_LOCK *)&v137[16 * *(unsigned int *)(v135 + 84) + 16];
  memset(&v242, 0, sizeof(v242));
  v140 = KeGetCurrentIrql();
  v141 = v139 + 5;
  if ( v140 == 2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v141, &v242);
    v142 = *(_BYTE *)(v135 + 16);
    v143 = *v137;
    if ( (v142 & 2) == 0 )
    {
LABEL_301:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v242);
      goto LABEL_316;
    }
    *(_BYTE *)(v135 + 16) = v142 & 0xFD;
    v144 = *(_QWORD *)v138;
    v145 = *v139;
    if ( *(_QWORD *)(*(_QWORD *)v138 + 8LL) == v138 )
    {
      v146 = *(_QWORD **)(v135 + 56);
      if ( *v146 == v138 )
      {
        *v146 = v144;
        *(_QWORD *)(v144 + 8) = v146;
        if ( (*(_DWORD *)(v135 + 96) & 1) == 0 )
        {
LABEL_296:
          if ( (v143 & 4) == 0 && v145 == v138 )
          {
            if ( (KSPIN_LOCK *)*v139 == v139 )
              *((_DWORD *)v139 + 12) = -1;
            else
              *((_DWORD *)v139 + 12) = *(_DWORD *)(*v139 + 32);
          }
          goto LABEL_301;
        }
        v147 = v135 + 64;
        if ( v139[4] == v135 + 64 )
          v139[4] = *(_QWORD *)v147;
        v148 = *(_QWORD *)v147;
        if ( *(_QWORD *)(*(_QWORD *)v147 + 8LL) == v147 )
        {
          v149 = *(KSPIN_LOCK **)(v135 + 72);
          if ( *v149 == v147 )
          {
            *v149 = v148;
            *(_QWORD *)(v148 + 8) = v149;
            *(_DWORD *)(v135 + 96) &= ~1u;
            goto LABEL_296;
          }
        }
      }
    }
LABEL_325:
    __fastfail(3u);
  }
  KeAcquireInStackQueuedSpinLock(v141, &v242);
  v150 = *(_BYTE *)(v135 + 16);
  v151 = *v137;
  if ( (v150 & 2) != 0 )
  {
    *(_BYTE *)(v135 + 16) = v150 & 0xFD;
    v152 = *(_QWORD *)v138;
    v153 = *v139;
    if ( *(_QWORD *)(*(_QWORD *)v138 + 8LL) != v138 )
      goto LABEL_325;
    v154 = *(_QWORD **)(v135 + 56);
    if ( *v154 != v138 )
      goto LABEL_325;
    *v154 = v152;
    *(_QWORD *)(v152 + 8) = v154;
    if ( (*(_DWORD *)(v135 + 96) & 1) != 0 )
    {
      v155 = v135 + 64;
      if ( v139[4] == v135 + 64 )
        v139[4] = *(_QWORD *)v155;
      v156 = *(_QWORD *)v155;
      if ( *(_QWORD *)(*(_QWORD *)v155 + 8LL) != v155 )
        goto LABEL_325;
      v157 = *(KSPIN_LOCK **)(v135 + 72);
      if ( *v157 != v155 )
        goto LABEL_325;
      *v157 = v156;
      *(_QWORD *)(v156 + 8) = v157;
      *(_DWORD *)(v135 + 96) &= ~1u;
    }
    if ( (v151 & 4) == 0 && v153 == v138 )
    {
      if ( (KSPIN_LOCK *)*v139 == v139 )
        *((_DWORD *)v139 + 12) = -1;
      else
        *((_DWORD *)v139 + 12) = *(_DWORD *)(*v139 + 32);
    }
  }
  KeReleaseInStackQueuedSpinLock(&v242);
LABEL_316:
  if ( StorEtwLoggingEnabled )
  {
    v244 = 0LL;
    IoGetActivityIdIrp(Irp, &v244);
    if ( byte_140171462 < 0 )
      McTemplateK0dud_EtwWriteTransfer(v159, v158, (unsigned int)&v244, v160, 4);
  }
  v4 = PerformanceFrequency;
  LOBYTE(v3) = 0;
LABEL_320:
  StorUnmapSenseInfo(v135, *(_QWORD *)(*(_QWORD *)(v136 + 24) + 8LL));
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v163 = *(_QWORD *)(v136 + 3600);
    if ( v163 && *(_QWORD *)(v163 + 104) )
      goto LABEL_323;
    v161 = *(_QWORD *)(v136 + 24);
    if ( !*(_QWORD *)(v161 + 5616) )
      goto LABEL_331;
    v162 = v135;
    goto LABEL_330;
  }
  v161 = *(_QWORD *)(v136 + 24);
  if ( *(_QWORD *)(v161 + 5624) )
  {
    v162 = v135;
    if ( (*(_BYTE *)(v161 + 112) & 0x10) != 0 )
    {
LABEL_323:
      RaidReleaseNvmeIceKeyResources(v136, v135);
      goto LABEL_331;
    }
LABEL_330:
    RaidAdapterReleaseCryptoKeyResources(v161, v162);
  }
LABEL_331:
  if ( BYTE2(v134->SecurityQos) == 40 )
  {
    if ( (*(_BYTE *)(v135 + 16) & 0x40) != 0 )
    {
      v164 = *(_QWORD *)(v135 + 752);
      PerformanceFrequency.QuadPart = 1LL;
      if ( v164 )
      {
        if ( UseQPCTime )
          v165 = KeQueryPerformanceCounter(&PerformanceFrequency);
        else
          v165.QuadPart = KeQueryUnbiasedInterruptTime();
        v166 = v165;
        *(_BYTE *)(v164 + 3) = BYTE3(v134->SecurityQos);
        *(_DWORD *)(v164 + 12) = v134[1].SecurityQos;
        if ( ((__int64)v134[1].SecurityQos & 0x40) != 0 )
          *(_DWORD *)(v164 + 16) = HIDWORD(v134[2].AccessState);
        if ( BYTE3(v134->SecurityQos) == 48 )
          *(_DWORD *)(v164 + 64) = v134[1].FullCreateOptions;
        if ( !v134->FullCreateOptions )
        {
          AccessState = (unsigned int)v134[2].AccessState;
          v168 = 0LL;
          if ( AccessState )
          {
            while ( 1 )
            {
              v169 = *((unsigned int *)&v134[5].SecurityQos + v168);
              if ( (unsigned int)v169 >= 0x80 )
              {
                DesiredAccess = v134->DesiredAccess;
                if ( (unsigned int)v169 <= (unsigned int)DesiredAccess )
                {
                  v171 = (__int64)v134 + v169;
                  if ( *(_DWORD *)((char *)&v134->SecurityQos + v169) == 64 && v169 + 40 <= DesiredAccess )
                    break;
                }
              }
              v168 = (unsigned int)(v168 + 1);
              if ( (unsigned int)v168 >= AccessState )
                goto LABEL_348;
            }
            *(_BYTE *)(v164 + 4) = *(_BYTE *)(v171 + 8);
            *(_QWORD *)(v164 + 32) = *(_QWORD *)(v171 + 16);
            *(_BYTE *)(v164 + 11) = *(_BYTE *)(v171 + 9);
          }
          else
          {
LABEL_348:
            *(_BYTE *)(v164 + 3) = 48;
            *(_DWORD *)(v164 + 64) = -1073741811;
          }
        }
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v166.QuadPart )
          v175 = PerformanceCounter.QuadPart - v166.QuadPart;
        else
          v175 = PerformanceCounter.QuadPart - v166.QuadPart - 1;
        if ( UseQPCTime )
        {
          LowPart = PerformanceFrequency.LowPart;
          v176 = 0;
          if ( PerformanceFrequency.QuadPart && v175 )
          {
            v177 = v175 / PerformanceFrequency.QuadPart;
            v175 = 1000 * (v175 % PerformanceFrequency.QuadPart);
            v173.QuadPart = 10000 * (v175 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
            v176 = 10000 * (v175 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
                 + 16 * (-24 * v177 + v175 / PerformanceFrequency.QuadPart);
          }
        }
        else
        {
          v176 = v175;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
          McTemplateK0zx_EtwWriteTransfer(
            LowPart,
            v173.LowPart,
            v175,
            (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
            v176);
      }
      LOBYTE(v3) = 0;
      *(_QWORD *)(*(_QWORD *)(v135 + 752) + 48LL) = *(_QWORD *)(v135 + 176);
      *(_QWORD *)(*(_QWORD *)(v135 + 752) + 24LL) = *(_QWORD *)(v135 + 184);
      *(_QWORD *)(*(_QWORD *)(v135 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v135 + 752) + 40LL) = 0LL;
      Irp->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)(v135 + 752);
      *(_BYTE *)(v135 + 16) &= ~0x40u;
      *(_QWORD *)(v135 + 752) = 0LL;
    }
    else
    {
      v134[4].SecurityQos = 0LL;
      *(_QWORD *)&v134[2].DesiredAccess = *(_QWORD *)(v135 + 184);
      v134[4].AccessState = 0LL;
      if ( *(_QWORD *)(v135 + 192) )
      {
        if ( ((__int64)v134[1].SecurityQos & 0xC0) == 0xC0 )
        {
          v178 = (unsigned int)v134[2].AccessState;
          v179 = 0;
          if ( v178 )
          {
            while ( 1 )
            {
              v180 = *((unsigned int *)&v134[5].SecurityQos + v179);
              if ( (unsigned int)v180 >= 0x80 )
              {
                v181 = v134->DesiredAccess;
                if ( (unsigned int)v180 <= (unsigned int)v181 )
                {
                  v182 = (__int64)v134 + v180;
                  if ( *(_DWORD *)((char *)&v134->SecurityQos + v180) == 1 && v180 + 24 <= v181 )
                    break;
                }
              }
              if ( ++v179 >= v178 )
                goto LABEL_376;
            }
            if ( v182 )
              *(_QWORD *)(v182 + 16) = *(_QWORD *)(v135 + 192);
          }
        }
      }
LABEL_376:
      v183 = (int)v134[1].SecurityQos;
      if ( (v183 & 0x2000000) != 0 )
        LODWORD(v134[1].SecurityQos) = v183 & 0xFDFFFFFF;
    }
  }
  else
  {
    v134[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(v135 + 176);
    v134[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(v135 + 184);
    AccessState_high = HIDWORD(v134->AccessState);
    v134[2].AccessState = 0LL;
    *(_QWORD *)&v134[1].DesiredAccess = 0LL;
    if ( (AccessState_high & 0x2000000) != 0 )
      HIDWORD(v134->AccessState) = AccessState_high & 0xFDFFFFFF;
  }
  RaidXrbDeallocateResources(v135, 1);
  if ( BYTE2(v134->SecurityQos) == 40 )
    v186 = (int)v134[1].SecurityQos;
  else
    v186 = HIDWORD(v134->AccessState);
  if ( (v186 & 0x4000) == 0 )
  {
    v185 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v187 = *(_DWORD *)(v185 + *(_QWORD *)(v136 + 40));
    if ( (v187 & 1) != 0 )
    {
LABEL_387:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v136 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v136 + 520), 0, 0);
    }
    else
    {
      while ( 1 )
      {
        v188 = v187;
        v187 = _InterlockedCompareExchange((volatile signed __int32 *)(v185 + *(_QWORD *)(v136 + 40)), v187 - 2, v187);
        if ( v188 == v187 )
          break;
        if ( (v187 & 1) != 0 )
          goto LABEL_387;
      }
    }
  }
  if ( !v220 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0 )
    {
      v189 = (__int64)Irp;
    }
    else
    {
      v189 = (__int64)Irp;
      if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qqD(
          WPP_GLOBAL_Control->AttachedDevice,
          21LL,
          &WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
          v6,
          Irp,
          Irp->IoStatus.Status);
    }
    if ( (qword_140170460 & 0x10) != 0 )
      RaidLogRequestComplete(*(_QWORD *)(v6 + 24), v189, v4.QuadPart);
    v85 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v189 + 141) = -84;
    if ( v85 )
      goto LABEL_454;
    v243 = 0LL;
    IoGetActivityIdIrp(v189, &v243);
    v191 = *(_QWORD *)(v189 + 184);
    if ( *(_BYTE *)v191 == 14 )
    {
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_454;
      v193 = &EventNonReadWriteRequestComplete;
      goto LABEL_453;
    }
    if ( *(_BYTE *)v191 != 15 )
    {
      if ( *(_BYTE *)v191 != 27 )
        goto LABEL_454;
      if ( *(_BYTE *)(v191 + 1) == 7 && !*(_DWORD *)(v191 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v192 = *(int **)(v189 + 56);
          if ( v192 )
            v3 = *v192;
          McTemplateK0pqd_EtwWriteTransfer(v190, v191, (unsigned int)&v243, v189, v3, *(_DWORD *)(v189 + 48));
        }
        goto LABEL_454;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_454;
      v193 = &EventPnpRequestComplete;
LABEL_453:
      McTemplateK0pd_EtwWriteTransfer(v190, v193, &v243, v189, *(_DWORD *)(v189 + 48));
      goto LABEL_454;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_454;
    v194 = *(_QWORD *)(v191 + 8);
    v195 = 0;
    v196 = 0;
    v197 = 0;
    v198 = 0;
    v199 = 0;
    if ( *(_BYTE *)(v194 + 2) == 40 )
    {
      v200 = 0LL;
      if ( *(_DWORD *)(v194 + 20) )
        goto LABEL_454;
      v201 = *(_DWORD *)(v194 + 56);
      v202 = 0LL;
      if ( !v201 )
        goto LABEL_427;
      while ( 1 )
      {
        v203 = *(unsigned int *)(v194 + 4LL * (unsigned int)v202 + 120);
        if ( (unsigned int)v203 < 0x80 )
          goto LABEL_425;
        v204 = *(unsigned int *)(v194 + 16);
        if ( (unsigned int)v203 >= (unsigned int)v204 )
          goto LABEL_425;
        v205 = (unsigned int)v203;
        v206 = *(_DWORD *)(v203 + v194) - 64;
        if ( v206 )
        {
          v207 = v206 - 1;
          if ( v207 )
          {
            if ( v207 == 1 && v205 + 40 <= v204 )
            {
              if ( *(_DWORD *)(v205 + v194 + 12) )
                v200 = (unsigned __int8 *)(v205 + v194 + 32);
              v195 = *(_BYTE *)(v205 + v194 + 8);
              v202 = *(_BYTE **)(v205 + v194 + 24);
              v196 = *(_BYTE *)(v205 + v194 + 9);
              goto LABEL_427;
            }
            goto LABEL_425;
          }
          v208 = v205 + 56;
        }
        else
        {
          v208 = v205 + 40;
        }
        if ( v208 <= v204 )
        {
          if ( *(_BYTE *)(v205 + v194 + 10) )
            v200 = (unsigned __int8 *)(v205 + v194 + 24);
          v195 = *(_BYTE *)(v205 + v194 + 8);
          v202 = *(_BYTE **)(v205 + v194 + 16);
          v196 = *(_BYTE *)(v205 + v194 + 9);
LABEL_427:
          if ( v200 )
          {
            LODWORD(v209) = *v200;
            v189 = (__int64)Irp;
            goto LABEL_433;
          }
          goto LABEL_454;
        }
LABEL_425:
        LODWORD(v202) = (_DWORD)v202 + 1;
        if ( (unsigned int)v202 >= v201 )
        {
          v202 = 0LL;
          goto LABEL_427;
        }
      }
    }
    LODWORD(v209) = *(unsigned __int8 *)(v194 + 72);
    v202 = *(_BYTE **)(v194 + 32);
    v196 = *(_BYTE *)(v194 + 11);
    v195 = *(_BYTE *)(v194 + 4);
    if ( *(_BYTE *)(v194 + 2) )
      goto LABEL_454;
LABEL_433:
    LOBYTE(v209) = (_BYTE)v209 - 8;
    if ( ((unsigned __int8)v209 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v194 + 3) == 1 || !v202 || !v196 )
        goto LABEL_449;
      v210 = 0;
      v209 = &v202[v196];
      v211 = v202 + 8;
      if ( (unsigned __int8)((*v202 & 0x7F) - 114) <= 1u )
      {
        if ( v211 > v209 )
          goto LABEL_448;
        v198 = v202[2];
        v197 = v202[1] & 0xF;
        v199 = v202[3];
      }
      else
      {
        if ( v211 > v209 )
          goto LABEL_448;
        v197 = v202[2] & 0xF;
        v212 = v196;
        if ( (unsigned int)(unsigned __int8)v202[7] + 8 <= v196 )
          v212 = (unsigned __int8)v202[7] + 8;
        v209 = v202 + 13;
        v213 = (unsigned __int64)&v202[v212];
        if ( (unsigned __int64)(v202 + 13) <= v213 )
          v198 = v202[12];
        if ( (unsigned __int64)(v202 + 14) <= v213 )
          v199 = *v209;
      }
      v210 = 1;
LABEL_448:
      if ( v210 )
      {
LABEL_450:
        McTemplateK0pduuuuup_EtwWriteTransfer(
          (_DWORD)v209,
          v194,
          (unsigned int)&v243,
          v189,
          *(_DWORD *)(v189 + 48),
          *(_BYTE *)(v194 + 3),
          v195,
          v197,
          v198,
          v199,
          v189);
        goto LABEL_454;
      }
LABEL_449:
      v199 = 0;
      v198 = 0;
      v197 = 0;
      goto LABEL_450;
    }
LABEL_454:
    IofCompleteRequest(Irp, 1);
  }
  v214 = 1;
LABEL_456:
  result = v231 & 0x1C;
  if ( (v231 & 0x1C) != 0xC && v214 )
  {
    LOBYTE(v185) = 1;
    v216 = StorRemoveIoGatewayItem(&v237, &v236, v185);
    if ( v236 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v236 + 64) + 32LL) + 712LL))(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v236 + 64) + 32LL) + 704LL),
        v236 - 120,
        &v237,
        0LL);
    if ( v216 )
      RaidAdapterRestartQueues(*(_QWORD *)(v6 + 24), 0);
    return RaidStartNextIoPacket(v6, v233, 0LL);
  }
  return result;
}
