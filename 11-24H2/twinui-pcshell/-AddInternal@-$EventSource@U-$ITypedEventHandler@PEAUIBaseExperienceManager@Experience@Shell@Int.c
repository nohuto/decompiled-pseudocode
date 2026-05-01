/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180039D28
 * Callers:
 *     ?add_VisibilityChanged@CControlCenterExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180039CD0 (-add_VisibilityChanged@CControlCenterExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIBaseE.c)
 *     ?add_VisibilityChanged@CToastCenterExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180228B40 (-add_VisibilityChanged@CToastCenterExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIBaseExp.c)
 *     ?add_VisibilityChanged@CActionCenterExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802ABA90 (-add_VisibilityChanged@CActionCenterExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIBaseEx.c)
 *     ?add_VirtualDesktopDataSourceChanged@VirtualDesktopDataSource@@UEAAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopDataSourceChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180493430 (-add_VirtualDesktopDataSourceChanged@VirtualDesktopDataSource@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180039620 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180039AB8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18003B038 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
        __int64 a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  int v11; // esi
  _QWORD *v13; // rax
  Microsoft::WRL::Details::EventTargetArray *v14; // rcx
  void **v15; // r14
  struct IUnknown **i; // rsi
  __int64 v17[7]; // [rsp+20h] [rbp-38h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int32 *v19; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  v19 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(_QWORD **)a1;
  v18 = 0LL;
  if ( v9 )
    v10 = ((__int64)(v9[3] - v9[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v17[0] = v10;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v18,
          v17);
  if ( v11 >= 0 )
  {
    v13 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v15 = (void **)v13[4];
      for ( i = (struct IUnknown **)v13[2]; i != (struct IUnknown **)v13[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v18, *i, *v15);
        v13 = *(_QWORD **)a1;
        ++v15;
      }
    }
    v14 = v18;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v14, a2, a3);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v19, (char *)a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      (volatile signed __int32 **)a1,
      (char *)&v18);
    if ( a1 != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19);
    return 0LL;
  }
  else
  {
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v11;
  }
}
