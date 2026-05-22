/*
 * XREFs of ?AttachApplication2@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJPEAVBamoCustomCursorControllerClient2Principal@@@Z @ 0x1801134B0
 * Callers:
 *     ?AttachApplication2@BamoSystemCursorControllerProxy@@UEAAJPEAVBamoCustomCursorControllerClient2Principal@@@Z @ 0x180113460 (-AttachApplication2@BamoSystemCursorControllerProxy@@UEAAJPEAVBamoCustomCursorControllerClient2P.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180078D78 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BE758 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendAttachApplication2@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAXI@Z @ 0x180118C28 (-LogSendAttachApplication2@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAXI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerProxyImpl::AttachApplication2(
        BamoImpl::BamoSystemCursorControllerProxyImpl *this,
        struct BamoCustomCursorControllerClient2Principal *a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BufferingMessageCallHost *v4; // rbx
  __int64 v7; // r8
  unsigned int v9; // r15d
  int v10; // eax
  unsigned int v11; // r14d
  struct IMessageCallSendHost *v12; // r14
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v15; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v17; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x91CA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v7 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v7 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91D3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a2 )
      v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
             (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
             a2);
    else
      v9 = 0;
    v17 = 0LL;
    v15 = 0;
    v16 = 0;
    v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v17, &v15, &v16);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = v17;
      if ( *((_BYTE *)this + 31) )
      {
        if ( v17 )
          v4 = (struct IMessageCallSendHost *)((char *)v17 - 16);
        *((_BYTE *)v4 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v4, a2);
      }
      BamoImpl::BamoSystemCursorControllerProxyImpl::LogSendAttachApplication2(this, v9);
      v13[0] = v15;
      v13[1] = v16;
      return CoreUICallSend(v12, v13, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x91DB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
}
