/*
 * XREFs of sub_18009BFA4 @ 0x18009BFA4
 * Callers:
 *     sub_18009C628 @ 0x18009C628 (sub_18009C628.c)
 * Callees:
 *     atexit @ 0x18000BB2C (atexit.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *sub_18009BFA4()
{
  if ( dword_1801C9CB8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801C9CB8);
    if ( dword_1801C9CB8 == -1 )
    {
      std::string::string(qword_1801C9CC0, "ColorGrading");
      std::string::string(qword_1801C9CE0, "ContrastCurve");
      std::string::string(qword_1801C9D00, "Diagnostics");
      std::string::string(qword_1801C9D20, "GammaEncoding");
      std::string::string(qword_1801C9D40, "ToneMapping");
      std::string::string(qword_1801C9D60, "Vignette");
      atexit(sub_1800E9D70);
      Init_thread_footer(&dword_1801C9CB8);
    }
  }
  return qword_1801C9CC0;
}
