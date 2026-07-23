/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x1402197E0
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x1402196D4 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x14021A324 (RtlSparseArrayElementAllocate.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x14021966C (RtlpCSparseBitmapUnlock.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     RtlpHpEnvAllocVA @ 0x14034C090 (RtlpHpEnvAllocVA.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x140452274 (RtlpCSparseBitmapWaitOnAddress.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x140472FAC (RtlCSparseBitmapLeaveLockingRegion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // si
  volatile LONG *v10; // rcx
  KIRQL v11; // al
  int v12; // esi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r8
  ULONG_PTR v18; // [rsp+20h] [rbp-60h]
  int v19; // [rsp+28h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-48h]
  int v21[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+70h] [rbp-10h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 v25; // [rsp+B8h] [rbp+38h] BYREF

  v25 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  v8 = a1;
  if ( !_bittest64((const signed __int64 *)(a1 + 56), a2 >> 15) )
  {
    v24 = 4096LL;
    *(_QWORD *)v21 = *(_QWORD *)a1 + (v5 << 12);
    LODWORD(v18) = 4;
    v12 = RtlpHpEnvAllocVA((int)v21, (int)&v24, 0, 1073745920, v18, v19, *(unsigned __int8 *)(a1 + 50), v20, 0);
    if ( v12 < 0 )
      return (unsigned int)v12;
    _interlockedbittestandset64((volatile signed __int32 *)(v8 + 56), v5);
    v7 = v25;
  }
  *(_QWORD *)&v22 = 0LL;
  *((_QWORD *)&v22 + 1) = v8;
  if ( *(_BYTE *)(v8 + 48) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    LOBYTE(v22) = CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v7 = v25;
    LOBYTE(v22) = -1;
    --CurrentThread->SpecialApcDisable;
  }
  *a4 = v22;
  while ( 1 )
  {
    v10 = (volatile LONG *)(v8 + 24);
    if ( *(_BYTE *)(v8 + 48) )
    {
      v11 = ExAcquireSpinLockShared(v10);
    }
    else
    {
      v15 = KeGetCurrentThread();
      --v15->SpecialApcDisable;
      v16 = KeAbPreAcquire(v10, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v8 + 24, 0LL, v16, v8 + 24);
      if ( v16 )
        *(_BYTE *)(v16 + 10) = 1;
      v7 = v25;
      v11 = -1;
    }
    *(_BYTE *)(a3 + 4) = v11;
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = v8;
    if ( *(_QWORD *)(v8 + 32) != v7 )
      break;
    RtlpCSparseBitmapUnlock((int *)a3);
    RtlpCSparseBitmapWaitOnAddress(v8 + 32, &v25, v17, v8);
  }
  if ( !_bittest64(*(const signed __int64 **)v8, v7) )
  {
    v24 = 4096LL;
    *(_QWORD *)v21 = *(_QWORD *)(v8 + 8) + (v7 << 12);
    LODWORD(v18) = 4;
    v12 = RtlpHpEnvAllocVA((int)v21, (int)&v24, 0, 1073745920, v18, v19, *(unsigned __int8 *)(v8 + 50), v20, 0);
    if ( v12 < 0 )
    {
      RtlpCSparseBitmapUnlock((int *)a3);
      v23 = *a4;
      RtlCSparseBitmapLeaveLockingRegion(&v23);
      return (unsigned int)v12;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)v8, v7);
  }
  return 0;
}
