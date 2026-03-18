/*
 * XREFs of VidSchiProcessGpuEngineTimeoutDpc @ 0x14004B75C
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

void __fastcall VidSchiProcessGpuEngineTimeoutDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rbx
  __int64 v2; // rax
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+40h] [rbp-18h]

  Next = ListEntry[2].Next;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[713], ListEntry);
  v2 = *((_QWORD *)&Next[1].Next + 1) + 1984LL;
  v4 = 256;
  v3[0] = v2;
  AcquireSpinLock::Acquire((Acquire *)v3);
  HIDWORD(Next[134].Next) = 1;
  BYTE2(Next[134].Next) = 1;
  AcquireSpinLock::Release((AcquireSpinLock *)v3);
}
