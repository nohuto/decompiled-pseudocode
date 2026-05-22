/*
 * XREFs of ?DockEventsEnabledChanged@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x1800832B0
 * Callers:
 *     ?DockEventsEnabledChanged@BamoPenEventsClientProxy@@UEAAJ_N@Z @ 0x180083260 (-DockEventsEnabledChanged@BamoPenEventsClientProxy@@UEAAJ_N@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800481DC (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180048284 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendDockEventsEnabledChanged@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x18018F8CC (-LogSendDockEventsEnabledChanged@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 */

__int64 __fastcall BamoImpl::BamoPenEventsClientProxyImpl::DockEventsEnabledChanged(
        BamoImpl::BamoPenEventsClientProxyImpl *this,
        bool a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  __int64 v8; // r8
  _BYTE *v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // ebp
  struct IMessageCallSendHost *SendHost; // rax
  struct IMessageCallSendHost *v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-48h]
  _QWORD v19[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5E6E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
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
      (void *)0x5E77,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL,
      v17);
    return 2276591636LL;
  }
  else
  {
    v9 = (char *)this + 31;
    if ( !Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) || *v9 )
    {
      v12 = *((_DWORD *)this + 6);
    }
    else
    {
      v10 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v8 + 24) + 32LL),
              0x87B20805,
              0);
      v11 = v10;
      if ( v10 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18B,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
          (const char *)(unsigned int)v10,
          v17);
      v12 = 0;
      if ( (v11 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x171,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoProxy.inl",
          (const char *)v11,
          v17);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5E7E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v11,
          v18);
        return v11;
      }
    }
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 2));
    v14 = SendHost;
    v15 = *(unsigned int *)(*((_QWORD *)this + 2) + 36LL);
    if ( *v9 )
    {
      v16 = (__int64)SendHost + 56;
      if ( !SendHost )
        v16 = 72LL;
      *(_BYTE *)v16 = 1;
    }
    BamoImpl::BamoPenEventsClientProxyImpl::LogSendDockEventsEnabledChanged(this, a2);
    v19[1] = v12;
    v19[0] = v15;
    return CoreUICallSend(v14, v19, 2LL);
  }
}
