/*
 * XREFs of ?AnimationStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z @ 0x18014231C
 * Callers:
 *     ?AnimationStarted@BamoDragManagerClientProxy@@UEAAJI_K0@Z @ 0x1801422B0 (-AnimationStarted@BamoDragManagerClientProxy@@UEAAJI_K0@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendAnimationStarted@BamoDragManagerClientProxyImpl@BamoImpl@@AEAAXI_K0@Z @ 0x180143368 (-LogSendAnimationStarted@BamoDragManagerClientProxyImpl@BamoImpl@@AEAAXI_K0@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::AnimationStarted(
        BamoImpl::BamoDragManagerClientProxyImpl *this,
        unsigned int a2,
        unsigned __int64 a3,
        const char *a4)
{
  char *v4; // rbx
  __int64 v9; // r10
  int v11; // eax
  unsigned int v12; // esi
  struct IMessageCallSendHost *v13; // rsi
  unsigned int v14; // [rsp+50h] [rbp-20h] BYREF
  struct IMessageCallSendHost *v15[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v17; // [rsp+A0h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBB5D,
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
      (void *)0xBB66,
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
          v4 = (char *)v15[0] - 16;
        v4[72] = 1;
      }
      BamoImpl::BamoDragManagerClientProxyImpl::LogSendAnimationStarted(this, a2, a3, (unsigned __int64)a4);
      v15[0] = (struct IMessageCallSendHost *)v17;
      v15[1] = (struct IMessageCallSendHost *)v14;
      return CoreUICallSend(v13, v15, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBB6D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v11);
      return v12;
    }
  }
}
