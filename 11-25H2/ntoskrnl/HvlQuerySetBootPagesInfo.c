/*
 * XREFs of HvlQuerySetBootPagesInfo @ 0x140702C1C
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlQuerySetBootPagesInfo(_DWORD *a1, unsigned int a2, char a3, char a4, unsigned int *a5)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rax
  signed __int8 v11; // cf
  __int64 *v12; // rsi
  unsigned int v13; // esi

  v5 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741790;
  }
  else if ( (HvlpFlags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((__int64)&HvlpBootPagesInfo, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&HvlpBootPagesInfo, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&HvlpBootPagesInfo, v10, (__int64)&HvlpBootPagesInfo);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    if ( a4 )
    {
      if ( byte_140F8D8A8 && !byte_140F8D8A9 && *(_DWORD *)qword_140F8D8C0 )
      {
        v13 = 8 * *(_DWORD *)qword_140F8D8C0 + 8;
        if ( v13 <= a2 )
          memmove(a1, qword_140F8D8C0, v13);
        else
          v5 = -1073741789;
        *a5 = v13;
      }
      else
      {
        *a5 = 0;
      }
    }
    else if ( byte_140F8D8A8 && !byte_140F8D8A9 && *(_DWORD *)qword_140F8D8C0 )
    {
      if ( a2 == 16 && a1 && !*a1 )
      {
        ExFreePoolWithTag(qword_140F8D8C0, 0x204C5648u);
        qword_140F8D8C0 = 0LL;
        byte_140F8D8A9 = 1;
        KeSetEvent(qword_140F8D8B0, 0, 0);
      }
      else
      {
        v5 = -1073741811;
      }
    }
    else
    {
      v5 = -1073700861;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HvlpBootPagesInfo, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HvlpBootPagesInfo);
    KeAbPostRelease((ULONG_PTR)&HvlpBootPagesInfo);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}
