/*
 * XREFs of RtlpHpVaMgrCtxAllocatorReference @ 0x140602F30
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x140602A30 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxStart @ 0x14060319C (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpInitializeLock @ 0x1403D970C (RtlpHpInitializeLock.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x1404F68D8 (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorReference(int *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r9d
  ULONG_PTR v4; // rbp
  unsigned int v7; // r14d
  char v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int16 v11; // ax
  char v12; // al
  char v13; // r8
  _QWORD *v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(int *)(a2 + 4);
  v3 = a1[538];
  v4 = (ULONG_PTR)(a1 + 536);
  v15 = 0LL;
  v7 = (v3
      - ((`RtlpHpMemoryTypePageSize'::`2'::PageSize[v2] - 1) & (unsigned int)(`RtlpHpMemoryTypePageSize'::`2'::PageSize[v2]
                                                                            + v3
                                                                            - 1))
      + `RtlpHpMemoryTypePageSize'::`2'::PageSize[v2]
      - 1) >> 20;
  v8 = RtlpHpAcquireLockExclusive(a1 + 536, 1);
  v9 = RtlpHpVaMgrCtxAllocatorFind((__int64)a1, a2, v7, &v15);
  v10 = (_QWORD *)v9;
  if ( v9 )
  {
    v11 = *(_WORD *)(v9 + 42);
    if ( v11 == -1 )
      v10 = 0LL;
    else
      *((_WORD *)v10 + 21) = v11 + 1;
  }
  else if ( v15 )
  {
    v10 = v15;
    RtlpHpInitializeLock(v15, *(_DWORD *)(a2 + 4) != 0);
    v10[4] = *(_QWORD *)(a2 + 16);
    *((_WORD *)v10 + 20) = v7;
    *((_WORD *)v10 + 21) = 1;
    v10[3] = a1;
    *((_BYTE *)v10 + 45) = *(_BYTE *)(a2 + 8);
    v12 = *((_BYTE *)v10 + 46) & 0xFE;
    *((_BYTE *)v10 + 44) = ((char *)v10 - (char *)a1 - 2160) / 48;
    *((_BYTE *)v10 + 46) = (16 * (*(_BYTE *)(a2 + 12) & 1)) | ((v13 | v12) & 0xF1 ^ (2 * (*(_BYTE *)(a2 + 4) & 7))) & 0xEF;
    ++a1[539];
  }
  RtlpHpReleaseLockExclusive(v4, 1LL, v8);
  if ( v10 )
    return *((unsigned __int8 *)v10 + 44);
  else
    return 0xFFFFFFFFLL;
}
