/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x140375460
 * Callers:
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070DE70 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070DF10 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140A5CD70 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140A65BD0 (FsRtlMdlReadEx.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x1403754A0 (IopBuildAsynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildAsynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)IopBuildAsynchronousFsdRequest(
                 MajorFunction,
                 DeviceObject,
                 Buffer,
                 Length,
                 StartingOffset,
                 IoStatusBlock,
                 retaddr);
}
