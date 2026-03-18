/*
 * XREFs of WdipSemDisableContextProvider @ 0x140A480BC
 * Callers:
 *     WdipSemDisableContextProviders @ 0x140A47CA4 (WdipSemDisableContextProviders.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     WdipSemCaptureState @ 0x1404B01CC (WdipSemCaptureState.c)
 *     WdipSemEnableDisableTrace @ 0x140A48730 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemDisableContextProvider(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // esi
  _QWORD *v6; // rax
  signed __int8 v7; // cf
  _QWORD *v8; // rbx
  int v9; // r8d
  __int64 v10; // rbx
  __int32 v11; // ecx
  signed __int64 v13; // rdx
  ULONG_PTR v14; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 0;
  v6 = KeAbPreAcquire((__int64)&qword_140F01F08, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F01F08, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_140F01F08, (__int64)v6, (__int64)&qword_140F01F08);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( a1 )
  {
    WdipSemCaptureState(a1, a2);
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v10 = *(_QWORD *)(a1 + 40);
      v11 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
      if ( (*(_DWORD *)(v10 + 72))-- == 1 )
      {
        if ( *(_DWORD *)(v10 + 40) )
        {
          LOBYTE(v9) = *(_BYTE *)(v10 + 16);
          v5 = WdipSemEnableDisableTrace(v11, a1, v9, *(_QWORD *)(v10 + 24), *(_DWORD *)(v10 + 32), 1);
          if ( v5 >= 0 )
          {
            *(_BYTE *)(v10 + 48) = *(_BYTE *)(v10 + 16);
            *(_QWORD *)(v10 + 56) = *(_QWORD *)(v10 + 24);
            *(_DWORD *)(v10 + 64) = *(_DWORD *)(v10 + 32);
          }
        }
        else
        {
          v5 = WdipSemEnableDisableTrace(v11, a1, 0, 0, 0, 0);
          if ( v5 >= 0 )
          {
            *(_OWORD *)(v10 + 48) = 0LL;
            *(_OWORD *)(v10 + 64) = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  _m_prefetchw(&qword_140F01F08);
  v13 = qword_140F01F08 - 16;
  if ( (qword_140F01F08 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (qword_140F01F08 & 2) != 0
    || (v14 = qword_140F01F08,
        v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F01F08, v13, qword_140F01F08)) )
  {
    ExfReleasePushLock(&qword_140F01F08);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F01F08);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
