/*
 * XREFs of IopExceptionFilter @ 0x140592C78
 * Callers:
 *     IopProcessBufferedIoCompletion @ 0x1402A2A40 (IopProcessBufferedIoCompletion.c)
 *     IopValidateAndGetWriteParameters @ 0x1402D3880 (IopValidateAndGetWriteParameters.c)
 *     NtSubmitIoRing @ 0x1404C5230 (NtSubmitIoRing.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x14070A748 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x14070AB08 (IopIoRingDispatchRegisterFiles.c)
 *     NtCreateIoRing @ 0x14070B060 (NtCreateIoRing.c)
 *     NtQueryIoRingCapabilities @ 0x14070B830 (NtQueryIoRingCapabilities.c)
 *     NtSetInformationIoRing @ 0x14070B8B0 (NtSetInformationIoRing.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     IopFlushBuffersFile @ 0x140938E14 (IopFlushBuffersFile.c)
 *     NtCopyFileChunk @ 0x140970910 (NtCopyFileChunk.c)
 *     IopReadFileScatter @ 0x140A89998 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A9170C (IopWriteFileGather.c)
 *     IopIoRingGetBuffer @ 0x140A94F98 (IopIoRingGetBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopExceptionFilter(int **a1, _DWORD *a2)
{
  int v2; // r8d

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 )
  {
    if ( (unsigned int)(*a1)[6] < 3 )
      return 1LL;
    v2 = (*a1)[12];
    *a2 = v2;
  }
  if ( v2 == -2147483646 )
    *a2 = -1073741115;
  return 1LL;
}
