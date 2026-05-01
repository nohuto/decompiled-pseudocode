/*
 * XREFs of ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800887AC
 * Callers:
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x1800821A8 (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x180084018 (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D8A4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18001DF6C (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180044BC0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpUtilCheckStopLockTracking@@YAXK@Z @ 0x1800657B8 (-RmpUtilCheckStopLockTracking@@YAXK@Z.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18008E094 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmSrvResourceSetExternalResourcePriorities(
        struct _RM_SERVICE_GLOBALS *a1,
        __int64 a2,
        __int64 a3,
        struct ExecutionModel::_ResourceInfo *a4)
{
  struct _RM_SERVICE_GLOBALS *v4; // rbx
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v8; // rdi
  int v9; // ebx
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v14; // [rsp+30h] [rbp-79h] BYREF
  ExecutionModel::ResourceSet *v15; // [rsp+38h] [rbp-71h] BYREF
  __int64 v16; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v17[144]; // [rsp+50h] [rbp-59h] BYREF

  v4 = RmSvcGlobals;
  memset_0(v17, 0, 0x88uLL);
  v14 = 0;
  RmpUtilCheckStartLockTracking(&v14, (struct _CEM_LOCK_TRACKER *)v17);
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E8278,
      byte_1800D81B0);
  v15 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)v4 + 536), a2, &v15);
  v8 = v15;
  if ( EmSetById >= 0 )
  {
    RmpReleaseGlobalLock();
    v9 = ExecutionModel::ResourceSet::SetExternalResourcePriorities(v8, v10, a4);
    if ( v9 >= 0 )
      v9 = 0;
  }
  else
  {
    v9 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 9LL) )
  {
    v16 = a2;
    LODWORD(v15) = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800E8278,
      byte_1800D8396,
      v11,
      v12,
      (__int64)&v15,
      (__int64)&v16);
  }
  if ( v8 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL))(v8);
  RmpUtilCheckStopLockTracking(v14);
  return (unsigned int)v9;
}
