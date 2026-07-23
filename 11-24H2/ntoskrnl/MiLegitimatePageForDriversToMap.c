/*
 * XREFs of MiLegitimatePageForDriversToMap @ 0x14041DB10
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14041D8B0 (MmMapLockedPagesWithReservedMapping.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A23700 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     MiGetPageTablePfnBuddyRaw @ 0x1402FB220 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14041DC14 (MiGetPfnPageSizeIndexUnsynchronized.c)
 */

__int64 __fastcall MiLegitimatePageForDriversToMap(__int64 a1)
{
  unsigned __int64 v1; // rdx
  PEPROCESS PageTablePfnBuddyRaw; // rax
  struct _KPROCESS *v4; // r9
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *(__int64 *)(a1 + 40) < 0 )
    return 0LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
  {
    v5 = 0;
    v6 = 0;
    if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(a1, &v5, &v6) == 3 || v5 != 6 )
      return 3221225496LL;
    return 0LL;
  }
  v1 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  if ( v1 < 0xFFFFF68000000000uLL
    || v1 > 0xFFFFF6FFFFFFFFFFuLL
    || (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL
    || (*(_DWORD *)(a1 + 32) & 0x200000) != 0
    && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && (unsigned __int16)*(_DWORD *)(a1 + 32) )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0x80000) != 0 )
    return 0LL;
  PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(a1);
  if ( PageTablePfnBuddyRaw == v4 )
    return 0LL;
  return 3221225496LL;
}
