/*
 * XREFs of MiRemoveMdlPages @ 0x1407EBBA8
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14039469C (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140398278 (MiFreeContiguousPages.c)
 *     MiSetPfnOwnedAndActive @ 0x140450A30 (MiSetPfnOwnedAndActive.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x14066FA58 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiSortMdlFrames @ 0x140673258 (MiSortMdlFrames.c)
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiRemoveMdlPages(char *P, __int64 a2)
{
  __int64 *v2; // r15
  unsigned __int64 v3; // r14
  __int64 v4; // r13
  _DWORD *v5; // rdi
  int v6; // eax
  char *v7; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // r12
  int v10; // r8d
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // edi
  ULONG_PTR v16; // r14
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdi
  int v20; // [rsp+20h] [rbp-78h]
  char *v21; // [rsp+30h] [rbp-68h]
  unsigned __int64 v22; // [rsp+40h] [rbp-58h]
  int v25; // [rsp+B0h] [rbp+18h]
  int v26; // [rsp+B8h] [rbp+20h]

  v2 = (__int64 *)(P + 48);
  v3 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
  v4 = a2;
  v5 = P;
  v22 = v3;
  v6 = *(_DWORD *)(a2 + 56);
  v7 = &P[8 * v3 + 48];
  v21 = v7;
  if ( (v6 & 0x60) == 0 || *(_QWORD *)(v4 + 24) < 0x200uLL )
  {
    MiSortMdlFrames((__int64)P);
    v7 = v21;
  }
  v8 = 0LL;
  v9 = -1LL;
  v26 = 0;
  v10 = 0;
  v25 = (*(_DWORD *)(v4 + 56) >> 15) & 0x10 | 0x500000;
  v11 = 0LL;
  v12 = 0LL;
  v13 = -1LL;
  v14 = v2 == (__int64 *)v7;
  if ( v2 <= (__int64 *)v7 )
  {
    v15 = (*(_DWORD *)(v4 + 56) >> 15) & 0x10 | 0x500000;
    v16 = -1LL;
    do
    {
      if ( v14 || (v9 = *v2, *v2 != v13) )
      {
        if ( v11 )
        {
          if ( v10 < 0 || (v26 = MiRemovePhysicalMemory(v16, v11, v15), v10 = v26, v26 < 0) )
          {
            v17 = 48 * v16 - 0x220000000000LL;
            v18 = v11;
            do
            {
              LOWORD(v20) = 2;
              MiSetPfnOwnedAndActive(v17, 1LL, -8LL, (unsigned __int8)BYTE2(*(_DWORD *)(v17 + 32)) >> 6, v20);
              v17 += 48LL;
              --v18;
            }
            while ( v18 );
            v15 = v25;
            MiFreeContiguousPages(v16, v11, 32LL);
            v10 = v26;
            v12 += v11;
          }
          v7 = v21;
        }
        v16 = v9;
        v11 = 1LL;
      }
      else
      {
        ++v11;
      }
      ++v2;
      v13 = v9 + 1;
      v14 = v2 == (__int64 *)v7;
    }
    while ( v2 <= (__int64 *)v7 );
    v5 = P;
    v3 = v22;
    v4 = a2;
  }
  _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)v4 + 19648LL), -(__int64)v3);
  if ( !v12 )
  {
    v8 = v5;
    if ( !v3 )
      return v8;
LABEL_24:
    MiRemovePhysicalMemoryBatchComplete();
    return v5;
  }
  if ( v12 != v3 )
  {
    v5[10] -= (_DWORD)v12 << 12;
    goto LABEL_24;
  }
  ExFreePoolWithTag(v5, 0);
  return v8;
}
