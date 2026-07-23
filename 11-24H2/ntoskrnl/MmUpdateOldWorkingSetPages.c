/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x140491190
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x1408F5AF4 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r14d
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  _OWORD v18[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+40h] [rbp-C0h]
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-ACh]
  unsigned __int8 v22; // [rsp+59h] [rbp-A7h]
  ULONG_PTR v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v25)(__int64, unsigned __int64, int); // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v26)(__int64); // [rsp+100h] [rbp+0h]
  _OWORD *v27; // [rsp+108h] [rbp+8h]
  _OWORD v28[3]; // [rsp+110h] [rbp+10h] BYREF

  memset(v28, 0, sizeof(v28));
  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  memset_0(&v20, 0, 0xC0uLL);
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v28);
  }
  v10 = v18[0];
  v11 = 0;
  if ( (a3 & 2) != 0 )
  {
    v10 = LODWORD(v18[0]) | 1;
    LODWORD(v18[0]) |= 1u;
  }
  if ( (a3 & 1) != 0 )
    LODWORD(v18[0]) = v10 | 2;
  v12 = *(_DWORD *)(BugCheckParameter1 + 1208);
  DWORD1(v18[0]) = a2;
  if ( (v12 & 0xF) != 0 )
  {
    if ( !_bittest64(&MiFlags, 0x24u) )
      goto LABEL_12;
    v13 = (*(_DWORD *)(BugCheckParameter1 + 1208) >> 11) & 1;
  }
  else
  {
    v13 = *(_QWORD *)(BugCheckParameter1 + 1648) != 0LL;
  }
  v14 = *((_QWORD *)&v19 + 1);
  if ( v13 )
    v14 = 1LL;
  *((_QWORD *)&v19 + 1) = v14;
LABEL_12:
  v24 = -1LL;
  v27 = v18;
  v20 = 6;
  v25 = MiUpdateOldPte;
  v26 = MiUpdateOldWorkingSetPagesTail;
  v23 = BugCheckParameter1 + 1024;
  v21 = v21 & 0xFFFF0FFF | 0x6000;
  v22 = MiLockWorkingSetShared(BugCheckParameter1 + 1024, v6, v7, v8);
  if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x20) != 0 )
  {
    v11 = -1073741558;
  }
  else
  {
    *((_QWORD *)&v18[0] + 1) = *(_QWORD *)(BugCheckParameter1 + 1112);
    if ( *((_QWORD *)&v18[0] + 1) )
      MiWalkPageTables(&v20);
  }
  MiUnlockWorkingSetShared(BugCheckParameter1 + 1024, v22);
  if ( v9 )
    KiUnstackDetachProcess((__int64)v28, 0, v15, v16);
  return v11;
}
