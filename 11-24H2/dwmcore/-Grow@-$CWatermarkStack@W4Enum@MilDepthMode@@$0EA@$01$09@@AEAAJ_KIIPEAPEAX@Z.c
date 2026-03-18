/*
 * XREFs of ?Grow@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180195FB8
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18003EBA0 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1801967E0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Grow(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        const void **a5)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 result; // rax
  unsigned __int64 v10; // rdi
  void *v11; // rbx
  size_t v12; // r8
  void **v13; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = a2;
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
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  if ( (unsigned int)v6 <= 0x40 )
    LODWORD(v6) = 64;
  v10 = 4LL * *(unsigned int *)(a1 + 8);
  if ( v10 > 0xFFFFFFFF )
  {
    v7 = 101LL;
    goto LABEL_3;
  }
  v15 = 0LL;
  v8 = HrMalloc(4uLL, (unsigned int)v6, &v15);
  if ( v8 < 0 )
  {
    v7 = 104LL;
    goto LABEL_4;
  }
  v11 = v15;
  v12 = (unsigned int)v10;
  v13 = (void **)a5;
  memcpy_0(v15, *a5, v12);
  operator delete(*v13);
  *v13 = v11;
  result = 0LL;
  *(_DWORD *)(a1 + 12) = v6;
  return result;
}
