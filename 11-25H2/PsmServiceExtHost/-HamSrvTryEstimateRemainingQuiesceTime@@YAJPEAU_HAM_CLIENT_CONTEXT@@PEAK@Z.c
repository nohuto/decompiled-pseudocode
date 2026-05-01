/*
 * XREFs of ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x180044D28
 * Callers:
 *     HamRpcSrvTryEstimateRemainingQuiesceTime @ 0x180071410 (HamRpcSrvTryEstimateRemainingQuiesceTime.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DCEC (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043DAC (-HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180044EC4 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180054E1C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTryEstimateRemainingQuiesceTime(struct _HAM_CLIENT_CONTEXT *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned int v6; // esi
  int v7; // eax
  struct _RM_HAM_ACTIVITY_HOST *v8; // rbx
  unsigned int v9; // edi
  char *v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  struct _RM_HAM_ACTIVITY_HOST *v15; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-81h] BYREF
  __int64 v17; // [rsp+50h] [rbp-79h] BYREF
  __int64 v18; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v19[144]; // [rsp+60h] [rbp-69h] BYREF

  memset_0(v19, 0, 0x88uLL);
  v17 = 0LL;
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D4AE5);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  v15 = 0LL;
  LOBYTE(v4) = 2;
  v5 = -1LL;
  v6 = 0;
  v7 = HampHostFindByClient(a1, v4, &v15, &v17);
  v8 = v15;
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( v15 )
      v11 = (char *)v15 - 64;
    else
      v11 = 0LL;
    v5 = *((_QWORD *)v11 + 4);
    v6 = HampHostTryEstimateRemainingQuiesceTime(v15);
    *a2 = v6;
    v9 = 0;
  }
  if ( v8 )
    RmHamHostDereference(v8);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    v16 = v6;
    v18 = v5;
    LODWORD(v17) = HampClientGetPid(a1);
    LODWORD(v15) = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v12,
      (unsigned int)&unk_1800D47F5,
      v13,
      v14,
      (__int64)&v15,
      (__int64)&v17,
      (__int64)&v18,
      (__int64)&v16);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v9;
}
