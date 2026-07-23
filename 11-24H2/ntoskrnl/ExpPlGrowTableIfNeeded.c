/*
 * XREFs of ExpPlGrowTableIfNeeded @ 0x140653674
 * Callers:
 *     ExpTrackTableInsertLimit @ 0x140653A30 (ExpTrackTableInsertLimit.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 ExpPlGrowTableIfNeeded()
{
  __int64 v0; // rbx
  unsigned int v1; // eax
  char v2; // di
  unsigned int v3; // edi
  char *Pool2; // rsi
  unsigned int v5; // edi
  char i; // cl
  unsigned __int64 v7; // rcx
  char v8; // dl
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r11
  _QWORD *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v0 = 0LL;
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  v1 = 2 * (HIDWORD(ExPoolLimitState) >> 5);
  if ( (unsigned int)ExPoolLimitState >= v1 )
  {
    v0 = v1;
    v2 = 1;
    if ( v1 < 4 )
      v0 = 4LL;
  }
  else
  {
    v2 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    while ( 1 )
    {
      Pool2 = (char *)ExAllocatePool2(0x40uLL, 8LL * (unsigned int)v0, 0x6C6F6F50u);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      v5 = 2 * (HIDWORD(ExPoolLimitState) >> 5);
      if ( (unsigned int)ExPoolLimitState < v5 )
        break;
      if ( v5 < 4 )
        v5 = 4;
      if ( (unsigned int)v0 >= v5 )
      {
        if ( (((_DWORD)v0 - 1) & (unsigned int)v0) != 0 )
        {
          for ( i = -1; (_DWORD)v0; LODWORD(v0) = (unsigned int)v0 >> 1 )
            ++i;
          v0 = (unsigned int)(1 << i);
        }
        if ( (unsigned int)v0 > 0x4000000 )
          v0 = 0x4000000LL;
        v7 = (unsigned int)v0;
        if ( Pool2 > &Pool2[8 * v0] )
          v7 = 0LL;
        if ( v7 )
          memset64(Pool2, (unsigned __int64)&ExPoolLimitState + 1, v7);
        v8 = BYTE4(ExPoolLimitState);
        v9 = 0;
        v10 = -1LL << (BYTE4(ExPoolLimitState) & 0x1F);
        if ( (ExPoolLimitState & 0xFFFFFFE000000000uLL) != 0 )
        {
          do
          {
            v11 = qword_140E290C8;
            while ( 1 )
            {
              v12 = *(_QWORD **)(v11 + 8LL * v9);
              if ( ((unsigned __int8)v12 & 1) != 0 )
                break;
              *(_QWORD *)(v11 + 8LL * v9) = *v12;
              v17 = v10 & v12[1];
              v13 = (37
                   * (BYTE6(v17)
                    + 37
                    * (BYTE5(v17)
                     + 37
                     * (BYTE4(v17)
                      + 37
                      * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))
                   + HIBYTE(v17)) & (unsigned int)(v0 - 1);
              *v12 = *(_QWORD *)&Pool2[8 * v13];
              *(_QWORD *)&Pool2[8 * v13] = v12;
            }
            v8 = BYTE4(ExPoolLimitState);
            ++v9;
          }
          while ( v9 < HIDWORD(ExPoolLimitState) >> 5 );
        }
        v14 = qword_140E290C8;
        qword_140E290C8 = (__int64)Pool2;
        HIDWORD(ExPoolLimitState) = (32 * v0) | v8 & 0x1F;
        Pool2 = (char *)v14;
        break;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExFreePoolWithTag(Pool2, 0);
      v0 = v5;
    }
    v3 = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return 0;
  }
  return v3;
}
