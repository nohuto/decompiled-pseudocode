/*
 * XREFs of MiInitializeImageExtents @ 0x1407E04B8
 * Callers:
 *     MiEnableImageDirectMap @ 0x14066F168 (MiEnableImageDirectMap.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140215A04 (MiGetCommittedPages.c)
 *     MiDeleteSegmentPages @ 0x14044A758 (MiDeleteSegmentPages.c)
 *     MiCreatePerSessionProtos @ 0x1409046C4 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140A1D1D8 (MiDereferencePerSessionProtos.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiInitializeImageExtents(__int64 a1)
{
  __int64 result; // rax
  int FileExtents; // esi
  ULONG_PTR i; // rdi
  __int64 CommittedPages; // rdi

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) == 0
    || (result = MiCreatePerSessionProtos(a1, 0xFFFFFFFFLL), (int)result >= 0) )
  {
    FileExtents = 0;
    for ( i = a1 + 128; i; i = *(_QWORD *)(i + 16) )
    {
      FileExtents = MiAllocateFileExtents(i, 0, -1);
      if ( FileExtents < 0 )
      {
        CommittedPages = MiGetCommittedPages((_QWORD *)a1);
        if ( CommittedPages )
          *(_QWORD *)(*(_QWORD *)a1 + 16LL) = 0LL;
        MiDeleteSegmentPages((_QWORD *)a1);
        if ( CommittedPages )
          *(_QWORD *)(*(_QWORD *)a1 + 16LL) = CommittedPages;
        break;
      }
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
      MiDereferencePerSessionProtos(a1, 0xFFFFFFFFLL);
    return (unsigned int)FileExtents;
  }
  return result;
}
