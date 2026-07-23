/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x140A84ED8
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409213E0 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x140451008 (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1, 1);
}
