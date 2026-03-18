/*
 * XREFs of ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1801DF078
 * Callers:
 *     ?DisableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x1801DEFC0 (-DisableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z.c)
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1801DF02C (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1802913D8 (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18004CFCC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x1801DF1C4 (-ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801DF53C (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // eax
  bool v5; // zf
  int v7; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 52);
  v3 = 0;
  v7 = 0;
  v4 = NtSetCompositionSurfaceIndependentFlipInfo(
         *(_QWORD *)(*(_QWORD *)this + 32LL),
         (char *)this + 24,
         0LL,
         *((_BYTE *)this + 181) != 0,
         *((_DWORD *)this + 54),
         1 << v2,
         (char *)this + 212,
         &v7);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4 | 0x10000000, 0x5A1u, 0LL);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    McTemplateU0xxqqqqq_EventWriteTransfer(
      *(_DWORD *)(*(_QWORD *)this + 40LL),
      *((unsigned __int8 *)this + 182),
      *(_DWORD *)(*(_QWORD *)this + 40LL),
      *((_QWORD *)this + 3),
      *((_DWORD *)this + 53),
      0,
      *((_BYTE *)this + 181) != 0,
      *((_DWORD *)this + 54),
      *((_BYTE *)this + 182));
  }
  CGlobalCompositionSurfaceInfo::CBindInfo::ResetCustomDuration(this);
  v5 = *((_BYTE *)this + 181) == 0;
  *((_BYTE *)this + 180) = 0;
  *((_BYTE *)this + 182) = 0;
  if ( v5 )
  {
    CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(*(CGlobalCompositionSurfaceInfo **)this);
    *((_BYTE *)this + 181) = 1;
  }
  return v3;
}
