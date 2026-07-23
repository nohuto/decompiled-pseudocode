/*
 * XREFs of IovpCompleteRequest3 @ 0x140BA8E9C
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140BA8B70 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA5FE4 (VfIrpDatabaseEntryReleaseLock.c)
 */

void __fastcall IovpCompleteRequest3(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // di
  __int64 v7; // rbp
  _BYTE *v8; // rax

  v3 = 0;
  if ( *(_QWORD *)a3 )
  {
    v7 = *(_QWORD *)(a3 + 8);
    *(_BYTE *)(v7 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 8));
    if ( *(_BYTE *)(a1 + 67) <= *(_BYTE *)(a1 + 66) )
    {
      v8 = *(_BYTE **)(a1 + 184);
      if ( *v8 == 27 )
        v3 = v8[1] == 2;
    }
    *(_BYTE *)(a3 + 16) = v3;
    *(_QWORD *)(a3 + 24) = a2;
    VfIrpDatabaseEntryReleaseLock((_QWORD *)v7);
  }
}
