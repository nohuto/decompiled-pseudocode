/*
 * XREFs of ?SuppressInputOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@QEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z @ 0x180125DE0
 * Callers:
 *     ?SuppressInputOfType@BamoInputObserverManagerProxy@@UEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z @ 0x180125D80 (-SuppressInputOfType@BamoInputObserverManagerProxy@@UEAAJW4InputObserverType@InputObservation@@P.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180078A18 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BC578 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendSuppressInputOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@AEAAXW4InputObserverType@InputObservation@@I@Z @ 0x18011C1D4 (-LogSendSuppressInputOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@AEAAXW4InputObserverType.c)
 */

__int64 __fastcall BamoImpl::BamoInputObserverManagerProxyImpl::SuppressInputOfType(
        __int64 a1,
        __int64 a2,
        struct Microsoft::Bamo::BamoPrincipal *a3)
{
  __int64 v3; // r9
  Microsoft::BamoImpl::BufferingMessageCallHost *v4; // rbx
  __int64 v7; // r9
  int v9; // eax
  unsigned int v10; // esi
  struct IMessageCallSendHost *v11; // rsi
  struct IMessageCallSendHost *v12[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v14; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+48h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  if ( *(_DWORD *)(v3 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xF17,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v3);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v7 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v7 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a3 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
        a3);
    v12[0] = 0LL;
    v14 = 0;
    v15 = 0;
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v12,
           &v14,
           &v15);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v12[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v12[0] )
          v4 = (struct IMessageCallSendHost *)((char *)v12[0] - 16);
        *((_BYTE *)v4 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v4, a3);
      }
      BamoImpl::BamoInputObserverManagerProxyImpl::LogSendSuppressInputOfType();
      v12[0] = (struct IMessageCallSendHost *)v14;
      v12[1] = (struct IMessageCallSendHost *)v15;
      return CoreUICallSend(v11, v12, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF28,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
