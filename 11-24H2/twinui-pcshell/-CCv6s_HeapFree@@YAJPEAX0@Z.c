/*
 * XREFs of ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x180683154
 * Callers:
 *     Str_SetPtrW @ 0x180683190 (Str_SetPtrW.c)
 *     _DSA_MergeSort @ 0x1806834E4 (_DSA_MergeSort.c)
 *     DSA_DeleteAllItems @ 0x180683740 (DSA_DeleteAllItems.c)
 *     DSA_Destroy @ 0x180683798 (DSA_Destroy.c)
 *     DPA_Destroy @ 0x1806C9B80 (DPA_Destroy.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CCv6s_HeapFree(void *a1, void *a2)
{
  BOOL v2; // eax
  unsigned int v3; // ecx

  v2 = HeapFree(a1, 0, a2);
  v3 = 0;
  if ( !v2 )
    return (unsigned int)ResultFromKnownLastError();
  return v3;
}
