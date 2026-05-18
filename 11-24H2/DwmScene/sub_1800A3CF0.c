/*
 * XREFs of sub_1800A3CF0 @ 0x1800A3CF0
 * Callers:
 *     sub_1800A3D6C @ 0x1800A3D6C (sub_1800A3D6C.c)
 * Callees:
 *     atexit @ 0x18000BB2C (atexit.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

_QWORD *sub_1800A3CF0()
{
  if ( dword_1801C9F80 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801C9F80);
    if ( dword_1801C9F80 == -1 )
    {
      std::string::string(qword_1801C9F88, "<dummy>");
      atexit(sub_1800E9DD0);
      Init_thread_footer(&dword_1801C9F80);
    }
  }
  return qword_1801C9F88;
}
