/*
 * XREFs of ?OnDockDeviceAdded@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockDevicePrincipal@@@Z @ 0x180181170
 * Callers:
 *     ?OnDockDeviceAdded@BamoDeviceDockClientProxy@@UEAAJIPEAVBamoDockDevicePrincipal@@@Z @ 0x180181110 (-OnDockDeviceAdded@BamoDeviceDockClientProxy@@UEAAJIPEAVBamoDockDevicePrincipal@@@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180078D78 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BE758 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendOnDockDeviceAdded@BamoDeviceDockClientProxyImpl@BamoImpl@@AEAAXII@Z @ 0x180180DD4 (-LogSendOnDockDeviceAdded@BamoDeviceDockClientProxyImpl@BamoImpl@@AEAAXII@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDeviceDockClientProxyImpl::OnDockDeviceAdded(
        BamoImpl::BamoDeviceDockClientProxyImpl *this,
        __int64 a2,
        struct BamoDockDevicePrincipal *a3)
{
  __int64 v3; // r9
  __int64 v6; // r9
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rdi
  Microsoft::BamoImpl::BufferingMessageCallHost *v11; // rcx
  struct IMessageCallSendHost *v12[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v14; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+48h] BYREF

  v3 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v3 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA560,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
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
      (void *)0xA569,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a3 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
        a3);
    v12[0] = 0LL;
    v14 = 0;
    v15 = 0;
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v12, &v14, &v15);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v12[0];
      if ( *((_BYTE *)this + 31) )
      {
        v11 = (struct IMessageCallSendHost *)((char *)v12[0] - 16);
        if ( !v12[0] )
          v11 = 0LL;
        *((_BYTE *)v11 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v11, a3);
      }
      BamoImpl::BamoDeviceDockClientProxyImpl::LogSendOnDockDeviceAdded(this);
      v12[0] = (struct IMessageCallSendHost *)v14;
      v12[1] = (struct IMessageCallSendHost *)v15;
      return CoreUICallSend(v10, v12, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA571,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
