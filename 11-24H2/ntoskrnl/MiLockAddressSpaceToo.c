/*
 * XREFs of MiLockAddressSpaceToo @ 0x1403C7D64
 * Callers:
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiPrepareVadDelete @ 0x140A12E00 (MiPrepareVadDelete.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiUnlockNestedVad @ 0x140A15178 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v4; // rsi
  _QWORD *v8; // rax
  unsigned __int64 *v10; // rbp
  char *v11; // rax
  char *v12; // rsi
  bool v13; // zf
  unsigned __int64 *v14; // rdi
  char *v15; // rax
  char *v16; // rsi

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
    MiUnlockVad(CurrentThread, a2);
    LOCK_ADDRESS_SPACE(CurrentThread, a1);
    --CurrentThread->SpecialApcDisable;
    v10 = (unsigned __int64 *)(a2 + 40);
    v11 = (char *)KeAbPreAcquire((__int64)v10, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v11, (__int64)v10);
    if ( v12 )
      v12[10] = 1;
    LODWORD(CurrentThread[1].Queue) |= 0x80u;
    if ( a3 )
    {
      v14 = (unsigned __int64 *)(a3 + 40);
      v15 = (char *)KeAbPreAcquire((__int64)v14, 0LL);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
        ExfAcquirePushLockExclusiveEx(v14, v15, (__int64)v14);
      if ( v16 )
        v16[10] = 1;
    }
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
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
