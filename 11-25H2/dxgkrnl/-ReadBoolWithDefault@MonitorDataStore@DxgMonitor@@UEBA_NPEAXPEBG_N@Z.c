/*
 * XREFs of ?ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBG_N@Z @ 0x140277200
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z @ 0x1403D9384 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z.c)
 */

bool __fastcall DxgMonitor::MonitorDataStore::ReadBoolWithDefault(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        unsigned __int8 a4)
{
  int v4; // ebx
  int v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  v6 = a4;
  if ( (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(this, a2, a3, &v6) )
    v4 = v6;
  return v4 != 0;
}
