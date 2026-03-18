/*
 * XREFs of ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1403251D0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x14028A2B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x140325500 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?MonitorGetDeviceObject@@YAJPEAXIPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x140325640 (-MonitorGetDeviceObject@@YAJPEAXIPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DxgkGetMonitorDeviceObject(
        const struct _LUID *a1,
        unsigned int a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v6; // rdi
  int v8; // eax
  __int64 v9; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  DXGADAPTER *v12; // rdi
  int v13; // eax
  unsigned int DeviceObject; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 LowPart; // [rsp+20h] [rbp-E0h]
  __int64 HighPart; // [rsp+28h] [rbp-D8h]
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h]
  char v24; // [rsp+60h] [rbp-A0h]
  unsigned int v25; // [rsp+68h] [rbp-98h] BYREF
  struct _LUID v26; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v28[144]; // [rsp+80h] [rbp-80h] BYREF

  v22 = -1;
  v6 = a2;
  v23 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2166;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2166);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2166);
  v25 = 0;
  if ( !a1 || !a3 || !a4 )
  {
    DeviceObject = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1827;
    goto LABEL_12;
  }
  v26 = *a1;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v26, (unsigned int)v6, &v26, &v25);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v27 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v26, &v27);
    v12 = v11;
    if ( v11 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v11, 0LL);
      DXGADAPTER::ReleaseReference(v12);
      if ( *((_QWORD *)v12 + 390) )
      {
        v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28, 0LL);
        DeviceObject = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry2(3LL, v12, v13);
          WdLogGlobalForLineNumber = 1898;
        }
        else
        {
          DeviceObject = MonitorGetDeviceObject(v12, v25, a3, a4);
        }
      }
      else
      {
        DeviceObject = -1073741811;
        WdLogSingleEntry2(2LL, v12, -1073741811LL);
        WdLogGlobalForLineNumber = 1888;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkGetMonitorDeviceObject is called on the non-display adapter 0x%I64x, returning 0x%I64x.",
          (__int64)v12,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
    }
    else
    {
      DeviceObject = -1073741811;
      WdLogSingleEntry3(3LL, v26.LowPart, v26.HighPart, -1073741811LL);
      WdLogGlobalForLineNumber = 1862;
    }
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v22);
    }
    return DeviceObject;
  }
  WdLogSingleEntry4(2LL, a1->LowPart, a1->HighPart, v6, v8);
  HighPart = a1->HighPart;
  LowPart = a1->LowPart;
  WdLogGlobalForLineNumber = 1847;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to find the real target ID from Adapter LUID (0x%I64x, 0x%I64x) target ID 0x%I64x, returning 0x%I64x",
    LowPart,
    HighPart,
    v6,
    v9,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v22);
  return (unsigned int)v9;
}
