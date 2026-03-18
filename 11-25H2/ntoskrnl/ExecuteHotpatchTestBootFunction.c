/*
 * XREFs of ExecuteHotpatchTestBootFunction @ 0x14051E868
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
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
