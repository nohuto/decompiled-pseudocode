/*
 * XREFs of ?_FindMatchingMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIUnknown@@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18022C4C8
 * Callers:
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x1804A3CE0 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?s_GetMTVHostType@CMultitaskingViewManager@@CA?AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingViewHost@@@Z @ 0x18011FADC (-s_GetMTVHostType@CMultitaskingViewManager@@CA-AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingView.c)
 */

__int64 __fastcall CMultitaskingViewManager::_FindMatchingMTVHost(
        __int64 a1,
        int a2,
        struct IUnknown *a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v9; // rsi
  __int64 i; // rbx
  __int64 *v11; // rbx

  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = -1LL;
  v9 = 0LL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( v9 >= *(_QWORD *)(a1 + 296) )
      return 2147647531LL;
    if ( ((unsigned int)CMultitaskingViewManager::s_GetMTVHostType(*(__int64 **)(i + *(_QWORD *)(a1 + 288))) & a2) != 0
      && SHIsSameObject(a3, *(struct IUnknown **)(i + *(_QWORD *)(a1 + 288))) )
    {
      break;
    }
    ++v9;
  }
  if ( a4 )
  {
    v11 = (__int64 *)(*(_QWORD *)(a1 + 288) + 16 * v9);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    *a4 = *v11;
  }
  if ( a5 )
    *a5 = v9;
  return 0LL;
}
