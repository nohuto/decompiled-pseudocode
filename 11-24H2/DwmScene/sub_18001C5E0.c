/*
 * XREFs of sub_18001C5E0 @ 0x18001C5E0
 * Callers:
 *     sub_18001C7D4 @ 0x18001C7D4 (sub_18001C7D4.c)
 * Callees:
 *     atexit @ 0x18000BB2C (atexit.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 */

void *sub_18001C5E0()
{
  if ( dword_1801C4EB8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801C4EB8);
    if ( dword_1801C4EB8 == -1 )
    {
      sub_18001C2A8((struct _Mtx_internal_imp_t *)&unk_1801C4EC0);
      atexit(sub_1800E2D60);
      Init_thread_footer(&dword_1801C4EB8);
    }
  }
  return &unk_1801C4EC0;
}
