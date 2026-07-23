/*
 * XREFs of SepGetLowBoxNumberEntry @ 0x140A42C4C
 * Callers:
 *     SepSetTokenLowboxNumber @ 0x140A42978 (SepSetTokenLowboxNumber.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     RtlInsertEntryHashTable @ 0x140421C30 (RtlInsertEntryHashTable.c)
 *     RtlClearAllBits @ 0x140441080 (RtlClearAllBits.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x140A42E30 (SepFindMatchingLowBoxNumberEntry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepGetLowBoxNumberEntry(__int64 a1, unsigned __int8 *a2, __int64 *a3)
{
  _RTL_DYNAMIC_HASH_TABLE *v3; // r13
  _RTL_BITMAP *v4; // r14
  unsigned int v6; // esi
  unsigned int v8; // ebx
  __int64 Pool2; // rax
  __int64 v10; // rdi
  ULONG ClearBitsAndSet; // ebp
  ULONG v13; // ebp
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  ULONG_PTR v17; // r8
  _RTL_DYNAMIC_HASH_TABLE *v18; // [rsp+78h] [rbp+20h]

  v3 = *(_RTL_DYNAMIC_HASH_TABLE **)(a1 + 24);
  v4 = (_RTL_BITMAP *)(a1 + 8);
  v18 = v3;
  v6 = 0;
  SepFindMatchingLowBoxNumberEntry(v3, a2);
  v8 = (4 * a2[1] + 67) & 0xFFFFFFFC;
  Pool2 = ExAllocatePool2(0x100uLL, v8, 0x734C6553u);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 32) = Pool2 + 56;
  RtlCopySid(v8 - 56, (PSID)(Pool2 + 56), a2);
  ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v13 = 2 * RtlNumberOfSetBits(v4);
    if ( v13 > 0x10000 )
      goto LABEL_15;
    v14 = ExAllocatePool2(0x100uLL, (unsigned __int64)v13 >> 3, 0x734C6553u);
    if ( !v14 )
      goto LABEL_15;
    ExFreePoolWithTag(v4->Buffer, 0);
    v4->SizeOfBitMap = v13;
    v4->Buffer = (unsigned int *)v14;
    RtlClearAllBits(v4);
    RtlSetBits(v4, 0, v13 >> 1);
    v3 = v18;
    ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
  }
  if ( ClearBitsAndSet > 0xFFFE )
  {
LABEL_15:
    ExFreePoolWithTag((PVOID)v10, 0);
    return (unsigned int)-1073741670;
  }
  *(_QWORD *)(v10 + 48) = 0LL;
  *(_DWORD *)(v10 + 40) = ClearBitsAndSet + 1;
  *(_QWORD *)(v10 + 24) = 1LL;
  v15 = (unsigned int)a2[1] - 1;
  v16 = *(unsigned int *)&a2[4 * v15 + 8];
  v17 = v16 + 1;
  if ( (_DWORD)v16 )
    v17 = *(unsigned int *)&a2[4 * v15 + 8];
  if ( RtlInsertEntryHashTable(v3, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v10, v17, 0LL) )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 24)) <= 1 )
      __fastfail(0xEu);
    *a3 = v10;
    return v6;
  }
  ExFreePoolWithTag((PVOID)v10, 0);
  RtlClearBits(v4, 1u, ClearBitsAndSet);
  return (unsigned int)-1073741670;
}
