/*
 * XREFs of ?HandleAsyncEventInvoke@?$AsyncEventInvocationPolicy@$00@details@wil@@IEAAXAEAVsrwlock@3@AEAVAsyncEventWorkQueue@23@@Z @ 0x180409FB4
 * Callers:
 *     ?AsyncEventWorkCallback@?$EventInvocationContext@$00@details@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180408430 (-AsyncEventWorkCallback@-$EventInvocationContext@$00@details@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U?$default_delete@UAsyncEventWorkItemBase@details@wil@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017021C (--4-$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U-$default_delete@UAsyncEventWorkItemBase@d.c)
 *     ?reset@?$unique_ptr@VCThreadRefHost@@U?$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEAVCThreadRefHost@@@Z @ 0x18018A030 (-reset@-$unique_ptr@VCThreadRefHost@@U-$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEA.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801E5828 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::AsyncEventInvocationPolicy<1>::HandleAsyncEventInvoke(
        _BYTE *a1,
        RTL_SRWLOCK *a2,
        _QWORD *a3)
{
  char v4; // di
  void (__fastcall ***v8)(_QWORD, __int64); // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v9; // [rsp+28h] [rbp-8h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+68h] [rbp+38h] BYREF

  v8 = 0LL;
  v4 = 0;
  do
  {
    wil::AcquireSRWLockExclusive(&v9, a2);
    if ( *a3 )
    {
      v10 = 0LL;
      wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
        &v10,
        a3);
      wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
        (void (__fastcall ****)(_QWORD, __int64))a3,
        v10 + 1);
      if ( !*a3 )
        a3[1] = a3;
      wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
        &v8,
        &v10);
      wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))&v10,
        0LL);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &v9,
        0LL);
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64)))(*v8)[1])(v8);
      wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))&v8,
        0LL);
    }
    else
    {
      *a1 = 0;
      v4 = 1;
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
  }
  while ( !v4 );
  return wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(
           (__int64 (__fastcall ****)(_QWORD, __int64))&v8,
           0LL);
}
