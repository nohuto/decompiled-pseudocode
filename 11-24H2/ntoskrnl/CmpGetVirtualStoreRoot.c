/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x1407DBA94
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1407DBC0C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x1407DAEB4 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpReferenceKeyControlBlock @ 0x140845AD0 (CmpReferenceKeyControlBlock.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     CmpGetVirtualizationID @ 0x140909F58 (CmpGetVirtualizationID.c)
 *     CmpGetMappingHiveForString @ 0x14090AC0C (CmpGetMappingHiveForString.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(__int64 a1, __int64 *a2, int *a3, ULONG_PTR *a4)
{
  int VirtualizationID; // esi
  __int64 v8; // rcx
  int v9; // edi
  ULONG_PTR KcbInHashEntryByCellIndex; // rbx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  VirtualizationID = CmpGetVirtualizationID(&UnicodeString);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString(&UnicodeString, a2);
    if ( VirtualizationID >= 0 )
    {
      v8 = *a2;
      v9 = *(_DWORD *)(*(_QWORD *)(*a2 + 64) + 36LL);
      KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v8, 0, v9);
      CmpReferenceKeyControlBlock(KcbInHashEntryByCellIndex);
      *a3 = v9;
      *a4 = KcbInHashEntryByCellIndex;
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)VirtualizationID;
}
