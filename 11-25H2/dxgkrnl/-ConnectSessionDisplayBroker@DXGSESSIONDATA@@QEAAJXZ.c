/*
 * XREFs of ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x14041495C
 * Callers:
 *     DxgkDispMgrOperation @ 0x1403F47A0 (DxgkDispMgrOperation.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x140050188 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     Feature_AllowAutoRotateToDockOrientationPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14006D0C0 (Feature_AllowAutoRotateToDockOrientationPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SendCachedAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAJXZ @ 0x1401BBA80 (-SendCachedAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ConnectDisplayBroker@DispBrokerClient@@QEAAJXZ @ 0x1403E4CF8 (-ConnectDisplayBroker@DispBrokerClient@@QEAAJXZ.c)
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1403F3B9C (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::ConnectSessionDisplayBroker(DXGSESSIONDATA *this)
{
  signed int v2; // eax
  __int64 v3; // rsi
  int v5; // eax
  __int64 v6; // rbx
  struct DXGGLOBAL *Global; // rax
  int refreshed; // eax
  __int64 v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+20h] [rbp-38h]

  v2 = DispBrokerClient::ConnectDisplayBroker((DXGSESSIONDATA *)((char *)this + 18984));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = DXGSESSIONDATA::SendCachedIddDisplayConfigRequest(this);
    if ( v5 == -1073741749 )
    {
      WdLogSingleEntry1(3LL, *(unsigned int *)this);
      WdLogGlobalForLineNumber = 1948;
    }
    else if ( v5 < 0 )
    {
      v6 = v5;
      WdLogSingleEntry3(2LL, *(unsigned int *)this, v5, 0LL);
      v11 = *(unsigned int *)this;
      WdLogGlobalForLineNumber = 1955;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to re-send IDD display config request in session 0x%I64x, (Status = 0x%I64x).",
        v11,
        v6,
        0LL,
        0LL,
        0LL);
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))lambda_cbfcde231c2a8d1b9d404329183532d4_::_lambda_invoker_cdecl_,
        (__int64)this,
        4);
    }
    if ( (unsigned int)Feature_AllowAutoRotateToDockOrientationPolicy__private_IsEnabledDeviceUsageNoInline() )
    {
      refreshed = DXGSESSIONDATA::SendCachedAsyncRefreshOrientation(this);
      if ( refreshed < 0 )
      {
        v9 = refreshed;
        WdLogSingleEntry2(2LL, *(unsigned int *)this, refreshed);
        v12 = *(unsigned int *)this;
        WdLogGlobalForLineNumber = 2028;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to re-send cached async refresh orientation request for session 0x%I64x, (Status = 0x%I64x).",
          v12,
          v9,
          0LL,
          0LL,
          0LL);
      }
    }
    return 0LL;
  }
  else
  {
    DxgkLogCodePointPacketForSession(108, *(unsigned int *)this, v2, 0, 0, 0LL);
    WdLogSingleEntry2(2LL, *(unsigned int *)this, v3);
    v10 = *(unsigned int *)this;
    WdLogGlobalForLineNumber = 1925;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to connect display broker in session 0x%I64x, (Status = 0x%I64x).",
      v10,
      v3,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v3;
  }
}
