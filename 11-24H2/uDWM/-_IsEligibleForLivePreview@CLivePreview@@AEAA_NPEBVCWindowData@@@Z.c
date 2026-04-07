/*
 * XREFs of ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180040FF0
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001C608 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x180040B64 (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180040434 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x180042830 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

char __fastcall CLivePreview::_IsEligibleForLivePreview(CLivePreview *this, CTopLevelWindow **a2)
{
  char v2; // bl
  __int64 v5; // rdx
  HWND v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  RECT rcSrc1; // [rsp+20h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)a2 + 738) & 0x40) == 0 )
  {
    if ( a2[55] )
    {
      if ( CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2)
        && (*(_BYTE *)(v5 + 736) & 4) == 0
        && (*(_DWORD *)(v5 + 116) & 0x20000000) == 0 )
      {
        if ( *(_QWORD *)(v5 + 40) )
        {
          v6 = *(HWND *)(v5 + 40);
          if ( v6 != GetDesktopWindow() && v6 != *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 143) )
          {
            CTopLevelWindow::GetLivePreviewWindowRect(a2[55], &rcSrc1, 1);
            v7 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 380);
            v8 = _mm_srli_si128(*(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 380), 8).m128i_u64[0];
            rcSrc2.left = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 380);
            rcSrc2.top = HIDWORD(v7);
            rcSrc2.bottom = HIDWORD(v7) + HIDWORD(v8);
            rcSrc2.right = v8 + v7;
            rcDst = 0LL;
            if ( IntersectRect(&rcDst, &rcSrc1, &rcSrc2) )
            {
              v9 = 0;
              if ( rcSrc1.right - rcSrc1.left >= 0 )
                v9 = rcSrc1.right - rcSrc1.left;
              if ( v9 > 0 )
              {
                v10 = 0;
                if ( rcSrc1.bottom - rcSrc1.top >= 0 )
                  v10 = rcSrc1.bottom - rcSrc1.top;
                if ( v10 > 0 )
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
