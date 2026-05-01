/*
 * XREFs of ?erase@?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1805A8340
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18008BD80 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800AA8E4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800D1014 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 **__fastcall std::vector<Microsoft::WRL::ComPtr<ISnappedWindow>>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        char *a4)
{
  char *v4; // rsi
  char *v8; // r15
  __int64 *v9; // rdi
  __int64 **result; // rax

  v4 = a4;
  if ( a3 != (__int64 *)a4 )
  {
    v8 = *(char **)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      do
      {
        Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(v9++, v4);
        v4 += 8;
      }
      while ( v4 != v8 );
    }
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
      v9,
      *(__int64 **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
