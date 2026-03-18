/*
 * XREFs of MiLocateSessionProtosInSubsection @ 0x1403E0D5C
 * Callers:
 *     MiGetSharedProtosAtDpc @ 0x1403E0B9C (MiGetSharedProtosAtDpc.c)
 *     MiGetImageProtoProtection @ 0x1403E0BF0 (MiGetImageProtoProtection.c)
 *     MiCreatePerSessionProtos @ 0x1409046C4 (MiCreatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140A1D2D4 (MiDereferenceSubsectionProtos.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiLocateSessionProtosInSubsection(__int64 a1, unsigned int a2)
{
  __int64 *result; // rax

  result = *(__int64 **)(a1 + 24);
  while ( result )
  {
    if ( a2 > *((_DWORD *)result + 16) )
    {
      result = (__int64 *)result[1];
    }
    else
    {
      if ( a2 >= *((_DWORD *)result + 16) )
        return result;
      result = (__int64 *)*result;
    }
  }
  return result;
}
