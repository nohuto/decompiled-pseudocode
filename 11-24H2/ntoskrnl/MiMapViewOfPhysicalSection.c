/*
 * XREFs of MiMapViewOfPhysicalSection @ 0x140A0BD00
 * Callers:
 *     MiMapViewOfSection @ 0x1408A2840 (MiMapViewOfSection.c)
 * Callees:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C8524 (MiInsertViewOfPhysicalSection.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiUpdateVadStartVpn @ 0x140441BA4 (MiUpdateVadStartVpn.c)
 *     MiIsPfn @ 0x14044F7D0 (MiIsPfn.c)
 *     MiSanitizePage @ 0x14045F4E4 (MiSanitizePage.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiSelectUserAddress @ 0x140918180 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140919160 (MiAdvanceVadHint.c)
 *     MiCommitVadMetadataBits @ 0x14091D290 (MiCommitVadMetadataBits.c)
 *     MiIsVaRangeAvailable @ 0x140A0C10C (MiIsVaRangeAvailable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfPhysicalSection(__int64 a1, unsigned __int64 *a2, _QWORD *a3, unsigned int a4)
{
  int v4; // eax
  __int64 v9; // r15
  struct _KTHREAD *CurrentThread; // r13
  __int64 Pool; // rax
  __int64 v12; // rbx
  int v13; // ecx
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  int inserted; // ebp
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  int v28; // edi
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // r14
  ULONG_PTR v32; // rdi
  __int64 v33; // rax
  __int64 v34; // [rsp+50h] [rbp-78h]
  unsigned __int64 v35; // [rsp+58h] [rbp-70h]
  unsigned __int64 v36; // [rsp+60h] [rbp-68h]
  unsigned __int64 v37; // [rsp+60h] [rbp-68h]
  unsigned __int64 v38; // [rsp+68h] [rbp-60h]
  unsigned __int64 *v39; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp-50h]
  unsigned __int64 v41; // [rsp+80h] [rbp-48h]
  __int64 v42; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 *v43; // [rsp+D8h] [rbp+10h]
  _DWORD *v44; // [rsp+E0h] [rbp+18h]

  v44 = a3;
  v43 = a2;
  v4 = *(_DWORD *)(a1 + 64);
  v42 = 0LL;
  if ( (v4 & 2) != 0 || *(_QWORD *)(a1 + 72) )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 88);
  if ( (a4 & 0xFFFFFFF8) == 0x10 || (a4 & 5) == 5 || a4 == 24 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v39 = 0LL;
  Pool = MiAllocatePool(0x40uLL, 0x40uLL, 1818517846);
  v12 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v13 = *(_DWORD *)(Pool + 48);
  *(_QWORD *)(Pool + 16) = -2LL;
  *(_QWORD *)(Pool + 40) = 0LL;
  *(_DWORD *)(Pool + 48) = (v13 & 0xFFFFFF8F | 0x10) ^ ((v13 & 0xFF8F | 0x10) ^ (unsigned __int16)((_WORD)a4 << 7)) & 0xF80 | 0x200000;
  v38 = -1LL;
  v14 = MiSanitizePage(*a3 >> 12);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, v9);
  if ( (*(_DWORD *)(v9 + 500) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_23;
  }
  v15 = (unsigned __int16)*(_DWORD *)a3;
  if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
  {
    v18 = v15 + *a2;
    v29 = v15 + *(_DWORD *)a2;
    v17 = v18 + *(_QWORD *)(a1 + 24) - 1LL;
    if ( !(unsigned int)MiIsVaRangeAvailable(v9, v29, *(_DWORD *)(a1 + 24), *(_QWORD *)a1, *(_QWORD *)(a1 + 8)) )
    {
      inserted = -1073741800;
      goto LABEL_23;
    }
  }
  else
  {
    v36 = *(_QWORD *)(a1 + 24) + v15;
    inserted = MiSelectUserAddress(
                 *(_DWORD *)(a1 + 40),
                 *(_QWORD *)a1,
                 *(_QWORD *)(a1 + 8),
                 v36,
                 *(_QWORD *)(a1 + 16),
                 0LL,
                 a4,
                 0,
                 &v39,
                 &v42);
    if ( inserted < 0 )
      goto LABEL_23;
    v17 = v42 + v36 - 1;
    v18 = (unsigned __int16)*v44 + v42;
  }
  v19 = v17 >> 12;
  v41 = v18 >> 12;
  v40 = v19;
  MiUpdateVadStartVpn(v12, v18 >> 12);
  v20 = *(unsigned __int8 *)(v12 + 32);
  v21 = *(unsigned int *)(v12 + 24);
  *(_BYTE *)(v12 + 33) = BYTE4(v19);
  *(_DWORD *)(v12 + 28) = v19;
  v37 = v14 + ((unsigned int)v19 | ((unsigned __int64)BYTE4(v19) << 32)) - (v21 | (v20 << 32));
  v22 = MiProtectionToCacheAttribute(a4);
  v34 = -1LL;
  v24 = v14;
  v25 = 0LL;
  LODWORD(v42) = v22;
  while ( 1 )
  {
    v35 = v24;
    if ( v24 > v23 )
      break;
    if ( (unsigned int)MiIsPfn(v24) )
    {
      v26 = v34;
    }
    else
    {
      v26 = v24;
      if ( v25 )
        v26 = v34;
      ++v25;
      v34 = v26;
      if ( v24 != v37 )
        goto LABEL_16;
    }
    if ( v25 )
    {
      inserted = MiReferenceIoPages(1u, v26, v25, v42, 0LL, 0LL);
      if ( inserted < 0 )
        goto LABEL_23;
      v30 = v34;
      v34 = -1LL;
      v24 = v35;
      v38 = v25 + v30 - 1;
      v25 = 0LL;
    }
LABEL_16:
    v23 = v37;
    ++v24;
  }
  inserted = MiInsertVadCharges(v12, v9);
  if ( inserted < 0 )
  {
LABEL_23:
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v9);
    if ( v38 != -1LL )
    {
      v31 = -1LL;
      v32 = 0LL;
      while ( v14 <= v38 )
      {
        if ( (unsigned int)MiIsPfn(v14) )
          goto LABEL_45;
        v33 = v14;
        if ( v32 )
          v33 = v31;
        ++v32;
        v31 = v33;
        if ( v14 == v38 )
        {
LABEL_45:
          if ( v32 )
          {
            MiDereferenceIoPages(1, v31, v32);
            v32 = 0LL;
            v31 = -1LL;
          }
        }
        ++v14;
      }
    }
    ExFreePoolWithTag((PVOID)v12, 0);
    return (unsigned int)inserted;
  }
  MiInsertViewOfPhysicalSection(v9, v12, v14);
  if ( v39 )
    MiAdvanceVadHint(v41, v40, v39);
  if ( !*(_DWORD *)(a1 + 120) )
  {
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v9);
    goto LABEL_22;
  }
  MiLockVad((__int64)CurrentThread, v12);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v9);
  v28 = MiCommitVadMetadataBits(v12, 0LL, *(_DWORD *)(a1 + 120));
  if ( v28 >= 0 )
  {
    MiUnlockVad((__int64)CurrentThread, v12);
LABEL_22:
    *v43 = v18;
    return 0LL;
  }
  else
  {
    MiReferenceVad(v12);
    MiDeleteVad((unsigned __int8 *)v12, 0LL);
    return (unsigned int)v28;
  }
}
