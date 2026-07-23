/*
 * XREFs of MiAllocateEnclaveVad @ 0x1407F74B4
 * Callers:
 *     MiCreateEnclave @ 0x1407F77F4 (MiCreateEnclave.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiUpdateVadStartVpn @ 0x140441BA4 (MiUpdateVadStartVpn.c)
 *     MiGetUserReservationHighestAddress @ 0x1408DC990 (MiGetUserReservationHighestAddress.c)
 *     MiSelectUserAddress @ 0x140918180 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140919160 (MiAdvanceVadHint.c)
 *     MiIsVaRangeAvailable @ 0x140A0C10C (MiIsVaRangeAvailable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateEnclaveVad(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // r13
  BOOL v9; // ebx
  __int64 Process; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 Pool; // rax
  __int64 v15; // rdi
  __int64 v17; // rax
  int inserted; // ebx
  __int64 v19; // rax
  int v20; // eax
  void *v21; // rcx
  _QWORD *v22; // rdx
  __int64 UserReservationHighestAddress; // rax
  unsigned __int64 v24; // rbp
  __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+20h]

  v31 = a4;
  v30 = 0LL;
  v29[0] = 0LL;
  v5 = a3;
  CurrentThread = KeGetCurrentThread();
  v9 = (unsigned int)(a1 - 16) <= 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 >= 0xFFFFFFFFFFFFF000uLL || a2 == 0 )
    return 3221225485LL;
  if ( (unsigned int)(a1 - 16) > 1 )
  {
    v12 = a2 - 1;
    v13 = a2;
    if ( (v12 & a2) != 0 )
      v13 = a2 & ~v12;
    v11 = 0x10000LL;
    if ( v13 >= 0x10000 )
    {
      v11 = v13;
      if ( v13 >= 0x7FFFFFFF0000LL )
        return 3221225485LL;
    }
  }
  else
  {
    v11 = 0x200000LL;
  }
  if ( a2 >= 0x7FFFFFFF0000LL
    || a3 && (a3 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - a3 < a2 || ((v11 - 1) & a3) != 0 || a4) )
  {
    return 3221225485LL;
  }
  Pool = MiAllocatePool(0x40uLL, 0x90uLL, 1164206422);
  v15 = Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( !v9 )
  {
    *(_DWORD *)(Pool + 64) |= 1u;
    v17 = MiReservePtes((__int64)&qword_140E376A8, 1u);
    *(_QWORD *)(v15 + 80) = v17;
    if ( !v17
      || a1 == 2
      && (*(_DWORD *)(v15 + 72) |= 1u,
          v19 = MiAllocatePool(0x40uLL, 0x1000uLL, 1850042701),
          (*(_QWORD *)(v15 + 88) = v19) == 0LL) )
    {
      inserted = -1073741670;
LABEL_25:
      if ( (*(_DWORD *)(v15 + 64) & 1) != 0 )
      {
        v21 = *(void **)(v15 + 88);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        v22 = *(_QWORD **)(v15 + 80);
        if ( v22 )
          MiReleasePtes((__int64)&qword_140E376A8, v22, 1u);
      }
      ExFreePoolWithTag((PVOID)v15, 0);
      return (unsigned int)inserted;
    }
    *(_DWORD *)(v15 + 48) = *(_DWORD *)(v15 + 48) & 0xFFFFFF8F | 0x30;
    *(_QWORD *)(v15 + 128) = 0LL;
  }
  v20 = *(_DWORD *)(v15 + 48);
  *(_QWORD *)(v15 + 40) = 0LL;
  *(_QWORD *)(v15 + 16) = -2LL;
  *(_DWORD *)(v15 + 48) = v20 & 0xF7DFF07F | 0x8200200;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 500) & 0x20) != 0 )
  {
    inserted = -1073741558;
LABEL_24:
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    goto LABEL_25;
  }
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, v31);
  if ( v5 )
  {
    v24 = (v5 + a2 - 1) | 0xFFF;
    if ( !(unsigned int)MiIsVaRangeAvailable(Process, v5, (int)v24 - (int)v5 + 1, 0, UserReservationHighestAddress) )
    {
      inserted = -1073741800;
      goto LABEL_24;
    }
  }
  else
  {
    inserted = MiSelectUserAddress(0, 0, UserReservationHighestAddress, a2, v11, 0LL, 6, 0, (__int64)v29, (__int64)&v30);
    if ( inserted < 0 )
      goto LABEL_24;
    v5 = v30;
    v24 = v30 + a2 - 1;
  }
  v25 = v5 >> 12;
  v26 = v24 >> 12;
  MiUpdateVadStartVpn(v15, v25);
  *(_DWORD *)(v15 + 28) = v26;
  *(_BYTE *)(v15 + 33) = BYTE4(v26);
  inserted = MiInsertVadCharges(v27, Process);
  if ( inserted < 0 )
    goto LABEL_24;
  MiLockVad((__int64)CurrentThread, v15);
  MiInsertVad(v15, Process, 0LL, v28);
  if ( v29[0] )
    MiAdvanceVadHint(v25, v26);
  MiReferenceVad(v15);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
  *a5 = v15;
  return 0LL;
}
