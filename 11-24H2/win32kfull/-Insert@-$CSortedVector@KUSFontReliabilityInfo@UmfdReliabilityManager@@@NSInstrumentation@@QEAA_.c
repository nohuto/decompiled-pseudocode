/*
 * XREFs of ?Insert@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_NAEBKAEBUSFontReliabilityInfo@UmfdReliabilityManager@@@Z @ 0x14033E7C8
 * Callers:
 *     ?SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z @ 0x14033EA0C (-SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140094BEC (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140095C68 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?LowerBound@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEBA_KAEBK@Z @ 0x14033E918 (-LowerBound@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@Q.c)
 *     ?ReAllocate@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@AEAA_N_K@Z @ 0x14033E964 (-ReAllocate@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@A.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::Insert(
        struct W32_PUSH_LOCK *a1,
        _DWORD *a2,
        _BYTE *a3)
{
  char v6; // di
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  W32AcquirePushLockExclusive(a1);
  v6 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)a1 + 4, 0, 1);
  _InterlockedAdd((volatile signed __int32 *)a1 + 7, 1u);
  if ( *((_DWORD *)a1 + 6) )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)a1 + 1) = &Event;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 4, -1, 0) != 1 )
      KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  }
  v7 = NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::LowerBound(a1, a2);
  v8 = *((_QWORD *)a1 + 5);
  if ( v7 < v8 && (v9 = *((_QWORD *)a1 + 6), *(_DWORD *)(v9 + 8 * v7) == *a2) )
  {
    *(_BYTE *)(v9 + 8 * v7 + 4) = *a3;
  }
  else
  {
    v10 = *((_QWORD *)a1 + 4);
    if ( v8 != v10
      || (unsigned __int8)NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::ReAllocate(
                            a1,
                            2 * v10) )
    {
      memmove(
        (void *)(*((_QWORD *)a1 + 6) + 8 * v7 + 8),
        (const void *)(*((_QWORD *)a1 + 6) + 8 * v7),
        8 * (*((_QWORD *)a1 + 5) - v7));
      v11 = *((_QWORD *)a1 + 6);
      *(_DWORD *)(v11 + 8 * v7) = *a2;
      *(_BYTE *)(v11 + 8 * v7 + 4) = *a3;
      ++*((_QWORD *)a1 + 5);
    }
    else
    {
      v6 = 0;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)a1 + 7, 0xFFFFFFFF);
  W32ReleasePushLockExclusive(a1);
  return v6;
}
