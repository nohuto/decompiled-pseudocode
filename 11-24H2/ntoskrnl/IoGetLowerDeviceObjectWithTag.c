/*
 * XREFs of IoGetLowerDeviceObjectWithTag @ 0x140464EEC
 * Callers:
 *     IoGetLowerDeviceObject @ 0x140464ED0 (IoGetLowerDeviceObject.c)
 *     IopSynchronousCall @ 0x1408BBC08 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x140A58ACC (PiControlGetDeviceStack.c)
 *     IoBuildPoDeviceNotifyList @ 0x140B698EC (IoBuildPoDeviceNotifyList.c)
 *     IopCheckDeviceFlags @ 0x140B6A030 (IopCheckDeviceFlags.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 */

void *__fastcall IoGetLowerDeviceObjectWithTag(__int64 a1, ULONG a2)
{
  KIRQL v4; // di
  __int64 v5; // rax
  void *v6; // rbx
  int v7; // ecx
  void *v9; // rax

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *(_QWORD *)(a1 + 312);
  v6 = 0LL;
  v7 = *(_DWORD *)(v5 + 32);
  if ( (v7 & 0xF) == 0 || (v7 & 0xE) == 0 && *(_QWORD *)(v5 + 48) )
  {
    v9 = *(void **)(v5 + 48);
    if ( v9 )
    {
      v6 = v9;
      ObfReferenceObjectWithTag(v9, a2);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v6;
}
