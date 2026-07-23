/*
 * XREFs of ObQueryRefTraceInformation @ 0x140742B28
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 */

__int64 __fastcall ObQueryRefTraceInformation(char *Address, SIZE_T Length, unsigned int *a3)
{
  unsigned int v3; // r12d
  unsigned int v5; // r14d
  unsigned int v6; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rax
  char *v9; // r13
  char v10; // cl
  unsigned __int16 v11; // r13
  char *v12; // r12
  __int16 v13; // ax
  unsigned int i; // r8d
  unsigned int j; // r9d
  __int64 v16; // r11

  v3 = Length;
  v5 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
    ProbeForWrite(Address, (unsigned int)Length, 8u);
  v6 = 40;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (char *)KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v8, (__int64)&ObpStackTraceLock);
  if ( v9 )
    v9[10] = 1;
  v10 = ObpTraceFlags;
  if ( (ObpTraceFlags & 2) == 0 )
  {
    if ( v3 >= 0x28 )
    {
      *Address = 0;
      goto LABEL_29;
    }
    goto LABEL_18;
  }
  v11 = 0;
  if ( (ObpTraceFlags & 0x20) != 0 )
    v6 = ObpRuntimeTraceProcessName.Length + 42;
  if ( (ObpTraceFlags & 0x10) != 0 )
  {
    do
    {
      if ( !*((_DWORD *)&ObpRuntimeTracePoolTags + v11) )
        break;
      ++v11;
    }
    while ( v11 < 0x10u );
    if ( v11 )
      v6 += 10 * v11;
  }
  if ( v6 > v3 )
  {
LABEL_18:
    v5 = -1073741820;
    goto LABEL_29;
  }
  v12 = Address + 40;
  *(_OWORD *)Address = 0LL;
  *((_OWORD *)Address + 1) = 0LL;
  *((_QWORD *)Address + 4) = 0LL;
  *Address = 1;
  Address[1] = (ObpTraceFlags & 0x40) != 0;
  if ( (v10 & 0x20) != 0 )
  {
    *((_WORD *)Address + 4) = ObpRuntimeTraceProcessName.Length;
    *((_WORD *)Address + 5) = ObpRuntimeTraceProcessName.MaximumLength;
    *((_QWORD *)Address + 2) = v12;
    memmove(Address + 40, ObpRuntimeTraceProcessName.Buffer, ObpRuntimeTraceProcessName.MaximumLength);
    v12 += 2 * ((unsigned __int64)ObpRuntimeTraceProcessName.MaximumLength >> 1);
  }
  if ( (ObpTraceFlags & 0x10) != 0 )
  {
    v13 = 2 * (5 * v11 - 1);
    *((_WORD *)Address + 12) = v13;
    *((_WORD *)Address + 13) = v13 + 2;
    *((_QWORD *)Address + 4) = v12;
    for ( i = 0; i < v11; ++i )
    {
      for ( j = 0; ; ++j )
      {
        v16 = j + 5 * i;
        if ( j >= 4 )
          break;
        *(_WORD *)&v12[2 * v16] = (unsigned __int8)(*((_DWORD *)&ObpRuntimeTracePoolTags + i) >> (8 * j));
      }
      *(_WORD *)&v12[2 * v16] = 59;
    }
    *(_WORD *)&v12[10 * v11 - 2] = 0;
  }
LABEL_29:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  KeLeaveGuardedRegion();
  if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741820 )
  {
    if ( a3 )
      *a3 = v6;
  }
  return v5;
}
