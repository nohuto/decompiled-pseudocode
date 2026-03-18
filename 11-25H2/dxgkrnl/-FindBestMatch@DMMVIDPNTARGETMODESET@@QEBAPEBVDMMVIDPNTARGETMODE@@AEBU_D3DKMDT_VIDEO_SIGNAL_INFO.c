/*
 * XREFs of ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14006505C
 * Callers:
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1403A9B48 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x14003EA2C (-GetNextMode@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x140040C60 (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 */

const struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::FindBestMatch(
        DMMVIDPNTARGETMODESET *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2)
{
  const struct DMMVIDPNTARGETMODE *v2; // rdi
  DMMVIDPNTARGETMODESET *v3; // r11
  const struct DMMVIDPNTARGETMODE *NextMode; // r11
  int v7; // r9d

  v2 = 0LL;
  v3 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 6);
  if ( v3 == (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    NextMode = 0LL;
  else
    NextMode = (DMMVIDPNTARGETMODESET *)((char *)v3 - 8);
  while ( NextMode )
  {
    if ( a2->ActiveSize.cx == *((_DWORD *)NextMode + 21) && a2->ActiveSize.cy == *((_DWORD *)NextMode + 22) )
    {
      v7 = *((_DWORD *)NextMode + 30);
      if ( (((unsigned __int8)v7 ^ *(_BYTE *)&a2->AdditionalSignalInfo) & 7) == 0
        && a2->VSyncFreq.Numerator * (unsigned __int64)*((unsigned int *)NextMode + 24) == a2->VSyncFreq.Denominator
                                                                                         * (unsigned __int64)*((unsigned int *)NextMode + 23)
        && (((unsigned __int16)v7 ^ (unsigned __int16)*(_DWORD *)&a2->AdditionalSignalInfo) & 0x1F8) == 0 )
      {
        return NextMode;
      }
    }
    if ( !v2
      && DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
           a2,
           (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)NextMode + 72),
           0) )
    {
      v2 = NextMode;
    }
    NextMode = DMMVIDPNTARGETMODESET::GetNextMode(this, NextMode);
  }
  return v2;
}
