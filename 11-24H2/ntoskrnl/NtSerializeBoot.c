/*
 * XREFs of NtSerializeBoot @ 0x14082B310
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1405A0E5C (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
