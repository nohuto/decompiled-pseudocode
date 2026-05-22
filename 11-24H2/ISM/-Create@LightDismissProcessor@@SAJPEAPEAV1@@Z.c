/*
 * XREFs of ?Create@LightDismissProcessor@@SAJPEAPEAV1@@Z @ 0x180061284
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18004F884 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LightDismissProcessor::Create(struct LightDismissProcessor **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0LL;
  if ( a1 )
  {
    v4 = RefCountedObject::operator new(0x18uLL);
    if ( v4 )
    {
      v4[1] = &RefCountedObject::`vftable';
      *((_DWORD *)v4 + 4) = 1;
      *v4 = &LightDismissProcessor::`vftable'{for `IContextualProcessor'};
      v4[1] = &LightDismissProcessor::`vftable'{for `RefCountedObject'};
    }
    else
    {
      v4 = 0LL;
    }
    v8 = v4;
    if ( v4 )
    {
      v8 = 0LL;
      *a1 = (struct LightDismissProcessor *)v4;
      goto LABEL_10;
    }
    v2 = -2147024882;
    v3 = 45LL;
  }
  else
  {
    v2 = -2147024809;
    v3 = 38LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lightdismiss\\processor\\l"
                  "ightdismissprocessor.cpp",
    (const char *)v2,
    v6);
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  return v2;
}
