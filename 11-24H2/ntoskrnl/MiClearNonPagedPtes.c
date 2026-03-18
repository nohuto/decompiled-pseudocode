/*
 * XREFs of MiClearNonPagedPtes @ 0x1402346CC
 * Callers:
 *     MmFreePoolMemory @ 0x140243A40 (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x1402EB010 (MiCommitPoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x14067CCC0 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402349C0 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteNonPagedPoolTail @ 0x140235020 (MiDeleteNonPagedPoolTail.c)
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiReturnPhysicalPoolPages @ 0x1402EA2D4 (MiReturnPhysicalPoolPages.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x1404D5A54 (MiLogNonPagedPoolReleaseEvent.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  _BYTE v24[40]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v25[8]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v26[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h]
  _BYTE v28[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  int v30; // [rsp+80h] [rbp-88h]
  int v31; // [rsp+84h] [rbp-84h]
  unsigned int v32; // [rsp+8Ch] [rbp-7Ch]
  _DWORD v33[2]; // [rsp+98h] [rbp-70h] BYREF
  char v34; // [rsp+A1h] [rbp-67h]
  int v35; // [rsp+A4h] [rbp-64h]
  void *v36; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v38; // [rsp+C8h] [rbp-40h]
  __int64 (__fastcall *v39)(_QWORD, _QWORD, _QWORD); // [rsp+140h] [rbp+38h]
  __int64 (__fastcall *v40)(_QWORD, _QWORD, _QWORD); // [rsp+148h] [rbp+40h]
  _BYTE *v41; // [rsp+150h] [rbp+48h]
  char v42; // [rsp+1A0h] [rbp+98h]

  v42 = a4;
  v7 = a4;
  memset_0(v33, 0, 0xC0uLL);
  memset_0(v25, 0, 0x50uLL);
  v39 = MiDeleteNonPagedPoolPte;
  v33[0] = 135;
  v8 = 0;
  v40 = MiDeleteNonPagedPoolTail;
  v9 = (a2 << 12) + LeafVa - 1;
  v37 = LeafVa;
  v38 = v9;
  v41 = v25;
  v30 = a3;
  v31 = v7;
  v36 = &unk_140E38380;
  if ( KeGetCurrentIrql() == 2 )
  {
    v34 = 17;
    MiLockWorkingSetSharedAtDpc(&unk_140E38380);
  }
  else
  {
    v34 = MiLockWorkingSetShared(&unk_140E38380);
  }
  if ( LeafVa <= v9 )
  {
    do
    {
      memset(&v24[8], 0, 32);
      v12 = MiFastLockLeafPageTable(&unk_140E38380, LeafVa, 0LL);
      if ( !v12 )
        break;
      for ( i = 0LL; i < 4; ++i )
      {
        LeafVa = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        *(_QWORD *)&v24[8 * i + 8] = LeafVa;
      }
      v14 = v12 - 1;
      v15 = v9;
      v16 = 0xFFFFF68000000000uLL;
      v17 = 0LL;
      v18 = *(_QWORD *)&v24[8 * v12 + 8];
      v19 = *(_QWORD *)&v24[8 * v12];
      do
      {
        v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        *(_QWORD *)&v24[8 * v17++ + 8] = v15;
      }
      while ( v17 < 4 );
      v20 = *(_QWORD *)&v24[8 * v12];
      if ( v20 > (v19 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
        v20 = v19 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
      while ( v19 <= v20 )
      {
        MiDeleteNonPagedPoolPte(v33, v19, v14);
        v21 = (unsigned int)(v35 + 1);
        v35 = 0;
        v19 += 8 * v21;
      }
      MiDeleteNonPagedPoolTail(v33, v17, v16);
      v22 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v18) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (*(_DWORD *)(v22 + 36) & 0x4000000) != 0 )
        v23 = HIDWORD(*(_QWORD *)v22);
      else
        v23 = *(_QWORD *)(v22 + 16) >> 16;
      if ( (v23 & 0x3FF) == 0 )
        v8 = 1;
      MiUnlockPageTableInternal(&unk_140E38380, v18);
      LeafVa = MiGetLeafVa(v19);
    }
    while ( LeafVa <= v9 );
    LOBYTE(v7) = v42;
    if ( !v8 )
    {
      if ( LeafVa > v9 )
        goto LABEL_4;
      v37 = LeafVa;
    }
    MiWalkPageTables(v33);
  }
LABEL_4:
  LOBYTE(v10) = v34;
  MiUnlockWorkingSetShared(&unk_140E38380, v10);
  if ( v27 )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogNonPagedPoolReleaseEvent(v26);
    MiReturnPhysicalPoolPages(v26, 2LL);
  }
  if ( v29 )
    MiReturnPhysicalPoolPages(v28, (2 * (v7 & 2)) | 3u);
  return v32;
}
