/*
 * XREFs of MiInitializeImageExtents @ 0x1407F0928
 * Callers:
 *     MiEnableImageDirectMap @ 0x14067BB08 (MiEnableImageDirectMap.c)
 * Callees:
 *     MiDeleteSegmentPages @ 0x140203D4C (MiDeleteSegmentPages.c)
 *     MiGetCommittedPages @ 0x140204018 (MiGetCommittedPages.c)
 *     MiDereferencePerSessionProtos @ 0x140A18828 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x140A46C20 (MiCreatePerSessionProtos.c)
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
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
        MiDeleteSegmentPages(a1);
        if ( CommittedPages )
          *(_QWORD *)(*(_QWORD *)a1 + 16LL) = CommittedPages;
        break;
      }
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
      MiDereferencePerSessionProtos(a1);
    return (unsigned int)FileExtents;
  }
  return result;
}
