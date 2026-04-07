/*
 * XREFs of ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x180006594
 * Callers:
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180055878 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800076C4 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180015620 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18007F124 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x18007F240 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

void __fastcall CLivePreview::_ShowHideImmersiveBackground(CLivePreview *this)
{
  unsigned int i; // edi
  CTopLevelWindow *v3; // r15
  struct CWindowData *WindowData; // rax
  __int64 *v5; // rbp
  struct CWindowData *v6; // rsi
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 96); ++i )
  {
    v3 = *(CTopLevelWindow **)(*((_QWORD *)this + 45) + 16LL * i);
    WindowData = CTopLevelWindow::GetWindowData(v3);
    v5 = (__int64 *)*((_QWORD *)this + 57);
    v6 = WindowData;
    v7 = (__int64 *)*((_QWORD *)this + 56);
    if ( v7 != v5 )
    {
      while ( 1 )
      {
        v8 = *v7;
        if ( *(_DWORD *)(*v7 + 128) == 1 )
        {
          if ( v6 && (unsigned int)CLivePreview::_GetCoverageStateOfWindow(this, v6) )
            goto LABEL_17;
        }
        else
        {
          v9 = 0LL;
          if ( v6 && (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects((char *)v6 + 48, v8 + 48, &v9) == 1 )
            goto LABEL_17;
        }
        if ( ++v7 == v5 )
          goto LABEL_4;
      }
    }
    if ( WindowData && (unsigned int)CLivePreview::_GetCoverageStateOfWindow(this, WindowData) )
    {
LABEL_17:
      if ( *(_BYTE *)(*((_QWORD *)this + 45) + 16LL * i + 8) )
      {
        CTopLevelWindow::StartLivePreviewAnimation(v3, 3LL);
        *(_BYTE *)(*((_QWORD *)this + 45) + 16LL * i + 8) = 0;
      }
    }
    else
    {
LABEL_4:
      if ( !*(_BYTE *)(*((_QWORD *)this + 45) + 16LL * i + 8) )
      {
        CTopLevelWindow::StartLivePreviewAnimation(v3, 4LL);
        *(_BYTE *)(*((_QWORD *)this + 45) + 16LL * i + 8) = 1;
      }
    }
  }
}
