/*
 * XREFs of ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180015890
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015210 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800058A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180056EF0 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall HampWakeContextComputeNextState(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 v6; // al
  int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // [rsp+30h] [rbp-88h] BYREF
  __int64 v15; // [rsp+38h] [rbp-80h] BYREF
  __int64 v16; // [rsp+40h] [rbp-78h] BYREF
  __int128 JobInformation; // [rsp+50h] [rbp-68h] BYREF
  __int128 v18; // [rsp+60h] [rbp-58h]
  __int128 v19; // [rsp+70h] [rbp-48h]
  __int128 v20; // [rsp+80h] [rbp-38h]

  v14 = 0LL;
  JobInformation = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  RtlQueryUnbiasedInterruptTime(&v14);
  if ( (a2 & 0x20) != 0 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
    *(_BYTE *)(a3 + 32) = 1;
    goto LABEL_10;
  }
  v6 = *(_BYTE *)(a1 + 160);
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 144);
  *(_QWORD *)(a3 + 32) = *(_QWORD *)(a1 + 160);
  if ( ((unsigned __int8)~(v6 >> 1) & ((a2 & 0x19) == 0)) == 0 )
  {
    NtQueryInformationJobObject(*(HANDLE *)(a1 + 112), (JOBOBJECTINFOCLASS)20, &JobInformation, 0x40u, 0LL);
    v8 = *((_QWORD *)&v18 + 1);
    if ( (a2 & 8) != 0 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 128);
      if ( *((_QWORD *)&v18 + 1) && !v9 && (*(_BYTE *)(a1 + 184) & 0x70) == 0x10 )
      {
        if ( (unsigned int)dword_1800E82B0 > 5 )
        {
          v15 = *(_QWORD *)(a1 + 168);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1800E82B0,
            (unsigned int)&unk_1800D73DC,
            DWORD2(v18),
            v7,
            (__int64)&v15);
        }
        goto LABEL_10;
      }
    }
    *(_QWORD *)a3 = *((_QWORD *)&v18 + 1);
    if ( v8 )
    {
      if ( v9 )
      {
        if ( (a2 & 1) != 0 )
        {
          *(_BYTE *)(a3 + 32) |= 2u;
          *(_QWORD *)(a3 + 24) = v14 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 100LL);
        }
        else if ( v14 >= *(_QWORD *)(a1 + 152) )
        {
          if ( (*(_BYTE *)(a1 + 160) & 2) != 0
            && (unsigned int)dword_1800E82B0 > 4
            && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 64LL) )
          {
            v16 = *(_QWORD *)(a1 + 168);
            v15 = v12;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              (__int64)&dword_1800E82B0,
              byte_1800D740A,
              v12,
              v13,
              (__int64)&v16,
              (__int64)&v15);
          }
          *(_BYTE *)(a3 + 32) &= ~2u;
        }
        else
        {
          *(_BYTE *)(a3 + 32) |= 2u;
        }
      }
      else
      {
        *(_BYTE *)(a3 + 32) |= 2u;
        v11 = v14;
        *(_QWORD *)(a3 + 24) = v14 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 100LL);
        if ( (*(_BYTE *)(a1 + 160) & 2) == 0 )
          *(_QWORD *)(a3 + 16) = v11 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 96LL);
      }
    }
    else
    {
      if ( v14 < *(_QWORD *)(a1 + 144) )
      {
        *(_BYTE *)(a3 + 32) |= 2u;
      }
      else
      {
        if ( (*(_BYTE *)(a1 + 160) & 2) != 0
          && (unsigned int)dword_1800E82B0 > 4
          && (qword_1800E82C0 & 0x40) != 0
          && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
        {
          v15 = *(_QWORD *)(a1 + 168);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1800E82B0,
            (unsigned int)&unk_1800D7445,
            0,
            v7,
            (__int64)&v15);
        }
        *(_BYTE *)(a3 + 32) &= ~2u;
      }
      *(_QWORD *)(a3 + 24) = 0LL;
    }
  }
LABEL_10:
  result = v14;
  *(_QWORD *)(a3 + 8) = v14;
  return result;
}
