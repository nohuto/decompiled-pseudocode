/*
 * XREFs of CmpVolumeContextCleanup @ 0x140A9BCE4
 * Callers:
 *     CmpVolumeContextCreate @ 0x1407D8810 (CmpVolumeContextCreate.c)
 *     CmpVolumeContextFree @ 0x140A9BCC0 (CmpVolumeContextFree.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PiPagePathSetState @ 0x140722960 (PiPagePathSetState.c)
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
