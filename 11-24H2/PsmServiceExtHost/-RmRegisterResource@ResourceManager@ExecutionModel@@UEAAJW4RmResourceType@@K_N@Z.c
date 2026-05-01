/*
 * XREFs of ?RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z @ 0x180065650
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerIsSetForThread @ 0x18001E42C (CempLockTrackerIsSetForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180060F6C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?RmpUtilCheckStopLockTracking@@YAXK@Z @ 0x1800657B8 (-RmpUtilCheckStopLockTracking@@YAXK@Z.c)
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x18006E0F4 (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmRegisterResource(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v4; // r14
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v16; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v17; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+58h] [rbp-B0h]
  _QWORD v19[4]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v20[144]; // [rsp+88h] [rbp-80h] BYREF

  v4 = a3;
  memset_0(v20, 0, 0x88uLL);
  if ( CempLockTrackerIsSetForThread() )
  {
    v8 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
    v8 = 1;
  }
  if ( (_DWORD)v4 || a4 )
  {
    if ( a2 > 0x31 )
    {
      v9 = -805306129;
    }
    else
    {
      LODWORD(v18) = a2;
      *((_QWORD *)&v18 + 1) = v4;
      WORD2(v19[0]) = a4 ^ 1;
      LODWORD(v19[0]) = 101;
      *(_OWORD *)&v19[1] = v18;
      v19[3] = v19[0];
      RmpAcquireGlobalLock();
      v10 = ExecutionModel::BaseResourceSet::InitializeResource(
              *(ExecutionModel::BaseResourceSet **)(a1 + 24),
              (const struct ExecutionModel::_ResourceInfo *)&v19[1]);
      RmpReleaseGlobalLock();
      v9 = 0;
      if ( v10 < 0 )
        v9 = v10;
    }
  }
  else
  {
    v9 = -805306128;
  }
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
  {
    v15 = v4;
    v16 = a2;
    v17 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      byte_1800D7A98,
      v12,
      v13,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  RmpUtilCheckStopLockTracking(v8);
  return v9;
}
