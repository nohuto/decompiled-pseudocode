/*
 * XREFs of ?Grow@?$CWatermarkStack@USavedRenderOptions@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801F5DA0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CDrawingContext::SavedRenderOptions,64,2,10>::Grow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const void **a5)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 result; // rax
  unsigned __int64 v10; // rbx
  void *v11; // rax
  const void *v12; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 2LL * *(unsigned int *)(a1 + 12);
  if ( v6 > 0xFFFFFFFF )
  {
    v7 = 98LL;
LABEL_3:
    v8 = -2147024362;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v8);
    return v8;
  }
  if ( (unsigned int)v6 <= 0x40 )
    v6 = 64LL;
  v10 = 24LL * *(unsigned int *)(a1 + 8);
  if ( v10 > 0xFFFFFFFF )
  {
    v7 = 101LL;
    goto LABEL_3;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 <= 0x18 )
  {
    v8 = -2147024809;
    goto LABEL_11;
  }
  v11 = MIDL_user_allocate(24 * v6);
  v12 = v11;
  if ( !v11 )
  {
    v8 = -2147024882;
LABEL_11:
    v7 = 104LL;
    goto LABEL_4;
  }
  memcpy_0(v11, *a5, (unsigned int)v10);
  operator delete((void *)*a5);
  *a5 = v12;
  result = 0LL;
  *(_DWORD *)(a1 + 12) = v6;
  return result;
}
