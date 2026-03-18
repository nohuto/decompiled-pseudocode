/*
 * XREFs of ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006237C
 * Callers:
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x14005E2E4 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x140062314 (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1403BFCE0 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x140033AB4 (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x140094360 (Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0qiiiiiqq_EtwWriteTransfer @ 0x14009451C (McTemplateK0qiiiiiqq_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1400A1380 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403D3668 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 */

void __fastcall BLTQUEUE::QuantizeVSync(BLTQUEUE *this, int a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // r9
  char v9; // r12
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // r13
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r15
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  _BYTE v26[8]; // [rsp+60h] [rbp-68h] BYREF
  char *v27; // [rsp+68h] [rbp-60h]
  char v28; // [rsp+88h] [rbp-40h]

  v28 = 0;
  v27 = (char *)this + 456;
  Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline();
  if ( (unsigned int)((__int64 (*)(void))Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline)() )
    DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v26);
  v8 = *((unsigned int *)this + 96);
  v9 = 0;
  v10 = *((unsigned int *)this + 97);
  v11 = *a4 * v8 / (*a3 * v10);
  *((_QWORD *)this + 59) = v11;
  v12 = v11;
  v13 = *a3 * v10 * (unsigned int)v11 / v8;
  *((_QWORD *)this + 60) = v13;
  v14 = v13;
  if ( v13 > *a4 )
  {
    v9 = 1;
    *((_QWORD *)this + 59) = v12 - 1;
    v14 = *a3 * v10 * (unsigned int)(v12 - 1) / v8;
    *((_QWORD *)this + 60) = v14;
  }
  v15 = v14 - *a3;
  v16 = 100 * v10 * *a3 / v8;
  if ( (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline(*a3, 100 * v10 * *a3 % v8) )
  {
    v20 = *((_QWORD *)this + 59);
    v21 = *((_QWORD *)this + 60);
    v22 = *((_QWORD *)this + 61);
    DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v26);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qiiiiiqq_EtwWriteTransfer(v24, v23, v25, a2, v20, *a3, v21, v15, v16, v9, *((_DWORD *)this + 103));
    if ( (v20 | v21 | v22) < 0 )
    {
      MicrosoftTelemetryAssertTriggeredMsgKM("QuantizeVSync: Errors detected in vsync values");
      WdLogSingleEntry3(2LL, v22, v20, v21);
      WdLogGlobalForLineNumber = 3434;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"QuantizeVSync: Errors detected in vsync values. LastVSyncTime: %I64x, CurRefreshCount: %I64x, LastVSyncTimeSnapped: %I64x",
        v22,
        v20,
        v21,
        0LL,
        0LL);
      if ( (int)DxgCreateLiveDumpWithWdLogs2(403LL, 2084LL, v22, v20, v21, 0x100000000LL) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3446;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 3446LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0qiiiiiqq_EtwWriteTransfer(
      v18,
      v17,
      v19,
      a2,
      *((_QWORD *)this + 59),
      *a3,
      *((_QWORD *)this + 60),
      v15,
      v16,
      v9,
      *((_DWORD *)this + 103));
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v26);
}
