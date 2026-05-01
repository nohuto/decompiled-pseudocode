/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@23456@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1802CF9A4
 * Callers:
 *     ??$InvokeDelegates@V_lambda_992899f37bde9c4ccf5aeca340241f6d_@@U?$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@23456@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_992899f37bde9c4ccf5aeca340241f6d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@23456@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180300C20 (--$InvokeDelegates@V_lambda_992899f37bde9c4ccf5aeca340241f6d_@@U-$ITypedEventHandler@PEAUIObject.c)
 *     ?remove_VisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180306880 (-remove_VisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180039620 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180039AB8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18003AB30 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithVisibility *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // r13
  unsigned int v4; // r14d
  volatile signed __int32 *v6; // rdi
  RTL_SRWLOCK v7; // rax
  struct IUnknown **v8; // rcx
  Microsoft::WRL::Details::EventTargetArray *v9; // rbx
  __int64 v10; // rax
  char v11; // cl
  int v12; // ebx
  RTL_SRWLOCK v14; // rax
  struct IUnknown **v15; // r12
  __int64 v16; // r13
  RTL_SRWLOCK *v17; // rdi
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  RTL_SRWLOCK *v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  RTL_SRWLOCK *v21; // [rsp+80h] [rbp+40h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v22; // [rsp+90h] [rbp+50h] BYREF
  volatile signed __int32 *v23; // [rsp+98h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v4 = 0;
  v23 = 0LL;
  v6 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  v7.Ptr = a1->Ptr;
  v19 = v2;
  if ( !v7.Ptr )
  {
LABEL_8:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
    return v4;
  }
  v8 = (struct IUnknown **)*((_QWORD *)v7.Ptr + 2);
  v9 = 0LL;
  v10 = *((_QWORD *)v7.Ptr + 3) - (_QWORD)v8;
  v22 = 0LL;
  LOBYTE(v21) = 0;
  v20 = (v10 >> 3) - 1;
  v18 = v20;
  if ( v10 >> 3 == 1 )
  {
    v11 = *v8 == a2;
LABEL_18:
    if ( v11 )
    {
      wil::AcquireSRWLockExclusive(&v21, a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v23, (char *)a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        (volatile signed __int32 **)a1,
        (char *)&v22);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v21);
      v6 = v23;
      v9 = v22;
    }
    goto LABEL_20;
  }
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v22,
          (unsigned __int64 *)&v18);
  if ( v12 < 0 )
  {
    if ( v22 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v22);
    v4 = v12;
    goto LABEL_8;
  }
  v14.Ptr = a1->Ptr;
  v9 = v22;
  v15 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
  v19 = (RTL_SRWLOCK *)*((_QWORD *)a1->Ptr + 4);
  if ( v15 != *((struct IUnknown ***)v14.Ptr + 3) )
  {
    v16 = v20;
    v11 = 0;
    v17 = v19;
    do
    {
      if ( v11 || a2 != *v15 )
      {
        if ( !v16 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v9, *v15, v17->Ptr);
        v11 = (char)v21;
        ++v17;
        --v16;
      }
      else
      {
        v11 = 1;
        LOBYTE(v21) = 1;
      }
      ++v15;
    }
    while ( v15 != *((struct IUnknown ***)a1->Ptr + 3) );
    v6 = v23;
    v2 = a1 + 2;
    goto LABEL_18;
  }
LABEL_20:
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v9);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  return 0LL;
}
