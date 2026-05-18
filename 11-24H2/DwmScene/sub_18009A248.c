/*
 * XREFs of sub_18009A248 @ 0x18009A248
 * Callers:
 *     sub_18009A330 @ 0x18009A330 (sub_18009A330.c)
 * Callees:
 *     atexit @ 0x18000BB2C (atexit.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *sub_18009A248()
{
  if ( dword_1801C9AA0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801C9AA0);
    if ( dword_1801C9AA0 == -1 )
    {
      std::string::string(qword_1801C9AB0, "ColorGrading");
      std::string::string(qword_1801C9AD0, "ContrastCurve");
      std::string::string(qword_1801C9AF0, "ToneMapping");
      std::string::string(qword_1801C9B10, "Vignette");
      std::string::string(qword_1801C9B30, "DepthOnly");
      std::string::string(qword_1801C9B50, "GroundPlane");
      atexit(sub_1800E9D10);
      Init_thread_footer(&dword_1801C9AA0);
    }
  }
  return qword_1801C9AB0;
}
