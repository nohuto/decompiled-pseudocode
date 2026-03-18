/*
 * XREFs of IoGetLowerDeviceObjectWithTag @ 0x140465A0C
 * Callers:
 *     IoGetLowerDeviceObject @ 0x1404659F0 (IoGetLowerDeviceObject.c)
 *     IopSynchronousCall @ 0x140834D44 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x140A55090 (PiControlGetDeviceStack.c)
 *     IoBuildPoDeviceNotifyList @ 0x140B59AAC (IoBuildPoDeviceNotifyList.c)
 *     IopCheckDeviceFlags @ 0x140B5A1F0 (IopCheckDeviceFlags.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
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
