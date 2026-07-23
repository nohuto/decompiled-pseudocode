/*
 * XREFs of CmOpenKeyForBugCheckRecovery @ 0x1407CF8D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1407DB580 (CmpLockKeyBodyIntoMemory.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     CmOpenKey @ 0x1409DE810 (CmOpenKey.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmOpenKeyForBugCheckRecovery(_QWORD *a1, int a2, __int64 a3, int a4)
{
  void *v7; // r15
  void *v8; // r14
  unsigned int v9; // edi
  bool v10; // zf
  int started; // esi
  char v12; // al
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // r13
  void *v17; // [rsp+30h] [rbp-40h] BYREF
  __int128 v18; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h]
  _OWORD v20[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v22; // [rsp+B0h] [rbp+40h] BYREF

  memset(v20, 0, sizeof(v20));
  v19 = 0LL;
  v18 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v18);
  v7 = 0LL;
  v8 = 0LL;
  LOBYTE(v9) = 0;
  v22 = 0LL;
  v10 = (*(_DWORD *)(a3 + 24) & 0x200) == 0;
  v17 = 0LL;
  if ( v10 )
  {
    started = -1073741811;
  }
  else
  {
    v12 = CmpAcquireShutdownRundown();
    v9 = v12 & 1;
    if ( (v12 & 1) != 0 )
    {
      started = CmOpenKey((unsigned int)&v17, a2, a3, a4, 0LL, 0);
      if ( started < 0 )
      {
        v8 = v17;
      }
      else
      {
        v8 = v17;
        started = CmObReferenceObjectByHandle((_DWORD)v17, a2, v14, 0, (__int64)&v22, 0LL);
        if ( started < 0 )
        {
          v7 = v22;
        }
        else
        {
          CmpLockRegistry();
          v7 = v22;
          v9 |= 2u;
          v15 = v22[1];
          started = CmpStartKcbStackForTopLayerKcb(v20, v15);
          if ( started >= 0 )
          {
            CmpLockKcbStackTopExclusiveRestShared(v20);
            v9 |= 4u;
            started = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
            if ( started >= 0 )
            {
              if ( (*(_DWORD *)(v15 + 184) & 0x40000) != 0 )
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
      CmpUnlockRegistry(v13);
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v8 )
    ObCloseHandle(v8, 0);
  if ( (v9 & 1) != 0 )
    CmpReleaseShutdownRundown();
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v18);
  return (unsigned int)started;
}
