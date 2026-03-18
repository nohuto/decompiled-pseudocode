/*
 * XREFs of ExpOwnerEntryToThread @ 0x1403A48D0
 * Callers:
 *     ExDeleteResourceLite @ 0x1403A42F0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1403A4670 (ExReinitializeResourceLite.c)
 *     ExQuerySystemLockInformation @ 0x140B5A6C8 (ExQuerySystemLockInformation.c)
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
