/*
 * XREFs of KeSrcuFree @ 0x1405BE120
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeRemoveQueueDpcEx @ 0x14045A7C0 (KeRemoveQueueDpcEx.c)
 *     KiSrcuNotifyWorkerAcquire @ 0x1405BEA20 (KiSrcuNotifyWorkerAcquire.c)
 *     KiSrcuNotifyWorkerSelectAndQueue @ 0x1405BEB94 (KiSrcuNotifyWorkerSelectAndQueue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KeSrcuFree(_QWORD *P)
{
  KIRQL v2; // al
  _QWORD *v3; // r8
  PVOID *v4; // rdx
  int v5; // ecx
  __int64 v6; // r14
  int i; // esi
  void *v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  char *v10; // [rsp+30h] [rbp-10h]

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F10310);
  v3 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v4 = (PVOID *)P[1], *v4 != P) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  KeReleaseSpinLock(&qword_140F10310, v2);
  KeRemoveQueueDpcEx((__int64)(P + 10), 1);
  v5 = *((_DWORD *)P + 37);
  v6 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  for ( i = 1 << v5; (unsigned int)v6 < *((_DWORD *)P + 36); v6 = (unsigned int)(v6 + 1) )
  {
    v8 = (void *)(P[19] + 80 * v6);
    KiSrcuNotifyWorkerAcquire(v8, 2LL, (unsigned int)(i - 1));
    DWORD1(v9) = 0;
    v10 = (char *)&v9 + 8;
    LOWORD(v9) = 263;
    *((_QWORD *)&v9 + 1) = (char *)&v9 + 8;
    BYTE2(v9) = 6;
    KiSrcuNotifyWorkerSelectAndQueue(v8, &v9);
    KeWaitForGate((__int64)&v9, 42LL);
  }
  ExFreePoolWithTag(P, 0x75635253u);
}
