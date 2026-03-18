/*
 * XREFs of ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x14018770C
 * Callers:
 *     ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x14018622C (-OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x14027C414 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x14027CB30 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 *     ?OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x1403D3DA4 (-OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x14027D240 (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1404069E4 (-_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(
        DxgMonitor::MonitorColorState *this,
        char a2)
{
  __int64 v3; // rax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64 *, _OWORD *, _QWORD); // r9
  int v14; // eax
  __int64 v15; // rdi
  DxgMonitor::MonitorColorState *v16; // rcx
  _BYTE v17[48]; // [rsp+20h] [rbp-39h] BYREF
  __int128 v18; // [rsp+58h] [rbp-1h]
  _OWORD v19[3]; // [rsp+70h] [rbp+17h] BYREF
  int v20; // [rsp+A0h] [rbp+47h]

  if ( a2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3) < 2500 )
      return 0LL;
  }
  *(_DWORD *)&v17[44] = 0;
  *(_DWORD *)v17 = *((_DWORD *)this + 60) >> 10;
  *(_DWORD *)&v17[4] = *((_DWORD *)this + 61) >> 10;
  *(_DWORD *)&v17[8] = *((_DWORD *)this + 62) >> 10;
  *(_DWORD *)&v17[12] = *((_DWORD *)this + 63) >> 10;
  *(_DWORD *)&v17[16] = *((_DWORD *)this + 64) >> 10;
  *(_DWORD *)&v17[20] = *((_DWORD *)this + 65) >> 10;
  *(_DWORD *)&v17[24] = *((_DWORD *)this + 66) >> 10;
  *(_DWORD *)&v17[28] = *((_DWORD *)this + 67) >> 10;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
  {
    *(_QWORD *)&v17[32] = *(_QWORD *)((char *)this + 380);
    v5 = *((_DWORD *)this + 97);
  }
  else
  {
    *(_QWORD *)&v17[32] = *(_QWORD *)((char *)this + 364);
    v5 = *((_DWORD *)this + 93);
  }
  *(_DWORD *)&v17[40] = v5;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
  if ( v6 && ((v7 = v6 - 12) == 0 || (v8 = v7 - 18) != 0 && (v9 = v8 - 1) != 0 && (unsigned int)(v9 - 1) <= 1) )
    v10 = *((_DWORD *)this + 119);
  else
    v10 = 1000;
  v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
  v20 = 0;
  v12 = *v11;
  v19[0] = *(_OWORD *)v17;
  v13 = *(__int64 (__fastcall **)(__int64 *, _OWORD *, _QWORD))(v12 + 88);
  v19[1] = *(_OWORD *)&v17[16];
  v19[2] = *(_OWORD *)&v17[32];
  v14 = v13(v11, v19, 80 * v10 / 0x3E8u);
  v15 = v14;
  if ( v14 < 0 )
  {
    memset(v17, 0, 36);
    *(_QWORD *)((char *)&v18 + 4) = 0LL;
    HIDWORD(v18) = 0;
    LOBYTE(v18) = 0;
    *(_WORD *)((char *)&v18 + 1) = 0;
    *(_OWORD *)((char *)this + 236) = *(_OWORD *)v17;
    BYTE3(v18) = 0;
    *(_OWORD *)((char *)this + 252) = *(_OWORD *)&v17[16];
    *(_OWORD *)((char *)this + 360) = v18;
    *((_DWORD *)this + 67) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(this);
    DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(v16);
    WdLogSingleEntry1(2LL, v15);
    WdLogGlobalForLineNumber = 1354;
  }
  return (unsigned int)v15;
}
