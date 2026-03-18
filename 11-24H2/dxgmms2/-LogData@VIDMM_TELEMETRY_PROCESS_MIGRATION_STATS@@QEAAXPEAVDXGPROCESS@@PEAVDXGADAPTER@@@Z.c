/*
 * XREFs of ?LogData@VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x1401015CC
 * Callers:
 *     ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x140100F38 (--1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U5@U_tlgWrapperPtrSize@@U6@U6@U6@U6@U6@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@7AEBU_tlgWrapperPtrSize@@888888@Z @ 0x140001A08 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByRef@$0BA_ea_140001A08.c)
 *     _tlgKeywordOn @ 0x14003E548 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

void __fastcall VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS::LogData(
        VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS *this,
        struct DXGPROCESS *a2,
        struct DXGADAPTER *a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  int *v9; // r9
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int16 v12[2]; // [rsp+98h] [rbp-80h] BYREF
  int v13; // [rsp+9Ch] [rbp-7Ch] BYREF
  int v14; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int16 *v15; // [rsp+A8h] [rbp-70h] BYREF
  __int128 *v16; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+B8h] [rbp-60h] BYREF
  _BYTE *v18; // [rsp+C0h] [rbp-58h] BYREF
  int v19; // [rsp+C8h] [rbp-50h]
  _BYTE *v20; // [rsp+D0h] [rbp-48h] BYREF
  int v21; // [rsp+D8h] [rbp-40h]
  _DWORD *v22; // [rsp+E0h] [rbp-38h] BYREF
  int v23; // [rsp+E8h] [rbp-30h]
  _DWORD *v24; // [rsp+F0h] [rbp-28h] BYREF
  int v25; // [rsp+F8h] [rbp-20h]
  _DWORD *v26; // [rsp+100h] [rbp-18h] BYREF
  int v27; // [rsp+108h] [rbp-10h]
  _DWORD *v28; // [rsp+110h] [rbp-8h] BYREF
  int v29; // [rsp+118h] [rbp+0h]
  _DWORD *v30; // [rsp+120h] [rbp+8h] BYREF
  int v31; // [rsp+128h] [rbp+10h]
  __int128 v32; // [rsp+130h] [rbp+18h] BYREF
  _BYTE v33[176]; // [rsp+148h] [rbp+30h] BYREF
  _BYTE v34[176]; // [rsp+1F8h] [rbp+E0h] BYREF

  if ( *((_BYTE *)this + 976) )
  {
    v5 = 22LL;
    v6 = (_QWORD *)((char *)this + 272);
    do
    {
      *(_QWORD *)((char *)v6 + v34 - (_BYTE *)this - 272) = (unsigned __int64)(10000000LL * *(v6 - 22))
                                                          / VIDMM_GLOBAL::_QpcFrequency.QuadPart;
      v7 = 10000000LL * *v6++;
      *(_QWORD *)((char *)v6 + v33 - (_BYTE *)this - 280) = v7 / VIDMM_GLOBAL::_QpcFrequency.QuadPart;
      --v5;
    }
    while ( v5 );
    if ( (unsigned int)dword_140081048 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140081048, 0x400000000008LL) )
      {
        v18 = v33;
        v19 = 176;
        v20 = v34;
        v22 = v9 + 222;
        v24 = v9 + 200;
        v26 = v9 + 156;
        v28 = v9 + 112;
        v30 = v9 + 2;
        v13 = v9[1];
        v14 = *v9;
        v15 = (unsigned __int16 *)*((_QWORD *)a3 + 241);
        v10 = *((_QWORD *)a2 + 8);
        v21 = 176;
        v27 = 176;
        v29 = 176;
        v11 = *(_OWORD *)(v10 + 140);
        v23 = 88;
        v16 = &v32;
        v25 = 88;
        v31 = 88;
        v32 = v11;
        v12[0] = 1;
        v17 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
          88LL,
          (__int64)&unk_1400744C4,
          v8,
          (__int64)v9,
          (__int64)&v17,
          (__int64)v12,
          (__int64 *)&v16,
          &v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64 *)&v30,
          (__int64 *)&v28,
          (__int64 *)&v26,
          (__int64 *)&v24,
          (__int64 *)&v22,
          (__int64 *)&v20,
          (__int64 *)&v18);
      }
    }
  }
}
