/*
 * XREFs of ?RegisterInputAttemptedClient@BamoInputDeliveryServerProxyImpl@BamoImpl@@QEAAJPEAVBamoInputAttemptedDeliveryClientPrincipal@@@Z @ 0x1801214A0
 * Callers:
 *     ?RegisterInputAttemptedClient@BamoInputDeliveryServerProxy@@UEAAJPEAVBamoInputAttemptedDeliveryClientPrincipal@@@Z @ 0x180121450 (-RegisterInputAttemptedClient@BamoInputDeliveryServerProxy@@UEAAJPEAVBamoInputAttemptedDeliveryC.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180078D78 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BE758 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendRegisterInputAttemptedClient@BamoInputDeliveryServerProxyImpl@BamoImpl@@AEAAXI@Z @ 0x1801197A4 (-LogSendRegisterInputAttemptedClient@BamoInputDeliveryServerProxyImpl@BamoImpl@@AEAAXI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoInputDeliveryServerProxyImpl::RegisterInputAttemptedClient(
        BamoImpl::BamoInputDeliveryServerProxyImpl *this,
        struct BamoInputAttemptedDeliveryClientPrincipal *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  unsigned int v9; // esi
  struct IMessageCallSendHost *v10; // rsi
  Microsoft::BamoImpl::BufferingMessageCallHost *v11; // rcx
  _QWORD v12[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v14; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+98h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xF4D5,
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
      (void *)0xF4DE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a2 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
        a2);
    v16 = 0LL;
    v14 = 0;
    v15 = 0;
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v16, &v14, &v15);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v16;
      if ( *((_BYTE *)this + 31) )
      {
        v11 = (struct IMessageCallSendHost *)((char *)v16 - 16);
        if ( !v16 )
          v11 = 0LL;
        *((_BYTE *)v11 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v11, a2);
      }
      BamoImpl::BamoInputDeliveryServerProxyImpl::LogSendRegisterInputAttemptedClient(this);
      v12[0] = v14;
      v12[1] = v15;
      return CoreUICallSend(v10, v12, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF4E6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
