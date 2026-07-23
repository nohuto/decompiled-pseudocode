/*
 * XREFs of IaaCodeValuesSort @ 0x140665740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IaaCodeValuesSort(_WORD *a1, _WORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
