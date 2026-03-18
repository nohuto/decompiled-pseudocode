/*
 * XREFs of ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180102540
 * Callers:
 *     ?CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x1801020F0 (-CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 *     ?CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x180102980 (-CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 * Callees:
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x18003E330 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800B708C (-terminate@details@gsl@@YAXXZ.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800F7980 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?insert@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@AEBQEAVCOverlayContext@@@Z @ 0x180101A90 (-insert@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopTree::CalcOcclusionAndCollectOverlayCandidates(CDesktopTree *this)
{
  unsigned __int64 v1; // rsi
  unsigned int v3; // r15d
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall ****v6)(_QWORD, GUID *, unsigned __int64 *); // rbx
  __int64 (__fastcall ****v7)(_QWORD, GUID *, unsigned __int64 *); // r12
  __int64 (__fastcall ***v8)(_QWORD, GUID *, unsigned __int64 *); // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, unsigned __int64 *); // rcx
  int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // dl
  float v15; // xmm3_4
  gsl::details *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  HANDLE CurrentThread; // rax
  BOOL v21; // eax
  __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  char *v24; // [rsp+38h] [rbp-30h]
  __int64 v25[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 CycleTime; // [rsp+90h] [rbp+28h] BYREF
  __int64 v27; // [rsp+98h] [rbp+30h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+40h] BYREF

  v1 = 0LL;
  v3 = 0;
  if ( *((_BYTE *)this + 2628) )
  {
    v4 = *((_QWORD *)this + 563);
    v5 = (v4 - *((_QWORD *)this + 562)) >> 3;
    if ( v5 )
      *((_QWORD *)this + 563) = v4 - 8 * v5;
    *((_QWORD *)this + 569) = 0LL;
    v6 = (__int64 (__fastcall ****)(_QWORD, GUID *, unsigned __int64 *))*((_QWORD *)this + 306);
    v7 = (__int64 (__fastcall ****)(_QWORD, GUID *, unsigned __int64 *))*((_QWORD *)this + 307);
    while ( v6 != v7 )
    {
      v8 = *v6;
      CycleTime = 0LL;
      if ( (int)(**v8)(v8, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &CycleTime) >= 0 )
      {
        v27 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)CycleTime + 72LL))(CycleTime);
        if ( v27 )
        {
          v28 = *((_QWORD *)this + 563);
          detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::insert(
            (CDesktopTree *)((char *)this + 4496),
            &v29,
            &v28,
            &v27);
        }
      }
      if ( CycleTime )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)CycleTime + 16LL))(CycleTime);
      v9 = *v6;
      CycleTime = 0LL;
      v10 = (**v9)(v9, &GUID_7c976d93_9dfd_4286_b10c_4603653cf4d3, &CycleTime);
      v11 = CycleTime;
      if ( v10 >= 0 )
        *((_QWORD *)this + 569) = CycleTime;
      if ( v11 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
      ++v6;
    }
    CVisualTree::UpdateClientBounds(this);
    *((_BYTE *)this + 2628) = 0;
  }
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 571) - *((_QWORD *)this + 570)) >> 3) )
    *((_QWORD *)this + 571) -= 8 * ((__int64)(*((_QWORD *)this + 571) - *((_QWORD *)this + 570)) >> 3);
  v12 = 0LL;
  if ( g_pComposition )
    v12 = *((_QWORD *)g_pComposition + 111);
  if ( *((_QWORD *)this + 15) != v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0xBAu, 0LL);
    return 2291674884LL;
  }
  v13 = 0LL;
  if ( g_pComposition )
    v13 = *((_QWORD *)g_pComposition + 111);
  if ( *((_QWORD *)this + 334) != v13 )
  {
    v14 = *((_BYTE *)this + 2436);
    if ( !v14 )
    {
      v15 = *((float *)this + 648);
      if ( v15 > 1.0 )
      {
LABEL_30:
        v16 = (gsl::details *)*((_QWORD *)this + 562);
        v17 = (__int64)(*((_QWORD *)this + 563) - (_QWORD)v16) >> 3;
        v25[0] = v17;
        if ( v17 != -1 )
        {
          v25[1] = (__int64)v16;
          if ( v16 || !v17 )
          {
            if ( v14 )
            {
              v23 = 1LL;
              v24 = (char *)this + 2420;
              if ( this != (CDesktopTree *)-2420LL )
                goto LABEL_38;
            }
            else
            {
              v18 = *((unsigned int *)this + 32);
              v23 = v18;
              v24 = (char *)this + 132;
              if ( this != (CDesktopTree *)-132LL || !v18 )
              {
LABEL_38:
                v19 = COcclusionContext::Compute(
                        (CDesktopTree *)((char *)this + 2648),
                        (CVisual **)this,
                        &v23,
                        v15,
                        v25);
                v3 = v19;
                if ( v19 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xB3u, 0LL);
                goto LABEL_40;
              }
            }
          }
        }
        gsl::details::terminate(v16);
        JUMPOUT(0x180102882LL);
      }
      if ( *((_BYTE *)this + 2630) )
      {
        v15 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        goto LABEL_30;
      }
    }
    v15 = 0.0;
    goto LABEL_30;
  }
LABEL_40:
  CycleTime = 0LL;
  if ( ::CycleTime )
  {
    CurrentThread = GetCurrentThread();
    v21 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v1 = CycleTime;
    if ( v21 )
      qword_1803FA7D8 += CycleTime - ::CycleTime;
  }
  ::CycleTime = v1;
  return v3;
}
