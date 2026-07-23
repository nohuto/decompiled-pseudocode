/*
 * XREFs of PsDereferencePrimaryToken @ 0x14099A5F0
 * Callers:
 *     DifIoDeleteControllerWrapper @ 0x140626070 (DifIoDeleteControllerWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
