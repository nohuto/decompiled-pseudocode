/*
 * XREFs of ?Create@DragNDropProcessor@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV?$ComPtr@VActivationProcessor@@@34@PEAPEAV1@@Z @ 0x18014AE70
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18004F884 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DragNDropProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV?$ComPtr@VActivationProcessor@@@23@@Z @ 0x18014A424 (--0DragNDropProcessor@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV-$ComPt.c)
 *     ?Initialize@DragNDropProcessor@@AEAAJXZ @ 0x18014C5CC (-Initialize@DragNDropProcessor@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragNDropProcessor::Create(__int64 *a1, _QWORD *a2, DragNDropProcessor **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  void *v8; // rax
  DragNDropProcessor *v9; // rdi
  unsigned __int64 v10; // r9
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DragNDropProcessor *v14; // [rsp+40h] [rbp+18h] BYREF
  void *v15; // [rsp+48h] [rbp+20h]

  v14 = 0LL;
  if ( !a3 )
  {
    v6 = -2147024809;
    v7 = 59LL;
LABEL_8:
    v10 = v6;
    goto LABEL_9;
  }
  v8 = RefCountedObject::operator new(0x1F0uLL);
  v15 = v8;
  if ( v8 )
    v9 = (DragNDropProcessor *)DragNDropProcessor::DragNDropProcessor((__int64)v8, a1, a2);
  else
    v9 = 0LL;
  v14 = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
    v7 = 63LL;
    goto LABEL_8;
  }
  v11 = DragNDropProcessor::Initialize(v9);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v14 = 0LL;
    *a3 = v9;
    v6 = 0;
    goto LABEL_13;
  }
  v10 = (unsigned int)v11;
  v7 = 64LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
    (const char *)v10);
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  return v6;
}
