/*
 * XREFs of MiContractWsSwapPageFileWorker @ 0x140686110
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiLockWsSwapExclusive @ 0x1403C637C (MiLockWsSwapExclusive.c)
 *     MiUnlockWsSwapExclusive @ 0x1403C6778 (MiUnlockWsSwapExclusive.c)
 *     MiWsSwapPageFileNumber @ 0x1403C9244 (MiWsSwapPageFileNumber.c)
 *     MiQueuePageFileExtension @ 0x1403EF6FC (MiQueuePageFileExtension.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiContractWsSwapPageFileWorker(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // al
  _BYTE v7[24]; // [rsp+38h] [rbp-9h] BYREF
  __int64 v8; // [rsp+50h] [rbp+Fh]
  __int64 v9; // [rsp+58h] [rbp+17h]
  __int64 v10; // [rsp+60h] [rbp+1Fh]
  __int16 Object; // [rsp+68h] [rbp+27h] BYREF
  char v12; // [rsp+6Ah] [rbp+29h]
  int v13; // [rsp+6Ch] [rbp+2Bh]
  _QWORD v14[2]; // [rsp+70h] [rbp+2Fh] BYREF
  char v15; // [rsp+84h] [rbp+43h]

  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 18528);
  memset_0(v7, 0, 0x58uLL);
  v9 = -1LL;
  v8 = a1;
  v6 = *(_BYTE *)(v5 + 172);
  v10 = 0x10000LL;
  v15 = v6 & 0xF;
  v14[1] = v14;
  v14[0] = v14;
  Object = 0;
  v12 = 6;
  v13 = 0;
  MiLockWsSwapExclusive((__int64)CurrentThread, a1);
  MiQueuePageFileExtension((__int64)v7, 0x11u);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  MiUnlockWsSwapExclusive((__int64)CurrentThread, a1);
  _InterlockedExchange((volatile __int32 *)(a1 + 1168), 0);
  PsDereferencePartition(*(_QWORD *)(a1 + 184));
}
