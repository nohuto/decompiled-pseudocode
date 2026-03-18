/*
 * XREFs of VmpSplitMemoryRange @ 0x1403AB5D4
 * Callers:
 *     VmSplitMemoryRange @ 0x140A79A90 (VmSplitMemoryRange.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     VmpProcessContextLockShared @ 0x1403ABC30 (VmpProcessContextLockShared.c)
 *     VmpProcessContextUnlockShared @ 0x1403ABC7C (VmpProcessContextUnlockShared.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x1403ABCB4 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpProcessContextLockExclusive @ 0x1403B0458 (VmpProcessContextLockExclusive.c)
 *     VmpProcessContextUnlockExclusive @ 0x14047F1E4 (VmpProcessContextUnlockExclusive.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x14064A7D4 (VmpFindNextPinnedPageStateHelper.c)
 *     VmpVaRangeCheckPinnedGpaRanges @ 0x14064B89C (VmpVaRangeCheckPinnedGpaRanges.c)
 *     VmpSecureMemoryForPin @ 0x14079F704 (VmpSecureMemoryForPin.c)
 *     VmpUnsecureMemoryForPin @ 0x14079F88C (VmpUnsecureMemoryForPin.c)
 *     VmpAllocateMemoryRanges @ 0x140A5D6C0 (VmpAllocateMemoryRanges.c)
 *     VmpFreeMemoryRanges @ 0x140A5D7A4 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpSplitMemoryRange(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  int v8; // r13d
  int v9; // ebp
  __int64 v10; // r8
  unsigned __int64 *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r8
  unsigned __int64 MemoryRanges; // rbp
  __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned __int64 v19; // rdx
  bool v20; // r8
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 *v24; // rsi
  unsigned __int64 *v25; // r15
  __int64 v26; // r13
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rdx
  bool v30; // r8
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int64 v33; // r15
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rdi
  int v36; // ebx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // r13d
  __int64 v42; // rcx
  __int64 v43; // [rsp+30h] [rbp-78h]
  __int64 v44; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v45; // [rsp+50h] [rbp-58h]
  __int64 v46; // [rsp+58h] [rbp-50h]
  __int64 v47; // [rsp+60h] [rbp-48h]
  __int64 v48; // [rsp+68h] [rbp-40h]
  unsigned __int64 v49; // [rsp+C0h] [rbp+18h]

  v6 = 0LL;
  v47 = 0LL;
  v7 = 0LL;
  v44 = 0LL;
  v8 = 0;
  v9 = 1;
  v45 = 0LL;
  v43 = 0LL;
  v49 = 0LL;
  v46 = 0LL;
  v10 = VmpProcessContextLockShared(SpinLock);
  if ( *((_QWORD *)SpinLock + 13) != a3 )
  {
    v36 = -1073740007;
    v35 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    goto LABEL_37;
  }
  v11 = (unsigned __int64 *)(SpinLock + 6);
  v12 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v12 )
    v12 ^= (unsigned __int64)v11;
  while ( v12 )
  {
    if ( a2 <= *(_QWORD *)(v12 + 32) )
    {
      if ( a2 >= *(_QWORD *)(v12 + 24) )
        break;
      v39 = *(_QWORD *)v12;
    }
    else
    {
      v39 = *(_QWORD *)(v12 + 8);
    }
    if ( (SpinLock[8] & 1) != 0 && v39 )
      v12 ^= v39;
    else
      v12 = v39;
  }
  if ( !v12 )
  {
    v36 = -1073741172;
LABEL_51:
    v6 = 0LL;
    v35 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    goto LABEL_37;
  }
  if ( a2 == *(_QWORD *)(v12 + 32) )
  {
    v36 = -1073741503;
    goto LABEL_51;
  }
  v13 = VmpVaRangeNumberOfGpaRanges(v12);
  VmpProcessContextUnlockShared(SpinLock, v14);
  MemoryRanges = VmpAllocateMemoryRanges(v13);
  if ( !MemoryRanges )
    return (unsigned int)-1073741670;
  if ( *(_QWORD *)(v12 + 56) )
  {
    v40 = *(_QWORD *)(v12 + 32);
    v41 = *(_DWORD *)(v12 + 72);
    v42 = v40 - *(_QWORD *)(v12 + 24);
    v45 = *(_QWORD *)(v12 + 24);
    v49 = a2 + 1;
    v43 = v42 + 1;
    v46 = v40 - a2;
    v8 = v41 & 1;
    v36 = VmpSecureMemoryForPin(SpinLock, a2 + 1, v40 - a2, &v44);
    if ( v36 < 0 )
    {
      v6 = v44;
      v35 = a2 + 1;
      goto LABEL_40;
    }
    v16 = v44;
  }
  else
  {
    v16 = 0LL;
  }
  v48 = VmpProcessContextLockExclusive(SpinLock);
  v44 = a2 - *(_QWORD *)(v12 + 24) + 1;
  *(_QWORD *)(MemoryRanges + 32) = *(_QWORD *)(v12 + 32);
  *(_QWORD *)(MemoryRanges + 24) = a2 + 1;
  v17 = *(_DWORD *)(v12 + 72);
  *(_QWORD *)(v12 + 32) = a2;
  v18 = *(_DWORD *)(MemoryRanges + 72) & 0xFFFFFFFC;
  *(_QWORD *)(MemoryRanges + 56) = v16;
  *(_DWORD *)(MemoryRanges + 72) = v8 | v17 & 2 ^ v18;
  v19 = *v11;
  if ( (SpinLock[8] & 1) != 0 && v19 )
    v19 ^= (unsigned __int64)v11;
  v20 = 0;
  if ( !v19 )
    goto LABEL_23;
  v21 = *(_QWORD *)(MemoryRanges + 24);
  while ( v21 > *(_QWORD *)(v19 + 32) || v21 >= *(_QWORD *)(v19 + 24) )
  {
    v22 = *(_QWORD *)(v19 + 8);
    if ( (SpinLock[8] & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_22;
      v22 ^= v19;
    }
    if ( !v22 )
    {
LABEL_22:
      v20 = 1;
      goto LABEL_23;
    }
LABEL_19:
    v19 = v22;
  }
  v22 = *(_QWORD *)v19;
  if ( (SpinLock[8] & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_61;
    v22 ^= v19;
  }
  if ( v22 )
    goto LABEL_19;
LABEL_61:
  v20 = 0;
LABEL_23:
  RtlRbInsertNodeEx((__int64 *)SpinLock + 3, v19, v20, MemoryRanges);
  v23 = *(__int64 **)(MemoryRanges + 40);
  v24 = *(__int64 **)(v12 + 40);
  v25 = (unsigned __int64 *)(SpinLock + 2);
  v26 = v44;
  while ( 1 )
  {
    v27 = v26 + v24[6];
    v23[6] = v27;
    v23[7] = v24[7];
    v28 = *((_DWORD *)v24 + 16);
    v24[7] = v27 - 1;
    if ( (v28 & 1) != 0 )
    {
      if ( VmpFindNextPinnedPageStateHelper(SpinLock, v24[6], v27 - 1, 1LL) == -1 )
        *((_DWORD *)v24 + 16) &= ~1u;
      if ( VmpFindNextPinnedPageStateHelper(SpinLock, v23[6], v23[7], 1LL) != -1 )
        *((_DWORD *)v23 + 16) |= 1u;
    }
    v29 = *v25;
    if ( (SpinLock[4] & 1) != 0 && v29 )
      v29 ^= (unsigned __int64)v25;
    v30 = 0;
    if ( v29 )
    {
      v31 = v23[6];
      while ( 1 )
      {
        if ( v31 <= *(_QWORD *)(v29 + 32) && v31 < *(_QWORD *)(v29 + 24) )
        {
          v32 = *(_QWORD *)v29;
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v32 )
              goto LABEL_62;
            v32 ^= v29;
          }
          if ( !v32 )
          {
LABEL_62:
            v30 = 0;
            break;
          }
        }
        else
        {
          v32 = *(_QWORD *)(v29 + 8);
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v32 )
              goto LABEL_32;
            v32 ^= v29;
          }
          if ( !v32 )
          {
LABEL_32:
            v30 = 1;
            break;
          }
        }
        v29 = v32;
      }
    }
    RtlRbInsertNodeEx((__int64 *)SpinLock + 1, v29, v30, (unsigned __int64)(v23 + 3));
    v24 = (__int64 *)*v24;
    if ( v24 == (__int64 *)(v12 + 40) )
      break;
    v23 = (__int64 *)*v23;
  }
  if ( *(_QWORD *)(MemoryRanges + 56) )
  {
    v47 = *(_QWORD *)(v12 + 56);
    v6 = VmpVaRangeCheckPinnedGpaRanges(MemoryRanges);
    v38 = VmpVaRangeCheckPinnedGpaRanges(v12);
    v7 = v43;
    v35 = v49;
    if ( v38 )
    {
      v34 = v45;
      v33 = v43;
    }
    else
    {
      v33 = v46;
      v34 = v49;
    }
  }
  else
  {
    v33 = 0LL;
    v6 = 0LL;
    v34 = 0LL;
    v35 = v49;
    v7 = v43;
  }
  ++*((_QWORD *)SpinLock + 9);
  v10 = v48;
  v36 = 0;
  v9 = 0;
LABEL_37:
  if ( v10 != -1 )
  {
    if ( v9 )
      VmpProcessContextUnlockShared(SpinLock, v10);
    else
      VmpProcessContextUnlockExclusive(SpinLock, v10);
  }
  MemoryRanges = 0LL;
  if ( v47 )
    VmpUnsecureMemoryForPin(SpinLock, v47, v34, v33, v45, v7);
LABEL_40:
  if ( v6 )
    VmpUnsecureMemoryForPin(SpinLock, v6, v35, v46, v35, v46);
  if ( MemoryRanges )
    VmpFreeMemoryRanges((PVOID)MemoryRanges);
  return (unsigned int)v36;
}
