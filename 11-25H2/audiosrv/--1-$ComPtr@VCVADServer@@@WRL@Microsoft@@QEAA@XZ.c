/*
 * XREFs of ??1?$ComPtr@VCVADServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180076AB4
 * Callers:
 *     _AudioServerInitialize_Internal_::_1_::dtor$40 @ 0x18015ECB8 (_AudioServerInitialize_Internal_--_1_--dtor$40.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D6A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Detail.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CVADServer>::~ComPtr<CVADServer>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release(result);
  }
  return result;
}
