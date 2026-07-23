/*
 * XREFs of MiObtainRelocationBits @ 0x140A1A244
 * Callers:
 *     MiSelectImageBase @ 0x140AEB020 (MiSelectImageBase.c)
 * Callees:
 *     RtlFindClearBitsAndSetEx @ 0x14026DCA0 (RtlFindClearBitsAndSetEx.c)
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiSelectRelocationStartHint @ 0x140A2AD00 (MiSelectRelocationStartHint.c)
 */

unsigned __int64 __fastcall MiObtainRelocationBits(unsigned __int64 **a1, unsigned __int16 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v5; // r13
  char *v7; // rax
  char *v8; // rbx
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 *v11; // rcx
  bool v12; // zf
  unsigned __int64 v14; // r15
  unsigned __int64 started; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  --CurrentThread->SpecialApcDisable;
  v7 = (char *)KeAbPreAcquire((__int64)&qword_140E2D768, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D768, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140E2D768, v7, (__int64)&qword_140E2D768);
  if ( v8 )
    v8[10] = 1;
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(*a1, v5, a3);
  v10 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1LL )
  {
    v11 = a1[1];
    if ( v11 )
    {
      v14 = RtlFindClearBitsAndSetEx(v11, v5, ClearBitsAndSet);
      if ( v14 != v10 )
      {
        RtlClearBitsEx((__int64)*a1, v10, v5);
        if ( v14 != -1LL )
          RtlClearBitsEx((__int64)a1[1], v14, v5);
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D768, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D768);
  KeAbPostRelease((ULONG_PTR)&qword_140E2D768);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v10;
}
