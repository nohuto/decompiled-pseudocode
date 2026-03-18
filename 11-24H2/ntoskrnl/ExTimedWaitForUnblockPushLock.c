/*
 * XREFs of ExTimedWaitForUnblockPushLock @ 0x1402C6D50
 * Callers:
 *     ExBlockOnAddressPushLock @ 0x1402C6C40 (ExBlockOnAddressPushLock.c)
 *     ExpUnblockPushLock @ 0x1402C793C (ExpUnblockPushLock.c)
 *     ExWaitForUnblockPushLock @ 0x1402C85D0 (ExWaitForUnblockPushLock.c)
 *     CmpWaitForLateUnloadWorker @ 0x1402C8600 (CmpWaitForLateUnloadWorker.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x14045D1A8 (RtlpCSparseBitmapWaitOnAddress.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1402C793C (ExpUnblockPushLock.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

__int64 __fastcall ExTimedWaitForUnblockPushLock(__int64 a1, char *a2, LARGE_INTEGER *a3)
{
  volatile signed __int32 *v3; // r9
  __int64 v4; // rbx
  int v8; // edx
  unsigned int v10; // ebx
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  *(_WORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  v3 = (volatile signed __int32 *)(a2 + 52);
  v4 = (unsigned int)ExpSpinCycleCount;
  a2[2] = 6;
  *((_QWORD *)a2 + 2) = a2 + 8;
  *((_QWORD *)a2 + 1) = a2 + 8;
  if ( MEMORY[0xFFFFF7800000036A] <= 1u )
  {
LABEL_9:
    if ( _interlockedbittestandreset(v3, 1u) )
    {
      v10 = KeWaitForSingleObject(a2, WrPushLock, 0, 0, a3);
      if ( v10 )
      {
        LOBYTE(v11) = 1;
        ExpUnblockPushLock(a1, a2, v11);
      }
    }
    else
    {
      return 0;
    }
    return v10;
  }
  else
  {
    if ( a2 != (char *)-52LL && MEMORY[0xFFFFF78000000297] )
    {
      v12 = __rdtsc();
      v13 = v12 + v4;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (*v3 & 2) == 0 )
          break;
        v14 = v12;
        v15 = __rdtsc();
        v12 = v15;
        if ( v15 < v14 || v15 >= v13 )
          goto LABEL_9;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      v8 = 0;
      while ( (*v3 & 2) != 0 )
      {
        if ( v8 == (unsigned int)v4 / MEMORY[0xFFFFF780000002D6] )
          goto LABEL_9;
        _mm_pause();
        ++v8;
      }
    }
    return 0LL;
  }
}
