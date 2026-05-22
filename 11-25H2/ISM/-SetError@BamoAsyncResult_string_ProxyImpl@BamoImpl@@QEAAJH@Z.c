/*
 * XREFs of ?SetError@BamoAsyncResult_string_ProxyImpl@BamoImpl@@QEAAJH@Z @ 0x180165DE0
 * Callers:
 *     ?SetError@BamoAsyncResult_string_Proxy@@UEAAJH@Z @ 0x180165D90 (-SetError@BamoAsyncResult_string_Proxy@@UEAAJH@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180048104 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_string_ProxyImpl::SetError(
        BamoImpl::BamoAsyncResult_string_ProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // r8
  int v7; // eax
  unsigned int v8; // edi
  struct IMessageCallSendHost *v9; // rcx
  char *v10; // rax
  _QWORD v11[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v13; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+98h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD3A,
      (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.Common.bamo.h",
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
      (void *)0xD43,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.Common.bamo.h",
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
      v11[0] = v13;
      v11[1] = v14;
      return CoreUICallSend(v9, v11, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD4A,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.Common.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
}
