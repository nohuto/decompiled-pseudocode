/*
 * XREFs of ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x1801E45EC
 * Callers:
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x1800C2DFC (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800C9F20 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIXZ @ 0x1801E4830 (-GetPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIXZ.c)
 *     ?IsCustomPresentDurationSupported@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801E4860 (-IsCustomPresentDurationSupported@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::EnsureIndependentFlipState(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        char a3)
{
  int v6; // edi
  __int64 v7; // rax
  CGlobalCompositionSurfaceInfo *v8; // rsi
  __int64 v9; // r14
  char v10; // al
  unsigned int v11; // r14d
  unsigned int (__fastcall *v12)(CGlobalCompositionSurfaceInfo *__hidden); // rax
  unsigned int PresentDuration; // eax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 (__fastcall *v17)(CGlobalCompositionSurfaceInfo *, _QWORD, _QWORD, _QWORD); // rdi
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  int v22; // ebx

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this);
  v8 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)a2 + 2);
  v9 = v7;
  v10 = (*(__int64 (__fastcall **)(CGlobalCompositionSurfaceInfo *))(*(_QWORD *)v8 + 352LL))(v8);
  if ( a3 )
  {
    if ( !v10 )
    {
      v16 = *((_DWORD *)a2 + 95);
      v17 = *(__int64 (__fastcall **)(CGlobalCompositionSurfaceInfo *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 384LL);
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 224LL))(v9);
      v19 = v17(v8, *((_QWORD *)a2 + 3), v18, v16);
      v6 = v19;
      if ( v19 >= 0 )
      {
        if ( !*((_BYTE *)a2 + 371) )
        {
          LOBYTE(v20) = 1;
          (*(void (__fastcall **)(CGlobalCompositionSurfaceInfo *, __int64, __int64))(*(_QWORD *)v8 + 488LL))(
            v8,
            3LL,
            v20);
        }
        *((_BYTE *)a2 + 371) = 1;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xE56u, 0LL);
      }
    }
  }
  else if ( v10 )
  {
    v15 = (*(__int64 (__fastcall **)(CGlobalCompositionSurfaceInfo *, _QWORD))(*(_QWORD *)v8 + 416LL))(
            v8,
            *((_QWORD *)a2 + 3));
    v6 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xE6Du, 0LL);
    (*(void (__fastcall **)(CGlobalCompositionSurfaceInfo *, __int64))(*(_QWORD *)v8 + 488LL))(v8, 3LL);
    *((_DWORD *)a2 + 98) = 0;
    *((_BYTE *)a2 + 371) = 0;
  }
  if ( *((_BYTE *)a2 + 371) )
  {
    v11 = 0;
    v12 = *(unsigned int (__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden))(*(_QWORD *)v8 + 96LL);
    if ( v12 == CGlobalCompositionSurfaceInfo::GetPresentDuration )
      PresentDuration = CGlobalCompositionSurfaceInfo::GetPresentDuration(v8);
    else
      PresentDuration = v12(v8);
    if ( PresentDuration && COverlayContext::IsCustomPresentDurationSupported(this, a2) )
      v11 = (*(__int64 (__fastcall **)(CGlobalCompositionSurfaceInfo *, _QWORD))(*(_QWORD *)v8 + 376LL))(
              v8,
              *(_QWORD *)this);
    if ( *((_DWORD *)a2 + 98) != v11 )
    {
      v21 = (*(__int64 (__fastcall **)(CGlobalCompositionSurfaceInfo *, _QWORD, _QWORD))(*(_QWORD *)v8 + 400LL))(
              v8,
              *((_QWORD *)a2 + 3),
              v11);
      v22 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xE8Bu, 0LL);
      if ( !v6 || v6 >= 0 && v22 < 0 )
        v6 = v22;
      *((_DWORD *)a2 + 98) = v11;
    }
  }
  return (unsigned int)v6;
}
