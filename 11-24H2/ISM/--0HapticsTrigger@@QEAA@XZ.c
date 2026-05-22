/*
 * XREFs of ??0HapticsTrigger@@QEAA@XZ @ 0x180199B18
 * Callers:
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x180199EC8 (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$_Tree@V?$_Tmap_traits@GU_HIDP_VALUE_CAPS@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18019AEC8 (-_Alloc_sentinel_and_proxy@-$_Tree@V-$_Tmap_traits@GU_HIDP_VALUE_CAPS@@U-$less@G@std@@V-$allocat.c)
 */

HapticsTrigger *__fastcall HapticsTrigger::HapticsTrigger(HapticsTrigger *this)
{
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  std::_Tree<std::_Tmap_traits<unsigned short,_HIDP_VALUE_CAPS,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,_HIDP_VALUE_CAPS>>,0>>::_Alloc_sentinel_and_proxy((char *)this + 72);
  return this;
}
