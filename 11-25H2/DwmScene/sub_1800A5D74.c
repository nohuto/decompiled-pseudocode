/*
 * XREFs of sub_1800A5D74 @ 0x1800A5D74
 * Callers:
 *     sub_1800A5E98 @ 0x1800A5E98 (sub_1800A5E98.c)
 * Callees:
 *     atexit @ 0x18000B75C (atexit.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *sub_1800A5D74()
{
  if ( dword_1801C90F0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C8D0(&dword_1801C90F0);
    if ( dword_1801C90F0 == -1 )
    {
      std::string::string(qword_1801C9100, "DepthOnly");
      std::string::string(qword_1801C9120, "Diagnostics");
      std::string::string(qword_1801C9140, "Background");
      std::string::string(qword_1801C9160, "AlphaMask");
      std::string::string(qword_1801C9180, "AlphaBlend");
      std::string::string(qword_1801C91A0, "Skinning");
      std::string::string(qword_1801C91C0, "DepthToColor");
      std::string::string(qword_1801C91E0, "StochasticTransparency");
      std::string::string(qword_1801C9200, "GLTFMaterial");
      atexit(sub_1800E9CD0);
      Init_thread_footer(&dword_1801C90F0);
    }
  }
  return qword_1801C9100;
}
