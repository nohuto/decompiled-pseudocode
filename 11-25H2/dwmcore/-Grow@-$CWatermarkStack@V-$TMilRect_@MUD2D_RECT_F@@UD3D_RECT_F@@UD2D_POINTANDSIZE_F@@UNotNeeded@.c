/*
 * XREFs of ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x180118BF0
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800A5660 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,8,2,8>::Grow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const void **a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  HANDLE ProcessHeap; // rax
  void *v9; // rax
  const void *v10; // rsi
  unsigned int v11; // ebx
  __int64 result; // rax
  void *v13; // r14
  HANDLE v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 2LL * *(unsigned int *)(a1 + 12);
  if ( v6 > 0xFFFFFFFF )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  else
  {
    if ( (unsigned int)v6 <= 8 )
      LODWORD(v6) = 8;
    v7 = 16LL * *(unsigned int *)(a1 + 8);
    if ( v7 > 0xFFFFFFFF )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)0x80070216LL);
      return 2147942934LL;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 <= 0x10 )
      {
        v11 = -2147024809;
        goto LABEL_8;
      }
      ProcessHeap = GetProcessHeap();
      v9 = HeapAlloc(ProcessHeap, 0, 16LL * (unsigned int)v6);
      v10 = v9;
      if ( !v9 )
      {
        v11 = -2147024882;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x68,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v11);
        return v11;
      }
      memcpy_0(v9, *a5, (unsigned int)v7);
      v13 = (void *)*a5;
      if ( *a5 )
      {
        v14 = GetProcessHeap();
        HeapFree(v14, 0, v13);
      }
      *a5 = v10;
      result = 0LL;
      *(_DWORD *)(a1 + 12) = v6;
    }
  }
  return result;
}
