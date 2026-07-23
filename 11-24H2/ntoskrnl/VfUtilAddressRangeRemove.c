/*
 * XREFs of VfUtilAddressRangeRemove @ 0x140B8518C
 * Callers:
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140B851B8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     ViDeadlockRemoveResource @ 0x140B9BDFC (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140B9BF9C (ViDeadlockRemoveThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfUtilAddressRangeRemove(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( a2 == *a1 )
    *a1 += a3;
  v3 = a1[1];
  result = a2 + a3;
  if ( a2 + a3 == v3 )
    a1[1] = v3 - a3;
  return result;
}
