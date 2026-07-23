/*
 * XREFs of SepSetTokenClaims @ 0x140A4E9F4
 * Callers:
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SepCompareClaimAttributes @ 0x140A17C10 (SepCompareClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x140A4EA70 (SepCreateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x140A71894 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1)
{
  char v2; // r14
  __int64 result; // rax
  unsigned int v4; // r15d
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rsi
  char *v8; // rax
  char *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rsi
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF

  P[0] = 0LL;
  v2 = 0;
  result = SepCreateClaimAttributes(P);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = P[0];
    if ( !P[0] )
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
      return result;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v7 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 112LL);
      v8 = (char *)KeAbPreAcquire((__int64)v7, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
        ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
      if ( v9 )
        v9[10] = 1;
      v10 = *(_QWORD *)(a1 + 216);
      if ( !*(_QWORD *)(v10 + 120) )
      {
        v2 = 1;
        *(PVOID *)(v10 + 120) = P[0];
      }
      v11 = *(_QWORD *)(a1 + 216);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 112));
      KeAbPostRelease(v11 + 112);
      KeLeaveCriticalRegion();
      v5 = P[0];
      if ( v2 )
        goto LABEL_17;
    }
    if ( SepCompareClaimAttributes((unsigned int *)v5, *(unsigned int **)(*(_QWORD *)(a1 + 216) + 120LL)) )
    {
LABEL_17:
      *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
      if ( !v2 )
        SepDeleteClaimAttributes(v5);
    }
    else
    {
      *(_DWORD *)(a1 + 200) |= 0x8000u;
      *(_QWORD *)(a1 + 1096) = v5;
    }
  }
  return v4;
}
