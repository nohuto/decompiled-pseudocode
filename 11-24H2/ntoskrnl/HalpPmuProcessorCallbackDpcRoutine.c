/*
 * XREFs of HalpPmuProcessorCallbackDpcRoutine @ 0x140543760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpPmuProcessorCallbackDpcRoutine(__int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  __int64 result; // rax

  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 8), a2);
  if ( (int)result < 0 )
    *(_DWORD *)(a2 + 16) = result;
  _InterlockedIncrement(a3);
  return result;
}
