/*
 * XREFs of ProcLibDeviceStart @ 0x14002DBF4
 * Callers:
 *     EvtDevicePrepareHardware @ 0x140023850 (EvtDevicePrepareHardware.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x140002DE0 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     AcquireBiosPpmControl @ 0x140007E34 (AcquireBiosPpmControl.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x140007FF0 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     InitAcpiCStates @ 0x140024CE4 (InitAcpiCStates.c)
 *     InitAcpiCpc @ 0x1400254B8 (InitAcpiCpc.c)
 *     AcpiEval_OSC @ 0x1400284F4 (AcpiEval_OSC.c)
 *     AcpiEval_PDC @ 0x140028A80 (AcpiEval_PDC.c)
 *     AcpiEval_TPC @ 0x140029274 (AcpiEval_TPC.c)
 *     AcquireAcpiInterfaces @ 0x14002B558 (AcquireAcpiInterfaces.c)
 *     EnumerateControlMethods @ 0x14002D0D0 (EnumerateControlMethods.c)
 *     ValidatePerfDomainSymmetry @ 0x140030F30 (ValidatePerfDomainSymmetry.c)
 *     InitAcpiProcessorDomains @ 0x140036B8C (InitAcpiProcessorDomains.c)
 *     RegisterXsdDomain @ 0x140036E08 (RegisterXsdDomain.c)
 *     InitAcpiPerfStates @ 0x1400372A4 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x140037630 (InitAcpiThrottleStates.c)
 *     InitPepIdleStates @ 0x140037790 (InitPepIdleStates.c)
 *     EmiInit @ 0x140039F4C (EmiInit.c)
 *     InitializeEnergyEstimation @ 0x14003A3E8 (InitializeEnergyEstimation.c)
 *     InitPepPerfStates @ 0x14003A924 (InitPepPerfStates.c)
 *     InitPep @ 0x14003B614 (InitPep.c)
 *     QueryPepCapabilites @ 0x14003BBA8 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x14003BFC4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x14003C238 (InitAcpiLpiStates.c)
 *     ProcLibTraceSummary2 @ 0x14003EA70 (ProcLibTraceSummary2.c)
 *     ProcLibCapChange @ 0x14003FD48 (ProcLibCapChange.c)
 *     AcpiEval_PPC @ 0x14003FE44 (AcpiEval_PPC.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // r13d
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // rdi
  int v7; // eax
  int v8; // edx
  int v9; // ebx
  NTSTATUS v10; // eax
  int v11; // edx
  __int64 v12; // rax
  int v13; // eax
  int v14; // edx
  const wchar_t *v15; // rax
  PIO_WORKITEM WorkItem; // rax
  int v17; // edx
  __int16 v18; // r8
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  int v22; // edx
  int inited; // eax
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int PepCapabilites; // eax
  int v28; // edx
  int v29; // eax
  int v30; // edx
  __int64 v31; // rax
  int v32; // eax
  int v33; // edx
  unsigned __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rax
  int v37; // edx
  int v38; // edx
  int v39; // ecx
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rax
  int v43; // edx
  int v44; // eax
  int v45; // edx
  int v46; // eax
  int v47; // edx
  int v48; // eax
  int v49; // edx
  int v50; // r9d
  __int64 v51; // rcx
  void (__fastcall *v52)(_QWORD, _QWORD); // rax
  void (__fastcall *v53)(_QWORD); // rax
  int v54; // ebx
  int v55; // edx
  int v56; // eax
  unsigned int v57; // edi
  int v58; // eax
  int v59; // edx
  int v60; // eax
  unsigned int v61; // ebx
  int v62; // eax
  int v63; // edx
  int v64; // esi
  char v65; // al
  __int64 v66; // rax
  void (__fastcall *v67)(__int64); // rax
  int v68; // eax
  int v69; // edx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r8
  unsigned int v73; // ecx
  int Type; // [rsp+28h] [rbp-E0h]
  ULONG Size[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizeb[2]; // [rsp+30h] [rbp-D8h]
  int *v79; // [rsp+88h] [rbp-80h] BYREF
  int v80; // [rsp+90h] [rbp-78h] BYREF
  __int64 v81; // [rsp+98h] [rbp-70h] BYREF
  __int128 v82; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-58h]
  _QWORD v84[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v85[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v86; // [rsp+E0h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+F0h] [rbp-18h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+100h] [rbp-8h] BYREF
  _OWORD v89[3]; // [rsp+110h] [rbp+8h] BYREF
  int v90; // [rsp+140h] [rbp+38h]
  wchar_t v91; // [rsp+144h] [rbp+3Ch]

  v1 = *(_QWORD *)(a1 + 16);
  LODWORD(v83) = 0;
  v90 = *(_DWORD *)L"re";
  v91 = aRegistryMachin[26];
  v86 = 0LL;
  v84[1] = v89;
  v3 = 0;
  PreviousAffinity = 0LL;
  v82 = 0LL;
  v81 = 0LL;
  v80 = 0;
  Affinity = 0LL;
  v84[0] = 3538996LL;
  v85[0] = 1LL;
  v89[0] = *(_OWORD *)L"\\Registry\\Machine\\Software";
  v85[2] = 16LL;
  *(_QWORD *)(a1 + 264) = Globals;
  *(_QWORD *)(a1 + 280) = Globals;
  *(_QWORD *)(a1 + 272) = 0LL;
  v85[1] = &v86;
  v89[1] = *(_OWORD *)L"y\\Machine\\Software";
  v89[2] = *(_OWORD *)L"e\\Software";
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v1,
         0LL,
         2703744LL,
         0LL,
         v85,
         0LL,
         0LL) >= 0 )
  {
    if ( DWORD1(v86) )
    {
      *(_DWORD *)(a1 + 188) = DWORD1(v86);
      *(_BYTE *)(a1 + 185) = BYTE8(v86);
      *(_BYTE *)(a1 + 184) = 1;
      *(_WORD *)(a1 + 186) = 0x2000;
      *(_DWORD *)(a1 + 192) = 0;
    }
  }
  else
  {
    v86 = 0LL;
    HIDWORD(v86) = -1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        3,
        32,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
    }
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  v5 = HIDWORD(v86);
  v6 = (_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 48) = v5;
  *(_DWORD *)(a1 + 52) = v86;
  v7 = ((__int64 (__fastcall *)(__int64))qword_140014B10)(a1);
  v9 = v7;
  if ( v7 < 0 )
  {
    *(_QWORD *)(a1 + 280) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Size[0] = v7;
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        3,
        33,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        *(_QWORD *)Size);
    }
    goto LABEL_193;
  }
  if ( *v6 == -1 )
  {
    if ( _bittest64(&Globals, 0x2Du) )
    {
      *(_DWORD *)(a1 + 80) = dword_140014EA8;
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFC7FFFFFFFFuLL;
    }
  }
  else
  {
    v10 = IoSetDevicePropertyData(
            *(PDEVICE_OBJECT *)(a1 + 8),
            &PROCESSOR_NUMBER_PKEY,
            0,
            (ULONG)0,
            (DEVPROPTYPE)7,
            (ULONG)4,
            (PVOID)(a1 + 56));
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizea[0] = v10;
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        4,
        34,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        *(_QWORD *)Sizea);
    }
    KeProcessorGroupAffinity(&Affinity, (unsigned int)*v6);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v3 = 1;
  }
  *((_QWORD *)&v82 + 1) = &DEVPKEY_Device_BiosDeviceName;
  *(_QWORD *)&v82 = 24LL;
  v83 = 0LL;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64, _QWORD, __int64 *, int *))(WdfFunctions_01015 + 3472))(
          WdfDriverGlobals,
          v12,
          &v82,
          512LL,
          0LL,
          &v81,
          &v80);
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v13;
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        3,
        35,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        *(_QWORD *)Sizeb);
    }
    v15 = L"Unknown";
  }
  else
  {
    v15 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v81,
                             0LL);
  }
  *(_QWORD *)(a1 + 64) = v15;
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1160) = WorkItem;
  *(_BYTE *)(a1 + 1169) = 1;
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        4,
        36,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
    }
    v9 = -1073741670;
    goto LABEL_191;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400145B0,
    0LL);
  v79 = 0LL;
  if ( qword_140014758 )
  {
    v19 = AcpiEval_OSC(a1, (_DWORD *)qword_140014758, v18, &v79);
    if ( v19 >= 0 )
    {
      v21 = *v79;
      if ( (*v79 & 0xE) != 0 )
      {
        if ( (v21 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            1,
            37,
            (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
        }
        if ( (v21 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDDDDDDDDD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int8 *)(qword_140014758 + 13),
            *(unsigned __int8 *)(qword_140014758 + 12),
            *(unsigned __int8 *)(qword_140014758 + 11),
            Type);
        if ( (v21 & 8) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 2;
          Sizeb[0] = *(ULONG *)(qword_140014758 + 16);
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            1,
            39,
            (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
            *(_QWORD *)Sizeb);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 88) = v79;
      }
      goto LABEL_39;
    }
    if ( v19 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v20,
          2,
          40,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v19;
      LOBYTE(v20) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        3,
        41,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( qword_140014750 )
    AcpiEval_PDC(a1, (const void *)qword_140014750, word_140014760);
LABEL_39:
  EnumerateControlMethods(a1, (_DWORD *)(a1 + 1104));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    Sizeb[0] = *(ULONG *)(a1 + 1104);
    LOBYTE(v22) = 5;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      3,
      42,
      (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
      *(_QWORD *)Sizeb);
  }
  if ( (*(_QWORD *)(a1 + 280) & 0x111200000E00LL) != 0 )
  {
    inited = InitPep(a1);
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = inited;
        LOBYTE(v24) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v24,
          3,
          43,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizeb);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFEEEDFFFFF1FFuLL;
    }
  }
  if ( (*(_QWORD *)(a1 + 280) & 0x20E0000000000LL) != 0 )
  {
    v25 = InitAcpiLpiStates(a1);
    if ( v25 >= 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFDFFF80D88uLL;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v25;
      LOBYTE(v26) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v26,
        3,
        44,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( (*(_QWORD *)(a1 + 280) & 0x111200000E00LL) != 0 )
  {
    PepCapabilites = QueryPepCapabilites(a1);
    if ( PepCapabilites < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = PepCapabilites;
        LOBYTE(v28) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v28,
          3,
          45,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizeb);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFEEEDFFFFF1FFuLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x7F077) != 0 )
  {
    v29 = InitAcpiCStates((_QWORD *)a1);
    if ( v29 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v29;
      LOBYTE(v30) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v30,
        3,
        46,
        (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  v31 = *(_QWORD *)(a1 + 280);
  if ( (v31 & 0x7F077) == 0 )
  {
    v31 &= ~0x200uLL;
    *(_QWORD *)(a1 + 280) = v31;
  }
  if ( (v31 & 0x200000200LL) != 0 )
  {
    v32 = InitPepIdleStates(a1);
    if ( v32 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v32;
        LOBYTE(v33) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v33,
          3,
          47,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizeb);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFDFFFFFDFFuLL;
    }
  }
  v34 = *(_QWORD *)(a1 + 280);
  if ( (v34 & 0x1000000000LL) != 0 )
  {
    v35 = InitPepPerfStates(a1);
    v36 = *(_QWORD *)(a1 + 280);
    if ( v35 >= 0 )
    {
      v34 = v36 & 0xFFFFFFFF04CFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v34;
    }
    else
    {
      v37 = -1;
      v34 = v36 & 0xFFFFFFEFFFFFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v34;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v35;
        LOBYTE(v37) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v37,
          3,
          48,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizeb);
        v34 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v34 & 0x8000000) != 0 )
  {
    v39 = InitAcpiCpc(a1);
    v40 = *(_QWORD *)(a1 + 280);
    if ( v39 >= 0 )
    {
      v34 = v40 & 0xFFFFFFFF0CCFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v34;
    }
    else
    {
      v34 = v40 & 0xFFFFFFFFF7FFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v34;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v39;
        LOBYTE(v38) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v38,
          3,
          49,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizeb);
        v34 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v34 & 0x80000000) != 0 )
  {
    v41 = InitAcpiLegacyPcc(a1);
    v42 = *(_QWORD *)(a1 + 280);
    if ( v41 >= 0 )
    {
      v34 = v42 & 0xFFFFFFFF8CCFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v34;
    }
    else
    {
      v43 = 0x7FFFFFFF;
      v34 = v42 & 0xFFFFFFFF7FFFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v34;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v41;
        LOBYTE(v43) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v43,
          3,
          50,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizeb);
        v34 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v34 & 0x70000000) != 0 )
  {
    v44 = InitAcpiPerfStates(a1);
    if ( v44 < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFF8FFFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v44;
        LOBYTE(v45) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v45,
          3,
          51,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x3300000) != 0 )
  {
    v46 = InitAcpiThrottleStates(a1);
    if ( v46 < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCCFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v46;
        LOBYTE(v47) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v47,
          3,
          52,
          (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
  }
  if ( !qword_140014768 || (v48 = qword_140014768(a1), v9 = v48, v48 >= 0) )
  {
    v51 = *(_QWORD *)(a1 + 280);
    if ( (v51 & 0x60000000) != 0 && *(_BYTE *)(a1 + 424) == 127 )
    {
      if ( (v51 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 296) = qword_140014788;
        *(_QWORD *)(a1 + 328) = qword_1400147B0;
        *(_QWORD *)(a1 + 312) = qword_140014798;
      }
      if ( (v51 & 0x40000000) == 0 )
      {
LABEL_114:
        if ( (v51 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 336) = qword_1400147B8;
        if ( (v51 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 352) = qword_1400147C8;
          *(_QWORD *)(a1 + 360) = qword_1400147D0;
        }
        if ( (v51 & 0x2000000) != 0 && *(_BYTE *)(a1 + 480) == 127 )
        {
          *(_QWORD *)(a1 + 304) = qword_140014790;
          *(_QWORD *)(a1 + 320) = qword_1400147A0;
        }
        else if ( *(_BYTE *)(a1 + 480) == 1 && (v51 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 304) = SetPerfStateIO;
          *(_QWORD *)(a1 + 320) = SetPerfStateIOHidden;
        }
        else
        {
          *(_QWORD *)(a1 + 280) = v51 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1400147C0 )
          *(_QWORD *)(a1 + 344) = qword_1400147C0;
        InitAcpiProcessorDomains(a1, SetPerfStateIO, SetPerfStateIOHidden);
        if ( (*(_DWORD *)(a1 + 280) & 0x7B07F070) != 0 )
        {
          v9 = AcquireAcpiInterfaces(a1);
          if ( v9 < 0 )
          {
            v52 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 176);
            if ( v52 )
              v52(*(_QWORD *)(a1 + 8), AcpiNotifyCallback);
            v53 = *(void (__fastcall **)(_QWORD))(a1 + 120);
            if ( v53 )
              v53(*(_QWORD *)(a1 + 104));
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_190;
            v50 = 54;
            Sizeb[0] = v9;
            goto LABEL_102;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208),
          0LL);
        v54 = ((__int64 (__fastcall *)(__int64))qword_140014AD8)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208));
        if ( v54 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v54;
          LOBYTE(v55) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v55,
            3,
            55,
            (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
            *(_QWORD *)Sizeb);
        }
        if ( dword_140014C18 == dword_1400145A4
          && _bittest64((const signed __int64 *)(a1 + 280), 0x30u)
          && qword_1400148A0 )
        {
          qword_1400148A0(a1);
        }
        v56 = *(_DWORD *)(a1 + 280);
        v57 = 0;
        LODWORD(v79) = 0;
        if ( (v56 & 0x70000000) != 0 )
        {
          v58 = AcpiEval_PPC(a1, &v79);
          if ( v58 >= 0 )
          {
            v57 = (unsigned int)v79;
          }
          else if ( v58 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v59) = 4;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v59,
                2,
                56,
                (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizeb[0] = v58;
            LOBYTE(v59) = 3;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v59,
              3,
              57,
              (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v60 = *(_DWORD *)(a1 + 280);
        v61 = 0;
        LODWORD(v79) = 0;
        if ( (v60 & 0x3000000) != 0 )
        {
          v62 = AcpiEval_TPC(a1, (unsigned int *)&v79);
          if ( v62 >= 0 )
          {
            v61 = (unsigned int)v79;
          }
          else if ( v62 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v63) = 4;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v63,
                2,
                58,
                (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizeb[0] = v62;
            LOBYTE(v63) = 3;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v63,
              3,
              59,
              (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v64 = ((__int64 (__fastcall *)(__int64))qword_140014B18)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1400145A8,
          0LL);
        ProcLibCapChange(a1, v57, v61, 100LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1400145A8);
        if ( (*(_QWORD *)(a1 + 280) & 0x10FF300000LL) != 0 )
        {
          if ( *(_QWORD *)(a1 + 552) )
          {
            v65 = RegisterXsdDomain(a1);
          }
          else
          {
            if ( !byte_140014B28 )
              goto LABEL_164;
            v65 = v64 == 0;
          }
          if ( v65 )
          {
LABEL_164:
            if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
            {
              v66 = *(_QWORD *)(a1 + 280);
              if ( (v66 & 0x1000000000LL) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_140014B08)(a1);
              }
              else if ( (v66 & 0x8000000) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_140014B00)(a1);
              }
              else if ( (v66 & 0x80000000) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_140014AF8)(a1);
              }
              else
              {
                v67 = (void (__fastcall *)(__int64))qword_140014AE0;
                if ( (*(_QWORD *)(a1 + 280) & 0x73300000LL) == 0 )
                  v67 = (void (__fastcall *)(__int64))qword_140014AF0;
                v67(a1);
              }
            }
          }
        }
        if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
        {
          if ( ++dword_140014E90 == dword_1400145A4 )
          {
            v68 = CmRegisterMachineHiveLoadedNotification(
                    HwDebugDiagnosticRegistryHandler,
                    0LL,
                    v84,
                    &WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
            if ( v68 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              Sizeb[0] = v68;
              LOBYTE(v69) = 2;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                v69,
                4,
                60,
                (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
                *(_QWORD *)Sizeb);
            }
          }
        }
        if ( _bittest64((const signed __int64 *)(a1 + 280), 0x25u) )
        {
          if ( ++dword_140014E8C == dword_1400145A4 )
            InitializeEnergyEstimation();
        }
        if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) == 0 )
          goto LABEL_187;
        if ( ((__int64 (__fastcall *)(__int64))qword_140014850)(a1) != 0x800000000000LL )
          *(_QWORD *)(a1 + 280) &= ~0x800000000000uLL;
        if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) != 0 )
        {
          EmiInit(a1);
        }
        else
        {
LABEL_187:
          if ( (Globals & 0x800000000000LL) != 0 )
          {
            v70 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    a1);
            v71 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                    WdfDriverGlobals,
                    v70);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3352))(WdfDriverGlobals, v71);
          }
        }
        AcquireBiosPpmControl(a1);
        v9 = 0;
        goto LABEL_190;
      }
      v51 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 296) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 424) == 1 && (v51 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 296) = SetPerfStateIO;
      v51 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 312) = SetPerfStateIOHidden;
    }
    else
    {
      v51 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 280) = v51;
    goto LABEL_114;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v50 = 53;
    Sizeb[0] = v48;
LABEL_102:
    LOBYTE(v49) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v49,
      3,
      v50,
      (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
      *(_QWORD *)Sizeb);
  }
LABEL_190:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400145B0);
LABEL_191:
  if ( v3 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_193:
  if ( (*(_DWORD *)(a1 + 272) & 0x7F077 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, (int)&PPM_ETW_IDLE_STATES_ERROR, (int)&PPM_ETW_IDLE_STATES_ERROR_HV, 0, 0LL);
  v72 = *(_QWORD *)(a1 + 280);
  v73 = *(_DWORD *)(a1 + 272) & 0x40000000;
  if ( (v72 & 0x40000000) == 0 )
    v73 = *(_DWORD *)(a1 + 272) & 0x70000000;
  if ( (v73 & (unsigned int)v72) != (unsigned __int64)v73 )
    ProcLibTraceProcessorSpecificEvent(a1, (int)&PPM_ETW_PERF_STATES_ERROR, (int)&PPM_ETW_PERF_STATES_ERROR_HV, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x3300000 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(
      a1,
      (int)&PPM_ETW_THROTTLE_STATES_ERROR,
      (int)&PPM_ETW_THROTTLE_STATES_ERROR_HV,
      0,
      0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x80000000 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, (int)&PPM_ETW_PCC_ERROR, (int)&PPM_ETW_PCC_ERROR_HV, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x8000000 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, (int)&PPM_ETW_CPC_ERROR, (int)&PPM_ETW_CPC_ERROR_HV, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v9;
}
