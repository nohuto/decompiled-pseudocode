/*
 * XREFs of ?SendQueryStats@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1401B54F4
 * Callers:
 *     ?VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x140202448 (-VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendQueryStats(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        struct CSM_BUFFER_STATISTICS *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned int v16; // [rsp+50h] [rbp-49h] BYREF
  __int64 v17; // [rsp+58h] [rbp-41h] BYREF
  _DWORD v18[4]; // [rsp+60h] [rbp-39h] BYREF
  int v19; // [rsp+70h] [rbp-29h] BYREF
  int v20; // [rsp+74h] [rbp-25h]
  int v21; // [rsp+78h] [rbp-21h]
  _DWORD v22[21]; // [rsp+7Ch] [rbp-1Dh] BYREF

  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 426) < 0x1Eu )
  {
    LODWORD(v6) = -1073741637;
    WdLogSingleEntry1(3LL, -1073741637LL);
    WdLogGlobalForLineNumber = 1280;
    return (unsigned int)v6;
  }
  v18[0] = 1886220131;
  v18[2] = 11;
  v18[1] = -1073741823;
  memset(v22, 0, sizeof(v22));
  v19 = 1886220131;
  v20 = -1073741823;
  v21 = 12;
  memset(&v22[1], 0, 0x50uLL);
  v7 = *((_QWORD *)this + 1);
  v16 = 96;
  v18[3] = a2;
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v7 + 32LL))(
         v7,
         v18,
         16LL,
         &v19,
         &v16);
  v6 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(2LL, v8, this);
    WdLogGlobalForLineNumber = 1312;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"SendSyncMessage returns error from host. Returning 0x%I64x",
      v6,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
  if ( v16 != 96 )
  {
    WdLogSingleEntry2(3LL, v16, -1073741823LL);
    WdLogGlobalForLineNumber = 1321;
LABEL_7:
    LODWORD(v6) = -1073741823;
    return (unsigned int)v6;
  }
  if ( v21 != 12 )
  {
    WdLogSingleEntry2(3LL, v21, -1073741823LL);
    WdLogGlobalForLineNumber = 1330;
    goto LABEL_7;
  }
  LODWORD(v6) = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(3LL, v20, this);
    WdLogGlobalForLineNumber = 1358;
  }
  else
  {
    v17 = 0LL;
    v9 = RtlConvertHostPerfCounterToPerfCounter(*(_QWORD *)&v22[11], -1LL, &v17);
    LODWORD(v6) = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(3LL, v9);
      WdLogGlobalForLineNumber = 1353;
    }
    else
    {
      v10 = v17;
      v11 = *(_OWORD *)&v22[5];
      *(_OWORD *)a3 = *(_OWORD *)&v22[1];
      v12 = *(_OWORD *)&v22[9];
      *((_OWORD *)a3 + 1) = v11;
      v13 = *(_OWORD *)&v22[13];
      *((_OWORD *)a3 + 2) = v12;
      v14 = *(_OWORD *)&v22[17];
      *((_OWORD *)a3 + 3) = v13;
      *((_OWORD *)a3 + 4) = v14;
      *((_QWORD *)a3 + 5) = v10;
    }
  }
  return (unsigned int)v6;
}
