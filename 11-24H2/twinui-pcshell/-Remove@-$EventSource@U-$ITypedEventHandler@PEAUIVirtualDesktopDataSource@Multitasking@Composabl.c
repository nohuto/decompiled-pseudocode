/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopDataSourceChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180493190
 * Callers:
 *     ?remove_VirtualDesktopDataSourceChanged@VirtualDesktopDataSource@@UEAAJUEventRegistrationToken@@@Z @ 0x180493510 (-remove_VirtualDesktopDataSourceChanged@VirtualDesktopDataSource@@UEAAJUEventRegistrationToken@@.c)
 *     ??$InvokeDelegates@V_lambda_2fe463ac7f24b5ecea945a8edfe2f491_@@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_2fe463ac7f24b5ecea945a8edfe2f491_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180496594 (--$InvokeDelegates@V_lambda_2fe463ac7f24b5ecea945a8edfe2f491_@@U-$ITypedEventHandler@PEAUIVirtua.c)
 *     ?remove_VirtualDesktopCollectionChanged@VirtualDesktopCollection@@UEAAJUEventRegistrationToken@@@Z @ 0x180498170 (-remove_VirtualDesktopCollectionChanged@VirtualDesktopCollection@@UEAAJUEventRegistrationToken@@.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180039620 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180039AB8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18003AB30 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  unsigned int v4; // r14d
  volatile signed __int32 *v5; // rdi
  RTL_SRWLOCK v6; // rax
  struct IUnknown **v7; // rcx
  Microsoft::WRL::Details::EventTargetArray *v8; // rbx
  bool v9; // r13
  __int64 v10; // rax
  int v11; // ebx
  RTL_SRWLOCK v13; // rax
  struct IUnknown **v14; // r12
  RTL_SRWLOCK *v15; // rcx
  RTL_SRWLOCK *v16; // rdi
  RTL_SRWLOCK *v17; // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v18; // [rsp+28h] [rbp-8h]
  Microsoft::WRL::Details::EventTargetArray *v19; // [rsp+70h] [rbp+40h] BYREF
  volatile signed __int32 *v20; // [rsp+80h] [rbp+50h] BYREF
  RTL_SRWLOCK *v21; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v20 = 0LL;
  v5 = 0LL;
  wil::AcquireSRWLockExclusive(&v17, a1 + 2);
  v6.Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
LABEL_8:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
    return v4;
  }
  v7 = (struct IUnknown **)*((_QWORD *)v6.Ptr + 2);
  v8 = 0LL;
  v9 = 0;
  v10 = *((_QWORD *)v6.Ptr + 3) - (_QWORD)v7;
  v19 = 0LL;
  v18 = (RTL_SRWLOCK *)((v10 >> 3) - 1);
  v21 = v18;
  if ( v10 >> 3 == 1 )
  {
    v9 = *v7 == a2;
LABEL_18:
    if ( v9 )
    {
      wil::AcquireSRWLockExclusive(&v21, a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v20, (char *)a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        (volatile signed __int32 **)a1,
        (char *)&v19);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v21);
      v5 = v20;
      v8 = v19;
    }
    goto LABEL_20;
  }
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v19,
          (unsigned __int64 *)&v21);
  if ( v11 < 0 )
  {
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v19);
    v4 = v11;
    goto LABEL_8;
  }
  v13.Ptr = a1->Ptr;
  v8 = v19;
  v14 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
  v15 = (RTL_SRWLOCK *)*((_QWORD *)a1->Ptr + 4);
  v21 = v15;
  if ( v14 != *((struct IUnknown ***)v13.Ptr + 3) )
  {
    v16 = v18;
    do
    {
      if ( v9 || a2 != *v14 )
      {
        if ( !v16 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *v14, v15->Ptr);
        v15 = ++v21;
        v16 = (RTL_SRWLOCK *)((char *)v16 - 1);
      }
      else
      {
        v9 = 1;
      }
      ++v14;
    }
    while ( v14 != *((struct IUnknown ***)a1->Ptr + 3) );
    v5 = v20;
    goto LABEL_18;
  }
LABEL_20:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v8);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
  return 0LL;
}
