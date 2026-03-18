/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x140A849C4
 * Callers:
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x14090B050 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x14045CFAC (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1, 1);
}
