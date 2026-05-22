/*
 * XREFs of ?StartOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJI_N_K1PEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x180123CCC
 * Callers:
 *     ?StartOperation@BamoGestureServicesProxy@@UEAAJI_N_K1PEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x180123C40 (-StartOperation@BamoGestureServicesProxy@@UEAAJI_N_K1PEAVBamoDragManagerClientPrincipal@@W4Gestu.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180078D78 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BE758 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendStartOperation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXI_N_K1IW4GestureProcessorType@@@Z @ 0x18011A2E4 (-LogSendStartOperation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXI_N_K1IW4GestureProcessorType.c)
 */

__int64 __fastcall BamoImpl::BamoGestureServicesProxyImpl::StartOperation(
        __int64 a1,
        int a2,
        char a3,
        const char *a4,
        __int64 a5,
        struct Microsoft::Bamo::BamoPrincipal *a6,
        int a7)
{
  __int64 v10; // r10
  int v11; // ebx
  __int64 v12; // rdx
  struct Microsoft::Bamo::BamoPrincipal *v14; // rdi
  int v15; // r15d
  __int64 v16; // r8
  struct IMessageCallSendHost *v17; // r14
  Microsoft::BamoImpl::BufferingMessageCallHost *v18; // rcx
  unsigned int v19; // [rsp+60h] [rbp-20h] BYREF
  struct IMessageCallSendHost *v20[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v22; // [rsp+C0h] [rbp+40h] BYREF
  int v23; // [rsp+C8h] [rbp+48h]

  v23 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE06A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    v11 = -2018375660;
    if ( v10 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v10 + 24) + 32LL),
        0x87B20814,
        0);
    v12 = 57459LL;
    goto LABEL_7;
  }
  v14 = a6;
  if ( a6 )
    v15 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
            (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
            a6);
  else
    v15 = 0;
  v20[0] = 0LL;
  v22 = 0;
  v19 = 0;
  v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
          (Microsoft::BamoImpl::BamoProxyImpl *)a1,
          v20,
          &v22,
          &v19);
  if ( v11 < 0 )
  {
    v12 = 57467LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v17 = v20[0];
  if ( *(_BYTE *)(a1 + 31) )
  {
    v18 = (struct IMessageCallSendHost *)((char *)v20[0] - 16);
    if ( !v20[0] )
      v18 = 0LL;
    *((_BYTE *)v18 + 72) = 1;
    Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v18, v14);
  }
  LOBYTE(v16) = a3;
  BamoImpl::BamoGestureServicesProxyImpl::LogSendStartOperation(a1, v23, v16, (__int64)a4, a5, v15, a7);
  v20[0] = (struct IMessageCallSendHost *)v22;
  v20[1] = (struct IMessageCallSendHost *)v19;
  return CoreUICallSend(v17, v20, 2LL);
}
