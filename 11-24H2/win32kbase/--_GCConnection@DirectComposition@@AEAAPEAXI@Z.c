/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x140222888
 * Callers:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionGetFrameStatistics @ 0x1400BA540 (NtDCompositionGetFrameStatistics.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1400E1B98 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 */

char **__fastcall DirectComposition::CConnection::`scalar deleting destructor'(char **Buffer)
{
  DirectComposition::CConnection::~CConnection(Buffer);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
