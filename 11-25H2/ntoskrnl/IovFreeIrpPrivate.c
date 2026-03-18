/*
 * XREFs of IovFreeIrpPrivate @ 0x140B96F50
 * Callers:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x140250FE0 (IopFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     ViErrorReport1 @ 0x1406065B4 (ViErrorReport1.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140609708 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140609750 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140B731D8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140B94004 (VfIrpDatabaseEntryReleaseLock.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140B970A4 (VfIrpDatabaseEntryFindAndLock.c)
 */

void __fastcall IovFreeIrpPrivate(_BYTE *BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // ecx
  int v7; // eax
  bool v8; // zf
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  const void *retaddr; // [rsp+58h] [rbp+0h]
  KIRQL v12; // [rsp+60h] [rbp+8h] BYREF
  KIRQL v13; // [rsp+68h] [rbp+10h] BYREF

  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( *(_WORD *)BugCheckParameter2 != 6 )
      CarReportRuleViolationFromNt(201, 1LL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 4u, 0LL);
    if ( *((_BYTE **)BugCheckParameter2 + 4) != BugCheckParameter2 + 32 )
      CarReportRuleViolationFromNt(201, 2LL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 4u, 0LL);
  }
  if ( (BugCheckParameter2[71] & 0x21) == 0x21 )
    goto LABEL_4;
  v4 = VfIrpDatabaseEntryFindAndLock(BugCheckParameter2);
  v5 = v4;
  if ( !v4 )
    goto LABEL_4;
  if ( *((_BYTE **)BugCheckParameter2 + 4) != BugCheckParameter2 + 32 )
  {
    v6 = 524;
    goto LABEL_12;
  }
  v7 = *(_DWORD *)(v4 + 56);
  if ( *(_QWORD *)(v5 + 240) )
  {
    if ( (v7 & 0x400000) != 0 )
      goto LABEL_13;
    v6 = 523;
LABEL_12:
    ViErrorReport1(v6, retaddr, BugCheckParameter2);
LABEL_13:
    VfIrpDatabaseEntryReleaseLock(v5);
    return;
  }
  if ( (v7 & 0x200000) == 0 )
  {
LABEL_22:
    VfIrpDatabaseEntryReleaseLock(v5);
LABEL_4:
    IopFreeIrp((ULONG_PTR)BugCheckParameter2, a2, a3);
    return;
  }
  if ( (v7 & 8) == 0 )
  {
    v8 = (*(_DWORD *)(v5 + 24))-- == 1;
    v12 = 0;
    if ( v8 )
    {
      ViIrpDatabaseAcquireLockExclusive(&v12);
      v9 = *(_QWORD *)v5;
      guard_dispatch_icall_no_overrides(v5);
      *(_QWORD *)v5 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v9 >> 12))),
        v9);
      ViIrpDatabaseReleaseLockExclusive(v12);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 20));
    goto LABEL_22;
  }
  v8 = (BugCheckParameter2[71] & 1) == 0;
  *(_WORD *)BugCheckParameter2 = 0;
  if ( !v8 )
  {
    PsReturnProcessNonPagedPoolQuota(*(_QWORD *)(v5 + 88), *(unsigned int *)(v5 + 84));
    ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 88), 0x49667256u);
  }
  v8 = (*(_DWORD *)(v5 + 24))-- == 1;
  v13 = 0;
  if ( v8 )
  {
    ViIrpDatabaseAcquireLockExclusive(&v13);
    v10 = *(_QWORD *)v5;
    guard_dispatch_icall_no_overrides(v5);
    *(_QWORD *)v5 = 0LL;
    VfUtilAddressRangeRemoveCheckEmpty(
      (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v10 >> 12))),
      v10);
    ViIrpDatabaseReleaseLockExclusive(v13);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 20));
  VfIrpDatabaseEntryReleaseLock(v5);
  ExFreePoolWithTag(BugCheckParameter2, 0);
}
