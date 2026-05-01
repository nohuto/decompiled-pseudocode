/*
 * XREFs of ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18008A170
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008A0CC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18008BA70 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperArray@$07@@@Z @ 0x1800030DC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     CempListEntryRemoveAndClear @ 0x180027644 (CempListEntryRemoveAndClear.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800561FC (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18008A9E4 (-RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x180091374 (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall RmpCpuSetManagerApplyProcessPolicy(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  _BYTE *v4; // rdi
  struct _RM_CPU_SET_PROCESS *i; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE *v17; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v18; // [rsp+50h] [rbp-B0h]
  _BYTE v19[256]; // [rsp+60h] [rbp-A0h] BYREF

  CempListEntryRemoveAndClear((_QWORD *)a2 + 5);
  memset_0(v19, 0, sizeof(v19));
  v4 = 0LL;
  for ( i = (struct _RM_CPU_SET_PROCESS *)*((_QWORD *)a2 + 3);
        i != (struct _RM_CPU_SET_PROCESS *)((char *)a2 + 24);
        i = *(struct _RM_CPU_SET_PROCESS **)i )
  {
    v6 = *((_QWORD *)i - 3);
    if ( *(_DWORD *)(v6 + 360) )
    {
      v7 = 32LL;
      v8 = v6 - (_QWORD)v19;
      v9 = v19;
      do
      {
        *v9 |= *(_QWORD *)((char *)v9 + v8 + 104);
        ++v9;
        --v7;
      }
      while ( v7 );
      v4 = v19;
    }
  }
  RmpSystemSetProcessAllowedCpuSets(*((HANDLE *)a2 + 2), v4);
  if ( v4 )
  {
    if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
    {
      v15 = *((_DWORD *)a2 + 14);
      v17 = v4;
      v18 = 32;
      v16 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperArray<8>>(
        v10,
        (__int64)&unk_1800D8D69,
        v11,
        v12,
        (__int64)&v16,
        (__int64)&v15,
        (__int64 *)&v17);
    }
  }
  else if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
  {
    v16 = *((_DWORD *)a2 + 14);
    v15 = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E8278,
      byte_1800D8FCC,
      v13,
      v14,
      (__int64)&v15,
      (__int64)&v16);
  }
  if ( !*((_DWORD *)a2 + 15) )
    RmpCpuSetManagerDestroyProcess(a1, a2);
}
