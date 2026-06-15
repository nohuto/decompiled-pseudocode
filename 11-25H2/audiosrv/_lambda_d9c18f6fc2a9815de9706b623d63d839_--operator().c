/*
 * XREFs of _lambda_d9c18f6fc2a9815de9706b623d63d839_::operator() @ 0x18014173C
 * Callers:
 *     ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180141F00 (-IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$01@@U1@U3@U3@U1@U3@U3@U_tlgWrapperBinary@@U3@U1@U3@U3@U1@U3@U3@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$01@@355355AEBU_tlgWrapperBinary@@535535563@Z @ 0x180007700 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal@$01@@U1@U3@U.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003E4E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_d9c18f6fc2a9815de9706b623d63d839_::operator()(_DWORD **a1)
{
  _QWORD *v1; // rax
  _WORD *v3; // rdi
  __int64 v4; // rcx
  _WORD *v5; // r14
  _DWORD *v6; // rsi
  __int64 v7; // r8
  int v8; // ecx
  signed int v9; // edx
  __int16 v10; // ax
  __int16 v11; // ax
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int16 v17; // [rsp+C0h] [rbp-80h] BYREF
  __int16 v18; // [rsp+C2h] [rbp-7Eh] BYREF
  __int16 v19; // [rsp+C4h] [rbp-7Ch] BYREF
  __int16 v20; // [rsp+C6h] [rbp-7Ah] BYREF
  __int16 v21; // [rsp+C8h] [rbp-78h] BYREF
  __int16 v22; // [rsp+CAh] [rbp-76h] BYREF
  int v23; // [rsp+CCh] [rbp-74h] BYREF
  int v24; // [rsp+D0h] [rbp-70h] BYREF
  int v25; // [rsp+D4h] [rbp-6Ch] BYREF
  int v26; // [rsp+D8h] [rbp-68h] BYREF
  int v27; // [rsp+DCh] [rbp-64h] BYREF
  int v28; // [rsp+E0h] [rbp-60h] BYREF
  int v29; // [rsp+E4h] [rbp-5Ch] BYREF
  __int64 v30; // [rsp+E8h] [rbp-58h] BYREF
  _WORD *v31; // [rsp+F0h] [rbp-50h] BYREF
  __int16 v32; // [rsp+F8h] [rbp-48h]
  _WORD *v33; // [rsp+100h] [rbp-40h] BYREF
  __int16 v34; // [rsp+108h] [rbp-38h]
  __int16 v35; // [rsp+140h] [rbp+0h] BYREF
  __int16 v36; // [rsp+148h] [rbp+8h] BYREF
  __int16 v37; // [rsp+150h] [rbp+10h] BYREF
  __int16 v38; // [rsp+158h] [rbp+18h] BYREF

  v1 = *a1;
  if ( *((_QWORD *)*a1 + 9) )
  {
    v3 = &unk_1801D0958;
    v4 = *(_QWORD *)a1[1];
    if ( v4 )
      v5 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    else
      v5 = &unk_1801D0958;
    v1 = a1[2];
    if ( *v1 )
    {
      v1 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 40LL))(*v1);
      v3 = v1;
    }
    v6 = (_DWORD *)*((_QWORD *)*a1 + 9);
    if ( *v6 > 4u )
    {
      LOBYTE(v1) = tlgKeywordOn(*((_QWORD *)*a1 + 9), 256LL);
      if ( (_BYTE)v1 )
      {
        v8 = *a1[4];
        v9 = *a1[3];
        v31 = v3 + 9;
        v35 = *v3;
        v36 = v3[7];
        v24 = *((_DWORD *)v3 + 1);
        v37 = v3[1];
        v38 = v3[6];
        v25 = *((_DWORD *)v3 + 2);
        v33 = v5 + 9;
        v18 = *v5;
        v19 = v5[7];
        v26 = *((_DWORD *)v5 + 1);
        v10 = v5[1];
        v23 = v8;
        LOWORD(v8) = v3[8];
        v20 = v10;
        v11 = v5[6];
        v17 = v8;
        v32 = v8;
        LOWORD(v8) = v5[8];
        v21 = v11;
        v12 = *((_DWORD *)v5 + 2);
        v22 = v8;
        v27 = v12;
        v13 = *(_DWORD *)(v7 + 80);
        v34 = v8;
        v28 = v13;
        v30 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v7 + 96, v9);
        v29 = *a1[3];
        LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
                       (int)v6,
                       (int)&unk_1801A7635,
                       v14,
                       v15,
                       (__int64)&v29,
                       &v30,
                       (__int64)&v28,
                       (__int64)&v22,
                       (__int64)&v27,
                       (__int64)&v21,
                       (__int64)&v20,
                       (__int64)&v26,
                       (__int64)&v19,
                       (__int64)&v18,
                       (__int64 *)&v33,
                       (__int64)&v17,
                       (__int64)&v25,
                       (__int64)&v38,
                       (__int64)&v37,
                       (__int64)&v24,
                       (__int64)&v36,
                       (__int64)&v35,
                       (__int64 *)&v31,
                       (__int64)&v23);
      }
    }
  }
  return (char)v1;
}
