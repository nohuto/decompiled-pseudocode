/*
 * XREFs of IovpCompleteRequest1 @ 0x140BA89E8
 * Callers:
 *     IovCompleteRequest @ 0x140BA8768 (IovCompleteRequest.c)
 * Callees:
 *     ViErrorReport1 @ 0x140610B34 (ViErrorReport1.c)
 *     IovpAdvanceStackDownwards @ 0x140B8EB2C (IovpAdvanceStackDownwards.c)
 *     VfPendingFinishLogging @ 0x140B93A70 (VfPendingFinishLogging.c)
 *     VfPendingStartLogging @ 0x140B93CD4 (VfPendingStartLogging.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA5FE4 (VfIrpDatabaseEntryReleaseLock.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140BA9084 (VfIrpDatabaseEntryFindAndLock.c)
 */

void __fastcall IovpCompleteRequest1(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *started; // rbp
  __int64 v10; // r14
  __int64 v11; // r12
  int v12; // r10d
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  v7 = VfIrpDatabaseEntryFindAndLock(a1);
  v8 = v7;
  if ( v7 )
  {
    *(_BYTE *)(v7 + 61) = CurrentIrql;
    started = 0LL;
    *(_BYTE *)(v7 + 60) = CurrentIrql;
    v10 = *(_QWORD *)(v7 + 240);
    *(_QWORD *)a3 = v10;
    *(_QWORD *)(a3 + 8) = v7;
    v11 = *(_QWORD *)(a1 + 184);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v7 + 56) & 0x10) != 0 )
        ViErrorReport1(0x209u, *(const void **)(a3 + 32), (const void *)a1);
      *(_BYTE *)(v8 + 185) = a2;
      if ( *(_QWORD *)(v8 + 216) && *(int *)(v8 + 56) >= 0 )
      {
        started = VfPendingStartLogging(a1);
        *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
      }
      *(_QWORD *)(v10 + 48) = 0LL;
      v12 = *(unsigned __int8 *)(v8 + 186) - *(char *)(a1 + 67);
      *(_DWORD *)(a3 + 20) = v12;
      IovpAdvanceStackDownwards(v10 + 80, *(_BYTE *)(a1 + 67), v11, v11 + 72LL * v12, v12, 0, 0, &v13);
      VfIrpDatabaseEntryReleaseLock((_QWORD *)v8);
      if ( started )
        VfPendingFinishLogging((__int64)started);
    }
    else
    {
      VfIrpDatabaseEntryReleaseLock((_QWORD *)v7);
    }
  }
  else
  {
    *(_QWORD *)a3 = 0LL;
  }
}
