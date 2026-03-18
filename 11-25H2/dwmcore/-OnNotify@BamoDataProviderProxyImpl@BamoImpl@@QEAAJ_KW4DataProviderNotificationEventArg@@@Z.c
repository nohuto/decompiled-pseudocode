/*
 * XREFs of ?OnNotify@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_KW4DataProviderNotificationEventArg@@@Z @ 0x18027D8F0
 * Callers:
 *     ?OnNotify@BamoDataProviderProxy@@UEAAJ_KW4DataProviderNotificationEventArg@@@Z @ 0x18027D890 (-OnNotify@BamoDataProviderProxy@@UEAAJ_KW4DataProviderNotificationEventArg@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801D0F24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18027C40C (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18027C864 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::OnNotify(__int64 a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v7; // r9
  int v9; // eax
  unsigned int v10; // edi
  struct IMessageCallSendHost *v11; // rcx
  char *v12; // rax
  __int64 v13; // [rsp+38h] [rbp-18h]
  struct IMessageCallSendHost *v14[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v16; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+48h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v3 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2BC0,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
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
      (void *)0x2BC9,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v14[0] = 0LL;
    v16 = 0;
    v17 = 0;
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v14,
           &v16,
           &v17);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v14[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        v12 = (char *)v14[0] - 16;
        if ( !v14[0] )
          v12 = 0LL;
        v12[72] = 1;
      }
      LODWORD(v13) = a3;
      v14[1] = (struct IMessageCallSendHost *)v17;
      return CoreUICallSend(v11, v14, 2LL, 0LL, 5, &unk_18038ED08, a2, v13, v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2BD0,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
