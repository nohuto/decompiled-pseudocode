/*
 * XREFs of ?TryReadBool@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEA_N@Z @ 0x14027E7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1403D2404 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorDataStore::TryReadBool(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  __int64 result; // rax
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = 0;
  result = DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(a1, a2, a3, v6);
  if ( (_BYTE)result )
    *a4 = v6[0] != 0;
  return result;
}
