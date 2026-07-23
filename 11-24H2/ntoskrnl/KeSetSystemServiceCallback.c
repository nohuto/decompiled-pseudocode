/*
 * XREFs of KeSetSystemServiceCallback @ 0x14073B060
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiGetSystemServiceTraceTable @ 0x14073B234 (KiGetSystemServiceTraceTable.c)
 */

__int64 __fastcall KeSetSystemServiceCallback(_BYTE *a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 SystemServiceTraceTable; // r8
  unsigned int v10; // edx
  unsigned int i; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char *v15; // rax
  signed __int8 v16; // cf
  char *v17; // r14
  _QWORD *v18; // rcx
  char v19; // bp
  char v20; // dl
  signed __int32 v22[18]; // [rsp+0h] [rbp-48h] BYREF

  v4 = 0;
  if ( !a3 || a3 == *(__int64 *)((char *)&KiDynamicTraceCallouts + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 24) )
  {
    SystemServiceTraceTable = KiGetSystemServiceTraceTable();
    if ( SystemServiceTraceTable )
    {
      v10 = 0;
      while ( *a1 )
      {
        v10 = ((1025 * (v10 + (char)*a1)) >> 6) ^ (1025 * (v10 + (char)*a1));
        ++a1;
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= 0x1E9 )
          return (unsigned int)-1073741275;
        v12 = (unsigned __int64)i << 6;
        if ( v10 == *(_DWORD *)(v12 + SystemServiceTraceTable + 52) )
          break;
      }
      v13 = v12 + SystemServiceTraceTable + 16;
      if ( !v13 )
        return (unsigned int)-1073741275;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = (char *)KeAbPreAcquire((__int64)&KiSystemServiceTraceCallbackLock, 0LL);
      v16 = _interlockedbittestandset64((volatile signed __int32 *)&KiSystemServiceTraceCallbackLock, 0LL);
      v17 = v15;
      if ( v16 )
        ExfAcquirePushLockExclusiveEx(
          &KiSystemServiceTraceCallbackLock,
          v15,
          (__int64)&KiSystemServiceTraceCallbackLock);
      if ( v17 )
        v17[10] = 1;
      v18 = (_QWORD *)(v13 + 48);
      if ( !a2 )
        v18 = (_QWORD *)(v13 + 56);
      v19 = -a2;
      v20 = *(_BYTE *)(v13 - (v19 != 0) + 41);
      if ( a3 )
      {
        if ( v20 )
        {
          v4 = -1073740008;
        }
        else
        {
          *v18 = a4;
          _InterlockedOr(v22, 0);
          *(_BYTE *)(v13 - (v19 != 0) + 41) = 1;
          if ( ++KiSystemServiceTraceCallbackCount == 1 )
            _InterlockedOr(&KiDynamicTraceMask, 1u);
        }
      }
      else if ( v20 )
      {
        if ( !--KiSystemServiceTraceCallbackCount )
          _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFE);
        *(_BYTE *)(v13 - (v19 != 0) + 41) = 0;
        _InterlockedOr(v22, 0);
        while ( KiSystemServiceTraceCallbacksActive )
          _mm_pause();
        *v18 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&KiSystemServiceTraceCallbackLock,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock);
      KeAbPostRelease((ULONG_PTR)&KiSystemServiceTraceCallbackLock);
      KeLeaveCriticalRegion();
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
