/*
 * XREFs of SepGetSystemSigningLevel @ 0x140A69F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 SepGetSystemSigningLevel()
{
  __int64 result; // rax

  result = (unsigned __int8)SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    return (unsigned __int8)SeILSigningPolicyRuntime;
  return result;
}
