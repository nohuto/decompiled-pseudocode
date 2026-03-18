/*
 * XREFs of MiObtainRelocationBits @ 0x1408F6BB0
 * Callers:
 *     MiSelectImageBase @ 0x1408F67EC (MiSelectImageBase.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x140261AD0 (RtlClearBitsEx.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlFindClearBitsAndSetEx @ 0x1403A4180 (RtlFindClearBitsAndSetEx.c)
 *     RtlSetBitsEx @ 0x1403A4600 (RtlSetBitsEx.c)
 *     MiSelectRelocationStartHint @ 0x140A357E4 (MiSelectRelocationStartHint.c)
 */

unsigned __int64 __fastcall MiObtainRelocationBits(unsigned __int64 **a1, unsigned __int16 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v5; // r13
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  unsigned __int64 v16; // r15
  unsigned __int64 started; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((__int64)&qword_140E2D628, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D628, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140E2D628, (__int64)v7, (__int64)&qword_140E2D628);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(*a1, v5, a3);
  v10 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1LL )
  {
    v11 = a1[1];
    if ( v11 )
    {
      v16 = RtlFindClearBitsAndSetEx(v11, v5, ClearBitsAndSet);
      if ( v16 != v10 )
      {
        RtlClearBitsEx((__int64)*a1, v10, v5);
        if ( v16 != -1LL )
          RtlClearBitsEx((__int64)a1[1], v16, v5);
        started = MiSelectRelocationStartHint(a1, (unsigned __int16)v5, a3, 1LL);
        v10 = started;
        if ( started != -1LL )
        {
          RtlSetBitsEx((__int64)*a1, started, v5);
          RtlSetBitsEx((__int64)a1[1], v10, v5);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D628);
  KeAbPostRelease((ULONG_PTR)&qword_140E2D628);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13, v12);
  return v10;
}
