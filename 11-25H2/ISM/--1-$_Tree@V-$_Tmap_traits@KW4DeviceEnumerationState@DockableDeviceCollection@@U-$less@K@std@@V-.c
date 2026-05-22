/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@KW4DeviceEnumerationState@DockableDeviceCollection@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180093CC8
 * Callers:
 *     ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800DAFD4 (--1DockableDeviceCollection@@UEAA@XZ.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800DD3A0 (--1GazeHidDevice@@UEAA@XZ.c)
 *     ??1?$map@KIU?$less@K@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@@std@@QEAA@XZ @ 0x180105C94 (--1-$map@KIU-$less@K@std@@V-$allocator@U-$pair@$$CBKI@std@@@2@@std@@QEAA@XZ.c)
 *     ??1GamepadInterceptionHelper@@UEAA@XZ @ 0x180105D6C (--1GamepadInterceptionHelper@@UEAA@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@1@@Z @ 0x1801C1F58 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$set@PEAUHotKeyInfo@@U-$less@PEAUHotKe.c)
 *     _std::map_unsigned_short_unsigned_int_std::less_unsigned_short__std::allocator_std::pair_unsigned_short_const__unsigned_int_____::map_unsigned_short_unsigned_int_std::less_unsigned_short__std::allocator_std::pair_unsigned_short_const__unsigned_int______::_1_::dtor$0 @ 0x1801CBC80 (_std--map_unsigned_short_unsigned_int_std--less_unsigned_short__std--allocator_std--pair_unsigne.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGI@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@@Z @ 0x180093CF8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBGI@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>(
        char **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned short const,unsigned int>,void *>>>(
    a1,
    a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
