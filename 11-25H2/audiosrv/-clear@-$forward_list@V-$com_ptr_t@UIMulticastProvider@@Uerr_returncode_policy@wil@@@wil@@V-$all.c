/*
 * XREFs of ?clear@?$forward_list@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800FD900
 * Callers:
 *     ??1CMulticastSessionManager@@UEAA@XZ @ 0x1800FC528 (--1CMulticastSessionManager@@UEAA@XZ.c)
 *     ?UninitializeMulticastSessionManager@@YAXPEAUIMulticastSessionManager@@@Z @ 0x1800FD7E8 (-UninitializeMulticastSessionManager@@YAXPEAUIMulticastSessionManager@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A43C4 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>>::clear(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 *v2; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (__int64 *)*v1;
      wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(v1 + 1);
      std::_Deallocate<16,0>((char *)v1, (const struct std::nothrow_t *)0x10);
      v1 = v2;
    }
    while ( v2 );
  }
}
