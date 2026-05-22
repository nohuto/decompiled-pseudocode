/*
 * XREFs of ?DropTargetChanged@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@PEBUDragInfoStruct@@I2@Z @ 0x180142FA4
 * Callers:
 *     ?DropTargetChanged@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@PEBUDragInfoStruct@@I2@Z @ 0x180142EE0 (-DropTargetChanged@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationPropert.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendDropTargetChanged@BamoDragManagerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@PEBUDragInfoStruct@@I2@Z @ 0x18014374C (-LogSendDropTargetChanged@BamoDragManagerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGes.c)
 */

__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::DropTargetChanged(
        __int64 a1,
        unsigned int a2,
        struct IMessageCallSendHost **a3,
        const char *a4,
        struct IMessageCallSendHost **a5,
        __int128 *a6)
{
  char *v6; // rbx
  __int64 v9; // r10
  int v10; // edi
  __int64 v11; // rdx
  struct IMessageCallSendHost *v13; // r13
  __int64 v14; // xmm1_8
  unsigned int v15; // [rsp+88h] [rbp-49h] BYREF
  struct IMessageCallSendHost *v16[3]; // [rsp+90h] [rbp-41h] BYREF
  _QWORD v17[2]; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v18; // [rsp+B8h] [rbp-19h]
  __int64 v19; // [rsp+C8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+3Fh]
  unsigned int v21; // [rsp+118h] [rbp+47h] BYREF
  struct IMessageCallSendHost **v22; // [rsp+128h] [rbp+57h]
  struct IMessageCallSendHost **v23; // [rsp+130h] [rbp+5Fh]

  v23 = (struct IMessageCallSendHost **)a4;
  v22 = a3;
  v6 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBB29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    v10 = -2018375660;
    if ( v9 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v9 + 24) + 32LL),
        0x87B20814,
        0);
    v11 = 47922LL;
    goto LABEL_7;
  }
  v16[0] = 0LL;
  v21 = 0;
  v15 = 0;
  v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
          (Microsoft::BamoImpl::BamoProxyImpl *)a1,
          v16,
          &v21,
          &v15);
  if ( v10 < 0 )
  {
    v11 = 47929LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v13 = v16[0];
  if ( *(_BYTE *)(a1 + 31) )
  {
    if ( v16[0] )
      v6 = (char *)v16[0] - 16;
    v6[72] = 1;
  }
  BamoImpl::BamoDragManagerClientProxyImpl::LogSendDropTargetChanged(a1, a2);
  v14 = *((_QWORD *)a6 + 2);
  v18 = *a6;
  v19 = v14;
  v16[0] = *a5;
  v16[1] = *v23;
  v16[2] = *v22;
  v17[0] = v21;
  v17[1] = v15;
  return CoreUICallSend(v13, v17, 2LL);
}
