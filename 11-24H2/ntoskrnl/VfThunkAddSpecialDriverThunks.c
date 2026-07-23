/*
 * XREFs of VfThunkAddSpecialDriverThunks @ 0x140B98ED4
 * Callers:
 *     ViAddVerifierSpecialThunks @ 0x14060E8EC (ViAddVerifierSpecialThunks.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     VfDriverLock @ 0x140B8C4B4 (VfDriverLock.c)
 *     ViThunkCreateThunkTable @ 0x140B994EC (ViThunkCreateThunkTable.c)
 *     ViThunkFindNextSpecialTable @ 0x140B997A4 (ViThunkFindNextSpecialTable.c)
 *     ViThunkRecoverPristines @ 0x140B99A00 (ViThunkRecoverPristines.c)
 */

__int64 __fastcall VfThunkAddSpecialDriverThunks(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  _QWORD *ThunkTable; // rbx
  _QWORD *NextSpecialTable; // rcx
  __int64 Pool2; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1;
  ThunkTable = (_QWORD *)ViThunkCreateThunkTable(a2);
  if ( !ThunkTable )
    return 3221225626LL;
  VfDriverLock();
  if ( (*(_DWORD *)(a4 + 104) & 0x2000000) != 0 )
    ViThunkRecoverPristines(ThunkTable);
  NextSpecialTable = (_QWORD *)ViThunkFindNextSpecialTable(&v15, 1LL);
  if ( !NextSpecialTable )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x74566D4DuLL);
    NextSpecialTable = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      ViDriversLoadLockOwner = 0LL;
      KeReleaseMutex(&ViDriversLoadLock, 0);
      return 3221225626LL;
    }
    *(_QWORD *)(Pool2 + 16) = a1;
    v10 = (_QWORD *)(Pool2 + 24);
    v10[1] = v10;
    *v10 = v10;
    v11 = ViVerifierDriverAddedSpecialThunkListHead;
    if ( *((PVOID **)ViVerifierDriverAddedSpecialThunkListHead + 1) != &ViVerifierDriverAddedSpecialThunkListHead )
LABEL_11:
      __fastfail(3u);
    ++ViVerifierSpecialThunkTables;
    *NextSpecialTable = ViVerifierDriverAddedSpecialThunkListHead;
    NextSpecialTable[1] = &ViVerifierDriverAddedSpecialThunkListHead;
    v11[1] = NextSpecialTable;
    ViVerifierDriverAddedSpecialThunkListHead = NextSpecialTable;
  }
  VfThunksExtended = 1;
  _InterlockedOr(v14, 0);
  v12 = (_QWORD *)NextSpecialTable[4];
  v13 = NextSpecialTable + 3;
  ++ViActiveVerifierThunks;
  if ( (_QWORD *)*v12 != v13 )
    goto LABEL_11;
  *ThunkTable = v13;
  ThunkTable[1] = v12;
  *v12 = ThunkTable;
  v13[1] = ThunkTable;
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return 0LL;
}
