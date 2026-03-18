/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x140496800
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x140932FDC (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  int v6; // r14d
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  _OWORD v13[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+40h] [rbp-C0h]
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-ACh]
  unsigned __int8 v17; // [rsp+59h] [rbp-A7h]
  ULONG_PTR v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v20)(__int64, unsigned __int64, int); // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v21)(__int64); // [rsp+100h] [rbp+0h]
  _OWORD *v22; // [rsp+108h] [rbp+8h]
  _OWORD v23[3]; // [rsp+110h] [rbp+10h] BYREF

  memset(v23, 0, sizeof(v23));
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  memset_0(&v15, 0, 0xC0uLL);
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v23);
  }
  v7 = v13[0];
  v8 = 0;
  if ( (a3 & 2) != 0 )
  {
    v7 = LODWORD(v13[0]) | 1;
    LODWORD(v13[0]) |= 1u;
  }
  if ( (a3 & 1) != 0 )
    LODWORD(v13[0]) = v7 | 2;
  v9 = *(_DWORD *)(BugCheckParameter1 + 1208);
  DWORD1(v13[0]) = a2;
  if ( (v9 & 0xF) != 0 )
  {
    if ( !_bittest64(&MiFlags, 0x24u) )
      goto LABEL_12;
    v10 = (*(_DWORD *)(BugCheckParameter1 + 1208) >> 11) & 1;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter1 + 1648) != 0LL;
  }
  v11 = *((_QWORD *)&v14 + 1);
  if ( v10 )
    v11 = 1LL;
  *((_QWORD *)&v14 + 1) = v11;
LABEL_12:
  v19 = -1LL;
  v22 = v13;
  v15 = 6;
  v20 = MiUpdateOldPte;
  v21 = MiUpdateOldWorkingSetPagesTail;
  v18 = BugCheckParameter1 + 1024;
  v16 = v16 & 0xFFFF0FFF | 0x6000;
  v17 = MiLockWorkingSetShared(BugCheckParameter1 + 1024);
  if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x20) != 0 )
  {
    v8 = -1073741558;
  }
  else
  {
    *((_QWORD *)&v13[0] + 1) = *(_QWORD *)(BugCheckParameter1 + 1112);
    if ( *((_QWORD *)&v13[0] + 1) )
      MiWalkPageTables((__int64)&v15);
  }
  MiUnlockWorkingSetShared(BugCheckParameter1 + 1024, v17);
  if ( v6 )
    KiUnstackDetachProcess((__int64)v23, 0);
  return v8;
}
