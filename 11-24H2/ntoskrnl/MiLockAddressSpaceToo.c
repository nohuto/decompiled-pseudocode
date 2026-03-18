/*
 * XREFs of MiLockAddressSpaceToo @ 0x140405808
 * Callers:
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiPrepareVadDelete @ 0x140A19C90 (MiPrepareVadDelete.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockNestedVad @ 0x140A20078 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v4; // rsi
  _QWORD *v8; // rax
  unsigned __int64 *v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  bool v15; // zf
  unsigned __int64 *v16; // rdi
  _QWORD *v17; // rax
  _QWORD *v18; // rsi

  CurrentThread = KeGetCurrentThread();
  v4 = (volatile signed __int32 *)(a1 + 600);
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 600, 0LL);
  if ( _interlockedbittestandset64(v4, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx((ULONG_PTR)v4, (ULONG_PTR)v8);
    if ( a3 )
      MiUnlockNestedVad(a3);
    MiUnlockVad((__int64)CurrentThread, a2);
    LOCK_ADDRESS_SPACE(CurrentThread, a1);
    --CurrentThread->SpecialApcDisable;
    v10 = (unsigned __int64 *)(a2 + 40);
    v11 = KeAbPreAcquire((__int64)v10, 0LL);
    v14 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, (__int64)v11, (__int64)v10);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    LODWORD(CurrentThread[1].Queue) |= 0x80u;
    if ( a3 )
    {
      v16 = (unsigned __int64 *)(a3 + 40);
      v17 = KeAbPreAcquire((__int64)v16, 0LL);
      v18 = v17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
        ExfAcquirePushLockExclusiveEx(v16, (__int64)v17, (__int64)v16);
      if ( v18 )
        *((_BYTE *)v18 + 10) = 1;
    }
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13, v12);
    return 0LL;
  }
  else
  {
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    return 1LL;
  }
}
