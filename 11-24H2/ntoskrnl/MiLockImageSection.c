/*
 * XREFs of MiLockImageSection @ 0x140A31B38
 * Callers:
 *     MiLockPagableImageSection @ 0x1402BBC20 (MiLockPagableImageSection.c)
 * Callees:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExBlockOnAddressPushLock @ 0x1402BB7C0 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 */

__int64 __fastcall MiLockImageSection(__int64 a1, unsigned int *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int32 *v3; // rbx
  unsigned __int32 v6; // eax
  unsigned __int32 v7; // r8d
  __int64 PteAddress; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int32 v11; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int32 *)(a2 + 2);
  --CurrentThread->KernelApcDisable;
LABEL_2:
  v6 = *v3;
  do
  {
    v11 = v6;
    v7 = v6;
    if ( v6 == 1 )
    {
      ExBlockOnAddressPushLock(&qword_140E2D9B8, v3, &v11, 4LL, 0LL);
      goto LABEL_2;
    }
    v6 = _InterlockedCompareExchange(v3, v6 + 1, v6);
  }
  while ( v6 != v7 );
  if ( v6 < 2 )
  {
    PteAddress = MiGetPteAddress(*(_QWORD *)(a1 + 48));
    MiLockCode(a1, PteAddress + 8LL * *a2, PteAddress + 8LL * a2[1], 1);
    _InterlockedIncrement(v3);
    _InterlockedOr(v10, 0);
    if ( qword_140E2D9B8 )
      ExfUnblockPushLock((__int64)&qword_140E2D9B8, 0LL);
  }
  return KeLeaveCriticalRegionThread();
}
