/*
 * XREFs of ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x1800306C0
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002EBC0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___::_scalar_deleting_destructor_ @ 0x180167760 (CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___--_scalar_deleting_destructo.c)
 *     _CApplicationViewManager::RaiseApplicationViewChanged_::_1_::dtor$0 @ 0x1806CB5C8 (_CApplicationViewManager--RaiseApplicationViewChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Provider@ApplicationViewManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180030CDC (-Provider@ApplicationViewManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??_GRefAndObject@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAPEAXI@Z @ 0x1800FFD04 (--_GRefAndObject@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflect.c)
 *     ?SetStopResult@?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801D4750 (-SetStopResult@-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8224 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802CF088 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange(
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *this)
{
  RTL_SRWLOCK *v1; // rbx
  char v3; // si
  _DWORD *v4; // rcx
  __int64 **v5; // rbx
  __int64 v6; // rax
  volatile signed __int32 *v7; // rcx
  volatile signed __int32 *v8; // rcx
  RTL_SRWLOCK *v9; // rbx
  volatile signed __int32 *v10; // rcx
  void *v11; // rbx
  HANDLE v12; // rax
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v17; // rdx
  const struct _tlgProvider_t *v18; // rax
  int v19; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v21; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)*((_QWORD *)this + 35);
  *(_QWORD *)this = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v3 = 1;
  if ( !v1 )
    goto LABEL_2;
  v9 = v1 + 33;
  AcquireSRWLockExclusive(v9);
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 35);
  if ( !v10 || *v10 != 1 )
  {
    v3 = 0;
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
      {
        v14 = (void *)*((_QWORD *)this + 35);
        if ( v14 )
          wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::`scalar deleting destructor'(v14);
      }
      *((_QWORD *)this + 35) = 0LL;
    }
  }
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  if ( v3 )
  {
LABEL_2:
    v4 = (_DWORD *)*((_QWORD *)this + 34);
    if ( *v4 == 1 )
    {
      v21 = v4[22];
      v17 = 2147942974LL;
      if ( v21 < 0 )
        v17 = (unsigned int)v21;
      wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v4,
        v17,
        &v21);
      (*(void (__fastcall **)(ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  v5 = (__int64 **)((char *)this + 288);
  if ( *((_DWORD *)this + 78) )
  {
    if ( *((_DWORD *)this + 78) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3BE,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        v19);
    *((_DWORD *)this + 78) = 0;
    while ( 1 )
    {
      v6 = **v5;
      if ( !v6 )
        break;
      if ( (__int64 **)v6 == v5 )
      {
        **v5 = *((_QWORD *)this + 38);
        break;
      }
      *v5 = (__int64 *)(v6 + 16);
    }
    *v5 = 0LL;
  }
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 35);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
    {
      v13 = (void *)*((_QWORD *)this + 35);
      if ( v13 )
        wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::`scalar deleting destructor'(v13);
    }
    *((_QWORD *)this + 35) = 0LL;
  }
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 30);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
    {
      v15 = (void *)*((_QWORD *)this + 30);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v15);
    }
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
  }
  if ( *((_BYTE *)this + 72) )
  {
    v11 = (void *)*((_QWORD *)this + 8);
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v11);
    *((_BYTE *)this + 72) = 0;
  }
  *((_QWORD *)this + 8) = 0LL;
  if ( *((_DWORD *)this + 2) == 1 )
  {
    *((_DWORD *)this + 2) = 2;
    v18 = ApplicationViewManagementLogging::Provider();
    _tlgWriteActivityAutoStop<0,5>(v18, (char *)this + 16);
  }
  *((_DWORD *)this + 2) = 3;
}
