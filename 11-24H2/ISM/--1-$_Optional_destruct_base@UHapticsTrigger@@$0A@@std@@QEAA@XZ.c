/*
 * XREFs of ??1?$_Optional_destruct_base@UHapticsTrigger@@$0A@@std@@QEAA@XZ @ 0x180184954
 * Callers:
 *     ??1HapticsSupport@@QEAA@XZ @ 0x180184A8C (--1HapticsSupport@@QEAA@XZ.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@GU_HIDP_VALUE_CAPS@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180184974 (--1-$_Tree@V-$_Tmap_traits@GU_HIDP_VALUE_CAPS@@U-$less@G@std@@V-$allocator@U-$pair@$$CBGU_HIDP_V.c)
 */

__int64 __fastcall std::_Optional_destruct_base<HapticsTrigger,0>::~_Optional_destruct_base<HapticsTrigger,0>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 88) )
    return std::_Tree<std::_Tmap_traits<unsigned short,_HIDP_VALUE_CAPS,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,_HIDP_VALUE_CAPS>>,0>>::~_Tree<std::_Tmap_traits<unsigned short,_HIDP_VALUE_CAPS,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,_HIDP_VALUE_CAPS>>,0>>(a1 + 72);
  return result;
}
