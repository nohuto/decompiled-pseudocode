/*
 * XREFs of ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x18001E0C0
 * Callers:
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D76E0 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Push(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // eax
  unsigned int v9; // ebp
  __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  HANDLE ProcessHeap; // rax
  void *v14; // rax
  void *v15; // rdi
  void *v16; // r14
  HANDLE v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v4 == (_DWORD)v5 )
  {
    v9 = 2 * v5;
    if ( (unsigned __int64)(2 * v5) <= 0xFFFFFFFF )
    {
      if ( v9 <= 8 )
        v9 = 8;
      v12 = 68 * v4;
      if ( (unsigned __int64)(68 * v4) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v9 <= 0x44 )
        {
          v11 = -2147024809;
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v14 = HeapAlloc(ProcessHeap, 0, 68LL * v9);
          v15 = v14;
          if ( v14 )
          {
            memcpy_0(v14, *(const void **)a1, v12);
            v16 = *(void **)a1;
            if ( *(_QWORD *)a1 )
            {
              v17 = GetProcessHeap();
              HeapFree(v17, 0, v16);
            }
            *(_QWORD *)a1 = v15;
            *(_DWORD *)(a1 + 12) = v9;
            goto LABEL_2;
          }
          v11 = -2147024882;
        }
        v10 = 104LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v11);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v11);
        return v11;
      }
      v10 = 101LL;
    }
    else
    {
      v10 = 98LL;
    }
    v11 = -2147024362;
    goto LABEL_8;
  }
LABEL_2:
  v6 = *(_QWORD *)a1 + 68LL * *(unsigned int *)(a1 + 8);
  *(_OWORD *)v6 = *(_OWORD *)a2;
  *(_OWORD *)(v6 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v6 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v6 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(v6 + 64) = *(_DWORD *)(a2 + 64);
  ++*(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 20);
  if ( v7 <= *(_DWORD *)(a1 + 8) )
    v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v7;
  return 0LL;
}
