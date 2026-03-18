/*
 * XREFs of PsDereferencePrimaryToken @ 0x1409C2CB0
 * Callers:
 *     DifIoDeleteControllerWrapper @ 0x14061BAF0 (DifIoDeleteControllerWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
