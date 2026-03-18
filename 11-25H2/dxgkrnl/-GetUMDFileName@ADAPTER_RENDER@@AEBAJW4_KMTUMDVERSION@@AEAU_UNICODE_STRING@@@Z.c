/*
 * XREFs of ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x14039B088
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14038F660 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x14039AC30 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUMDFileName(ADAPTER_RENDER *this, unsigned int a2, struct _UNICODE_STRING *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rax
  struct _UNICODE_STRING v9; // xmm0

  v3 = a2;
  if ( a2 >= 6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3561;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(UINT)umdVersion < (UINT)NUM_KMTUMDVERSIONS",
      3561LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent((__int64)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3562;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"DXGPROCESS::GetCurrent() != NULL",
      3562LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *((_DWORD *)DXGPROCESS::GetCurrent(v6) + 102);
  if ( (v7 & 8) != 0 )
  {
    v8 = v3 + 26;
    goto LABEL_10;
  }
  if ( (_DWORD)v3 == 4 )
  {
    v9 = (struct _UNICODE_STRING)*((_OWORD *)this + 35);
    goto LABEL_11;
  }
  if ( (_DWORD)v3 == 5 )
  {
    v9 = (struct _UNICODE_STRING)*((_OWORD *)this + 36);
    goto LABEL_11;
  }
  if ( (v7 & 0x30) == 0 )
  {
    v8 = v3 + 20;
LABEL_10:
    v9 = (struct _UNICODE_STRING)*((_OWORD *)this + v8);
LABEL_11:
    *a3 = v9;
    return 0LL;
  }
  if ( (_DWORD)v3 == 3 )
  {
    v9 = (struct _UNICODE_STRING)*((_OWORD *)this + 34);
    goto LABEL_11;
  }
  return 3221225485LL;
}
