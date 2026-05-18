/*
 * XREFs of sub_18000C980 @ 0x18000C980
 * Callers:
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 * Callees:
 *     <none>
 */

void sub_18000C980()
{
  if ( qword_1801C32B8 )
  {
    qword_1801C32B8(&unk_1801C3280, &CriticalSection, 0xFFFFFFFFLL);
  }
  else
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, 0x64u, 0);
    EnterCriticalSection(&CriticalSection);
  }
}
