/*
 * XREFs of ?TransferInkPoints@BamoShellHandwritingHostClientProxyImpl@BamoImpl@@QEAAJPEBUSyntheticPenInfo@Input@Internal@UI@Windows@@I@Z @ 0x180080A74
 * Callers:
 *     ?TransferInkPoints@BamoShellHandwritingHostClientProxy@@UEAAJPEBUSyntheticPenInfo@Input@Internal@UI@Windows@@I@Z @ 0x18015AA20 (-TransferInkPoints@BamoShellHandwritingHostClientProxy@@UEAAJPEBUSyntheticPenInfo@Input@Internal.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800481DC (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendTransferInkPoints@BamoShellHandwritingHostClientProxyImpl@BamoImpl@@AEAAXPEBUSyntheticPenInfo@Input@Internal@UI@Windows@@I@Z @ 0x18015A84C (-LogSendTransferInkPoints@BamoShellHandwritingHostClientProxyImpl@BamoImpl@@AEAAXPEBUSyntheticPe.c)
 */

__int64 __fastcall BamoImpl::BamoShellHandwritingHostClientProxyImpl::TransferInkPoints(
        BamoImpl::BamoShellHandwritingHostClientProxyImpl *this,
        const struct Windows::UI::Internal::Input::SyntheticPenInfo *a2,
        unsigned int a3)
{
  __int64 v3; // r9
  __int64 v6; // r9
  __int64 v8; // r9
  _BYTE *v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // ebp
  struct IMessageCallSendHost *SendHost; // rax
  const struct Windows::UI::Internal::Input::SyntheticPenInfo *v14; // rdx
  struct IMessageCallSendHost *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-58h]
  int v19; // [rsp+20h] [rbp-58h]
  _QWORD v20[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v3 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7A14,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v3);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A1D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL,
      v18);
    return 2276591636LL;
  }
  else
  {
    v9 = (char *)this + 31;
    if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) || *v9 )
    {
      v12 = *((_DWORD *)this + 6);
    }
    else
    {
      v10 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v8 + 24) + 32LL),
              0x87B20805,
              0);
      v11 = v10;
      if ( v10 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18B,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
          (const char *)(unsigned int)v10,
          v18);
      v12 = 0;
      if ( (v11 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x171,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
          (const char *)v11,
          v18);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7A24,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v11,
          v19);
        return v11;
      }
    }
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 2));
    v15 = SendHost;
    v16 = *(unsigned int *)(*((_QWORD *)this + 2) + 36LL);
    if ( *v9 )
    {
      v17 = (__int64)SendHost + 56;
      if ( !SendHost )
        v17 = 72LL;
      *(_BYTE *)v17 = 1;
    }
    BamoImpl::BamoShellHandwritingHostClientProxyImpl::LogSendTransferInkPoints(this, v14, a3);
    v20[1] = v12;
    v20[0] = v16;
    return CoreUICallSend(v15, v20, 2LL);
  }
}
