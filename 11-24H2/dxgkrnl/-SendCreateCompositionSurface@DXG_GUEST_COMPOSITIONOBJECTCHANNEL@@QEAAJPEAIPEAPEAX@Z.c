/*
 * XREFs of ?SendCreateCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAIPEAPEAX@Z @ 0x1401B7690
 * Callers:
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x140208450 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendCreateCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        unsigned int *a2,
        void **a3)
{
  __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rdi
  unsigned int v10; // [rsp+50h] [rbp-9h] BYREF
  int v11; // [rsp+58h] [rbp-1h] BYREF
  int v12; // [rsp+5Ch] [rbp+3h]
  int v13; // [rsp+60h] [rbp+7h]
  unsigned int v14; // [rsp+64h] [rbp+Bh]
  void *v15; // [rsp+68h] [rbp+Fh]
  _DWORD v16[4]; // [rsp+70h] [rbp+17h] BYREF

  v16[3] = 0;
  v14 = 0;
  v15 = 0LL;
  v16[0] = 1886220131;
  v11 = 1886220131;
  v5 = *((_QWORD *)this + 1);
  v16[1] = -1073741823;
  v16[2] = 1;
  v12 = -1073741823;
  v13 = 2;
  v10 = 24;
  v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v5 + 32LL))(
         v5,
         v16,
         16LL,
         &v11,
         &v10);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(2LL, v7, this);
    WdLogGlobalForLineNumber = 924;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"SendSyncMessage returns error from host. Returning 0x%I64x",
      v8,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v8;
  }
  if ( v10 != 24 )
  {
    WdLogSingleEntry2(3LL, v10, -1073741823LL);
    WdLogGlobalForLineNumber = 933;
LABEL_5:
    LODWORD(v8) = -1073741823;
    return (unsigned int)v8;
  }
  if ( v13 != 2 )
  {
    WdLogSingleEntry2(3LL, v13, -1073741823LL);
    WdLogGlobalForLineNumber = 942;
    goto LABEL_5;
  }
  LODWORD(v8) = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(3LL, v12, this);
    WdLogGlobalForLineNumber = 956;
  }
  else
  {
    *a2 = v14;
    *a3 = v15;
  }
  return (unsigned int)v8;
}
