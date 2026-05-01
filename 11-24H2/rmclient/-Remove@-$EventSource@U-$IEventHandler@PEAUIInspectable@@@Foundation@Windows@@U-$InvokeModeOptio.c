/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180019070
 * Callers:
 *     ??$InvokeDelegates@V_lambda_b9c6a9526e98e8096438348dee47a029_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_b9c6a9526e98e8096438348dee47a029_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000136C (--$InvokeDelegates@V_lambda_b9c6a9526e98e8096438348dee47a029_@@U-$IEventHandler@PEAUIInspectable.c)
 *     ?remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180019560 (-remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180019580 (-remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180001640 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001FC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180002174 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800117D0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x180018254 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  __int64 v4; // rbx
  volatile int *v5; // rdx
  _QWORD *Ptr; // rax
  struct IUnknown **v7; // rcx
  bool v8; // r15
  __int64 v9; // r12
  RTL_SRWLOCK *v10; // r12
  int v11; // r14d
  struct IUnknown **v13; // r14
  void **v14; // r13
  __int64 v15; // r8
  __int64 v16; // r8
  PSRWLOCK v17[2]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+80h] [rbp+50h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0LL;
  }
  v7 = (struct IUnknown **)Ptr[2];
  v8 = 0;
  v9 = Ptr[3];
  v18 = 0LL;
  v10 = (RTL_SRWLOCK *)(((v9 - (__int64)v7) >> 3) - 1);
  v17[0] = v10;
  if ( !v10 )
  {
    v8 = *v7 == a2;
    goto LABEL_19;
  }
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v18,
          (unsigned __int64 *)v17);
  if ( v11 >= 0 )
  {
    v13 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    v14 = (void **)*((_QWORD *)a1->Ptr + 4);
    if ( v13 == *((struct IUnknown ***)a1->Ptr + 3) )
    {
LABEL_23:
      if ( v18 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
          (__int64)v18,
          v5);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4, v5);
      return 0LL;
    }
    do
    {
      if ( v8 || a2 != *v13 )
      {
        if ( !v10 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v18, *v13, *v14++);
        v10 = (RTL_SRWLOCK *)((char *)v10 - 1);
      }
      else
      {
        v8 = 1;
      }
      ++v13;
    }
    while ( v13 != *((struct IUnknown ***)a1->Ptr + 3) );
LABEL_19:
    if ( v8 )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v17, a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v19, (char *)a1, v15);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)a1, (char *)&v18, v16);
      if ( v17[0] )
        ReleaseSRWLockExclusive(v17[0]);
      v4 = v19;
    }
    goto LABEL_23;
  }
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)v18,
      v5);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v11;
}
