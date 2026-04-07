/*
 * XREFs of ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180052CAC
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180052658 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EE790 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x1800679A0 (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180085AD8 (-OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ @ 0x180086BD4 (-OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ.c)
 *     ?OnSourceWindowClientMarginsChanged@CThumbnailVisual@@QEAAXXZ @ 0x180087CE4 (-OnSourceWindowClientMarginsChanged@CThumbnailVisual@@QEAAXXZ.c)
 *     ?OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ @ 0x180097A7C (-OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     _o_ceilf_0 @ 0x18009C450 (_o_ceilf_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::OnClientMarginsChange(CWindowList *this, struct CWindowData *a2)
{
  float v3; // xmm6_4
  int v4; // edi
  float v5; // xmm0_4
  int v6; // esi
  float v7; // xmm0_4
  int v8; // ebp
  float v9; // xmm0_4
  int v10; // r14d
  float v11; // xmm0_4
  int *v12; // rcx
  int v13; // r9d
  CTopLevelWindow *v14; // rcx
  CWindowIconic *v15; // rcx
  __int64 i; // rdi
  CThumbnailVisual *v17; // rcx
  __int64 j; // rdi
  CThumbnailVisual *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  int v22[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((float *)a2 + 83);
  v4 = (int)o_ceilf_0((float)*((int *)a2 + 67) * v3);
  v5 = (float)*((int *)a2 + 68);
  v22[0] = v4;
  v6 = (int)o_ceilf_0(v5 * v3);
  v7 = (float)*((int *)a2 + 69);
  v22[1] = v6;
  v8 = (int)o_ceilf_0(v7 * v3);
  v9 = (float)*((int *)a2 + 70);
  v22[2] = v8;
  v10 = (int)o_ceilf_0(v9 * v3);
  v11 = (float)*((int *)a2 + 75);
  v22[3] = v10;
  o_ceilf_0(v11 * v3);
  if ( (unsigned __int8)operator!=((char *)a2 + 64, v22) || *((_DWORD *)a2 + 28) != v13 )
  {
    *v12 = v4;
    v12[1] = v6;
    v12[2] = v8;
    v12[3] = v10;
    v14 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
    *((_DWORD *)a2 + 28) = v13;
    if ( v14 )
      CTopLevelWindow::OnClientMarginsUpdated(v14);
    v15 = (CWindowIconic *)*((_QWORD *)a2 + 61);
    if ( v15 )
      CWindowIconic::OnWindowSizeUpdated(v15);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 148); i = (unsigned int)(i + 1) )
    {
      v17 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 71) + 8 * i) + 88LL);
      if ( v17 )
        CThumbnailVisual::OnSourceWindowClientMarginsChanged(v17);
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 140); j = (unsigned int)(j + 1) )
    {
      v19 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 67) + 8 * j) + 88LL);
      if ( v19 )
        CThumbnailVisual::OnDestinationClientRectChanged(v19);
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 59)
                                                                    + 88LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
              a2);
      if ( v20 >= 0 )
        return;
      v21 = 4429LL;
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 58)
                                                                    + 104LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
              a2);
      if ( v20 >= 0 )
        return;
      v21 = 4433LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v20,
      v22[0]);
  }
}
