/*
 * XREFs of ?Grow@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@AEAAJ_KIIPEAPEAX@Z @ 0x1802716D0
 * Callers:
 *     ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x1802587C8 (-Push@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CCompos.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x180186120 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Grow(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        const void **a5)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  void *v10; // rbx
  size_t v11; // r8
  void **v12; // rdi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = a2;
  v6 = 2LL * *(unsigned int *)(a1 + 12);
  if ( v6 > 0xFFFFFFFF )
  {
    v9 = 98LL;
    goto LABEL_10;
  }
  if ( (unsigned int)v6 <= 2 )
    LODWORD(v6) = 2;
  v7 = 24LL * *(unsigned int *)(a1 + 8);
  if ( v7 > 0xFFFFFFFF )
  {
    v9 = 101LL;
LABEL_10:
    v8 = -2147024362;
    goto LABEL_11;
  }
  v15 = 0LL;
  v8 = HrMalloc(0x18uLL, (unsigned int)v6, &v15);
  if ( v8 >= 0 )
  {
    v10 = v15;
    v11 = (unsigned int)v7;
    v12 = (void **)a5;
    memcpy_0(v15, *a5, v11);
    operator delete(*v12);
    *v12 = v10;
    result = 0LL;
    *(_DWORD *)(a1 + 12) = v6;
    return result;
  }
  v9 = 104LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
