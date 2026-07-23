/*
 * XREFs of VfMajorBuildIrpLogEntry @ 0x140B94E70
 * Callers:
 *     VfIrpLogRecordEvent @ 0x140B9D684 (VfIrpLogRecordEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorBuildIrpLogEntry(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // ebp
  __int64 v5; // rdx

  v2 = 0;
  v3 = a2;
  if ( qword_1410006E8 )
    v2 = guard_dispatch_icall_no_overrides(a1, a2);
  v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 184) - 72LL);
  if ( (unsigned int)v5 > 0x1B )
    v5 = (unsigned int)((_DWORD)v5 != 255) + 28;
  if ( qword_140FFFC68[12 * v5] )
    return (unsigned int)guard_dispatch_icall_no_overrides(a1, v3);
  return v2;
}
