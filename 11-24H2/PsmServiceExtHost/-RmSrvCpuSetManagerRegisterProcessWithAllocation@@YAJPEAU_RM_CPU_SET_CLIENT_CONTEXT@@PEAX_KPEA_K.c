/*
 * XREFs of ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x18008772C
 * Callers:
 *     ?RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z @ 0x180078070 (-RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@334@Z @ 0x180002364 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D8A4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpUtilCheckStopLockTracking@@YAXK@Z @ 0x1800657B8 (-RmpUtilCheckStopLockTracking@@YAXK@Z.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x18008AAE8 (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18008BA70 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18008BDB8 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_MANAGER **a1,
        HANDLE SourceHandle,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // rdi
  PVOID v8; // r14
  unsigned __int64 v9; // r15
  DWORD ProcessId; // ebx
  int v11; // ebx
  struct _RM_CPU_SET_ALLOCATION *Allocation; // rax
  __int64 v13; // rdx
  char *v14; // rdi
  DWORD v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v19; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  DWORD v22; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v25[144]; // [rsp+80h] [rbp-80h] BYREF

  v4 = a3;
  v21 = a3;
  memset_0(v25, 0, 0x88uLL);
  v19 = 0;
  RmpUtilCheckStartLockTracking(&v19, (struct _CEM_LOCK_TRACKER *)v25);
  v8 = 0LL;
  v9 = -1LL;
  P = 0LL;
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E8278,
      byte_1800D7C20);
  ProcessId = GetProcessId(SourceHandle);
  if ( ProcessId != GetCurrentProcessId() )
  {
    RmpAcquireGlobalLock();
    Allocation = RmpCpuSetManagerFindAllocation(*a1, v4);
    v14 = (char *)Allocation;
    if ( Allocation && *((struct _RM_CPU_SET_MANAGER ***)Allocation + 7) == a1 && *((_DWORD *)Allocation + 90) )
    {
      v11 = RmpCpuSetManagerRegisterProcessWithAllocation(
              (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1,
              SourceHandle,
              Allocation,
              (struct _RM_CPU_SET_PROCESS_REGISTRATION **)&P);
      if ( v11 >= 0 )
      {
        v11 = 0;
        v9 = *((_QWORD *)P + 4);
        *a4 = v9;
LABEL_16:
        RmpObjectRelease(v14, v13);
LABEL_17:
        v4 = v21;
        goto LABEL_18;
      }
      v8 = P;
    }
    else
    {
      v11 = -1073741583;
    }
    if ( v8 )
      RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, v8, 1u);
    if ( !v14 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v11 = -1073741584;
LABEL_18:
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 9LL) )
  {
    v23 = v4;
    v15 = GetProcessId(SourceHandle);
    v24 = v9;
    v22 = v15;
    LODWORD(v21) = *((_DWORD *)a1 + 14);
    LODWORD(P) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800E8278,
      (__int64)&unk_1800D7C54,
      v16,
      v17,
      (__int64)&P,
      (__int64)&v24,
      (__int64)&v21,
      (__int64)&v22,
      (__int64)&v23);
  }
  RmpUtilCheckStopLockTracking(v19);
  return (unsigned int)v11;
}
