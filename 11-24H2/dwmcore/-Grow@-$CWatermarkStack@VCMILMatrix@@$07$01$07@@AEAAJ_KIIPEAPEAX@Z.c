/*
 * XREFs of ?Grow@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x18001E260
 * Callers:
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D76E0 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1801A9AE0 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Grow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const void **a5)
{
  unsigned __int64 v6; // rdi
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
    v7 = 68LL * *(unsigned int *)(a1 + 8);
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
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 <= 0x44 )
      {
        v11 = -2147024809;
        goto LABEL_8;
      }
      ProcessHeap = GetProcessHeap();
      v9 = HeapAlloc(ProcessHeap, 0, 68LL * (unsigned int)v6);
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
