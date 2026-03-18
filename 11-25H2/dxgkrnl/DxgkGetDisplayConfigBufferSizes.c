/*
 * XREFs of DxgkGetDisplayConfigBufferSizes @ 0x140372D50
 * Callers:
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x140372AB0 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 *     ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x140374170 (-GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z @ 0x1401C10C8 (-GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkGetPathsModality @ 0x140375C90 (DxgkGetPathsModality.c)
 */

__int64 __fastcall DxgkGetDisplayConfigBufferSizes(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // rsi
  struct DXGGLOBAL *Global; // rax
  int CachedBufferSizes; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // eax
  __int64 (__fastcall *v11)(struct DXGADAPTER *, void *); // rbx
  struct DXGGLOBAL *v12; // rax
  int v13; // eax
  int PathsModality; // eax
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h]
  char v20; // [rsp+60h] [rbp-10h]
  __int64 v21; // [rsp+B0h] [rbp+40h] BYREF

  v18 = -1;
  v4 = (unsigned int)a1;
  v19 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2174;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2174);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2174);
  v21 = (unsigned int)v4;
  Global = DXGGLOBAL::GetGlobal();
  CachedBufferSizes = QDC_CACHE::GetCachedBufferSizes(
                        *((QDC_CACHE **)Global + 179),
                        (unsigned int)v4 & 0xFFFFFFEF,
                        a2,
                        0LL);
  if ( CachedBufferSizes >= 0 )
    goto LABEL_4;
  if ( (v4 & 0x40000000) != 0 )
  {
    v13 = 1;
LABEL_20:
    HIDWORD(v21) = v13;
    CachedBufferSizes = 0;
LABEL_16:
    *a2 = v13;
    if ( !v13 )
      CachedBufferSizes = -1073741637;
    goto LABEL_18;
  }
  v10 = v4 & 7;
  if ( v10 == 1 )
  {
    v11 = CalcAllPathDisplayConfigBufferSizeCallback;
LABEL_14:
    v12 = DXGGLOBAL::GetGlobal();
    CachedBufferSizes = DXGGLOBAL::IterateAdaptersWithCallback(
                          (__int64)v12,
                          (__int64 (__fastcall *)(_QWORD *, __int64))v11,
                          (__int64)&v21,
                          4);
    if ( CachedBufferSizes >= 0 )
    {
      v13 = HIDWORD(v21);
      goto LABEL_16;
    }
LABEL_18:
    WdLogSingleEntry3(4LL, v4, CachedBufferSizes, *a2);
    WdLogGlobalForLineNumber = 821;
LABEL_4:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v18);
    }
    return (unsigned int)CachedBufferSizes;
  }
  if ( v10 == 2 )
  {
    v11 = (__int64 (__fastcall *)(struct DXGADAPTER *, void *))CalcActivePathDisplayConfigBufferSizeCallback;
    goto LABEL_14;
  }
  if ( v10 != 4 )
  {
    CachedBufferSizes = -1073741811;
    WdLogSingleEntry1(3LL, v4);
    WdLogGlobalForLineNumber = 804;
    goto LABEL_18;
  }
  PathsModality = DxgkGetPathsModality(15LL);
  v15 = PathsModality;
  if ( PathsModality == -1073741789 )
  {
    v13 = 0;
    goto LABEL_20;
  }
  WdLogSingleEntry1(2LL, PathsModality);
  WdLogGlobalForLineNumber = 789;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Unexpected status returned (expected STATUS_BUFFER_TOO_SMALL, obtained Status = 0x%I64x)",
    v15,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( (int)v15 >= 0 )
    LODWORD(v15) = -1073741823;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v18);
  return (unsigned int)v15;
}
