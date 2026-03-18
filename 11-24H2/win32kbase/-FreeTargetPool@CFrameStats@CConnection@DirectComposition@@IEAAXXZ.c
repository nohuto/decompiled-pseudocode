/*
 * XREFs of ?FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ @ 0x1400E1C78
 * Callers:
 *     ??1CFrameStats@CConnection@DirectComposition@@QEAA@XZ @ 0x1400E1C60 (--1CFrameStats@CConnection@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CConnection::CFrameStats::FreeTargetPool(
        DirectComposition::CConnection::CFrameStats *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    if ( v2 != (char *)this + 48 )
    {
      GreDeleteFastMutex(v2);
      *((_QWORD *)this + 5) = 0LL;
    }
  }
}
