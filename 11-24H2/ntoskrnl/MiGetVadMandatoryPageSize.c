/*
 * XREFs of MiGetVadMandatoryPageSize @ 0x14044D544
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     MiCreateWriteWatchView @ 0x1408DC84C (MiCreateWriteWatchView.c)
 *     NtResetWriteWatch @ 0x140A31D20 (NtResetWriteWatch.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetVadMandatoryPageSize(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  result = MiVadPageSizes[(v1 >> 19) & 3];
  if ( result < 0x200 && (v1 & 0x800000) == 0 )
    return 1LL;
  return result;
}
