/*
 * XREFs of ObpDirectoryTeardownCallback @ 0x14082B060
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceDeviceMap @ 0x1409855D4 (ObDereferenceDeviceMap.c)
 *     ObMakeTemporaryObject @ 0x140A68350 (ObMakeTemporaryObject.c)
 */

LONG_PTR __fastcall ObpDirectoryTeardownCallback(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  ObMakeTemporaryObject(*(PVOID *)a1);
  result = ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x7254624Fu);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    return ObDereferenceDeviceMap(v3);
  return result;
}
