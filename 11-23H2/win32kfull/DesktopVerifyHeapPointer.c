/*
 * XREFs of DesktopVerifyHeapPointer @ 0x1C0070958
 * Callers:
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00708E4 (DesktopVerifyHeapLargeUnicodeString.c)
 *     DesktopVerifyHeapRange @ 0x1C01BE0D8 (DesktopVerifyHeapRange.c)
 * Callees:
 *     <none>
 */

ULONG_PTR __fastcall DesktopVerifyHeapPointer(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR result; // rax

  v2 = *(_QWORD *)(a1 + 136);
  if ( a2 < v2 || (result = v2 + *(unsigned int *)(a1 + 144), a2 >= result) )
    KeBugCheckEx(0x164u, 6uLL, a2, v2, *(unsigned int *)(a1 + 144));
  return result;
}
