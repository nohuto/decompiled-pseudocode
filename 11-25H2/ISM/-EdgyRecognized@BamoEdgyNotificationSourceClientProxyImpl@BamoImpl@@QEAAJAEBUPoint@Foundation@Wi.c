/*
 * XREFs of ?EdgyRecognized@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x180114EF0
 * Callers:
 *     ?EdgyRecognized@BamoEdgyNotificationSourceClientProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x180114EA0 (-EdgyRecognized@BamoEdgyNotificationSourceClientProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendEdgyRecognized@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x180119140 (-LogSendEdgyRecognized@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@AEAAXAEBUPoint@Founda.c)
 */

__int64 __fastcall BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::EdgyRecognized(
        BamoImpl::BamoEdgyNotificationSourceClientProxyImpl *this,
        struct IMessageCallSendHost **a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  const struct Windows::Foundation::Point *v9; // rdx
  unsigned int v10; // edi
  struct IMessageCallSendHost *v11; // rdi
  char *v12; // rax
  struct IMessageCallSendHost *v13; // xmm0_8
  _QWORD v14[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v16; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v18; // [rsp+98h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xDA95,
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
      (void *)0xDA9E,
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
    v10 = v8;
    if ( v8 >= 0 )
    {
      v11 = v18;
      if ( *((_BYTE *)this + 31) )
      {
        v12 = (char *)v18 - 16;
        if ( !v18 )
          v12 = 0LL;
        v12[72] = 1;
      }
      BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::LogSendEdgyRecognized(this, v9);
      v13 = *a2;
      v14[0] = v16;
      v14[1] = v17;
      v18 = v13;
      return CoreUICallSend(v11, v14, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDAA5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v10;
    }
  }
}
