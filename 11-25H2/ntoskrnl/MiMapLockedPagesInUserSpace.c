/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x1408F8DEC
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MiUpdateProtectionMask @ 0x140234CAC (MiUpdateProtectionMask.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403381B0 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDoubleLockMdlPage @ 0x14033E058 (MiDoubleLockMdlPage.c)
 *     MiDereferenceIoPages @ 0x140391A60 (MiDereferenceIoPages.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
 *     MiIsPfn @ 0x1403F2190 (MiIsPfn.c)
 *     MiSanitizePage @ 0x14041443C (MiSanitizePage.c)
 *     MiLegitimatePageForDriversToMap @ 0x1404336D0 (MiLegitimatePageForDriversToMap.c)
 *     MiDoubleUnlockMdlPage @ 0x14044A2E8 (MiDoubleUnlockMdlPage.c)
 *     MiUpdateVadStartVpn @ 0x14044B674 (MiUpdateVadStartVpn.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiAddSecureEntry @ 0x1408F8CA0 (MiAddSecureEntry.c)
 *     MiSelectUserAddress @ 0x1408FF930 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140900910 (MiAdvanceVadHint.c)
 *     MiIsVaRangeAvailable @ 0x140902548 (MiIsVaRangeAvailable.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  NTSTATUS inserted; // esi
  int v22; // eax
  char v23; // rax^4
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r14
  struct _KTHREAD *v28; // r12
  __int64 v29; // rsi
  int v30; // r9d
  __int64 v32; // r8
  unsigned __int64 v33; // r9
  int v34; // [rsp+50h] [rbp-78h]
  __int64 v35; // [rsp+58h] [rbp-70h]
  __int64 v36; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-58h]
  unsigned __int64 v39; // [rsp+78h] [rbp-50h]
  unsigned __int64 v40; // [rsp+80h] [rbp-48h]
  unsigned __int64 v43; // [rsp+E8h] [rbp+20h] BYREF

  v43 = a4;
  if ( (a4 & 0xFFF) != 0 )
    RtlRaiseStatus(-1073741503);
  v7 = (__int64 *)(a1 + 48);
  v8 = a5;
  v9 = (unsigned __int64 *)(a1 + 48);
  v10 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  v11 = v10;
  v34 = a5 & 0x20000000;
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
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v35 = Process;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 500) & 0x20) != 0 )
  {
    v27 = Process;
    inserted = -1073741558;
    goto LABEL_18;
  }
  v18 = v43;
  v19 = *(_QWORD *)(Process + 872) - 1LL;
  if ( v19 >= 0x7FFFFFFEFFFFLL )
    v19 = 0x7FFFFFFEFFFFLL;
  v20 = v11 << 12;
  if ( v43 )
  {
    if ( (unsigned int)MiIsVaRangeAvailable(Process, v43, v20, 0, v19) )
      goto LABEL_10;
    inserted = -1073741800;
LABEL_17:
    v27 = v35;
    goto LABEL_18;
  }
  inserted = MiSelectUserAddress(0, 0, v19, v20, 0x10000LL, 0LL, a6, 0, (__int64)&v36, (__int64)&v43);
  if ( inserted < 0 )
    goto LABEL_17;
  v18 = v43;
LABEL_10:
  v37 = v20 + v18 - 1;
  v40 = v18 >> 12;
  v39 = v37 >> 12;
  MiUpdateVadStartVpn(v13, v18 >> 12);
  *(_DWORD *)(v13 + 28) = v22;
  *(_BYTE *)(v13 + 33) = v23;
  v24 = 0LL;
  while ( 1 )
  {
    v43 = v24;
    if ( v24 >= v10 )
      break;
    if ( MiIsPfn(*v9) )
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
    v24 = v43 + 1;
    ++v9;
  }
  v27 = v35;
  inserted = MiInsertVadCharges(v13, v35);
  if ( inserted < 0 )
  {
LABEL_18:
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v27);
    if ( v16 )
    {
      while ( v7 <= (__int64 *)v16 )
      {
        if ( MiIsPfn(*v7) )
          MiDoubleUnlockMdlPage(48 * *v7 - 0x220000000000LL, 0LL, v32, v33);
        else
          MiDereferenceIoPages(1, *v7, 1uLL);
        ++v7;
      }
    }
    ExFreePoolWithTag((PVOID)v13, 0);
    RtlRaiseStatus(inserted);
  }
  if ( v36 )
    MiAdvanceVadHint(v40, v39);
  v28 = CurrentThread;
  MiLockVad((__int64)CurrentThread, v13);
  v29 = v37;
  if ( v34 )
  {
    v18 += 4096LL;
    v29 = v37 - 4096;
  }
  MiInsertVad(v13, v35, 0);
  MiMapLockedPagesInUserSpaceHelper(v18, (__int64)v7, 0LL, a3, v10, v13, a5);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v28, v35);
  MiReferenceVad(v13);
  v30 = 2;
  if ( a6 != 1 )
    v30 = 4;
  if ( !MiAddSecureEntry(v13, v18, v29, v30, 0) )
  {
    MiDeleteVad(v13, 0LL);
    RtlRaiseStatus(-1073741670);
  }
  MiUnlockAndDereferenceVad((char *)v13);
  return v18 + *(unsigned int *)(a1 + 44);
}
