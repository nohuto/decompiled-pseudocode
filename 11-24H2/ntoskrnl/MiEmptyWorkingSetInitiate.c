/*
 * XREFs of MiEmptyWorkingSetInitiate @ 0x1403C9030
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C752C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiEmptyWorkingSet @ 0x1403C9014 (MiEmptyWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x140679A10 (MiEmptyTargetedWorkingSet.c)
 *     MiProcessRemoveFromWorkingSet @ 0x1407EDF64 (MiProcessRemoveFromWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiTrimWorkingSet @ 0x140390208 (MiTrimWorkingSet.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiEmptyWorkingSetInitiate(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // eax
  _QWORD v14[3]; // [rsp+30h] [rbp-91h] BYREF
  int v15[2]; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int8 v16; // [rsp+51h] [rbp-70h]
  __int64 v17; // [rsp+68h] [rbp-59h]
  __int64 v18; // [rsp+70h] [rbp-51h]
  __int64 v19; // [rsp+78h] [rbp-49h]
  __int64 (__fastcall *v20)(__int64, ULONG_PTR, __int64); // [rsp+F0h] [rbp+2Fh]
  __int64 (__fastcall *v21)(__int64); // [rsp+F8h] [rbp+37h]
  _QWORD *v22; // [rsp+100h] [rbp+3Fh]

  *(_OWORD *)&v14[1] = 0LL;
  memset_0(v15, 0, 0xC0uLL);
  v15[0] = 6;
  v22 = &v14[1];
  v11 = 0;
  v17 = a1;
  v20 = MiEmptyPte;
  v21 = MiEmptyWorkingSetTail;
  v12 = 1;
  if ( (a2 & 1) != 0 )
  {
    LODWORD(v14[1]) = 1;
  }
  else
  {
    v12 = 0;
    if ( (a2 & 2) != 0 )
    {
      LODWORD(v14[1]) = 2;
      v12 = 2;
    }
  }
  if ( (a2 & 4) != 0 )
    LODWORD(v14[1]) = v12 | 4;
  v18 = a3;
  v19 = a4;
  v16 = MiLockWorkingSetShared(a1, v8, v9, v10);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
    && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v11 = -1073741558;
  }
  else if ( a2 || a3 || a4 != -1 )
  {
    if ( (unsigned int)MiWalkPageTables(v15) == 5 )
      v11 = -1073741558;
  }
  else
  {
    MiTrimWorkingSet(a1, 0xFFFFFFFFFFFFFFFFuLL, v16, 0, 64);
  }
  MiUnlockWorkingSetShared(a1, v16);
  return v11;
}
