/*
 * XREFs of DesktopVerifyHeapRange @ 0x1C01BE0D8
 * Callers:
 *     NtUserSetWindowLong @ 0x1C00A75E0 (NtUserSetWindowLong.c)
 *     NtUserSetWindowLongPtr @ 0x1C00A7C20 (NtUserSetWindowLongPtr.c)
 * Callees:
 *     DesktopVerifyHeapPointer @ 0x1C0070958 (DesktopVerifyHeapPointer.c)
 */

ULONG_PTR __fastcall DesktopVerifyHeapRange(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v3; // rdi

  v3 = a2 + a3;
  if ( a2 + a3 < a2 )
    KeBugCheckEx(0x164u, 6uLL, a2, *(_QWORD *)(a1 + 136), *(unsigned int *)(a1 + 144));
  DesktopVerifyHeapPointer(a1, a2);
  return DesktopVerifyHeapPointer(a1, v3 - 1);
}
