/*
 * XREFs of ?AttachIsmCursorVisual@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K0@Z @ 0x180113840
 * Callers:
 *     ?AttachIsmCursorVisual@BamoSystemCursorControllerClientProxy@@UEAAJ_K0@Z @ 0x1801137E0 (-AttachIsmCursorVisual@BamoSystemCursorControllerClientProxy@@UEAAJ_K0@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendAttachIsmCursorVisual@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@AEAAX_K0@Z @ 0x180118D18 (-LogSendAttachIsmCursorVisual@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@AEAAX_K0@Z.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerClientProxyImpl::AttachIsmCursorVisual(
        BamoImpl::BamoSystemCursorControllerClientProxyImpl *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r9
  char *v4; // rbx
  __int64 v8; // r9
  int v10; // eax
  unsigned int v11; // esi
  struct IMessageCallSendHost *v12; // rsi
  struct IMessageCallSendHost *v13[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v15; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+48h] BYREF

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  if ( *(_DWORD *)(v3 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x96AA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v3);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v8 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v8 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96B3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v13[0] = 0LL;
    v15 = 0;
    v16 = 0;
    v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v13, &v15, &v16);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = v13[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v13[0] )
          v4 = (char *)v13[0] - 16;
        v4[72] = 1;
      }
      BamoImpl::BamoSystemCursorControllerClientProxyImpl::LogSendAttachIsmCursorVisual(this, a2, a3);
      v13[0] = (struct IMessageCallSendHost *)v15;
      v13[1] = (struct IMessageCallSendHost *)v16;
      return CoreUICallSend(v12, v13, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96BA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
}
