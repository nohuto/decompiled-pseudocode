/*
 * XREFs of MiClearNonPagedPtes @ 0x14020E660
 * Callers:
 *     MmFreePoolMemory @ 0x14020C540 (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x14034C650 (MiCommitPoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x14067DEA0 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiDeleteNonPagedPoolPte @ 0x14020E950 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteNonPagedPoolTail @ 0x14020EFE0 (MiDeleteNonPagedPoolTail.c)
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiReturnPhysicalPoolPages @ 0x14034B914 (MiReturnPhysicalPoolPages.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x1404CEE9C (MiLogNonPagedPoolReleaseEvent.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiClearNonPagedPtes(unsigned __int64 LeafVa, __int64 a2, int a3, int a4)
{
  int v7; // r14d
  char v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  int v12; // eax
  __int64 i; // rdx
  unsigned int v14; // esi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r13
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  _BYTE v26[40]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v27[8]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h]
  _BYTE v30[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h]
  int v32; // [rsp+80h] [rbp-88h]
  int v33; // [rsp+84h] [rbp-84h]
  unsigned int v34; // [rsp+8Ch] [rbp-7Ch]
  _DWORD v35[2]; // [rsp+98h] [rbp-70h] BYREF
  char v36; // [rsp+A1h] [rbp-67h]
  int v37; // [rsp+A4h] [rbp-64h]
  void *v38; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v39; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v40; // [rsp+C8h] [rbp-40h]
  __int64 (__fastcall *v41)(_QWORD, _QWORD, _QWORD); // [rsp+140h] [rbp+38h]
  __int64 (__fastcall *v42)(_QWORD, _QWORD, _QWORD); // [rsp+148h] [rbp+40h]
  _BYTE *v43; // [rsp+150h] [rbp+48h]
  char v44; // [rsp+1A0h] [rbp+98h]

  v44 = a4;
  v7 = a4;
  memset_0(v35, 0, 0xC0uLL);
  memset_0(v27, 0, 0x50uLL);
  v41 = MiDeleteNonPagedPoolPte;
  v35[0] = 135;
  v8 = 0;
  v42 = MiDeleteNonPagedPoolTail;
  v9 = (a2 << 12) + LeafVa - 1;
  v39 = LeafVa;
  v40 = v9;
  v43 = v27;
  v32 = a3;
  v33 = v7;
  v38 = &unk_140E384C0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v36 = 17;
    MiLockWorkingSetSharedAtDpc((__int64)&unk_140E384C0);
  }
  else
  {
    v36 = MiLockWorkingSetShared(&unk_140E384C0);
  }
  if ( LeafVa <= v9 )
  {
    do
    {
      memset(&v26[8], 0, 32);
      v12 = MiFastLockLeafPageTable(&unk_140E384C0, LeafVa, 0LL);
      if ( !v12 )
        break;
      for ( i = 0LL; i < 4; ++i )
      {
        LeafVa = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        *(_QWORD *)&v26[8 * i + 8] = LeafVa;
      }
      v14 = v12 - 1;
      v15 = v9;
      v16 = 0xFFFFF68000000000uLL;
      v17 = 0LL;
      v18 = *(_QWORD *)&v26[8 * v12 + 8];
      v19 = *(_QWORD *)&v26[8 * v12];
      do
      {
        v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        *(_QWORD *)&v26[8 * v17++ + 8] = v15;
      }
      while ( v17 < 4 );
      v20 = *(_QWORD *)&v26[8 * v12];
      if ( v20 > (v19 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
        v20 = v19 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
      while ( v19 <= v20 )
      {
        MiDeleteNonPagedPoolPte(v35, v19, v14);
        v21 = (unsigned int)(v37 + 1);
        v37 = 0;
        v19 += 8 * v21;
      }
      MiDeleteNonPagedPoolTail(v35, v17, v16);
      v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v18, v22, v23) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (*(_DWORD *)(v24 + 36) & 0x4000000) != 0 )
        v25 = HIDWORD(*(_QWORD *)v24);
      else
        v25 = *(_QWORD *)(v24 + 16) >> 16;
      if ( (v25 & 0x3FF) == 0 )
        v8 = 1;
      MiUnlockPageTableInternal(&unk_140E384C0, v18);
      LeafVa = MiGetLeafVa(v19);
    }
    while ( LeafVa <= v9 );
    LOBYTE(v7) = v44;
    if ( !v8 )
    {
      if ( LeafVa > v9 )
        goto LABEL_4;
      v39 = LeafVa;
    }
    MiWalkPageTables(v35);
  }
LABEL_4:
  LOBYTE(v10) = v36;
  MiUnlockWorkingSetShared(&unk_140E384C0, v10);
  if ( v29 )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogNonPagedPoolReleaseEvent(v28);
    MiReturnPhysicalPoolPages(v28, 2LL);
  }
  if ( v31 )
    MiReturnPhysicalPoolPages(v30, (2 * (v7 & 2)) | 3u);
  return v34;
}
