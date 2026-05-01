/*
 * XREFs of _lambda_c561e33f7b9b6a5cc88742f5f6590796_::__lambda_c561e33f7b9b6a5cc88742f5f6590796_ @ 0x180301464
 * Callers:
 *     ?_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x180205320 (-_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_C.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___::_CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___ @ 0x180301544 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___--_CTask.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c561e33f7b9b6a5cc88742f5f6590796_::__lambda_c561e33f7b9b6a5cc88742f5f6590796_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[1];
  if ( v2 )
  {
    a1[1] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
