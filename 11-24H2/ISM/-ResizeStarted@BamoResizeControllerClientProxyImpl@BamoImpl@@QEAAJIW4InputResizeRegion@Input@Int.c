/*
 * XREFs of ?ResizeStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@AEBUtagPOINT@@2@Z @ 0x1801248B0
 * Callers:
 *     ?ResizeStarted@BamoResizeControllerClientProxy@@UEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@3456@AEBUtagPOINT@@2@Z @ 0x180124830 (-ResizeStarted@BamoResizeControllerClientProxy@@UEAAJIW4InputResizeRegion@Input@Internal@UI@Wind.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendResizeStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@AEBUtagPOINT@@2@Z @ 0x18011BB5C (-LogSendResizeStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXIW4InputResizeRegion@In.c)
 */

__int64 __fastcall BamoImpl::BamoResizeControllerClientProxyImpl::ResizeStarted(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4,
        struct IMessageCallSendHost **a5,
        struct IMessageCallSendHost **a6)
{
  unsigned int v6; // esi
  __int64 v10; // r10
  int v12; // eax
  unsigned int v13; // edi
  struct IMessageCallSendHost *v14; // rdi
  char *v15; // rax
  struct IMessageCallSendHost *v16; // rcx
  int v17; // [rsp+20h] [rbp-49h]
  int v18; // [rsp+28h] [rbp-41h]
  unsigned int v19; // [rsp+60h] [rbp-9h] BYREF
  struct IMessageCallSendHost *v20[2]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD v21[3]; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+4Fh]
  unsigned int v23; // [rsp+C0h] [rbp+57h] BYREF

  v6 = (unsigned int)a4;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7B46,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v10 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v10 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B4F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v20[0] = 0LL;
    v23 = 0;
    v19 = 0;
    v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            v20,
            &v23,
            &v19);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = v20[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        v15 = (char *)v20[0] - 16;
        if ( !v20[0] )
          v15 = 0LL;
        v15[72] = 1;
      }
      BamoImpl::BamoResizeControllerClientProxyImpl::LogSendResizeStarted(a1, a2, a3, v6, v17, v18);
      v20[0] = *a6;
      v16 = *a5;
      v21[0] = v23;
      v21[1] = v19;
      v20[1] = v16;
      return CoreUICallSend(v14, v21, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B56,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12);
      return v13;
    }
  }
}
