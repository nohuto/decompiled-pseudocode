/*
 * XREFs of PsDereferencePrimaryToken @ 0x1409B0B30
 * Callers:
 *     DifIoDeleteControllerWrapper @ 0x140627AB0 (DifIoDeleteControllerWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
