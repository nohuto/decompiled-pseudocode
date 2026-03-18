/*
 * XREFs of CmpVolumeContextCleanup @ 0x1409F4E04
 * Callers:
 *     CmpVolumeContextCreate @ 0x1407C9020 (CmpVolumeContextCreate.c)
 *     CmpVolumeContextFree @ 0x1409F4DE0 (CmpVolumeContextFree.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PiPagePathSetState @ 0x140716860 (PiPagePathSetState.c)
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
