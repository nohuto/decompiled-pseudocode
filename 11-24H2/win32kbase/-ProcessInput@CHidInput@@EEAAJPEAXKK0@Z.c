/*
 * XREFs of ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x140188E00
 * Callers:
 *     <none>
 * Callees:
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     LINPSourceFromPointerType @ 0x1400D9874 (LINPSourceFromPointerType.c)
 *     RIMGetPointerInputType @ 0x1400D98AC (RIMGetPointerInputType.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99A0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x140103E80 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x140105780 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x140105A84 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1401853C0 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188294 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ApiSetEditionRimDeviceReadNotification @ 0x140193198 (ApiSetEditionRimDeviceReadNotification.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x14020CD14 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 */

__int64 __fastcall CHidInput::ProcessInput(CHidInput *this, char *a2, unsigned int a3, unsigned int a4, char *a5)
{
  char *v5; // rbx
  int v10; // esi
  int IsInjectionDeviceFromKernelHandle; // eax
  struct DEVICEINFO *DeviceInfo; // rax
  CHidInput *v13; // rcx
  struct DEVICEINFO *v14; // rdi
  int v15; // ebx
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct CPTPProcessor *Processor; // rsi
  __int64 UserSessionState; // rax
  unsigned int v22; // esi
  __int64 v23; // rbx
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  int v29; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+28h] [rbp-40h]
  int v31; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v10 = a3 & 0x1C;
  if ( (a3 & 0x1C) != 0 )
    IsInjectionDeviceFromKernelHandle = *((_DWORD *)a2 + 48);
  else
    IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle(this, a5);
  DeviceInfo = CBaseInput::FindDeviceInfo(this, v5, IsInjectionDeviceFromKernelHandle);
  v14 = DeviceInfo;
  if ( !DeviceInfo )
    return 0LL;
  if ( *((_QWORD *)DeviceInfo + 57) )
  {
    v15 = 2;
    if ( !v10 )
    {
      v31 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 391LL);
    }
    if ( (*((_DWORD *)v14 + 46) & 0x80u) == 0 )
    {
      v31 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 392LL);
    }
    v16 = *(_QWORD *)v14;
    LOBYTE(v31) = 0;
    LOBYTE(v17) = CHidInput::IsTouchpadDevice(v13, v14);
    if ( !v17 || isChildPartition(v18) )
    {
      UserSessionState = W32GetUserSessionState(v18);
      CTouchProcessor::ProcessInput(*(CTouchProcessor **)(UserSessionState + 3264), v16, a2, a4, v29, v30, (bool *)&v31);
    }
    else
    {
      Processor = CPTPProcessorFactory::GetProcessor(v14);
      if ( !Processor )
      {
LABEL_16:
        v15 = 0;
LABEL_17:
        v22 = v15 | ((*((_DWORD *)v14 + 42) & 0x2000u) >> 10);
        if ( a3 == 4 && *((_DWORD *)v14 + 534) == 1 )
          v22 |= 0x80u;
        v23 = *(_QWORD *)(W32GetUserSessionState(v19) + 3064);
        v24 = RIMGetPointerInputType(*((_QWORD *)v14 + 57));
        v25 = LINPSourceFromPointerType(v24);
        CInputGlobals::UpdateInputGlobals(
          v23,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          v25,
          0,
          0,
          v22);
        return 0LL;
      }
      CPTPProcessor::ProcessInput(
        Processor,
        v16,
        (unsigned int *)a2,
        a4,
        -__CFSHR__(*((_DWORD *)v14 + 42), 14),
        -__CFSHR__(*(_DWORD *)(*((_QWORD *)v14 + 57) + 368LL), 5),
        (bool *)&v31);
      *((_BYTE *)this + 1344) = *((_BYTE *)Processor + 1984);
    }
    if ( (_BYTE)v31 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v26 = *((_DWORD *)DeviceInfo + 46);
  if ( (v26 & 0x100) != 0 || (v26 & 0x200) != 0 )
  {
    if ( (v26 & 0x40) == 0 )
    {
      v27 = W32GetUserSessionState(v13);
      CInputGlobals::UpdateInputGlobals(
        *(_QWORD *)(v27 + 3064),
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        4u,
        0,
        0,
        (*((_DWORD *)v14 + 42) & 0x2000u) >> 10);
    }
    ApiSetEditionRimDeviceReadNotification(a2, a3, a4, v5);
  }
  return 0LL;
}
