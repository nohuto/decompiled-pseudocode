/*
 * XREFs of ?HasSubscriptionBeenRecentlyAccessed@Details@SubscribedContentStore@CreativeFramework@@YA_NAEBU_FILETIME@@@Z @ 0x180061EB4
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x1800608BC (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     <none>
 */

bool __fastcall CreativeFramework::SubscribedContentStore::Details::HasSubscriptionBeenRecentlyAccessed(
        CreativeFramework::SubscribedContentStore::Details *this,
        const struct _FILETIME *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h]

  v2 = *((unsigned int *)this + 1);
  v3 = *(unsigned int *)this;
  SystemTimeAsFileTime = 0LL;
  v4 = v3 + (v2 << 32) + 2592000000000LL;
  v7 = v4;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  return (unsigned int)v4 + ((unsigned __int64)HIDWORD(v7) << 32) > SystemTimeAsFileTime.dwLowDateTime
                                                                  + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
}
