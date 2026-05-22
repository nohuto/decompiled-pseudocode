/*
 * XREFs of ?Initialize@ButtonProcessor@@IEAAJXZ @ 0x180084AEC
 * Callers:
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18007ECD0 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180033E8C (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18008F35C (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ButtonProcessor::Initialize(ButtonProcessor *this)
{
  int ChildInputProcessor; // ebx
  __int64 v3; // rdx
  HKEY v5; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 13);
  ChildInputProcessor = CoreUICreate((char *)this + 104);
  if ( ChildInputProcessor < 0 )
  {
    v3 = 54LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor,
      v6);
    return (unsigned int)ChildInputProcessor;
  }
  *((_WORD *)this + 60) = 0;
  if ( IsEdition(253345LL) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
    RegistryWatcher::Create(
      v5,
      L"SYSTEM\\INPUT\\BUTTONS",
      this,
      (void (*)(void *, HKEY))ButtonProcessor::OnButtonRegistryKeyChangeStatic,
      (struct RegistryWatcher **)this + 14);
    *(_DWORD *)(*((_QWORD *)this + 4) + 4LL) |= 4u;
    v7[0] = *((_QWORD *)this + 4);
    v7[1] = *((_QWORD *)this + 3);
    v7[2] = this;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
    ChildInputProcessor = CreateChildInputProcessor(4u, v7, (__int64)this + 128);
    if ( ChildInputProcessor < 0 )
    {
      v3 = 83LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
