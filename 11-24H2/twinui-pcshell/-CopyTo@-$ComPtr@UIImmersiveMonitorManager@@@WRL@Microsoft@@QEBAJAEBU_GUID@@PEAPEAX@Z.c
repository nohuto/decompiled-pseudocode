/*
 * XREFs of ?CopyTo@?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C7688
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800759E0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800C7410 (-UnsubscribeFromServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800C76B0 (-SubscribeToServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025BF10 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180514B40 (-UnsubscribeFromServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::CopyTo(_QWORD *a1)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *))*a1)(*a1, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83);
}
