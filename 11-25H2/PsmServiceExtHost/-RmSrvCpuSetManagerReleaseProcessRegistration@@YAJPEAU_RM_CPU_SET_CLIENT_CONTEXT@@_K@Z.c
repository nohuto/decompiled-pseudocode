/*
 * XREFs of ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x180087630
 * Callers:
 *     ?RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z @ 0x180078050 (-RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D924 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027700 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180055174 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18005BA18 (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpUtilCheckStopLockTracking@@YAXK@Z @ 0x180065838 (-RmpUtilCheckStopLockTracking@@YAXK@Z.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18008B958 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvCpuSetManagerReleaseProcessRegistration(struct _RM_CPU_SET_MANAGER **a1, unsigned __int64 a2)
{
  struct _RM_CPU_SET_MANAGER *v4; // rcx
  __int64 v5; // rdx
  char *v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  char *v11; // rbx
  unsigned int v12; // [rsp+40h] [rbp-79h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v16[144]; // [rsp+60h] [rbp-59h] BYREF

  memset_0(v16, 0, 0x88uLL);
  v12 = 0;
  if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E7278,
      byte_1800D7063);
  RmpUtilCheckStartLockTracking(&v12, (struct _CEM_LOCK_TRACKER *)v16);
  RmpAcquireGlobalLock();
  v4 = *a1;
  P = 0LL;
  v14 = a2;
  if ( (int)RmpObjectTableFindObjectByHandle(
              (struct _RM_CPU_SET_MANAGER *)((char *)v4 + 48),
              &v14,
              (struct _RM_OBJECT_HEADER **)&P) >= 0 )
  {
    v11 = (char *)P;
    v6 = (char *)P;
    if ( P && *((struct _RM_CPU_SET_MANAGER ***)P + 6) == a1 )
    {
      RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, P, 1u);
      v7 = 0;
      v6 = v11;
      goto LABEL_7;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = -1073741584;
  if ( v6 )
LABEL_7:
    RmpObjectRelease(v6, v5);
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 9LL) )
  {
    LODWORD(v14) = *((_DWORD *)a1 + 14);
    v15 = a2;
    LODWORD(P) = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800E7278,
      (__int64)&unk_1800D71E9,
      v8,
      v9,
      (__int64)&P,
      (__int64)&v14,
      (__int64)&v15);
  }
  RmpUtilCheckStopLockTracking(v12);
  return v7;
}
