/*
 * XREFs of CmOpenKeyForBugCheckRecovery @ 0x1407BFCB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1407CB86C (CmpLockKeyBodyIntoMemory.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086B298 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     CmOpenKey @ 0x140A31750 (CmOpenKey.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmOpenKeyForBugCheckRecovery(_QWORD *a1, int a2, int a3, int a4)
{
  void *v7; // r15
  void *v8; // r14
  unsigned int v9; // edi
  __int64 v10; // r8
  bool v11; // zf
  int started; // esi
  char v13; // al
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v16; // r13
  void *v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  _OWORD v20[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD *v22; // [rsp+B0h] [rbp+40h] BYREF

  memset(v20, 0, sizeof(v20));
  v19 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v19);
  v7 = 0LL;
  v8 = 0LL;
  LOBYTE(v9) = 0;
  v22 = 0LL;
  v11 = (*(_DWORD *)(v10 + 24) & 0x200) == 0;
  v18 = 0LL;
  if ( v11 )
  {
    started = -1073741811;
  }
  else
  {
    v13 = CmpAcquireShutdownRundown();
    v9 = v13 & 1;
    if ( (v13 & 1) != 0 )
    {
      started = CmOpenKey((unsigned int)&v18, a2, a3, a4, 0LL, 0);
      if ( started < 0 )
      {
        v8 = v18;
      }
      else
      {
        v8 = v18;
        started = CmObReferenceObjectByHandle((_DWORD)v18, a2, v15, 0, (__int64)&v22, 0LL);
        if ( started < 0 )
        {
          v7 = v22;
        }
        else
        {
          CmpLockRegistry();
          v7 = v22;
          v9 |= 2u;
          v16 = v22[1];
          started = CmpStartKcbStackForTopLayerKcb(v20, v16);
          if ( started >= 0 )
          {
            CmpLockKcbStackTopExclusiveRestShared(v20);
            v9 |= 4u;
            started = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
            if ( started >= 0 )
            {
              if ( (*(_DWORD *)(v16 + 184) & 0x40000) != 0 )
              {
                started = CmpLockKeyBodyIntoMemory(v7);
                if ( started >= 0 )
                {
                  *a1 = v8;
                  v8 = 0LL;
                  started = 0;
                }
              }
              else
              {
                started = -1073741811;
              }
            }
          }
        }
      }
      if ( v9 >= 4 )
        CmpUnlockKcbStack(v20);
    }
    else
    {
      started = -1073741431;
    }
    if ( (v9 & 2) != 0 )
      CmpUnlockRegistry(v14);
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v8 )
    ObCloseHandle(v8, 0);
  if ( (v9 & 1) != 0 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v19);
  return (unsigned int)started;
}
