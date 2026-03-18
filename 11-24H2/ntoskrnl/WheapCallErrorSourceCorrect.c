/*
 * XREFs of WheapCallErrorSourceCorrect @ 0x14065D694
 * Callers:
 *     WheapInitializeErrorSource @ 0x1407C6890 (WheapInitializeErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14048B9BC (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceCorrect(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax

  if ( WheapGetErrorSourceFunction(a1, 0, 0) )
    result = guard_dispatch_icall_no_overrides(a1 + 96, a1 + 68, v2, v3);
  else
    result = 3221225474LL;
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}
