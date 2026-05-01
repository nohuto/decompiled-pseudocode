/*
 * XREFs of ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008BE20
 * Callers:
 *     ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800562E0 (-RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180089EC8 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$07@@@Z @ 0x180003050 (--$Write@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180052FA0 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18005AD60 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180062A40 (-RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z.c)
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800719A0 (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180072CD4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008A0CC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x18008AC94 (-RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008B2F4 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008C24C (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x180091374 (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x1800914D8 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerResetValidMask(struct _RM_CPU_SET_MANAGER *a1)
{
  int CpuSetInformation; // eax
  struct _SYSTEM_CPU_SET_INFORMATION *v3; // r13
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r10d
  __int64 i; // r9
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // r15
  __int64 *v13; // rsi
  signed __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rcx
  char v21; // al
  HANDLE CurrentProcess; // rax
  HANDLE v23; // rax
  unsigned int SystemReserveTarget; // esi
  __int64 v25; // rdx
  struct _RM_CPU_SET_ALLOCATION *Next; // rax
  char *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v32; // [rsp+30h] [rbp-D0h] BYREF
  struct _SYSTEM_CPU_SET_INFORMATION *v33[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+48h] [rbp-B8h]
  _QWORD v35[32]; // [rsp+60h] [rbp-A0h] BYREF

  v32 = 0;
  v33[0] = 0LL;
  CpuSetInformation = RmpCpuSetManagerGetCpuSetInformation(v33, &v32);
  v3 = v33[0];
  v4 = CpuSetInformation;
  if ( CpuSetInformation >= 0 )
  {
    memset_0(v35, 0, sizeof(v35));
    v8 = v32;
    for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(*(DWORD *)((char *)&v3->Size + i) + i) )
    {
      if ( *(CPU_SET_INFORMATION_TYPE *)((char *)&v3->Type + i) == CpuSetInformation )
      {
        v10 = *(DWORD *)((char *)&v3->CpuSet.Id + i);
        if ( v10 != *((_DWORD *)a1 + 348) )
        {
          v11 = v10 - 256;
          v5 = (unsigned __int64)v11 >> 16;
          v6 = v35[v5] | (1LL << v11);
          v35[v5] = v6;
        }
      }
    }
    v12 = 0LL;
    LOBYTE(v6) = 0;
    v13 = (__int64 *)((char *)a1 + 88);
    v32 = v6;
    v14 = (char *)v35 - (char *)a1;
    do
    {
      v15 = *v13;
      v16 = *(__int64 *)((char *)v13 + v14 - 88) & ~v13[64];
      *(__int64 *)((char *)v13 + v14 - 88) = v16;
      if ( v16 != v15 )
      {
        v17 = v16 & ~v15;
        if ( v17 )
        {
          v18 = RtlNumberOfSetBitsUlongPtr(v17, v5, v7, i);
          *((_QWORD *)a1 + v12 + 11) |= v17;
          *((_DWORD *)a1 + 349) += v18;
          *((_QWORD *)a1 + v12 + 43) |= v17;
          *((_DWORD *)a1 + 350) += v18;
          *((_DWORD *)a1 + 353) |= 1u;
          LOBYTE(v6) = v32;
        }
        v19 = *v13 & ~v16;
        if ( v19 )
        {
          LODWORD(v6) = (unsigned __int8)v6;
          if ( (~v13[32] & v19) != 0 )
            LODWORD(v6) = 1;
          *((_QWORD *)a1 + v12 + 11) &= ~v19;
          v32 = v6;
          *((_DWORD *)a1 + 349) -= RtlNumberOfSetBitsUlongPtr(v19, v5, v7, i);
          v20 = v19 & *((_QWORD *)a1 + v12 + 43);
          if ( v20 )
          {
            *((_QWORD *)a1 + v12 + 43) &= ~v20;
            *((_DWORD *)a1 + 350) -= RtlNumberOfSetBitsUlongPtr(v20, v5, v7, i);
          }
          *((_DWORD *)a1 + 353) |= 1u;
        }
      }
      LOBYTE(v6) = v32;
      v12 = (unsigned int)(v12 + 1);
      ++v13;
    }
    while ( (unsigned int)v12 < 0x20 );
    v21 = IsNotifyGameModeExtensionRecipientsPresentPresent();
    v3 = v33[0];
    if ( !v21 )
    {
      CurrentProcess = GetCurrentProcess();
      RmpSystemSetProcessAllowedCpuSets(CurrentProcess, (char *)a1 + 88);
      v23 = GetCurrentProcess();
      RmpSystemSetProcessDefaultCpuSets(v23, (char *)a1 + 88);
    }
    if ( (_BYTE)v32 )
      RmpCpuSetManagerSweepInvalidAllocations(a1);
    SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(a1);
    if ( SystemReserveTarget > *((_DWORD *)a1 + 350) )
    {
      *(_OWORD *)v33 = 0LL;
      v34 = 0LL;
      RmpObjectTableEnumerationBegin(
        (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
        (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v33);
      while ( 1 )
      {
        Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v33);
        v27 = (char *)Next;
        if ( !Next )
          break;
        RmpCpuSetManagerInvalidateAllocation(a1, Next);
        RmpObjectRelease(v27, v25);
      }
      RmpObjectTableEnumerationEnd((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v33);
      RmpCpuSetManagerApplyAllPolicyChanges(a1);
    }
    *((_DWORD *)a1 + 352) = SystemReserveTarget;
    *((_DWORD *)a1 + 351) = 1;
    RmpCpuSetManagerApplyAllPolicyChanges(a1);
    v4 = 0;
  }
  if ( v3 )
    HampFreeHeap(v3);
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
  {
    LOWORD(v33[1]) = 32;
    v33[0] = (struct _SYSTEM_CPU_SET_INFORMATION *)((char *)a1 + 88);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<8>>(
      v28,
      (__int64)&unk_1800D8F57,
      v29,
      v30,
      (__int64 *)v33);
  }
  return v4;
}
