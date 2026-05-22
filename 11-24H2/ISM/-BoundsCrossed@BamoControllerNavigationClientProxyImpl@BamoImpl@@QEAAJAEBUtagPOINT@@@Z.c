/*
 * XREFs of ?BoundsCrossed@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJAEBUtagPOINT@@@Z @ 0x180176DB0
 * Callers:
 *     ?BoundsCrossed@BamoControllerNavigationClientProxy@@UEAAJAEBUtagPOINT@@@Z @ 0x180176D60 (-BoundsCrossed@BamoControllerNavigationClientProxy@@UEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendBoundsCrossed@BamoControllerNavigationClientProxyImpl@BamoImpl@@AEAAXAEBUtagPOINT@@@Z @ 0x1801777F4 (-LogSendBoundsCrossed@BamoControllerNavigationClientProxyImpl@BamoImpl@@AEAAXAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoControllerNavigationClientProxyImpl::BoundsCrossed(
        BamoImpl::BamoControllerNavigationClientProxyImpl *this,
        const struct tagPOINT *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  const struct tagPOINT *v9; // rdx
  unsigned int v10; // edi
  struct IMessageCallSendHost *v11; // rdi
  char *v12; // rax
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v15; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v17; // [rsp+98h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9897,
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
      (void *)0x98A0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v17 = 0LL;
    v15 = 0;
    v16 = 0;
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v17, &v15, &v16);
    v10 = v8;
    if ( v8 >= 0 )
    {
      v11 = v17;
      if ( *((_BYTE *)this + 31) )
      {
        v12 = (char *)v17 - 16;
        if ( !v17 )
          v12 = 0LL;
        v12[72] = 1;
      }
      BamoImpl::BamoControllerNavigationClientProxyImpl::LogSendBoundsCrossed(this, v9);
      v17 = (struct IMessageCallSendHost *)*a2;
      v13[0] = v15;
      v13[1] = v16;
      return CoreUICallSend(v11, v13, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x98A7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v10;
    }
  }
}
