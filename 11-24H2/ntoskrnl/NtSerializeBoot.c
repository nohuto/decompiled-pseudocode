/*
 * XREFs of NtSerializeBoot @ 0x14082AAE0
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1405A3F1C (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 */

__int64 NtSerializeBoot()
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return 3221225506LL;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return 3221225569LL;
}
