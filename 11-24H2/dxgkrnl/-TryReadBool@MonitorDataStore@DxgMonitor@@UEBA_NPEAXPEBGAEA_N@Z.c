/*
 * XREFs of ?TryReadBool@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEA_N@Z @ 0x14027E770
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z @ 0x1403D2594 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorDataStore::TryReadBool(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        bool *a4)
{
  __int64 result; // rax
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = 0;
  result = DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(this, a2, a3, v6);
  if ( (_BYTE)result )
    *a4 = v6[0] != 0;
  return result;
}
