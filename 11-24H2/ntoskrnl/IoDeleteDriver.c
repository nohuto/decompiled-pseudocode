/*
 * XREFs of IoDeleteDriver @ 0x140711BC0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObMakeTemporaryObject @ 0x1409B9330 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140A8CCB0 (EtwTiLogDriverObjectUnLoad.c)
 */

LONG_PTR __fastcall IoDeleteDriver(char *Object)
{
  EtwTiLogDriverObjectUnLoad(Object + 56);
  ObMakeTemporaryObject(Object);
  return ObfDereferenceObject(Object);
}
