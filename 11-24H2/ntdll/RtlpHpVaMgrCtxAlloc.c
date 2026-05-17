/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x1800929C4
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180091A20 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x180092190 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rax
  __int64 v9; // rbx
  volatile signed __int64 *v11; // rbp
  unsigned int v12; // edx

  v4 = *a4;
  if ( (_DWORD)v4 == -1 )
  {
    v11 = (volatile signed __int64 *)(a1 + 2144);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 2144));
    v9 = a1 + 2160;
    v12 = 0;
    while ( v12 < *(_DWORD *)(a1 + 2156) )
    {
      if ( *(_QWORD *)(v9 + 24) )
      {
        ++v12;
        if ( ((*(unsigned __int8 *)(v9 + 46) >> 1) & 7) == a4[1]
          && *(unsigned __int8 *)(v9 + 45) == a4[2]
          && *(_QWORD *)(v9 + 32) == *((_QWORD *)a4 + 2)
          && ((*((_BYTE *)a4 + 12) ^ (*(_BYTE *)(v9 + 46) >> 4)) & 1) == 0 )
        {
          goto LABEL_10;
        }
      }
      v9 += 48LL;
    }
    v9 = 0LL;
LABEL_10:
    RtlReleaseSRWLockShared(v11);
  }
  else
  {
    v9 = a1 + 48 * (v4 + 45);
  }
  return RtlpHpVaMgrAlloc(v9, a2, a3);
}
