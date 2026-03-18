/*
 * XREFs of NtSerializeBoot @ 0x14081ADA0
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1405A07AC (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 */

__int64 NtSerializeBoot()
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return 3221225506LL;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return 3221225569LL;
}
