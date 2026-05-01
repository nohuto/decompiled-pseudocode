/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18001920C
 * Callers:
 *     ??$InvokeDelegates@V_lambda_810c14b6a29fd984a078d93978f19614_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_810c14b6a29fd984a078d93978f19614_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180001178 (--$InvokeDelegates@V_lambda_810c14b6a29fd984a078d93978f19614_@@U-$IEventHandler@PEAVAppMemoryUsa.c)
 *     ?remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800195A0 (-remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180001640 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001FC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180002174 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800117D0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x180018254 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        Microsoft::WRL::Details::EventTargetArray *a1,
        struct IUnknown *a2)
{
  __int64 v3; // rbx
  volatile int *v4; // rdx
  struct IUnknown **v5; // rcx
  bool v6; // r14
  __int64 v7; // r15
  RTL_SRWLOCK *v8; // r15
  int v9; // esi
  __int64 v11; // rax
  struct IUnknown **v12; // rsi
  void **v13; // r12
  __int64 v14; // r8
  __int64 v15; // r8
  PSRWLOCK v16[2]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+80h] [rbp+50h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+58h] BYREF

  v17 = a1;
  v3 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, &::SRWLock);
  if ( !Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0LL;
  }
  v5 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
  v6 = 0;
  v7 = *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24);
  v17 = 0LL;
  v8 = (RTL_SRWLOCK *)(((v7 - (__int64)v5) >> 3) - 1);
  v16[0] = v8;
  if ( !v8 )
  {
    v6 = *v5 == a2;
    goto LABEL_19;
  }
  v9 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
         &v17,
         (unsigned __int64 *)v16);
  if ( v9 >= 0 )
  {
    v11 = Windows::System::CMemoryManager::s_limitChangeEvent;
    v12 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
    v13 = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
    if ( v12 == *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 24) )
    {
LABEL_23:
      if ( v17 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
          (__int64)v17,
          v4);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      if ( v3 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3, v4);
      return 0LL;
    }
    do
    {
      if ( v6 || a2 != *v12 )
      {
        if ( !v8 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v17, *v12, *v13);
        v11 = Windows::System::CMemoryManager::s_limitChangeEvent;
        ++v13;
        v8 = (RTL_SRWLOCK *)((char *)v8 - 1);
      }
      else
      {
        v6 = 1;
      }
      ++v12;
    }
    while ( v12 != *(struct IUnknown ***)(v11 + 24) );
LABEL_19:
    if ( v6 )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v16, &stru_18002FCE8);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        &v18,
        (char *)&Windows::System::CMemoryManager::s_limitChangeEvent,
        v14);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        &Windows::System::CMemoryManager::s_limitChangeEvent,
        (char *)&v17,
        v15);
      if ( v16[0] )
        ReleaseSRWLockExclusive(v16[0]);
      v3 = v18;
    }
    goto LABEL_23;
  }
  if ( v17 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)v17,
      v4);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v9;
}
