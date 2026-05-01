/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x1801AF5AC
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x1801AF45C (--$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1801AF6C0 (-AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection::RuntimeClassInitialize(
        CVirtualDesktopCollection *this,
        struct IVirtualDesktopFactory *a2,
        struct IVirtualDesktopPersistence *a3,
        char a4)
{
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, __int64 *, GUID *, char *); // rdi
  int v14; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_BYTE *)this + 16) = a4;
  if ( *((struct IVirtualDesktopFactory **)this + 3) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = CVirtualDesktopCollection::AddVirtualDesktop(this, 0LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = *((_QWORD *)this + 3);
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *, GUID *, char *))(*(_QWORD *)v12 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
    v14 = v13(v12, &qword_1807B2F48, &GUID_3f07f4be_b107_441a_af0f_39d82529072c, (char *)this + 40);
    v9 = v14;
    if ( v14 >= 0 )
    {
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 4, (__int64)a3);
      v9 = 0;
      goto LABEL_12;
    }
    v10 = (unsigned int)v14;
    v11 = 392LL;
  }
  else
  {
    v10 = (unsigned int)v8;
    v11 = 390LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
    (const char *)v10);
LABEL_12:
  result = v9;
  *((_BYTE *)this + 17) = 0;
  return result;
}
