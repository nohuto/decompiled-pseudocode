/*
 * XREFs of ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x180087194
 * Callers:
 *     ?RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z @ 0x180078000 (-RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D924 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005627C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?RmpUtilCheckStopLockTracking@@YAXK@Z @ 0x180065838 (-RmpUtilCheckStopLockTracking@@YAXK@Z.c)
 *     ?RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18008A394 (-RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CON.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18008B8D8 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvCpuSetManagerCreateClientContext(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned int a2,
        struct _RM_CPU_SET_CLIENT_CONTEXT **a3)
{
  int v6; // ebx
  struct _RM_CPU_SET_CLIENT_CONTEXT *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v11; // [rsp+30h] [rbp-79h] BYREF
  struct _RM_CPU_SET_CLIENT_CONTEXT *v12; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v13[4]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v14[144]; // [rsp+50h] [rbp-59h] BYREF

  memset_0(v14, 0, 0x88uLL);
  v11 = 0;
  RmpUtilCheckStartLockTracking(&v11, (struct _CEM_LOCK_TRACKER *)v14);
  v12 = 0LL;
  if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E7278,
      byte_1800D736C);
  RmpAcquireGlobalLock();
  v6 = RmpCpuSetManagerCreateClientContext((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 680), a2, &v12);
  if ( v6 < 0 )
  {
    v7 = v12;
  }
  else
  {
    v7 = 0LL;
    *a3 = v12;
    v6 = 0;
  }
  if ( v7 )
    RmpCpuSetManagerReleaseClientContext(v7);
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 9LL) )
  {
    v13[0] = a2;
    LODWORD(v12) = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E7278,
      byte_1800D6E83,
      v8,
      v9,
      (__int64)&v12,
      (__int64)v13);
  }
  RmpUtilCheckStopLockTracking(v11);
  return (unsigned int)v6;
}
