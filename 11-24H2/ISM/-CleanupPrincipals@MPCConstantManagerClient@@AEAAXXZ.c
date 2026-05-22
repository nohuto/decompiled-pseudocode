/*
 * XREFs of ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x18016D198
 * Callers:
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x18016D72C (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x18016DA58 (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 *     ?CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@P6A?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@3@PEBG@Z@Z @ 0x18016DF24 (-CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncStringPrincipal@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800647B0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     ??4?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AF094 (--4-$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QE.c)
 */

void __fastcall MPCConstantManagerClient::CleanupPrincipals(MPCConstantManagerClient *this)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx
  __int64 *j; // r14
  __int64 *v5; // rbp
  __int64 *v6; // rdi
  __int64 *k; // rbx
  __int64 *m; // r14
  __int64 *v9; // rbp
  __int64 *v10; // rdi
  __int64 *n; // rbx
  __int64 *ii; // r14
  __int64 *v13; // rbp

  v1 = (__int64 *)*((_QWORD *)this + 7);
  for ( i = (__int64 *)*((_QWORD *)this + 6); i != v1 && *(_BYTE *)(*i + 184); ++i )
    ;
  if ( i != v1 )
  {
    for ( j = i + 1; j != v1; ++j )
    {
      if ( *(_BYTE *)(*j + 184) )
        wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::operator=(i++, j);
    }
    if ( i != v1 )
    {
      v5 = (__int64 *)*((_QWORD *)this + 7);
      while ( v1 != v5 )
        wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::operator=(i++, v1++);
      std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
        i,
        *((__int64 **)this + 7));
      *((_QWORD *)this + 7) = i;
    }
  }
  v6 = (__int64 *)*((_QWORD *)this + 10);
  for ( k = (__int64 *)*((_QWORD *)this + 9); k != v6 && *(_BYTE *)(*k + 120); ++k )
    ;
  if ( k != v6 )
  {
    for ( m = k + 1; m != v6; ++m )
    {
      if ( *(_BYTE *)(*m + 120) )
        wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::operator=(k++, m);
    }
    if ( k != v6 )
    {
      v9 = (__int64 *)*((_QWORD *)this + 10);
      while ( v6 != v9 )
        wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::operator=(k++, v6++);
      std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
        k,
        *((__int64 **)this + 10));
      *((_QWORD *)this + 10) = k;
    }
  }
  v10 = (__int64 *)*((_QWORD *)this + 13);
  for ( n = (__int64 *)*((_QWORD *)this + 12); n != v10 && *(_BYTE *)(*n + 184); ++n )
    ;
  if ( n != v10 )
  {
    for ( ii = n + 1; ii != v10; ++ii )
    {
      if ( *(_BYTE *)(*ii + 184) )
        wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::operator=(n++, ii);
    }
    if ( n != v10 )
    {
      v13 = (__int64 *)*((_QWORD *)this + 13);
      while ( v10 != v13 )
        wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::operator=(n++, v10++);
      std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
        n,
        *((__int64 **)this + 13));
      *((_QWORD *)this + 13) = n;
    }
  }
}
