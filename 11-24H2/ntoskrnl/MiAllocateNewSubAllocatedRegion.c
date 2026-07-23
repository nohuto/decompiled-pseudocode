/*
 * XREFs of MiAllocateNewSubAllocatedRegion @ 0x1408DD544
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1408DE814 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403C8D90 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     MiUpdateVadStartVpn @ 0x140441BA4 (MiUpdateVadStartVpn.c)
 *     MiAddSecureEntry @ 0x1408DC0A0 (MiAddSecureEntry.c)
 *     MiCreateVadEventBitmap @ 0x1408DC8AC (MiCreateVadEventBitmap.c)
 *     MiGetUserReservationHighestAddress @ 0x1408DC990 (MiGetUserReservationHighestAddress.c)
 *     MiSelectUserAddress @ 0x140918180 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140919160 (MiAdvanceVadHint.c)
 *     MiFreeVadEventBitmap @ 0x140ABD7CC (MiFreeVadEventBitmap.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateNewSubAllocatedRegion(__int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v3; // r14
  __int64 Process; // rdi
  __int64 Pool; // rax
  __int64 v6; // rbx
  int v7; // ecx
  int UserReservationHighestAddress; // eax
  __int64 v9; // r15
  unsigned int v10; // ecx
  unsigned __int64 v11; // r13
  int VadEventBitmap; // esi
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // r8
  _QWORD *v22; // r14
  __int64 v23; // rdx
  void *v24; // r12
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rcx
  int v29; // [rsp+50h] [rbp-58h]
  unsigned __int64 v30; // [rsp+58h] [rbp-50h]
  __int64 v31; // [rsp+60h] [rbp-48h]
  unsigned __int64 v32; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 512LL;
  v32 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v31 = *(_QWORD *)(Process + 1040);
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
  v29 = UserReservationHighestAddress;
  v9 = 0x200000LL;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v6 + 48);
    v33 = 0LL;
    v11 = v3;
    v34 = v9;
    VadEventBitmap = MiSelectUserAddress(
                       0,
                       0,
                       UserReservationHighestAddress,
                       (_DWORD)v3 << 12,
                       v9,
                       0LL,
                       (v10 >> 7) & 0x1F,
                       0x80000000,
                       (__int64)&v33,
                       (__int64)&v32);
    if ( VadEventBitmap >= 0 )
      break;
    if ( v9 != 0x10000 )
      v9 = 0x10000LL;
    v3 >>= 1;
    UserReservationHighestAddress = v29;
    if ( v34 != 0x10000 )
      v3 = v11;
    if ( v3 < 0x10 )
      goto LABEL_15;
  }
  v13 = v32 >> 12;
  v34 = (v3 << 12) + v32 - 1;
  MiUpdateVadStartVpn(v6, v32 >> 12);
  v15 = v14 >> 12;
  *(_DWORD *)(v6 + 28) = v14 >> 12;
  *(_BYTE *)(v6 + 33) = v14 >> 12 >> 32;
  v16 = v3;
  VadEventBitmap = MiCreateVadEventBitmap(Process, v6, v3, 64);
  if ( VadEventBitmap < 0 )
  {
LABEL_15:
    ExFreePoolWithTag((PVOID)v6, 0);
    return (unsigned int)VadEventBitmap;
  }
  v30 = MiLocateLockedVadEvent(v6, 64) + 8;
  v20 = ExGenRandom((int)v17 - 63, v17, v18, v19);
  v21 = v34;
  v22 = (_QWORD *)(v30 + 16);
  *(_QWORD *)(v30 + 32) = v6;
  *(_DWORD *)(v30 + 48) = 4 * (v20 % v16);
  v23 = v32;
  *(_QWORD *)(v30 + 16) = 0LL;
  *(_QWORD *)(v30 + 24) = 0LL;
  *(_DWORD *)(v30 + 40) = 0;
  *(_DWORD *)(v30 + 44) = v16;
  v24 = (void *)MiAddSecureEntry(v6, v23, v21, -2147483647, 0);
  if ( !v24 )
  {
    VadEventBitmap = -1073741670;
    goto LABEL_8;
  }
  VadEventBitmap = MiInsertVadCharges(v6, Process);
  if ( VadEventBitmap < 0 )
  {
LABEL_8:
    if ( v30 )
      MiFreeVadEventBitmap(Process, v6, 64LL);
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    goto LABEL_15;
  }
  MiLockVad((__int64)CurrentThread, v6);
  MiInsertVad(v6, Process, 0LL, v25);
  MiUnlockVad((__int64)CurrentThread, v6);
  if ( v33 )
    MiAdvanceVadHint(v13, v15);
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  v26 = (_QWORD *)(v31 + 1032);
  v27 = *(_QWORD *)(v31 + 1032);
  if ( *(_QWORD *)(v27 + 8) != v31 + 1032 )
    __fastfail(3u);
  *v22 = v27;
  *(_QWORD *)(v30 + 24) = v26;
  *(_QWORD *)(v27 + 8) = v22;
  *v26 = v22;
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  return (unsigned int)VadEventBitmap;
}
