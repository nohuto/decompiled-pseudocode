/*
 * XREFs of _NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP @ 0x1401E07D8
 * Callers:
 *     ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401E15EC (-NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP(void **a1)
{
  void *v1; // rcx
  LONG_PTR result; // rax

  v1 = *a1;
  if ( v1 )
    return ObfDereferenceObject(v1);
  return result;
}
