/*
 * XREFs of ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x18000EC0C
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18000EA60 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C080 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAKK@Z @ 0x180046960 (--$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpActivityHostQueryProcessListForMetrics(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR **a3,
        unsigned int *a4)
{
  struct _RM_ACTIVITY_HOST_METRICS *v4; // rbx
  int v5; // r13d
  PVOID Heap; // rsi
  unsigned int v8; // edi
  unsigned int v9; // r15d
  char *v10; // r14
  __int64 v11; // rbx
  int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // r9
  int v15; // ecx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR *v18; // rax
  unsigned int v19; // ebx
  int v21; // r8d
  int v22; // r9d
  unsigned int v23; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+54h] [rbp-1Ch] BYREF
  int v25; // [rsp+58h] [rbp-18h] BYREF
  void *v26; // [rsp+60h] [rbp-10h] BYREF

  v23 = 0;
  v4 = a1;
  v5 = 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( Heap )
  {
    v24 = a2;
    v26 = HampAllocateHeap(16LL * a2);
    if ( v26 )
    {
      v8 = 0;
      v9 = 0;
      while ( 2 )
      {
        if ( v9 >= a2 )
        {
          v18 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)v26;
          v26 = 0LL;
          v19 = 0;
          *a3 = v18;
          *a4 = v8;
        }
        else
        {
          v10 = (char *)v4 + 64 * (unsigned __int64)v9;
          v11 = *((_QWORD *)v10 + 6);
          while ( 1 )
          {
            v23 = v5;
            v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int, PVOID, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v11 + 48) + 40LL) + 72LL))(
                    v11 + 552,
                    *(unsigned int *)(v11 + 620),
                    v11 + 88,
                    *(unsigned int *)(v11 + 624),
                    *(_QWORD *)(v11 + 32),
                    *(_BYTE *)(v11 + 656) != 0 ? 4 : 0,
                    Heap,
                    &v23);
            if ( v12 >= 0 )
              break;
            if ( v12 != -2147483643 )
            {
              if ( (unsigned int)dword_1800E8278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E8278, 1LL) )
              {
                v25 = v21;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                  (unsigned int)&dword_1800E8278,
                  (unsigned int)&unk_1800D87BD,
                  v21,
                  v22,
                  (__int64)&v25);
              }
              goto LABEL_11;
            }
            Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Heap, 8LL * v23);
            if ( !Heap )
            {
              v19 = -1073741801;
              goto LABEL_14;
            }
            v5 = v23;
          }
          v13 = v23;
          if ( !v23 )
          {
LABEL_11:
            v4 = a1;
            ++v9;
            continue;
          }
          if ( v24 - v8 >= v23 )
          {
LABEL_9:
            v14 = 0LL;
            if ( v13 )
            {
              do
              {
                v15 = *((_DWORD *)Heap + 2 * v14);
                v14 = (unsigned int)(v14 + 1);
                v16 = v26;
                v17 = v8++;
                v17 *= 2LL;
                *((_DWORD *)v26 + 2 * v17 + 2) = v15;
                v16[v17] = v10;
              }
              while ( (unsigned int)v14 < v23 );
            }
            goto LABEL_11;
          }
          v19 = RmpArrayGrow<_RM_PROCESS_ID_HOST_METRICS_PAIR>(&v26, &v24, v23 + v8);
          if ( !v19 )
          {
            v13 = v23;
            goto LABEL_9;
          }
        }
        break;
      }
    }
    else
    {
      v19 = -1073741801;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_14:
    if ( v26 )
      HampFreeHeap(v26);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v19;
}
