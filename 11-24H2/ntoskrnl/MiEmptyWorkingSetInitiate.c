/*
 * XREFs of MiEmptyWorkingSetInitiate @ 0x140404B98
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140378F30 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140404528 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiEmptyWorkingSet @ 0x140404B7C (MiEmptyWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x140678830 (MiEmptyTargetedWorkingSet.c)
 *     MiProcessRemoveFromWorkingSet @ 0x1407ED994 (MiProcessRemoveFromWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiTrimWorkingSet @ 0x1403CF15C (MiTrimWorkingSet.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiEmptyWorkingSetInitiate(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  _QWORD v11[3]; // [rsp+30h] [rbp-91h] BYREF
  _DWORD v12[2]; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int8 v13; // [rsp+51h] [rbp-70h]
  __int64 v14; // [rsp+68h] [rbp-59h]
  __int64 v15; // [rsp+70h] [rbp-51h]
  __int64 v16; // [rsp+78h] [rbp-49h]
  __int64 (__fastcall *v17)(__int64, unsigned __int64, int); // [rsp+F0h] [rbp+2Fh]
  __int64 (__fastcall *v18)(); // [rsp+F8h] [rbp+37h]
  _QWORD *v19; // [rsp+100h] [rbp+3Fh]

  *(_OWORD *)&v11[1] = 0LL;
  memset_0(v12, 0, 0xC0uLL);
  v12[0] = 6;
  v19 = &v11[1];
  v8 = 0;
  v14 = a1;
  v17 = MiEmptyPte;
  v18 = MiEmptyWorkingSetTail;
  v9 = 1;
  if ( (a2 & 1) != 0 )
  {
    LODWORD(v11[1]) = 1;
  }
  else
  {
    v9 = 0;
    if ( (a2 & 2) != 0 )
    {
      LODWORD(v11[1]) = 2;
      v9 = 2;
    }
  }
  if ( (a2 & 4) != 0 )
    LODWORD(v11[1]) = v9 | 4;
  v15 = a3;
  v16 = a4;
  v13 = MiLockWorkingSetShared(a1);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
    && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v8 = -1073741558;
  }
  else if ( a2 || a3 || a4 != -1 )
  {
    if ( (unsigned int)MiWalkPageTables((__int64)v12) == 5 )
      v8 = -1073741558;
  }
  else
  {
    MiTrimWorkingSet(a1, 0xFFFFFFFFFFFFFFFFuLL, v13, 0, 64);
  }
  MiUnlockWorkingSetShared(a1, v13);
  return v8;
}
