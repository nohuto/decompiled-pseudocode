/*
 * XREFs of sub_18001C30C @ 0x18001C30C
 * Callers:
 *     sub_18001C028 @ 0x18001C028 (sub_18001C028.c)
 * Callees:
 *     atexit @ 0x18000B75C (atexit.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18001C30C()
{
  __int64 v0; // rax

  if ( dword_1801C3E90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C8D0(&dword_1801C3E90);
    if ( dword_1801C3E90 == -1 )
    {
      v0 = sub_18001B098(72LL);
      *(_QWORD *)v0 = v0;
      *(_QWORD *)(v0 + 8) = v0;
      *(_QWORD *)(v0 + 16) = v0;
      *(_WORD *)(v0 + 24) = 257;
      qword_1801C3E98 = v0;
      atexit(sub_1800E2BA0);
      Init_thread_footer(&dword_1801C3E90);
    }
  }
  return &qword_1801C3E98;
}
