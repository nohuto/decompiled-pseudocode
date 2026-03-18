/*
 * XREFs of DxgkIsSourceInHardwareClone @ 0x1403DFE70
 * Callers:
 *     <none>
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
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402D5A28 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall DxgkIsSourceInHardwareClone(struct _LUID *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v4; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  DXGADAPTER *v8; // r15
  int v9; // eax
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+20h] [rbp-E0h]
  __int64 HighPart; // [rsp+20h] [rbp-E0h]
  __int64 v20; // [rsp+28h] [rbp-D8h]
  __int64 v21; // [rsp+28h] [rbp-D8h]
  __int64 LowPart; // [rsp+28h] [rbp-D8h]
  unsigned int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h]
  char v26; // [rsp+68h] [rbp-98h]
  unsigned __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[144]; // [rsp+80h] [rbp-80h] BYREF

  v24 = -1;
  v4 = a2;
  v25 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2175;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2175);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2175);
  v27 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v27);
  v8 = v7;
  if ( v7 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v7, 0LL);
    v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28, 0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, v9);
      LowPart = a1->LowPart;
      HighPart = a1->HighPart;
      WdLogGlobalForLineNumber = 9341;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to acquire shared access on adapter luid (0x%I64x::0x%I64x) with status (0x%I64x)",
        HighPart,
        LowPart,
        v10,
        0LL,
        0LL);
    }
    else
    {
      v23 = 0;
      v11 = DmmEnumClientVidPnPathTargetsFromSource(v8, v4, 1LL, &v23);
      v10 = v11;
      if ( v11 >= 0 )
      {
        *a3 = v23 != -1;
      }
      else
      {
        WdLogSingleEntry4(2LL, a1->HighPart, a1->LowPart, v4, v11);
        v20 = a1->LowPart;
        v17 = a1->HighPart;
        WdLogGlobalForLineNumber = 9358;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed in calling DmmEnumClientVidPnPathTargetsFromSource for adapter luid (0x%I64x::0x%I64x) and source (0x%I"
           "64x) with status (0x%I64x)",
          v17,
          v20,
          v4,
          v10,
          0LL);
      }
    }
    DXGADAPTER::ReleaseReference(v8);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v24);
    }
    return (unsigned int)v10;
  }
  else
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    v21 = a1->LowPart;
    v18 = a1->HighPart;
    WdLogGlobalForLineNumber = 9368;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Can't reference adapter by luid (0x%I64x::0x%I64x).",
      v18,
      v21,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v24);
    return 3221225485LL;
  }
}
