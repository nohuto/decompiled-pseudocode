/*
 * XREFs of HvlpQueryApicIdAndNumaNode @ 0x140584920
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140583AD8 (HvlStartBootLogicalProcessors.c)
 *     HvlpSelectLpSet @ 0x1405849F0 (HvlpSelectLpSet.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpQueryApicIdAndNumaNode(__int64 a1, _DWORD *a2, _WORD *a3, __int64 a4)
{
  __int64 v4; // rax
  _WORD *v5; // rbx
  __int64 result; // rax

  *a2 = -1;
  v4 = HvlpQueryProcessorNode;
  *a3 = -1;
  v5 = a3;
  if ( !v4 )
    a3 = 0LL;
  result = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( *v5 == 0xFFFF )
    *v5 = 0;
  return result;
}
