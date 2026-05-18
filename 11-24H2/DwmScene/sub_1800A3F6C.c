/*
 * XREFs of sub_1800A3F6C @ 0x1800A3F6C
 * Callers:
 *     sub_1800A403C @ 0x1800A403C (sub_1800A403C.c)
 * Callees:
 *     atexit @ 0x18000BB2C (atexit.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *sub_1800A3F6C()
{
  if ( dword_1801C9FB0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801C9FB0);
    if ( dword_1801C9FB0 == -1 )
    {
      std::string::string(qword_1801C9FC0, "DepthOnly");
      std::string::string(qword_1801C9FE0, "Diagnostics");
      std::string::string(qword_1801CA000, "AlphaMask");
      std::string::string(qword_1801CA020, "AlphaBlend");
      std::string::string(qword_1801CA040, "Skinning");
      atexit(sub_1800E9E00);
      Init_thread_footer(&dword_1801C9FB0);
    }
  }
  return qword_1801C9FC0;
}
