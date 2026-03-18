/*
 * XREFs of ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400840AC
 * Callers:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxLoadHmodIndex @ 0x140082390 (xxxLoadHmodIndex.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x140082B90 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     GetHmodTableIndex @ 0x140083C34 (GetHmodTableIndex.c)
 *     DestroyEventHook @ 0x1400849F0 (DestroyEventHook.c)
 *     _SetWinEventHook @ 0x140084C1C (_SetWinEventHook.c)
 *     NtUserUnhookWinEvent @ 0x140084EF0 (NtUserUnhookWinEvent.c)
 *     _UnhookWinEvent @ 0x140085268 (_UnhookWinEvent.c)
 *     FreeDelayedHooks @ 0x14011B7C0 (FreeDelayedHooks.c)
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1402396A8 (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x140283A7C (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 *     ?zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x140283CE0 (-zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH.c)
 *     ?zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z @ 0x1402847C4 (-zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z.c)
 *     NtUserSetWinEventHook @ 0x14029EEF0 (NtUserSetWinEventHook.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(__int64 a1)
{
  tagDomLock *v2; // rcx

  if ( *(_BYTE *)(a1 + 40) )
  {
    v2 = *(tagDomLock **)a1;
    if ( v2 )
    {
      if ( *(_BYTE *)(a1 + 8) )
        tagDomLock::UnLockExclusive(v2);
      else
        tagDomLock::UnLockShared(v2);
    }
    *(_BYTE *)(a1 + 40) = 0;
  }
}
