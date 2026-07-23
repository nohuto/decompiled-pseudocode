/*
 * XREFs of VmpMergeMemoryRanges @ 0x1404C98A4
 * Callers:
 *     VmMergeMemoryRanges @ 0x140A76400 (VmMergeMemoryRanges.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x14039A3C4 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpProcessContextLockExclusive @ 0x14039EC68 (VmpProcessContextLockExclusive.c)
 *     VmpProcessContextUnlockExclusive @ 0x14047A000 (VmpProcessContextUnlockExclusive.c)
 *     VmpVaMemoryRangeGetNext @ 0x14049DF3C (VmpVaMemoryRangeGetNext.c)
 *     VmpSecureMemoryForPin @ 0x14079F814 (VmpSecureMemoryForPin.c)
 *     VmpUnsecureMemoryForPin @ 0x14079F99C (VmpUnsecureMemoryForPin.c)
 *     VmpFreeMemoryRanges @ 0x140A55BC4 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpMergeMemoryRanges(__int64 SpinLock, unsigned __int64 a2, __int64 a3)
{
  void *v3; // r14
  __int64 v7; // r13
  int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 Next; // rsi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  bool v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 *v22; // r14
  _RTL_BALANCED_NODE *v23; // rdi
  _RTL_BALANCED_NODE *v24; // rax
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v26 = 0LL;
  v7 = VmpProcessContextLockExclusive((PEX_SPIN_LOCK)SpinLock);
  if ( *(_QWORD *)(SpinLock + 104) == a3 )
  {
    v9 = *(_QWORD *)(SpinLock + 24);
    if ( (*(_BYTE *)(SpinLock + 32) & 1) != 0 && v9 )
      v9 ^= SpinLock + 24;
    while ( v9 )
    {
      if ( a2 <= *(_QWORD *)(v9 + 32) )
      {
        if ( a2 >= *(_QWORD *)(v9 + 24) )
          break;
        v10 = *(_QWORD *)v9;
      }
      else
      {
        v10 = *(_QWORD *)(v9 + 8);
      }
      if ( (*(_BYTE *)(SpinLock + 32) & 1) != 0 && v10 )
        v9 ^= v10;
      else
        v9 = v10;
    }
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 32) == a2
        && (Next = VmpVaMemoryRangeGetNext(SpinLock, (_QWORD *)v9)) != 0
        && *(_QWORD *)(Next + 24) == a2 + 1 )
      {
        VmpVaRangeNumberOfGpaRanges(v9);
        v12 = VmpVaRangeNumberOfGpaRanges(Next);
        if ( v13 == v12 )
        {
          v14 = *(_QWORD *)(v9 + 56);
          if ( (!v14 || !*(_QWORD *)(Next + 56) || ((*(_BYTE *)(Next + 72) ^ *(_BYTE *)(v9 + 72)) & 1) == 0)
            && ((*(_BYTE *)(Next + 72) ^ *(_BYTE *)(v9 + 72)) & 2) == 0 )
          {
            v15 = *(_QWORD **)(Next + 40);
            v16 = *(_QWORD **)(v9 + 40);
            while ( 1 )
            {
              v17 = v16[7];
              if ( v17 + 1 < v17 || v17 + 1 != v15[6] )
                break;
              v16 = (_QWORD *)*v16;
              v15 = (_QWORD *)*v15;
              if ( v16 == (_QWORD *)(v9 + 40) )
              {
                if ( v14 || *(_QWORD *)(Next + 56) )
                {
                  VmpProcessContextUnlockExclusive((volatile LONG *)SpinLock, v7);
                  v18 = ((*(_BYTE *)(v9 + 72) | *(_BYTE *)(Next + 72)) & 1) == 0;
                  v8 = VmpSecureMemoryForPin(
                         SpinLock,
                         *(_QWORD *)(v9 + 24),
                         *(_QWORD *)(Next + 32) - *(_QWORD *)(v9 + 24) + 1LL,
                         &v26);
                  if ( v8 < 0 )
                    return (unsigned int)v8;
                  v19 = *(_QWORD *)(Next + 56);
                  if ( v19 )
                    VmpUnsecureMemoryForPin(
                      SpinLock,
                      v19,
                      *(_QWORD *)(Next + 24),
                      *(_QWORD *)(Next + 32) - *(_QWORD *)(Next + 24) + 1LL,
                      *(_QWORD *)(Next + 24),
                      *(_QWORD *)(Next + 32) - *(_QWORD *)(Next + 24) + 1LL);
                  v20 = *(_QWORD *)(v9 + 56);
                  if ( v20 )
                    VmpUnsecureMemoryForPin(
                      SpinLock,
                      v20,
                      *(_QWORD *)(v9 + 24),
                      *(_QWORD *)(v9 + 32) - *(_QWORD *)(v9 + 24) + 1LL,
                      *(_QWORD *)(v9 + 24),
                      *(_QWORD *)(v9 + 32) - *(_QWORD *)(v9 + 24) + 1LL);
                  v7 = VmpProcessContextLockExclusive((PEX_SPIN_LOCK)SpinLock);
                  v21 = *(_DWORD *)(v9 + 72) & 0xFFFFFFFE;
                  *(_QWORD *)(v9 + 56) = v26;
                  *(_DWORD *)(v9 + 72) = !v18 | v21;
                  *(_QWORD *)(Next + 56) = 0LL;
                  *(_DWORD *)(Next + 72) &= ~1u;
                }
                v22 = *(__int64 **)(v9 + 40);
                v23 = *(_RTL_BALANCED_NODE **)(Next + 40);
                do
                {
                  RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 8), v23 + 1);
                  v24 = v23[2].Children[1];
                  v23[1].ParentValue = -1LL;
                  v22[7] = (__int64)v24;
                  if ( (*(_DWORD *)&v23[2].0 & 1) != 0 )
                  {
                    *((_DWORD *)v22 + 16) |= 1u;
                    *(_DWORD *)&v23[2].0 &= ~1u;
                  }
                  v22 = (__int64 *)*v22;
                  v23 = v23->Children[0];
                }
                while ( v22 != (__int64 *)(v9 + 40) );
                RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 24), (PRTL_BALANCED_NODE)Next);
                *(_QWORD *)(Next + 16) = -1LL;
                v3 = (void *)Next;
                *(_QWORD *)(v9 + 32) = *(_QWORD *)(Next + 32);
                ++*(_QWORD *)(SpinLock + 72);
                v8 = 0;
                goto LABEL_45;
              }
            }
          }
        }
        v8 = -1073741182;
      }
      else
      {
        v8 = -1073741503;
      }
    }
    else
    {
      v8 = -1073741172;
    }
  }
  else
  {
    v8 = -1073740007;
  }
LABEL_45:
  if ( v7 != -1 )
    VmpProcessContextUnlockExclusive((volatile LONG *)SpinLock, v7);
  if ( v3 )
    VmpFreeMemoryRanges(v3);
  return (unsigned int)v8;
}
