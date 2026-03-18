/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@PEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x18024B734
 * Callers:
 *     ??1CDDisplayManager@@QEAA@XZ @ 0x1801E8D30 (--1CDDisplayManager@@QEAA@XZ.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x18025F4F4 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ??1CSceneMaterial@@MEAA@XZ @ 0x1802A49AC (--1CSceneMaterial@@MEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18022165C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_LUID@@V-$com_ptr_t@UIDisplayDevice@Core@.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<CResource *,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>,std::less<CResource *>,std::allocator<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>,0>>::~_Tree<std::_Tmap_traits<CResource *,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>,std::less<CResource *>,std::allocator<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>,0>>(
        _QWORD **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    (__int64 *)(*a1)[1]);
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
