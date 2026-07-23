/*
 * XREFs of VmpFreeMemoryRanges @ 0x140A55BC4
 * Callers:
 *     VmpSplitMemoryRange @ 0x140399CE8 (VmpSplitMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x140479B50 (VmpRemoveMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1404C98A4 (VmpMergeMemoryRanges.c)
 *     VmpInsertMemoryRange @ 0x140648FA0 (VmpInsertMemoryRange.c)
 *     VmCreateMemoryRange @ 0x14079EB10 (VmCreateMemoryRange.c)
 *     VmFreePreallocationForRangeCreate @ 0x14079ED00 (VmFreePreallocationForRangeCreate.c)
 *     VmpAllocateMemoryRanges @ 0x140A55AE0 (VmpAllocateMemoryRanges.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
