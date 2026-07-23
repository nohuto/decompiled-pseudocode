/*
 * XREFs of KdpCopyMemoryChunks @ 0x140B7CACC
 * Callers:
 *     KdpSetCommonState @ 0x1404CF704 (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x1407383E0 (KdSystemDebugControl.c)
 *     KdpCreateRemoteFile @ 0x140B78920 (KdpCreateRemoteFile.c)
 *     KdpFillMemory @ 0x140B79108 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x140B797D8 (KdpReadPhysicalMemory.c)
 *     KdpReadVirtualMemory @ 0x140B799E8 (KdpReadVirtualMemory.c)
 *     KdpReportCommandStringStateChange @ 0x140B79AAC (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140B79C44 (KdpReportLoadSymbolsStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x140B79D80 (KdpRestoreBreakPointEx.c)
 *     KdpWriteBreakPointEx @ 0x140B7A6D4 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x140B7AB00 (KdpWritePhysicalMemory.c)
 *     KdpWriteVirtualMemory @ 0x140B7ABA0 (KdpWriteVirtualMemory.c)
 *     KdLogDbgPrint @ 0x140B7AC20 (KdLogDbgPrint.c)
 *     KdpCopyCodeStream @ 0x140B7B30C (KdpCopyCodeStream.c)
 *     KdpSysReadControlSpace @ 0x140B7B658 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140B7B740 (KdpSysWriteControlSpace.c)
 *     KdpPrintString @ 0x140B7BCE8 (KdpPrintString.c)
 *     KdpPromptString @ 0x140B7BDE0 (KdpPromptString.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x140680E78 (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpCopyMemoryChunks(char *a1, _BYTE *a2, unsigned int a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned int v6; // ebp
  unsigned int v10; // edi
  unsigned int i; // ebx
  unsigned int v12; // edx

  v6 = 8;
  if ( a4 <= 8 )
  {
    v6 = a4;
    if ( !a4 )
      v6 = 4;
  }
  v10 = a3;
  for ( i = 1; v10; v10 -= i )
  {
    if ( i < v6 )
    {
      do
      {
        v12 = 2 * i;
        if ( 2 * i > v10 )
          break;
        if ( ((2 * i - 1) & (unsigned int)a1) != 0 )
          break;
        i *= 2;
      }
      while ( v12 < v6 );
    }
    while ( i > v10 )
      i >>= 1;
    if ( (int)MmDbgCopyMemory(a1, a2, i, i, a5) < 0 )
      break;
    a1 += i;
    a2 += i;
  }
  if ( a6 )
    *a6 = a3 - v10;
  return v10 != 0 ? 0xC0000001 : 0;
}
