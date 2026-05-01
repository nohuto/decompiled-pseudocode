/*
 * XREFs of ??1?$ComPtr@VCortanaExperienceManagerNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x180379CD8
 * Callers:
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1806E4FA6 (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _SearchAppExperienceManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1806E59D6 (_SearchAppExperienceManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802B06F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_1802B06F0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CortanaExperienceManagerNotification>::~ComPtr<CortanaExperienceManagerNotification>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}
