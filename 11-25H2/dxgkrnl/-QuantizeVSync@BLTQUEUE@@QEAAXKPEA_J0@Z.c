/*
 * XREFs of ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x140061AC0
 * Callers:
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x140061A58 (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140305090 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1403053B8 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003124C (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x140091F04 (Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0qiiiiiqq_EtwWriteTransfer @ 0x14009206C (McTemplateK0qiiiiiqq_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14009F020 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403DA558 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 */

void __fastcall BLTQUEUE::QuantizeVSync(BLTQUEUE *this, int a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // r10
  char v9; // r11
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+28h] [rbp-80h]
  __int64 v20; // [rsp+30h] [rbp-78h]
  _BYTE v21[8]; // [rsp+60h] [rbp-48h] BYREF
  char *v22; // [rsp+68h] [rbp-40h]
  char v23; // [rsp+88h] [rbp-20h]

  v22 = (char *)this + 456;
  v23 = 0;
  if ( (unsigned int)((__int64 (*)(void))Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline)() )
    DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v21);
  v8 = *((unsigned int *)this + 96);
  v9 = 0;
  v10 = *((unsigned int *)this + 97);
  v11 = *a4 * v8 / (*a3 * v10);
  *((_QWORD *)this + 59) = v11;
  v12 = v11;
  v13 = v10 * *a3 * (unsigned int)v11 / v8;
  *((_QWORD *)this + 60) = v13;
  v14 = v13;
  if ( v13 > *a4 )
  {
    v9 = 1;
    *((_QWORD *)this + 59) = v12 - 1;
    v14 = v10 * *a3 * (unsigned int)(v12 - 1) / v8;
    *((_QWORD *)this + 60) = v14;
  }
  v15 = *a3;
  v16 = v14 - *a3;
  v17 = 100 * v10 * *a3 % v8;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qiiiiiqq_EtwWriteTransfer(
      *((_DWORD *)this + 103),
      v17,
      v16,
      a2,
      *((_QWORD *)this + 59),
      *a3,
      *((_QWORD *)this + 60),
      v16,
      100 * v10 * *a3 / v8,
      v9,
      *((_DWORD *)this + 103));
  if ( (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline(v15, v17, v16)
    && (*((int *)this + 123) < 0 || *((int *)this + 119) < 0 || *((int *)this + 121) < 0) )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("QuantizeVSync: Errors detected in vsync values");
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 61), *((_QWORD *)this + 59), *((_QWORD *)this + 60));
    v20 = *((_QWORD *)this + 60);
    v19 = *((_QWORD *)this + 59);
    v18 = *((_QWORD *)this + 61);
    WdLogGlobalForLineNumber = 2972;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"QuantizeVSync: Errors detected in vsync values. LastVSyncTime: %I64x, CurRefreshCount: %I64x, LastVSyncTimeSnapped: %I64x",
      v18,
      v19,
      v20,
      0LL,
      0LL);
    DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v21);
    if ( (int)DxgCreateLiveDumpWithWdLogs2(
                403LL,
                2084LL,
                *((_QWORD *)this + 61),
                *((_QWORD *)this + 59),
                *((_QWORD *)this + 60),
                0x100000000LL) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2987;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 2987LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v21);
}
