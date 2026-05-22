/*
 * XREFs of ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180191860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18002F9F0 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall KeyboardProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = RefCountedObject::operator new(0x58uLL);
  if ( v4 )
  {
    v5 = *(_QWORD *)a1;
    v6 = *((_QWORD *)a1 + 1);
    v4[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 4) = 1;
    *v4 = &KeyboardProcessor::`vftable'{for `IInputProcessor'};
    v4[4] = v5;
    v4[1] = &KeyboardProcessor::`vftable'{for `RefCountedObject'};
    v4[3] = v6;
    *((_DWORD *)v4 + 10) = 0;
    *((_DWORD *)v4 + 11) = 300;
    v4[6] = 0LL;
    v4[8] = 0LL;
    v4[9] = 0LL;
    v4[10] = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4 + 6);
    *((_DWORD *)v4 + 14) = 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4 + 6);
    v7 = KeyboardModifierState::Create((struct KeyboardModifierState **)v4 + 6);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a2 = (struct IInputProcessor *)v4;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v7);
    v9 = 71LL;
  }
  else
  {
    v8 = -2147024882;
    v9 = 68LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
    (const char *)v8);
  return v8;
}
