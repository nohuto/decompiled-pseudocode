/*
 * XREFs of MiLegitimatePageForDriversToMap @ 0x1404336D0
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140433470 (MmMapLockedPagesWithReservedMapping.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBuffer @ 0x140A28F1C (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A29238 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     MiGetPageTablePfnBuddyRaw @ 0x1402C9D00 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1404337D0 (MiGetPfnPageSizeIndexUnsynchronized.c)
 */

__int64 __fastcall MiLegitimatePageForDriversToMap(__int64 a1)
{
  unsigned __int64 v1; // rdx
  PEPROCESS PageTablePfnBuddyRaw; // rax
  struct _KPROCESS *v4; // r9
  int PfnPageSizeIndexUnsynchronized; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  if ( *(__int64 *)(a1 + 40) < 0 )
    return 0LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) == 0 )
  {
    v1 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
    if ( v1 >= 0xFFFFF68000000000uLL
      && v1 <= 0xFFFFF6FFFFFFFFFFuLL
      && (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
      && ((*(_DWORD *)(a1 + 32) & 0x200000) == 0
       || (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
       || !(unsigned __int16)*(_DWORD *)(a1 + 32))
      && (*(_DWORD *)(a1 + 32) & 0x80000) == 0 )
    {
      PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(a1);
      if ( PageTablePfnBuddyRaw != v4 )
        return 3221225496LL;
    }
    return 0LL;
  }
  v6 = 0;
  v7 = 0;
  PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(a1, &v6, &v7);
  if ( v6 == 6 && PfnPageSizeIndexUnsynchronized != 3 )
    return 0LL;
  return 3221225496LL;
}
