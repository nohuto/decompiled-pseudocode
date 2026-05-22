/*
 * XREFs of ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMII@Z @ 0x180123128
 * Callers:
 *     ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxy@@UEAAJGMII@Z @ 0x1801230B0 (-SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxy@@UEAAJGMII@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendSendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@AEAAXGMII@Z @ 0x180119F80 (-LogSendSendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@AEAAXGMII@.c)
 */

__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::SendHapticFeedbackForPlayCount(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        unsigned __int16 a2,
        float a3,
        const char *a4,
        unsigned int a5)
{
  char *v5; // rbx
  unsigned int v6; // r14d
  __int64 v9; // r8
  int v11; // eax
  unsigned int v12; // esi
  struct IMessageCallSendHost *v13; // rsi
  unsigned int v14; // [rsp+50h] [rbp-30h] BYREF
  struct IMessageCallSendHost *v15[3]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v17; // [rsp+A0h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = (unsigned int)a4;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x81BD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v9 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v9 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81C6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v15[0] = 0LL;
    v17 = 0;
    v14 = 0;
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v15, &v17, &v14);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v13 = v15[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v15[0] )
          v5 = (char *)v15[0] - 16;
        v5[72] = 1;
      }
      BamoImpl::BamoSimpleHapticsControllerProxyImpl::LogSendSendHapticFeedbackForPlayCount(this, a2, a3, v6, a5);
      v15[0] = (struct IMessageCallSendHost *)v17;
      v15[1] = (struct IMessageCallSendHost *)v14;
      return CoreUICallSend(v13, v15, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81CD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v11);
      return v12;
    }
  }
}
