/*
 * XREFs of MiDeleteSystemPageTables @ 0x14045B798
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14026D5D0 (MiMakeZeroedPageTablesEx.c)
 *     MiDecommitSystemPageTables @ 0x14045B6DC (MiDecommitSystemPageTables.c)
 * Callees:
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall MiDeleteSystemPageTables(__int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[40]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h]
  int v15[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v16; // [rsp+61h] [rbp-A7h]
  __int64 v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  __int64 v19; // [rsp+88h] [rbp-80h]
  void *v20; // [rsp+100h] [rbp-8h]
  __int64 (__fastcall *v21)(__int64); // [rsp+108h] [rbp+0h]
  _BYTE *v22; // [rsp+110h] [rbp+8h]

  v14 = 0LL;
  memset(&v13[8], 0, 32);
  memset_0(v15, 0, 0xC0uLL);
  *(_DWORD *)&v13[8] = a2;
  v15[1] = (a5 & 7) << 6;
  v20 = &MiDeleteSystemPageTable;
  v21 = MiDeleteSystemPageTableTail;
  v22 = &v13[8];
  v15[0] = 8199;
  v18 = a3;
  v19 = a4;
  v17 = a1;
  if ( KeGetCurrentIrql() == 2 )
  {
    v16 = 17;
    MiLockWorkingSetSharedAtDpc(a1);
  }
  else
  {
    v16 = MiLockWorkingSetShared(a1, v9, v10, v11);
  }
  MiWalkPageTables(v15);
  return MiUnlockWorkingSetShared(a1, v16);
}
