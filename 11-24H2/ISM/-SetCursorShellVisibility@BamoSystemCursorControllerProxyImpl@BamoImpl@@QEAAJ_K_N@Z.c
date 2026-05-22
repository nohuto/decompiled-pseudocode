/*
 * XREFs of ?SetCursorShellVisibility@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K_N@Z @ 0x180125470
 * Callers:
 *     ?SetCursorShellVisibility@BamoSystemCursorControllerProxy@@UEAAJ_K_N@Z @ 0x180125410 (-SetCursorShellVisibility@BamoSystemCursorControllerProxy@@UEAAJ_K_N@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendSetCursorShellVisibility@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_K_N@Z @ 0x18011BED0 (-LogSendSetCursorShellVisibility@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_K_N@Z.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerProxyImpl::SetCursorShellVisibility(
        BamoImpl::BamoSystemCursorControllerProxyImpl *this)
{
  __int64 v1; // r9
  char *v2; // rbx
  __int64 v4; // r9
  int v6; // eax
  unsigned int v7; // esi
  struct IMessageCallSendHost *v8; // rsi
  struct IMessageCallSendHost *v9[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v11; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v12; // [rsp+98h] [rbp+48h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = 0LL;
  if ( *(_DWORD *)(v1 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9E41,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v1);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v4 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v4 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E4A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v9[0] = 0LL;
    v11 = 0;
    v12 = 0;
    v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v9, &v11, &v12);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = v9[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v9[0] )
          v2 = (char *)v9[0] - 16;
        v2[72] = 1;
      }
      BamoImpl::BamoSystemCursorControllerProxyImpl::LogSendSetCursorShellVisibility(this);
      v9[0] = (struct IMessageCallSendHost *)v11;
      v9[1] = (struct IMessageCallSendHost *)v12;
      return CoreUICallSend(v8, v9, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E51,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
}
