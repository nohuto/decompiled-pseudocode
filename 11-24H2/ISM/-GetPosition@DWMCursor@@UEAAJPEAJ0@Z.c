/*
 * XREFs of ?GetPosition@DWMCursor@@UEAAJPEAJ0@Z @ 0x1801C84F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::GetPosition(DWMCursor *this, int *a2, int *a3)
{
  *a2 = *((_DWORD *)this + 20);
  *a3 = *((_DWORD *)this + 21);
  return 0LL;
}
