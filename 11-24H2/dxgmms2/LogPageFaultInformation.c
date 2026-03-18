/*
 * XREFs of LogPageFaultInformation @ 0x14004F004
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U2@U2@U4@U4@U4@U2@U4@U4@U4@U4@U4@U2@U?$_tlgWrapSz@D@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@446664666664AEBU?$_tlgWrapSz@D@@6@Z @ 0x140001DF0 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNIC_ea_140001DF0.c)
 *     _tlgKeywordOn @ 0x14003E548 (_tlgKeywordOn.c)
 */

void __fastcall LogPageFaultInformation(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // r10
  __int64 v11; // r11
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // [rsp+B0h] [rbp-80h] BYREF
  int v15; // [rsp+B4h] [rbp-7Ch] BYREF
  int v16; // [rsp+B8h] [rbp-78h] BYREF
  int v17; // [rsp+BCh] [rbp-74h] BYREF
  int v18; // [rsp+C0h] [rbp-70h] BYREF
  int v19; // [rsp+C4h] [rbp-6Ch] BYREF
  int v20; // [rsp+C8h] [rbp-68h] BYREF
  int v21; // [rsp+CCh] [rbp-64h] BYREF
  int v22; // [rsp+D0h] [rbp-60h] BYREF
  void *v23; // [rsp+D8h] [rbp-58h] BYREF
  void *v24; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-38h] BYREF
  unsigned __int16 *v28; // [rsp+100h] [rbp-30h] BYREF
  __int64 v29; // [rsp+108h] [rbp-28h] BYREF
  __int16 v30; // [rsp+140h] [rbp+10h] BYREF
  int v31; // [rsp+148h] [rbp+18h] BYREF

  v7 = 0;
  if ( a4 )
    v7 = *(_DWORD *)(a4 + 200);
  if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000010LL) )
  {
    v31 = v7;
    if ( v11 )
    {
      v10 = *(void **)(v11 + 80);
      v23 = *(void **)(v11 + 96);
    }
    else
    {
      v23 = v10;
    }
    v12 = *(_DWORD *)(a3 + 60);
    v24 = v10;
    v14 = v12 & 1;
    v16 = *(_DWORD *)(a3 + 56);
    v17 = *(_DWORD *)(a3 + 52);
    v18 = *(_DWORD *)(a3 + 48);
    v25 = *(_QWORD *)(a3 + 40);
    v19 = *(_DWORD *)(a3 + 32);
    v20 = *(_DWORD *)(a3 + 28);
    v21 = *(_DWORD *)(a3 + 24);
    v26 = *(_QWORD *)(a3 + 16);
    v27 = *(unsigned int *)(a3 + 8);
    v15 = v12 >> 1;
    v13 = *(_QWORD *)(a2 + 16);
    v22 = a1;
    v28 = *(unsigned __int16 **)(v13 + 1928);
    v29 = *(_QWORD *)(v13 + 412);
    v30 = 3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      v13,
      (__int64)&unk_140075395,
      v8,
      v9,
      (__int64)&v30,
      (__int64)&v29,
      &v28,
      (__int64)&v22,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v25,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v24,
      &v23,
      (__int64)&v31);
  }
}
