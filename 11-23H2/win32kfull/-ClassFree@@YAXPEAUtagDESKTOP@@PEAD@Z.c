/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01BD8C8
 * Callers:
 *     InternalRegisterClassEx @ 0x1C00A9170 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1C00E05B0 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

void __fastcall ClassFree(PVOID *a1, char *a2)
{
  if ( a1 )
    RtlFreeHeap(a1[17], 0, a2);
  else
    Win32FreePool(a2);
}
