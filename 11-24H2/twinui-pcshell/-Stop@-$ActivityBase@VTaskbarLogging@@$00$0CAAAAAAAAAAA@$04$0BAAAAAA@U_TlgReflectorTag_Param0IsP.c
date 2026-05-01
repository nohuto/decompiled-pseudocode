/*
 * XREFs of ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1806959A4
 * Callers:
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068B5F0 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18068B8B0 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068BCC0 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x18068C000 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001F62C (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800E3E94 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Provider@TaskbarLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180166F28 (-Provider@TaskbarLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180290748 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 *     ?SetStopResult@?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1802962AC (-SetStopResult@-$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 *a1)
{
  bool v2; // bl
  __int64 v3; // rcx
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  DWORD v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp-18h] BYREF

  v8 = 0;
  v10 = 0LL;
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &v10);
  v2 = wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         a1[34],
         0,
         (int *)&v8);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64 *))(*a1 + 8))(a1);
  }
  else
  {
    v4 = TaskbarLogging::Provider(v3);
    v5 = (__int64)v4;
    if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 0x200000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = a1[34];
      LODWORD(v10) = 0;
      v8 = CurrentThreadId;
      v9 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        byte_1807E06D1,
        (const GUID *)(v7 + 8),
        0LL,
        (__int64)&v9,
        (__int64)&v10,
        (__int64)&v8);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)a1);
}
