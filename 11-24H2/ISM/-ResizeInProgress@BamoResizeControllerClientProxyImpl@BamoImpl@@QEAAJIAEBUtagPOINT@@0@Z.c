/*
 * XREFs of ?ResizeInProgress@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0@Z @ 0x18012469C
 * Callers:
 *     ?ResizeInProgress@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0@Z @ 0x180124630 (-ResizeInProgress@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendResizeInProgress@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@0@Z @ 0x18011BAD8 (-LogSendResizeInProgress@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@0@Z.c)
 */

__int64 __fastcall BamoImpl::BamoResizeControllerClientProxyImpl::ResizeInProgress(
        BamoImpl::BamoResizeControllerClientProxyImpl *this,
        unsigned int a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  char *v4; // rbx
  __int64 v9; // r10
  int v11; // eax
  const struct tagPOINT *v12; // r8
  const struct tagPOINT *v13; // r9
  unsigned int v14; // esi
  struct IMessageCallSendHost *v15; // rsi
  unsigned int v16; // [rsp+50h] [rbp-30h] BYREF
  struct IMessageCallSendHost *v17[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v18[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v20; // [rsp+B0h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7B7A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v9 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v9 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B83,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v17[0] = 0LL;
    v20 = 0;
    v16 = 0;
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v17, &v20, &v16);
    v14 = v11;
    if ( v11 >= 0 )
    {
      v15 = v17[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v17[0] )
          v4 = (char *)v17[0] - 16;
        v4[72] = 1;
      }
      BamoImpl::BamoResizeControllerClientProxyImpl::LogSendResizeInProgress(this, a2, v12, v13);
      v17[0] = (struct IMessageCallSendHost *)*a4;
      v17[1] = (struct IMessageCallSendHost *)*a3;
      v18[0] = v20;
      v18[1] = v16;
      return CoreUICallSend(v15, v18, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B8A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v11);
      return v14;
    }
  }
}
