/*
 * XREFs of ?ReadDWordWithDefault@MonitorDataStore@DxgMonitor@@UEBAKPEAXPEBGK@Z @ 0x140277240
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z @ 0x1403D9384 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorDataStore::ReadDWordWithDefault(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  v6 = a4;
  if ( (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(this, a2, a3, &v6) )
    return v6;
  return v4;
}
