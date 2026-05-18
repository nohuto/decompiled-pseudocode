/*
 * XREFs of sub_18009A0E8 @ 0x18009A0E8
 * Callers:
 *     sub_18009A1D0 @ 0x18009A1D0 (sub_18009A1D0.c)
 * Callees:
 *     atexit @ 0x18000B75C (atexit.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *sub_18009A0E8()
{
  if ( dword_1801C8A90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8A90);
    if ( dword_1801C8A90 == -1 )
    {
      std::string::string(qword_1801C8AA0, "ColorGrading");
      std::string::string(qword_1801C8AC0, "ContrastCurve");
      std::string::string(qword_1801C8AE0, "ToneMapping");
      std::string::string(qword_1801C8B00, "Vignette");
      std::string::string(qword_1801C8B20, "DepthOnly");
      std::string::string(qword_1801C8B40, "GroundPlane");
      atexit(sub_1800E9BB0);
      Init_thread_footer(&dword_1801C8A90);
    }
  }
  return qword_1801C8AA0;
}
