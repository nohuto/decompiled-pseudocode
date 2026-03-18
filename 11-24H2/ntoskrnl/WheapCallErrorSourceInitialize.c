/*
 * XREFs of WheapCallErrorSourceInitialize @ 0x14065D6D4
 * Callers:
 *     WheapInitializeDeferredErrorSources @ 0x14065B87C (WheapInitializeDeferredErrorSources.c)
 *     WheaAddErrorSource @ 0x1407C6980 (WheaAddErrorSource.c)
 *     WheaInitializeProcessor @ 0x140B61B24 (WheaInitializeProcessor.c)
 *     WheaInitialize @ 0x140C440FC (WheaInitialize.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14048B9BC (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceInitialize(__int64 a1, unsigned int a2)
{
  __int64 ErrorSourceFunction; // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // r9

  if ( *(_DWORD *)(a1 + 40) == 16 )
  {
    ErrorSourceFunction = WheapGetErrorSourceFunction(a1, 1, 0);
    result = 0LL;
    if ( ErrorSourceFunction )
      result = guard_dispatch_icall_no_overrides(
                 *(_QWORD *)(a1 + 56),
                 *(unsigned int *)(a1 + 124),
                 ErrorSourceFunction,
                 v5);
  }
  else
  {
    v7 = WheapGetErrorSourceFunction(a1, 1, 0);
    if ( v7 )
      result = guard_dispatch_icall_no_overrides(a2, a1 + 96, *(_QWORD *)(a1 + 56), v7);
    else
      result = 3221225474LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}
