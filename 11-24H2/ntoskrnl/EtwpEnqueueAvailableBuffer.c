/*
 * XREFs of EtwpEnqueueAvailableBuffer @ 0x14024D1E0
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x14024C2BC (EtwpAllocateFreeBuffers.c)
 *     EtwpSwitchBuffer @ 0x14024CDA0 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14024D154 (EtwpPrepareDirtyBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x14065164C (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x14065169C (EtwpRotateCompressionTarget.c)
 *     EtwpFlushActiveBuffers @ 0x1409D8040 (EtwpFlushActiveBuffers.c)
 *     EtwpCompleteBuffer @ 0x140AD9E0C (EtwpCompleteBuffer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall EtwpEnqueueAvailableBuffer(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v4; // r14d
  ULONG_PTR v5; // rcx
  KIRQL CurrentIrql; // r15
  _QWORD *v8; // rcx
  signed __int64 *v9; // rdi
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  signed __int64 v12; // rtt
  __int64 v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // r8
  int v19; // eax

  v4 = a3;
  v5 = *(unsigned int *)(a1 + 4);
  CurrentIrql = 0;
  if ( (_DWORD)v5 != *a2 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)a2, v5, *a2);
  a2[11] = a3;
  *((_QWORD *)a2 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 808));
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    v13 = KeAbPreAcquire(a1 + 696, 0LL, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 696), 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 696, v13, a1 + 696);
    if ( v14 )
      *(_BYTE *)(v14 + 10) = 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v5, 15LL, a3);
    }
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 696));
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x4000000) == 0
    || (v15 = (_QWORD *)(a1 + 56), (v16 = *(_QWORD *)(a1 + 56)) == 0)
    || v4 == 4 )
  {
    v8 = a2 + 8;
LABEL_8:
    *v8 = 0LL;
    **(_QWORD **)(a1 + 48) = v8;
    goto LABEL_9;
  }
  if ( !v4 )
  {
    v17 = a2 + 8;
    *v17 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v17;
    if ( a1 + 56 == *(_QWORD *)(a1 + 48) )
      *(_QWORD *)(a1 + 48) = v17;
    goto LABEL_10;
  }
  v18 = 0LL;
  do
  {
    v19 = *(_DWORD *)(v16 + 12);
    if ( v18 )
    {
      if ( v19 != 6 )
        goto LABEL_32;
    }
    else if ( !v19 )
    {
      goto LABEL_32;
    }
    v18 = v15;
    if ( v19 != 6 )
    {
LABEL_32:
      v15 = (_QWORD *)v16;
      goto LABEL_33;
    }
    *v15 = *(_QWORD *)v16;
    if ( *(_QWORD *)v16 )
      *(_QWORD *)v16 = 0LL;
    else
      *(_QWORD *)(a1 + 48) = v15;
    *(_QWORD *)v16 = *(_QWORD *)(a1 + 1448);
    *(_QWORD *)(a1 + 1448) = v16;
LABEL_33:
    v16 = *v15;
  }
  while ( *v15 );
  v8 = a2 + 8;
  if ( !v18 )
    goto LABEL_8;
  *v8 = *v18;
  *v18 = v8;
  if ( v18 == *(_QWORD **)(a1 + 48) )
LABEL_9:
    *(_QWORD *)(a1 + 48) = v8;
LABEL_10:
  v9 = (signed __int64 *)(a1 + 696);
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    _m_prefetchw(v9);
    v10 = *v9;
    v11 = *v9 - 16;
    if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v11 = 0LL;
    if ( (v10 & 2) != 0 || (v12 = *v9, v12 != _InterlockedCompareExchange64(v9, v11, v10)) )
      ExfReleasePushLock(a1 + 696, v11);
    KeAbPostRelease(a1 + 696);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 696), CurrentIrql);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
}
