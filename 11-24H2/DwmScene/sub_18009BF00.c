/*
 * XREFs of sub_18009BF00 @ 0x18009BF00
 * Callers:
 *     sub_18009C108 @ 0x18009C108 (sub_18009C108.c)
 * Callees:
 *     atexit @ 0x18000BB2C (atexit.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *sub_18009BF00()
{
  if ( dword_1801C9C00 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801C9C00);
    if ( dword_1801C9C00 == -1 )
    {
      std::string::string(qword_1801C9C10, "Blur8");
      std::string::string(qword_1801C9C30, "Blur16");
      std::string::string(qword_1801C9C50, "Blur32");
      atexit(sub_1800E9D40);
      Init_thread_footer(&dword_1801C9C00);
    }
  }
  return qword_1801C9C10;
}
