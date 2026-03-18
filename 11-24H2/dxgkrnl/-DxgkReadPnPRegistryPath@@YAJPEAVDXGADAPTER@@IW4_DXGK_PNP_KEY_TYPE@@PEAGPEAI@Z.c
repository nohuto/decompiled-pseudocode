/*
 * XREFs of ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x140188160
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400313D0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     DpiGetPnpRegistryKeyName @ 0x14036B980 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DxgkReadPnPRegistryPath(DXGADAPTER *a1, __int64 a2, int a3, void *a4, ULONG64 a5)
{
  __int64 v6; // r15
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int v8; // edx
  __int64 v9; // r8
  _DWORD *v11; // rbx
  unsigned int *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  int PnpRegistryKeyName; // eax
  unsigned int v16; // edi
  unsigned __int16 *v17; // rdx
  unsigned int v18; // ecx
  const void *v19; // rdx
  unsigned __int16 *v20; // [rsp+28h] [rbp-10h] BYREF

  v6 = a3;
  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(a1);
  if ( v8 >= NumDifferentPhysicalAdapters )
  {
    WdLogSingleEntry1(3LL, v8);
    WdLogGlobalForLineNumber = 2568;
    return 3221225485LL;
  }
  v11 = (_DWORD *)a5;
  v12 = (unsigned int *)a5;
  if ( a5 >= MmUserProbeAddress )
    v12 = (unsigned int *)MmUserProbeAddress;
  v13 = *v12;
  v14 = *(_QWORD *)(344LL * v8 + *(_QWORD *)(v9 + 2992) + 8);
  v20 = 0LL;
  PnpRegistryKeyName = DpiGetPnpRegistryKeyName(v14, (unsigned int)v6, &v20);
  v16 = PnpRegistryKeyName;
  if ( PnpRegistryKeyName < 0 )
  {
    WdLogSingleEntry2(3LL, v6, PnpRegistryKeyName);
    WdLogGlobalForLineNumber = 2592;
    return v16;
  }
  v17 = v20;
  v18 = (*v20 >> 1) + 1;
  if ( a5 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  *v11 = v18;
  if ( a4 )
  {
    if ( (unsigned int)v13 < v18 )
    {
      WdLogSingleEntry2(3LL, v13, v18);
      WdLogGlobalForLineNumber = 2623;
      return 3221225507LL;
    }
    v19 = (const void *)*((_QWORD *)v17 + 1);
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a4, v19, 2LL * v18);
  }
  return 0LL;
}
