/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180039EB8
 * Callers:
 *     ?add_DismissRequested@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800397C0 (-add_DismissRequested@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVStartExperience.c)
 *     ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801DBB54 (-Add@-$AgileEventSource@U-$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@Composa.c)
 *     ?add_Shown@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180212AF0 (-add_Shown@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVStartExperienceManager@Exp.c)
 *     ?add_NotifyFocus@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180212B90 (-add_NotifyFocus@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVStartExperienceManag.c)
 *     ?add_Destroyed@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18022D980 (-add_Destroyed@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVStartExperienceManager.c)
 *     ?add_SetForegroundFailed@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802ABAF0 (-add_SetForegroundFailed@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVStartExperie.c)
 *     ?add_ExitTransitionToCortanaCompleted@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802AFBE0 (-add_ExitTransitionToCortanaCompleted@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 *     ?add_Hidden@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180392B40 (-add_Hidden@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVStartExperienceManager@Ex.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180039AB8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18003B038 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
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
  Microsoft::WRL::Details::EventTargetArray *v14; // r14
  void **v15; // r15
  struct IUnknown **i; // rsi
  _QWORD *v17; // rsi
  RTL_SRWLOCK v18; // rcx
  char v19; // [rsp+20h] [rbp-48h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v20 = 0LL;
  if ( Ptr )
    v10 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v21 = v10;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v20,
          &v21);
  if ( v11 >= 0 )
  {
    v13 = a1->Ptr;
    v14 = v20;
    if ( a1->Ptr )
    {
      v15 = (void **)v13[4];
      for ( i = (struct IUnknown **)v13[2]; i != (struct IUnknown **)v13[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v14, *i, *v15);
        v13 = a1->Ptr;
        ++v15;
      }
    }
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v14, a2, a3);
    AcquireSRWLockExclusive(a1 + 1);
    v17 = 0LL;
    if ( &v19 != (char *)a1 )
    {
      v17 = a1->Ptr;
      a1->Ptr = 0LL;
    }
    v18.Ptr = a1->Ptr;
    a1->Ptr = v14;
    if ( v18.Ptr )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18.Ptr);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17);
    return 0LL;
  }
  else
  {
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v20);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v11;
  }
}
