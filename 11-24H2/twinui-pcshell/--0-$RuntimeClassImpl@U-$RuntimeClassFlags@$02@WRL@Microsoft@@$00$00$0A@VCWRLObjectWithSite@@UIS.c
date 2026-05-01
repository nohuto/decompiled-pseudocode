/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802C7090
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@WRL@Microsoft@@QEAA@XZ @ 0x18023AFCC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCWRLObjectWithSite@@UIStartExperience.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIObjectWithSelection@@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802C0BAC (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIObjectWithSelection@@VCWRLObj.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>(
        __int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithSelection,CWRLObjectWithSite>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithSelection,CWRLObjectWithSite>(a1);
  result = v1;
  *(_QWORD *)(v1 + 88) = 1LL;
  return result;
}
