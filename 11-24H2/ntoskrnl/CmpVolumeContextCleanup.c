/*
 * XREFs of CmpVolumeContextCleanup @ 0x140A97254
 * Callers:
 *     CmpVolumeContextCreate @ 0x1407D8D60 (CmpVolumeContextCreate.c)
 *     CmpVolumeContextFree @ 0x140A97230 (CmpVolumeContextFree.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PiPagePathSetState @ 0x1407204F0 (PiPagePathSetState.c)
 */

LONG_PTR __fastcall CmpVolumeContextCleanup(__int64 a1)
{
  struct _FILE_OBJECT **v1; // rbx
  LONG_PTR result; // rax

  v1 = (struct _FILE_OBJECT **)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) == 1 )
    result = PiPagePathSetState(*v1, 0);
  if ( *v1 )
    return ObfDereferenceObject(*v1);
  return result;
}
