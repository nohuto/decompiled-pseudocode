/*
 * XREFs of ?DeviceAdded@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJAEBUCursorDeviceInfo@@@Z @ 0x180116770
 * Callers:
 *     ?DeviceAdded@BamoSystemCursorControllerClientProxy@@UEAAJAEBUCursorDeviceInfo@@@Z @ 0x180116720 (-DeviceAdded@BamoSystemCursorControllerClientProxy@@UEAAJAEBUCursorDeviceInfo@@@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendDeviceAdded@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@AEAAXAEBUCursorDeviceInfo@@@Z @ 0x18011ADFC (-LogSendDeviceAdded@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@AEAAXAEBUCursorDeviceInf.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerClientProxyImpl::DeviceAdded(
        BamoImpl::BamoSystemCursorControllerClientProxyImpl *this,
        const struct CursorDeviceInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  const struct CursorDeviceInfo *v9; // rdx
  unsigned int v10; // edi
  struct IMessageCallSendHost *v11; // rdi
  char *v12; // rax
  __int128 v13; // xmm0
  _QWORD v14[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v15; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v17; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v19; // [rsp+A8h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA321,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA32A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v19 = 0LL;
    v17 = 0;
    v18 = 0;
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v19, &v17, &v18);
    v10 = v8;
    if ( v8 >= 0 )
    {
      v11 = v19;
      if ( *((_BYTE *)this + 31) )
      {
        v12 = (char *)v19 - 16;
        if ( !v19 )
          v12 = 0LL;
        v12[72] = 1;
      }
      BamoImpl::BamoSystemCursorControllerClientProxyImpl::LogSendDeviceAdded(this, v9);
      v13 = *(_OWORD *)a2;
      v14[0] = v17;
      v14[1] = v18;
      v15 = v13;
      return CoreUICallSend(v11, v14, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA331,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v10;
    }
  }
}
