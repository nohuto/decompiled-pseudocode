/*
 * XREFs of KsepIsModuleShimmed @ 0x14095A46C
 * Callers:
 *     KseDriverUnloadImage @ 0x140959CDC (KseDriverUnloadImage.c)
 *     KsepGetShimsForDriver @ 0x140959F74 (KsepGetShimsForDriver.c)
 *     KsepGetShimCallbacksForDriver @ 0x14095A360 (KsepGetShimCallbacksForDriver.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall KsepIsModuleShimmed(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rax
  signed __int8 v9; // cf
  _QWORD *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v13; // rdx

  v3 = 0;
  if ( !a2 || !a1 || !a3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((__int64)&qword_140E66B10, 0LL);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E66B10, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140E66B10, (__int64)v8, (__int64)&qword_140E66B10);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v11 = *(_QWORD **)(a1 + 32);
  if ( v11 != (_QWORD *)(a1 + 32) )
  {
    while ( v11 != (_QWORD *)(a1 + 32) )
    {
      v13 = v11;
      v11 = (_QWORD *)*v11;
      if ( v13[2] == a2 )
      {
        *a3 = v13;
        v3 = 1;
        break;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66B10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66B10);
  KeAbPostRelease((ULONG_PTR)&qword_140E66B10);
  KeLeaveCriticalRegion();
  return v3;
}
