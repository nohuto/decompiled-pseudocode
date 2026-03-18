/*
 * XREFs of MiZeroHugeRangeWorker @ 0x14067A800
 * Callers:
 *     <none>
 * Callees:
 *     MiZeroMoveToProcessor @ 0x140225538 (MiZeroMoveToProcessor.c)
 *     MiRevertProcessorMove @ 0x14022559C (MiRevertProcessorMove.c)
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     RtlFindClearBitsAndSet @ 0x140338AF0 (RtlFindClearBitsAndSet.c)
 *     MiFillMemory @ 0x1404067B0 (MiFillMemory.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlCompareMemoryUlong @ 0x1406A8740 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiZeroHugeRangeWorker(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int v3; // r14d
  KIRQL v4; // r15
  ULONG ClearBitsAndSet; // edi
  void *v6; // rdi
  __int64 v7; // r9
  SIZE_T v8; // rax
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  MiZeroMoveToProcessor(a1, (__int64)&v10);
  v2 = *(_QWORD *)(v1 + 152);
  v3 = *(_DWORD *)(v2 + 104);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 96));
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)v2, 1u, 0);
    MiReleaseSpinLockExclusive((_DWORD *)(v2 + 96), v4);
    if ( ClearBitsAndSet == -1 )
      return MiRevertProcessorMove((__int64)&v10);
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
    MiFillMemory(v11, v6, 0x200000uLL, v7, 1);
LABEL_9:
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 96));
    if ( ++*(_DWORD *)(v2 + 100) == 512 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 108), 0);
      MiReleaseSpinLockExclusive((_DWORD *)(v2 + 96), v4);
      KeSignalGate((_DWORD *)(v1 + 120), 1);
      return MiRevertProcessorMove((__int64)&v10);
    }
  }
}
