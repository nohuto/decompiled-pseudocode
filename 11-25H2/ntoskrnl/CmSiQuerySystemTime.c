/*
 * XREFs of CmSiQuerySystemTime @ 0x1404B324C
 * Callers:
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x1407579F8 (SshpSessionManagerInterruptTimeToSystemTime.c)
 *     CmpReorganizeHive @ 0x140A4B428 (CmpReorganizeHive.c)
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
