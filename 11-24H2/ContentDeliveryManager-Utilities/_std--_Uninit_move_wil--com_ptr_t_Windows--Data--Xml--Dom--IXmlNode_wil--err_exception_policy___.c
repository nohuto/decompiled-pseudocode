/*
 * XREFs of _std::_Uninit_move_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____std::allocator_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____::_1_::catch$0 @ 0x1800BC61B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800227CC (_CxxThrowException_0.c)
 *     ??$destroy@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXPEAV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800AB870 (--$destroy@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@-$_Wra.c)
 */

void __fastcall __noreturn std::_Uninit_move_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____std::allocator_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 *i; // rbx

  for ( i = *(__int64 **)(a2 + 72); i != *(__int64 **)(a2 + 64); ++i )
    std::_Wrap_alloc<std::allocator<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>>::destroy<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>(
      a1,
      i);
  throw;
}
