/*
 * XREFs of IopExceptionFilter @ 0x140593308
 * Callers:
 *     IopProcessBufferedIoCompletion @ 0x1403B4A40 (IopProcessBufferedIoCompletion.c)
 *     IopValidateAndGetWriteParameters @ 0x1403FB3F0 (IopValidateAndGetWriteParameters.c)
 *     NtSubmitIoRing @ 0x1404BEE40 (NtSubmitIoRing.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x1407143D8 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x140714798 (IopIoRingDispatchRegisterFiles.c)
 *     NtCreateIoRing @ 0x140714CF0 (NtCreateIoRing.c)
 *     NtQueryIoRingCapabilities @ 0x1407154C0 (NtQueryIoRingCapabilities.c)
 *     NtSetInformationIoRing @ 0x140715540 (NtSetInformationIoRing.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopFlushBuffersFile @ 0x140957794 (IopFlushBuffersFile.c)
 *     IopReadFileScatter @ 0x140A8AFD8 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A920EC (IopWriteFileGather.c)
 *     IopIoRingGetBuffer @ 0x140A96228 (IopIoRingGetBuffer.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
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
