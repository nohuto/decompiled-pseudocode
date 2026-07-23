/*
 * XREFs of PspSetProcessTimerDelayForKTimers @ 0x1405E3280
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x1405E2DC8 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KeAdjustTimerDelayProcess @ 0x1405B57E8 (KeAdjustTimerDelayProcess.c)
 *     ExpTimerAdjust @ 0x140655B90 (ExpTimerAdjust.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForKTimers(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  unsigned int v3; // esi
  __int64 v4; // rbx
  KIRQL v5; // al
  KIRQL v6; // r12
  KIRQL v7; // dl
  unsigned __int64 v8; // r13
  unsigned int v9; // ecx
  unsigned __int64 v10; // rbp
  volatile signed __int32 *v11; // r14
  unsigned __int64 v12; // r13
  volatile signed __int32 *v13; // r15
  char v14; // al
  __int64 v15; // rbx
  _QWORD *v16; // r14
  KIRQL v18; // [rsp+70h] [rbp+8h]
  unsigned __int64 v19; // [rsp+78h] [rbp+10h]

  v1 = (KSPIN_LOCK *)(a1 + 1800);
  v3 = 10000 * (*(_DWORD *)(a1 + 1776) & 0x3FFFFFFF);
  v4 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1800));
  v6 = v5;
  v18 = v5;
  if ( v3 == *(_DWORD *)(a1 + 68) )
  {
    v7 = v5;
  }
  else
  {
    v8 = MEMORY[0xFFFFF78000000008];
    v9 = *(_DWORD *)(a1 + 68);
    v19 = MEMORY[0xFFFFF78000000008];
    if ( v3 <= v9 )
    {
      if ( v3 < v9 )
      {
        v10 = -1LL;
        v11 = *(volatile signed __int32 **)(a1 + 1808);
        if ( v11 != (volatile signed __int32 *)(a1 + 1808) )
        {
          v12 = 0LL;
          do
          {
            v13 = v11 - 72;
            KiAcquireKobjectLockSafe(v11 - 72);
            v14 = *((_BYTE *)v11 - 285) & 0x40;
            if ( v14 )
              v12 = *((_QWORD *)v13 + 3);
            _InterlockedAnd(v13, 0xFFFFFF7F);
            if ( v14 && v12 < v10 )
              v10 = v12;
            v11 = *(volatile signed __int32 **)v11;
          }
          while ( v11 != (volatile signed __int32 *)(a1 + 1808) );
          v8 = v19;
        }
        v6 = v18;
        v15 = *(_DWORD *)(a1 + 68) - v3;
        if ( v10 - v15 >= v8 )
          v4 = -v15;
        else
          v4 = v8 - v10;
        v1 = (KSPIN_LOCK *)(a1 + 1800);
      }
    }
    else
    {
      v4 = v3 - v9;
    }
    v16 = *(_QWORD **)(a1 + 1808);
    if ( v16 != (_QWORD *)(a1 + 1808) )
    {
      do
      {
        ExpTimerAdjust((PKTIMER)(v16 - 36), v8);
        v16 = (_QWORD *)*v16;
      }
      while ( v16 != (_QWORD *)(a1 + 1808) );
      v1 = (KSPIN_LOCK *)(a1 + 1800);
    }
    KeAdjustTimerDelayProcess(a1, v4, v3);
    v7 = v6;
  }
  KeReleaseSpinLock(v1, v7);
  return 0LL;
}
