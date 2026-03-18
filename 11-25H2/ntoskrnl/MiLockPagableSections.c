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
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  int v6; // edi
  unsigned __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  result = MiImagePagable(a1, v2);
  if ( result )
  {
    v8 = 0LL;
    RtlImageNtHeaderEx(1, v2, 0LL, &v8);
    result = *(unsigned __int16 *)(v8 + 20);
    v6 = *(unsigned __int16 *)(v8 + 6);
    v7 = result + v8 + 24;
    if ( *(_WORD *)(v8 + 6) )
    {
      do
      {
        result = MmImageSectionPagable(v7);
        if ( (_DWORD)result )
          result = MiLockPagableImageSection(a1, v7, a2);
        v7 += 40LL;
        --v6;
      }
      while ( v6 );
    }
  }
  return result;
}
