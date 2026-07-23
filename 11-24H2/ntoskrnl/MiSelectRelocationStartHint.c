/*
 * XREFs of MiSelectRelocationStartHint @ 0x140A2AD00
 * Callers:
 *     MiObtainRelocationBits @ 0x140A1A244 (MiObtainRelocationBits.c)
 *     MiSelectImageBase @ 0x140AEB020 (MiSelectImageBase.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     RtlFindClearBitsEx @ 0x1403ECBF0 (RtlFindClearBitsEx.c)
 *     RtlCopyBitMapEx @ 0x140411D50 (RtlCopyBitMapEx.c)
 *     RtlMergeBitMapsEx @ 0x1405E56D0 (RtlMergeBitMapsEx.c)
 */

unsigned __int64 __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  char *v10; // rax
  signed __int8 v11; // cf
  char *v12; // rsi
  unsigned __int64 ClearBits; // rsi

  v6 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBitsEx(*(unsigned __int64 **)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    v10 = (char *)KeAbPreAcquire((__int64)&qword_140E2D768, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D768, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&qword_140E2D768, v10, (__int64)&qword_140E2D768);
    if ( v12 )
      v12[10] = 1;
  }
  RtlCopyBitMapEx(*(unsigned __int64 **)a1, &qword_140E2D7F0, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&qword_140E2D7F0, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140E2D7F0, v6, a3);
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D768, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D768);
    KeAbPostRelease((ULONG_PTR)&qword_140E2D768);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return ClearBits;
}
