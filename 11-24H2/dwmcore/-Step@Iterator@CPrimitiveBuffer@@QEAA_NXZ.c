/*
 * XREFs of ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x1801F032C
 * Callers:
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180172CD0 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x18024FA1C (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CPrimitiveBuffer::Iterator::Step(CPrimitiveBuffer::Iterator *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 == *((_QWORD *)this + 2) )
    return 0;
  *((_QWORD *)this + 1) = v1 + *((unsigned int *)this + 6);
  return 1;
}
