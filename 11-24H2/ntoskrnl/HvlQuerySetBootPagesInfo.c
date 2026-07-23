/*
 * XREFs of HvlQuerySetBootPagesInfo @ 0x14070C68C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlQuerySetBootPagesInfo(_DWORD *a1, unsigned int a2, char a3, char a4, unsigned int *a5)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *v10; // rax
  signed __int8 v11; // cf
  char *v12; // rsi
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
    v10 = (char *)KeAbPreAcquire((__int64)&HvlpBootPagesInfo, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&HvlpBootPagesInfo, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&HvlpBootPagesInfo, v10, (__int64)&HvlpBootPagesInfo);
    if ( v12 )
      v12[10] = 1;
    if ( a4 )
    {
      if ( byte_140F8E248 && !byte_140F8E249 && *(_DWORD *)qword_140F8E260 )
      {
        v13 = 8 * *(_DWORD *)qword_140F8E260 + 8;
        if ( v13 <= a2 )
          memmove(a1, qword_140F8E260, v13);
        else
          v5 = -1073741789;
        *a5 = v13;
      }
      else
      {
        *a5 = 0;
      }
    }
    else if ( byte_140F8E248 && !byte_140F8E249 && *(_DWORD *)qword_140F8E260 )
    {
      if ( a2 == 16 && a1 && !*a1 )
      {
        ExFreePoolWithTag(qword_140F8E260, 0x204C5648u);
        qword_140F8E260 = 0LL;
        byte_140F8E249 = 1;
        KeSetEvent(qword_140F8E250, 0, 0);
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
