/*
 * XREFs of ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x14004A110
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x140254678 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x14025DB14 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1402D6194 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1403BF280 (-UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N.c)
 * Callees:
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14004A1A0 (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::UnpinMode(DMMVIDPNTARGETMODESET *this, __int64 a2)
{
  __int64 v2; // r9
  struct _D3DDDI_RATIONAL PresentationVSync; // rax
  struct _D3DDDI_RATIONAL *v4; // r9
  __int64 v5; // r8
  __int64 result; // rax

  if ( *((_BYTE *)this + 136) )
  {
    v2 = *((_QWORD *)this + 18);
    if ( v2 )
    {
      PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v2 + 72));
      v4[19] = PresentationVSync;
      v4[20].Numerator = 1;
      *(_QWORD *)(v5 + 144) = 0LL;
      return 0LL;
    }
    else
    {
      WdLogNewEntry5_WdTrace(this, a2, this, 0LL);
      result = 1075708679LL;
      WdLogGlobalForLineNumber = 444;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, this);
    result = 3223192352LL;
    WdLogGlobalForLineNumber = 437;
  }
  return result;
}
