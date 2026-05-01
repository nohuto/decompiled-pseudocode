/*
 * XREFs of ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18005C818
 * Callers:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18005C488 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     RmgrSrv_RmAccessCheck @ 0x18005C520 (RmgrSrv_RmAccessCheck.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18005CA0C (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x18008703C (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C4E8 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019300 (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180060F6C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180066BF0 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
        struct _RM_SERVICE_GLOBALS **a1,
        int a2,
        DWORD a3,
        char a4)
{
  char *v7; // rdi
  int v9; // r14d
  __int64 v10; // rdx
  struct ExecutionModel::ResourceManager *v11; // rcx
  int v12; // esi
  HANDLE v13; // rbx
  unsigned int v14; // ebx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h]
  int v24; // [rsp+60h] [rbp-A0h]
  __int16 v25; // [rsp+64h] [rbp-9Ch]
  wchar_t v26[280]; // [rsp+70h] [rbp-90h] BYREF

  v7 = 0LL;
  P = 0LL;
  v9 = 0;
  memset_0(v26, 0, 0x228uLL);
  if ( (unsigned int)(a2 - 3) > 0x2E )
  {
    v14 = -2147024891;
  }
  else
  {
    if ( (*((int (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, wchar_t *))*a1 + 5))(a1, a3, v26) < 0
      || (RmpActivityHostFindByPsmId(a1[16], v26, (struct _RM_ACTIVITY_HOST **)&P), (v7 = (char *)P) == 0LL)
      || *((_BYTE *)P + 656) )
    {
      P = 0LL;
      v13 = OpenProcess(0x100000u, 0, a3);
      v12 = 1;
      if ( v13 )
      {
        tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&P);
        P = v13;
        if ( WaitForSingleObject(v13, 0) == 258 )
          v9 = 1;
      }
      tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&P);
    }
    else
    {
      v22 = a2;
      v23 = 1LL;
      v24 = 101;
      v25 = 256;
      ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        v11,
        (a4 != 0) + 2,
        1u,
        (struct ExecutionModel::_ResourceInfo *)&v22,
        (struct _RM_ACTIVITY_HOST *)P);
      LOBYTE(v9) = v24 != 101;
      v12 = 0;
    }
    v14 = -2147024891;
    if ( v9 )
      v14 = v12;
  }
  if ( v7 )
    RmpObjectRelease(v7, v10);
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 9LL) )
  {
    v20 = a2;
    v21 = a3;
    LODWORD(P) = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      (unsigned int)&unk_1800D776C,
      v16,
      v17,
      (__int64)&P,
      (__int64)&v21,
      (__int64)&v20);
  }
  return v14;
}
