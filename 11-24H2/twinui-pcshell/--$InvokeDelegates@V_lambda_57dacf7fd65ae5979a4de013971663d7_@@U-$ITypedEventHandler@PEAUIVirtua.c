/*
 * XREFs of ??$InvokeDelegates@V_lambda_57dacf7fd65ae5979a4de013971663d7_@@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_57dacf7fd65ae5979a4de013971663d7_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1801E31B0
 * Callers:
 *     ?ViewVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIApplicationView@@@Z @ 0x18003BDC0 (-ViewVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ??$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18003CA58 (--$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801D8630 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Int.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_57dacf7fd65ae5979a4de013971663d7_,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>>(
        _QWORD *a1,
        volatile int *a2,
        __int64 a3)
{
  volatile int *v4; // r9
  _QWORD *v5; // r10
  volatile int *v6; // rbx
  struct IUnknown **v7; // rdi
  unsigned int *v8; // r14
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // esi

  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  if ( a2 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 3), a2);
    v6 = v4;
  }
  v7 = (struct IUnknown **)*((_QWORD *)v6 + 2);
  if ( v7 != *((struct IUnknown ***)v6 + 3) )
  {
    v8 = (unsigned int *)v5[1];
    v9 = (_QWORD *)*v5;
    do
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD, volatile int *))(*v7)->lpVtbl[1].QueryInterface)(
              *v7,
              *v9,
              *v8,
              v4);
      v11 = v10;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 0LL, 0LL);
        if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a3,
            *v7);
      }
      ++v7;
    }
    while ( v7 != *((struct IUnknown ***)v6 + 3) );
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  return 0LL;
}
