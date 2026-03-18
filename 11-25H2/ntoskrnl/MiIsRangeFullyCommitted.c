/*
 * XREFs of MiIsRangeFullyCommitted @ 0x1408F8634
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408F78C8 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408F87C4 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall MiIsRangeFullyCommitted(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *ProtoPteAddress; // rbx
  __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // r14d
  __int64 v9; // rdi
  signed __int64 *v10; // rdi
  __int64 *v11; // rsi
  unsigned __int64 *v12; // rdx
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 *v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 *v18; // [rsp+68h] [rbp+10h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  ProtoPteAddress = (_QWORD *)MiGetProtoPteAddress(a1, a2 >> 12, 2, &v17);
  if ( !ProtoPteAddress )
    return 0LL;
  v6 = MiGetProtoPteAddress(a1, a3 >> 12, 2, &v18);
  if ( !v6 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  v9 = ***(_QWORD ***)(a1 + 72);
  --CurrentThread->SpecialApcDisable;
  v10 = (signed __int64 *)(v9 + 40);
  v11 = KeAbPreAcquire((__int64)v10, 0LL);
  if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, 0, v11, (unsigned __int64)v10);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v12 = v17;
  v13 = v18;
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
    v13 = v18;
    if ( v17 == v18 )
      break;
    v12 = (unsigned __int64 *)v17[2];
    v17 = v12;
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
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return v8;
}
