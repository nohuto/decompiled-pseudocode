/*
 * XREFs of ?OnDockInput@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIAEBUDockInputInfo@@@Z @ 0x1801814F0
 * Callers:
 *     ?OnDockInput@BamoDeviceDockClientProxy@@UEAAJIAEBUDockInputInfo@@@Z @ 0x180181490 (-OnDockInput@BamoDeviceDockClientProxy@@UEAAJIAEBUDockInputInfo@@@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendOnDockInput@BamoDeviceDockClientProxyImpl@BamoImpl@@AEAAXIAEBUDockInputInfo@@@Z @ 0x180180ED4 (-LogSendOnDockInput@BamoDeviceDockClientProxyImpl@BamoImpl@@AEAAXIAEBUDockInputInfo@@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDeviceDockClientProxyImpl::OnDockInput(
        BamoImpl::BamoDeviceDockClientProxyImpl *this,
        unsigned int a2,
        const struct DockInputInfo *a3)
{
  __int64 v3; // r9
  char *v4; // rbx
  __int64 v8; // r9
  int v10; // eax
  const struct DockInputInfo *v11; // r8
  unsigned int v12; // esi
  struct IMessageCallSendHost *v13; // rsi
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  struct IMessageCallSendHost *v19[2]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v20; // [rsp+50h] [rbp-29h]
  __int128 v21; // [rsp+60h] [rbp-19h]
  __int128 v22; // [rsp+70h] [rbp-9h]
  __int128 v23; // [rsp+80h] [rbp+7h]
  __int128 v24; // [rsp+90h] [rbp+17h]
  __int64 v25; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned int v27; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v28; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  if ( *(_DWORD *)(v3 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA5CF,
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
      (void *)0xA5D8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v19[0] = 0LL;
    v27 = 0;
    v28 = 0;
    v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v19, &v27, &v28);
    v12 = v10;
    if ( v10 >= 0 )
    {
      v13 = v19[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v19[0] )
          v4 = (char *)v19[0] - 16;
        v4[72] = 1;
      }
      BamoImpl::BamoDeviceDockClientProxyImpl::LogSendOnDockInput(this, a2, v11);
      v14 = *(_OWORD *)a3;
      v15 = *((_OWORD *)a3 + 1);
      v19[0] = (struct IMessageCallSendHost *)v27;
      v20 = v14;
      v16 = *((_OWORD *)a3 + 2);
      v19[1] = (struct IMessageCallSendHost *)v28;
      v21 = v15;
      v17 = *((_OWORD *)a3 + 3);
      v22 = v16;
      v18 = *((_OWORD *)a3 + 4);
      v23 = v17;
      *(_QWORD *)&v17 = *((_QWORD *)a3 + 10);
      v24 = v18;
      v25 = v17;
      return CoreUICallSend(v13, v19, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA5DF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10);
      return v12;
    }
  }
}
