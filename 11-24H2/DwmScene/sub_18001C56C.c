/*
 * XREFs of sub_18001C56C @ 0x18001C56C
 * Callers:
 *     sub_18001C7D4 @ 0x18001C7D4 (sub_18001C7D4.c)
 * Callees:
 *     atexit @ 0x18000BB2C (atexit.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     sub_18001C130 @ 0x18001C130 (sub_18001C130.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18001C56C()
{
  if ( dword_1801C4EE0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801C4EE0);
    if ( dword_1801C4EE0 == -1 )
    {
      sub_18001C130(qword_1801C4EE8);
      atexit(sub_1800E2D20);
      Init_thread_footer(&dword_1801C4EE0);
    }
  }
  return qword_1801C4EE8;
}
