/*
 * XREFs of Isoch_DoesDriverOwnRequests @ 0x14003CCC4
 * Callers:
 *     Isoch_ProcessTransferCompletion @ 0x14004CCC0 (Isoch_ProcessTransferCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall Isoch_DoesDriverOwnRequests(_QWORD *a1)
{
  return (_QWORD *)a1[49] != a1 + 49 || (_QWORD *)a1[51] != a1 + 51 || (_QWORD *)a1[53] != a1 + 53;
}
