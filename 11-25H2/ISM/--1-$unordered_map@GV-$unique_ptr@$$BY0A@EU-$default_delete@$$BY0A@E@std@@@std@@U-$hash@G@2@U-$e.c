/*
 * XREFs of ??1?$unordered_map@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@U?$hash@G@2@U?$equal_to@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18018A3CC
 * Callers:
 *     _PenHapticInterface::PenHapticInterface_::_1_::dtor$2 @ 0x1801D10B3 (_PenHapticInterface--PenHapticInterface_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<unsigned short,std::unique_ptr<unsigned char [0]>>::~unordered_map<unsigned short,std::unique_ptr<unsigned char [0]>>(
        __int64 *a1)
{
  std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::~_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>(a1);
}
