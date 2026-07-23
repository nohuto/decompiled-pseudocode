/*
 * XREFs of EtwpEnqueueAvailableBuffer @ 0x14027D7F0
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x14027C8CC (EtwpAllocateFreeBuffers.c)
 *     EtwpSwitchBuffer @ 0x14027D3B0 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14027D764 (EtwpPrepareDirtyBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x14064FD4C (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x14064FD9C (EtwpRotateCompressionTarget.c)
 *     EtwpFlushActiveBuffers @ 0x1409D1730 (EtwpFlushActiveBuffers.c)
 *     EtwpCompleteBuffer @ 0x140ADB650 (EtwpCompleteBuffer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall EtwpEnqueueAvailableBuffer(__int64 a1, unsigned int *a2, unsigned int a3)
{
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
      KiRaiseIrqlProcessIrqlFlags(v5, 15LL);
    }
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 696));
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x4000000) == 0
    || (v15 = (_QWORD *)(a1 + 56), (v16 = *(_QWORD *)(a1 + 56)) == 0)
    || a3 == 4 )
  {
    v8 = a2 + 8;
LABEL_8:
    *v8 = 0LL;
    **(_QWORD **)(a1 + 48) = v8;
    goto LABEL_9;
  }
  if ( !a3 )
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
