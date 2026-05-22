/*
 * XREFs of ?CancelOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x18011554C
 * Callers:
 *     ?CancelOperation@BamoGestureServicesProxy@@UEAAJIPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x1801154E0 (-CancelOperation@BamoGestureServicesProxy@@UEAAJIPEAVBamoDragManagerClientPrincipal@@W4GesturePr.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180078A18 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BC578 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendCancelOperation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXIIW4GestureProcessorType@@@Z @ 0x18011AB44 (-LogSendCancelOperation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXIIW4GestureProcessorType@@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoGestureServicesProxyImpl::CancelOperation(
        __int64 a1,
        unsigned int a2,
        struct Microsoft::Bamo::BamoPrincipal *a3,
        const char *a4)
{
  Microsoft::BamoImpl::BufferingMessageCallHost *v4; // rbx
  unsigned int v5; // r12d
  __int64 v9; // r10
  unsigned int v11; // r15d
  int v12; // eax
  unsigned int v13; // esi
  struct IMessageCallSendHost *v14; // rsi
  unsigned int v15; // [rsp+50h] [rbp-20h] BYREF
  struct IMessageCallSendHost *v16[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v18; // [rsp+A0h] [rbp+30h] BYREF

  v4 = 0LL;
  v5 = (unsigned int)a4;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xEA8E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v9 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v9 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA97,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a3 )
      v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
              (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
              a3);
    else
      v11 = 0;
    v16[0] = 0LL;
    v18 = 0;
    v15 = 0;
    v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            v16,
            &v18,
            &v15);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = v16[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v16[0] )
          v4 = (struct IMessageCallSendHost *)((char *)v16[0] - 16);
        *((_BYTE *)v4 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v4, a3);
      }
      BamoImpl::BamoGestureServicesProxyImpl::LogSendCancelOperation(a1, a2, v11, v5);
      v16[0] = (struct IMessageCallSendHost *)v18;
      v16[1] = (struct IMessageCallSendHost *)v15;
      return CoreUICallSend(v14, v16, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEA9F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12);
      return v13;
    }
  }
}
