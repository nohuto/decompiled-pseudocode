/*
 * XREFs of sub_18009BE44 @ 0x18009BE44
 * Callers:
 *     sub_18009C4C8 @ 0x18009C4C8 (sub_18009C4C8.c)
 * Callees:
 *     atexit @ 0x18000B75C (atexit.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *sub_18009BE44()
{
  if ( dword_1801C8CA8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8CA8);
    if ( dword_1801C8CA8 == -1 )
    {
      std::string::string(qword_1801C8CB0, "ColorGrading");
      std::string::string(qword_1801C8CD0, "ContrastCurve");
      std::string::string(qword_1801C8CF0, "Diagnostics");
      std::string::string(qword_1801C8D10, "GammaEncoding");
      std::string::string(qword_1801C8D30, "ToneMapping");
      std::string::string(qword_1801C8D50, "Vignette");
      atexit(sub_1800E9C10);
      Init_thread_footer(&dword_1801C8CA8);
    }
  }
  return qword_1801C8CB0;
}
