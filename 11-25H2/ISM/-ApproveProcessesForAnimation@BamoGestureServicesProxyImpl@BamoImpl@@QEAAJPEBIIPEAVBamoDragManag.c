/*
 * XREFs of ?ApproveProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJPEBIIPEAVBamoDragManagerClientPrincipal@@@Z @ 0x1801132D0
 * Callers:
 *     ?ApproveProcessesForAnimation@BamoGestureServicesProxy@@UEAAJPEBIIPEAVBamoDragManagerClientPrincipal@@@Z @ 0x180113260 (-ApproveProcessesForAnimation@BamoGestureServicesProxy@@UEAAJPEBIIPEAVBamoDragManagerClientPrinc.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180078D78 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BE758 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendApproveProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXPEBIII@Z @ 0x180118BA0 (-LogSendApproveProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXPEBIII@Z.c)
 */

__int64 __fastcall BamoImpl::BamoGestureServicesProxyImpl::ApproveProcessesForAnimation(
        BamoImpl::BamoGestureServicesProxyImpl *this,
        const unsigned int *a2,
        unsigned int a3,
        struct BamoDragManagerClientPrincipal *a4)
{
  Microsoft::BamoImpl::BufferingMessageCallHost *v4; // rbx
  __int64 v8; // r10
  unsigned int v10; // r15d
  int v11; // eax
  const unsigned int *v12; // rdx
  unsigned int v13; // esi
  struct IMessageCallSendHost *v14; // rsi
  unsigned int v15; // [rsp+50h] [rbp-20h] BYREF
  struct IMessageCallSendHost *v16[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v18; // [rsp+A0h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE1E7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v8 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v8 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE1F0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a4 )
      v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
              (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
              a4);
    else
      v10 = 0;
    v16[0] = 0LL;
    v18 = 0;
    v15 = 0;
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v16, &v18, &v15);
    v13 = v11;
    if ( v11 >= 0 )
    {
      v14 = v16[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v16[0] )
          v4 = (struct IMessageCallSendHost *)((char *)v16[0] - 16);
        *((_BYTE *)v4 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v4, a4);
      }
      BamoImpl::BamoGestureServicesProxyImpl::LogSendApproveProcessesForAnimation(this, v12, a3, v10);
      v16[0] = (struct IMessageCallSendHost *)v18;
      v16[1] = (struct IMessageCallSendHost *)v15;
      return CoreUICallSend(v14, v16, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE1F8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v11);
      return v13;
    }
  }
}
