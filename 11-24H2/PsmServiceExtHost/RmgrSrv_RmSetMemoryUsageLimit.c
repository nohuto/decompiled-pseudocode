/*
 * XREFs of RmgrSrv_RmSetMemoryUsageLimit @ 0x180077E50
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C080 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     CempRpcQueryClientInformation @ 0x18003E148 (CempRpcQueryClientInformation.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x180088600 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 */

__int64 __fastcall RmgrSrv_RmSetMemoryUsageLimit(void *a1, unsigned __int64 a2, BOOL *a3)
{
  BOOL v5; // eax
  unsigned int v6; // ebx
  struct _RM_SERVICE_GLOBALS *v7; // rcx
  signed int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v13 = 0;
  if ( a3 )
  {
    v8 = CempRpcQueryClientInformation(a1, 0LL, 0LL, &v13, (__int64)&v14, 0LL);
    if ( v8 >= 0 )
    {
      v5 = RmSrvHostTrySetCommitTargetForPple(v7, v14, v13, a2) >= 0;
      v6 = 0;
    }
    else
    {
      if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 9LL) )
      {
        v13 = v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          v9,
          byte_1800D1CB5,
          v10,
          v11,
          (__int64)&v13);
      }
      v5 = 0;
      v6 = v8 | 0x10000000;
    }
  }
  else
  {
    v5 = 0;
    v6 = -2147024809;
  }
  *a3 = v5;
  return v6;
}
