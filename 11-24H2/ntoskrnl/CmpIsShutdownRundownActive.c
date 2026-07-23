/*
 * XREFs of CmpIsShutdownRundownActive @ 0x140BBBA84
 * Callers:
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 * Callees:
 *     <none>
 */

char CmpIsShutdownRundownActive()
{
  return CmpShutdownRundown.Count & 1;
}
