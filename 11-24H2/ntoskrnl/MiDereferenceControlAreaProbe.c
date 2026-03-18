/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x14036F6B4
 * Callers:
 *     MiProbeUnlockPage @ 0x14028A3B0 (MiProbeUnlockPage.c)
 *     MiSegmentDelete @ 0x140A131E4 (MiSegmentDelete.c)
 * Callees:
 *     MiQueueControlAreaDelete @ 0x14036F638 (MiQueueControlAreaDelete.c)
 *     MiDeleteControlArea @ 0x14036F6E8 (MiDeleteControlArea.c)
 */

int __fastcall MiDereferenceControlAreaProbe(volatile signed __int64 *a1, int a2)
{
  signed __int64 v2; // rax

  v2 = _InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v2 == 1 )
  {
    if ( a2 )
      LODWORD(v2) = MiQueueControlAreaDelete((__int64)a1);
    else
      LODWORD(v2) = MiDeleteControlArea((PVOID)a1);
  }
  return v2;
}
