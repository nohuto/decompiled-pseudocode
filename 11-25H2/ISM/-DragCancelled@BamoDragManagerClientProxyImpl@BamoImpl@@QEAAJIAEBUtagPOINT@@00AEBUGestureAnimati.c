/*
 * XREFs of ?DragCancelled@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014252C
 * Callers:
 *     ?DragCancelled@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180142480 (-DragCancelled@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendDragCancelled@BamoDragManagerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180143400 (-LogSendDragCancelled@BamoDragManagerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGesture.c)
 */

__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::DragCancelled(
        __int64 a1,
        unsigned int a2,
        struct IMessageCallSendHost **a3,
        const char *a4,
        struct IMessageCallSendHost **a5,
        __int128 *a6)
{
  char *v6; // rbx
  __int64 v10; // r10
  int v11; // edi
  __int64 v12; // rdx
  struct IMessageCallSendHost *v14; // r15
  __int64 v15; // xmm1_8
  struct IMessageCallSendHost *v16; // rcx
  unsigned int v17; // [rsp+70h] [rbp-49h] BYREF
  struct IMessageCallSendHost *v18[3]; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v19[2]; // [rsp+90h] [rbp-29h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-19h]
  __int64 v21; // [rsp+B0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+3Fh]
  unsigned int v23; // [rsp+100h] [rbp+47h] BYREF
  struct IMessageCallSendHost **v24; // [rsp+110h] [rbp+57h]

  v24 = a3;
  v6 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBAEE,
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
    v12 = 47863LL;
    goto LABEL_7;
  }
  v18[0] = 0LL;
  v23 = 0;
  v17 = 0;
  v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
          (Microsoft::BamoImpl::BamoProxyImpl *)a1,
          v18,
          &v23,
          &v17);
  if ( v11 < 0 )
  {
    v12 = 47870LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v14 = v18[0];
  if ( *(_BYTE *)(a1 + 31) )
  {
    if ( v18[0] )
      v6 = (char *)v18[0] - 16;
    v6[72] = 1;
  }
  BamoImpl::BamoDragManagerClientProxyImpl::LogSendDragCancelled(a1, a2);
  v15 = *((_QWORD *)a6 + 2);
  v20 = *a6;
  v21 = v15;
  v16 = *a5;
  v18[1] = *(struct IMessageCallSendHost **)a4;
  v18[0] = v16;
  v18[2] = *v24;
  v19[0] = v23;
  v19[1] = v17;
  return CoreUICallSend(v14, v19, 2LL);
}
