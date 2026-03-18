/*
 * XREFs of MiLocateSessionProtosInSubsection @ 0x140210CC0
 * Callers:
 *     MiGetImageProtoProtection @ 0x140210790 (MiGetImageProtoProtection.c)
 *     MiGetSharedProtosAtDpc @ 0x1404272D0 (MiGetSharedProtosAtDpc.c)
 *     MiDereferenceSubsectionProtos @ 0x140A24554 (MiDereferenceSubsectionProtos.c)
 *     MiCreatePerSessionProtos @ 0x140A4FE70 (MiCreatePerSessionProtos.c)
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
