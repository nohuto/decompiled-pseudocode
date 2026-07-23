/*
 * XREFs of SepSetTokenClaims @ 0x140A53304
 * Callers:
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SepCompareClaimAttributes @ 0x140A19210 (SepCompareClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x140A53380 (SepCreateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x140A752F0 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1)
{
  char v2; // r14
  __int64 result; // rax
  unsigned int v4; // r15d
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rsi
  __int64 *v8; // rax
  __int64 *v9; // rbp
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
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v7 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 104LL);
      v8 = KeAbPreAcquire((__int64)v7, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
        ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      v10 = *(_QWORD *)(a1 + 216);
      if ( !*(_QWORD *)(v10 + 112) )
      {
        v2 = 1;
        *(PVOID *)(v10 + 112) = P[0];
      }
      v11 = *(_QWORD *)(a1 + 216);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 104));
      KeAbPostRelease(v11 + 104);
      KeLeaveCriticalRegion();
      v5 = P[0];
      if ( v2 )
        goto LABEL_17;
    }
    if ( SepCompareClaimAttributes((unsigned int *)v5, *(unsigned int **)(*(_QWORD *)(a1 + 216) + 112LL)) )
    {
LABEL_17:
      *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
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
