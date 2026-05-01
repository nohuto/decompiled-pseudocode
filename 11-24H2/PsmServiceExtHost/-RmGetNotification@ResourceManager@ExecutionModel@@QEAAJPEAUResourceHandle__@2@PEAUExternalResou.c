/*
 * XREFs of ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x1800564D0
 * Callers:
 *     RmgrSrv_RmGetNotification @ 0x180056410 (RmgrSrv_RmGetNotification.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18003C388 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$_FindFirst@U_FindFirstFind@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@PEAUResourceHandle__@ExecutionModel@@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEBA?AU_FindFirstFind@01@AEBQEAUResourceHandle__@ExecutionModel@@@Z @ 0x180057340 (--$_FindFirst@U_FindFirstFind@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUReso.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z @ 0x18008E270 (-GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmGetNotification(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2,
        struct ExecutionModel::ExternalResourceNotification *a3)
{
  ExecutionModel::ResourceManager *v3; // rbx
  ExecutionModel::ExternalResourceSet **v6; // rax
  int NextMessage; // edi
  ExecutionModel::ExternalResourceSet *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+40h] [rbp-D8h] BYREF
  struct ExecutionModel::ResourceHandle__ *v14; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v16[144]; // [rsp+60h] [rbp-B8h] BYREF

  v3 = g_pResourceManager;
  memset_0(v16, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  RmpAcquireGlobalLock();
  v3 = (ExecutionModel::ResourceManager *)((char *)v3 + 88);
  v14 = a2;
  v6 = *(ExecutionModel::ExternalResourceSet ***)utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FindFirst<utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FindFirstFind,ExecutionModel::ResourceHandle__ *>(
                                                   v3,
                                                   v15,
                                                   &v14);
  if ( v6 == (ExecutionModel::ExternalResourceSet **)v3 )
  {
    NextMessage = -2147024809;
LABEL_5:
    RmpReleaseGlobalLock();
    goto LABEL_9;
  }
  v8 = v6[4];
  if ( !v8 )
  {
    NextMessage = -2147467259;
    goto LABEL_5;
  }
  (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v8 + 8LL))(v6[4]);
  NextMessage = ExecutionModel::ExternalResourceSet::GetNextMessage(v8, a3);
  if ( NextMessage >= 0 )
    NextMessage = 0;
  RmpReleaseGlobalLock();
  (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_9:
  if ( (unsigned int)dword_1800E8278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E8278, 1LL) )
  {
    v13 = *(_DWORD *)a3;
    v15[0] = a2;
    LODWORD(v14) = NextMessage;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v9,
      byte_1800D7AE2,
      v10,
      v11,
      (__int64)&v14,
      (__int64)v15,
      (__int64)&v13);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)NextMessage;
}
