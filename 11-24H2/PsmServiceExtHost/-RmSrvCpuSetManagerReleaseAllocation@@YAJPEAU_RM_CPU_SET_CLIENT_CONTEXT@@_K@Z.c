/*
 * XREFs of ?RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x18008793C
 * Callers:
 *     ?RmGameModeCpuSetManagerReleaseAllocation@@YAJPEAX0_K@Z @ 0x180078090 (-RmGameModeCpuSetManagerReleaseAllocation@@YAJPEAX0_K@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D8A4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800550F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpUtilCheckStopLockTracking@@YAXK@Z @ 0x1800657B8 (-RmpUtilCheckStopLockTracking@@YAXK@Z.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x18008AAE8 (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008BCB8 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvCpuSetManagerReleaseAllocation(struct _RM_CPU_SET_MANAGER **a1, unsigned __int64 a2)
{
  struct _RM_CPU_SET_CLIENT_CONTEXT **Allocation; // rax
  __int64 v5; // rdx
  char *v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v11; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v12; // [rsp+44h] [rbp-D4h] BYREF
  int v13; // [rsp+48h] [rbp-D0h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v15[144]; // [rsp+60h] [rbp-B8h] BYREF

  memset_0(v15, 0, 0x88uLL);
  v11 = 0;
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E8278,
      byte_1800D7EC2);
  RmpUtilCheckStartLockTracking(&v11, (struct _CEM_LOCK_TRACKER *)v15);
  RmpAcquireGlobalLock();
  Allocation = (struct _RM_CPU_SET_CLIENT_CONTEXT **)RmpCpuSetManagerFindAllocation(*a1, a2);
  v6 = (char *)Allocation;
  if ( Allocation && Allocation[7] == (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1 )
  {
    RmpCpuSetManagerReleaseAllocation(Allocation);
    v7 = 0;
LABEL_8:
    RmpObjectRelease(v6, v5);
    goto LABEL_9;
  }
  v7 = -1073741584;
  if ( Allocation )
    goto LABEL_8;
LABEL_9:
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 9LL) )
  {
    v13 = *((_DWORD *)a1 + 14);
    v14 = a2;
    v12 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800E8278,
      (__int64)&unk_1800D7EEA,
      v8,
      v9,
      (__int64)&v12,
      (__int64)&v13,
      (__int64)&v14);
  }
  RmpUtilCheckStopLockTracking(v11);
  return v7;
}
