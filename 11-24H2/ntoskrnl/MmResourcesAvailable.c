/*
 * XREFs of MmResourcesAvailable @ 0x14042DCF0
 * Callers:
 *     ExAllocatePool3 @ 0x140B746D0 (ExAllocatePool3.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiFreeExcessSegments @ 0x1402EA170 (MiFreeExcessSegments.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KePulseEvent @ 0x1404674D0 (KePulseEvent.c)
 *     MiIssuePageExtendRequest @ 0x14046B438 (MiIssuePageExtendRequest.c)
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
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v17; // rcx

  v3 = 0;
  v4 = a1 & 0x100;
  if ( (a1 & 0x100) != 0 )
  {
    v5 = qword_140E37550;
    v6 = qword_140E37560;
  }
  else
  {
    v5 = qword_140E2CA48;
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
      v11 = ExAcquireSpinLockExclusive(dword_140E3CB40);
      if ( !qword_140E38D08->Header.SignalState )
        KePulseEvent(qword_140E38D08, 0, 0);
      MiReleaseSpinLockExclusive(dword_140E3CB40, v11);
LABEL_33:
      MiFreeExcessSegments(0LL);
      return v3;
    }
LABEL_22:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v13 = KeAbPreAcquire((__int64)&qword_140E37540, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37540, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140E37540, (__int64)v13, (__int64)&qword_140E37540);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    if ( !qword_140E38CF8->Header.SignalState )
      KePulseEvent(qword_140E38CF8, 0, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37540, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37540);
    KeAbPostRelease((ULONG_PTR)&qword_140E37540);
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v17 = &CurrentThread->152;
      if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v17->ApcState.ApcListHead[0].Flink != v17 )
        KiCheckForKernelApcDelivery((__int64)v17, v15);
    }
    goto LABEL_33;
  }
  if ( v4 )
  {
    v10 = qword_140E3CDC8 - qword_140E3D740;
    if ( qword_140E3D740 >= (unsigned __int64)qword_140E3CDC8 )
      v10 = 0LL;
    if ( (a2 >> 12) + ((a2 & 0xFFF) != 0) > v10 )
    {
      MiIssuePageExtendRequest(&MiSystemPartition, (a2 >> 12) + ((a2 & 0xFFF) != 0), 2LL, 0LL);
      goto LABEL_22;
    }
  }
  if ( a2 + 10485760 >= v7 && qword_140E3D450 >= 0x40000 )
  {
    v3 = 1;
    goto LABEL_18;
  }
  return 1LL;
}
