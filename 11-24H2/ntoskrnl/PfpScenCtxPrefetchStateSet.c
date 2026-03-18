/*
 * XREFs of PfpScenCtxPrefetchStateSet @ 0x140B5B068
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 *     PfpScenCtxScenarioSet @ 0x140B6D510 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PfpScenCtxPrefetchStateSet(ULONG_PTR BugCheckParameter2, int a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  unsigned int v11; // esi
  int v12; // ecx

  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire(BugCheckParameter2, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (__int64)v9, BugCheckParameter2);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    if ( a3 == 1 && (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
    {
      v11 = -1073741431;
    }
    else
    {
      v12 = *(_DWORD *)(BugCheckParameter2 + 8);
      if ( (v12 & 0xC) == 4 )
      {
        KeSetEvent((PRKEVENT)(BugCheckParameter2 + 16), 1, 0);
        *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3;
        v12 = *(_DWORD *)(BugCheckParameter2 + 8);
      }
      *(_DWORD *)(BugCheckParameter2 + 8) = v12 ^ ((unsigned __int8)a3 ^ (unsigned __int8)v12) & 3;
      v11 = 0;
    }
  }
  else
  {
    v11 = -1073741735;
  }
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  return v11;
}
