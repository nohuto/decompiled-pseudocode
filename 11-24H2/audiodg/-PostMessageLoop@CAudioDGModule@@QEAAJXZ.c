/*
 * XREFs of ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x14006559C
 * Callers:
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14001D3A8 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DD8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_ @ 0x1400659D0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDGModule::PostMessageLoop(CAudioDGModule *this)
{
  struct ATL::_ATL_OBJMAP_ENTRY30 **v2; // rdi
  HRESULT v3; // ebx
  struct ATL::_ATL_OBJMAP_ENTRY30 **v4; // rax
  DWORD v5; // ecx
  _QWORD *v6; // rcx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
  }
  v2 = off_1400C3510;
  v3 = 0;
  v4 = (struct ATL::_ATL_OBJMAP_ENTRY30 **)off_1400C3518;
  while ( v2 < v4 && !v3 )
  {
    if ( *v2 )
    {
      v5 = *((_DWORD *)*v2 + 10);
      if ( v5 )
      {
        v3 = CoRevokeClassObject(v5);
        v4 = (struct ATL::_ATL_OBJMAP_ENTRY30 **)off_1400C3518;
      }
    }
    ++v2;
  }
  if ( *((_BYTE *)this + 96) )
    Sleep(*((_DWORD *)this + 23));
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    NtDeleteWnfStateName(&g_DeviceGraphWnfStateName);
    g_DeviceGraphWnfStateName = 0LL;
    g_DeviceGraphWnfStateNameCreated = 0;
  }
  if ( fRpcStarted )
  {
    if ( RpcServerUnregisterIfEx(&unk_14009BBC0, 0LL, 1)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
    }
    fRpcStarted = 0;
  }
  CleanupDeviceAPI();
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&qword_1400C46E8);
  NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
  v8 = -1;
  RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, &v8, 4LL, 0LL);
  CoUninitialize();
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
    v6 = WPP_GLOBAL_Control;
  }
  if ( v3 < 0 )
  {
    if ( v6 != &WPP_GLOBAL_Control && (*((_DWORD *)v6 + 7) & 0x40000) != 0 && *((_BYTE *)v6 + 25) >= 2u )
      WPP_SF_D(v6[2], 19LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
    AudDGTraceLoggingErrorHelper("CAudioDGModule::PostMessageLoop", 0x1FFu, v3);
  }
  return (unsigned int)v3;
}
