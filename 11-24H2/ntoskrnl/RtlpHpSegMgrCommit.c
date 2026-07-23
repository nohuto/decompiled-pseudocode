/*
 * XREFs of RtlpHpSegMgrCommit @ 0x14035E694
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x14035D548 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x14035F6F0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegMgrRelease @ 0x140364450 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     MmFreePoolMemory @ 0x14020C540 (MmFreePoolMemory.c)
 *     RtlpHpAllocVA @ 0x14034AEE8 (RtlpHpAllocVA.c)
 *     RtlpHpSegMgrCommitComplete @ 0x14035D3F4 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14035D9AC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14035E2C4 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x14035E43C (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxFree @ 0x14045930C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x140603130 (RtlpHpVaMgrCtxDecommit.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        char a7)
{
  int v7; // r15d
  unsigned __int64 v8; // r12
  int v9; // r14d
  unsigned int v10; // edi
  unsigned int v11; // r14d
  unsigned __int64 v12; // rbx
  char v15; // r14
  signed __int16 *v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  int v22; // eax
  int v23; // ebx
  int v25; // r15d
  bool v26; // cf
  int v27; // eax
  volatile signed __int16 *v28; // rdx
  unsigned __int64 v29; // rcx
  ULONG_PTR v30; // [rsp+20h] [rbp-71h]
  __int64 v31; // [rsp+30h] [rbp-61h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-59h] BYREF
  signed __int16 *v33; // [rsp+40h] [rbp-51h]
  size_t Size; // [rsp+48h] [rbp-49h]
  int v35[4]; // [rsp+50h] [rbp-41h] BYREF
  __int128 v36; // [rsp+60h] [rbp-31h] BYREF
  __int128 v37; // [rsp+70h] [rbp-21h]
  __int128 v38; // [rsp+80h] [rbp-11h] BYREF
  __int128 v39; // [rsp+90h] [rbp-1h]
  unsigned int v40; // [rsp+E0h] [rbp+4Fh]

  v7 = a4;
  v8 = a5;
  v9 = *(_DWORD *)a1;
  *(_QWORD *)v35 = 0LL;
  v10 = a6 & 0xBFFFFFFF;
  v11 = -v9;
  v12 = a3;
  LOBYTE(a5) = 0;
  a6 &= 0x40000000u;
  if ( (int)v8 > 0 && !(unsigned int)RtlpHpSegHeapCheckCommitLimit((int)((_DWORD)v8 << 12), *(_QWORD **)(a1 + 56)) )
    return (unsigned int)-1073741523;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    v38 = 0LL;
    v39 = 0LL;
    RtlpHpVaMgrCtxQuery((__int64)&unk_140E68558, a2 & 0xFFFFFFFFFFE00000uLL, (__int64)&v38);
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
    v16 = (signed __int16 *)(v39 + 2 * (v12 >> 9));
  }
  else
  {
    v15 = a7;
    v16 = 0LL;
  }
  v17 = (unsigned int)((_DWORD)v12 << 12) + a2;
  v33 = v16;
  v18 = (unsigned int)(v7 << 12);
  Size = v18;
  while ( 1 )
  {
    v40 = v10;
    v19 = v17;
    v32 = v17;
    v20 = v18;
    v31 = v18;
    v21 = v17;
    if ( !v16 )
      goto LABEL_17;
    v22 = RtlpHpSegMgrCommitInitiate(a1, v16, v8, v15, v35, (char *)&a5);
    if ( v22 == -1073741568 )
      break;
    if ( v22 == -1073741566 )
    {
      v19 = v17 & 0xFFFFFFFFFFE00000uLL;
      v10 |= 0x20000000u;
      v32 = v17 & 0xFFFFFFFFFFE00000uLL;
      v20 = 0x200000LL;
      v31 = 0x200000LL;
      v21 = v17 & 0xFFFFFFFFFFE00000uLL;
      if ( (int)v8 <= 0 )
        v10 = v40;
    }
    else
    {
      v21 = v17;
    }
LABEL_17:
    if ( (int)v8 <= 0 )
    {
      v37 = *(_OWORD *)(a1 + 40);
      if ( v10 == 0x8000 )
      {
        v32 = (v21 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
        v31 = v21 - v32 + v20;
        if ( v31 )
          RtlpHpVaMgrCtxFree(&unk_140E68558, &v32, &v31);
        goto LABEL_42;
      }
      if ( (unsigned __int8)(BYTE1(v37) - 2) <= 2u )
      {
        RtlpHpVaMgrCtxDecommit(&unk_140E68558, v19, v20);
LABEL_42:
        v23 = 0;
        goto LABEL_20;
      }
      v23 = MmFreePoolMemory(&v32, (ULONG_PTR *)&v31);
    }
    else
    {
      v25 = a6;
      if ( a6 && (v10 & 0x20000000) == 0 )
        v10 |= 0x40000000u;
      v26 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 20LL) & 0x40000000) != 0;
      v36 = *(_OWORD *)(a1 + 40);
      LODWORD(v30) = v26 ? 64 : 4;
      v27 = RtlpHpAllocVA((__int64 *)&v32, &v31, 0LL, v10, v30, (__int64 *)&v36);
      v23 = v27;
      if ( v25 && v27 >= 0 && (v10 & 0x40000000) == 0 )
        memset_0((void *)v17, 0, Size);
    }
LABEL_20:
    v28 = v33;
    if ( !v33 )
      return (unsigned int)v23;
    if ( _bittest16(v33, 0xEu) && v23 >= 0 )
    {
      v29 = 1LL;
      if ( (int)v8 <= 0 )
        v29 = -1LL;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v29);
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
    }
    RtlpHpSegMgrCommitComplete(a1, v28, v8, v23 >= 0, (ULONG_PTR)v35);
    if ( (v10 & 0x20000000) == 0 || v23 >= 0 || (v15 & 2) != 0 )
      return (unsigned int)v23;
    v16 = v33;
    v15 |= 1u;
    v18 = Size;
    v10 &= ~0x20000000u;
  }
  _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
  if ( a6 )
    memset_0((void *)v17, 0, Size);
  return 0;
}
