/*
 * XREFs of ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x18008703C
 * Callers:
 *     RmgrSrv_RmAvailabilityCheck @ 0x180077D40 (RmgrSrv_RmAvailabilityCheck.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A44C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18003BF7C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18003D570 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18005C818 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAU_RM_HAM_ACTIVITY_HOST@@PEA_N@Z @ 0x18008E144 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAvailabilityCheck(
        __int64 a1,
        unsigned int a2,
        int *a3,
        int a4,
        unsigned int a5)
{
  ExecutionModel::ResourceManager *v5; // r13
  int *v6; // rdi
  int v8; // esi
  struct _RM_HAM_ACTIVITY_HOST *v9; // r14
  int v10; // ebx
  NTSTATUS v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v20; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v21; // [rsp+50h] [rbp-B0h] BYREF
  int *v22; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[144]; // [rsp+70h] [rbp-90h] BYREF

  v5 = g_pResourceManager;
  v6 = a3;
  v22 = a3;
  v19 = a4;
  v18[0] = 0;
  v8 = a4;
  memset_0(v24, 0, 0x88uLL);
  v9 = 0LL;
  Handle = 0LL;
  v20 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  if ( v6 )
  {
    v11 = RmpSystemOpenProcess(&Handle, 0x1000u, a5);
    if ( v11 >= 0 )
    {
      RmHamFindHostByProcessHandle(*((_QWORD *)v5 + 16) + 2248LL, Handle, 0, &v20);
      RmpAcquireGlobalLock();
      v9 = v20;
      v13 = 0;
      if ( a2 )
      {
        while ( 1 )
        {
          v10 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
                  (struct _RM_SERVICE_GLOBALS **)v5,
                  *v6,
                  a5,
                  1);
          if ( v10 < 0 )
            break;
          ++v13;
          v6 += 6;
          if ( v13 >= a2 )
          {
            v6 = v22;
            goto LABEL_9;
          }
        }
        v8 = v19;
      }
      else
      {
LABEL_9:
        v8 = v19;
        v10 = ExecutionModel::ExternalResourceSet::AvailabilityCheck(v12, *((_QWORD *)v5 + 3), a2, v6, v19, a5, v9, v18);
        if ( v10 >= 0 && !v18[0] )
          v10 = -2147467259;
      }
      RmpReleaseGlobalLock();
    }
    else
    {
      v10 = v11 | 0x10000000;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  if ( Handle )
    NtClose(Handle);
  if ( v9 )
    RmHamHostDereference(v9);
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
  {
    v19 = v8;
    v21 = a2;
    LODWORD(v22) = a5;
    LODWORD(v20) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      byte_1800D782D,
      v15,
      v16,
      (__int64)&v20,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v19);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v10;
}
