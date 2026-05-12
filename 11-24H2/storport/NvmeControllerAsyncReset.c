/*
 * XREFs of NvmeControllerAsyncReset @ 0x1400EB588
 * Callers:
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400EA850 (NvmeControllerAsyncEventCommandCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerAsyncReset(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1072), 7u) )
  {
    return (unsigned int)-2147483631;
  }
  else
  {
    *(_BYTE *)(a1 + 1436) &= ~1u;
    *(_DWORD *)(a1 + 1432) = 6;
    IoQueueWorkItem(
      *(PIO_WORKITEM *)(a1 + 1424),
      NvmeControllerResetWorkItemCallback,
      CriticalWorkQueue,
      (PVOID)(a1 + 1424));
  }
  return v1;
}
