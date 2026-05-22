/*
 * XREFs of ?Register@BamoDataProviderRegistrarProxyImpl@BamoImpl@@QEAAJPEAVBamoDataProviderPrincipal@@@Z @ 0x180078848
 * Callers:
 *     ?Register@BamoDataProviderRegistrarProxy@@UEAAJPEAVBamoDataProviderPrincipal@@@Z @ 0x180103AC0 (-Register@BamoDataProviderRegistrarProxy@@UEAAJPEAVBamoDataProviderPrincipal@@@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x180044C6C (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180078A18 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BC578 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarProxyImpl::Register(
        BamoImpl::BamoDataProviderRegistrarProxyImpl *this,
        struct BamoDataProviderPrincipal *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  _BYTE *v8; // rdi
  int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // r14d
  struct IMessageCallSendHost *SendHost; // rax
  struct IMessageCallSendHost *v13; // rsi
  __int64 v14; // rbx
  Microsoft::BamoImpl::BufferingMessageCallHost *v15; // rcx
  int v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+20h] [rbp-48h]
  _QWORD v18[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2FB9,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FC2,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL,
      v16);
    return 2276591636LL;
  }
  else
  {
    if ( a2 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(this, a2);
    v8 = (char *)this + 31;
    if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) || *v8 )
    {
      v11 = *((_DWORD *)this + 6);
    }
    else
    {
      v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
             *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
             0x87B20805,
             0);
      v10 = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18B,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
          (const char *)(unsigned int)v9,
          v16);
      v11 = 0;
      if ( (v10 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x171,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
          (const char *)v10,
          v16);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2FCA,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)v10,
          v17);
        return v10;
      }
    }
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 2));
    v13 = SendHost;
    v14 = *(unsigned int *)(*((_QWORD *)this + 2) + 36LL);
    if ( *v8 )
    {
      v15 = (Microsoft::BamoImpl::BufferingMessageCallHost *)(((unsigned __int64)SendHost - 16) & -(__int64)(SendHost != 0LL));
      *((_BYTE *)v15 + 72) = 1;
      Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v15, a2);
    }
    v18[1] = v11;
    v18[0] = v14;
    return CoreUICallSend(v13, v18, 2LL);
  }
}
