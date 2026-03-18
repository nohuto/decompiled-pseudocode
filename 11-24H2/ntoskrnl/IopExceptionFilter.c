/*
 * XREFs of IopExceptionFilter @ 0x1405962D8
 * Callers:
 *     IopProcessBufferedIoCompletion @ 0x1403C5E80 (IopProcessBufferedIoCompletion.c)
 *     IopValidateAndGetWriteParameters @ 0x140400A70 (IopValidateAndGetWriteParameters.c)
 *     NtSubmitIoRing @ 0x1404C3910 (NtSubmitIoRing.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x140716848 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x140716C08 (IopIoRingDispatchRegisterFiles.c)
 *     NtCreateIoRing @ 0x140717160 (NtCreateIoRing.c)
 *     NtQueryIoRingCapabilities @ 0x140717930 (NtQueryIoRingCapabilities.c)
 *     NtSetInformationIoRing @ 0x1407179B0 (NtSetInformationIoRing.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopFlushBuffersFile @ 0x14096E4A4 (IopFlushBuffersFile.c)
 *     NtCopyFileChunk @ 0x1409886C0 (NtCopyFileChunk.c)
 *     IopReadFileScatter @ 0x140A8E968 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A958BC (IopWriteFileGather.c)
 *     IopIoRingGetBuffer @ 0x140A9ACB8 (IopIoRingGetBuffer.c)
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
