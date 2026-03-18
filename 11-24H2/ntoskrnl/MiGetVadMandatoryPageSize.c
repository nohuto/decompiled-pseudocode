/*
 * XREFs of MiGetVadMandatoryPageSize @ 0x140458234
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiCreateWriteWatchView @ 0x1409C39A4 (MiCreateWriteWatchView.c)
 *     NtResetWriteWatch @ 0x140A3C540 (NtResetWriteWatch.c)
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
