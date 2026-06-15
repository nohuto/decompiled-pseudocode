/*
 * XREFs of ??1?$ComPtr@VCMulticastSessionManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FF894
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CMulticastSessionManager_CMulticastSessionManager__::_1_::dtor$1 @ 0x18017037C (_Microsoft--WRL--Details--MakeAndInitialize_CMulticastSessionManager_CMulticastSessionManager__-.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastSessionManager@@UIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801009A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastSessio.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CMulticastSessionManager>::~ComPtr<CMulticastSessionManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMulticastSessionManager,IMulticastManagerNotificationClient>::Release(result);
  }
  return result;
}
