/*
 * XREFs of MiZeroHugeRangeWorker @ 0x1406871C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiZeroMoveToProcessor @ 0x140314978 (MiZeroMoveToProcessor.c)
 *     MiRevertProcessorMove @ 0x1403149DC (MiRevertProcessorMove.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     MiFillMemory @ 0x140402AB0 (MiFillMemory.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlCompareMemoryUlong @ 0x1406B49B0 (RtlCompareMemoryUlong.c)
 */

void __fastcall MiZeroHugeRangeWorker(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int v3; // r14d
  KIRQL v4; // r15
  ULONG ClearBitsAndSet; // edi
  void *v6; // rdi
  __int64 v7; // r9
  SIZE_T v8; // rax
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 32);
  v9 = 0LL;
  v10 = 0LL;
  MiZeroMoveToProcessor(a1, (__int64)&v9);
  v2 = *(_QWORD *)(v1 + 152);
  v3 = *(_DWORD *)(v2 + 104);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 96));
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)v2, 1u, 0);
    MiReleaseSpinLockExclusive((_DWORD *)(v2 + 96), v4);
    if ( ClearBitsAndSet == -1 )
      break;
    v6 = (void *)(*(_QWORD *)(v2 + 80) + (ClearBitsAndSet << 21));
    if ( v3 )
    {
      if ( v3 != 1 )
      {
        v8 = RtlCompareMemoryUlong(v6, 0x200000uLL, 0);
        if ( v8 != 0x200000 )
          KeBugCheckEx(
            0x127u,
            *(_QWORD *)(v2 + 80),
            *(_QWORD *)(v2 + 88),
            (ULONG_PTR)v6 + v8 - *(_QWORD *)(v2 + 80),
            0x40000000uLL);
        goto LABEL_9;
      }
      v7 = -1LL;
    }
    else
    {
      v7 = 0LL;
    }
    MiFillMemory(v10, v6, 0x200000uLL, v7, 1);
LABEL_9:
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 96));
    if ( ++*(_DWORD *)(v2 + 100) == 512 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 108), 0);
      MiReleaseSpinLockExclusive((_DWORD *)(v2 + 96), v4);
      KeSignalGate((volatile signed __int32 *)(v1 + 120), 1LL);
      break;
    }
  }
  MiRevertProcessorMove((__int64)&v9);
}
