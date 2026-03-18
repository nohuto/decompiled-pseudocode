/*
 * XREFs of ExpOwnerEntryToThread @ 0x1402CDEF0
 * Callers:
 *     ExDeleteResourceLite @ 0x1402CD920 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1402CDC90 (ExReinitializeResourceLite.c)
 *     ExQuerySystemLockInformation @ 0x140B6A1BC (ExQuerySystemLockInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExpOwnerEntryToThread(_DWORD *a1)
{
  unsigned __int64 result; // rax

  if ( (a1[2] & 2) != 0 )
    return *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  result = 0LL;
  if ( (*(_QWORD *)a1 & 3) == 0 )
    return *(_QWORD *)a1;
  return result;
}
