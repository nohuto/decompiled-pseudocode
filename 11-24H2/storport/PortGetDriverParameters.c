/*
 * XREFs of PortGetDriverParameters @ 0x1401B972C
 * Callers:
 *     RaidInitializeAdapter @ 0x1401BE038 (RaidInitializeAdapter.c)
 *     InitializeNvmeAdapter @ 0x1401BEFA0 (InitializeNvmeAdapter.c)
 * Callees:
 *     PortpReadDriverParameterEntry @ 0x1401B3864 (PortpReadDriverParameterEntry.c)
 *     PortOpenDeviceKey @ 0x1401B98D0 (PortOpenDeviceKey.c)
 */

int __fastcall PortGetDriverParameters(__int64 a1, unsigned int a2, PVOID *a3)
{
  void *v6; // rax
  void *v7; // rbx
  void *v8; // rax
  void *v9; // rbx

  v6 = (void *)PortOpenDeviceKey(a1, 0xFFFFFFFFLL);
  v7 = v6;
  if ( v6 )
  {
    PortpReadDriverParameterEntry(v6, a3);
    ZwClose(v7);
  }
  v8 = (void *)PortOpenDeviceKey(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    PortpReadDriverParameterEntry(v8, a3);
    LODWORD(v8) = ZwClose(v9);
  }
  return (int)v8;
}
