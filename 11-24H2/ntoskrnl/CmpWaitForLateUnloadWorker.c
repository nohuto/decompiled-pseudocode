/*
 * XREFs of CmpWaitForLateUnloadWorker @ 0x1402C8600
 * Callers:
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x1402C6D50 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402C793C (ExpUnblockPushLock.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmLockHive @ 0x140845C74 (CmLockHive.c)
 *     CmUnlockHive @ 0x140846740 (CmUnlockHive.c)
 */

__int64 __fastcall CmpWaitForLateUnloadWorker(__int64 a1)
{
  int v2; // esi
  __int64 result; // rax
  signed __int64 *v4; // rdi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  volatile __int64 *v7; // rcx
  signed __int64 v8; // rcx
  char v9[24]; // [rsp+20h] [rbp-48h] BYREF
  signed __int64 v10; // [rsp+38h] [rbp-30h]
  int v11; // [rsp+54h] [rbp-14h]

  ((void (*)(void))CmLockHive)();
  v2 = *(_DWORD *)(a1 + 4800);
  result = CmUnlockHive(a1);
  if ( v2 )
  {
    v4 = (signed __int64 *)(a1 + 4808);
    do
    {
      memset_0(v9, 0, 0x40uLL);
      v11 = 2;
      _m_prefetchw(v4);
      v10 = *v4;
      v6 = v10;
      v5 = _InterlockedCompareExchange64(v4, (signed __int64)v9, v10);
      if ( v6 != v5 )
      {
        do
        {
          v8 = v5;
          v10 = v5;
          v5 = _InterlockedCompareExchange64(v4, (signed __int64)v9, v5);
        }
        while ( v5 != v8 );
      }
      v7 = (volatile __int64 *)(a1 + 4808);
      if ( *(_DWORD *)(a1 + 4800) == v2 )
        ExTimedWaitForUnblockPushLock((__int64)v7, v9, 0LL);
      else
        ExpUnblockPushLock(v7, v9, 0);
      CmLockHive(a1);
      v2 = *(_DWORD *)(a1 + 4800);
      result = CmUnlockHive(a1);
    }
    while ( v2 );
  }
  return result;
}
