/*
 * XREFs of HvlpQueryApicIdAndNumaNode @ 0x140581170
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140580328 (HvlStartBootLogicalProcessors.c)
 *     HvlpSelectLpSet @ 0x140581240 (HvlpSelectLpSet.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpQueryApicIdAndNumaNode(__int64 a1, _DWORD *a2, _WORD *a3)
{
  __int64 result; // rax

  *a2 = -1;
  *a3 = -1;
  result = guard_dispatch_icall_no_overrides(a1);
  if ( *a3 == 0xFFFF )
    *a3 = 0;
  return result;
}
