/*
 * XREFs of ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180089EB0
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180089C6C (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperArray@$07@@@Z @ 0x180003180 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C100 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18009112C (-RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerApplySystemAllowedMask(struct _RM_CPU_SET_MANAGER *a1)
{
  _DWORD *v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int16 v15; // dx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v20; // [rsp+30h] [rbp-138h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-130h] BYREF
  __int16 v22; // [rsp+40h] [rbp-128h]
  _QWORD SystemInformation[32]; // [rsp+50h] [rbp-118h] BYREF

  v1 = (_DWORD *)((char *)a1 + 1392);
  if ( *((_DWORD *)a1 + 350) >= *((_DWORD *)a1 + 349) && *v1 == -1 )
  {
    v2 = RmpSystemSetSystemAllowedCpuSets(0LL);
    if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
    {
      v20 = v2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_1800E7278,
        byte_1800D7F21,
        v3,
        v4,
        (__int64)&v20);
    }
  }
  else
  {
    v5 = 2LL;
    v6 = SystemInformation;
    v7 = (_OWORD *)((char *)a1 + 344);
    do
    {
      v8 = v7[1];
      *v6 = *v7;
      v9 = v7[2];
      v6[1] = v8;
      v10 = v7[3];
      v6[2] = v9;
      v11 = v7[4];
      v6[3] = v10;
      v12 = v7[5];
      v6[4] = v11;
      v13 = v7[6];
      v6[5] = v12;
      v14 = v7[7];
      v7 += 8;
      v6[6] = v13;
      v6 += 8;
      *(v6 - 1) = v14;
      --v5;
    }
    while ( v5 );
    if ( *v1 != -1 )
      SystemInformation[(unsigned __int64)(unsigned int)(*v1 - 256) >> 16] &= ~(1LL << *v1);
    v2 = RmpSystemSetSystemAllowedCpuSets(SystemInformation);
    if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
    {
      v20 = v2;
      v21 = SystemInformation;
      v22 = v15 + 31;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperArray<8>>(
        v16,
        (__int64)&unk_1800D7CF0,
        v17,
        v18,
        (__int64)&v20,
        (__int64)&v21);
    }
  }
  return v2;
}
