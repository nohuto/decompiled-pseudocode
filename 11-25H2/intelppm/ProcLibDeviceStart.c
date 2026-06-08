/*
 * XREFs of ProcLibDeviceStart @ 0x1400408BC
 * Callers:
 *     EvtDevicePrepareHardware @ 0x14002C430 (EvtDevicePrepareHardware.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x140003A48 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x140005F14 (WPP_RECORDER_SF_d.c)
 *     AcquireBiosPpmControl @ 0x14000676C (AcquireBiosPpmControl.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x14000D380 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     InitAcpiLegacyPcc @ 0x140027008 (InitAcpiLegacyPcc.c)
 *     InitAcpiPerfStates @ 0x140027628 (InitAcpiPerfStates.c)
 *     InitializeEnergyEstimation @ 0x140029660 (InitializeEnergyEstimation.c)
 *     InitAcpiProcessorDomains @ 0x140029CA8 (InitAcpiProcessorDomains.c)
 *     AcpiEval_GetProcessorIds @ 0x14002A2C0 (AcpiEval_GetProcessorIds.c)
 *     InitAcpiCpc @ 0x14002D418 (InitAcpiCpc.c)
 *     ValidatePerfDomainSymmetry @ 0x14002F62C (ValidatePerfDomainSymmetry.c)
 *     AcpiEval_PDC @ 0x1400317EC (AcpiEval_PDC.c)
 *     AcquireAcpiInterfaces @ 0x140033DB8 (AcquireAcpiInterfaces.c)
 *     ReleaseAcpiInterfaces @ 0x140034F20 (ReleaseAcpiInterfaces.c)
 *     RegisterXsdDomain @ 0x14003541C (RegisterXsdDomain.c)
 *     InitAcpiThrottleStates @ 0x1400391DC (InitAcpiThrottleStates.c)
 *     InitPepIdleStates @ 0x14003933C (InitPepIdleStates.c)
 *     EmiInit @ 0x14003B07C (EmiInit.c)
 *     InitPepPerfStates @ 0x14003B3B4 (InitPepPerfStates.c)
 *     InitPep @ 0x14003C074 (InitPep.c)
 *     QueryPepCapabilites @ 0x14003C608 (QueryPepCapabilites.c)
 *     ProcLibTraceSummary2 @ 0x140042E48 (ProcLibTraceSummary2.c)
 *     AcpiEval_OSC @ 0x140044368 (AcpiEval_OSC.c)
 *     AcpiEval_TPC @ 0x1400444F4 (AcpiEval_TPC.c)
 *     AcpiEval_PPC @ 0x1400447C8 (AcpiEval_PPC.c)
 *     ProcLibCapChange @ 0x140044B24 (ProcLibCapChange.c)
 *     EnumerateControlMethods @ 0x140046904 (EnumerateControlMethods.c)
 *     InitAcpiCStates @ 0x140046BB8 (InitAcpiCStates.c)
 *     InitAcpiLpiStates @ 0x140046F90 (InitAcpiLpiStates.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  int v2; // r13d
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  int v10; // eax
  const wchar_t *v11; // rax
  PIO_WORKITEM WorkItem; // rax
  int v13; // edx
  __int64 v14; // r8
  int v15; // eax
  int v16; // edx
  int v17; // ebx
  int inited; // eax
  int v19; // eax
  int PepCapabilites; // eax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned __int16 v34; // r9
  __int64 v35; // rcx
  int v36; // ebx
  int v37; // eax
  unsigned int v38; // edi
  int v39; // eax
  int v40; // edx
  int v41; // eax
  unsigned int v42; // ebx
  int v43; // eax
  int v44; // edx
  int v45; // esi
  char v46; // al
  __int64 v47; // rax
  void (__fastcall *v48)(__int64); // rax
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r8
  unsigned int v53; // ecx
  int Type; // [rsp+28h] [rbp-E0h]
  ULONG Size[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-D8h]
  int *v58; // [rsp+88h] [rbp-80h] BYREF
  int v59; // [rsp+90h] [rbp-78h] BYREF
  __int64 v60; // [rsp+98h] [rbp-70h] BYREF
  __int128 v61; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-58h]
  _QWORD v63[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v64; // [rsp+C8h] [rbp-40h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+D8h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v67[3]; // [rsp+F8h] [rbp-10h] BYREF
  int v68; // [rsp+128h] [rbp+20h]
  wchar_t v69; // [rsp+12Ch] [rbp+24h]

  v63[0] = 3538996LL;
  LODWORD(v62) = 0;
  v68 = *(_DWORD *)L"re";
  v69 = aRegistryMachin_0[26];
  v64 = 0LL;
  v60 = 0LL;
  PreviousAffinity = 0LL;
  v63[1] = v67;
  v2 = 0;
  v61 = 0LL;
  v59 = 0;
  Affinity = 0LL;
  v67[0] = *(_OWORD *)L"\\Registry\\Machine\\Software";
  *(_QWORD *)(a1 + 264) = Globals[0];
  *(_QWORD *)(a1 + 280) = Globals[0];
  v67[1] = *(_OWORD *)L"y\\Machine\\Software";
  *(_QWORD *)(a1 + 272) = 0LL;
  v67[2] = *(_OWORD *)L"e\\Software";
  if ( (int)AcpiEval_GetProcessorIds(a1, (__int64)&v64) >= 0 )
  {
    if ( DWORD1(v64) )
    {
      *(_DWORD *)(a1 + 188) = DWORD1(v64);
      *(_BYTE *)(a1 + 185) = BYTE8(v64);
      *(_BYTE *)(a1 + 184) = 1;
      *(_WORD *)(a1 + 186) = 0x2000;
      *(_DWORD *)(a1 + 192) = 0;
    }
  }
  else
  {
    v64 = 0LL;
    HIDWORD(v64) = -1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        3,
        32,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
    }
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  v4 = HIDWORD(v64);
  v5 = (_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 48) = v4;
  *(_DWORD *)(a1 + 52) = v64;
  v6 = ((__int64 (__fastcall *)(__int64))qword_1400196F0)(a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    *(_QWORD *)(a1 + 280) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x21u,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        v6);
    goto LABEL_189;
  }
  if ( *v5 == -1 )
  {
    if ( _bittest64(Globals, 0x2Du) )
    {
      *(_DWORD *)(a1 + 80) = dword_140019A88;
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFC7FFFFFFFFuLL;
    }
  }
  else
  {
    v8 = IoSetDevicePropertyData(
           *(PDEVICE_OBJECT *)(a1 + 8),
           &PROCESSOR_NUMBER_PKEY,
           0,
           (ULONG)0,
           (DEVPROPTYPE)7,
           (ULONG)4,
           (PVOID)(a1 + 56));
    if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Size[0] = v8;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x22u,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        *(_QWORD *)Size);
    }
    KeProcessorGroupAffinity(&Affinity, (unsigned int)*v5);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v2 = 1;
  }
  *((_QWORD *)&v61 + 1) = &DEVPKEY_Device_BiosDeviceName;
  *(_QWORD *)&v61 = 24LL;
  v62 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64, _QWORD, __int64 *, int *))(WdfFunctions_01015 + 3472))(
          WdfDriverGlobals,
          v9,
          &v61,
          512LL,
          0LL,
          &v60,
          &v59);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizea[0] = v10;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x23u,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        *(_QWORD *)Sizea);
    }
    v11 = L"Unknown";
  }
  else
  {
    v11 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v60,
                             0LL);
  }
  *(_QWORD *)(a1 + 64) = v11;
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1160) = WorkItem;
  *(_BYTE *)(a1 + 1169) = 1;
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        4,
        36,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
    }
    v7 = -1073741670;
    goto LABEL_187;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140019190,
    0LL);
  v58 = 0LL;
  if ( qword_140019338 )
  {
    v15 = AcpiEval_OSC(a1, qword_140019338, v14, &v58);
    if ( v15 >= 0 )
    {
      v17 = *v58;
      if ( (*v58 & 0xE) != 0 )
      {
        if ( (v17 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            1,
            37,
            (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
        }
        if ( (v17 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDDDDDDDDD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int8 *)(qword_140019338 + 13),
            *(unsigned __int8 *)(qword_140019338 + 12),
            *(unsigned __int8 *)(qword_140019338 + 11),
            Type);
        if ( (v17 & 8) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizea[0] = *(ULONG *)(qword_140019338 + 16);
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x27u,
            (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
            *(_QWORD *)Sizea);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 88) = v58;
      }
      goto LABEL_39;
    }
    if ( v15 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          2,
          40,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizea[0] = v15;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x29u,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        *(_QWORD *)Sizea);
    }
  }
  if ( qword_140019330 )
    AcpiEval_PDC(a1, (const void *)qword_140019330, word_140019340);
LABEL_39:
  EnumerateControlMethods(a1, a1 + 1104);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    Sizea[0] = *(ULONG *)(a1 + 1104);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      3u,
      0x2Au,
      (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
      *(_QWORD *)Sizea);
  }
  if ( (*(_QWORD *)(a1 + 280) & 0x111200000E00LL) != 0 )
  {
    inited = InitPep(a1);
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizea[0] = inited;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Bu,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizea);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFEEEDFFFFF1FFuLL;
    }
  }
  if ( (*(_QWORD *)(a1 + 280) & 0x20E0000000000LL) != 0 )
  {
    v19 = InitAcpiLpiStates(a1);
    if ( v19 >= 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFDFFF80D88uLL;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizea[0] = v19;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Cu,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        *(_QWORD *)Sizea);
    }
  }
  if ( (*(_QWORD *)(a1 + 280) & 0x111200000E00LL) != 0 )
  {
    PepCapabilites = QueryPepCapabilites(a1);
    if ( PepCapabilites < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizea[0] = PepCapabilites;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Du,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizea);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFEEEDFFFFF1FFuLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x7F077LL) != 0 )
  {
    v21 = InitAcpiCStates(a1);
    if ( v21 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizea[0] = v21;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Eu,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        *(_QWORD *)Sizea);
    }
  }
  v22 = *(_QWORD *)(a1 + 280);
  if ( (v22 & 0x7F077) == 0 )
  {
    v22 &= ~0x200uLL;
    *(_QWORD *)(a1 + 280) = v22;
  }
  if ( (v22 & 0x200000200LL) != 0 )
  {
    v23 = InitPepIdleStates(a1);
    if ( v23 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizea[0] = v23;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Fu,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizea);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFDFFFFFDFFuLL;
    }
  }
  v24 = *(_QWORD *)(a1 + 280);
  if ( (v24 & 0x1000000000LL) != 0 )
  {
    v25 = InitPepPerfStates(a1);
    v26 = *(_QWORD *)(a1 + 280);
    if ( v25 >= 0 )
    {
      v24 = v26 & 0xFFFFFFFF04CFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v24;
    }
    else
    {
      v24 = v26 & 0xFFFFFFEFFFFFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v24;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizea[0] = v25;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x30u,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizea);
        v24 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v24 & 0x8000000) != 0 )
  {
    v27 = InitAcpiCpc(a1);
    v28 = *(_QWORD *)(a1 + 280);
    if ( v27 >= 0 )
    {
      v24 = v28 & 0xFFFFFFFF0CCFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v24;
    }
    else
    {
      v24 = v28 & 0xFFFFFFFFF7FFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v24;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizea[0] = v27;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x31u,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizea);
        v24 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v24 & 0x80000000) != 0 )
  {
    v29 = InitAcpiLegacyPcc((_QWORD *)a1);
    v30 = *(_QWORD *)(a1 + 280);
    if ( v29 >= 0 )
    {
      v24 = v30 & 0xFFFFFFFF8CCFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v24;
    }
    else
    {
      v24 = v30 & 0xFFFFFFFF7FFFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v24;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizea[0] = v29;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x32u,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizea);
        v24 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v24 & 0x70000000) != 0 )
  {
    v31 = InitAcpiPerfStates(a1);
    if ( v31 < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFF8FFFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizea[0] = v31;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x33u,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizea);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x3300000) != 0 )
  {
    v32 = InitAcpiThrottleStates(a1);
    if ( v32 < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCCFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizea[0] = v32;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x34u,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizea);
      }
    }
  }
  if ( !qword_140019348 || (v33 = qword_140019348(a1), v7 = v33, v33 >= 0) )
  {
    v35 = *(_QWORD *)(a1 + 280);
    if ( (v35 & 0x60000000) != 0 && *(_BYTE *)(a1 + 424) == 127 )
    {
      if ( (v35 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 296) = qword_140019368;
        *(_QWORD *)(a1 + 328) = qword_140019390;
        *(_QWORD *)(a1 + 312) = qword_140019378;
      }
      if ( (v35 & 0x40000000) == 0 )
      {
LABEL_114:
        if ( (v35 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 336) = qword_140019398;
        if ( (v35 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 352) = qword_1400193A8;
          *(_QWORD *)(a1 + 360) = qword_1400193B0;
        }
        if ( (v35 & 0x2000000) != 0 && *(_BYTE *)(a1 + 480) == 127 )
        {
          *(_QWORD *)(a1 + 304) = qword_140019370;
          *(_QWORD *)(a1 + 320) = qword_140019380;
        }
        else if ( *(_BYTE *)(a1 + 480) == 1 && (v35 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 304) = SetPerfStateIO;
          *(_QWORD *)(a1 + 320) = SetPerfStateIOHidden;
        }
        else
        {
          *(_QWORD *)(a1 + 280) = v35 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1400193A0 )
          *(_QWORD *)(a1 + 344) = qword_1400193A0;
        InitAcpiProcessorDomains(a1);
        if ( (*(_DWORD *)(a1 + 280) & 0x7B07F070) != 0 )
        {
          v7 = AcquireAcpiInterfaces(a1);
          if ( v7 < 0 )
          {
            ReleaseAcpiInterfaces((_QWORD *)a1);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_186;
            v34 = 54;
            Sizea[0] = v7;
            goto LABEL_102;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208),
          0LL);
        v36 = ((__int64 (__fastcall *)(__int64))qword_1400196B8)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208));
        if ( v36 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizea[0] = v36;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x37u,
            (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
            *(_QWORD *)Sizea);
        }
        if ( dword_1400197F8 == dword_140019184
          && _bittest64((const signed __int64 *)(a1 + 280), 0x30u)
          && qword_140019480 )
        {
          qword_140019480(a1);
        }
        v37 = *(_DWORD *)(a1 + 280);
        v38 = 0;
        LODWORD(v58) = 0;
        if ( (v37 & 0x70000000) != 0 )
        {
          v39 = AcpiEval_PPC(a1, &v58);
          if ( v39 >= 0 )
          {
            v38 = (unsigned int)v58;
          }
          else if ( v39 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v40) = 4;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v40,
                2,
                56,
                (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizea[0] = v39;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x39u,
              (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
              *(_QWORD *)Sizea);
          }
        }
        v41 = *(_DWORD *)(a1 + 280);
        v42 = 0;
        LODWORD(v58) = 0;
        if ( (v41 & 0x3000000) != 0 )
        {
          v43 = AcpiEval_TPC(a1, &v58);
          if ( v43 >= 0 )
          {
            v42 = (unsigned int)v58;
          }
          else if ( v43 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v44) = 4;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v44,
                2,
                58,
                (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizea[0] = v43;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x3Bu,
              (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
              *(_QWORD *)Sizea);
          }
        }
        v45 = ((__int64 (__fastcall *)(__int64))qword_1400196F8)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_140019188,
          0LL);
        ProcLibCapChange(a1, v38, v42, 100LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_140019188);
        if ( (*(_QWORD *)(a1 + 280) & 0x10FF300000LL) != 0 )
        {
          if ( *(_QWORD *)(a1 + 552) )
          {
            v46 = RegisterXsdDomain((_QWORD *)a1);
          }
          else
          {
            if ( !byte_140019708 )
              goto LABEL_160;
            v46 = v45 == 0;
          }
          if ( v46 )
          {
LABEL_160:
            if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
            {
              v47 = *(_QWORD *)(a1 + 280);
              if ( (v47 & 0x1000000000LL) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_1400196E8)(a1);
              }
              else if ( (v47 & 0x8000000) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_1400196E0)(a1);
              }
              else if ( (v47 & 0x80000000) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_1400196D8)(a1);
              }
              else
              {
                v48 = (void (__fastcall *)(__int64))qword_1400196C0;
                if ( (*(_QWORD *)(a1 + 280) & 0x73300000LL) == 0 )
                  v48 = (void (__fastcall *)(__int64))qword_1400196D0;
                v48(a1);
              }
            }
          }
        }
        if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
        {
          if ( ++dword_140019A70 == dword_140019184 )
          {
            v49 = CmRegisterMachineHiveLoadedNotification(
                    HwDebugDiagnosticRegistryHandler,
                    0LL,
                    v63,
                    &HwDebugHiveCallbackRegistrationHandle);
            if ( v49 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              Sizea[0] = v49;
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                4u,
                0x3Cu,
                (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
                *(_QWORD *)Sizea);
            }
          }
        }
        if ( _bittest64((const signed __int64 *)(a1 + 280), 0x25u) )
        {
          if ( ++dword_140019A6C == dword_140019184 )
            InitializeEnergyEstimation();
        }
        if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) == 0 )
          goto LABEL_183;
        if ( ((__int64 (__fastcall *)(__int64))qword_140019430)(a1) != 0x800000000000LL )
          *(_QWORD *)(a1 + 280) &= ~0x800000000000uLL;
        if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) != 0 )
        {
          EmiInit(a1);
        }
        else
        {
LABEL_183:
          if ( (Globals[0] & 0x800000000000LL) != 0 )
          {
            v50 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    a1);
            v51 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                    WdfDriverGlobals,
                    v50);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3352))(WdfDriverGlobals, v51);
          }
        }
        AcquireBiosPpmControl(a1);
        v7 = 0;
        goto LABEL_186;
      }
      v35 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 296) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 424) == 1 && (v35 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 296) = SetPerfStateIO;
      v35 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 312) = SetPerfStateIOHidden;
    }
    else
    {
      v35 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 280) = v35;
    goto LABEL_114;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v34 = 53;
    Sizea[0] = v33;
LABEL_102:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v34,
      (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
      *(_QWORD *)Sizea);
  }
LABEL_186:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019190);
LABEL_187:
  if ( v2 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_189:
  if ( (*(_DWORD *)(a1 + 272) & 0x7F077 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_IDLE_STATES_ERROR, &PPM_ETW_IDLE_STATES_ERROR_HV, 0, 0LL);
  v52 = *(_QWORD *)(a1 + 280);
  v53 = *(_DWORD *)(a1 + 272) & 0x40000000;
  if ( (v52 & 0x40000000) == 0 )
    v53 = *(_DWORD *)(a1 + 272) & 0x70000000;
  if ( (v53 & (unsigned int)v52) != (unsigned __int64)v53 )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PERF_STATES_ERROR, &PPM_ETW_PERF_STATES_ERROR_HV, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x3300000 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_THROTTLE_STATES_ERROR, &PPM_ETW_THROTTLE_STATES_ERROR_HV, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x80000000 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, &PPM_ETW_PCC_ERROR_HV, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x8000000 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_CPC_ERROR, &PPM_ETW_CPC_ERROR_HV, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v7;
}
