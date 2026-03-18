/*
 * XREFs of ?SendUnbindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIH@Z @ 0x1401B5ABC
 * Callers:
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x140202B84 (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendUnbindCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        int a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdi
  unsigned int v8; // [rsp+58h] [rbp+17h] BYREF
  int v9; // [rsp+60h] [rbp+1Fh] BYREF
  int v10; // [rsp+64h] [rbp+23h]
  int v11; // [rsp+68h] [rbp+27h]
  int v12; // [rsp+6Ch] [rbp+2Bh]
  _DWORD v13[6]; // [rsp+70h] [rbp+2Fh] BYREF

  v13[5] = 0;
  v12 = 0;
  v13[3] = a2;
  v4 = *((_QWORD *)this + 1);
  v13[0] = 1886220131;
  v9 = 1886220131;
  v13[4] = a3;
  v13[1] = -1073741823;
  v13[2] = 7;
  v10 = -1073741823;
  v11 = 8;
  v8 = 16;
  v5 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v4 + 32LL))(
         v4,
         v13,
         24LL,
         &v9,
         &v8);
  v6 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry2(2LL, v5, this);
    WdLogGlobalForLineNumber = 1155;
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
  if ( v8 != 16 )
  {
    WdLogSingleEntry2(3LL, v8, -1073741823LL);
    WdLogGlobalForLineNumber = 1164;
LABEL_5:
    LODWORD(v6) = -1073741823;
    return (unsigned int)v6;
  }
  if ( v11 != 8 )
  {
    WdLogSingleEntry2(3LL, v11, -1073741823LL);
    WdLogGlobalForLineNumber = 1173;
    goto LABEL_5;
  }
  LODWORD(v6) = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(3LL, v10, this);
    WdLogGlobalForLineNumber = 1182;
  }
  return (unsigned int)v6;
}
