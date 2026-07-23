/*
 * XREFs of VfPendingMoreProcessingRequired @ 0x140BA9000
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140BA8B70 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140613C88 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140613CD0 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140B851B8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     ViPendingDelayCompletion @ 0x140B93E88 (ViPendingDelayCompletion.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA5FE4 (VfIrpDatabaseEntryReleaseLock.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140BA9084 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfPendingMoreProcessingRequired(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int v12; // eax
  KIRQL v13; // al
  bool v14; // zf
  unsigned __int64 v15; // rbx
  KIRQL v16[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  v9 = VfIrpDatabaseEntryFindAndLock(a2);
  v10 = (_QWORD *)v9;
  if ( v9 )
  {
    if ( a3 == *(_QWORD *)(v9 + 216) )
    {
      v12 = *(_DWORD *)(v9 + 56);
      if ( v12 >= 0 )
      {
        v8 = 1;
        *((_DWORD *)v10 + 14) = v12 | 0x80000000;
      }
    }
    VfIrpDatabaseEntryReleaseLock(v10);
    if ( v8 )
    {
      v8 = ViPendingDelayCompletion(a1, (__int64)v10, a3, a4, a5);
      if ( !v8 )
      {
        v13 = KeAcquireSpinLockRaiseToDpc(v10 + 1);
        v14 = (*((_DWORD *)v10 + 6))-- == 1;
        *((_BYTE *)v10 + 16) = v13;
        v16[0] = 0;
        if ( v14 )
        {
          ViIrpDatabaseAcquireLockExclusive(v16);
          v15 = *v10;
          guard_dispatch_icall_no_overrides(v10, *v10);
          *v10 = 0LL;
          VfUtilAddressRangeRemoveCheckEmpty(
            (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v15 >> 12))),
            v15);
          ViIrpDatabaseReleaseLockExclusive(v16[0]);
        }
        _InterlockedDecrement((volatile signed __int32 *)v10 + 5);
        VfIrpDatabaseEntryReleaseLock(v10);
      }
    }
  }
  return v8;
}
