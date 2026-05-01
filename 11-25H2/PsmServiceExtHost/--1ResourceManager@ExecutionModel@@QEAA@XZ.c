/*
 * XREFs of ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x1800862D0
 * Callers:
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x1800869B0 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ??$_DeleteNode@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@?$_ContainerBase@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@1@@Z @ 0x1800667AC (--$_DeleteNode@U-$_HashNode@U-$pair@QEAUResourceHandle__@ExecutionModel@@V-$CComPtr@VExternalRes.c)
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180071AC8 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800739B8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::~ResourceManager(ExecutionModel::ResourceManager *this)
{
  __int64 v2; // rcx
  __int64 **v3; // rdi
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  __int64 **v7; // rdi
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  void (*v13)(void *); // r9

  *(_QWORD *)this = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IExternalResourceRegister'};
  *((_QWORD *)this + 1) = &ExecutionModel::ResourceManager::`vftable'{for `IModernResourceEnforcerCallback'};
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    TpReleaseCleanupGroupMembers(v2, 1LL);
    TpReleaseCleanupGroup(*((_QWORD *)this + 17));
  }
  v3 = (__int64 **)((char *)this + 168);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v5 = (__int64 *)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *(_QWORD *)(v6 + 8) = v5;
    operator delete(v4);
  }
  *((_QWORD *)this + 24) = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)this + 168);
  v7 = (__int64 **)((char *)this + 88);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (__int64 *)v7 )
      break;
    v9 = (__int64 *)v8[1];
    v10 = *v8;
    *v9 = *v8;
    *(_QWORD *)(v10 + 8) = v9;
    utl::_ContainerBase<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>::_DeleteNode<utl::_HashNode<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>(
      (__int64)v9,
      v8);
  }
  *((_QWORD *)this + 14) = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)this + 88);
  `vector destructor iterator'((char *)this + 24, v11, v12, v13);
}
