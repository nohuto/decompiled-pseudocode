/*
 * XREFs of ?DragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@7@22W4GestureProcessorType@@@Z @ 0x180142CB0
 * Callers:
 *     ?DragStarted@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@6@22W4GestureProcessorType@@@Z @ 0x180142BD0 (-DragStarted@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendDragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@7@22W4GestureProcessorType@@@Z @ 0x180143640 (-LogSendDragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGestureAn.c)
 */

__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::DragStarted(
        __int64 a1,
        unsigned int a2,
        struct IMessageCallSendHost **a3,
        const char *a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 v7; // r10
  int v9; // eax
  unsigned int v10; // edi
  char *v11; // rax
  __int64 v12; // xmm1_8
  unsigned int v13; // [rsp+98h] [rbp-51h] BYREF
  unsigned int v14; // [rsp+9Ch] [rbp-4Dh] BYREF
  struct IMessageCallSendHost *v15[3]; // [rsp+A0h] [rbp-49h] BYREF
  _QWORD v16[2]; // [rsp+B8h] [rbp-31h] BYREF
  __int128 v17; // [rsp+C8h] [rbp-21h]
  __int64 v18; // [rsp+D8h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+47h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBA43,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v7 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v7 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA4C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v15[0] = 0LL;
    v13 = 0;
    v14 = 0;
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v15,
           &v13,
           &v14);
    v10 = v9;
    if ( v9 >= 0 )
    {
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v15[0] )
          v11 = (char *)v15[0] - 16;
        else
          v11 = 0LL;
        v11[72] = 1;
      }
      BamoImpl::BamoDragManagerClientProxyImpl::LogSendDragStarted(a1, a2);
      v12 = *((_QWORD *)a6 + 2);
      v17 = *a6;
      v15[1] = *(struct IMessageCallSendHost **)a4;
      v18 = v12;
      v15[2] = *a3;
      v16[0] = v13;
      v16[1] = v14;
      return CoreUICallSend(v15[0], v16, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBA53,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
