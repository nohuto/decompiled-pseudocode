/*
 * XREFs of sub_18000CAF0 @ 0x18000CAF0
 * Callers:
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 * Callees:
 *     <none>
 */

void sub_18000CAF0()
{
  if ( qword_1801C42D0 )
  {
    qword_1801C42D0(&unk_1801C4298, &CriticalSection, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
