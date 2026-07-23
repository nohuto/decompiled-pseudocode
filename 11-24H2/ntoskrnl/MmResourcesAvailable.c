/*
 * XREFs of MmResourcesAvailable @ 0x14041FA20
 * Callers:
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiFreeExcessSegments @ 0x14034B7B0 (MiFreeExcessSegments.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KePulseEvent @ 0x14045EF70 (KePulseEvent.c)
 *     MiIssuePageExtendRequest @ 0x140464038 (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MmResourcesAvailable(__int16 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rcx
  KIRQL v11; // di
  struct _KTHREAD *CurrentThread; // rdi
  char *v13; // rax
  char *v14; // rsi
  bool v15; // zf

  v3 = 0;
  v4 = a1 & 0x100;
  if ( (a1 & 0x100) != 0 )
  {
    v5 = qword_140E37690;
    v6 = qword_140E376A0;
  }
  else
  {
    v5 = qword_140E2CB88;
    v6 = *(_QWORD *)&MiState;
  }
  v7 = (v6 - v5) << 12;
  if ( a3 == 16 )
    v8 = a2 + 0x80000;
  else
    v8 = a2 + 0x200000;
  if ( v8 > v7 )
  {
LABEL_18:
    if ( !v4 )
    {
      v11 = ExAcquireSpinLockExclusive(dword_140E3CC80);
      if ( !qword_140E38E48->Header.SignalState )
        KePulseEvent(qword_140E38E48, 0, 0);
      MiReleaseSpinLockExclusive(dword_140E3CC80, v11);
LABEL_33:
      MiFreeExcessSegments(0LL);
      return v3;
    }
LABEL_22:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v13 = (char *)KeAbPreAcquire((__int64)&qword_140E37680, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37680, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140E37680, v13, (__int64)&qword_140E37680);
    if ( v14 )
      v14[10] = 1;
    if ( !qword_140E38E38->Header.SignalState )
      KePulseEvent(qword_140E38E38, 0, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37680, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37680);
    KeAbPostRelease((ULONG_PTR)&qword_140E37680);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    goto LABEL_33;
  }
  if ( v4 )
  {
    v10 = qword_140E3CF08 - qword_140E3D880;
    if ( qword_140E3D880 >= (unsigned __int64)qword_140E3CF08 )
      v10 = 0LL;
    if ( (a2 >> 12) + ((a2 & 0xFFF) != 0) > v10 )
    {
      MiIssuePageExtendRequest(&MiSystemPartition, (a2 >> 12) + ((a2 & 0xFFF) != 0), 2LL, 0LL);
      goto LABEL_22;
    }
  }
  if ( a2 + 10485760 >= v7 && qword_140E3D590 >= 0x40000 )
  {
    v3 = 1;
    goto LABEL_18;
  }
  return 1LL;
}
