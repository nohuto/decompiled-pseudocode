/*
 * XREFs of MiAllocateNewSubAllocatedRegion @ 0x1409C3660
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C33C4 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1404065E0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     MiUpdateVadStartVpn @ 0x140449454 (MiUpdateVadStartVpn.c)
 *     MiSelectUserAddress @ 0x1408E15D0 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x1408E25B0 (MiAdvanceVadHint.c)
 *     MiGetUserReservationHighestAddress @ 0x1409C3960 (MiGetUserReservationHighestAddress.c)
 *     MiCreateVadEventBitmap @ 0x1409C3A04 (MiCreateVadEventBitmap.c)
 *     MiAddSecureEntry @ 0x1409C3F30 (MiAddSecureEntry.c)
 *     MiFreeVadEventBitmap @ 0x140AC24E4 (MiFreeVadEventBitmap.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateNewSubAllocatedRegion(__int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v3; // r14
  __int64 Process; // rdi
  __int64 Pool; // rax
  __int64 v6; // rbx
  int v7; // ecx
  unsigned __int64 UserReservationHighestAddress; // rax
  unsigned __int64 v9; // r15
  unsigned int v10; // ecx
  unsigned __int64 v11; // r13
  int VadEventBitmap; // esi
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r12
  int v17; // edx
  unsigned int v18; // eax
  int v19; // r8d
  _QWORD *v20; // r14
  int v21; // edx
  void *v22; // r12
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v26; // [rsp+50h] [rbp-58h]
  unsigned __int64 v27; // [rsp+58h] [rbp-50h]
  __int64 v28; // [rsp+60h] [rbp-48h]
  unsigned __int64 v29; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 *v30; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 512LL;
  v29 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v28 = *(_QWORD *)(Process + 1040);
  if ( a2 > 0x10 )
    return 3221225495LL;
  Pool = MiAllocatePool(0x40uLL, 0x40uLL, 1399087446);
  v6 = Pool;
  if ( !Pool )
    return 3221225495LL;
  v7 = *(_DWORD *)(Pool + 48);
  *(_QWORD *)(Pool + 40) = 0LL;
  *(_QWORD *)(Pool + 16) = -2LL;
  *(_DWORD *)(Pool + 48) = v7 & 0xFFDFF07F | 0x200200;
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, 0LL);
  v26 = UserReservationHighestAddress;
  v9 = 0x200000LL;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v6 + 48);
    v30 = 0LL;
    v11 = v3;
    v31 = v9;
    VadEventBitmap = MiSelectUserAddress(
                       0,
                       0LL,
                       UserReservationHighestAddress,
                       v3 << 12,
                       v9,
                       0LL,
                       (v10 >> 7) & 0x1F,
                       0x80000000,
                       &v30,
                       &v29);
    if ( VadEventBitmap >= 0 )
      break;
    if ( v9 != 0x10000 )
      v9 = 0x10000LL;
    v3 >>= 1;
    UserReservationHighestAddress = v26;
    if ( v31 != 0x10000 )
      v3 = v11;
    if ( v3 < 0x10 )
      goto LABEL_15;
  }
  v13 = v29 >> 12;
  v31 = (v3 << 12) + v29 - 1;
  MiUpdateVadStartVpn(v6, v29 >> 12);
  v15 = v14 >> 12;
  *(_DWORD *)(v6 + 28) = v14 >> 12;
  *(_BYTE *)(v6 + 33) = v14 >> 12 >> 32;
  v16 = v3;
  VadEventBitmap = MiCreateVadEventBitmap(Process, v6, v3, 64LL);
  if ( VadEventBitmap < 0 )
  {
LABEL_15:
    ExFreePoolWithTag((PVOID)v6, 0);
    return (unsigned int)VadEventBitmap;
  }
  v27 = MiLocateLockedVadEvent(v6, 64) + 8;
  v18 = ExGenRandom(v17 - 63);
  v19 = v31;
  v20 = (_QWORD *)(v27 + 16);
  *(_QWORD *)(v27 + 32) = v6;
  *(_DWORD *)(v27 + 48) = 4 * (v18 % v16);
  v21 = v29;
  *(_QWORD *)(v27 + 16) = 0LL;
  *(_QWORD *)(v27 + 24) = 0LL;
  *(_DWORD *)(v27 + 40) = 0;
  *(_DWORD *)(v27 + 44) = v16;
  v22 = (void *)MiAddSecureEntry(v6, v21, v19, -2147483647, 0);
  if ( !v22 )
  {
    VadEventBitmap = -1073741670;
    goto LABEL_8;
  }
  VadEventBitmap = MiInsertVadCharges(v6, Process);
  if ( VadEventBitmap < 0 )
  {
LABEL_8:
    if ( v27 )
      MiFreeVadEventBitmap(Process, v6, 64LL);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    goto LABEL_15;
  }
  MiLockVad((__int64)CurrentThread, v6);
  MiInsertVad(v6, Process, 0);
  MiUnlockVad((__int64)CurrentThread, v6);
  if ( v30 )
    MiAdvanceVadHint(v13, v15, v30);
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  v23 = (_QWORD *)(v28 + 1032);
  v24 = *(_QWORD *)(v28 + 1032);
  if ( *(_QWORD *)(v24 + 8) != v28 + 1032 )
    __fastfail(3u);
  *v20 = v24;
  *(_QWORD *)(v27 + 24) = v23;
  *(_QWORD *)(v24 + 8) = v20;
  *v23 = v20;
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  return (unsigned int)VadEventBitmap;
}
