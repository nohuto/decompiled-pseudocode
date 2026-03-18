/*
 * XREFs of VfMajorBuildIrpLogEntry @ 0x140B92E70
 * Callers:
 *     VfIrpLogRecordEvent @ 0x140B9B684 (VfIrpLogRecordEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorBuildIrpLogEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  unsigned int v7; // ebp
  __int64 v9; // rdx

  v4 = 0;
  v7 = a2;
  if ( qword_140FFF6E8 )
    v4 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 184) - 72LL);
  if ( (unsigned int)v9 > 0x1B )
    v9 = (unsigned int)((_DWORD)v9 != 255) + 28;
  if ( qword_140FFEC68[12 * v9] )
    return (unsigned int)guard_dispatch_icall_no_overrides(a1, v7, a3, a4);
  return v4;
}
