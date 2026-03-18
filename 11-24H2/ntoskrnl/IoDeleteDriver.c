/*
 * XREFs of IoDeleteDriver @ 0x140714030
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObMakeTemporaryObject @ 0x140A68350 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140A905B4 (EtwTiLogDriverObjectUnLoad.c)
 */

LONG_PTR __fastcall IoDeleteDriver(char *Object)
{
  EtwTiLogDriverObjectUnLoad(Object + 56);
  ObMakeTemporaryObject(Object);
  return ObfDereferenceObject(Object);
}
