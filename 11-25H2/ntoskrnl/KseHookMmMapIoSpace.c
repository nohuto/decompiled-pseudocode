/*
 * XREFs of KseHookMmMapIoSpace @ 0x1405C79B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseHookMmMapIoSpace(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = __readcr3();
  if ( ((a1 ^ v1) & 0xFFFFFFFFFFFFF000uLL) == 0 && (a1 & 3) != 0 )
    a1 &= 0xFFFFFFFFFFFFFFFCuLL;
  return guard_dispatch_icall_no_overrides(a1);
}
