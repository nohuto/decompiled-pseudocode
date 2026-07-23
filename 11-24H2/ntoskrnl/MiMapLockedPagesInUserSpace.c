/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x1408DC1EC
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiUpdateProtectionMask @ 0x140248CFC (MiUpdateProtectionMask.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     MiDoubleLockMdlPage @ 0x140345AF8 (MiDoubleLockMdlPage.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140390E28 (MiMapLockedPagesInUserSpaceHelper.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiLegitimatePageForDriversToMap @ 0x14041DB10 (MiLegitimatePageForDriversToMap.c)
 *     MiDoubleUnlockMdlPage @ 0x14044022C (MiDoubleUnlockMdlPage.c)
 *     MiUpdateVadStartVpn @ 0x140441BA4 (MiUpdateVadStartVpn.c)
 *     MiIsPfn @ 0x14044F7D0 (MiIsPfn.c)
 *     MiSanitizePage @ 0x14045F4E4 (MiSanitizePage.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiAddSecureEntry @ 0x1408DC0A0 (MiAddSecureEntry.c)
 *     MiSelectUserAddress @ 0x140918180 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140919160 (MiAdvanceVadHint.c)
 *     MiIsVaRangeAvailable @ 0x140A0C10C (MiIsVaRangeAvailable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiMapLockedPagesInUserSpace(
        __int64 a1,
        __int16 a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  __int64 *v7; // rdi
  int v8; // esi
  unsigned __int64 *v9; // r12
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 Pool; // rax
  __int64 v13; // rbx
  int updated; // eax
  int v15; // ecx
  unsigned __int64 *v16; // r13
  __int64 Process; // rsi
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r14
  NTSTATUS inserted; // esi
  int v22; // eax
  char v23; // rax^4
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // r14
  struct _KTHREAD *v31; // r12
  __int64 v32; // r9
  __int64 v33; // rsi
  int v34; // r9d
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // [rsp+50h] [rbp-78h]
  __int64 v39; // [rsp+58h] [rbp-70h]
  __int64 v40; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-58h]
  unsigned __int64 v43; // [rsp+78h] [rbp-50h]
  unsigned __int64 v44; // [rsp+80h] [rbp-48h]
  unsigned __int64 v47; // [rsp+E8h] [rbp+20h] BYREF

  v47 = a4;
  if ( (a4 & 0xFFF) != 0 )
    RtlRaiseStatus(-1073741503);
  v7 = (__int64 *)(a1 + 48);
  v8 = a5;
  v9 = (unsigned __int64 *)(a1 + 48);
  v10 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  v11 = v10;
  v38 = a5 & 0x20000000;
  if ( (a5 & 0x20000000) != 0 )
  {
    if ( a4 )
      RtlRaiseStatus(-1073741811);
    v11 = v10 + 2;
    if ( v10 + 2 < v10 )
      goto LABEL_33;
  }
  Pool = MiAllocatePool(0x40uLL, 0x40uLL, 1818517846);
  v13 = Pool;
  if ( !Pool )
LABEL_33:
    RtlRaiseStatus(-1073741670);
  *(_QWORD *)(Pool + 40) = 0LL;
  *(_QWORD *)(Pool + 16) = -2LL;
  updated = MiUpdateProtectionMask(((v8 >> 31) & 0xFFFFFFFD) + 4, a3);
  v15 = *(_DWORD *)(v13 + 48);
  a6 = updated;
  v16 = 0LL;
  *(_DWORD *)(v13 + 48) = (v15 & 0xFFFFF07F ^ ((updated & 0x1F) << 7)) & 0xDFDFFF8F | 0x20200010;
  v40 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v39 = Process;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 500) & 0x20) != 0 )
  {
    v30 = Process;
    inserted = -1073741558;
    goto LABEL_18;
  }
  v18 = v47;
  v19 = *(_QWORD *)(Process + 872) - 1LL;
  if ( v19 >= 0x7FFFFFFEFFFFLL )
    v19 = 0x7FFFFFFEFFFFLL;
  v20 = v11 << 12;
  if ( v47 )
  {
    if ( (unsigned int)MiIsVaRangeAvailable(Process, v47, v20, 0, v19) )
      goto LABEL_10;
    inserted = -1073741800;
LABEL_17:
    v30 = v39;
    goto LABEL_18;
  }
  inserted = MiSelectUserAddress(0, 0, v19, v20, 0x10000LL, 0LL, a6, 0, (__int64)&v40, (__int64)&v47);
  if ( inserted < 0 )
    goto LABEL_17;
  v18 = v47;
LABEL_10:
  v41 = v20 + v18 - 1;
  v44 = v18 >> 12;
  v43 = v41 >> 12;
  MiUpdateVadStartVpn(v13, v18 >> 12);
  *(_DWORD *)(v13 + 28) = v22;
  *(_BYTE *)(v13 + 33) = v23;
  v24 = 0LL;
  while ( 1 )
  {
    v47 = v24;
    if ( v24 >= v10 )
      break;
    if ( (unsigned int)MiIsPfn(*v9) )
    {
      v25 = 48 * *v9 - 0x220000000000LL;
      inserted = MiLegitimatePageForDriversToMap(v25);
      if ( inserted < 0 || !(unsigned int)MiDoubleLockMdlPage(v25, v26, v27, v28) )
        goto LABEL_17;
    }
    else
    {
      v29 = MiSanitizePage(*v9);
      inserted = MiReferenceIoPages(1u, v29, 1uLL, a3, 0LL, 0LL);
      if ( inserted < 0 )
        goto LABEL_17;
    }
    v16 = v9;
    v24 = v47 + 1;
    ++v9;
  }
  v30 = v39;
  inserted = MiInsertVadCharges(v13, v39);
  if ( inserted < 0 )
  {
LABEL_18:
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v30);
    if ( v16 )
    {
      while ( v7 <= (__int64 *)v16 )
      {
        if ( (unsigned int)MiIsPfn(*v7) )
          MiDoubleUnlockMdlPage(48 * *v7 - 0x220000000000LL, 0LL, v36, v37);
        else
          MiDereferenceIoPages(1, *v7, 1uLL);
        ++v7;
      }
    }
    ExFreePoolWithTag((PVOID)v13, 0);
    RtlRaiseStatus(inserted);
  }
  if ( v40 )
    MiAdvanceVadHint(v44, v43);
  v31 = CurrentThread;
  MiLockVad((__int64)CurrentThread, v13);
  v33 = v41;
  if ( v38 )
  {
    v18 += 4096LL;
    v33 = v41 - 4096;
  }
  MiInsertVad(v13, v39, 0LL, v32);
  MiMapLockedPagesInUserSpaceHelper(v18, (__int64)v7, 0LL, a3, v10, v13, a5);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v31, v39);
  MiReferenceVad(v13);
  v34 = 2;
  if ( a6 != 1 )
    v34 = 4;
  if ( !MiAddSecureEntry(v13, v18, v33, v34, 0) )
  {
    MiDeleteVad((unsigned __int8 *)v13, 0LL);
    RtlRaiseStatus(-1073741670);
  }
  MiUnlockAndDereferenceVad((PVOID)v13);
  return v18 + *(unsigned int *)(a1 + 44);
}
