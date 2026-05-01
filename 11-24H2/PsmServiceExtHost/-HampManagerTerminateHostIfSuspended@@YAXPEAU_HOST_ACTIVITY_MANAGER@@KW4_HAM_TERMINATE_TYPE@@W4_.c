/*
 * XREFs of ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@W4_HOST_GROUP@@PEAE@Z @ 0x18003BDB8
 * Callers:
 *     ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003BBB0 (-HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z @ 0x180080D84 (-HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BEB8 (-RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18003BF7C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18003C708 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 */

void __fastcall HampManagerTerminateHostIfSuspended(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _BYTE *a6)
{
  char v7; // di
  int v8; // r14d
  int HostByPid; // eax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  int v13; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+44h] [rbp-Ch] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v15; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+70h] [rbp+20h] BYREF

  v16 = a3;
  v15 = 0LL;
  v7 = 0;
  LOBYTE(a5) = 0;
  v8 = a2;
  HostByPid = RmHamFindHostByPid(a1, a2, a3, &v15);
  if ( HostByPid >= 0 )
  {
    HampHostTerminateIfSuspended(v15, v10, a4, &a5);
    v7 = a5;
  }
  else if ( (unsigned int)dword_1800E82B0 > 4
         && (qword_1800E82C0 & 0x40) != 0
         && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    a5 = HostByPid;
    v16 = a4;
    v13 = 1;
    v14 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800E82B0,
      (unsigned int)&unk_1800D6077,
      v11,
      v12,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v16,
      (__int64)&a5);
  }
  if ( a6 )
    *a6 = v7;
  if ( v15 )
    RmHamHostDereference(v15);
}
