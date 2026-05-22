/*
 * XREFs of ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMI@Z @ 0x180124CC0
 * Callers:
 *     ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxy@@UEAAJGMI@Z @ 0x180124C50 (-SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxy@@UEAAJGMI@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendSendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@AEAAXGMI@Z @ 0x18011BC88 (-LogSendSendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@AEAAXGMI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::SendHapticFeedbackForDuration(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        unsigned __int16 a2,
        float a3,
        const char *a4)
{
  char *v4; // rbx
  __int64 v7; // r8
  int v9; // eax
  unsigned int v10; // esi
  struct IMessageCallSendHost *v11; // rsi
  unsigned int v12; // [rsp+50h] [rbp-30h] BYREF
  struct IMessageCallSendHost *v13[3]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v15; // [rsp+B0h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8DD6,
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
      (void *)0x8DDF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v13[0] = 0LL;
    v15 = 0;
    v12 = 0;
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v13, &v15, &v12);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v13[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v13[0] )
          v4 = (char *)v13[0] - 16;
        v4[72] = 1;
      }
      BamoImpl::BamoSimpleHapticsControllerProxyImpl::LogSendSendHapticFeedbackForDuration(this, a2, a3);
      v13[0] = (struct IMessageCallSendHost *)v15;
      v13[1] = (struct IMessageCallSendHost *)v12;
      return CoreUICallSend(v11, v13, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8DE6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
