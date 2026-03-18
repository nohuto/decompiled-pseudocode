/*
 * XREFs of PipIsProviderStarted @ 0x140712750
 * Callers:
 *     IoResolveDependency @ 0x1404BA310 (IoResolveDependency.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140832AB0 (PipCheckForUnsatisfiedDependencies.c)
 * Callees:
 *     <none>
 */

char __fastcall PipIsProviderStarted(__int64 a1)
{
  char result; // al

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x30A:
    case 0x30E:
    case 0x30F:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
