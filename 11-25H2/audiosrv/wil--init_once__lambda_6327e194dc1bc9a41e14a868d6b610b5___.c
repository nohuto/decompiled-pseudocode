/*
 * XREFs of wil::init_once__lambda_6327e194dc1bc9a41e14a868d6b610b5___ @ 0x1800A3678
 * Callers:
 *     ?RegisterForAudioRenderEndpointChangeNotifications@CAudioResourceManager@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x1800A3600 (-RegisterForAudioRenderEndpointChangeNotifications@CAudioResourceManager@@UEAAJAEAVWeakRef@WRL@M.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SubscribeToWnfAudioRenderEndpointChanges@CAudioRenderEndpointChangeDelegator@@QEAAJXZ @ 0x1800A0F84 (-SubscribeToWnfAudioRenderEndpointChanges@CAudioRenderEndpointChangeDelegator@@QEAAJXZ.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C1490 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall wil::init_once__lambda_6327e194dc1bc9a41e14a868d6b610b5___(LPINIT_ONCE lpInitOnce, __int64 a2)
{
  void *v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+40h] [rbp+18h] BYREF

  fPending = 0;
  if ( !InitOnceBeginInitialize(lpInitOnce, 0, &fPending, 0LL) )
    wil::details::in1diag3::_Throw_GetLastError(retaddr, v4, v5, v6);
  if ( !fPending )
    return 0;
  v7 = CAudioRenderEndpointChangeDelegator::SubscribeToWnfAudioRenderEndpointChanges(
         *(CAudioRenderEndpointChangeDelegator **)(a2 + 72),
         (__int64)v4,
         v5);
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE20,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v7);
  InitOnceComplete(lpInitOnce, 0, 0LL);
  return 1;
}
