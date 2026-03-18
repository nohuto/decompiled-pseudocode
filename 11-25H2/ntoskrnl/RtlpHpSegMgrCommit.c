/*
 * XREFs of RtlpHpSegMgrCommit @ 0x1402F9CA8
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x1402E15FC (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrAllocate @ 0x1402F93D0 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x1402F97D8 (RtlpHpSegPageRangeCommit.c)
 * Callees:
 *     RtlpHpSegMgrCommitInitiate @ 0x1402FA074 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1402FA244 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402FA31C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpAllocVA @ 0x1402FA5FC (RtlpHpAllocVA.c)
 *     RtlpHpSegMgrCommitComplete @ 0x1402FA834 (RtlpHpSegMgrCommitComplete.c)
 *     MmFreePoolMemory @ 0x1402FAA60 (MmFreePoolMemory.c)
 *     RtlpHpVaMgrCtxFree @ 0x1403CC28C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x1405F97B0 (RtlpHpVaMgrCtxDecommit.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(int *a1, unsigned __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r15d
  unsigned __int64 v8; // r13
  int v9; // r14d
  unsigned int v10; // edi
  unsigned int v11; // r14d
  unsigned __int64 v12; // rbx
  int v15; // r14d
  const signed __int16 *v16; // rdx
  unsigned __int64 v17; // r12
  size_t v18; // rax
  unsigned __int64 v19; // r15
  __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  int v22; // eax
  int v23; // ebx
  int v25; // r15d
  bool v26; // cf
  int v27; // eax
  int v28; // edx
  unsigned __int64 v29; // rcx
  ULONG_PTR v30; // [rsp+20h] [rbp-71h]
  int v31[2]; // [rsp+28h] [rbp-69h]
  __int64 v32; // [rsp+30h] [rbp-61h] BYREF
  int v33[2]; // [rsp+38h] [rbp-59h] BYREF
  const signed __int16 *v34; // [rsp+40h] [rbp-51h]
  size_t Size; // [rsp+48h] [rbp-49h]
  _QWORD v36[2]; // [rsp+50h] [rbp-41h] BYREF
  int v37[4]; // [rsp+60h] [rbp-31h] BYREF
  __int128 v38; // [rsp+70h] [rbp-21h]
  __int128 v39; // [rsp+80h] [rbp-11h] BYREF
  __int128 v40; // [rsp+90h] [rbp-1h]
  unsigned int v41; // [rsp+E0h] [rbp+4Fh]

  v7 = a4;
  v8 = a5;
  v9 = *a1;
  v36[0] = 0LL;
  v10 = a6 & 0xBFFFFFFF;
  v11 = -v9;
  v12 = a3;
  LOBYTE(a5) = 0;
  a6 &= 0x40000000u;
  if ( (int)v8 > 0
    && !(unsigned int)RtlpHpHeapCheckCommitLimit(
                        (int)((_DWORD)v8 << 12),
                        (*(_QWORD *)(*((_QWORD *)a1 + 7) + 136LL) + *(_QWORD *)(*((_QWORD *)a1 + 7) + 96LL)) << 12,
                        *((_QWORD *)a1 + 7),
                        *((_QWORD *)a1 + 7) + 32LL) )
  {
    return (unsigned int)-1073741523;
  }
  if ( (*((_BYTE *)a1 + 13) & 7) != 0 )
  {
    v39 = 0LL;
    v40 = 0LL;
    RtlpHpVaMgrCtxQuery(&unk_140E68098, a2 & 0xFFFFFFFFFFE00000uLL, &v39);
    if ( (int)v8 <= 0 || (_DWORD)v12 || v11 >= 0x200000 || a2 <= (a2 & 0xFFFFFFFFFFE00000uLL) )
    {
      v15 = a7;
    }
    else
    {
      v15 = a7;
      if ( (a7 & 2) == 0 )
        v15 = a7 | 1;
    }
    v7 = a4;
    v16 = (const signed __int16 *)(v40 + 2 * (v12 >> 9));
  }
  else
  {
    v15 = a7;
    v16 = 0LL;
  }
  v17 = (unsigned int)((_DWORD)v12 << 12) + a2;
  v34 = v16;
  v18 = (unsigned int)(v7 << 12);
  Size = v18;
  while ( 1 )
  {
    v41 = v10;
    v19 = v17;
    *(_QWORD *)v33 = v17;
    v20 = v18;
    v32 = v18;
    v21 = v17;
    if ( !v16 )
      goto LABEL_17;
    v22 = RtlpHpSegMgrCommitInitiate((_DWORD)a1, (_DWORD)v16, v8, v15, (ULONG_PTR)v36, (__int64)&a5);
    if ( v22 == -1073741568 )
      break;
    if ( v22 == -1073741566 )
    {
      v19 = v17 & 0xFFFFFFFFFFE00000uLL;
      v10 |= 0x20000000u;
      *(_QWORD *)v33 = v17 & 0xFFFFFFFFFFE00000uLL;
      v20 = 0x200000LL;
      v32 = 0x200000LL;
      v21 = v17 & 0xFFFFFFFFFFE00000uLL;
      if ( (int)v8 <= 0 )
        v10 = v41;
    }
    else
    {
      v21 = v17;
    }
LABEL_17:
    if ( (int)v8 <= 0 )
    {
      v38 = *(_OWORD *)(a1 + 10);
      if ( v10 == 0x8000 )
      {
        *(_QWORD *)v33 = (v21 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
        v32 = v21 - *(_QWORD *)v33 + v20;
        if ( v32 )
          RtlpHpVaMgrCtxFree(&unk_140E68098, v33, &v32);
        goto LABEL_42;
      }
      if ( (unsigned __int8)(BYTE1(v38) - 2) <= 2u )
      {
        RtlpHpVaMgrCtxDecommit(&unk_140E68098, v19, v20);
LABEL_42:
        v23 = 0;
        goto LABEL_20;
      }
      v23 = MmFreePoolMemory(v33, &v32, v10);
    }
    else
    {
      v25 = a6;
      if ( a6 && (v10 & 0x20000000) == 0 )
        v10 |= 0x40000000u;
      v26 = (*(_DWORD *)(*((_QWORD *)a1 + 7) + 20LL) & 0x40000000) != 0;
      *(_OWORD *)v37 = *(_OWORD *)(a1 + 10);
      LODWORD(v30) = v26 ? 64 : 4;
      v27 = RtlpHpAllocVA((int)v33, v30, (int)v37);
      v23 = v27;
      if ( v25 && v27 >= 0 && (v10 & 0x40000000) == 0 )
        memset_0((void *)v17, 0, Size);
    }
LABEL_20:
    v28 = (int)v34;
    if ( !v34 )
      return (unsigned int)v23;
    if ( _bittest16(v34, 0xEu) && v23 >= 0 )
    {
      v29 = 1LL;
      if ( (int)v8 <= 0 )
        v29 = -1LL;
      _InterlockedAdd64((volatile signed __int64 *)((char *)a1 + *((__int16 *)a1 + 10) + 8), v29);
      _InterlockedAdd64((volatile signed __int64 *)((char *)a1 + *((__int16 *)a1 + 10)), v8);
    }
    LOBYTE(v31[0]) = a5;
    RtlpHpSegMgrCommitComplete((_DWORD)a1, v28, v8, v23 >= 0, (ULONG_PTR)v36, *(_QWORD *)v31, v32, *(_QWORD *)v33);
    if ( (v10 & 0x20000000) == 0 || v23 >= 0 || (v15 & 2) != 0 )
      return (unsigned int)v23;
    v16 = v34;
    v15 |= 1u;
    v18 = Size;
    v10 &= ~0x20000000u;
  }
  _InterlockedAdd64((volatile signed __int64 *)((char *)a1 + *((__int16 *)a1 + 10)), v8);
  if ( a6 )
    memset_0((void *)v17, 0, Size);
  return 0;
}
