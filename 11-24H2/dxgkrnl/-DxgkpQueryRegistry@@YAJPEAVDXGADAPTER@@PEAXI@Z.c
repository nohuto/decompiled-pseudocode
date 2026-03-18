/*
 * XREFs of ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x140408920
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002F1C4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400313D0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1400332C4 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     __report_rangecheckfailure @ 0x140064EF0 (__report_rangecheckfailure.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14006B1F0 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DpiGetPnpRegistryKeyName @ 0x14036B980 (DpiGetPnpRegistryKeyName.c)
 *     DpiGetDriverStorePath @ 0x1403EE46C (DpiGetDriverStorePath.c)
 *     DpiGetDriverFullPath @ 0x140404974 (DpiGetDriverFullPath.c)
 */

__int64 __fastcall DxgkpQueryRegistry(struct DXGADAPTER *a1, char *a2, unsigned int a3)
{
  int DriverStorePath; // ebx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v6; // rdx
  int v7; // r8d
  char v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  int v11; // eax
  unsigned int v12; // r8d
  _DWORD *v13; // r14
  __int64 v14; // r10
  int v15; // eax
  bool v16; // zf
  _OWORD *v17; // rax
  unsigned __int16 *v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int PnpRegistryKeyName; // eax
  __int64 v27; // r9
  unsigned __int16 v28; // cx
  unsigned __int16 *v29; // r8
  unsigned int v30; // r14d
  __int64 v31; // rdx
  unsigned __int16 *v32; // r10
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rdx
  int v36; // eax
  unsigned int v37; // eax
  __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING P; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall *v41)(unsigned __int16 *, unsigned int, void *, unsigned int, unsigned int *); // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v43; // [rsp+60h] [rbp-A0h]
  char *v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  int v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  int v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  __int128 v51; // [rsp+A0h] [rbp-60h]
  __int128 v52; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v53[264]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v54[264]; // [rsp+2D0h] [rbp+1D0h] BYREF

  DriverStorePath = -1073741811;
  if ( a3 < 0x228 )
  {
    WdLogSingleEntry2(3LL, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 2900;
    return (unsigned int)DriverStorePath;
  }
  if ( *((_DWORD *)a2 + 1) >= 4u )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2907;
LABEL_40:
    *((_DWORD *)a2 + 135) = 2;
    return (unsigned int)DriverStorePath;
  }
  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(a1);
  if ( (unsigned int)v10 >= NumDifferentPhysicalAdapters )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2913;
    goto LABEL_40;
  }
  v11 = v7 - 544;
  v12 = *(_DWORD *)a2;
  v13 = a2 + 536;
  *((_DWORD *)a2 + 134) = v11;
  v14 = *(_QWORD *)(344 * v10 + *(_QWORD *)(v9 + 2992) + 8);
  if ( v12 > 1 )
  {
    if ( v12 - 2 > 1 )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 3047;
      goto LABEL_40;
    }
    if ( *((_DWORD *)a2 + 132) || (v8 & 1) != 0 )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 3015;
      goto LABEL_40;
    }
    if ( v12 == 2 )
    {
      DriverStorePath = DpiGetDriverStorePath(v14, a2 + 544, (int *)a2 + 134);
    }
    else
    {
      P = 0LL;
      DriverStorePath = DpiGetDriverFullPath(v14, &P);
      if ( DriverStorePath < 0 )
      {
LABEL_19:
        WdLogSingleEntry1(3LL, DriverStorePath);
        WdLogGlobalForLineNumber = 3041;
        goto LABEL_37;
      }
      v15 = RtlStringCbCopyUnicodeString(a2 + 544, (unsigned int)*v13, &P);
      DriverStorePath = v15;
      *v13 = P.Length;
      if ( v15 < 0 )
      {
        WdLogSingleEntry2(3LL, P.Length, v15);
        WdLogGlobalForLineNumber = 3033;
        DriverStorePath = -2147483643;
      }
      ExFreePoolWithTag(P.Buffer, 0);
    }
    v16 = DriverStorePath == 0;
    if ( DriverStorePath >= 0 )
      goto LABEL_39;
    goto LABEL_19;
  }
  v17 = a2 + 8;
  v18 = v53;
  do
  {
    v19 = v17[1];
    *(_OWORD *)v18 = *v17;
    v20 = v17[2];
    *((_OWORD *)v18 + 1) = v19;
    v21 = v17[3];
    *((_OWORD *)v18 + 2) = v20;
    v22 = v17[4];
    *((_OWORD *)v18 + 3) = v21;
    v23 = v17[5];
    *((_OWORD *)v18 + 4) = v22;
    v24 = v17[6];
    *((_OWORD *)v18 + 5) = v23;
    v25 = v17[7];
    v17 += 8;
    *((_OWORD *)v18 + 6) = v24;
    v18 += 64;
    *((_OWORD *)v18 - 1) = v25;
    --v6;
  }
  while ( v6 );
  *(_QWORD *)v18 = *(_QWORD *)v17;
  v53[259] = 0;
  v39 = 0LL;
  PnpRegistryKeyName = DpiGetPnpRegistryKeyName(v14, (unsigned int)(v12 != 1) + 2, &v39);
  DriverStorePath = PnpRegistryKeyName;
  if ( PnpRegistryKeyName < 0 )
  {
    WdLogSingleEntry1(3LL, PnpRegistryKeyName);
    WdLogGlobalForLineNumber = 2937;
    goto LABEL_37;
  }
  v27 = v39;
  v28 = v53[0];
  v29 = v53;
  v30 = 0;
  LODWORD(v31) = 0;
  v32 = *(unsigned __int16 **)(v39 + 8);
  if ( v53[0] )
  {
    do
    {
      v33 = v31;
      if ( v28 != 92 )
        v33 = v30;
      v31 = (unsigned int)(v31 + 1);
      v30 = v33;
      v28 = v53[v31];
    }
    while ( v28 );
    if ( v33 )
    {
      if ( 2 * (unsigned __int64)v33 >= 0x208 )
        _report_rangecheckfailure();
      v53[v33] = 0;
      DriverStorePath = RtlStringCbCopyW((char *)v54, 0x208uLL, *(char **)(v27 + 8));
      if ( DriverStorePath < 0
        || (DriverStorePath = RtlStringCbCatW(v54, v34, (char *)L"\\"), DriverStorePath < 0)
        || (DriverStorePath = RtlStringCbCatW(v54, v35, (char *)v53), DriverStorePath < 0) )
      {
        WdLogSingleEntry1(3LL, DriverStorePath);
        WdLogGlobalForLineNumber = 2983;
        goto LABEL_37;
      }
      v29 = &v53[v30 + 1];
      v32 = v54;
    }
  }
  v43 = v29;
  v41 = DxgkpRegistryQueryRoutine;
  v45 = *((_DWORD *)a2 + 132) << 24;
  v42 = 276;
  v44 = a2 + 544;
  v46 = 0LL;
  v47 = 0;
  v48 = 0LL;
  v49 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v36 = RtlQueryRegistryValuesEx(0LL, v32, &v41, a2, 0LL);
  DriverStorePath = v36;
  if ( v36 < 0 )
  {
    WdLogSingleEntry1(3LL, v36);
    WdLogGlobalForLineNumber = 3004;
  }
LABEL_37:
  if ( DriverStorePath != -2147483643 )
  {
    v16 = DriverStorePath == 0;
LABEL_39:
    if ( v16 )
    {
      *((_DWORD *)a2 + 135) = 0;
      return (unsigned int)DriverStorePath;
    }
    goto LABEL_40;
  }
  DriverStorePath = 0;
  v37 = *(_DWORD *)a2 - 2;
  *((_DWORD *)a2 + 135) = 1;
  if ( v37 <= 1 || (*((_DWORD *)a2 + 1) & 1) != 0 )
    *((_DWORD *)a2 + 134) += 16;
  return (unsigned int)DriverStorePath;
}
