/*
 * XREFs of ?v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804C5E30
 * Callers:
 *     ?v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804C9F00 (-v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Micro.c)
 *     ?v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804D0880 (-v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CMultitaskingViewElementBase::v_NavigateFromChildIndex(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rsi
  __int64 v8; // rbx
  __int64 v10[2]; // [rsp+28h] [rbp-10h] BYREF

  v5 = a3;
  v10[0] = 0LL;
  if ( a4 == 5 )
  {
    while ( v5 < *(_QWORD *)(a1 + 24) - 1LL )
    {
      ++v5;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(v10, (_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v5));
      v8 = v10[0];
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10[0] + 160LL))(v10[0], a5) )
        goto LABEL_9;
    }
  }
  else if ( a4 == 6 && a3 )
  {
    while ( v5 )
    {
      --v5;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(v10, (_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v5));
      v8 = v10[0];
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10[0] + 160LL))(v10[0], a5) )
      {
LABEL_9:
        *a2 = 0LL;
        if ( a2 != v10 )
        {
          v10[0] = 0LL;
          *a2 = v8;
        }
        goto LABEL_12;
      }
    }
  }
  *a2 = 0LL;
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
  return a2;
}
