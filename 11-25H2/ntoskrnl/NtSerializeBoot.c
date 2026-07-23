/*
 * XREFs of NtSerializeBoot @ 0x14081ADA0
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1405A07AC (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
