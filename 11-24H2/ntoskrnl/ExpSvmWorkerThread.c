/*
 * XREFs of ExpSvmWorkerThread @ 0x140659A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpSvmWorkerThread(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char i; // bl
  __int64 result; // rax

  for ( i = 0; ; i = 1 )
  {
    do
      result = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    while ( (_BYTE)result );
    if ( i )
      break;
    a2 = 104LL * a1;
    _InterlockedExchange((volatile __int32 *)(a2 + ExpSvmWorkQueues + 96), 0);
  }
  return result;
}
