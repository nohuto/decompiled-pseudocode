/*
 * XREFs of ?RegisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJ_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@PEAVBamoDragManagerClientPrincipal@@@Z @ 0x180123058
 * Callers:
 *     ?RegisterGestureDragClient@BamoGestureServicesProxy@@UEAAJ_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVBamoDragManagerClientPrincipal@@@Z @ 0x180122FE0 (-RegisterGestureDragClient@BamoGestureServicesProxy@@UEAAJ_KW4InputGestureSourceType@Input@Inter.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180078A18 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800BC578 (-AddPrincipalParameter@BufferingMessageCallHost@BamoImpl@Microsoft@@QEAAXPEAVBamoPrincipal@Bamo@.c)
 *     ?LogSendRegisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@AEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@I@Z @ 0x18011B490 (-LogSendRegisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@AEAAX_KW4InputGestureSo.c)
 */

__int64 __fastcall BamoImpl::BamoGestureServicesProxyImpl::RegisterGestureDragClient(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4,
        struct Microsoft::Bamo::BamoPrincipal *a5)
{
  Microsoft::BamoImpl::BufferingMessageCallHost *v5; // rbx
  unsigned int v6; // r12d
  __int64 v9; // r10
  int v11; // r15d
  int v12; // eax
  unsigned int v13; // esi
  struct IMessageCallSendHost *v14; // rsi
  struct Microsoft::Bamo::BamoPrincipal *v15; // rdx
  unsigned int v16; // [rsp+50h] [rbp-20h] BYREF
  struct IMessageCallSendHost *v17[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v19; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+38h]

  v20 = a2;
  v5 = 0LL;
  v6 = (unsigned int)a4;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xEB52,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    if ( v9 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v9 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB5B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    if ( a5 )
      v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
              (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
              a5);
    else
      v11 = 0;
    v17[0] = 0LL;
    v19 = 0;
    v16 = 0;
    v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            v17,
            &v19,
            &v16);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = v17[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v17[0] )
          v5 = (struct IMessageCallSendHost *)((char *)v17[0] - 16);
        v15 = a5;
        *((_BYTE *)v5 + 72) = 1;
        Microsoft::BamoImpl::BufferingMessageCallHost::AddPrincipalParameter(v5, v15);
      }
      BamoImpl::BamoGestureServicesProxyImpl::LogSendRegisterGestureDragClient(a1, v20, a3, v6, v11);
      v17[0] = (struct IMessageCallSendHost *)v19;
      v17[1] = (struct IMessageCallSendHost *)v16;
      return CoreUICallSend(v14, v17, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEB63,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12);
      return v13;
    }
  }
}
