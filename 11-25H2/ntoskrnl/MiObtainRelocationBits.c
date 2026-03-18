/*
 * XREFs of MiObtainRelocationBits @ 0x1409405A0
 * Callers:
 *     MiSelectImageBase @ 0x1409401DC (MiSelectImageBase.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlClearBitsEx @ 0x1402A9FB0 (RtlClearBitsEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     RtlFindClearBitsAndSetEx @ 0x14038DE00 (RtlFindClearBitsAndSetEx.c)
 *     RtlSetBitsEx @ 0x14038E280 (RtlSetBitsEx.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiSelectRelocationStartHint @ 0x140A2FF20 (MiSelectRelocationStartHint.c)
 */

unsigned __int64 __fastcall MiObtainRelocationBits(unsigned __int64 **a1, unsigned __int16 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v5; // r13
  __int64 *v7; // rax
  __int64 *v8; // rbx
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 *v11; // rcx
  bool v12; // zf
  unsigned __int64 v14; // r15
  unsigned __int64 started; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((__int64)&qword_140E2D3E8, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D3E8, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140E2D3E8, v7, (__int64)&qword_140E2D3E8);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D3E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D3E8);
  KeAbPostRelease((ULONG_PTR)&qword_140E2D3E8);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v10;
}
