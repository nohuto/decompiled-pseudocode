/*
 * XREFs of RtlpHpHeapExtendContext @ 0x180033D4C
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x1800B7D20 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180033EB0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataCommit @ 0x180033EE4 (RtlpHpMetadataCommit.c)
 *     RtlpHpAllocVA @ 0x1800BB510 (RtlpHpAllocVA.c)
 */

unsigned __int64 __fastcall RtlpHpHeapExtendContext(__int128 *a1, __int64 a2)
{
  volatile signed __int32 *v2; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int128 v11; // xmm0
  unsigned __int64 v12; // rdi
  bool v13; // zf
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0LL;
  v2 = (volatile signed __int32 *)a1 + 58;
  RtlAcquireReleaseSRWLockExclusive((char *)a1 + 232);
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *((_QWORD *)a1 + 30);
      v6 = v5 + a2;
      if ( v5 + a2 < v5 )
        return 0LL;
      if ( v6 > *((_QWORD *)a1 + 31) )
        break;
      if ( v5 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 30, v6, v5) )
        return v5;
    }
    RtlAcquireSRWLockExclusive(v2);
    v8 = *((_QWORD *)a1 + 30);
    v9 = v8 + a2;
    if ( v8 + a2 < v8 || v9 > *((_QWORD *)a1 + 32) )
      break;
    v10 = *((_QWORD *)a1 + 31);
    if ( v9 > v10 )
    {
      v11 = *a1;
      v17 = *((_QWORD *)a1 + 31);
      v12 = (v9 - v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v13 = (*((_BYTE *)a1 + 30) & 1) == 0;
      v18 = v12;
      if ( v13 )
      {
        v16 = v11;
        v14 = RtlpHpAllocVA((unsigned int)&v17, (unsigned int)&v18, 0, 4096, 4, (__int64)&v16);
        v12 = v18;
      }
      else
      {
        v15 = v11;
        v14 = RtlpHpMetadataCommit((_DWORD)a1, v10, v12, (unsigned int)&v15, 1);
      }
      if ( v14 < 0 )
        break;
      *((_QWORD *)a1 + 31) += v12;
      _InterlockedAdd64((volatile signed __int64 *)a1 + 17, v12 >> 12);
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)v2);
  }
  v5 = 0LL;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)v2);
  return v5;
}
