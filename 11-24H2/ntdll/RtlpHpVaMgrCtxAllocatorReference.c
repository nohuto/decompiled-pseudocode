/*
 * XREFs of RtlpHpVaMgrCtxAllocatorReference @ 0x180090D68
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x180090838 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxStart @ 0x180090CA4 (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x180090EC8 (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorReference(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 v3; // rax
  volatile signed __int64 *v4; // rbp
  int v7; // r10d
  unsigned __int64 v8; // r8
  unsigned int v9; // r14d
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  char v15; // al
  bool v16; // zf
  char v17; // dl
  __int16 v19; // ax
  _QWORD *v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 2152);
  v3 = *(int *)(a2 + 4);
  v4 = (volatile signed __int64 *)(a1 + 2144);
  v20 = 0LL;
  v7 = `RtlpHpMemoryTypePageSize'::`2'::PageSize[v3];
  v8 = (v7 - 1) & (unsigned int)(v7 + v2 - 1);
  v9 = v2 - v8 + v7 - 1;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 2144), (volatile signed __int32 **)a2, v8);
  v10 = v9 >> 20;
  v11 = RtlpHpVaMgrCtxAllocatorFind(a1, a2, v10, &v20);
  v12 = v11;
  if ( v11 )
  {
    v19 = *(_WORD *)(v11 + 42);
    if ( v19 == -1 )
      v12 = 0LL;
    else
      *(_WORD *)(v12 + 42) = v19 + 1;
  }
  else
  {
    v13 = v20;
    if ( v20 )
    {
      *v20 = 0LL;
      v12 = (__int64)v13;
      v13[4] = *(_QWORD *)(a2 + 16);
      v14 = (__int64)v13 - a1 - 2160;
      *((_WORD *)v13 + 20) = v10;
      *((_WORD *)v13 + 21) = 1;
      v13[3] = a1;
      v15 = *(_BYTE *)(a2 + 8);
      v16 = *(_DWORD *)(a2 + 4) == 0;
      *(_BYTE *)(v12 + 44) = v14 / 48;
      v17 = *(_BYTE *)(a2 + 4);
      *(_BYTE *)(v12 + 45) = v15;
      *(_BYTE *)(v12 + 46) = (16 * (*(_BYTE *)(a2 + 12) & 1)) | ((*(_BYTE *)(v12 + 46) & 0xF0 | !v16) ^ (2 * (v17 & 7))) & 0xEF;
      ++*(_DWORD *)(a1 + 2156);
    }
  }
  RtlReleaseSRWLockExclusive(v4);
  if ( v12 )
    return *(unsigned __int8 *)(v12 + 44);
  else
    return 0xFFFFFFFFLL;
}
