/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x18009D554
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x18009C5B0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x18009CD20 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rax
  __int64 v7; // rbx
  _RTL_SRWLOCK *v9; // rbp
  unsigned int v10; // edx

  v4 = *a4;
  if ( (_DWORD)v4 == -1 )
  {
    v9 = (_RTL_SRWLOCK *)(a1 + 2144);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 2144));
    v7 = a1 + 2160;
    v10 = 0;
    while ( v10 < *(_DWORD *)(a1 + 2156) )
    {
      if ( *(_QWORD *)(v7 + 24) )
      {
        ++v10;
        if ( ((*(unsigned __int8 *)(v7 + 46) >> 1) & 7) == a4[1]
          && *(unsigned __int8 *)(v7 + 45) == a4[2]
          && *(_QWORD *)(v7 + 32) == *((_QWORD *)a4 + 2)
          && ((*((_BYTE *)a4 + 12) ^ (*(_BYTE *)(v7 + 46) >> 4)) & 1) == 0 )
        {
          goto LABEL_10;
        }
      }
      v7 += 48LL;
    }
    v7 = 0LL;
LABEL_10:
    RtlReleaseSRWLockShared(v9);
  }
  else
  {
    v7 = a1 + 48 * (v4 + 45);
  }
  return RtlpHpVaMgrAlloc((PRTL_SRWLOCK)v7);
}
