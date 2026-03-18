/*
 * XREFs of MiDeleteEmptyPageTables @ 0x140405978
 * Callers:
 *     MiDeleteAwePageTables @ 0x140681C60 (MiDeleteAwePageTables.c)
 *     MiFreeVirtualMemory @ 0x1408DBC38 (MiFreeVirtualMemory.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiVadPureReserve @ 0x140236380 (MiVadPureReserve.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     MiDecommitInitializePacket @ 0x1402899B0 (MiDecommitInitializePacket.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1404065E0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiDeleteEmptyPageTables(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rsi
  struct _LIST_ENTRY *Address; // rax
  __int64 v9; // rbx
  int v10; // edx
  __int64 v11; // rax
  _OWORD v13[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+80h] [rbp-80h]
  int v15; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v16; // [rsp+94h] [rbp-6Ch]
  unsigned __int8 v17; // [rsp+99h] [rbp-67h]
  int v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v20; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v21; // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall *v22)(_QWORD, _QWORD, _QWORD); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v23)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+140h] [rbp+40h]
  _QWORD *v24; // [rsp+148h] [rbp+48h]
  _BYTE v25[160]; // [rsp+150h] [rbp+50h] BYREF
  int v26; // [rsp+1F0h] [rbp+F0h]
  _QWORD v27[2]; // [rsp+230h] [rbp+130h] BYREF
  char v28[64]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v29; // [rsp+280h] [rbp+180h]

  v14 = 0LL;
  memset(v13, 0, sizeof(v13));
  memset_0(v28, 0, 0x68uLL);
  memset_0(v25, 0, 0xE0uLL);
  memset_0(&v15, 0, 0xC0uLL);
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE(CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 500) & 0x20) == 0 )
  {
    Address = MiLocateAddress(a1);
    v9 = (__int64)Address;
    if ( Address )
    {
      if ( a2 >> 12 <= (HIDWORD(Address[1].Blink) | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) )
      {
        MiLockVad((__int64)CurrentThread, (__int64)Address);
        if ( (*(_DWORD *)(v9 + 48) & 0x200000) != 0
          && MiVadPureReserve(v9)
          && (v10 & 0xC200000) != 0x8200000
          && (*(unsigned int *)(v9 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 32)) != 0x7FFFFFFFDLL
          && (*(_DWORD *)(v9 + 48) & 4) == 0
          && ((*(unsigned int *)(v9 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 32)) < 0x7FFFFFFFDLL
           || (*(unsigned int *)(v9 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 32)) == 0x7FFFFFFFELL) )
        {
          v11 = v29;
          if ( (a3 & 1) == 0 )
            v11 = v9;
          v29 = v11;
          MiDecommitInitializePacket(
            (__int64)v25,
            ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            ((__int64)(((a2 >> 9) & 0x7FFFFFFFF8LL) - ((a1 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1,
            0LL,
            Process,
            v9,
            33,
            0LL,
            (__int64)v13);
          v18 = 0;
          v27[0] = v25;
          v26 = 128;
          v27[1] = v13;
          v15 = 7;
          v20 = a1;
          v16 = v16 & 0xFFFFFE3F | 0x40;
          v24 = v27;
          v22 = MiDeleteEmptyPageTable;
          v23 = MiDeleteEmptyPageTableTail;
          v21 = a2;
          v19 = Process + 1024;
          LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
          v17 = MiLockWorkingSetShared(Process + 1024);
          if ( !MiDeleteVaDirect(&v15) )
            MiWalkPageTables((__int64)&v15);
          MiUnlockWorkingSetShared(Process + 1024, v17);
          UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
        }
        MiUnlockVad((__int64)CurrentThread, v9);
      }
    }
  }
  return UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, Process);
}
