/*
 * XREFs of WheapCallErrorSourceInitialize @ 0x14065BDF4
 * Callers:
 *     WheapInitializeDeferredErrorSources @ 0x140659F9C (WheapInitializeDeferredErrorSources.c)
 *     WheaAddErrorSource @ 0x1407C6DE0 (WheaAddErrorSource.c)
 *     WheaInitializeProcessor @ 0x140B63BF4 (WheaInitializeProcessor.c)
 *     WheaInitialize @ 0x140C4624C (WheaInitialize.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14048678C (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceInitialize(__int64 a1, unsigned int a2)
{
  __int64 ErrorSourceFunction; // r8
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 40) == 16 )
  {
    ErrorSourceFunction = WheapGetErrorSourceFunction(a1, 1, 0);
    result = 0LL;
    if ( ErrorSourceFunction )
      result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 124));
  }
  else if ( WheapGetErrorSourceFunction(a1, 1, 0) )
  {
    result = guard_dispatch_icall_no_overrides(a2, a1 + 96);
  }
  else
  {
    result = 3221225474LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}
