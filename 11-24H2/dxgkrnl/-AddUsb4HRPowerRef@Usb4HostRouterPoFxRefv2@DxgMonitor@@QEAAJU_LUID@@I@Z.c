/*
 * XREFs of ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z @ 0x140277AF4
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278878 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042E900 (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x14000145C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     Feature_Usb4FixDoublePoFxRef__private_IsEnabledDeviceUsageNoInline @ 0x1400917B8 (Feature_Usb4FixDoublePoFxRef__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DxgMonitor::Usb4HostRouterPoFxRefv2::AddUsb4HRPowerRef(
        DxgMonitor::Usb4HostRouterPoFxRefv2 *this,
        struct _LUID a2,
        unsigned int a3)
{
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // r8
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+28h] [rbp-50h]
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-38h] BYREF
  struct _LUID v25; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v26[16]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v27; // [rsp+80h] [rbp+8h] BYREF
  int v28; // [rsp+98h] [rbp+20h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v26, (DxgMonitor::Usb4HostRouterPoFxRefv2 *)((char *)this + 48));
  IsEnabledDeviceUsageNoInline = Feature_Usb4FixDoublePoFxRef__private_IsEnabledDeviceUsageNoInline();
  v7 = 0;
  if ( *((_BYTE *)this + 40) )
  {
    if ( IsEnabledDeviceUsageNoInline )
      goto LABEL_16;
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 780;
  }
  DxgkLogCodePointPacket(0x7Du, 0, a3, 0, *(_QWORD *)&a2);
  if ( g_DbgUsb4MonitorPowerOnDelayInSeconds )
  {
    Interval.QuadPart = -10000000LL * g_DbgUsb4MonitorPowerOnDelayInSeconds;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v8 = PoFxAddComponentRelation(
         *((_QWORD *)this + 3),
         *((unsigned int *)this + 4),
         *((_QWORD *)this + 4),
         &GUID_SPM_DEFAULT);
  v13 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry3(2LL, v8, *((_QWORD *)this + 3), *((unsigned int *)this + 4));
    WdLogGlobalForLineNumber = 823;
  }
  else
  {
    v14 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v16 = bTracingEnabled == 0;
    *(_QWORD *)(v14 + 24) = *((_QWORD *)this + 3);
    v17 = *((unsigned int *)this + 4);
    *(_QWORD *)(v14 + 32) = v17;
    WdLogGlobalForLineNumber = 798;
    if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    {
      v23 = 1;
      LODWORD(v22) = 0;
      McTemplateK0pqq_EtwWriteTransfer(v17, (__int64)&Dxgk_ReportPowerComponentState, v15, 0LL, v22, v23);
    }
    PoFxActivateComponent(*((_QWORD *)this + 3), *((unsigned int *)this + 4), 1LL);
    ++g_DbgUsb4ActivateCount;
    if ( (unsigned int)dword_14015E5A8 > 5 && tlgKeywordOn((__int64)&dword_14015E5A8, 4096LL) )
    {
      v28 = *((_DWORD *)this + 4);
      v27 = a3;
      v25 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v18,
        (__int64)&unk_140140B0A,
        v19,
        v20,
        (__int64)&v28,
        (__int64)&v25,
        (__int64)&v27);
    }
    *((_BYTE *)this + 40) = 1;
  }
  DxgkLogCodePointPacket(0x7Du, 1u, a3, v13, *(_QWORD *)&a2);
  v7 = v13;
LABEL_16:
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v26);
  return v7;
}
