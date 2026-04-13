/*
 * XREFs of ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800973E8
 * Callers:
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x180081624 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetSubscriptionIdFromPlacementName@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV34@@Z @ 0x1800957D4 (-GetSubscriptionIdFromPlacementName@SubscribedContentUtils@CreativeFramework@@YA-AV-$basic_strin.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800A5150 (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800A6A5C (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 *     ?ReplaceAll@Details@NotificationManager@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800A7168 (-ReplaceAll@Details@NotificationManager@CreativeFramework@@YA-AV-$basic_string@_WU-$char_traits@.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x1800B201C (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800B31B0 (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 *     ?RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x1800B33A8 (-RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@_WU-$char_trait.c)
 * Callees:
 *     ?find@?$char_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x18005DAEC (-find@-$char_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 *     wmemcmp @ 0x18005EBF8 (wmemcmp.c)
 */

unsigned __int64 __fastcall std::wstring::find(_QWORD *a1, wchar_t *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v7; // rbx
  size_t v8; // rbx
  __int64 v9; // rbx
  _QWORD *v10; // rax
  char *v11; // rsi
  const wchar_t *v12; // rax
  char *v13; // r11
  const wchar_t *v14; // r10
  __int64 v15; // rcx

  if ( !a4 && a3 <= a1[2] )
    return a3;
  v7 = a1[2];
  if ( a3 < v7 )
  {
    v8 = v7 - a3;
    if ( a4 <= v8 )
    {
      v9 = 1 - a4 + v8;
      if ( a1[3] < 8uLL )
        v10 = a1;
      else
        v10 = (_QWORD *)*a1;
      v11 = (char *)v10 + 2 * a3;
      while ( 1 )
      {
        v12 = std::char_traits<unsigned short>::find(v11, v9, a2);
        v14 = v12;
        if ( !v12 )
          break;
        if ( !a4 || !wmemcmp(v12, a2, a4) )
        {
          if ( *((_QWORD *)v13 + 3) >= 8uLL )
            v13 = *(char **)v13;
          return ((char *)v14 - v13) >> 1;
        }
        v15 = (char *)v14 - v11;
        v11 = (char *)(v14 + 1);
        v9 += -1 - (v15 >> 1);
      }
    }
  }
  return -1LL;
}
