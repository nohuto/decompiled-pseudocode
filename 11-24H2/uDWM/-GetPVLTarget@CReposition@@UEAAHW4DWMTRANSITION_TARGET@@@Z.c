/*
 * XREFs of ?GetPVLTarget@CReposition@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800D20E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CReposition::GetPVLTarget(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  _DWORD *v4; // r9

  v2 = -1;
  v3 = 0;
  v4 = &`CReposition::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable;
  while ( !v3 )
  {
    if ( ((*v4 ^ a2) & 0xFFF) == 0 )
      return *((unsigned int *)&`CReposition::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable + 1);
    v3 = 1;
    v4 += 2;
  }
  return v2;
}
