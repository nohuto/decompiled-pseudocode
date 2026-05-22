/*
 * XREFs of ?OnSystemButtonEvent@BamoSystemButtonEventControllerProxyImpl@BamoImpl@@QEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18015C5D0
 * Callers:
 *     ?OnSystemButtonEvent@BamoSystemButtonEventControllerProxy@@UEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18015C580 (-OnSystemButtonEvent@BamoSystemButtonEventControllerProxy@@UEAAJAEBUSystemButtonEventInfo@@@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendOnSystemButtonEvent@BamoSystemButtonEventControllerProxyImpl@BamoImpl@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18015C32C (-LogSendOnSystemButtonEvent@BamoSystemButtonEventControllerProxyImpl@BamoImpl@@AEAAXAEBUSystemBu.c)
 */

__int64 __fastcall BamoImpl::BamoSystemButtonEventControllerProxyImpl::OnSystemButtonEvent(
        BamoImpl::BamoSystemButtonEventControllerProxyImpl *this,
        const struct SystemButtonEventInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rdi
  char *v11; // rax
  __int128 v12; // xmm0
  _QWORD v13[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v14; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v16; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v18; // [rsp+A8h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9303,
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
      (void *)0x930C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v18 = 0LL;
    v16 = 0;
    v17 = 0;
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v18, &v16, &v17);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v18;
      if ( *((_BYTE *)this + 31) )
      {
        v11 = (char *)v18 - 16;
        if ( !v18 )
          v11 = 0LL;
        v11[72] = 1;
      }
      BamoImpl::BamoSystemButtonEventControllerProxyImpl::LogSendOnSystemButtonEvent(this, a2);
      v12 = *(_OWORD *)a2;
      v13[0] = v16;
      v13[1] = v17;
      v14 = v12;
      return CoreUICallSend(v10, v13, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9313,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
