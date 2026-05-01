/*
 * XREFs of ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067EEB4
 * Callers:
 *     ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180526E30 (-QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x180528110 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 *     ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x180528B20 (-ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x180536558 (-ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?ComputeRightMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1805367A4 (-ComputeRightMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?_UpdateAutoGutters@CDropFeedback@@AEAAXXZ @ 0x180540994 (-_UpdateAutoGutters@CDropFeedback@@AEAAXXZ.c)
 *     ?_ComputeAutoGutterRects@CDropFeedbackItem@@AEAAXPEBUtagRECT@@PEAU2@1@Z @ 0x180548A28 (-_ComputeAutoGutterRects@CDropFeedbackItem@@AEAAXPEBUtagRECT@@PEAU2@1@Z.c)
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18054AEB0 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067EF34 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ @ 0x1806C1A0C (-_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ @ 0x1806C1DCC (-_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_ReflowItems@CAppLayoutOperation@@AEAAJ_N@Z @ 0x1806C2D90 (-_ReflowItems@CAppLayoutOperation@@AEAAJ_N@Z.c)
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x1806C5400 (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 *     ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x1806C5564 (-_CommitGutters@CAppLayout@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeGutterWidth(
        ImmersiveApplicationLayout *this,
        struct tagSIZE a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  __int64 v3; // r9
  unsigned int v4; // r10d

  v3 = 0LL;
  v4 = (int)(float)((float)(20 * a2.cx) / 100.0);
  while ( !(_DWORD)v3 )
  {
    if ( (_DWORD)this == dword_1807CF320[6 * v3]
      && (!LOBYTE(dword_1807CF320[6 * v3 + 1]) || HIDWORD(this) == dword_1807CF320[6 * v3 + 2])
      && a2.cx == dword_1807CF320[6 * v3 + 3] )
    {
      return (unsigned int)(int)(float)((float)(dword_1807CF320[6 * v3 + 4] * a2.cx) / 100.0);
    }
    v3 = 1LL;
  }
  return v4;
}
