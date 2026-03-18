/*
 * XREFs of ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1801D7CD0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v11; // ebp
  void *v12; // rax
  void *v13; // r14
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v4 == (_DWORD)v5 )
  {
    v8 = 2 * v5;
    if ( (unsigned __int64)(2 * v5) <= 0xFFFFFFFF )
    {
      if ( v8 <= 0x40 )
        v8 = 64;
      v11 = 16 * v4;
      if ( (unsigned __int64)(16 * v4) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v8 <= 0x10 )
        {
          v10 = -2147024809;
        }
        else
        {
          v12 = MIDL_user_allocate(16LL * v8);
          v13 = v12;
          if ( v12 )
          {
            memcpy_0(v12, *(const void **)a1, v11);
            operator delete(*(void **)a1);
            *(_QWORD *)a1 = v13;
            *(_DWORD *)(a1 + 12) = v8;
            goto LABEL_2;
          }
          v10 = -2147024882;
        }
        v9 = 104LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v10);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v10);
        return v10;
      }
      v9 = 101LL;
    }
    else
    {
      v9 = 98LL;
    }
    v10 = -2147024362;
    goto LABEL_8;
  }
LABEL_2:
  *(_OWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
  v6 = *(_DWORD *)(a1 + 20);
  if ( v6 <= *(_DWORD *)(a1 + 8) )
    v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v6;
  return 0LL;
}
