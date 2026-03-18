/*
 * XREFs of IoDeleteDriver @ 0x140707F30
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObMakeTemporaryObject @ 0x1409AF2C0 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140A8B820 (EtwTiLogDriverObjectUnLoad.c)
 */

LONG_PTR __fastcall IoDeleteDriver(char *Object)
{
  EtwTiLogDriverObjectUnLoad(Object + 56);
  ObMakeTemporaryObject(Object);
  return ObfDereferenceObject(Object);
}
