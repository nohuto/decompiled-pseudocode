/*
 * XREFs of sub_1800A3E0C @ 0x1800A3E0C
 * Callers:
 *     sub_1800A3EDC @ 0x1800A3EDC (sub_1800A3EDC.c)
 * Callees:
 *     atexit @ 0x18000B75C (atexit.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *sub_1800A3E0C()
{
  if ( dword_1801C8FA0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8FA0);
    if ( dword_1801C8FA0 == -1 )
    {
      std::string::string(qword_1801C8FB0, "DepthOnly");
      std::string::string(qword_1801C8FD0, "Diagnostics");
      std::string::string(qword_1801C8FF0, "AlphaMask");
      std::string::string(qword_1801C9010, "AlphaBlend");
      std::string::string(qword_1801C9030, "Skinning");
      atexit(sub_1800E9CA0);
      Init_thread_footer(&dword_1801C8FA0);
    }
  }
  return qword_1801C8FB0;
}
