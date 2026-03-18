/*
 * XREFs of NtUserGetSendMessageReceiver @ 0x140296E60
 * Callers:
 *     <none>
 * Callees:
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_GetSendMessageReceiver@@YAPEAUtagWND@@K@Z @ 0x140291B44 (-_GetSendMessageReceiver@@YAPEAUtagWND@@K@Z.c)
 *     ?_NtUserGetSendMessageReceiver@@YAPEAUHWND__@@K@Z @ 0x140291C68 (-_NtUserGetSendMessageReceiver@@YAPEAUHWND__@@K@Z.c)
 */

__int64 __fastcall NtUserGetSendMessageReceiver(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  struct tagWND *SendMessageReceiver; // rax
  __int64 v6; // rcx

  v2 = 0LL;
  if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
    return _NtUserGetSendMessageReceiver(a1);
  EnterCrit(0LL, 0LL);
  SendMessageReceiver = _GetSendMessageReceiver(a1, v4);
  if ( SendMessageReceiver )
    v2 = *(_QWORD *)SendMessageReceiver;
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
