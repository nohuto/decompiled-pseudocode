/*
 * XREFs of ?Create@InputForwardProcessor@@SAJPEAPEAV1@@Z @ 0x1801A7120
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18004F884 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??0InputForwardProcessor@@QEAA@XZ @ 0x1801A6EF8 (--0InputForwardProcessor@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputForwardProcessor::Create(struct InputForwardProcessor **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  InputForwardProcessor *v4; // rax
  InputForwardProcessor *v5; // rbx
  __int64 *v6; // rbx
  int v8; // eax
  const char *v9; // r9
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v12; // [rsp+30h] [rbp+8h] BYREF
  InputForwardProcessor *v13; // [rsp+38h] [rbp+10h]

  v12 = 0LL;
  if ( !a1 )
  {
    v2 = -2147024809;
    v3 = 37LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputforwarder\\system\\lib\\"
               "inputforwardprocessor.cpp",
      (const char *)v2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
    return v2;
  }
  v4 = (InputForwardProcessor *)RefCountedObject::operator new(0x60uLL);
  v5 = v4;
  v13 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x60uLL);
    v6 = (__int64 *)InputForwardProcessor::InputForwardProcessor(v5);
  }
  else
  {
    v6 = 0LL;
  }
  v12 = v6;
  if ( !v6 )
  {
    v2 = -2147024882;
    v3 = 41LL;
    goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v6 + 3);
  v8 = CoreUICreate(v6 + 3);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputforwarder\\system\\lib\\inpu"
           "tforwardprocessor.cpp",
      (const char *)(unsigned int)v8,
      v10);
  if ( !v6[3] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputforwarder\\system\\lib\\inpu"
           "tforwardprocessor.cpp",
      v9);
  v12 = 0LL;
  *a1 = (struct InputForwardProcessor *)v6;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  return 0LL;
}
