/*
 * XREFs of ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008A4A4
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008A0CC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperArray@$07@@@Z @ 0x1800030DC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180052FA0 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800561FC (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18005AD60 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180062A40 (-RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180072CD4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x18009165C (-RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

void __fastcall RmpCpuSetManagerApplyWorkloadAllowedMasks(struct _RM_CPU_SET_MANAGER *a1)
{
  int v2; // r15d
  struct _RM_OBJECT_HEADER *i; // rax
  __int64 v4; // rdx
  unsigned int v5; // ecx
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  _QWORD *v8; // r8
  char *v9; // r11
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  unsigned int v13; // edx
  char *v14; // rsi
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _OWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  int v26; // [rsp+A8h] [rbp+48h] BYREF
  int v27; // [rsp+B0h] [rbp+50h] BYREF

  v26 = 0;
  memset(v25, 0, sizeof(v25));
  if ( !IsNotifyGameModeExtensionRecipientsPresentPresent() )
  {
    memset_0((char *)a1 + 856, 0, 0x200uLL);
    v2 = 0;
    RmpObjectTableEnumerationBegin(
      (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v25);
    for ( i = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v25);
          ;
          i = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v25) )
    {
      v9 = (char *)i;
      if ( !i )
        break;
      v4 = *((unsigned int *)i + 91);
      if ( (_DWORD)v4 )
      {
        v26 = v4 | v2;
        do
        {
          _BitScanForward(&v5, v4);
          v6 = 32LL;
          v7 = (unsigned __int64)v5 << 8;
          v8 = (_QWORD *)((char *)a1 + v7 + 856);
          do
          {
            *v8 |= *(_QWORD *)((char *)v8 + &v9[-v7] - (char *)a1 - 752);
            ++v8;
            --v6;
          }
          while ( v6 );
          v4 = ~(1 << v5) & (unsigned int)v4;
        }
        while ( (_DWORD)v4 );
        v2 = v26;
      }
      RmpObjectRelease(v9, v4);
    }
    RmpObjectTableEnumerationEnd((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v25);
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    do
    {
      if ( v10 )
      {
        if ( _bittest(&v2, v11) )
        {
          v14 = (char *)a1 + 256 * (unsigned __int64)v13 + 856;
          v15 = RmpSystemSetWorkloadAllowedCpuSets(v14, v12);
          if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
          {
            *(_QWORD *)&v25[0] = v14;
            WORD4(v25[0]) = 32;
            v26 = v12;
            v27 = v15;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperArray<8>>(
              v16,
              (__int64)&unk_1800D8E07,
              v17,
              v18,
              (__int64)&v27,
              (__int64)&v26,
              (__int64 *)v25);
          }
        }
        else
        {
          v15 = RmpSystemSetWorkloadAllowedCpuSets(0LL, v12);
          if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
          {
            v26 = v12;
            v27 = v15;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v19,
              byte_1800D8E52,
              v20,
              v21,
              (__int64)&v27,
              (__int64)&v26);
          }
        }
        if ( v15 < 0 && (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
        {
          v26 = v12;
          v27 = v15;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v22,
            byte_1800D8E99,
            v23,
            v24,
            (__int64)&v27,
            (__int64)&v26);
        }
      }
      v10 = ++v12;
      v11 = v12;
      v13 = v12;
    }
    while ( v12 < 2 );
  }
}
