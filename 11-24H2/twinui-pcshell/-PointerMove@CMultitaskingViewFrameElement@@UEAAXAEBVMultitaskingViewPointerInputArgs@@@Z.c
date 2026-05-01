/*
 * XREFs of ?PointerMove@CMultitaskingViewFrameElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804CC1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C4930 (-PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMultitaskingViewFrameElement::PointerMove(
        CMultitaskingViewFrameElement *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rcx
  int *v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 71);
  if ( v4 )
  {
    v11 = *((_QWORD *)this + 71);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    (*(void (__fastcall **)(__int64, const struct MultitaskingViewPointerInputArgs *))(*(_QWORD *)v4 + 40LL))(v4, a2);
    v5 = &v11;
  }
  else
  {
    CMultitaskingViewElementBase::PointerMove(this, a2);
    v6 = (int *)((char *)this + 576);
    if ( !*((_QWORD *)this + 72) )
      return;
    v7 = 0LL;
    *(_QWORD *)v9 = 0LL;
    if ( v9 != v6 )
    {
      v7 = *(_QWORD *)v6;
      *(_QWORD *)v9 = *(_QWORD *)v6;
      *(_QWORD *)v6 = 0LL;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct MultitaskingViewPointerInputArgs *))(*(_QWORD *)v7 + 24LL))(
           v7,
           *((unsigned int *)this + 25),
           a2);
    if ( v8 >= 0 )
    {
      *(_QWORD *)v9 = 0LL;
      v11 = *((_QWORD *)this + 71);
      *((_QWORD *)this + 71) = v7;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x16B,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v8);
    }
    v5 = (__int64 *)v9;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5);
}
