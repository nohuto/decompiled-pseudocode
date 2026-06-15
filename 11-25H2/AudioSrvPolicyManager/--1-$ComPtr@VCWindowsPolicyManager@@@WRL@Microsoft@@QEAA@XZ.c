/*
 * XREFs of ??1?$ComPtr@VCWindowsPolicyManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180028238
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CWindowsPolicyManager_CWindowsPolicyManager__::_1_::dtor$1 @ 0x18004CD0B (_Microsoft--WRL--Details--MakeAndInitialize_CWindowsPolicyManager_CWindowsPolicyMan_ea_18004CD0B.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800150A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyMana.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<CWindowsPolicyManager>::~ComPtr<CWindowsPolicyManager>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::Release(result);
  }
  return result;
}
