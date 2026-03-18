/*
 * XREFs of ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1404063AC
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140405254 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x14027EE00 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1403FB4AC (DpiGetIntegratedDisplayOrientationOverrides.c)
 */

void __fastcall DXGMONITOR::_PrepareDefaultMonitorConfiguration(DXGMONITOR *this)
{
  int v2; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v3; // ecx
  int *v4; // rdi
  unsigned int *v5; // rsi
  unsigned int v6; // r14d
  unsigned int v7; // [rsp+30h] [rbp-89h] BYREF
  int v8; // [rsp+34h] [rbp-85h] BYREF
  __int64 v9; // [rsp+40h] [rbp-79h] BYREF
  int v10; // [rsp+48h] [rbp-71h]
  const wchar_t *v11; // [rsp+50h] [rbp-69h]
  char *v12; // [rsp+58h] [rbp-61h]
  int v13; // [rsp+60h] [rbp-59h]
  int *v14; // [rsp+68h] [rbp-51h]
  int v15; // [rsp+70h] [rbp-49h]
  __int64 v16; // [rsp+78h] [rbp-41h]
  int v17; // [rsp+80h] [rbp-39h]
  const wchar_t *v18; // [rsp+88h] [rbp-31h]
  char *v19; // [rsp+90h] [rbp-29h]
  int v20; // [rsp+98h] [rbp-21h]
  int *v21; // [rsp+A0h] [rbp-19h]
  int v22; // [rsp+A8h] [rbp-11h]
  __int64 v23; // [rsp+B0h] [rbp-9h]
  int v24; // [rsp+B8h] [rbp-1h]
  __int64 v25; // [rsp+C0h] [rbp+7h]
  __int128 v26; // [rsp+C8h] [rbp+Fh]
  __int128 v27; // [rsp+D8h] [rbp+1Fh]

  v7 = *((_DWORD *)this + 76);
  v2 = *((char *)this + 176);
  v3 = *((_DWORD *)this + 46);
  v8 = (v2 >> 31) & 3;
  if ( IsInternalVideoOutput(v3) )
  {
    v4 = (int *)((char *)this + 316);
    v5 = (unsigned int *)((char *)this + 308);
    if ( (int)DpiGetIntegratedDisplayOrientationOverrides(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL) + 216LL),
                *((_DWORD *)this + 45),
                (int *)this + 77,
                (_DWORD *)this + 79) < 0 )
    {
      v9 = 0LL;
      v16 = 0LL;
      v23 = 0LL;
      v24 = 0;
      v25 = 0LL;
      v11 = L"MonitorOrientation";
      v14 = (int *)&v7;
      v18 = L"DockedOrientation";
      v10 = 292;
      v13 = 67108868;
      v15 = 4;
      v17 = 292;
      v20 = 67108868;
      v22 = 4;
      v21 = &v8;
      v12 = (char *)this + 308;
      v19 = (char *)this + 316;
      v26 = 0LL;
      v27 = 0LL;
      if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v9, 0LL, 0LL) < 0 )
      {
        *v5 = v7;
        *v4 = v8;
      }
    }
    v6 = *v5;
    if ( !DXGMONITOR::_ValidateMonitorOrientation(this) )
    {
      WdLogSingleEntry1(2LL, v6);
      *v5 = v7;
      WdLogGlobalForLineNumber = 1429;
    }
    if ( (unsigned int)*v4 > 3 )
    {
      WdLogSingleEntry1(2LL, (unsigned int)*v4);
      *v4 = v8;
      WdLogGlobalForLineNumber = 1435;
    }
  }
  *((_DWORD *)this + 78) = *((_DWORD *)this + 77);
  *((_DWORD *)this + 80) = *((_DWORD *)this + 79);
}
