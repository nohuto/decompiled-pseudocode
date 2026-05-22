/*
 * XREFs of ?OnMouseInputGenerated@BamoInputObserverClientProxyImpl@BamoImpl@@QEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x180138230
 * Callers:
 *     ?OnMouseInputGenerated@BamoInputObserverClientProxy@@UEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x1801381E0 (-OnMouseInputGenerated@BamoInputObserverClientProxy@@UEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@In.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendOnMouseInputGenerated@BamoInputObserverClientProxyImpl@BamoImpl@@AEAAXAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x1801380BC (-LogSendOnMouseInputGenerated@BamoInputObserverClientProxyImpl@BamoImpl@@AEAAXAEBUAPP_MOUSE_INPU.c)
 */

__int64 __fastcall BamoImpl::BamoInputObserverClientProxyImpl::OnMouseInputGenerated(
        BamoImpl::BamoInputObserverClientProxyImpl *this,
        const struct InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  const struct InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET *v9; // rdx
  unsigned int v10; // edi
  struct IMessageCallSendHost *v11; // rdi
  char *v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _QWORD v17[2]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v18; // [rsp+50h] [rbp-9h]
  __int128 v19; // [rsp+60h] [rbp+7h]
  __int128 v20; // [rsp+70h] [rbp+17h]
  __int128 v21; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  unsigned int v23; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v24; // [rsp+D0h] [rbp+77h] BYREF
  struct IMessageCallSendHost *v25; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB2B,
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
      (void *)0xB34,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v25 = 0LL;
    v23 = 0;
    v24 = 0;
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v25, &v23, &v24);
    v10 = v8;
    if ( v8 >= 0 )
    {
      v11 = v25;
      if ( *((_BYTE *)this + 31) )
      {
        v12 = (char *)v25 - 16;
        if ( !v25 )
          v12 = 0LL;
        v12[72] = 1;
      }
      BamoImpl::BamoInputObserverClientProxyImpl::LogSendOnMouseInputGenerated(this, v9);
      v13 = *(_OWORD *)a2;
      v14 = *((_OWORD *)a2 + 1);
      v17[0] = v23;
      v17[1] = v24;
      v18 = v13;
      v15 = *((_OWORD *)a2 + 2);
      v19 = v14;
      v16 = *((_OWORD *)a2 + 3);
      v20 = v15;
      v21 = v16;
      return CoreUICallSend(v11, v17, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB3B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v10;
    }
  }
}
