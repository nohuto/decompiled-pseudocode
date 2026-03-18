/*
 * XREFs of ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403EF958
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x14026CF14 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x140052E4C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _CcdWriteRegistryValues @ 0x1403EFB50 (_CcdWriteRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const WCHAR *a2,
        unsigned int a3,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a4)
{
  __int64 v5; // rbp
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int16 v14; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  v7 = RtlStringCbPrintfW(&v14, 6uLL, (size_t *)L"%02x", a3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = CcdWriteRegistryValues(a2, (__int64)a4);
    v8 = v9;
    if ( v9 >= 0 )
    {
      if ( (*(_DWORD *)a4 & 0x1000000) != 0 && (v10 = CcdWriteRegistryValues(a2, (__int64)a4), v8 = v10, v10 < 0) )
      {
        WdLogSingleEntry4(3LL, v10, a2, v5, a4);
        WdLogGlobalForLineNumber = 2070;
      }
      else if ( (*(_DWORD *)a4 & 0x100LL) != 0 && (v11 = CcdWriteRegistryValues(a2, (__int64)a4), v8 = v11, v11 < 0) )
      {
        WdLogSingleEntry4(3LL, v11, a2, v5, a4);
        WdLogGlobalForLineNumber = 2092;
      }
      else if ( (*(_DWORD *)a4 & 0x800000) != 0 )
      {
        v12 = CcdWriteRegistryValues(a2, (__int64)a4);
        v8 = v12;
        if ( v12 < 0 )
        {
          WdLogSingleEntry4(3LL, v12, a2, v5, a4);
          WdLogGlobalForLineNumber = 2114;
        }
      }
    }
    else
    {
      WdLogSingleEntry4(3LL, v9, a2, v5, a4);
      WdLogGlobalForLineNumber = 2052;
    }
  }
  else
  {
    WdLogSingleEntry4(1LL, v7, a2, (unsigned int)v5, a4);
    WdLogGlobalForLineNumber = 2029;
  }
  return v8;
}
