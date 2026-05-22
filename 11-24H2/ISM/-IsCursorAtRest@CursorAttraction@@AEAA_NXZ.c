/*
 * XREFs of ?IsCursorAtRest@CursorAttraction@@AEAA_NXZ @ 0x1801A40F8
 * Callers:
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1801A3D8C (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 * Callees:
 *     operator__ @ 0x1801A3D70 (operator__.c)
 */

char __fastcall CursorAttraction::IsCursorAtRest(CursorAttraction *this)
{
  CursorAttraction *v1; // r10
  unsigned int v2; // r9d
  unsigned int i; // ecx
  unsigned int v4; // r11d

  v1 = this;
  v2 = (*((_DWORD *)this + 12) + 1) % 0xAu;
  for ( i = v2; i - v2 < 9; i = v4 )
  {
    if ( operator__((_DWORD *)v1 + 2 * ((i + 1) % 0xA) + 13, (_DWORD *)v1 + 2 * (i % 0xA) + 13) )
      return 0;
  }
  return 1;
}
