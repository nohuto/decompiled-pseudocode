/*
 * XREFs of DxgkNeedToEnableCddPrimary @ 0x1401AE0E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051A2C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140380550 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

char __fastcall DxgkNeedToEnableCddPrimary(struct DXGADAPTER *this, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rbp
  char v5; // si
  int PairingAdapters; // eax
  char result; // al
  ADAPTER_DISPLAY **v8; // rdi
  struct DXGADAPTER *v9; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v11[144]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = 0;
  v3 = a2;
  v5 = 1;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8622;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL != pAdapterIn", 8622LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = 0LL;
  v10 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(this, v3, 0LL, 0LL, &v9, &v10, 0);
  if ( PairingAdapters >= 0 )
  {
    v8 = (ADAPTER_DISPLAY **)v9;
    if ( !v9 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8652;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 8652LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)v8, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v8);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL) >= 0 )
    {
      if ( !v8[390] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8666;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pDisplayAdapter->IsDisplayAdapter()",
          8666LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(v8[390], v3, 0) || ADAPTER_DISPLAY::GetVidPnSourceOwner(v8[390], v3) )
        v5 = 0;
      v2 = v5;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
    return v2;
  }
  else
  {
    WdLogSingleEntry3(4LL, this, v3, PairingAdapters);
    result = 0;
    WdLogGlobalForLineNumber = 8643;
  }
  return result;
}
