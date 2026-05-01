/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800390D4
 * Callers:
 *     ?add_VirtualDesktopChanged@VirtualDesktop@@UEAAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1804987B0 (-add_VirtualDesktopChanged@VirtualDesktop@@UEAAJPEAU-$ITypedEventHandler@PEAUIVirtualDesktop@Mul.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180039620 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180039AB8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18003B038 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rdi
  _QWORD *Ptr; // rcx
  __int64 v10; // rcx
  int v11; // esi
  _QWORD *v13; // rax
  void **v14; // r14
  struct IUnknown **i; // rsi
  Microsoft::WRL::Details::EventTargetArray *v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v18; // [rsp+28h] [rbp-8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v19; // [rsp+70h] [rbp+40h] BYREF
  __int64 v20; // [rsp+88h] [rbp+58h] BYREF

  *a4 = 0LL;
  v4 = a1 + 2;
  v20 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v19 = 0LL;
  v18 = v4;
  if ( Ptr )
    v10 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v17 = v10;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v19,
          &v17);
  if ( v11 >= 0 )
  {
    v13 = a1->Ptr;
    if ( a1->Ptr )
    {
      v14 = (void **)v13[4];
      for ( i = (struct IUnknown **)v13[2]; i != (struct IUnknown **)v13[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v19, *i, *v14);
        v13 = a1->Ptr;
        ++v14;
      }
    }
    v16 = v19;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v16, a2, a3);
    AcquireSRWLockExclusive(a1 + 1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v20, a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v19);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v20);
    return 0LL;
  }
  else
  {
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v18);
    return (unsigned int)v11;
  }
}
