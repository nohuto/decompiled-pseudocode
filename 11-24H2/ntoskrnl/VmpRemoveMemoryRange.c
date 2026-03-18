/*
 * XREFs of VmpRemoveMemoryRange @ 0x14047ED34
 * Callers:
 *     VmDeleteMemoryRange @ 0x140A63260 (VmDeleteMemoryRange.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x1403ABCB4 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpProcessContextLockExclusive @ 0x1403B0458 (VmpProcessContextLockExclusive.c)
 *     VmpInvalidateSlatBatched @ 0x14047F01C (VmpInvalidateSlatBatched.c)
 *     VmpProcessContextUnlockExclusive @ 0x14047F1E4 (VmpProcessContextUnlockExclusive.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x14064A7D4 (VmpFindNextPinnedPageStateHelper.c)
 *     VmpUnpinMemoryRange @ 0x14079F79C (VmpUnpinMemoryRange.c)
 *     VmpFreeMemoryRanges @ 0x140A5D7A4 (VmpFreeMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 *v9; // rdi
  unsigned __int64 *v10; // rbp
  unsigned int v11; // ebx
  PEX_SPIN_LOCK v13; // r14
  __int64 v14; // r10
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 *v17; // rbx
  __int64 v18; // r8
  int v19; // ebp
  unsigned __int64 v20; // rcx
  unsigned __int64 **v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  bool v25; // zf
  unsigned __int64 v26; // r12
  __int64 v27; // rbx
  __int64 NextPinnedPageStateHelper; // rax
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-78h]
  unsigned __int64 *v33; // [rsp+60h] [rbp-68h]
  unsigned __int64 *v34; // [rsp+68h] [rbp-60h]
  unsigned __int64 v35; // [rsp+70h] [rbp-58h]
  int v36; // [rsp+D0h] [rbp+8h]
  __int64 v38; // [rsp+E8h] [rbp+20h]

  v35 = a2 + a4;
  v38 = a2 + a4 - 1;
  v6 = a2;
  v32 = a3 + a4;
  v7 = a3 + a4 - 1;
  v9 = 0LL;
  v10 = 0LL;
  v31 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 13) != a5 )
  {
    v11 = -1073740007;
    goto LABEL_3;
  }
  VmpInvalidateSlatBatched(SpinLock, (__int64)&v31, 12);
  v13 = SpinLock + 2;
  v14 = 0LL;
  v15 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v15 )
    v15 ^= (unsigned __int64)v13;
  while ( v15 )
  {
    if ( a3 > *(_QWORD *)(v15 + 32) )
    {
      v16 = *(_QWORD *)(v15 + 8);
    }
    else
    {
      if ( a3 >= *(_QWORD *)(v15 + 24) )
        break;
      v16 = *(_QWORD *)v15;
    }
    if ( (SpinLock[4] & 1) != 0 && v16 )
      v15 ^= v16;
    else
      v15 = v16;
  }
  v17 = (unsigned __int64 *)((v15 - 24) & ((unsigned __int128)-(__int128)v15 >> 64));
  v33 = v17;
  if ( !v17 )
  {
    v11 = -1073741172;
    goto LABEL_3;
  }
  v18 = *(_QWORD *)(((v15 - 24) & ((unsigned __int128)-(__int128)v15 >> 64)) + 0x30);
  v19 = 0;
  v9 = *(unsigned __int64 **)(((v15 - 24) & ((unsigned __int128)-(__int128)v15 >> 64)) + 0x10);
  v34 = v9;
  v36 = 0;
  if ( v18 == a3
    && *(_QWORD *)(((v15 - 24) & ((unsigned __int128)-(__int128)v15 >> 64)) + 0x38) == v7
    && v9[3] == v6
    && v9[4] == v38 )
  {
LABEL_24:
    if ( v9[7] != v14 )
    {
      v26 = a3;
      v27 = v32;
      do
      {
        NextPinnedPageStateHelper = VmpFindNextPinnedPageStateHelper(SpinLock, v26, v7, 1LL);
        if ( NextPinnedPageStateHelper == -1 )
          break;
        if ( NextPinnedPageStateHelper == v7 )
        {
          v30 = v27;
        }
        else
        {
          v29 = VmpFindNextPinnedPageStateHelper(SpinLock, NextPinnedPageStateHelper + 1, v7, 0LL);
          v30 = v27;
          if ( v29 != -1 )
            v30 = v29;
        }
        VmpProcessContextUnlockExclusive(SpinLock, v31);
        VmpUnpinMemoryRange(SpinLock, a5, 3, 0LL);
        v26 = v30 + 1;
        v31 = VmpProcessContextLockExclusive(SpinLock);
      }
      while ( v26 <= v7 );
      v17 = v33;
      v13 = SpinLock + 2;
      v9 = v34;
      LODWORD(v14) = 0;
      v19 = v36;
      v6 = a2;
    }
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v17[6] = v32;
        v9[3] = v35;
      }
      else
      {
        v17[7] = a3 - 1;
        v9[4] = v6 - 1;
      }
      v9 = 0LL;
      v10 = 0LL;
    }
    else
    {
      RtlRbRemoveNode((unsigned __int64 *)v13, v17 + 3);
      v17[5] = -1LL;
      v20 = *v17;
      if ( *(unsigned __int64 **)(*v17 + 8) != v17 || (v21 = (unsigned __int64 **)v17[1], *v21 != v17) )
        __fastfail(3u);
      *v21 = (unsigned __int64 *)v20;
      v10 = v17;
      *(_QWORD *)(v20 + 8) = v21;
      if ( (unsigned __int64 *)v9[5] == v9 + 5 )
      {
        RtlRbRemoveNode((unsigned __int64 *)SpinLock + 3, v9);
        v9[2] = -1LL;
      }
      else
      {
        v9 = 0LL;
      }
      LODWORD(v14) = 0;
    }
    ++*((_QWORD *)SpinLock + 9);
    v22 = *(_QWORD *)v13;
    if ( (v13[2] & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_40;
      v22 ^= (unsigned __int64)v13;
    }
    if ( v22 )
    {
LABEL_34:
      v11 = v14;
      goto LABEL_3;
    }
LABEL_40:
    *((_QWORD *)SpinLock + 13) = -1LL;
    *((_WORD *)SpinLock + 68) = v14;
    goto LABEL_34;
  }
  if ( (unsigned __int64)VmpVaRangeNumberOfGpaRanges((__int64)v9) <= 1 )
  {
    if ( a3 == v23 && v6 == v9[3] )
    {
      v25 = v7 == v17[7];
      if ( v7 < v17[7] )
      {
        if ( v24 < v9[4] )
        {
          v19 = 1;
LABEL_59:
          v36 = v19;
          goto LABEL_24;
        }
        goto LABEL_70;
      }
    }
    else
    {
      v25 = v7 == v17[7];
    }
    if ( v25 && v24 == v9[4] && a3 > v23 && v6 > v9[3] )
    {
      v19 = 2;
      goto LABEL_59;
    }
  }
LABEL_70:
  v9 = 0LL;
  v11 = -1073741637;
  v10 = 0LL;
LABEL_3:
  if ( v31 != -1 )
    VmpProcessContextUnlockExclusive(SpinLock, v31);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
    VmpFreeMemoryRanges(v9);
  return v11;
}
