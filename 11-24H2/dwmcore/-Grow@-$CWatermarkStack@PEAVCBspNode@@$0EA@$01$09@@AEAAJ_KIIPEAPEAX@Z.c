/*
 * XREFs of ?Grow@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180200930
 * Callers:
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18016A8E4 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CBspNode *,64,2,10>::Grow(
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
    LODWORD(v6) = 64;
  v10 = 8LL * *(unsigned int *)(a1 + 8);
  if ( v10 > 0xFFFFFFFF )
  {
    v7 = 101LL;
    goto LABEL_3;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 <= 8 )
  {
    v8 = -2147024809;
    goto LABEL_12;
  }
  v11 = MIDL_user_allocate(8LL * (unsigned int)v6);
  v12 = v11;
  if ( !v11 )
  {
    v8 = -2147024882;
LABEL_12:
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
