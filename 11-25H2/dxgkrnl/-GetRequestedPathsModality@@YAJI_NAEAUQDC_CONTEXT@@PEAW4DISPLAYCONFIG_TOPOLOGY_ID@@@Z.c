/*
 * XREFs of ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x140374170
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x140373818 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x1402E7D24 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x140372D50 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     DxgkGetPathsModality @ 0x140375C90 (DxgkGetPathsModality.c)
 */

__int64 __fastcall GetRequestedPathsModality(
        __int64 a1,
        __int64 a2,
        struct QDC_CONTEXT *a3,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a4)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  char v8; // r13
  unsigned __int16 v9; // ax
  int PathsModality; // ebx
  __int64 result; // rax
  __int64 v12; // rcx
  int DisplayConfigBufferSizes; // eax
  __int64 v14; // rbx
  __int64 v15; // [rsp+28h] [rbp-69h]
  int v16; // [rsp+58h] [rbp-39h] BYREF
  __int128 v17; // [rsp+60h] [rbp-31h]
  __int64 v18; // [rsp+70h] [rbp-21h]
  __int16 v19; // [rsp+78h] [rbp-19h]
  __int128 v20; // [rsp+80h] [rbp-11h]
  __int64 v21; // [rsp+90h] [rbp-1h]
  struct D3DKMT_GETPATHSMODALITY *v22; // [rsp+98h] [rbp+7h]
  char v23; // [rsp+A0h] [rbp+Fh]
  int v24; // [rsp+A4h] [rbp+13h]
  int v25; // [rsp+A8h] [rbp+17h]
  __int64 v26; // [rsp+ACh] [rbp+1Bh]
  __int64 v27; // [rsp+B8h] [rbp+27h]
  unsigned int v28; // [rsp+108h] [rbp+77h] BYREF

  v4 = *((_DWORD *)a3 + 1);
  v5 = (unsigned int)a1;
  v8 = a2;
  if ( !v4 )
  {
    WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
    result = 3221225507LL;
    WdLogGlobalForLineNumber = 1236;
    return result;
  }
  v28 = 0;
  if ( (a1 & 0x200000) != 0 )
  {
    LOWORD(v4) = 2;
    if ( (a1 & 0x10) != 0 )
    {
      v12 = 1LL;
    }
    else if ( (a1 & 0x40) != 0 )
    {
      v12 = 2LL;
    }
    else
    {
      if ( (a1 & 0xF) == 0 )
      {
        WdLogSingleEntry1(1LL, (unsigned int)a1);
        WdLogGlobalForLineNumber = 1259;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"Flags (0x%I64x) doesn't have one of the necessary values",
          v5,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
      v12 = 4LL;
    }
    DisplayConfigBufferSizes = DxgkGetDisplayConfigBufferSizes(v12, &v28, (__int64)a3);
    if ( DisplayConfigBufferSizes >= 0 )
    {
      LOWORD(v4) = v28;
    }
    else
    {
      v28 = 2;
      v14 = DisplayConfigBufferSizes;
      WdLogSingleEntry2(2LL, DisplayConfigBufferSizes, 2LL);
      WdLogGlobalForLineNumber = 1268;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed (0x%I64x) to get display config buffer sizes when looking for internal target/priority. Trying with %d",
        v14,
        2LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    v28 = v4;
  }
  v26 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  v19 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 1;
  v24 = 0;
  v25 = 1;
  v27 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v16, v4);
  if ( v22 )
    v9 = *((_WORD *)v22 + 11);
  else
    v9 = 0;
  if ( (unsigned int)v9 < *((_DWORD *)a3 + 1) )
  {
    WdLogSingleEntry1(6LL, *((unsigned int *)a3 + 1));
    v15 = *((unsigned int *)a3 + 1);
    WdLogGlobalForLineNumber = 1280;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate PathModality for 0x%I64x paths",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
    PathsModality = -1073741801;
  }
  else
  {
    PathsModality = DxgkGetPathsModality((unsigned int)v5);
    if ( PathsModality >= 0 )
    {
      PathsModality = ConvertPathModalityToDisplayConfig(v22, v8, (v5 & 0x200000) != 0, a3);
      if ( PathsModality >= 0 )
        *(_DWORD *)a4 = *((_DWORD *)v22 + 8);
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v16);
  return (unsigned int)PathsModality;
}
