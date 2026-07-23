/*
 * XREFs of PopGenerateMdl @ 0x1404CD380
 * Callers:
 *     PopAllocatePages @ 0x140B6FDEC (PopAllocatePages.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x140395340 (MmAllocatePagesForMdlEx.c)
 */

PMDL __fastcall PopGenerateMdl(__int64 a1)
{
  unsigned __int64 v2; // rdi
  PMDL PagesForMdl; // rax
  PMDL v4; // r8
  unsigned __int64 v5; // rax

  v2 = __rdtsc();
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, a1 << 12, MmCached, 0xDu);
  v4 = PagesForMdl;
  if ( PagesForMdl )
  {
    PagesForMdl->Next = *(struct _MDL **)(BugCheckParameter4 + 144);
    *(_QWORD *)(BugCheckParameter4 + 144) = PagesForMdl;
    *(_QWORD *)(BugCheckParameter4 + 152) += a1;
  }
  v5 = __rdtsc();
  qword_140F0BFC8 += (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - v2;
  return v4;
}
