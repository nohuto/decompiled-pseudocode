/*
 * XREFs of MiDeleteEmptyPageTables @ 0x1403C7ED4
 * Callers:
 *     MiDeleteAwePageTables @ 0x140682E50 (MiDeleteAwePageTables.c)
 *     MiFreeVirtualMemory @ 0x1408D9E68 (MiFreeVirtualMemory.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiDecommitInitializePacket @ 0x1402995B0 (MiDecommitInitializePacket.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403C8D90 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiDeleteEmptyPageTables(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rsi
  struct _LIST_ENTRY *Address; // rax
  __int64 v9; // rbx
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD v16[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v19; // [rsp+94h] [rbp-6Ch]
  unsigned __int8 v20; // [rsp+99h] [rbp-67h]
  int v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v23; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v24; // [rsp+C0h] [rbp-40h]
  __int64 (*v25)(); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v26)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+140h] [rbp+40h]
  _QWORD *v27; // [rsp+148h] [rbp+48h]
  _BYTE v28[160]; // [rsp+150h] [rbp+50h] BYREF
  int v29; // [rsp+1F0h] [rbp+F0h]
  _QWORD v30[2]; // [rsp+230h] [rbp+130h] BYREF
  char v31[64]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v32; // [rsp+280h] [rbp+180h]

  v17 = 0LL;
  memset(v16, 0, sizeof(v16));
  memset_0(v31, 0, 0x68uLL);
  memset_0(v28, 0, 0xE0uLL);
  memset_0(&v18, 0, 0xC0uLL);
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
          v11 = v32;
          if ( (a3 & 1) == 0 )
            v11 = v9;
          v32 = v11;
          MiDecommitInitializePacket(
            (__int64)v28,
            ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            ((__int64)(((a2 >> 9) & 0x7FFFFFFFF8LL) - ((a1 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1,
            0LL,
            Process,
            v9,
            33,
            0LL,
            (__int64)v16);
          v21 = 0;
          v30[0] = v28;
          v29 = 128;
          v30[1] = v16;
          v18 = 7;
          v23 = a1;
          v19 = v19 & 0xFFFFFE3F | 0x40;
          v27 = v30;
          v25 = MiDeleteEmptyPageTable;
          v26 = MiDeleteEmptyPageTableTail;
          v24 = a2;
          v22 = Process + 1024;
          LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, Process);
          v20 = MiLockWorkingSetShared(Process + 1024, v12, v13, v14);
          if ( !MiDeleteVaDirect((__int64)&v18) )
            MiWalkPageTables(&v18);
          MiUnlockWorkingSetShared(Process + 1024, v20);
          UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
        }
        MiUnlockVad(CurrentThread, v9);
      }
    }
  }
  return UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, Process);
}
