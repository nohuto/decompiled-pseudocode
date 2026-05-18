/*
 * XREFs of sub_1800A5ED4 @ 0x1800A5ED4
 * Callers:
 *     sub_1800A5FF8 @ 0x1800A5FF8 (sub_1800A5FF8.c)
 * Callees:
 *     atexit @ 0x18000BB2C (atexit.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *sub_1800A5ED4()
{
  if ( dword_1801CA100 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801CA100);
    if ( dword_1801CA100 == -1 )
    {
      std::string::string(qword_1801CA110, "DepthOnly");
      std::string::string(qword_1801CA130, "Diagnostics");
      std::string::string(qword_1801CA150, "Background");
      std::string::string(qword_1801CA170, "AlphaMask");
      std::string::string(qword_1801CA190, "AlphaBlend");
      std::string::string(qword_1801CA1B0, "Skinning");
      std::string::string(qword_1801CA1D0, "DepthToColor");
      std::string::string(qword_1801CA1F0, "StochasticTransparency");
      std::string::string(qword_1801CA210, "GLTFMaterial");
      atexit(sub_1800E9E30);
      Init_thread_footer(&dword_1801CA100);
    }
  }
  return qword_1801CA110;
}
