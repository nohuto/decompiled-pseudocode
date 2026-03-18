/*
 * XREFs of IovFreeIrpPrivate @ 0x140BA6F30
 * Callers:
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x14031AC50 (IopFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ViErrorReport1 @ 0x140612574 (ViErrorReport1.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1406156C8 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140615710 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140B831B8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA3FE4 (VfIrpDatabaseEntryReleaseLock.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140BA7084 (VfIrpDatabaseEntryFindAndLock.c)
 */

void __fastcall IovFreeIrpPrivate(_BYTE *BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  unsigned int v6; // ecx
  int v7; // eax
  bool v8; // zf
  unsigned __int64 v9; // rbx
  __int64 v10; // r9
  unsigned __int64 v11; // rbx
  __int64 v12; // r9
  const void *retaddr; // [rsp+58h] [rbp+0h]
  KIRQL v14; // [rsp+60h] [rbp+8h] BYREF
  KIRQL v15; // [rsp+68h] [rbp+10h] BYREF

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
  v5 = (_QWORD *)v4;
  if ( !v4 )
    goto LABEL_4;
  if ( *((_BYTE **)BugCheckParameter2 + 4) != BugCheckParameter2 + 32 )
  {
    v6 = 524;
    goto LABEL_12;
  }
  v7 = *(_DWORD *)(v4 + 56);
  if ( v5[30] )
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
    v8 = (*((_DWORD *)v5 + 6))-- == 1;
    v14 = 0;
    if ( v8 )
    {
      ViIrpDatabaseAcquireLockExclusive(&v14);
      v9 = *v5;
      guard_dispatch_icall_no_overrides(v5, *v5, 1LL, v10);
      *v5 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v9 >> 12))),
        v9);
      ViIrpDatabaseReleaseLockExclusive(v14);
    }
    _InterlockedDecrement((volatile signed __int32 *)v5 + 5);
    goto LABEL_22;
  }
  v8 = (BugCheckParameter2[71] & 1) == 0;
  *(_WORD *)BugCheckParameter2 = 0;
  if ( !v8 )
  {
    PsReturnProcessNonPagedPoolQuota(v5[11], *((unsigned int *)v5 + 21));
    ObfDereferenceObjectWithTag((PVOID)v5[11], 0x49667256u);
  }
  v8 = (*((_DWORD *)v5 + 6))-- == 1;
  v15 = 0;
  if ( v8 )
  {
    ViIrpDatabaseAcquireLockExclusive(&v15);
    v11 = *v5;
    guard_dispatch_icall_no_overrides(v5, *v5, 1LL, v12);
    *v5 = 0LL;
    VfUtilAddressRangeRemoveCheckEmpty(
      (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v11 >> 12))),
      v11);
    ViIrpDatabaseReleaseLockExclusive(v15);
  }
  _InterlockedDecrement((volatile signed __int32 *)v5 + 5);
  VfIrpDatabaseEntryReleaseLock(v5);
  ExFreePoolWithTag(BugCheckParameter2, 0);
}
