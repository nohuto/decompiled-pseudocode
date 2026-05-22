/*
 * XREFs of ?Initialize@ComboButtonProcessor@@AEAAJXZ @ 0x18019D6C0
 * Callers:
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x18019D5A0 (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000B6AC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@ButtonRecognizer@@SAJPEAPEAV1@@Z @ 0x18019E710 (-Create@ButtonRecognizer@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall ComboButtonProcessor::Initialize(ComboButtonProcessor *this)
{
  wil::details **v1; // rdi
  int v3; // ebx
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (wil::details **)((char *)this + 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  v3 = CoreUICreate(v1);
  if ( v3 < 0 )
  {
    v5 = 10LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\com"
               "bobuttonprocessor.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 4,
    *v1,
    v4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  v3 = ButtonRecognizer::Create((struct ButtonRecognizer **)this + 6);
  if ( v3 < 0 )
  {
    v5 = 15LL;
    goto LABEL_3;
  }
  return 0LL;
}
