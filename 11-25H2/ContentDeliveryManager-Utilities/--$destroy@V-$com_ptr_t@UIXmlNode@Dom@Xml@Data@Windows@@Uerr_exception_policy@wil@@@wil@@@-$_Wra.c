/*
 * XREFs of ??$destroy@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXPEAV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800AB550
 * Callers:
 *     _std::_Uninit_move_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____std::allocator_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____::_1_::catch$0 @ 0x1800BC2FB (_std--_Uninit_move_wil--com_ptr_t_Windows--Data--Xml--Dom--IXmlNode_wil--err_exception_policy___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>>::destroy<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>(
        __int64 a1,
        __int64 *a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(a2);
}
