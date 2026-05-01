/*
 * XREFs of ?_EmplaceImpl@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@utl@@_N@2@PEAU?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18005D050
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18005CA0C (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 * Callees:
 *     ?_FindInsertPos@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA?AU_InsertPosResult@12@AEBQEAUResourceHandle__@ExecutionModel@@@Z @ 0x18005D14C (-_FindInsertPos@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@E.c)
 *     ?_Rehash@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA_NE@Z @ 0x18005D27C (-_Rehash@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Executio.c)
 *     ??$_DeleteNode@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@?$_ContainerBase@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@1@@Z @ 0x18006672C (--$_DeleteNode@U-$_HashNode@U-$pair@QEAUResourceHandle__@ExecutionModel@@V-$CComPtr@VExternalRes.c)
 */

__int64 __fastcall utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_EmplaceImpl(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  char v16; // [rsp+30h] [rbp-18h]

  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( !a3 )
    return a2;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FindInsertPos(
    a1,
    &v14,
    a3 + 3);
  if ( v16 )
  {
    utl::_ContainerBase<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>::_DeleteNode<utl::_HashNode<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>(
      v6,
      a3);
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v7 = v15;
  v8 = v14;
  v9 = *(_QWORD *)(a1 + 16) + 16 * (v15 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
  if ( v14 )
  {
    if ( *(_QWORD *)v9 == v14 )
    {
      *(_QWORD *)v9 = a3;
      goto LABEL_9;
    }
    if ( **(_QWORD **)(v9 + 8) != v14 )
      goto LABEL_9;
  }
  else
  {
    *(_QWORD *)v9 = a3;
    v8 = a1;
  }
  *(_QWORD *)(v9 + 8) = a3;
LABEL_9:
  a3[2] = v7;
  v10 = *(_QWORD **)(v8 + 8);
  a3[1] = v10;
  *a3 = v8;
  *v10 = a3;
  *(_QWORD *)(v8 + 8) = a3;
  LOBYTE(v10) = *(_BYTE *)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 24) + 1LL;
  v12 = *(unsigned __int8 *)(a1 + 33);
  *(_QWORD *)(a1 + 24) = v11;
  if ( v12 < v11 >> (char)v10 )
    utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_Rehash(
      a1,
      (unsigned int)((_DWORD)v10 + 1));
  *(_QWORD *)a2 = a3;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
