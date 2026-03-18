/*
 * XREFs of MiIsRangeFullyCommitted @ 0x1408DD80C
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140893DD8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiIsRangeFullyCommitted(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *ProtoPteAddress; // rbx
  __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // r14d
  __int64 v9; // rdi
  signed __int64 *v10; // rdi
  _QWORD *v11; // rsi
  unsigned __int64 *v12; // rdx
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v17; // rcx
  unsigned __int64 *v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 *v20; // [rsp+68h] [rbp+10h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  ProtoPteAddress = (_QWORD *)MiGetProtoPteAddress(a1, a2 >> 12, 2, &v19);
  if ( !ProtoPteAddress )
    return 0LL;
  v6 = MiGetProtoPteAddress(a1, a3 >> 12, 2, &v20);
  if ( !v6 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  v9 = ***(_QWORD ***)(a1 + 72);
  --CurrentThread->SpecialApcDisable;
  v10 = (signed __int64 *)(v9 + 40);
  v11 = KeAbPreAcquire((__int64)v10, 0LL);
  if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, 0, v11, (__int64)v10);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v12 = v19;
  v13 = v20;
  while ( 1 )
  {
    v14 = v12 == v13 ? v6 : v12[1] + 8LL * (unsigned int)(*((_DWORD *)v12 + 11) - 1);
    while ( (unsigned __int64)ProtoPteAddress <= v14 )
    {
      if ( !*ProtoPteAddress )
      {
        v8 = 0;
        break;
      }
      ++ProtoPteAddress;
    }
    v13 = v20;
    if ( v19 == v20 )
      break;
    v12 = (unsigned __int64 *)v19[2];
    v19 = v12;
    ProtoPteAddress = (_QWORD *)v12[1];
    if ( !ProtoPteAddress )
    {
      v8 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v17 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v17->ApcState.ApcListHead[0].Flink != v17 )
      KiCheckForKernelApcDelivery((__int64)v17, v15);
  }
  return v8;
}
