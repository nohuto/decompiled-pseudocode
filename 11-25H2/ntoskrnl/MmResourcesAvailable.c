/*
 * XREFs of MmResourcesAvailable @ 0x140433160
 * Callers:
 *     ExAllocatePool3 @ 0x140B64430 (ExAllocatePool3.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiFreeExcessSegments @ 0x1403BE140 (MiFreeExcessSegments.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KePulseEvent @ 0x14046B330 (KePulseEvent.c)
 *     MiIssuePageExtendRequest @ 0x14046DC64 (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MmResourcesAvailable(__int16 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rcx
  KIRQL v11; // bl
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v13; // rax
  __int64 *v14; // rsi
  bool v15; // zf

  v3 = 0;
  v4 = a1 & 0x100;
  if ( (a1 & 0x100) != 0 )
  {
    v5 = qword_140E37310;
    v6 = qword_140E37320;
  }
  else
  {
    v5 = qword_140E2C808;
    v6 = *(_QWORD *)&MiState;
  }
  v7 = (v6 - v5) << 12;
  if ( a3 == 16 )
    v8 = a2 + 0x80000;
  else
    v8 = a2 + 0x200000;
  if ( v8 <= v7 )
  {
    if ( v4 )
    {
      v10 = 0LL;
      if ( qword_140E3D500 < (unsigned __int64)qword_140E3CB88 )
        v10 = qword_140E3CB88 - qword_140E3D500;
      if ( (a2 >> 12) + ((a2 & 0xFFF) != 0) > v10 )
      {
        MiIssuePageExtendRequest(&MiSystemPartition, (a2 >> 12) + ((a2 & 0xFFF) != 0), 2LL, 0LL);
LABEL_21:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v13 = KeAbPreAcquire((__int64)&qword_140E37300, 0LL);
        v14 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37300, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_140E37300, v13, (__int64)&qword_140E37300);
        if ( v14 )
          *((_BYTE *)v14 + 10) = 1;
        if ( !qword_140E38AB8->Header.SignalState )
          KePulseEvent(qword_140E38AB8, 0, 0);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37300, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37300);
        KeAbPostRelease((ULONG_PTR)&qword_140E37300);
        v15 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v15
          && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        goto LABEL_32;
      }
    }
    if ( a2 + 10485760 < v7 || qword_140E3D210 < 0x40000 )
      return 1LL;
    v3 = 1;
  }
  if ( v4 )
    goto LABEL_21;
  v11 = ExAcquireSpinLockExclusive(dword_140E3C900);
  if ( !qword_140E38AC8->Header.SignalState )
    KePulseEvent(qword_140E38AC8, 0, 0);
  MiReleaseSpinLockExclusive(dword_140E3C900, v11);
LABEL_32:
  MiFreeExcessSegments(0LL);
  return v3;
}
