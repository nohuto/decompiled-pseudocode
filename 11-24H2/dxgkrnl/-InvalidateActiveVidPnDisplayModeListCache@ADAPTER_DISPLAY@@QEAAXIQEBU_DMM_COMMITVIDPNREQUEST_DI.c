/*
 * XREFs of ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x14019977C
 * Callers:
 *     ?OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140199B1C (-OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1401A0200 (DxgkInvalidateVidPnDisplayModeListCache.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pquutttq_EtwWriteTransfer @ 0x140067FBC (McTemplateK0pquutttq_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
        PERESOURCE **this,
        __int64 a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const a3)
{
  char v4; // di
  __int64 v5; // rcx
  __int64 v6; // rdx
  PERESOURCE *v7; // rax
  bool v8; // zf
  __int64 v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-18h]

  v4 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2999;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      2999LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v6) = 0;
  if ( *((_DWORD *)this + 24) )
  {
    do
    {
      if ( (_DWORD)v6 != -3 )
      {
        v5 = 503LL * (unsigned int)v6;
        v7 = this[16];
        v8 = BYTE4(v7[v5 + 137]) == 0;
        BYTE4(v7[v5 + 137]) = 0;
        if ( !v8 )
          v4 = 1;
        LODWORD(this[16][v5 + 138]) = -1;
        HIDWORD(this[16][v5 + 139]) = -1;
        LODWORD(this[16][v5 + 140]) = -1;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *((_DWORD *)this + 24) );
    if ( v4 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v15 = 0;
      v14 = 0;
      LODWORD(v13) = 0;
      LODWORD(v12) = 0;
      LOBYTE(v11) = 0;
      LOBYTE(v10) = 0;
      LODWORD(v9) = -3;
      McTemplateK0pquutttq_EtwWriteTransfer(v5 * 8, v6, 4294967293LL, this, v9, v10, v11, v12, v13, v14, v15);
    }
  }
}
