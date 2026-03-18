/*
 * XREFs of ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01CDFE4
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01CE870 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0057334 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0058B74 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ?GetButtonChange@CTouchProcessor@@AEAA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C00E3F62 (-GetButtonChange@CTouchProcessor@@AEAA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C00E47AE (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4C14 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01B4F70 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01B53CC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01BAB44 (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C01C2334 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01CD4F4 (-NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01D8CCC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x1C01DA818 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01DA8F8 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C02061B0 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetInputTransformOnInput @ 0x1C0207E3C (ApiSetInputTransformOnInput.c)
 */

__int64 __fastcall CTouchProcessor::PopulatePointerInfoNode(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3,
        unsigned int a4)
{
  unsigned int v7; // ebx
  int v9; // edx
  int v10; // r8d
  char v11; // si
  char v12; // dl
  unsigned __int16 updated; // ax
  int v14; // edx
  int v15; // r8d
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  const struct tagPOINTEREVENTINT *v18; // r14
  unsigned int v19; // ecx
  CInputDest *v20; // rax
  int v21; // r14d
  int v22; // r15d
  char v23; // cl
  unsigned int v24; // eax
  int v25; // eax
  int ShouldForegroundActivate; // eax
  char v27; // r11
  int v28; // r14d
  int v29; // ecx
  __int64 v30; // rcx
  int v31; // r8d
  char v32; // r11
  int v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // rdx
  int v36; // edx
  int v37; // r8d
  int v39; // [rsp+28h] [rbp-D8h]
  int v40; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v41[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+54h] [rbp-ACh]
  unsigned int v43; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v44; // [rsp+5Ch] [rbp-A4h] BYREF
  _OWORD v45[7]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v46[7]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v47[7]; // [rsp+140h] [rbp+40h] BYREF
  char v48; // [rsp+1B0h] [rbp+B0h]
  _BYTE v49[113]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v50; // [rsp+231h] [rbp+131h]
  __int16 v51; // [rsp+235h] [rbp+135h]
  char v52; // [rsp+237h] [rbp+137h]
  _BYTE v53[128]; // [rsp+240h] [rbp+140h] BYREF

  v7 = 0;
  memset(v47, 0, sizeof(v47));
  v48 = 0;
  v41[0] = 0;
  v43 = 0;
  v44 = 0;
  if ( this[5] != KeGetCurrentThread() )
  {
    v42 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1227);
  }
  if ( !a2 )
  {
    v42 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7963);
  }
  if ( *((_DWORD *)a2 + 56) != 2 )
  {
    v42 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1228);
  }
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v9 || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      41,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  *((_DWORD *)a3 + 2) = -1;
  if ( !*((_DWORD *)a3 + 45) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v12 = 0;
    }
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        3u,
        4u,
        0x2Au,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids,
        *((_DWORD *)a3 + 43));
    *((_DWORD *)a3 + 43) = 0;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v9 || (_BYTE)v10 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        4,
        43,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    InputTraceLogging::Pointer::DropInput();
    goto LABEL_125;
  }
  updated = CTouchProcessor::UpdateActivePointer(
              (CTouchProcessor *)this,
              a2,
              a3,
              (struct CInputDest *)v47,
              &v43,
              v41,
              &v44,
              a4,
              *((_WORD *)a3 + 86));
  if ( !updated )
  {
    if ( (*((_DWORD *)a3 + 45) & 2) != 0 || (*((_DWORD *)a3 + 1) & 0x200) == 0 || *((_QWORD *)a3 + 24) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_L(WPP_GLOBAL_Control->AttachedDevice, v14, v15, 44, 2);
      }
    }
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v11 = 0;
    if ( (_BYTE)v14 || v11 )
    {
      v17 = 45;
LABEL_68:
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        v16->AttachedDevice,
        v14,
        v15,
        v16->DeviceExtension,
        5,
        4,
        v17,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
      goto LABEL_125;
    }
    goto LABEL_125;
  }
  if ( !*((_DWORD *)a3 + 119) )
  {
    if ( !LODWORD(v47[0]) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = (struct CPointerInfoNode *)((char *)a3 + 160);
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_HL(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          updated,
          4,
          v39,
          47,
          v40,
          updated,
          *((_WORD *)a3 + 80));
      }
      else
      {
        v18 = (struct CPointerInfoNode *)((char *)a3 + 160);
      }
      InputTraceLogging::Pointer::NoTargetFound(a2, v18);
    }
    v19 = *(_DWORD *)a3 & 0xFFFFFFFB | (v41[0] >> 2) & 4;
    *(_DWORD *)a3 = v19;
    if ( (v19 & 4) != 0 )
    {
      v50 = 0;
      v51 = 0;
      v52 = 0;
      memset(v49, 0, sizeof(v49));
      v20 = (CInputDest *)v49;
      v21 = 1;
      v22 = 0;
    }
    else
    {
      v20 = CInputDest::CInputDest((CInputDest *)v53, (__int64 **)v47);
      v21 = 0;
      v22 = 2;
    }
    CInputDest::operator=((__int64)a3 + 24, v20);
    if ( v22 )
      CInputDest::SetEmpty((CInputDest *)v53);
    if ( v21 )
      CInputDest::SetEmpty((CInputDest *)v49);
    *((_DWORD *)a3 + 36) = 0;
    if ( CInputDest::IsCompositionInput((CInputDest *)v47) )
    {
      *(_DWORD *)a3 |= 0x400u;
      *((_DWORD *)a3 + 1) |= 0x80u;
    }
    v23 = v41[0];
    if ( SLOBYTE(v41[0]) < 0 && gptiManipulationThread )
    {
      v24 = v44;
      *((_DWORD *)a3 + 1) |= 0x100u;
      *((_DWORD *)a3 + 87) = v24;
    }
    if ( (v23 & 0x20) != 0 )
    {
      v25 = *(_DWORD *)a3 | 0x500;
      *((_DWORD *)a3 + 36) = 1;
      *(_DWORD *)a3 = v25;
      if ( (v23 & 0x40) != 0 )
        *(_DWORD *)a3 = v25 | 0x800;
    }
    CInputDest::operator=((__int64)a3 + 352, (__int64)v47);
    *((_QWORD *)a3 + 24) = CInputDest::GetWindowHandle((CInputDest *)v47);
    *((_DWORD *)a3 + 44) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a3 + 59) = 1;
    ShouldForegroundActivate = CPointerInfoNode::ShouldForegroundActivate(a3);
    v27 = v41[0];
    *((_DWORD *)a3 + 84) = ShouldForegroundActivate == 0;
    if ( (v27 & 1) != 0 )
      *((_DWORD *)a3 + 45) |= 1u;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFE7FFF | ((v27 & 4) << 14) | ((v27 & 2) << 14);
    v28 = *((_DWORD *)a3 + 45);
    v29 = *((_DWORD *)a3 + 42);
    *((_DWORD *)a3 + 45) = v28 & 0x7FE1F7;
    v30 = (unsigned int)(v29 - 2);
    if ( (_DWORD)v30 )
    {
      v30 = (unsigned int)(v30 - 1);
      if ( !(_DWORD)v30 )
      {
        *((_DWORD *)a3 + 66) &= 7u;
        *((_DWORD *)a3 + 67) &= 0xFu;
LABEL_100:
        *((_DWORD *)a3 + 64) = CTouchProcessor::GetButtonChange(v30, v43, v28 & 0x1F0);
        if ( (v28 & 1) != 0 || (v28 & 0x20000) == 0 || (v33 = 1, (v28 & 2) == 0) )
          v33 = 0;
        v34 = v33 | *(_DWORD *)a3 & 0xFFFFFFFE;
        *(_DWORD *)a3 = v34;
        if ( v43 != v31 )
          *(_DWORD *)a3 = v34 & 0xFFFFFFFE;
        if ( HIDWORD(v47[5]) )
        {
          v45[0] = v47[0];
          v45[2] = v47[2];
          v45[1] = v47[1];
          v45[4] = v47[4];
          v45[3] = v47[3];
          v45[6] = v47[6];
          v45[5] = v47[5];
          if ( ApiSetEditionGetInputDelegate(v45) && (*((_DWORD *)a3 + 1) & 0x100) == 0 )
            *(_DWORD *)a3 |= 0x100000u;
          v32 = v41[0];
        }
        *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFBFFF | ((v32 & 8) << 11);
        if ( !CPointerInfoNode::IsForManipulationThread(a3) )
        {
          v35 = *((_QWORD *)a3 + 31);
          v46[0] = v47[0];
          v46[2] = v47[2];
          v46[1] = v47[1];
          v46[4] = v47[4];
          v46[3] = v47[3];
          v46[6] = v47[6];
          v46[5] = v47[5];
          if ( (unsigned int)ApiSetInputTransformOnInput(v46, v35, (char *)a3 + 160) )
            *((_DWORD *)a3 + 45) |= 0x400000u;
        }
        InputTraceLogging::Pointer::AssignPointerId(a2, (struct CPointerInfoNode *)((char *)a3 + 160));
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
          || (LOBYTE(v36) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v36) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v37) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v37) = 0;
        }
        if ( (_BYTE)v36 || (_BYTE)v37 )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v36,
            v37,
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            4,
            48,
            (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
        v7 = 1;
        goto LABEL_125;
      }
      if ( (_DWORD)v30 != 2 )
        goto LABEL_100;
    }
    *((_DWORD *)a3 + 67) &= 7u;
    *((_DWORD *)a3 + 66) = 0;
    goto LABEL_100;
  }
  InputTraceLogging::Pointer::DropInput();
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v11 = 0;
  if ( (_BYTE)v14 || v11 )
  {
    v17 = 46;
    goto LABEL_68;
  }
LABEL_125:
  CInputDest::SetEmpty((CInputDest *)v47);
  return v7;
}
