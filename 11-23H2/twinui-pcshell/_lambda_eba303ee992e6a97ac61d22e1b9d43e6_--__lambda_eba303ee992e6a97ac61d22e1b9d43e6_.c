/*
 * XREFs of _lambda_eba303ee992e6a97ac61d22e1b9d43e6_::__lambda_eba303ee992e6a97ac61d22e1b9d43e6_ @ 0x1801E1268
 * Callers:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x18002BEC0 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180140480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 */

volatile signed __int64 *__fastcall lambda_eba303ee992e6a97ac61d22e1b9d43e6_::__lambda_eba303ee992e6a97ac61d22e1b9d43e6_(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}
