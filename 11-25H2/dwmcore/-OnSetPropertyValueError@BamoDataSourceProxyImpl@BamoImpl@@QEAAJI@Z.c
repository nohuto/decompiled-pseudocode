/*
 * XREFs of ?OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18027C73C
 * Callers:
 *     ?OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z @ 0x18027C6F0 (-OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801D0F24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18027C40C (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18027C864 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::OnSetPropertyValueError(
        BamoImpl::BamoDataSourceProxyImpl *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rbx
  __int64 v7; // r8
  int v9; // eax
  unsigned int v10; // esi
  struct IMessageCallSendHost *v11; // rcx
  __int64 v12; // [rsp+38h] [rbp-18h]
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v15; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v17; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x366E,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v7 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v7 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3677,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v17 = 0LL;
    v15 = 0;
    v16 = 0;
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v17, &v15, &v16);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v17;
      if ( *((_BYTE *)this + 31) )
      {
        if ( v17 )
          v4 = (char *)v17 - 16;
        v4[72] = 1;
      }
      v13[1] = v16;
      return CoreUICallSend(v11, v13, 2LL, 4LL, 1, &unk_18038ED05, a2, v12, v15);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x367E,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
