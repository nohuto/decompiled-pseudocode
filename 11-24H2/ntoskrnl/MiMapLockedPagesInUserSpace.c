/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x1409C3AE8
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MiUpdateProtectionMask @ 0x14021BFAC (MiUpdateProtectionMask.c)
 *     MiDoubleLockMdlPage @ 0x14023BD94 (MiDoubleLockMdlPage.c)
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiReferenceVad @ 0x140262A70 (MiReferenceVad.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402855E0 (MiLegitimatePageForDriversToMap.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403CFA04 (MiMapLockedPagesInUserSpaceHelper.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     MiDoubleUnlockMdlPage @ 0x140447B0C (MiDoubleUnlockMdlPage.c)
 *     MiUpdateVadStartVpn @ 0x140449454 (MiUpdateVadStartVpn.c)
 *     MiIsPfn @ 0x14045A380 (MiIsPfn.c)
 *     MiSanitizePage @ 0x140467A44 (MiSanitizePage.c)
 *     MiSelectUserAddress @ 0x1408E15D0 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x1408E25B0 (MiAdvanceVadHint.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiAddSecureEntry @ 0x1409C3F30 (MiAddSecureEntry.c)
 *     MiIsVaRangeAvailable @ 0x140A139AC (MiIsVaRangeAvailable.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiMapLockedPagesInUserSpace(
        __int64 a1,
        __int16 a2,
        int a3,
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
  int inserted; // esi
  int v22; // eax
  char v23; // rax^4
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r14
  struct _KTHREAD *v28; // r12
  int v29; // esi
  int v30; // r9d
  __int64 v32; // r8
  int v33; // [rsp+50h] [rbp-78h]
  __int64 v34; // [rsp+58h] [rbp-70h]
  unsigned __int64 *v35; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-58h]
  unsigned __int64 v38; // [rsp+78h] [rbp-50h]
  unsigned __int64 v39; // [rsp+80h] [rbp-48h]
  unsigned __int64 v42; // [rsp+E8h] [rbp+20h] BYREF

  v42 = a4;
  if ( (a4 & 0xFFF) != 0 )
    RtlRaiseStatus(-1073741503);
  v7 = (__int64 *)(a1 + 48);
  v8 = a5;
  v9 = (unsigned __int64 *)(a1 + 48);
  v10 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  v11 = v10;
  v33 = a5 & 0x20000000;
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
  v35 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v34 = Process;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 500) & 0x20) != 0 )
  {
    v27 = Process;
    inserted = -1073741558;
    goto LABEL_18;
  }
  v18 = v42;
  v19 = *(_QWORD *)(Process + 872) - 1LL;
  if ( v19 >= 0x7FFFFFFEFFFFLL )
    v19 = 0x7FFFFFFEFFFFLL;
  v20 = v11 << 12;
  if ( v42 )
  {
    if ( (unsigned int)MiIsVaRangeAvailable(Process, v42, v20, 0, v19) )
      goto LABEL_10;
    inserted = -1073741800;
LABEL_17:
    v27 = v34;
    goto LABEL_18;
  }
  inserted = MiSelectUserAddress(0, 0LL, v19, v20, 0x10000uLL, 0LL, a6, 0, &v35, &v42);
  if ( inserted < 0 )
    goto LABEL_17;
  v18 = v42;
LABEL_10:
  v36 = v20 + v18 - 1;
  v39 = v18 >> 12;
  v38 = v36 >> 12;
  MiUpdateVadStartVpn(v13, v18 >> 12);
  *(_DWORD *)(v13 + 28) = v22;
  *(_BYTE *)(v13 + 33) = v23;
  v24 = 0LL;
  while ( 1 )
  {
    v42 = v24;
    if ( v24 >= v10 )
      break;
    if ( (unsigned int)MiIsPfn(*v9) )
    {
      v25 = 48 * *v9 - 0x220000000000LL;
      inserted = MiLegitimatePageForDriversToMap(v25);
      if ( inserted < 0 || !(unsigned int)MiDoubleLockMdlPage(v25) )
        goto LABEL_17;
    }
    else
    {
      v26 = MiSanitizePage(*v9);
      inserted = MiReferenceIoPages(1u, v26, 1uLL, a3, 0LL, 0LL);
      if ( inserted < 0 )
        goto LABEL_17;
    }
    v16 = v9;
    v24 = v42 + 1;
    ++v9;
  }
  v27 = v34;
  inserted = MiInsertVadCharges(v13, v34);
  if ( inserted < 0 )
  {
LABEL_18:
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v27);
    if ( v16 )
    {
      while ( v7 <= (__int64 *)v16 )
      {
        if ( (unsigned int)MiIsPfn(*v7) )
          MiDoubleUnlockMdlPage(48 * *v7 - 0x220000000000LL, 0LL, v32);
        else
          MiDereferenceIoPages(1, *v7, 1uLL);
        ++v7;
      }
    }
    ExFreePoolWithTag((PVOID)v13, 0);
    RtlRaiseStatus(inserted);
  }
  if ( v35 )
    MiAdvanceVadHint(v39, v38, v35);
  v28 = CurrentThread;
  MiLockVad((__int64)CurrentThread, v13);
  v29 = v36;
  if ( v33 )
  {
    v18 += 4096LL;
    v29 = v36 - 4096;
  }
  MiInsertVad(v13, v34, 0);
  MiMapLockedPagesInUserSpaceHelper(v18, (__int64)v7, 0LL, a3, v10, v13, a5);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v28, v34);
  MiReferenceVad(v13);
  v30 = 2;
  if ( a6 != 1 )
    v30 = 4;
  if ( !MiAddSecureEntry(v13, v18, v29, v30, 0) )
  {
    MiDeleteVad((unsigned __int8 *)v13, 0LL);
    RtlRaiseStatus(-1073741670);
  }
  MiUnlockAndDereferenceVad((PVOID)v13);
  return v18 + *(unsigned int *)(a1 + 44);
}
