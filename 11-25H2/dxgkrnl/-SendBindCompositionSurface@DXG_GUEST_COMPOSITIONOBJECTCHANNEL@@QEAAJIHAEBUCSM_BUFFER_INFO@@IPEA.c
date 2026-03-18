/*
 * XREFs of ?SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x1401B4EBC
 * Callers:
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x1402015CC (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendBindCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        int a3,
        const struct CSM_BUFFER_INFO *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdi
  unsigned int v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+5Ch] [rbp-A4h]
  int v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v19; // [rsp+68h] [rbp-98h]
  _DWORD v20[336]; // [rsp+70h] [rbp-90h] BYREF

  memset(v20, 0, sizeof(v20));
  v20[1] = -1073741823;
  v20[0] = 1886220131;
  v20[2] = 5;
  memset(&v20[6], 0, 0x520uLL);
  v18 = 0;
  v19 = 0LL;
  v15 = 1886220131;
  v17 = 6;
  v16 = -1073741823;
  v14 = 24;
  v20[3] = a2;
  v20[4] = a3;
  memmove(&v20[6], a4, 0x520uLL);
  v10 = *((_QWORD *)this + 1);
  v20[334] = a5;
  v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v10 + 32LL))(
          v10,
          v20,
          1344LL,
          &v15,
          &v14);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(2LL, v11, this);
    WdLogGlobalForLineNumber = 1077;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"SendSyncMessage returns error from host. Returning 0x%I64x",
      v12,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v12;
  }
  if ( v14 != 24 )
  {
    WdLogSingleEntry2(3LL, v14, -1073741823LL);
    WdLogGlobalForLineNumber = 1086;
LABEL_5:
    LODWORD(v12) = -1073741823;
    return (unsigned int)v12;
  }
  if ( v17 != 6 )
  {
    WdLogSingleEntry2(3LL, v17, -1073741823LL);
    WdLogGlobalForLineNumber = 1095;
    goto LABEL_5;
  }
  LODWORD(v12) = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(3LL, v16, this);
    WdLogGlobalForLineNumber = 1108;
  }
  else
  {
    *a6 = v19;
  }
  return (unsigned int)v12;
}
