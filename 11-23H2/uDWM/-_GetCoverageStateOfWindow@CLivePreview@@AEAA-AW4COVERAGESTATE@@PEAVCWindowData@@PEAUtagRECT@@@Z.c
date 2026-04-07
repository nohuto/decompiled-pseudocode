/*
 * XREFs of ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800C8390
 * Callers:
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800C76E8 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800C8B78 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x1800C84BC (-_GetDesktopWorkArea@CLivePreview@@AEAA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x1800C98EC (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 */

__int64 __fastcall CLivePreview::_GetCoverageStateOfWindow(CLivePreview *a1, __int64 a2)
{
  bool v2; // zf
  __int128 v4; // xmm0
  _QWORD *v5; // rdi
  unsigned int v6; // esi
  _QWORD *v7; // rbp
  unsigned int CoverageStateOfTwoRects; // eax
  __int64 v9; // r8
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned int v13; // eax
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a2 + 132) == 1;
  v16 = 0LL;
  v15 = 0LL;
  if ( v2 )
    v4 = (__int128)*CLivePreview::_GetDesktopWorkArea(a1, &v17, (struct CWindowData *)a2);
  else
    v4 = *(_OWORD *)(a2 + 48);
  v5 = (_QWORD *)*((_QWORD *)a1 + 62);
  v6 = 0;
  v7 = (_QWORD *)*((_QWORD *)a1 + 63);
  v15 = v4;
  while ( v5 != v7 )
  {
    CoverageStateOfTwoRects = CLivePreview::s_GetCoverageStateOfTwoRects(*v5 + 788LL, &v15, &v16);
    if ( CoverageStateOfTwoRects )
    {
      v6 = CoverageStateOfTwoRects;
      if ( CoverageStateOfTwoRects == 2 )
        break;
    }
    ++v5;
  }
  if ( ((*((_QWORD *)a1 + 63) - *((_QWORD *)a1 + 62)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    v9 = *((_QWORD *)a1 + 66);
    v10 = 0LL;
    v11 = *(_DWORD *)(v9 + 40);
    if ( v11 )
    {
      do
      {
        if ( v6 )
          break;
        if ( (unsigned int)v10 < *(_DWORD *)(v9 + 40) )
        {
          v12 = *(_QWORD *)(v9 + 16);
          if ( v12 + 24 * v10 )
          {
            v17 = *(struct tagRECT *)(v12 + 24 * v10);
            v13 = CLivePreview::s_GetCoverageStateOfTwoRects(&v17, &v15, &v16);
            v9 = *((_QWORD *)a1 + 66);
            v6 = v13;
          }
        }
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < v11 );
    }
  }
  return v6;
}
