/*
 * XREFs of ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1402759A0
 * Callers:
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1402740C8 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140275630 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::_RetrieveHDRParamDriverOverrides(DxgMonitor::MonitorColorState *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // edi
  unsigned int v5; // edx
  unsigned __int8 v6; // cl
  char v7; // cl
  int v8; // eax
  _BYTE v10[36]; // [rsp+28h] [rbp-29h] BYREF
  __int128 v11; // [rsp+50h] [rbp-1h]
  __int128 v12; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v13; // [rsp+70h] [rbp+1Fh]
  __int128 v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+90h] [rbp+3Fh]

  memset(v10, 0, sizeof(v10));
  *(_OWORD *)((char *)this + 52) = *(_OWORD *)v10;
  v10[0] = 0;
  *(_OWORD *)((char *)this + 68) = 0u;
  *((_DWORD *)this + 21) = 0;
  memset(&v10[1], 0, 19);
  *(_WORD *)((char *)&v11 + 1) = 0;
  BYTE3(v11) = 0;
  v15 = 0;
  LOBYTE(v11) = 0;
  *(_OWORD *)((char *)this + 164) = *(_OWORD *)v10;
  *(_QWORD *)((char *)&v11 + 4) = 0LL;
  *(_OWORD *)((char *)this + 180) = *(_OWORD *)&v10[16];
  HIDWORD(v11) = 0;
  *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  *(_OWORD *)((char *)this + 312) = v11;
  v2 = *(_QWORD *)this;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 32LL))(v3, &v12);
  if ( v4 >= 0 )
  {
    v5 = HIDWORD(v14);
    v6 = BYTE12(v14);
    *((_BYTE *)this + 52) = 1;
    *((_DWORD *)this + 14) = v6 >> 2;
    *((_DWORD *)this + 16) = (v5 >> 14) & 0x3F;
    *((_DWORD *)this + 15) = (v5 >> 8) & 0x3F;
    v7 = v15;
    *((_DWORD *)this + 17) = (v5 >> 20) & 0x3F;
    *((_BYTE *)this + 82) = v15 & 1;
    *((_BYTE *)this + 83) = (v7 & 2) != 0;
    *((_DWORD *)this + 42) = (_DWORD)v12 << 10;
    *((_DWORD *)this + 43) = DWORD1(v12) << 10;
    *((_DWORD *)this + 44) = DWORD2(v12) << 10;
    *((_DWORD *)this + 45) = HIDWORD(v12) << 10;
    *((_DWORD *)this + 46) = (_DWORD)v13 << 10;
    *((_DWORD *)this + 47) = DWORD1(v13) << 10;
    *((_DWORD *)this + 48) = DWORD2(v13) << 10;
    *((_DWORD *)this + 49) = HIDWORD(v13) << 10;
    *(_QWORD *)((char *)this + 316) = v14;
    v8 = DWORD2(v14);
    *((_BYTE *)this + 84) = (v7 & 4) != 0;
    *((_DWORD *)this + 81) = v8;
    *((_DWORD *)this + 18) = v5 >> 26;
    *((_DWORD *)this + 19) = 0;
    *((_WORD *)this + 40) = 0;
    *((_BYTE *)this + 164) = 1;
    *((_BYTE *)this + 312) = 1;
    DxgMonitor::MonitorColorState::_ReevaluateColorAndLuminanceSources(this);
  }
  return (unsigned int)v4;
}
