/*
 * XREFs of _std::vector_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__std::allocator_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy_____::_Reallocate_::_1_::catch$0 @ 0x1800BCC47
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800227CC (_CxxThrowException_0.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXPEAV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800AFC08 (-deallocate@-$_Wrap_alloc@V-$allocator@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_excepti.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__std::allocator_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy_____::_Reallocate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>>::deallocate(
    a1,
    *(void **)(a2 + 72));
  throw;
}
