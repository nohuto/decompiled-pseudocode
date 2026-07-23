/*
 * XREFs of VmpUnpinMemoryRangeHelper @ 0x140649920
 * Callers:
 *     VmpUnpinMemoryRange @ 0x14079F8AC (VmpUnpinMemoryRange.c)
 * Callees:
 *     VmpProcessContextLockExclusive @ 0x14039EC68 (VmpProcessContextLockExclusive.c)
 *     VmpInvalidateSlatBatched @ 0x140479E38 (VmpInvalidateSlatBatched.c)
 *     VmpProcessContextUnlockExclusive @ 0x14047A000 (VmpProcessContextUnlockExclusive.c)
 *     VmpCheckUnpinAndDereference @ 0x140648AF0 (VmpCheckUnpinAndDereference.c)
 *     VmpDereferencePinInProgress @ 0x140648D74 (VmpDereferencePinInProgress.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x140648D94 (VmpFindNextPinnedPageStateHelper.c)
 *     VmpUnsecureMemoryForPin @ 0x14079F99C (VmpUnsecureMemoryForPin.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1407EB07C (MmUnlockPhysicalPagesByVa.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpUnpinMemoryRangeHelper(
        __int64 SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned __int64 v7; // rsi
  __int64 v10; // r8
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r12
  int v21; // r14d
  unsigned int v22; // r14d
  unsigned __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // rdi
  unsigned __int8 v26; // r10
  PVOID v27; // rcx
  __int64 v28; // rax
  __int64 v30; // [rsp+40h] [rbp-28h]
  PVOID P[4]; // [rsp+48h] [rbp-20h] BYREF
  int v32; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v34; // [rsp+C0h] [rbp+58h]
  unsigned __int64 v35; // [rsp+C8h] [rbp+60h]

  v35 = a4;
  v34 = a3;
  v32 = 0;
  v7 = a2 + a4 - 1;
  v30 = v7;
  P[1] = P;
  P[0] = P;
  v11 = VmpProcessContextLockExclusive((PEX_SPIN_LOCK)SpinLock);
  v33 = v11;
  if ( *(_QWORD *)(SpinLock + 104) != a5 )
    NT_ASSERT("ProcessContext->PartitionId == PartitionId");
  v12 = SpinLock + 8;
  v13 = *(_QWORD *)(SpinLock + 8);
  if ( (*(_BYTE *)(SpinLock + 16) & 1) != 0 && v13 )
    v13 ^= v12;
  while ( v13 )
  {
    if ( a2 <= *(_QWORD *)(v13 + 32) )
    {
      if ( a2 >= *(_QWORD *)(v13 + 24) )
        break;
      v12 = *(_QWORD *)v13;
    }
    else
    {
      v12 = *(_QWORD *)(v13 + 8);
    }
    if ( (*(_BYTE *)(SpinLock + 16) & 1) != 0 && v12 )
      v13 ^= v12;
    else
      v13 = v12;
  }
  v14 = v13 - 24;
  v15 = -v13;
  v16 = v14 & -(__int64)(v15 != 0);
  if ( !v16 )
    NT_ASSERT("GpaMemoryRange != ((void *)0)");
  if ( *(_QWORD *)((v14 & -(__int64)(v15 != 0)) + 0x38) < v7 )
    NT_ASSERT("GpaMemoryRange->LastGpn >= LastGpn");
  v17 = *(_QWORD *)((v14 & -(__int64)(v15 != 0)) + 0x10);
  v18 = a3 + *(_QWORD *)((v14 & -(__int64)(v15 != 0)) + 0x30) - a2;
  v19 = *(_QWORD *)(v17 + 24);
  if ( v19 != v18 )
    NT_ASSERT("VaMemoryRange->StartVpn == (StartVpn - (StartGpn - GpaMemoryRange->StartGpn))");
  v20 = *(_QWORD *)(v17 + 32) - v19 + 1;
  v21 = VmpCheckUnpinAndDereference(SpinLock, v12, v10, a2, v30, a6, (__int64)P, &v32);
  if ( v21 >= 0 && !v32 )
  {
    ++*(_QWORD *)(v17 + 64);
    v22 = *(_DWORD *)(v17 + 72) & 1;
    if ( VmpFindNextPinnedPageStateHelper(SpinLock, *(_QWORD *)(v16 + 48), *(_QWORD *)(v16 + 56), 1) == -1 )
      *(_DWORD *)(v16 + 64) &= ~1u;
    ++*(_QWORD *)(SpinLock + 72);
    v23 = v35;
    if ( (a6 & 2) == 0 )
    {
      VmpInvalidateSlatBatched((PEX_SPIN_LOCK)SpinLock, a2, v34, v35, &v33, *(_DWORD *)(v17 + 72) & 2 | 1);
      LOBYTE(v11) = v33;
    }
    VmpProcessContextUnlockExclusive((volatile LONG *)SpinLock, v11);
    MmUnlockPhysicalPagesByVa(v34 << 12, v23 << 12, v24, v22);
    VmpProcessContextLockExclusive((PEX_SPIN_LOCK)SpinLock);
    v25 = VmpDereferencePinInProgress(v17);
    VmpProcessContextUnlockExclusive((volatile LONG *)SpinLock, v26);
    v11 = -1LL;
    if ( v25 )
      VmpUnsecureMemoryForPin(SpinLock, v25, *(_QWORD *)(v17 + 24), v20, *(_QWORD *)(v17 + 24), v20);
    while ( 1 )
    {
      v27 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v28 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v28 + 8) = P;
      ExFreePoolWithTag(v27, 0);
    }
    v21 = 0;
  }
  if ( v11 != -1 )
    VmpProcessContextUnlockExclusive((volatile LONG *)SpinLock, v11);
  return (unsigned int)v21;
}
