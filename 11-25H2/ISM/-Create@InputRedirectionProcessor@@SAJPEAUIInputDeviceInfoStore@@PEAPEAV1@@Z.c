/*
 * XREFs of ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x18007C530
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180034634 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x18000EE68 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputRedirectionProcessor::Create(
        struct IInputDeviceInfoStore *a1,
        struct InputRedirectionProcessor **a2)
{
  unsigned int v4; // ebx
  void *v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  void *v13; // [rsp+40h] [rbp+18h]

  v12 = 0LL;
  if ( !a2 )
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system"
                    "\\lib\\inputredirectionprocessor.cpp",
      (const char *)0x80070057LL,
      v10);
    return v4;
  }
  v6 = RefCountedObject::operator new(0x68uLL);
  v7 = (__int64)v6;
  v13 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x68uLL);
    *(_QWORD *)(v7 + 24) = &RefCountedObject::`vftable';
    *(_DWORD *)(v7 + 32) = 1;
    *(_QWORD *)v7 = &InputRedirectionProcessor::`vftable'{for `IContextualProcessor'};
    *(_QWORD *)(v7 + 8) = &InputRedirectionProcessor::`vftable'{for `IRemoteInputRedirection'};
    *(_QWORD *)(v7 + 16) = &InputRedirectionProcessor::`vftable'{for `IMessageObjectOwner'};
    *(_QWORD *)(v7 + 24) = &InputRedirectionProcessor::`vftable'{for `RefCountedObject'};
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_QWORD *)(v7 + 48) = 0LL;
    *(_QWORD *)(v7 + 56) = 0LL;
    *(_QWORD *)(v7 + 64) = 0LL;
    *(_QWORD *)(v7 + 80) = 0LL;
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_QWORD *)(v7 + 96) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v12 = v7;
  if ( !v7 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system"
                    "\\lib\\inputredirectionprocessor.cpp",
      (const char *)0x8007000ELL,
      v10);
    return v4;
  }
  v8 = InputRedirectionProcessor::Initialize((InputRedirectionProcessor *)v7, a1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = 0LL;
    *a2 = (struct InputRedirectionProcessor *)v7;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system"
                    "\\lib\\inputredirectionprocessor.cpp",
      (const char *)(unsigned int)v8,
      v10);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  return v9;
}
