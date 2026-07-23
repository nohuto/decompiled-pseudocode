/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x14047C2A8
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140A5CE20 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlDeleteHashTable @ 0x14047C690 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void SepDeleteSessionLowboxEntries()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rdi
  volatile signed __int64 *i; // rsi
  struct _KTHREAD *v5; // rax
  volatile signed __int64 *v6; // rdi
  volatile signed __int64 *v7; // r14
  char *v8; // rax
  char *v9; // rbp
  int v10; // r8d
  int v11; // r10d
  unsigned int v12; // ebp
  _QWORD *v13; // r9
  _QWORD *v14; // rdx
  __int64 j; // r8
  unsigned __int64 v16; // rax
  unsigned int v17; // edx
  volatile signed __int64 v18; // rcx
  volatile signed __int64 **v19; // rax

  if ( g_SessionLowboxMap )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v1 = (char *)KeAbPreAcquire((__int64)&LowboxSessionMapLock, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&LowboxSessionMapLock, 0LL);
    v3 = v1;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(&LowboxSessionMapLock, v1, (__int64)&LowboxSessionMapLock);
    if ( v3 )
      v3[10] = 1;
    for ( i = *(volatile signed __int64 **)g_SessionLowboxMap; i != (volatile signed __int64 *)g_SessionLowboxMap; i = v7 )
    {
      v5 = KeGetCurrentThread();
      v6 = i + 3;
      v7 = (volatile signed __int64 *)*i;
      --v5->KernelApcDisable;
      v8 = (char *)KeAbPreAcquire((__int64)(i + 3), 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)i + 6, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)i + 3, v8, (__int64)(i + 3));
      if ( v9 )
        v9[10] = 1;
      v10 = *((_DWORD *)i + 8);
      v11 = (i[5] & 4) != 0 ? 0x20 : 0;
      v12 = v11 + v10 - 1;
      v13 = (_QWORD *)(*((_QWORD *)i + 5) - ((i[5] & 4) != 0 ? 4 : 0));
      if ( !v10 )
        goto LABEL_24;
      v14 = (_QWORD *)(*((_QWORD *)i + 5) - ((i[5] & 4) != 0 ? 4 : 0));
      for ( j = ~*v13 | ((1LL << v11) - 1); j == -1; j = ~*v14 )
      {
        if ( ++v14 > &v13[(unsigned __int64)v12 >> 6] )
          goto LABEL_24;
      }
      _BitScanForward64(&v16, ~j);
      v17 = v16 + ((unsigned int)(v14 - v13) << 6);
      if ( v17 > v12 || v17 == -1 || v17 - v11 == -1 )
      {
LABEL_24:
        RtlDeleteHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)i + 6));
        ExFreePoolWithTag(*((PVOID *)i + 5), 0);
        v18 = *i;
        if ( *(volatile signed __int64 **)(*i + 8) != i
          || (v19 = (volatile signed __int64 **)*((_QWORD *)i + 1), *v19 != i) )
        {
          __fastfail(3u);
        }
        *v19 = (volatile signed __int64 *)v18;
        *(_QWORD *)(v18 + 8) = v19;
        if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3);
        KeAbPostRelease((ULONG_PTR)(i + 3));
        KeLeaveCriticalRegion();
        ExFreePoolWithTag((PVOID)i, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3);
        KeAbPostRelease((ULONG_PTR)(i + 3));
        KeLeaveCriticalRegion();
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
}
