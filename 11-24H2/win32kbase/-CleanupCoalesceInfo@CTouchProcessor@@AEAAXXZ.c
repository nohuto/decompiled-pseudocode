/*
 * XREFs of ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x140152E4C
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1400D0A6C (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1401FEA6C (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall CTouchProcessor::CleanupCoalesceInfo(CTouchProcessor *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    GreDeleteFastMutex(v2);
    *((_QWORD *)this + 19) = 0LL;
    *((_DWORD *)this + 36) = 0;
  }
}
