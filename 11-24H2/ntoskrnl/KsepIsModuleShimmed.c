/*
 * XREFs of KsepIsModuleShimmed @ 0x140941F2C
 * Callers:
 *     KseDriverUnloadImage @ 0x14094179C (KseDriverUnloadImage.c)
 *     KsepGetShimsForDriver @ 0x140941A34 (KsepGetShimsForDriver.c)
 *     KsepGetShimCallbacksForDriver @ 0x140941E20 (KsepGetShimCallbacksForDriver.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall KsepIsModuleShimmed(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rax
  signed __int8 v9; // cf
  char *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v13; // rdx

  v3 = 0;
  if ( !a2 || !a1 || !a3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = (char *)KeAbPreAcquire((__int64)&qword_140E66C40, 0LL);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E66C40, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140E66C40, v8, (__int64)&qword_140E66C40);
  if ( v10 )
    v10[10] = 1;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66C40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66C40);
  KeAbPostRelease((ULONG_PTR)&qword_140E66C40);
  KeLeaveCriticalRegion();
  return v3;
}
