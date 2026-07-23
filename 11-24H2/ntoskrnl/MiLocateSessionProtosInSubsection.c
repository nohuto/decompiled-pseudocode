/*
 * XREFs of MiLocateSessionProtosInSubsection @ 0x14033A020
 * Callers:
 *     MiGetImageProtoProtection @ 0x140339AF0 (MiGetImageProtoProtection.c)
 *     MiGetSharedProtosAtDpc @ 0x14041B454 (MiGetSharedProtosAtDpc.c)
 *     MiDereferenceSubsectionProtos @ 0x140A18924 (MiDereferenceSubsectionProtos.c)
 *     MiCreatePerSessionProtos @ 0x140A46C20 (MiCreatePerSessionProtos.c)
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
