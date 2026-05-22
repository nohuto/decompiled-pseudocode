/*
 * XREFs of ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x18017E26C
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017AB58 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ViewMenuChordedKeyHandler@@IEAA@XZ @ 0x18017DCF8 (--0ViewMenuChordedKeyHandler@@IEAA@XZ.c)
 *     ?Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@@Z @ 0x18017E3A8 (-Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewMenuChordedKeyHandler::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ViewMenuChordedKeyHandler **a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  ViewMenuChordedKeyHandler *v8; // rax
  __int64 v9; // rdx
  ViewMenuChordedKeyHandler *v10; // rdi
  unsigned __int64 v11; // r9
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ViewMenuChordedKeyHandler *v15; // [rsp+40h] [rbp+18h] BYREF

  v15 = 0LL;
  if ( !a4 )
  {
    v6 = -2147024809;
    v7 = 37LL;
LABEL_8:
    v11 = v6;
    goto LABEL_9;
  }
  v8 = (ViewMenuChordedKeyHandler *)RefCountedObject::operator new(0x68uLL);
  v15 = v8;
  if ( v8 )
    v10 = ViewMenuChordedKeyHandler::ViewMenuChordedKeyHandler(v8);
  else
    v10 = 0LL;
  v15 = v10;
  if ( !v10 )
  {
    v6 = -2147024882;
    v7 = 43LL;
    goto LABEL_8;
  }
  v12 = ViewMenuChordedKeyHandler::Initialize(v10, v9, a2);
  v6 = v12;
  if ( v12 >= 0 )
  {
    v15 = 0LL;
    *a4 = v10;
    v6 = 0;
    goto LABEL_13;
  }
  v11 = (unsigned int)v12;
  v7 = 49LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
    (const char *)v11);
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  return v6;
}
