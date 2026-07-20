/*
 * XREFs of SmpIsVhdVolume @ 0x14000DBEC
 * Callers:
 *     SmpCreateVolumeDescriptor @ 0x1400102D4 (SmpCreateVolumeDescriptor.c)
 * Callees:
 *     <none>
 */

char __fastcall SmpIsVhdVolume(HANDLE FileHandle)
{
  PVOID OutputBuffer; // rax
  void *v3; // rbx
  NTSTATUS v4; // edi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  OutputBuffer = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x208uLL);
  v3 = OutputBuffer;
  if ( OutputBuffer )
  {
    v4 = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x2D5928u, 0LL, 0, OutputBuffer, 0x208u);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
    if ( v4 )
      LOBYTE(OutputBuffer) = v4 == -1073741789;
    else
      LOBYTE(OutputBuffer) = 1;
  }
  return (char)OutputBuffer;
}
