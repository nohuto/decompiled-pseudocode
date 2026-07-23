/*
 * XREFs of MiLockPagableSections @ 0x140C4A60C
 * Callers:
 *     MiCancelPhase0Locking @ 0x140A3A4A0 (MiCancelPhase0Locking.c)
 *     MiEnablePagingOfDriver @ 0x140C3D810 (MiEnablePagingOfDriver.c)
 *     MiUnlockBootPageSections @ 0x140C4AA80 (MiUnlockBootPageSections.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14036E040 (MiLockPagableImageSection.c)
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     MiImagePagable @ 0x1407D7EB0 (MiImagePagable.c)
 *     MmImageSectionPagable @ 0x140A39FCC (MmImageSectionPagable.c)
 */

__int64 __fastcall MiLockPagableSections(__int64 a1, unsigned int a2)
{
  void *v2; // rbx
  __int64 result; // rax
  int NumberOfSections; // edi
  char *v7; // rbx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(void **)(a1 + 48);
  result = MiImagePagable(a1, (unsigned __int64)v2);
  if ( result )
  {
    OutHeaders = 0LL;
    RtlImageNtHeaderEx(1u, v2, 0LL, &OutHeaders);
    result = OutHeaders->FileHeader.SizeOfOptionalHeader;
    NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
    v7 = (char *)&OutHeaders->OptionalHeader + result;
    if ( OutHeaders->FileHeader.NumberOfSections )
    {
      do
      {
        result = MmImageSectionPagable((__int64)v7);
        if ( (_DWORD)result )
          result = MiLockPagableImageSection(a1, (unsigned __int64)v7, a2);
        v7 += 40;
        --NumberOfSections;
      }
      while ( NumberOfSections );
    }
  }
  return result;
}
