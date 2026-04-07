/*
 * XREFs of ?UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ @ 0x180029774
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180029380 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z @ 0x180030138 (-EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x1800316D8 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?IsWCOSContainer@@YA_NXZ @ 0x1800F4EA0 (-IsWCOSContainer@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateRemoteAppRenderTargetBounds(CTopLevelWindow *this)
{
  unsigned int v1; // edi
  CTopLevelWindow *v4; // rdi
  __int64 v5; // rcx
  __m128i v6; // xmm6
  int cxLeftWidth; // edi
  int cyTopHeight; // esi
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  struct _MARGINS v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF
  int v17; // [rsp+78h] [rbp+28h] BYREF
  int v18; // [rsp+7Ch] [rbp+2Ch]

  v1 = 0;
  if ( *((_QWORD *)this + 103) )
  {
    v15 = 0LL;
    if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 7 && IsWCOSContainer() )
    {
      v4 = this;
      v5 = *(_QWORD *)(*((_QWORD *)this + 89) + 480LL);
      if ( v5 )
        v4 = *(CTopLevelWindow **)(v5 + 24);
      CTopLevelWindow::GetFrameMargins(v4, &v15);
      v6 = *(__m128i *)(*((_QWORD *)v4 + 89) + 48LL);
    }
    else
    {
      v6 = *(__m128i *)(*((_QWORD *)this + 89) + 48LL);
      if ( (*((_BYTE *)this + 200) & 4) != 0 )
        v15 = *(struct _MARGINS *)((char *)this + 636);
      else
        CTopLevelWindow::GetFrameMargins(this, &v15);
    }
    cxLeftWidth = v15.cxLeftWidth;
    cyTopHeight = v15.cyTopHeight;
    v16 = 0LL;
    v9 = v15.cyTopHeight + _mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
    v10 = v15.cxLeftWidth + _mm_cvtsi128_si32(v6);
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)) - v15.cxRightWidth;
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 12)) - v15.cyBottomHeight;
    if ( v11 >= v10 && v12 >= v9 )
    {
      LODWORD(v16) = v11 - v10;
      HIDWORD(v16) = v12 - v9;
    }
    (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 103) + 40LL))(*((_QWORD *)this + 103), &v16);
    v13 = *((_QWORD *)this + 103);
    v17 = cxLeftWidth;
    v18 = cyTopHeight;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 48LL))(v13, &v17);
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                          + 32LL)
                                            + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 6)
                                                               + 32LL));
    v1 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x18C1u, 0LL);
  }
  return v1;
}
