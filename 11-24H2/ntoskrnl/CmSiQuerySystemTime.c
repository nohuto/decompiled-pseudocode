/*
 * XREFs of CmSiQuerySystemTime @ 0x1404B338C
 * Callers:
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x1407673B8 (SshpSessionManagerInterruptTimeToSystemTime.c)
 *     CmpReorganizeHive @ 0x1409310B0 (CmpReorganizeHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmSiQuerySystemTime(_QWORD *a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000014];
  *a1 = MEMORY[0xFFFFF78000000014];
  return result;
}
