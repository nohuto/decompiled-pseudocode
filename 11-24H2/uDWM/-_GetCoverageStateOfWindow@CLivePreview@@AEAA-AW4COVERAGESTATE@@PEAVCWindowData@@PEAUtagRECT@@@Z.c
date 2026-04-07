/*
 * XREFs of ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18007F124
 * Callers:
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x180006594 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x180072D70 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 * Callees:
 *     ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x180045B24 (-_GetDesktopWorkArea@CLivePreview@@AEAA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x18007F240 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 *     ?GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z @ 0x1800997A4 (-GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CLivePreview::_GetCoverageStateOfWindow(__int64 a1, __int64 a2)
{
  bool v2; // zf
  struct tagRECT v4; // xmm0
  _QWORD *v5; // rdi
  unsigned int v6; // esi
  _QWORD *v7; // rbp
  unsigned int CoverageStateOfTwoRects; // eax
  unsigned int v9; // edi
  unsigned int v10; // ebp
  CImmersiveState *v11; // rcx
  struct tagRECT v13; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v15; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a2 + 128) == 1;
  v14 = 0LL;
  v13 = 0LL;
  if ( v2 )
    v4 = *CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v15, (HWND *)a2);
  else
    v4 = *(struct tagRECT *)(a2 + 48);
  v5 = *(_QWORD **)(a1 + 448);
  v6 = 0;
  v7 = *(_QWORD **)(a1 + 456);
  v13 = v4;
  while ( v5 != v7 )
  {
    CoverageStateOfTwoRects = CLivePreview::s_GetCoverageStateOfTwoRects(*v5 + 852LL, &v13, &v14);
    if ( CoverageStateOfTwoRects )
    {
      v6 = CoverageStateOfTwoRects;
      if ( CoverageStateOfTwoRects == 2 )
        break;
    }
    ++v5;
  }
  if ( *(_QWORD *)(a1 + 456) == *(_QWORD *)(a1 + 448) )
  {
    v9 = 0;
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 480) + 40LL);
    if ( v10 )
    {
      do
      {
        if ( v6 )
          break;
        if ( CImmersiveState::GetDesktopWorkAreaAtIndex(*(CImmersiveState **)(a1 + 480), v9) )
        {
          v15 = *(struct tagRECT *)CImmersiveState::GetDesktopWorkAreaAtIndex(v11, v9);
          v6 = CLivePreview::s_GetCoverageStateOfTwoRects(&v15, &v13, &v14);
        }
        ++v9;
      }
      while ( v9 < v10 );
    }
  }
  return v6;
}
