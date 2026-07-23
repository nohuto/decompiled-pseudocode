/*
 * XREFs of SepGetCachedHandlesEntry @ 0x140913D04
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140913AE0 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlInsertEntryHashTable @ 0x140421C30 (RtlInsertEntryHashTable.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x140914298 (SepFindMatchingCachedHandlesEntry.c)
 *     SepComputeCachedHandlesEntrySignature @ 0x14091435C (SepComputeCachedHandlesEntrySignature.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140914434 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepGetCachedHandlesEntry(__int64 a1, __int64 a2, _BYTE *a3, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a4)
{
  _RTL_DYNAMIC_HASH_TABLE *v4; // rbp
  unsigned int v5; // ebx
  __int64 v9; // rax
  ULONG_PTR v10; // r15
  __int64 result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v12; // rdi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_RTL_DYNAMIC_HASH_TABLE **)(a1 + 8);
  v5 = 0;
  Entry = 0LL;
  v9 = SepComputeCachedHandlesEntrySignature(a2);
  *a3 = 0;
  v10 = v9;
  SepFindMatchingCachedHandlesEntry(v4);
  result = SepAllocateAndInitializeCachedHandleEntry(a2, &Entry);
  if ( (int)result >= 0 )
  {
    v12 = Entry;
    if ( RtlInsertEntryHashTable(v4, Entry, v10, 0LL) )
    {
      *a4 = v12;
    }
    else
    {
      ExFreePoolWithTag(v12, 0);
      return (unsigned int)-1073741670;
    }
    return v5;
  }
  return result;
}
