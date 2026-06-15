/*
 * XREFs of ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800CDB80
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001D3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800CDE00 (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSrv::PowerSettingChanged(CAudioSrv *this, UUID *Uuid1)
{
  unsigned int v2; // ebx
  __int64 v6; // rdx
  int v7; // edi
  char v8; // si
  size_t Data1; // r8
  _DWORD *v10; // rcx
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r9
  RPC_STATUS Status; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF
  LARGE_INTEGER v16; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  Status = 0;
  if ( !Uuid1 )
    return 13LL;
  if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_ACDC_POWER_SOURCE, &Status) )
  {
    v7 = *(_DWORD *)&Uuid1[1].Data2;
    v8 = -1;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Fu,
        (__int64)&WPP_10c4b876f18f3e23b6722a19e2f08d05_Traceguids,
        v7);
    }
    if ( v7 )
    {
      if ( (unsigned int)(v7 - 1) <= 1 )
        v8 = 0;
    }
    else
    {
      v8 = 1;
    }
    if ( g_streamMonitorManager )
    {
      LOBYTE(v6) = v8;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)g_streamMonitorManager + 16LL))(g_streamMonitorManager, v6);
    }
  }
  else if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_SYSTEM_AWAYMODE, &Status) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x20u,
        (__int64)&WPP_10c4b876f18f3e23b6722a19e2f08d05_Traceguids,
        *(_DWORD *)&Uuid1[1].Data2);
    }
    return CAudioSrv::ProcessAwayModeStateChange(this, *(_DWORD *)&Uuid1[1].Data2 != 0);
  }
  else if ( *(_QWORD *)&Uuid1->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1
         && *(_QWORD *)Uuid1->Data4 == *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4
         && Uuid1[1].Data1 == 4 )
  {
    Data1 = Uuid1[1].Data1;
    v15 = 0;
    memcpy_0(&v15, &Uuid1[1].Data2, Data1);
    if ( v15 )
    {
      g_bLowPowerEpoch = 1;
    }
    else
    {
      g_bLowPowerEpoch = 0;
      g_timeLastExitFromLPE.QuadPart = 0LL;
      QueryPerformanceCounter(&g_timeLastExitFromLPE);
    }
    v10 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v10 > 4u && tlgKeywordOn((__int64)v10, 64LL) )
    {
      v15 = g_bLowPowerEpoch;
      v16 = g_timeLastExitFromLPE;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v11,
        (int)&unk_1801A052C,
        v12,
        v13,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
  return v2;
}
