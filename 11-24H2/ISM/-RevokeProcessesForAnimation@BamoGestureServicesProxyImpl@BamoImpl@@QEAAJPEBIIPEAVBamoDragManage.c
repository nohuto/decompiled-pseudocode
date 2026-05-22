/*
 * XREFs of ?RevokeProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJPEBIIPEAVBamoDragManagerClientPrincipal@@@Z @ 0x180124AC0
 * Callers:
 *     ?RevokeProcessesForAnimation@BamoGestureServicesProxy@@UEAAJPEBIIPEAVBamoDragManagerClientPrincipal@@@Z @ 0x180124A50 (-RevokeProcessesForAnimation@BamoGestureServicesProxy@@UEAAJPEBIIPEAVBamoDragManagerClientPrinci.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180078A18 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BC578 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendRevokeProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXPEBIII@Z @ 0x18011BC00 (-LogSendRevokeProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXPEBIII@Z.c)
 */

__int64 __fastcall BamoImpl::BamoGestureServicesProxyImpl::RevokeProcessesForAnimation(
        BamoImpl::BamoGestureServicesProxyImpl *this,
        const unsigned int *a2,
        __int64 a3,
        struct BamoDragManagerClientPrincipal *a4)
{
  Microsoft::BamoImpl::BufferingMessageCallHost *v4; // rbx
  __int64 v7; // r10
  int v9; // eax
  const unsigned int *v10; // rdx
  unsigned int v11; // esi
  struct IMessageCallSendHost *v12; // rsi
  unsigned int v13; // [rsp+50h] [rbp-20h] BYREF
  struct IMessageCallSendHost *v14[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v16; // [rsp+A0h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xEC0B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v7 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v7 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a4 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
        a4);
    v14[0] = 0LL;
    v16 = 0;
    v13 = 0;
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v14, &v16, &v13);
    v11 = v9;
    if ( v9 >= 0 )
    {
      v12 = v14[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v14[0] )
          v4 = (struct IMessageCallSendHost *)((char *)v14[0] - 16);
        *((_BYTE *)v4 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v4, a4);
      }
      BamoImpl::BamoGestureServicesProxyImpl::LogSendRevokeProcessesForAnimation(this, v10);
      v14[0] = (struct IMessageCallSendHost *)v16;
      v14[1] = (struct IMessageCallSendHost *)v13;
      return CoreUICallSend(v12, v14, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEC1C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v11;
    }
  }
}
