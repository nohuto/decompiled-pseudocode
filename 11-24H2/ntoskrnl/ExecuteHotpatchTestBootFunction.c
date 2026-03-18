/*
 * XREFs of ExecuteHotpatchTestBootFunction @ 0x140520FE8
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

int *ExecuteHotpatchTestBootFunction()
{
  int *result; // rax

  result = &BootGlobal;
  if ( &BootGlobal == (int *)16 )
    BootGlobal = 10;
  BootGlobal = 0;
  return result;
}
