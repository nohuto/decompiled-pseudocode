/*
 * XREFs of sub_18001C480 @ 0x18001C480
 * Callers:
 *     sub_18001C674 @ 0x18001C674 (sub_18001C674.c)
 * Callees:
 *     atexit @ 0x18000B75C (atexit.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 */

void *sub_18001C480()
{
  if ( dword_1801C3EA8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C8D0(&dword_1801C3EA8);
    if ( dword_1801C3EA8 == -1 )
    {
      sub_18001C148((struct _Mtx_internal_imp_t *)&unk_1801C3EB0);
      atexit(sub_1800E2C00);
      Init_thread_footer(&dword_1801C3EA8);
    }
  }
  return &unk_1801C3EB0;
}
