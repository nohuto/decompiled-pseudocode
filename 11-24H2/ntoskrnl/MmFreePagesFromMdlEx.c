/*
 * XREFs of MmFreePagesFromMdlEx @ 0x1404B3F20
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall MmFreePagesFromMdlEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( (BugCheckParameter3 & 0xFFFFFFFE) != 0 || (*(_DWORD *)(BugCheckParameter2 + 40) & 0xFFF) != 0 )
    KeBugCheckEx(
      0x1Au,
      0x122EuLL,
      BugCheckParameter2,
      (unsigned int)BugCheckParameter3,
      *(unsigned int *)(BugCheckParameter2 + 40));
  return MiFreePagesFromMdl(BugCheckParameter2, BugCheckParameter3, 0, 0);
}
