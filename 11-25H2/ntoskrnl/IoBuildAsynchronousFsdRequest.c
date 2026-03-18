/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x14035EFB0
 * Callers:
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140701F90 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140702030 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140A5AAF0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140A636B0 (FsRtlMdlReadEx.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x14035EFF0 (IopBuildAsynchronousFsdRequest.c)
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
