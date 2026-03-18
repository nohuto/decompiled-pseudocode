/*
 * XREFs of MiDeleteSystemPageTables @ 0x140234368
 * Callers:
 *     MiDecommitSystemPageTables @ 0x1402342AC (MiDecommitSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x1403A62E0 (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiDeleteSystemPageTables(__int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // rdx
  _BYTE v11[40]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h]
  _DWORD v13[2]; // [rsp+58h] [rbp-B0h] BYREF
  char v14; // [rsp+61h] [rbp-A7h]
  __int64 v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+80h] [rbp-88h]
  __int64 v17; // [rsp+88h] [rbp-80h]
  void *v18; // [rsp+100h] [rbp-8h]
  __int64 (__fastcall *v19)(); // [rsp+108h] [rbp+0h]
  _BYTE *v20; // [rsp+110h] [rbp+8h]

  v12 = 0LL;
  memset(&v11[8], 0, 32);
  memset_0(v13, 0, 0xC0uLL);
  *(_DWORD *)&v11[8] = a2;
  v13[1] = (a5 & 7) << 6;
  v18 = &MiDeleteSystemPageTable;
  v19 = MiDeleteSystemPageTableTail;
  v20 = &v11[8];
  v13[0] = 8199;
  v16 = a3;
  v17 = a4;
  v15 = a1;
  if ( KeGetCurrentIrql() == 2 )
  {
    v14 = 17;
    MiLockWorkingSetSharedAtDpc(a1);
  }
  else
  {
    v14 = MiLockWorkingSetShared(a1);
  }
  MiWalkPageTables(v13);
  LOBYTE(v9) = v14;
  return MiUnlockWorkingSetShared(a1, v9);
}
