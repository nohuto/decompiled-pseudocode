/*
 * XREFs of ?OnRemoveDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18027366C
 * Callers:
 *     ?OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x180273620 (-OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801A8D14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180271CFC (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180272154 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::OnRemoveDataSourceError(
        BamoImpl::BamoDataProviderProxyImpl *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rcx
  char *v11; // rax
  __int64 v12; // [rsp+38h] [rbp-18h]
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v15; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v17; // [rsp+98h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B8F,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
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
      (void *)0x2B98,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v17 = 0LL;
    v15 = 0;
    v16 = 0;
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v17, &v15, &v16);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v17;
      if ( *((_BYTE *)this + 31) )
      {
        v11 = (char *)v17 - 16;
        if ( !v17 )
          v11 = 0LL;
        v11[72] = 1;
      }
      v13[1] = v16;
      return CoreUICallSend(v10, v13, 2LL, 0LL, 4, &unk_180383D65, a2, v12, v15);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B9F,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
