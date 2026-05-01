/*
 * XREFs of ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18002B8E4
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010B10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800123D0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C568 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C790 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C8E4 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000CF8C (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029F90 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostApplyResourceSet@@YAXPEAVResourceSet@ExecutionModel@@@Z @ 0x18002BB9C (-RmpActivityHostApplyResourceSet@@YAXPEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002BC84 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18002C438 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmHamHostIsMemoryRequired@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180043D1C (-RmHamHostIsMemoryRequired@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180088C28 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18008E00C (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ExecutionModel::ResourceSet::CompleteAcquire(ExecutionModel::ResourceSet *this, char a2)
{
  _QWORD *v3; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // xmm1_8
  __int64 v9; // r15
  __int64 v10; // r14
  _QWORD *v11; // r13
  _QWORD *i; // rbx
  struct _RM_SERVICE_GLOBALS *v13; // rcx
  struct _RM_ACTIVITY_HOST *v14; // rbx
  __int64 v15; // rdi
  struct ExecutionModel::ResourceManager *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int j; // ecx
  __int64 v20; // rax
  int v21; // edx
  int v22; // [rsp+20h] [rbp-50h]
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]
  struct _RM_PSM_APP_FAMILY *v25; // [rsp+B0h] [rbp+40h] BYREF
  char v26; // [rsp+C0h] [rbp+50h] BYREF

  LODWORD(v23) = -1;
  v3 = (_QWORD *)(*((_QWORD *)this + 164) + 64LL);
  *((_QWORD *)&v23 + 1) = 0LL;
  LODWORD(v24) = 101;
  WORD2(v24) = 0;
  v5 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *(_OWORD *)v3 = 0LL;
  v7 = *((_QWORD *)this + 8);
  v8 = *((_QWORD *)this + 185);
  v22 = *((_DWORD *)this + 2);
  v23 = *(_OWORD *)((char *)this + 1464);
  v26 = 0;
  v24 = v8;
  LOBYTE(v25) = 0;
  ExecutionModel::BaseResourceSet::RecursiveVisit(
    v7,
    1,
    1,
    (unsigned int)&v23,
    v22,
    1,
    (__int64)&v26,
    (__int64)&v25,
    0LL,
    (__int64)this);
  *((_DWORD *)this + 320) = 2;
  RmpActivityHostApplyResourceSet(this);
  RmpActivityHostResourceSetsChanged(*((struct _RM_ACTIVITY_HOST **)this + 165));
  v9 = *((_QWORD *)this + 3);
  v10 = *((_QWORD *)this + 165);
  v11 = (_QWORD *)(*(_QWORD *)(v9 + 24) + 40LL);
  for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
  {
    v15 = i[2];
    if ( v10 == *(_QWORD *)(v15 + 1336) )
    {
      if ( RmHamHostIsMemoryRequired((struct _RM_ACTIVITY_HOST *)v10)
        || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15) )
      {
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          v16,
          2u,
          0x32u,
          (struct ExecutionModel::_ResourceInfo *)(v15 + 72),
          (struct _RM_ACTIVITY_HOST *)v10);
        v17 = 3LL;
        v18 = v15 + 160;
        while ( v17 < 50 )
        {
          if ( *(_BYTE *)(v18 + 5) && *(_DWORD *)v18 == 101 )
          {
            v21 = *(_DWORD *)(v15 + 1280);
            if ( v21 == 2 && *(_QWORD *)(v18 - 8) )
            {
              ExecutionModel::ExternalResourceSet::Revoke((ExecutionModel::ExternalResourceSet *)v15, 0);
              break;
            }
            if ( v21 == 1 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 48LL))(v15);
              break;
            }
          }
          ++v17;
          v18 += 24LL;
        }
      }
      else
      {
        for ( j = 3; j <= 0x31; ++j )
        {
          v20 = j + 3LL;
          if ( *(_DWORD *)(v15 + 24 * v20) == j && !*(_BYTE *)(v15 + 24 * v20 + 21) )
            goto LABEL_27;
        }
        if ( *(_DWORD *)(v15 + 1280) == 1 )
          continue;
LABEL_27:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 64LL))(v15);
      }
    }
  }
  if ( (*(_BYTE *)(v9 + 160) & 2) == 0 )
    TpPostWork(*(_QWORD *)(v9 + 152));
  if ( *(_DWORD *)(v10 + 624) == 2 && !RmpActivityHostIsPple((struct _RM_ACTIVITY_HOST *)v10) )
  {
    v13 = *(struct _RM_SERVICE_GLOBALS **)(v10 + 48);
    v25 = 0LL;
    RmpPsmAppFamilyTableFindByHostInfo(v13, (struct _RM_PSM_HOST_INFO *)(v10 + 88), &v25);
    v14 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v25 + 71);
    if ( v14 )
    {
      if ( RmpActivityHostHasPpleResourceSet(*((struct _RM_ACTIVITY_HOST **)v25 + 71)) )
        ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities((ExecutionModel::ResourceManager *)v9, v14);
    }
  }
  if ( (a2 & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 214) + 32LL))(
      *((_QWORD *)this + 214),
      *((_QWORD *)this + 215));
    *((_DWORD *)this + 333) |= 1u;
    ExecutionModel::ResourceSet::LogPendingEnd(this);
  }
}
