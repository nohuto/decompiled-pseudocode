/*
 * XREFs of PipIsProviderStarted @ 0x14071E850
 * Callers:
 *     IoResolveDependency @ 0x1404B9270 (IoResolveDependency.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140A0F844 (PipCheckForUnsatisfiedDependencies.c)
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
