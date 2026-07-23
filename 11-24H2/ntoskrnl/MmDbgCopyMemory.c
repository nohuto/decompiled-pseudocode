/*
 * XREFs of MmDbgCopyMemory @ 0x140680E78
 * Callers:
 *     KiTpWriteMemory @ 0x1405C6DC8 (KiTpWriteMemory.c)
 *     KdpReadPhysicalMemory @ 0x140B797D8 (KdpReadPhysicalMemory.c)
 *     KdpSearchMemory @ 0x140B79EF4 (KdpSearchMemory.c)
 *     KdpSearchPhysicalPage @ 0x140B7A0E8 (KdpSearchPhysicalPage.c)
 *     KdpCopyMemoryChunks @ 0x140B7CACC (KdpCopyMemoryChunks.c)
 * Callees:
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
 */

__int64 __fastcall MmDbgCopyMemory(char *a1, _BYTE *a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned int v10; // edi

  v6 = a3;
  if ( a4 > 2 && a4 != 4 && a4 != 8 )
    return 2147483650LL;
  result = 0LL;
  if ( a3 )
  {
    do
    {
      v10 = v6;
      if ( 4096 - ((unsigned __int16)a1 & 0xFFFu) <= v6 )
        v10 = 4096 - ((unsigned __int16)a1 & 0xFFF);
      result = MiDbgCopyMemory(a1, a2, v10, a4, a5);
      if ( (int)result < 0 )
        break;
      a1 += v10;
      a2 += v10;
      v6 -= v10;
    }
    while ( v6 );
  }
  return result;
}
