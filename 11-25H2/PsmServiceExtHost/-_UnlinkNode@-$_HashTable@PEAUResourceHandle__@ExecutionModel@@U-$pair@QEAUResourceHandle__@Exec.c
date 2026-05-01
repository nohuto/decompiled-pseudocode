/*
 * XREFs of ?_UnlinkNode@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@2@_K@Z @ 0x18006B1B0
 * Callers:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180057460 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_UnlinkNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  v5 = (__int64 *)a2[1];
  v6 = *a2;
  *v5 = *a2;
  *(_QWORD *)(v6 + 8) = v5;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 2 * (a3 & a2[2]);
  if ( *(__int64 **)(v7 + 16 * (a3 & a2[2])) == a2 )
  {
    if ( *(__int64 **)(v7 + 16 * (a3 & a2[2]) + 8) == a2 )
    {
      v9 = 0LL;
      *(_QWORD *)(v7 + 16 * (a3 & a2[2]) + 8) = 0LL;
    }
    else
    {
      v9 = *a2;
    }
    *(_QWORD *)(v7 + 8 * v8) = v9;
  }
  else if ( *(__int64 **)(v7 + 16 * (a3 & a2[2]) + 8) == a2 )
  {
    *(_QWORD *)(v7 + 16 * (a3 & a2[2]) + 8) = a2[1];
  }
  --*(_QWORD *)(a1 + 24);
  return a2;
}
