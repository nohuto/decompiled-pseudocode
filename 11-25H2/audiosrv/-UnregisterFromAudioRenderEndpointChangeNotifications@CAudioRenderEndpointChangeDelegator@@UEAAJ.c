/*
 * XREFs of ?UnregisterFromAudioRenderEndpointChangeNotifications@CAudioRenderEndpointChangeDelegator@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x1800733E0
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@AEBVWeakRef@WRL@Microsoft@@@Z @ 0x180073444 (-remove@-$forward_list@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@.c)
 */

__int64 __fastcall CAudioRenderEndpointChangeDelegator::UnregisterFromAudioRenderEndpointChangeNotifications(
        CAudioRenderEndpointChangeDelegator *this,
        struct Microsoft::WRL::WeakRef *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  std::forward_list<Microsoft::WRL::WeakRef>::remove((char *)this + 72, a2);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
