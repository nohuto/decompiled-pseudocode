/*
 * XREFs of WdipSemEnableContextProvider @ 0x140A485A4
 * Callers:
 *     WdipSemEnableContextProviders @ 0x140A48548 (WdipSemEnableContextProviders.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     WdipSemEnableDisableTrace @ 0x140A48730 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemEnableContextProvider(__int64 a1)
{
  int v1; // esi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  signed __int8 v5; // cf
  _QWORD *v6; // rbx
  __int64 v7; // rbx
  unsigned __int8 v8; // bp
  unsigned __int8 v9; // al
  int v10; // edx
  __int64 v11; // r15
  int v12; // r8d
  int v13; // r14d
  signed __int64 v14; // rdx
  ULONG_PTR v15; // rtt

  v1 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&qword_140F01F08, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F01F08, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140F01F08, (__int64)v4, (__int64)&qword_140F01F08);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      v8 = *(_BYTE *)(a1 + 18);
      v9 = *(_BYTE *)(v7 + 48);
      v10 = *(_DWORD *)(v7 + 64);
      if ( v8 <= v9 )
        v8 = *(_BYTE *)(v7 + 48);
      v11 = *(_QWORD *)(a1 + 24) | *(_QWORD *)(v7 + 56);
      v12 = 0;
      v13 = *(_DWORD *)(a1 + 36) | v10;
      if ( *(_BYTE *)(v7 + 69) && v11 == *(_QWORD *)(v7 + 56) && v8 == v9 && v13 == v10 )
      {
        ++*(_DWORD *)(v7 + 72);
      }
      else
      {
        LOBYTE(v12) = v8;
        v1 = WdipSemEnableDisableTrace(
               _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
               a1,
               v12,
               *(_DWORD *)(a1 + 24) | *(_DWORD *)(v7 + 56),
               v13,
               1);
        if ( v1 >= 0 )
        {
          ++*(_DWORD *)(v7 + 72);
          *(_BYTE *)(v7 + 69) = 1;
          *(_QWORD *)(v7 + 56) = v11;
          *(_BYTE *)(v7 + 48) = v8;
          *(_DWORD *)(v7 + 64) = v13;
        }
      }
    }
  }
  else
  {
    v1 = -1073741811;
  }
  _m_prefetchw(&qword_140F01F08);
  v14 = qword_140F01F08 - 16;
  if ( (qword_140F01F08 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (qword_140F01F08 & 2) != 0
    || (v15 = qword_140F01F08,
        v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F01F08, v14, qword_140F01F08)) )
  {
    ExfReleasePushLock(&qword_140F01F08);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F01F08);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
