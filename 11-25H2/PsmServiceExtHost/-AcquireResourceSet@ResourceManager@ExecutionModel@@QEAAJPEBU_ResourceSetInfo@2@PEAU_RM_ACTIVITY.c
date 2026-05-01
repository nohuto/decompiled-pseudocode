/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAUIResourceSetCallback@2@_KPEAPEAVResourceSet@2@@Z @ 0x18000E274
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18005A594 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAPEAV12@@Z @ 0x18000E5A8 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010B10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSet(
        ExecutionModel::ResourceManager *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct _RM_ACTIVITY_HOST *a3,
        void *a4,
        struct ExecutionModel::IResourceSetCallback *a5,
        unsigned __int64 a6,
        struct ExecutionModel::ResourceSet **a7)
{
  int v7; // eax
  struct ExecutionModel::ResourceSet *v8; // rdi
  __int64 v11; // r14
  int v12; // ebp
  struct ExecutionModel::BaseResourceSet *v13; // rdx
  _QWORD *v14; // rdx
  int v15; // ebx
  __int64 v16; // r8
  const struct ExecutionModel::_ResourceSetInfo *v17; // rax
  __int64 v18; // rdx
  char *v19; // rcx
  __int128 v20; // xmm1
  struct ExecutionModel::IResourceSetCallback *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rbx
  _DWORD *v24; // rbx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // r10
  _QWORD *v28; // r9
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  struct ExecutionModel::ResourceSet *v31; // rsi
  struct ExecutionModel::ResourceSet *v33; // [rsp+50h] [rbp+8h] BYREF

  v7 = *((_DWORD *)a3 + 156);
  v8 = 0LL;
  v11 = 2LL;
  if ( v7 == 2 )
  {
    v12 = 11;
  }
  else if ( v7 == 4 || v7 == 8 )
  {
    v12 = 12;
  }
  else
  {
    v12 = -1;
  }
  v13 = (struct ExecutionModel::BaseResourceSet *)*((_QWORD *)this + 4);
  v33 = 0LL;
  v15 = ExecutionModel::ResourceSet::ResourceSetFactory(a6, v13, a3, a4, &v33);
  if ( v15 < 0 )
  {
    v31 = v33;
  }
  else
  {
    v8 = v33;
    v17 = a2;
    v18 = 128LL;
    v19 = (char *)v33 + 1336;
    do
    {
      *(_OWORD *)v19 = *(_OWORD *)v17;
      *((_OWORD *)v19 + 1) = *((_OWORD *)v17 + 1);
      *((_OWORD *)v19 + 2) = *((_OWORD *)v17 + 2);
      *((_OWORD *)v19 + 3) = *((_OWORD *)v17 + 3);
      *((_OWORD *)v19 + 4) = *((_OWORD *)v17 + 4);
      *((_OWORD *)v19 + 5) = *((_OWORD *)v17 + 5);
      *((_OWORD *)v19 + 6) = *((_OWORD *)v17 + 6);
      v19 += 128;
      v20 = *((_OWORD *)v17 + 7);
      v17 = (const struct ExecutionModel::_ResourceSetInfo *)((char *)v17 + 128);
      *((_OWORD *)v19 - 1) = v20;
      --v11;
    }
    while ( v11 );
    v21 = a5;
    *(_OWORD *)v19 = *(_OWORD *)v17;
    *((_OWORD *)v19 + 1) = *((_OWORD *)v17 + 1);
    *((_OWORD *)v19 + 2) = *((_OWORD *)v17 + 2);
    *((_OWORD *)v19 + 3) = *((_OWORD *)v17 + 3);
    *((_OWORD *)v19 + 4) = *((_OWORD *)v17 + 4);
    *((_OWORD *)v19 + 5) = *((_OWORD *)v17 + 5);
    *((_OWORD *)v19 + 6) = *((_OWORD *)v17 + 6);
    *((_QWORD *)v19 + 14) = *((_QWORD *)v17 + 14);
    *((_DWORD *)v8 + 322) = *((_DWORD *)a2 + 2);
    *((_DWORD *)v8 + 2) = 0;
    *((_DWORD *)v8 + 8) = v12;
    *((_DWORD *)v8 + 320) = 1;
    if ( *((struct ExecutionModel::IResourceSetCallback **)v8 + 214) != v21 )
    {
      if ( v21 )
        (*(void (__fastcall **)(struct ExecutionModel::IResourceSetCallback *, __int64))(*(_QWORD *)v21 + 8LL))(
          v21,
          128LL);
      v22 = *((_QWORD *)v8 + 214);
      if ( v22 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 16LL))(v22, v18);
      *((_QWORD *)v8 + 214) = v21;
    }
    *(_OWORD *)((char *)v8 + 72) = *((_OWORD *)a2 + 5);
    *(_OWORD *)((char *)v8 + 88) = *((_OWORD *)a2 + 6);
    *(_OWORD *)((char *)v8 + 104) = *((_OWORD *)a2 + 7);
    *(_OWORD *)((char *)v8 + 120) = *((_OWORD *)a2 + 8);
    *((_QWORD *)v8 + 17) = *((_QWORD *)a2 + 18);
    v23 = *((_QWORD *)v8 + 165);
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *, __int64))(*(_QWORD *)v8 + 8LL))(v8, v18);
    v24 = (_DWORD *)(v23 + 1136);
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 8LL))(v8);
    v25 = *(_QWORD *)v24;
    v26 = (_QWORD *)((char *)v8 + 1296);
    if ( *(_DWORD **)(*(_QWORD *)v24 + 8LL) != v24 )
      goto LABEL_29;
    *v26 = v25;
    *((_QWORD *)v8 + 163) = v24;
    *(_QWORD *)(v25 + 8) = v26;
    *(_QWORD *)v24 = v26;
    ++v24[4];
    *((_DWORD *)v8 + 332) = 0;
    v27 = (_QWORD *)*((_QWORD *)v8 + 164);
    v28 = (_QWORD *)(*((_QWORD *)a3 + 7) + 216LL);
    v29 = (_QWORD *)*v28;
    v16 = v27[6];
    if ( (_QWORD *)*v28 != v28 )
    {
      v16 = *(unsigned int *)(v16 + 1288);
      do
      {
        if ( (int)v16 < *(_DWORD *)(*(v29 - 2) + 1288LL) )
          break;
        v29 = (_QWORD *)*v29;
      }
      while ( v29 != v28 );
    }
    v14 = (_QWORD *)v29[1];
    v30 = v27 + 8;
    if ( (_QWORD *)*v14 != v29 )
LABEL_29:
      __fastfail(3u);
    *v30 = v29;
    v27[9] = v14;
    *v14 = v30;
    v29[1] = v30;
    if ( (*((_BYTE *)a2 + 42) & 0x20) != 0 && (*((_WORD *)a2 + 8) & 0x100) == 0 )
      *((_DWORD *)v8 + 333) |= 8u;
    v31 = 0LL;
    v15 = 0;
  }
  if ( v31 )
  {
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *, _QWORD *, __int64))(*(_QWORD *)v31 + 32LL))(
      v31,
      v14,
      v16);
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  if ( v15 < 0 || (v15 = ExecutionModel::ResourceSet::AcquireInternalResources(v8), v15 < 0) )
  {
    if ( v8 )
    {
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *, _QWORD *, __int64))(*(_QWORD *)v8 + 32LL))(
        v8,
        v14,
        v16);
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    v15 = 0;
    *a7 = v8;
  }
  return (unsigned int)v15;
}
