/*
 * XREFs of RaidGetResetInterface @ 0x14000E484
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidQueryResetInterface @ 0x14000E568 (RaidQueryResetInterface.c)
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall RaidGetResetInterface(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _DWORD *DeviceExtension; // rsi
  _QWORD *v5; // rbx
  void *Pool; // rax
  void *v7; // rdi
  int ResetInterface; // ebp

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *DeviceExtension != 1094997074 )
    return 3221225485LL;
  v5 = DeviceExtension + 1344;
  if ( DeviceExtension && *v5 )
  {
    *a2 = *v5;
    return 0LL;
  }
  else if ( KeGetCurrentIrql() )
  {
    return 3221225800LL;
  }
  else
  {
    Pool = (void *)RaidAllocatePool(64LL, 80LL, 1347379538LL, DeviceObject);
    v7 = Pool;
    if ( Pool )
    {
      ResetInterface = RaidQueryResetInterface(DeviceObject, Pool);
      if ( ResetInterface >= 0 )
      {
        *a2 = v7;
        if ( DeviceExtension )
          *v5 = v7;
      }
      else
      {
        ExFreePoolWithTag(v7, 0x504F6152u);
      }
      return (unsigned int)ResetInterface;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
