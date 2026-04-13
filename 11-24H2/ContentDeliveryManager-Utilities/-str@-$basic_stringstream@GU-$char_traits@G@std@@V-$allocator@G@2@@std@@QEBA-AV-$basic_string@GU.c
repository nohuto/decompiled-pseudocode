/*
 * XREFs of ?str@?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180065038
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180060D9C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18006213C (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180068728 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG_K@Z @ 0x18005FFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG_K@Z.c)
 */

_QWORD *__fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::str(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // edx
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 *v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // r9

  v3 = *(_DWORD *)(a1 + 136);
  if ( (v3 & 2) != 0 || (v4 = *(unsigned __int64 **)(a1 + 88), !*v4) )
  {
    if ( (v3 & 4) != 0 || (v9 = **(_QWORD **)(a1 + 80)) == 0 )
    {
      a2[3] = 7LL;
      a2[2] = 0LL;
      *(_WORD *)a2 = 0;
      return a2;
    }
    v8 = **(_QWORD **)(a1 + 48);
    v7 = v9 + 2LL * **(int **)(a1 + 104) - v8;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 < *v4 )
      v5 = *v4;
    v6 = *(unsigned __int64 **)(a1 + 56);
    v7 = v5 - *v6;
    v8 = *v6;
  }
  std::wstring::wstring(a2, v8, v7 >> 1);
  return a2;
}
