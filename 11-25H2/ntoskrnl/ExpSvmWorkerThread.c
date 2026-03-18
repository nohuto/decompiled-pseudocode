/*
 * XREFs of ExpSvmWorkerThread @ 0x14064DBE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpSvmWorkerThread(unsigned int a1)
{
  char i; // bl
  __int64 result; // rax

  for ( i = 0; ; i = 1 )
  {
    do
      result = guard_dispatch_icall_no_overrides(a1);
    while ( (_BYTE)result );
    if ( i )
      break;
    _InterlockedExchange((volatile __int32 *)(104LL * a1 + ExpSvmWorkQueues + 96), 0);
  }
  return result;
}
