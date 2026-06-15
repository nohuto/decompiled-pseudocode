/*
 * XREFs of ?RuntimeClassInitialize@?$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAAJ_K0H0PEAUVolatileControlData_V0@@PEAUSharedMessageQueueItem@@III0@Z @ 0x14008009C
 * Callers:
 *     ??$MakeAndInitialize@V?$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEA_KAEAPEAUVolatileControlData_V0@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAIAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAH1AEAPEAUVolatileControlData_V0@@AEAPEAUSharedMessageQueueItem@@AEAI551@Z @ 0x14007FA54 (--$MakeAndInitialize@V-$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44333@Z @ 0x140001008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@@-$_tlgWriteTemplate@$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCPAudioHistoryReader<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned __int64 a11)
{
  __int64 v12; // r10
  __int64 v14; // r15
  signed __int64 v15; // rsi
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned int v18; // r14d
  unsigned int v19; // r13d
  unsigned __int64 v20; // rdi
  BOOL v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v26; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // edx
  __int64 v32; // rsi
  double v33; // xmm0_8
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v35; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+50h]

  v37 = a3;
  v12 = a6;
  v14 = a7;
  v15 = a2;
  v16 = a9;
  *(_QWORD *)(a1 + 56) = a5;
  *(_DWORD *)(a1 + 92) = a8;
  *(_DWORD *)(a1 + 100) = a10;
  *(_QWORD *)(a1 + 64) = v12;
  *(_QWORD *)(a1 + 72) = v14;
  *(_DWORD *)(a1 + 96) = v16;
  v17 = a11;
  *(_QWORD *)(a1 + 104) = a11;
  v18 = *(_DWORD *)(v12 + 8);
  v19 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 12LL);
  if ( a3 == a2 )
    return 0LL;
  if ( (unsigned int)dword_1400C3478 > 4 )
  {
    a5 = a2;
    a8 = v19;
    a10 = v18;
    v36 = a1;
    a6 = *(_QWORD *)(((unsigned __int64)v19 << 6) + v14 + 40);
    v35 = *(_QWORD *)(((unsigned __int64)v18 << 6) + v14 + 40);
    LODWORD(a7) = *(_DWORD *)(a1 + 92);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v17,
      (__int64)&unk_1400B0C1F,
      a3,
      v16,
      (__int64)&v36,
      (__int64)&a7,
      (__int64)&a10,
      (__int64)&a8,
      (__int64)&v35,
      (__int64)&a6,
      (__int64)&a5);
    v17 = a11;
    a3 = v37;
    LODWORD(v16) = a9;
  }
  v20 = (unsigned __int64)v18 << 6;
  v21 = !v19 || *(_QWORD *)(((unsigned __int64)(v19 - 1) << 6) + v14 + 40) - *(_QWORD *)(v20 + v14 + 40) >= v17;
  if ( a4 || !v21 )
    v22 = 0LL;
  else
    v22 = 10000000LL;
  v23 = *(_QWORD *)(v20 + v14 + 40);
  v24 = v23 + v22;
  if ( v15 >= v23 + v22 )
  {
    if ( !a4 && v23 < v24 )
    {
      do
      {
        v28 = (unsigned __int64)((v18 + 1) % *(_DWORD *)(a1 + 100)) << 6;
        v18 = (v18 + 1) % *(_DWORD *)(a1 + 100);
      }
      while ( *(_QWORD *)(v28 + v14 + 40) < v24 );
    }
    while ( 1 )
    {
      if ( v18 == v19 )
      {
        v25 = -2147023728;
        v26 = 165LL;
        goto LABEL_14;
      }
      v29 = (unsigned __int64)v18 << 6;
      if ( *(_QWORD *)(v29 + v14 + 40) > v15 )
        break;
      v18 = (v18 + 1) % *(_DWORD *)(a1 + 100);
    }
    if ( v18 )
      v30 = v18 - 1;
    else
      v30 = *(_DWORD *)(a1 + 100) - 1;
    *(_DWORD *)(a1 + 80) = v30;
    if ( *(_QWORD *)(((unsigned __int64)v30 << 6) + v14 + 40)
       + (unsigned int)(int)((double)*(int *)(((unsigned __int64)v30 << 6) + v14 + 56) * 10000000.0 / (double)(int)v16
                           + 0.5) <= v15 )
    {
      *(_DWORD *)(a1 + 80) = v18;
      v15 = *(_QWORD *)(v29 + v14 + 40);
    }
    v31 = *(_DWORD *)(a1 + 80);
    v32 = v15 - *(_QWORD *)(((unsigned __int64)v31 << 6) + v14 + 40);
    if ( v32 < 0 )
      v33 = (double)(int)(v32 & 1 | ((unsigned __int64)v32 >> 1))
          + (double)(int)(v32 & 1 | ((unsigned __int64)v32 >> 1));
    else
      v33 = (double)(int)v32;
    *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 92) * (int)(v33 * (double)(int)v16 / 10000000.0 + 0.5);
    while ( 1 )
    {
      if ( v31 == v19 )
      {
        v25 = -2147023728;
        v26 = 183LL;
        goto LABEL_14;
      }
      if ( *(_QWORD *)(((unsigned __int64)v31 << 6) + v14 + 40) == a3 )
        break;
      v31 = (v31 + 1) % *(_DWORD *)(a1 + 100);
    }
    if ( !v31 )
      v31 = *(_DWORD *)(a1 + 100);
    *(_DWORD *)(a1 + 84) = v31 - 1;
    return 0LL;
  }
  v25 = -2005139331;
  v26 = 131LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v26,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
    (const char *)v25);
  return v25;
}
