/*
 * XREFs of ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x14031545C
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14004C2B4 (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z @ 0x140265EC0 (-PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x140314DB0 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1403168E0 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 * Callees:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14000D580 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140049918 (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x140315880 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::PinMode(DMMVIDPNTARGETMODESET **this, unsigned int a2)
{
  __int64 v2; // rsi
  DMMVIDPNTARGETMODESET *v4; // rbx
  char *v5; // rbx
  DMMVIDPNTARGETMODESET *v6; // rcx
  __int64 result; // rax
  DMMVIDPNTARGETMODESET *v8; // rbp
  DMMVIDPNTARGETMODESET *v9; // r15
  __int64 Container; // r14
  unsigned int PathSourceFromTarget; // r8d
  __int64 v12; // rsi
  DMMVIDPNPRESENTPATH *v13; // rsi
  __int64 v14; // rax

  v2 = a2;
  if ( !*((_BYTE *)this + 136) )
  {
    WdLogSingleEntry2(7LL, a2, this);
    result = 3223192352LL;
    WdLogGlobalForLineNumber = 325;
    return result;
  }
  v4 = this[6];
  if ( v4 == (DMMVIDPNTARGETMODESET *)(this + 6) || (v5 = (char *)v4 - 8) == 0LL )
  {
LABEL_8:
    WdLogSingleEntry2(2LL, a2, this);
    result = 3223192394LL;
    WdLogGlobalForLineNumber = 338;
    return result;
  }
  while ( *((_DWORD *)v5 + 6) != a2 )
  {
    v6 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)v5 + 1);
    v5 = (char *)v6 - 8;
    if ( v6 == (DMMVIDPNTARGETMODESET *)(this + 6) )
      v5 = 0LL;
    if ( !v5 )
      goto LABEL_8;
  }
  v8 = this[14];
  v9 = this[18];
  this[18] = (DMMVIDPNTARGETMODESET *)v5;
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    result = 3223192329LL;
    WdLogGlobalForLineNumber = 360;
    return result;
  }
  if ( !*((_QWORD *)v8 + 5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(*((_QWORD *)v8 + 5) + 64LL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                           (DMMVIDPNTOPOLOGY *)(Container + 96),
                           *((_DWORD *)v8 + 6));
  if ( PathSourceFromTarget == -1 )
  {
    WdLogSingleEntry2(2LL, v2, this);
    result = 3223192384LL;
    WdLogGlobalForLineNumber = 377;
    return result;
  }
  v12 = *(_QWORD *)(Container + 120);
  if ( v12 == Container + 120 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = (DMMVIDPNPRESENTPATH *)(v12 - 8);
    while ( v13 )
    {
      if ( *(_DWORD *)(*((_QWORD *)v13 + 11) + 24LL) == PathSourceFromTarget
        && *(_DWORD *)(*((_QWORD *)v13 + 12) + 24LL) == *((_DWORD *)v8 + 6) )
      {
        break;
      }
      v14 = *((_QWORD *)v13 + 1);
      v13 = (DMMVIDPNPRESENTPATH *)(v14 - 8);
      if ( v14 == Container + 120 )
        v13 = 0LL;
    }
    if ( v13 )
      goto LABEL_19;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 389;
LABEL_19:
  if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(v13) )
  {
    *((D3DDDI_RATIONAL *)v5 + 19) = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v5 + 72));
    result = 0LL;
    *((_DWORD *)v5 + 40) = 1;
  }
  else
  {
    WdLogSingleEntry5(
      2LL,
      *((unsigned int *)v5 + 21),
      *((unsigned int *)v5 + 22),
      *((unsigned int *)v5 + 23),
      *((unsigned int *)v5 + 24),
      *((unsigned int *)v8 + 6));
    result = 3223192389LL;
    WdLogGlobalForLineNumber = 401;
    this[18] = v9;
  }
  return result;
}
