/*
 * XREFs of MiSelectRelocationStartHint @ 0x140A2FF20
 * Callers:
 *     MiObtainRelocationBits @ 0x1409405A0 (MiObtainRelocationBits.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsEx @ 0x1403F1DD0 (RtlFindClearBitsEx.c)
 *     RtlCopyBitMapEx @ 0x140420710 (RtlCopyBitMapEx.c)
 *     RtlMergeBitMapsEx @ 0x1405DC030 (RtlMergeBitMapsEx.c)
 */

unsigned __int64 __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v10; // rax
  signed __int8 v11; // cf
  __int64 *v12; // rsi
  unsigned __int64 ClearBits; // rsi

  v6 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBitsEx(*(unsigned __int64 **)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    v10 = KeAbPreAcquire((__int64)&qword_140E2D3E8, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D3E8, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&qword_140E2D3E8, v10, (__int64)&qword_140E2D3E8);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
  }
  RtlCopyBitMapEx(*(unsigned __int64 **)a1, &qword_140E2D470, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&qword_140E2D470, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140E2D470, v6, a3);
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D3E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D3E8);
    KeAbPostRelease((ULONG_PTR)&qword_140E2D3E8);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return ClearBits;
}
