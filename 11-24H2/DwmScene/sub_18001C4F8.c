/*
 * XREFs of sub_18001C4F8 @ 0x18001C4F8
 * Callers:
 *     sub_18001C188 @ 0x18001C188 (sub_18001C188.c)
 * Callees:
 *     atexit @ 0x18000BB2C (atexit.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 */

void *sub_18001C4F8()
{
  if ( dword_1801C4E78 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801C4E78);
    if ( dword_1801C4E78 == -1 )
    {
      sub_18001C2A8((struct _Mtx_internal_imp_t *)&unk_1801C4E80);
      atexit(sub_1800E2D40);
      Init_thread_footer(&dword_1801C4E78);
    }
  }
  return &unk_1801C4E80;
}
