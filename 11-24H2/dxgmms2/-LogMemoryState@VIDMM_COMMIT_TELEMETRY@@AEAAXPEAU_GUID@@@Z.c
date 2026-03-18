/*
 * XREFs of ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1400EFED0
 * Callers:
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1400EF8C8 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400EFB30 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1400FF2FC (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x14011141C (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@@Z @ 0x140001090 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@55@Z @ 0x1400014E4 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U3@U3@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140023720 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x14003E548 (_tlgKeywordOn.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400F01AC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogMemoryState(VIDMM_COMMIT_TELEMETRY *this, struct _GUID *a2)
{
  __int64 v4; // r9
  const char *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 i; // r14
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rbx
  struct VIDMM_PARTITION *v11; // r9
  struct VIDMM_SEGMENT_GROUP_STATE *v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  struct VIDMM_SEGMENT_GROUP_STATE *v15; // r13
  unsigned __int64 v16; // rax
  const char *v17; // rdx
  __int64 v18; // rax
  unsigned __int16 *v19; // rbx
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned __int64 v22; // r11
  const char *v23; // rax
  const char *v24; // [rsp+50h] [rbp-10h] BYREF
  const char *v25; // [rsp+58h] [rbp-8h] BYREF
  const char *v26; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int16 *v27; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int64 v28; // [rsp+B8h] [rbp+58h] BYREF

  if ( *((_BYTE *)this + 24) )
  {
    v4 = *(_QWORD *)this;
    v5 = "Discrete";
    if ( (*(_BYTE *)(**(_QWORD **)(*(_QWORD *)this + 40232LL) + 576LL) & 2) == 0 )
      v5 = "Integrated";
    if ( (unsigned int)dword_140081048 > 5
      && (qword_140081058 & 0x10000) != 0
      && (qword_140081060 & 0x10000) == qword_140081060 )
    {
      v18 = *(_QWORD *)(v4 + 24);
      v26 = v5;
      v27 = *(unsigned __int16 **)(v18 + 1928);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>>(
        (__int64)v27,
        (__int64)&unk_14007502A,
        (__int64)a2,
        v4,
        &v27,
        (void **)&v26);
    }
    if ( DXGPROCESS::GetCurrent() && (v6 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
      v7 = *(_QWORD *)(v6 + 8);
    else
      v7 = 0LL;
    v8 = *(_QWORD *)this;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v8 + 6944); i = (unsigned int)(i + 1) )
    {
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                            (VIDMM_GLOBAL *)v8,
                            i,
                            D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL,
                            *(struct VIDMM_PARTITION **)(v7 + 296));
      v12 = VIDMM_GLOBAL::GetSegmentGroupState((VIDMM_GLOBAL *)v8, i, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL, v11);
      v13 = *((_QWORD *)SegmentGroupState + 15);
      v14 = *((_QWORD *)SegmentGroupState + 2);
      v15 = v12;
      v16 = 100 * v13 / v14;
      v17 = 0LL;
      if ( (__int64)(100 - v16) > 0 )
        v17 = (const char *)(100 - v16);
      if ( (unsigned int)dword_140081048 > 5
        && (qword_140081058 & 0x10000) != 0
        && (qword_140081060 & 0x10000) == qword_140081060 )
      {
        v26 = v17;
        v24 = "Local";
        v28 = v14;
        v27 = (unsigned __int16 *)v13;
        v25 = *(const char **)(*(_QWORD *)(v8 + 24) + 1928LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (__int64)v25,
          (__int64)&unk_140074FAB,
          (__int64)a2,
          v13,
          (unsigned __int16 **)&v25,
          (void **)&v24,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26);
      }
      v8 = *(_QWORD *)this;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40232LL) + 8 * i) + 576LL) & 2) != 0 )
      {
        v19 = (unsigned __int16 *)*((_QWORD *)v15 + 15);
        v20 = *(_QWORD *)this;
        if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x10000LL) )
        {
          v23 = 0LL;
          v27 = v19;
          v28 = v22;
          if ( v21 > 0 )
            v23 = (const char *)v21;
          v26 = v23;
          v25 = "NonLocal";
          v24 = *(const char **)(*(_QWORD *)(v8 + 24) + 1928LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            (__int64)v24,
            (__int64)&unk_140074FAB,
            (__int64)a2,
            v20,
            (unsigned __int16 **)&v24,
            (void **)&v25,
            (__int64)&v28,
            (__int64)&v27,
            (__int64)&v26);
          v20 = *(_QWORD *)this;
        }
        v8 = v20;
      }
    }
  }
}
