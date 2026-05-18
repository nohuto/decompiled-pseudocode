/*
 * XREFs of sub_18009BDA0 @ 0x18009BDA0
 * Callers:
 *     sub_18009BFA8 @ 0x18009BFA8 (sub_18009BFA8.c)
 * Callees:
 *     atexit @ 0x18000B75C (atexit.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *sub_18009BDA0()
{
  if ( dword_1801C8BF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8BF0);
    if ( dword_1801C8BF0 == -1 )
    {
      std::string::string(qword_1801C8C00, "Blur8");
      std::string::string(qword_1801C8C20, "Blur16");
      std::string::string(qword_1801C8C40, "Blur32");
      atexit(sub_1800E9BE0);
      Init_thread_footer(&dword_1801C8BF0);
    }
  }
  return qword_1801C8C00;
}
