/*
 * XREFs of ?RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z @ 0x180045350
 * Callers:
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18004502C (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180044C40 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmpSystemTrimCompressionProcessPrivateWorkingSet(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD SystemInformation[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-20h]
  _QWORD v9[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF

  v8 = 24LL;
  v9[2] = 0LL;
  v9[0] = 2LL;
  v9[1] = (unsigned __int64)(a1 + 4095) >> 12;
  SystemInformation[0] = 1;
  v7 = v9;
  SystemInformation[1] = 21;
  v2 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  if ( (unsigned int)dword_1800E7278 > 5 && (byte_1800E7288 & 1) != 0 && (qword_1800E7290 & 1) == qword_1800E7290 )
  {
    v11 = a1;
    v10 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800E7278,
      byte_1800D9C3C,
      v3,
      v4,
      (__int64)&v10,
      (__int64)&v11);
  }
  return v2;
}
