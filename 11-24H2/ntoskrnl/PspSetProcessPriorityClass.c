/*
 * XREFs of PspSetProcessPriorityClass @ 0x1408EB3D4
 * Callers:
 *     PspApplyIFEOPerfOptions @ 0x140776AA8 (PspApplyIFEOPerfOptions.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x1408EB21C (SeCheckPrivilegedObject.c)
 */

__int64 __fastcall PspSetProcessPriorityClass(__int64 a1, unsigned __int8 a2, __int64 a3, char a4)
{
  unsigned __int8 v4; // bl
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  char v9; // al

  v4 = a2;
  if ( a2 > 6u )
    return 3221225485LL;
  if ( a2 == 4 && *(_BYTE *)(a1 + 839) != 4 )
  {
    v9 = a3
       ? SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, a3, 512, a4)
       : SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a4);
    if ( !v9 )
      return 3221225569LL;
  }
  v6 = *(_QWORD *)(a1 + 672);
  CurrentThread = KeGetCurrentThread();
  if ( v6 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 56), 1u);
    if ( (*(_DWORD *)(v6 + 1056) & 0x20) != 0 )
      v4 = *(_BYTE *)(v6 + 1100);
    ExReleaseResourceLite((PERESOURCE)(v6 + 56));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  *(_BYTE *)(a1 + 839) = v4;
  return 0LL;
}
