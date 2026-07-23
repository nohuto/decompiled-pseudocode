/*
 * XREFs of WheapCallErrorSourceUninitialize @ 0x14065BE6C
 * Callers:
 *     WheaRemoveErrorSource @ 0x1407C7080 (WheaRemoveErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14048678C (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceUninitialize(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  if ( *(_DWORD *)(a1 + 40) != 16 )
  {
    v3 = 0;
    if ( !WheapGetErrorSourceFunction(a1, 4, 1) )
      return (unsigned int)-1073741822;
    goto LABEL_3;
  }
  v3 = 0;
  if ( WheapGetErrorSourceFunction(a1, 4, 1) )
LABEL_3:
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56), v2);
  return v3;
}
