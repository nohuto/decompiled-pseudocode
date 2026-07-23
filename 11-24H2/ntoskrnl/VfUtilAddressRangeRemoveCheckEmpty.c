/*
 * XREFs of VfUtilAddressRangeRemoveCheckEmpty @ 0x140B851B8
 * Callers:
 *     ViPendingCompleteAfterWait @ 0x140B93D28 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA5FE4 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140BA8DE4 (IovpCompleteRequest2.c)
 *     IovFreeIrpPrivate @ 0x140BA8F30 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140BA9000 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     VfUtilAddressRangeRemove @ 0x140B8518C (VfUtilAddressRangeRemove.c)
 */

__int64 __fastcall VfUtilAddressRangeRemoveCheckEmpty(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 != *a1 )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  result = a2 + 208;
  if ( a2 + 208 != a1[1] )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
