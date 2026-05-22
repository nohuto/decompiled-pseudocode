/*
 * XREFs of ?StopProcess@BamoInputProcessProxyImpl@BamoImpl@@QEAAJXZ @ 0x18019B1E0
 * Callers:
 *     ?StopProcess@BamoInputProcessProxy@@UEAAJXZ @ 0x18019B1A0 (-StopProcess@BamoInputProcessProxy@@UEAAJXZ.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendStopProcess@BamoInputProcessProxyImpl@BamoImpl@@AEAAXXZ @ 0x18019AFD0 (-LogSendStopProcess@BamoInputProcessProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

__int64 __fastcall BamoImpl::BamoInputProcessProxyImpl::StopProcess(
        BamoImpl::BamoInputProcessProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // r8
  int v7; // eax
  unsigned int v8; // edi
  struct IMessageCallSendHost *v9; // rdi
  char *v10; // rax
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v13; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+28h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+70h] [rbp+30h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1203,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v5 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v15 = 0LL;
    v13 = 0;
    v14 = 0;
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v15, &v13, &v14);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = v15;
      if ( *((_BYTE *)this + 31) )
      {
        v10 = (char *)v15 - 16;
        if ( !v15 )
          v10 = 0LL;
        v10[72] = 1;
      }
      BamoImpl::BamoInputProcessProxyImpl::LogSendStopProcess(this);
      v11[0] = v13;
      v11[1] = v14;
      return CoreUICallSend(v9, v11, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1213,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
}
