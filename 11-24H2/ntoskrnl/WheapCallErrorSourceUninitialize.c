/*
 * XREFs of WheapCallErrorSourceUninitialize @ 0x14065D74C
 * Callers:
 *     WheaRemoveErrorSource @ 0x1407C6C00 (WheaRemoveErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14048B9BC (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapCallErrorSourceUninitialize(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx

  if ( *(_DWORD *)(a1 + 40) != 16 )
  {
    v5 = 0;
    if ( !WheapGetErrorSourceFunction(a1, 4, 1) )
      return (unsigned int)-1073741822;
    goto LABEL_3;
  }
  v5 = 0;
  if ( WheapGetErrorSourceFunction(a1, 4, 1) )
LABEL_3:
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56), v2, v3, v4);
  return v5;
}
