/*
 * XREFs of MiClearNonPagedPtes @ 0x1402FAC80
 * Callers:
 *     MiCommitPoolMemory @ 0x1402C2C90 (MiCommitPoolMemory.c)
 *     MmFreePoolMemory @ 0x1402FAA60 (MmFreePoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x140671500 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiReturnPhysicalPoolPages @ 0x1402C4578 (MiReturnPhysicalPoolPages.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402FAF80 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteNonPagedPoolTail @ 0x1402FB5D0 (MiDeleteNonPagedPoolTail.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x1404D6368 (MiLogNonPagedPoolReleaseEvent.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiClearNonPagedPtes(ULONG_PTR LeafVa, __int64 a2, int a3, int a4)
{
  int v7; // r14d
  char v8; // r12
  unsigned __int64 v9; // r15
  int v11; // eax
  __int64 i; // rdx
  unsigned int v13; // esi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  _BYTE v23[40]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v24[8]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v25[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h]
  _BYTE v27[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h]
  int v29; // [rsp+80h] [rbp-88h]
  int v30; // [rsp+84h] [rbp-84h]
  unsigned int v31; // [rsp+8Ch] [rbp-7Ch]
  int v32[2]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int8 v33; // [rsp+A1h] [rbp-67h]
  int v34; // [rsp+A4h] [rbp-64h]
  void *v35; // [rsp+B8h] [rbp-50h]
  ULONG_PTR v36; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v37; // [rsp+C8h] [rbp-40h]
  __int64 (__fastcall *v38)(_QWORD, _QWORD, _QWORD); // [rsp+140h] [rbp+38h]
  __int64 (__fastcall *v39)(_QWORD, _QWORD, _QWORD); // [rsp+148h] [rbp+40h]
  _BYTE *v40; // [rsp+150h] [rbp+48h]
  char v41; // [rsp+1A0h] [rbp+98h]

  v41 = a4;
  v7 = a4;
  memset_0(v32, 0, 0xC0uLL);
  memset_0(v24, 0, 0x50uLL);
  v38 = MiDeleteNonPagedPoolPte;
  v32[0] = 135;
  v8 = 0;
  v39 = MiDeleteNonPagedPoolTail;
  v9 = (a2 << 12) + LeafVa - 1;
  v36 = LeafVa;
  v37 = v9;
  v40 = v24;
  v29 = a3;
  v30 = v7;
  v35 = &unk_140E38140;
  if ( KeGetCurrentIrql() == 2 )
  {
    v33 = 17;
    MiLockWorkingSetSharedAtDpc(&unk_140E38140);
  }
  else
  {
    v33 = MiLockWorkingSetShared((__int64)&unk_140E38140);
  }
  if ( LeafVa <= v9 )
  {
    do
    {
      memset(&v23[8], 0, 32);
      v11 = MiFastLockLeafPageTable((__int64)&unk_140E38140, LeafVa, 0);
      if ( !v11 )
        break;
      for ( i = 0LL; i < 4; ++i )
      {
        LeafVa = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        *(_QWORD *)&v23[8 * i + 8] = LeafVa;
      }
      v13 = v11 - 1;
      v14 = v9;
      v15 = 0xFFFFF68000000000uLL;
      v16 = 0LL;
      v17 = *(_QWORD *)&v23[8 * v11 + 8];
      v18 = *(_QWORD *)&v23[8 * v11];
      do
      {
        v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        *(_QWORD *)&v23[8 * v16++ + 8] = v14;
      }
      while ( v16 < 4 );
      v19 = *(_QWORD *)&v23[8 * v11];
      if ( v19 > (v18 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
        v19 = v18 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
      while ( v18 <= v19 )
      {
        MiDeleteNonPagedPoolPte(v32, v18, v13);
        v20 = (unsigned int)(v34 + 1);
        v34 = 0;
        v18 += 8 * v20;
      }
      MiDeleteNonPagedPoolTail(v32, v16, v15);
      v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v17) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (*(_DWORD *)(v21 + 36) & 0x4000000) != 0 )
        v22 = HIDWORD(*(_QWORD *)v21);
      else
        v22 = *(_QWORD *)(v21 + 16) >> 16;
      if ( (v22 & 0x3FF) == 0 )
        v8 = 1;
      MiUnlockPageTable((__int64)&unk_140E38140, v17);
      LeafVa = MiGetLeafVa(v18);
    }
    while ( LeafVa <= v9 );
    LOBYTE(v7) = v41;
    if ( !v8 )
    {
      if ( LeafVa > v9 )
        goto LABEL_4;
      v36 = LeafVa;
    }
    MiWalkPageTables(v32);
  }
LABEL_4:
  MiUnlockWorkingSetShared((__int64)&unk_140E38140, v33);
  if ( v26 )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogNonPagedPoolReleaseEvent(v25);
    MiReturnPhysicalPoolPages((__int64)v25, 2u);
  }
  if ( v28 )
    MiReturnPhysicalPoolPages((__int64)v27, (2 * (v7 & 2)) | 3);
  return v31;
}
