/*
 * XREFs of RtlpHpVaMgrCtxAllocatorReference @ 0x1800BA0E8
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x1800B9BB8 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxStart @ 0x1800BA024 (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x1800BA248 (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorReference(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 v3; // rax
  _RTL_SRWLOCK *v4; // rbp
  unsigned int v7; // r14d
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  char v13; // al
  bool v14; // zf
  char v15; // dl
  __int16 v17; // ax
  _QWORD *v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 2152);
  v3 = *(int *)(a2 + 4);
  v4 = (_RTL_SRWLOCK *)(a1 + 2144);
  v18 = 0LL;
  v7 = v2
     - ((`RtlpHpMemoryTypePageSize'::`2'::PageSize[v3] - 1) & (`RtlpHpMemoryTypePageSize'::`2'::PageSize[v3] + v2 - 1))
     + `RtlpHpMemoryTypePageSize'::`2'::PageSize[v3]
     - 1;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 2144));
  v8 = v7 >> 20;
  v9 = RtlpHpVaMgrCtxAllocatorFind(a1, a2, v8, &v18);
  v10 = v9;
  if ( v9 )
  {
    v17 = *(_WORD *)(v9 + 42);
    if ( v17 == -1 )
      v10 = 0LL;
    else
      *(_WORD *)(v10 + 42) = v17 + 1;
  }
  else
  {
    v11 = v18;
    if ( v18 )
    {
      *v18 = 0LL;
      v10 = (__int64)v11;
      v11[4] = *(_QWORD *)(a2 + 16);
      v12 = (__int64)v11 - a1 - 2160;
      *((_WORD *)v11 + 20) = v8;
      *((_WORD *)v11 + 21) = 1;
      v11[3] = a1;
      v13 = *(_BYTE *)(a2 + 8);
      v14 = *(_DWORD *)(a2 + 4) == 0;
      *(_BYTE *)(v10 + 44) = v12 / 48;
      v15 = *(_BYTE *)(a2 + 4);
      *(_BYTE *)(v10 + 45) = v13;
      *(_BYTE *)(v10 + 46) = (16 * (*(_BYTE *)(a2 + 12) & 1)) | ((*(_BYTE *)(v10 + 46) & 0xF0 | !v14) ^ (2 * (v15 & 7))) & 0xEF;
      ++*(_DWORD *)(a1 + 2156);
    }
  }
  RtlReleaseSRWLockExclusive(v4);
  if ( v10 )
    return *(unsigned __int8 *)(v10 + 44);
  else
    return 0xFFFFFFFFLL;
}
