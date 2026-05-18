/*
 * XREFs of sub_18009BF2C @ 0x18009BF2C
 * Callers:
 *     sub_1800A3990 @ 0x1800A3990 (sub_1800A3990.c)
 * Callees:
 *     atexit @ 0x18000B75C (atexit.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

_QWORD *sub_18009BF2C()
{
  if ( dword_1801C8C78 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8C78);
    if ( dword_1801C8C78 == -1 )
    {
      std::string::string(qword_1801C8C80, "<dummy>");
      atexit(sub_1800E9C40);
      Init_thread_footer(&dword_1801C8C78);
    }
  }
  return qword_1801C8C80;
}
