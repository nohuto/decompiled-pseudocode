/*
 * XREFs of ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18008DC18
 * Callers:
 *     ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x18008E5D0 (-QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A4E0 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180033D08 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005E9A0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z @ 0x18005EB6C (--$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800602D0 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$MakeAndInitialize@VUniqueExtendedExecutionSession@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x18008C2CC (--$MakeAndInitialize@VUniqueExtendedExecutionSession@@UIInspectable@@$$V@Details@WRL@Microsoft@@.c)
 *     ?ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ @ 0x18008EA10 (-ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession(struct IInspectable **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 *v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+20h]
  struct IInspectable *v8; // [rsp+50h] [rbp+28h] BYREF
  struct IInspectable *v9; // [rsp+58h] [rbp+30h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+38h] BYREF
  RTL_SRWLOCK *v11; // [rsp+68h] [rbp+40h] BYREF

  *a1 = 0LL;
  AcquireSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v11 = &UniqueExtendedExecutionSession::s_extendedExecutionLock;
  v9 = 0LL;
  if ( UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession
    && (int)Microsoft::WRL::WeakRef::As<IInspectable>(
              (Microsoft::WRL::WeakRef *)&UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession,
              &v9) >= 0
    && v9 )
  {
    CDMUtilsUnlockTelemetry::ReusingExistingExtendedExecution();
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
    *a1 = v9;
LABEL_11:
    v3 = 0;
    goto LABEL_12;
  }
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<UniqueExtendedExecutionSession,IInspectable,>(&v8);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v10 = (__int64 *)&UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v10);
    v2 = Microsoft::WRL::AsWeak<IInspectable>(v8, v5);
    v3 = v2;
    if ( v2 >= 0 )
    {
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
      *a1 = v8;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
      goto LABEL_11;
    }
    v4 = 219LL;
  }
  else
  {
    v4 = 218LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
    (const char *)(unsigned int)v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  return v3;
}
