/*
 * XREFs of VmpFreeMemoryRanges @ 0x140A5D7A4
 * Callers:
 *     VmpSplitMemoryRange @ 0x1403AB5D4 (VmpSplitMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x14047ED34 (VmpRemoveMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1404D06B0 (VmpMergeMemoryRanges.c)
 *     VmpInsertMemoryRange @ 0x14064A9E0 (VmpInsertMemoryRange.c)
 *     VmCreateMemoryRange @ 0x14079EA00 (VmCreateMemoryRange.c)
 *     VmFreePreallocationForRangeCreate @ 0x14079EBF0 (VmFreePreallocationForRangeCreate.c)
 *     VmpAllocateMemoryRanges @ 0x140A5D6C0 (VmpAllocateMemoryRanges.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall VmpFreeMemoryRanges(struct _PRIVILEGE_SET **P)
{
  struct _PRIVILEGE_SET **v2; // rbx
  struct _PRIVILEGE_SET *v3; // rcx
  __int64 v4; // rax

  v2 = P + 5;
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (struct _PRIVILEGE_SET *)v2 )
      break;
    if ( (struct _PRIVILEGE_SET **)v3->Privilege[0].Luid != v2
      || (v4 = *(_QWORD *)&v3->PrivilegeCount, *(struct _PRIVILEGE_SET **)(*(_QWORD *)&v3->PrivilegeCount + 8LL) != v3) )
    {
      __fastfail(3u);
    }
    *v2 = (struct _PRIVILEGE_SET *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    CmSiFreeMemory(v3);
  }
  ExFreePoolWithTag(P, 0);
}
