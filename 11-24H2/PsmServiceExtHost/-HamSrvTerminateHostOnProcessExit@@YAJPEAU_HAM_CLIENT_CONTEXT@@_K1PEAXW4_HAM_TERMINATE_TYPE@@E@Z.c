/*
 * XREFs of ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180080B30
 * Callers:
 *     ?HampInProcTerminateHostOnProcessExit@@YAJPEAX_K10W4_HAM_TERMINATE_TYPE@@E@Z @ 0x1800778A0 (-HampInProcTerminateHostOnProcessExit@@YAJPEAX_K10W4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4344@Z @ 0x180002408 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E800 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003854C (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180039470 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x180082964 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateHostOnProcessExit(__int64 a1, __int64 a2, __int64 a3, void *a4, int a5, char a6)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r15
  int Host; // ebx
  int v14; // eax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rdi
  DWORD ProcessId; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v22; // [rsp+50h] [rbp-B0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v23; // [rsp+58h] [rbp-A8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v24; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v28[144]; // [rsp+80h] [rbp-80h] BYREF

  memset_0(v28, 0, 0x88uLL);
  v22 = 0;
  if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800D4C26);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
  v10 = *(unsigned __int8 *)(a1 + 164);
  v11 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  v24 = 0LL;
  v23 = 0LL;
  v12 = 0LL;
  v25 = 0LL;
  Host = RmHamFindHost(v11 - 48 * v10 - 16, a2, 0, &v23);
  if ( Host >= 0 )
  {
    Host = HampSystemGetProcessFullIdentity(a4, &v22, 0LL);
    if ( Host >= 0 )
    {
      Host = 0;
      if ( v22 )
      {
        v14 = HampHostFindByProcessHandle(
                (*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *(unsigned __int8 *)(a1 + 164) - 16,
                a4,
                0LL,
                &v24,
                &v25);
        v15 = v24;
        Host = v14;
        v12 = v25;
        if ( v14 >= 0 )
        {
          Host = HampDepGroupAddTerminateDependency(v23, a3, v24, v25, a5, a6);
          if ( Host >= 0 )
            Host = 0;
        }
        if ( v15 )
          RmHamHostDereference(v15);
      }
    }
  }
  if ( v23 )
    RmHamHostDereference(v23);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 8LL) )
  {
    v24 = (struct _RM_HAM_ACTIVITY_HOST *)-1LL;
    v25 = v12;
    ProcessId = GetProcessId(a4);
    v26 = a3;
    v22 = ProcessId;
    v27 = a2;
    LODWORD(v23) = Host;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v17,
      (__int64)&unk_1800D507D,
      v18,
      v19,
      (__int64)&v23,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v22,
      (__int64)&v24,
      (__int64)&v25);
  }
  return (unsigned int)Host;
}
