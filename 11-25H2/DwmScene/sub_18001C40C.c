/*
 * XREFs of sub_18001C40C @ 0x18001C40C
 * Callers:
 *     sub_18001C674 @ 0x18001C674 (sub_18001C674.c)
 * Callees:
 *     atexit @ 0x18000B75C (atexit.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     sub_18001BFD0 @ 0x18001BFD0 (sub_18001BFD0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18001C40C()
{
  if ( dword_1801C3ED0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C8D0(&dword_1801C3ED0);
    if ( dword_1801C3ED0 == -1 )
    {
      sub_18001BFD0(qword_1801C3ED8);
      atexit(sub_1800E2BC0);
      Init_thread_footer(&dword_1801C3ED0);
    }
  }
  return qword_1801C3ED8;
}
