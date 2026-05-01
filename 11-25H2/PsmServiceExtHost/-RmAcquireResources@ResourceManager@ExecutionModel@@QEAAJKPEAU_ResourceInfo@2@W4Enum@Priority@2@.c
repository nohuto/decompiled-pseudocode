/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18005CA8C
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x18005C2B0 (RmgrSrv_RmAcquireResources.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BF38 (-RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333333@Z @ 0x180053B10 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemp.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18005C898 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18005CE40 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?_EmplaceImpl@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@utl@@_N@2@PEAU?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18005D0D0 (-_EmplaceImpl@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18007249C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAcquireResources(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        _QWORD *a12)
{
  ExecutionModel::ResourceManager *v13; // rbx
  unsigned int v14; // esi
  unsigned int v15; // r15d
  __int64 v16; // r8
  __int64 v17; // rdi
  char v18; // r13
  __int64 i; // rdx
  int v20; // ebx
  unsigned int v21; // r13d
  int v22; // edx
  char *v23; // rax
  int v24; // eax
  _QWORD *v25; // r15
  struct _RM_SERVICE_GLOBALS **v26; // rsi
  _QWORD *v27; // rbx
  char v29; // r15
  __int64 j; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v31; // r14
  int v32; // edx
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // [rsp+38h] [rbp-C8h]
  unsigned int v38; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v39; // [rsp+74h] [rbp-8Ch] BYREF
  struct _RM_SERVICE_GLOBALS **v40; // [rsp+78h] [rbp-88h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v43; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v44; // [rsp+98h] [rbp-68h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v46[3]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v47[144]; // [rsp+C0h] [rbp-40h] BYREF

  v13 = g_pResourceManager;
  v14 = a2;
  v38 = a2;
  v42 = a11;
  v44 = a12;
  v15 = a4;
  v40 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  v39 = a4;
  memset_0(v47, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v47);
  v17 = 0LL;
  v43 = 0LL;
  v41 = 0LL;
  if ( v14 >= 0x32 || !v14 || !a3 || !a12 || !a7 )
  {
    v20 = -2147024809;
    goto LABEL_23;
  }
  v18 = 1;
  for ( i = 0LL; (unsigned int)i < v14; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)(*(_DWORD *)(a3 + 24 * i) - 22) > 4 )
    {
      v18 = 0;
      break;
    }
  }
  RmHamFindHostByPid(*((_QWORD *)v13 + 16) + 2248LL, a5, v16, &v43);
  RmpAcquireGlobalLock();
  v29 = 0;
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    v31 = v43;
    if ( (unsigned int)j >= v38 )
    {
      v21 = a5;
LABEL_12:
      v22 = a8;
      goto LABEL_13;
    }
    v32 = *(_DWORD *)(a3 + 24 * j);
    v45 = 3 * j;
    v20 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld((struct _RM_SERVICE_GLOBALS **)v13, v32, a5, 0);
    if ( v20 < 0 )
      break;
    v13 = (ExecutionModel::ResourceManager *)v40;
  }
  v22 = a8;
  if ( (a8 & 1) == 0 )
  {
LABEL_20:
    v14 = v38;
    v15 = v39;
    goto LABEL_21;
  }
  v33 = v18 == 0;
  v21 = a5;
  if ( !v33 )
  {
    v20 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v40, *(_DWORD *)(a3 + 8 * v45), a5, 1);
    if ( v20 >= 0 )
    {
      v13 = (ExecutionModel::ResourceManager *)v40;
      v29 = 1;
      goto LABEL_12;
    }
    goto LABEL_20;
  }
  v13 = (ExecutionModel::ResourceManager *)v40;
  v29 = 1;
LABEL_13:
  if ( v31 )
    v23 = (char *)v31 - 64;
  else
    v23 = 0LL;
  v14 = v38;
  v37 = v29;
  v15 = v39;
  v24 = ExecutionModel::ExternalResourceSet::CreateInstance(
          *((_QWORD *)v13 + 3),
          v38,
          a3,
          v39,
          v21,
          a6,
          a7,
          v37,
          v22,
          a9,
          a10,
          v23,
          v42,
          &v41);
  v17 = v41;
  v20 = v24;
  if ( v24 >= 0 )
  {
    v25 = v44;
    v26 = v40;
    *v44 = v41;
    v27 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v27 )
    {
      v27[3] = *v25;
      v27[4] = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    }
    utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_EmplaceImpl(
      v26 + 11,
      v46,
      v27);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v20 = 0;
    goto LABEL_20;
  }
LABEL_21:
  RmpReleaseGlobalLock();
  if ( v31 )
    RmHamHostDereference(v31);
LABEL_23:
  if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 9LL) )
  {
    v39 = (unsigned __int8)v35;
    v38 = a10;
    LODWORD(v44) = a9;
    LODWORD(v45) = a8;
    LODWORD(v42) = a5;
    LODWORD(v43) = v15;
    LODWORD(v41) = v14;
    v46[0] = v17;
    LODWORD(v40) = v20;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v34,
      (__int64)&unk_1800D6A01,
      v35,
      v36,
      (__int64)&v40,
      (__int64)v46,
      (__int64)&v41,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v38,
      (__int64)&v39);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v20;
}
