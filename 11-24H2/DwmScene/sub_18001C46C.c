/*
 * XREFs of sub_18001C46C @ 0x18001C46C
 * Callers:
 *     sub_18001C188 @ 0x18001C188 (sub_18001C188.c)
 * Callees:
 *     atexit @ 0x18000BB2C (atexit.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18001C46C()
{
  __int64 v0; // rax

  if ( dword_1801C4EA0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801C4EA0);
    if ( dword_1801C4EA0 == -1 )
    {
      v0 = sub_18001B1F8(72LL);
      *(_QWORD *)v0 = v0;
      *(_QWORD *)(v0 + 8) = v0;
      *(_QWORD *)(v0 + 16) = v0;
      *(_WORD *)(v0 + 24) = 257;
      qword_1801C4EA8 = v0;
      atexit(sub_1800E2D00);
      Init_thread_footer(&dword_1801C4EA0);
    }
  }
  return &qword_1801C4EA8;
}
