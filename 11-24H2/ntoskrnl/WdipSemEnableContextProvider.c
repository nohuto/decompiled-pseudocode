/*
 * XREFs of WdipSemEnableContextProvider @ 0x140A3E354
 * Callers:
 *     WdipSemEnableContextProviders @ 0x140A3E2F8 (WdipSemEnableContextProviders.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     WdipSemEnableDisableTrace @ 0x140A3E4E0 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemEnableContextProvider(__int64 a1)
{
  int v1; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rbx
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
  v4 = (char *)KeAbPreAcquire((__int64)&qword_140F021A8, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F021A8, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140F021A8, v4, (__int64)&qword_140F021A8);
  if ( v6 )
    v6[10] = 1;
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
  _m_prefetchw(&qword_140F021A8);
  v14 = qword_140F021A8 - 16;
  if ( (qword_140F021A8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (qword_140F021A8 & 2) != 0
    || (v15 = qword_140F021A8,
        v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F021A8, v14, qword_140F021A8)) )
  {
    ExfReleasePushLock(&qword_140F021A8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F021A8);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
