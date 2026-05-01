/*
 * XREFs of ??1?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180219AD4
 * Callers:
 *     _StartExperienceManagerFactory::GetExperienceManager_::_1_::dtor$0 @ 0x1806D6E40 (_StartExperienceManagerFactory--GetExperienceManager_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_CStartExperienceManager_bool__::_1_::dtor$0 @ 0x1806DE44F (_Microsoft--WRL--Details--Make_CStartExperienceManager_bool__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CStartExperienceManager>::~ComPtr<CStartExperienceManager>(
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
