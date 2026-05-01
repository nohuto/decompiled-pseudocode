/*
 * XREFs of _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::operator() @ 0x180045DD0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run @ 0x1801FEFD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--Run.c)
 * Callees:
 *     NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x1800458DC (NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180045CD8 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_5f803f865b4b07caa2d72f9fc7ffab60_::operator()(volatile signed __int32 **a1)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // r9
  __int64 v5; // rcx
  volatile signed __int32 *v6; // r8
  signed __int32 v7; // eax
  volatile signed __int32 *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (RTL_SRWLOCK *)(*a1 + 28);
  AcquireSRWLockExclusive(v2);
  v3 = *((_QWORD *)*a1 + 22);
  if ( v3 )
  {
    *((_QWORD *)*a1 + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *a1;
  v5 = *((_QWORD *)*a1 + 13);
  v6 = a1[1];
  v8[0] = v6;
  if ( v6 )
  {
    do
      v7 = *((_DWORD *)v6 + 17);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange(v6 + 17, v7 + 1, v7) );
  }
  v8[1] = v4;
  NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___(v5, (__int64 *)v8);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(v8);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
