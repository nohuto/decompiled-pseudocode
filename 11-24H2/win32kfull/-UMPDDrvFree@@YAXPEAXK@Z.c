/*
 * XREFs of ?UMPDDrvFree@@YAXPEAXK@Z @ 0x140212650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UMPDDrvFree(PVOID a1, int a2)
{
  if ( a1 && a1 >= MmSystemRangeStart && a2 == (_DWORD)a1 )
    Win32FreePool(a1);
}
