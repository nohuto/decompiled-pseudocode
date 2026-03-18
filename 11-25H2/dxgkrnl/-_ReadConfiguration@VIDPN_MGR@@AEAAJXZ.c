/*
 * XREFs of ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1403827C0
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1403845FC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x140384310 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadConfiguration(VIDPN_MGR *this)
{
  int RegistryValues; // eax
  int v3; // ebx
  unsigned int v4; // ecx
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v6; // rax
  struct DXGADAPTER *v7; // rax
  struct DXGADAPTER *v8; // rax
  bool v9; // al
  _DWORD *v10; // rbx
  unsigned int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h]
  const wchar_t *v21; // [rsp+68h] [rbp-A0h]
  unsigned int *v22; // [rsp+70h] [rbp-98h]
  __int64 v23; // [rsp+78h] [rbp-90h]
  unsigned int *v24; // [rsp+80h] [rbp-88h]
  int v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  int v27; // [rsp+98h] [rbp-70h]
  const wchar_t *v28; // [rsp+A0h] [rbp-68h]
  char *v29; // [rsp+A8h] [rbp-60h]
  int v30; // [rsp+B0h] [rbp-58h]
  char *v31; // [rsp+B8h] [rbp-50h]
  int v32; // [rsp+C0h] [rbp-48h]
  __int64 v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+D0h] [rbp-38h]
  const wchar_t *v35; // [rsp+D8h] [rbp-30h]
  __int64 *v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E8h] [rbp-20h]
  __int64 *v38; // [rsp+F0h] [rbp-18h]
  int v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  int v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  __int128 v43; // [rsp+118h] [rbp+10h]
  __int128 v44; // [rsp+128h] [rbp+20h]
  _QWORD v45[22]; // [rsp+138h] [rbp+30h] BYREF

  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v13 = 2;
    memset(v45, 0, 0xA8uLL);
    LODWORD(v45[1]) = 288;
    LODWORD(v45[4]) = 0x4000000;
    v45[2] = L"BadMonitorModeDiag";
    LODWORD(v45[11]) = 0x4000000;
    v45[3] = &v13;
    v45[5] = 0LL;
    v45[9] = L"AssertOnDdiViolation";
    LODWORD(v45[6]) = 0;
    v45[10] = &g_DmmAssertOnDdiViolation;
    v45[7] = 0LL;
    LODWORD(v45[8]) = 288;
    v45[12] = 0LL;
    LODWORD(v45[13]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v45, 0LL, 0LL);
    v3 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      v4 = v13;
    }
    else
    {
      WdLogSingleEntry1(7LL, RegistryValues);
      WdLogGlobalForLineNumber = 689;
      if ( v3 != -1073741772 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 692;
      }
      v4 = 2;
      v13 = 2;
    }
    if ( v4 == 1 || v4 == 2 )
    {
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = v4;
    }
    else
    {
      WdLogSingleEntry1(2LL, v4);
      WdLogGlobalForLineNumber = 717;
    }
  }
  v14 = 0;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
  if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)ContainingAdapter + 27), L"AllowUnspecifiedVSync", &v14, 4LL, 2) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedVSync = v14 != 0;
  }
  else
  {
    WdLogSingleEntry0(7LL);
    WdLogGlobalForLineNumber = 738;
  }
  v15 = 0;
  v6 = VIDPN_MGR::GetContainingAdapter(this);
  if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)v6 + 27), L"AllowUnspecifiedHSync", &v15, 4LL, 2) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedHSync = v15 != 0;
  }
  else
  {
    WdLogSingleEntry0(7LL);
    WdLogGlobalForLineNumber = 761;
  }
  v16 = 0;
  v7 = VIDPN_MGR::GetContainingAdapter(this);
  if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)v7 + 27), L"AllowUnspecifiedPixelRate", &v16, 4LL, 2) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v16 != 0;
  }
  else
  {
    WdLogSingleEntry0(7LL);
    WdLogGlobalForLineNumber = 784;
  }
  v17 = 0;
  v8 = VIDPN_MGR::GetContainingAdapter(this);
  if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)v8 + 27), L"ForceDualViewBehavior", &v17, 4LL, 2) >= 0 )
  {
    v9 = v17 != 0;
  }
  else
  {
    WdLogSingleEntry0(7LL);
    v9 = 0;
    WdLogGlobalForLineNumber = 808;
  }
  *((_BYTE *)this + 520) = v9;
  v10 = (_DWORD *)((char *)this + 544);
  v12 = 1000;
  LODWORD(v23) = 67108868;
  v30 = 67108868;
  v21 = L"RapidHPDTime";
  v37 = 67108868;
  v22 = &v12;
  *((_DWORD *)this + 136) = 5;
  v24 = &v12;
  LODWORD(v18) = 0;
  v28 = L"RapidHPDThresholdCount";
  v19 = 0LL;
  v35 = L"EnableExperimentalRefreshRates";
  v36 = &v18;
  v38 = &v18;
  LODWORD(v20) = 288;
  v25 = 4;
  v26 = 0LL;
  v27 = 288;
  v29 = (char *)this + 544;
  v31 = (char *)this + 544;
  v32 = 4;
  v33 = 0LL;
  v34 = 288;
  v39 = 4;
  v40 = 0LL;
  v41 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v19, 0LL, 0LL);
  if ( v12 > 0xEA60 )
    v12 = 60000;
  *((_DWORD *)this + 135) = 10000 * v12 / KeQueryTimeIncrement();
  if ( *v10 == 1 )
  {
    *v10 = 0;
  }
  else if ( *v10 > 0x20u )
  {
    *v10 = 32;
  }
  return 0LL;
}
