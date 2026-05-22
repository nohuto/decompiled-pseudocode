/*
 * XREFs of ??0?$unordered_set@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@V?$allocator@PEAUIHeatSystemContextClient@@@3@@std@@QEAA@XZ @ 0x180183DE0
 * Callers:
 *     ??0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z @ 0x180183E64 (--0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x18009621C (--0-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$e.c)
 */

__int64 __fastcall std::unordered_set<IHeatSystemContextClient *>::unordered_set<IHeatSystemContextClient *>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>(
    a1,
    &v3);
  return a1;
}
