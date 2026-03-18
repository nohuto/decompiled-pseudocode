/*
 * XREFs of VidMmGetAllocationSection @ 0x14010C4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmGetAllocationSection(__int64 **a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx

  v1 = **a1;
  v2 = *(_QWORD *)(v1 + 224);
  if ( v2 )
    ObfReferenceObject(*(PVOID *)(v1 + 224));
  return v2;
}
