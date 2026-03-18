/*
 * XREFs of MiDeleteEmptyPageTables @ 0x1403D7BA0
 * Callers:
 *     MiDeleteAwePageTables @ 0x140676440 (MiDeleteAwePageTables.c)
 *     MiFreeVirtualMemory @ 0x1408F6ADC (MiFreeVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140320330 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiDecommitInitializePacket @ 0x14038308C (MiDecommitInitializePacket.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140384DF0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

_QWORD *__fastcall MiDeleteEmptyPageTables(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rsi
  struct _LIST_ENTRY *Address; // rax
  __int64 v9; // rbx
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rax
  _OWORD v14[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+80h] [rbp-80h]
  int v16; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v17; // [rsp+94h] [rbp-6Ch]
  unsigned __int8 v18; // [rsp+99h] [rbp-67h]
  int v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v21; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v22; // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v24)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+140h] [rbp+40h]
  _QWORD *v25; // [rsp+148h] [rbp+48h]
  _BYTE v26[160]; // [rsp+150h] [rbp+50h] BYREF
  int v27; // [rsp+1F0h] [rbp+F0h]
  _QWORD v28[2]; // [rsp+230h] [rbp+130h] BYREF
  char v29[64]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v30; // [rsp+280h] [rbp+180h]

  v15 = 0LL;
  memset(v14, 0, sizeof(v14));
  memset_0(v29, 0, 0x68uLL);
  memset_0(v26, 0, 0xE0uLL);
  memset_0(&v16, 0, 0xC0uLL);
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
          && ((v10 & 0x4200000) != v11 || (v10 & 0x8000000) == 0)
          && (*(unsigned int *)(v9 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 32)) != 0x7FFFFFFFDLL
          && (*(_DWORD *)(v9 + 48) & 4) == 0
          && ((*(unsigned int *)(v9 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 32)) < 0x7FFFFFFFDLL
           || (*(unsigned int *)(v9 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 32)) == 0x7FFFFFFFELL) )
        {
          v12 = v30;
          if ( (a3 & 1) == 0 )
            v12 = v9;
          v30 = v12;
          MiDecommitInitializePacket(
            (__int64)v26,
            ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            ((__int64)(((a2 >> 9) & 0x7FFFFFFFF8LL) - ((a1 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1,
            0LL,
            Process,
            v9,
            33,
            0LL,
            (__int64)v14);
          v19 = 0;
          v28[0] = v26;
          v27 = 128;
          v28[1] = v14;
          v16 = 7;
          v21 = a1;
          v17 = v17 & 0xFFFFFE3F | 0x40;
          v25 = v28;
          v23 = MiDeleteEmptyPageTable;
          v24 = MiDeleteEmptyPageTableTail;
          v22 = a2;
          v20 = Process + 1024;
          LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
          v18 = MiLockWorkingSetShared(Process + 1024);
          if ( !MiDeleteVaDirect(&v16) )
            MiWalkPageTables(&v16);
          MiUnlockWorkingSetShared(Process + 1024, v18);
          UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
        }
        MiUnlockVad((__int64)CurrentThread, v9);
      }
    }
  }
  return UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
}
