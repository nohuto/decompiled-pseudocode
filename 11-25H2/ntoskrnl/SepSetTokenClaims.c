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

__int64 __fastcall SepSetTokenClaims(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  char v6; // r14
  __int64 result; // rax
  unsigned int v8; // r15d
  PVOID v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // rsi
  __int64 *v12; // rax
  __int64 *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rsi
  PVOID P; // [rsp+30h] [rbp-28h] BYREF

  P = 0LL;
  v6 = 0;
  result = SepCreateClaimAttributes((unsigned int)&P, a2, a3, a4, a5);
  v8 = result;
  if ( (int)result >= 0 )
  {
    v9 = P;
    if ( !P )
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
      return result;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v11 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 104LL);
      v12 = KeAbPreAcquire((__int64)v11, 0LL);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, v12, (__int64)v11);
      if ( v13 )
        *((_BYTE *)v13 + 10) = 1;
      v14 = *(_QWORD *)(a1 + 216);
      if ( !*(_QWORD *)(v14 + 112) )
      {
        v6 = 1;
        *(_QWORD *)(v14 + 112) = P;
      }
      v15 = *(_QWORD *)(a1 + 216);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 104));
      KeAbPostRelease(v15 + 104);
      KeLeaveCriticalRegion();
      v9 = P;
      if ( v6 )
        goto LABEL_17;
    }
    if ( SepCompareClaimAttributes((unsigned int *)v9, *(unsigned int **)(*(_QWORD *)(a1 + 216) + 112LL)) )
    {
LABEL_17:
      *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
      if ( !v6 )
        SepDeleteClaimAttributes(v9);
    }
    else
    {
      *(_DWORD *)(a1 + 200) |= 0x8000u;
      *(_QWORD *)(a1 + 1096) = v9;
    }
  }
  return v8;
}
