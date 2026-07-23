/*
 * XREFs of ExecuteHotpatchTestBootFunction @ 0x14051E8B8
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
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
