/*
 * XREFs of MiSelectRelocationStartHint @ 0x140A357E4
 * Callers:
 *     MiObtainRelocationBits @ 0x1408F6BB0 (MiObtainRelocationBits.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlFindClearBitsEx @ 0x1403F69F0 (RtlFindClearBitsEx.c)
 *     RtlCopyBitMapEx @ 0x14041D980 (RtlCopyBitMapEx.c)
 *     RtlMergeBitMapsEx @ 0x1405E80E0 (RtlMergeBitMapsEx.c)
 */

unsigned __int64 __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v10; // rax
  signed __int8 v11; // cf
  _QWORD *v12; // rsi
  unsigned __int64 ClearBits; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx

  v6 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBitsEx(*(unsigned __int64 **)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    v10 = KeAbPreAcquire((__int64)&qword_140E2D628, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D628, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&qword_140E2D628, (__int64)v10, (__int64)&qword_140E2D628);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
  }
  RtlCopyBitMapEx(*(unsigned __int64 **)a1, &qword_140E2D6B0, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&qword_140E2D6B0, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140E2D6B0, v6, a3);
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D628);
    KeAbPostRelease((ULONG_PTR)&qword_140E2D628);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v15, v14);
    }
  }
  return ClearBits;
}
