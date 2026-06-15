/*
 * XREFs of ??1?$ComPtr@VCVADServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18000D430
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVADServer_CVADServer_IAudioProcess___unsigned_short_const___&_enum__AUDCLNT_SHAREMODE_&_unsigned_long_&_tWAVEFORMATEX_const___&__GUID_const___&_VadServerSettings___&_unsigned_short_____&_IProcessSubmixProxy___&__::_1_::dtor$2 @ 0x180168537 (_Microsoft--WRL--Details--MakeAndInitialize_CVADServer_CVADServer_IAudioProcess___unsigned_short.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D460 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Detail.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVADServer>::~ComPtr<CVADServer>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release(result);
  }
  return result;
}
