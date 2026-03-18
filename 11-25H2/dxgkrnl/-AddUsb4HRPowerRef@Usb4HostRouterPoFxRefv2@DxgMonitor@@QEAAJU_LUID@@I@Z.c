/*
 * XREFs of ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z @ 0x140270968
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1402716D8 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042CA10 (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x14000145C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002F83C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034DA0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 */

__int64 __fastcall DxgMonitor::Usb4HostRouterPoFxRefv2::AddUsb4HRPowerRef(
        DxgMonitor::Usb4HostRouterPoFxRefv2 *this,
        struct _LUID a2,
        unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+28h] [rbp-50h]
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-38h] BYREF
  struct _LUID v23; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v24[40]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+80h] [rbp+8h] BYREF
  int v26; // [rsp+98h] [rbp+20h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v24, (DxgMonitor::Usb4HostRouterPoFxRefv2 *)((char *)this + 48));
  if ( *((_BYTE *)this + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 768;
  }
  DxgkLogCodePointPacket(0x7Du, 0, a3, 0, *(_QWORD *)&a2);
  if ( g_DbgUsb4MonitorPowerOnDelayInSeconds )
  {
    Interval.QuadPart = -10000000LL * g_DbgUsb4MonitorPowerOnDelayInSeconds;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v6 = PoFxAddComponentRelation(
         *((_QWORD *)this + 3),
         *((unsigned int *)this + 4),
         *((_QWORD *)this + 4),
         &GUID_SPM_DEFAULT);
  v11 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry3(2LL, v6, *((_QWORD *)this + 3), *((unsigned int *)this + 4));
    WdLogGlobalForLineNumber = 810;
  }
  else
  {
    v12 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    v14 = bTracingEnabled == 0;
    *(_QWORD *)(v12 + 24) = *((_QWORD *)this + 3);
    v15 = *((unsigned int *)this + 4);
    *(_QWORD *)(v12 + 32) = v15;
    WdLogGlobalForLineNumber = 785;
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    {
      v21 = 1;
      LODWORD(v20) = 0;
      McTemplateK0pqq_EtwWriteTransfer(v15, (__int64)&Dxgk_ReportPowerComponentState, v13, 0LL, v20, v21);
    }
    PoFxActivateComponent(*((_QWORD *)this + 3), *((unsigned int *)this + 4), 1LL);
    ++g_DbgUsb4ActivateCount;
    if ( (unsigned int)dword_14015B5B8 > 5 && tlgKeywordOn((__int64)&dword_14015B5B8, 4096LL) )
    {
      v26 = *((_DWORD *)this + 4);
      v25 = a3;
      v23 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v16,
        (__int64)&unk_14013DF32,
        v17,
        v18,
        (__int64)&v26,
        (__int64)&v23,
        (__int64)&v25);
    }
    *((_BYTE *)this + 40) = 1;
  }
  DxgkLogCodePointPacket(0x7Du, 1u, a3, v11, *(_QWORD *)&a2);
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v24);
  return v11;
}
