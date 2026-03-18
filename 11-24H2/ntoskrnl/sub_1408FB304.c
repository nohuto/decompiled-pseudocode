/*
 * XREFs of sub_1408FB304 @ 0x1408FB304
 * Callers:
 *     sub_1408FB1D0 @ 0x1408FB1D0 (sub_1408FB1D0.c)
 *     sub_1408FB2A4 @ 0x1408FB2A4 (sub_1408FB2A4.c)
 *     sub_1408FB3EC @ 0x1408FB3EC (sub_1408FB3EC.c)
 *     sub_1408FB650 @ 0x1408FB650 (sub_1408FB650.c)
 *     sub_1408FBE0C @ 0x1408FBE0C (sub_1408FBE0C.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     sub_1408FCBC0 @ 0x1408FCBC0 (sub_1408FCBC0.c)
 *     sub_140A39DE0 @ 0x140A39DE0 (sub_140A39DE0.c)
 */

__int64 __fastcall sub_1408FB304(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v3; // rbx
  int v5; // esi
  _QWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // rsi
  int v9; // edi
  char v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 224);
  v5 = a1;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 224, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v6, (__int64)v3);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v12 = 0LL;
  v7 = sub_1408FCBC0(v5 + 184, a2, 8, (unsigned int)&v12, (__int64)&v11);
  v8 = 0LL;
  v9 = v7;
  if ( v7 >= 0 )
    v8 = v12;
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveGuardedRegion();
  if ( v9 >= 0 )
    return (unsigned int)sub_140A39DE0(v8, a2);
  return (unsigned int)v9;
}
