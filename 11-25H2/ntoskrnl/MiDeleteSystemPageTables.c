/*
 * XREFs of MiDeleteSystemPageTables @ 0x140465F44
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14038F57C (MiMakeZeroedPageTablesEx.c)
 *     MiDecommitSystemPageTables @ 0x140465E88 (MiDecommitSystemPageTables.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall MiDeleteSystemPageTables(__int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  _BYTE v10[40]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h]
  int v12[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v13; // [rsp+61h] [rbp-A7h]
  __int64 v14; // [rsp+78h] [rbp-90h]
  __int64 v15; // [rsp+80h] [rbp-88h]
  __int64 v16; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall *v17)(__int64, unsigned __int64, int); // [rsp+100h] [rbp-8h]
  __int64 (__fastcall *v18)(__int64); // [rsp+108h] [rbp+0h]
  _BYTE *v19; // [rsp+110h] [rbp+8h]

  v11 = 0LL;
  memset(&v10[8], 0, 32);
  memset_0(v12, 0, 0xC0uLL);
  *(_DWORD *)&v10[8] = a2;
  v12[1] = (a5 & 7) << 6;
  v17 = MiDeleteSystemPageTable;
  v18 = MiDeleteSystemPageTableTail;
  v19 = &v10[8];
  v12[0] = 8199;
  v15 = a3;
  v16 = a4;
  v14 = a1;
  if ( KeGetCurrentIrql() == 2 )
  {
    v13 = 17;
    MiLockWorkingSetSharedAtDpc(a1);
  }
  else
  {
    v13 = MiLockWorkingSetShared(a1);
  }
  MiWalkPageTables(v12);
  return MiUnlockWorkingSetShared(a1, v13);
}
