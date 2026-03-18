/*
 * XREFs of BmlDetermineBoostMultiplier @ 0x140262514
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1402D37C8 (BmlGetNextBestTargetMode.c)
 * Callees:
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14004A1A0 (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x14037DD70 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 */

__int64 __fastcall BmlDetermineBoostMultiplier(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 PresentationVSync; // rax
  __int64 v10; // r10
  _QWORD *v11; // rax
  __int64 result; // rax

  LODWORD(v4) = 1;
  if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a1) )
  {
    v8 = *a2;
    v7 = v8 * *(unsigned int *)(a1 + 148);
    if ( v7 >= a2[1] * (unsigned __int64)*(unsigned int *)(a1 + 144) )
    {
      PresentationVSync = (unsigned __int64)DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a1 + 72));
      v6 = HIDWORD(PresentationVSync);
      v5 = v10 * (unsigned __int64)(unsigned int)PresentationVSync / HIDWORD(PresentationVSync) % v8;
      v4 = v10 * (unsigned __int64)(unsigned int)PresentationVSync / HIDWORD(PresentationVSync) / v8;
    }
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  v11[3] = a1;
  v11[4] = a2;
  v11[5] = (unsigned int)v4;
  result = (unsigned int)v4;
  WdLogGlobalForLineNumber = 2621;
  return result;
}
