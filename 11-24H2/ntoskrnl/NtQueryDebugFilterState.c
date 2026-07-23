/*
 * XREFs of NtQueryDebugFilterState @ 0x14044E6B0
 * Callers:
 *     DbgQueryDebugFilterState @ 0x1405E4CB0 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  ULONG v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rax

  v2 = 3;
  if ( ComponentId < 0x9C )
    v2 = Level;
  v3 = 101LL;
  if ( ComponentId < 0x9C )
    v3 = ComponentId;
  if ( v2 <= 0x1F )
    v2 = 1 << v2;
  if ( (v2 & Kd_WIN2000_Mask) != 0 )
    LODWORD(v4) = 1;
  else
    return (v2 & *(_DWORD *)*(&KdComponentTable + v3)) != 0;
  return v4;
}
