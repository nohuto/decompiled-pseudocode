/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800106C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000133C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x180001998 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001C78 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 *     __security_check_cookie @ 0x1800021A0 (__security_check_cookie.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x180010BC0 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        int *a5,
        const enum wil_ReportingKind *a6,
        const enum wil_VariantReportingKind *a7,
        __int64 a8)
{
  int v8; // r14d
  int v11; // r15d
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  _WORD v27[2]; // [rsp+B8h] [rbp-80h] BYREF
  int v28; // [rsp+BCh] [rbp-7Ch] BYREF
  int v29; // [rsp+C0h] [rbp-78h] BYREF
  int v30; // [rsp+C4h] [rbp-74h] BYREF
  int v31; // [rsp+C8h] [rbp-70h] BYREF
  int v32; // [rsp+CCh] [rbp-6Ch] BYREF
  int v33; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-60h] BYREF
  int v35; // [rsp+E0h] [rbp-58h] BYREF
  const unsigned __int16 *v36; // [rsp+E8h] [rbp-50h] BYREF
  const unsigned __int16 *v37; // [rsp+F0h] [rbp-48h] BYREF
  const unsigned __int16 *v38; // [rsp+F8h] [rbp-40h] BYREF
  const unsigned __int16 *v39; // [rsp+100h] [rbp-38h] BYREF
  const unsigned __int16 *v40; // [rsp+108h] [rbp-30h] BYREF
  const unsigned __int16 *v41; // [rsp+110h] [rbp-28h] BYREF
  const unsigned __int16 *v42; // [rsp+118h] [rbp-20h] BYREF
  const unsigned __int16 *v43; // [rsp+120h] [rbp-18h] BYREF
  const unsigned __int16 *v44; // [rsp+128h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+138h] [rbp+0h] BYREF
  int *v46; // [rsp+158h] [rbp+20h]
  int v47; // [rsp+160h] [rbp+28h]
  int v48; // [rsp+164h] [rbp+2Ch]
  int *v49; // [rsp+168h] [rbp+30h]
  int v50; // [rsp+170h] [rbp+38h]
  int v51; // [rsp+174h] [rbp+3Ch]
  int *v52; // [rsp+178h] [rbp+40h]
  int v53; // [rsp+180h] [rbp+48h]
  int v54; // [rsp+184h] [rbp+4Ch]
  int *v55; // [rsp+188h] [rbp+50h]
  int v56; // [rsp+190h] [rbp+58h]
  int v57; // [rsp+194h] [rbp+5Ch]
  int *v58; // [rsp+198h] [rbp+60h]
  int v59; // [rsp+1A0h] [rbp+68h]
  int v60; // [rsp+1A4h] [rbp+6Ch]
  int *v61; // [rsp+1A8h] [rbp+70h]
  int v62; // [rsp+1B0h] [rbp+78h]
  int v63; // [rsp+1B4h] [rbp+7Ch]
  _WORD *v64; // [rsp+1B8h] [rbp+80h]
  int v65; // [rsp+1C0h] [rbp+88h]
  int v66; // [rsp+1C4h] [rbp+8Ch]
  __int64 *v67; // [rsp+1C8h] [rbp+90h]
  int v68; // [rsp+1D0h] [rbp+98h]
  int v69; // [rsp+1D4h] [rbp+9Ch]

  v8 = (int)a4;
  v11 = (int)this;
  v12 = (_DWORD *)*((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
  if ( v12 && *v12 )
  {
    if ( a5 )
    {
      v13 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
      if ( *(_DWORD *)v13 > 5u
        && (*(_BYTE *)(v13 + 16) & 2) != 0
        && (*(_QWORD *)(v13 + 24) & 2LL) == *(_QWORD *)(v13 + 24) )
      {
        v16 = *a5;
        v34 = a8;
        LOBYTE(v27[0]) = v8 != 0;
        v29 = v16;
        if ( a2 )
        {
          LOWORD(v30) = *((unsigned __int8 *)a2 + 4);
          v28 = a2[1];
          v17 = *a2;
        }
        else
        {
          v28 = -1;
          LOWORD(v30) = -1;
          v17 = -1;
        }
        v31 = v17;
        v32 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v13,
          byte_180015D5A,
          v14,
          v15,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v28,
          (__int64)&v30,
          (__int64)v27,
          (__int64)&v29,
          (__int64)&v34);
      }
      if ( a2 )
      {
        if ( *((_BYTE *)a2 + 4) == 1 )
        {
          if ( v8 )
          {
            v18 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
            if ( *(_DWORD *)v18 > 5u
              && (*(_BYTE *)(v18 + 16) & 0xA) != 0
              && (*(_QWORD *)(v18 + 24) & 0xALL) == *(_QWORD *)(v18 + 24) )
            {
              v32 = *a5;
              LOWORD(v28) = *((unsigned __int8 *)a2 + 4);
              v31 = a2[1];
              v29 = *a2;
              v34 = a8;
              LOBYTE(v27[0]) = 1;
              v30 = v11;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                v18,
                byte_180015F73,
                v19,
                v20,
                (__int64)&v30,
                (__int64)&v29,
                (__int64)&v31,
                (__int64)&v28,
                (__int64)v27,
                (__int64)&v32,
                (__int64)&v34);
            }
          }
        }
      }
    }
    else if ( a6 )
    {
      v21 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
      if ( *(_DWORD *)v21 > 5u
        && (*(_BYTE *)(v21 + 16) & 4) != 0
        && (*(_QWORD *)(v21 + 24) & 4LL) == *(_QWORD *)(v21 + 24) )
      {
        v34 = a8;
        LOBYTE(v30) = v8 != 0;
        LOBYTE(v27[0]) = (_BYTE)a7;
        v32 = *(_DWORD *)a6;
        if ( a2 )
        {
          LOWORD(v28) = *((unsigned __int8 *)a2 + 4);
          v29 = a2[1];
          v22 = *a2;
        }
        else
        {
          v29 = -1;
          LOWORD(v28) = -1;
          v22 = -1;
        }
        v69 = 0;
        v66 = 0;
        v63 = 0;
        v60 = 0;
        v57 = 0;
        v54 = 0;
        v51 = 0;
        v48 = 0;
        v31 = v22;
        v67 = &v34;
        v64 = v27;
        v61 = &v32;
        v58 = &v30;
        v55 = &v28;
        v52 = &v29;
        v49 = &v31;
        v46 = &v33;
        v62 = 4;
        v53 = 4;
        v50 = 4;
        v47 = 4;
        v33 = v11;
        v68 = 8;
        v65 = 1;
        v59 = 1;
        v56 = 2;
        tlgWriteTransfer_EventWriteTransfer(v21, byte_180015DCB, 0LL, 0LL, 0xAu, &v45);
      }
    }
    else if ( a3 )
    {
      v23 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
      if ( *(_DWORD *)v23 > 2u
        && (*(_BYTE *)(v23 + 16) & 1) != 0
        && (*(_QWORD *)(v23 + 24) & 1LL) == *(_QWORD *)(v23 + 24) )
      {
        v33 = *((_DWORD *)a3 + 20);
        v36 = (const unsigned __int16 *)*((_QWORD *)a3 + 11);
        v32 = *((_DWORD *)a3 + 8);
        v37 = (const unsigned __int16 *)*((_QWORD *)a3 + 5);
        v38 = (const unsigned __int16 *)*((_QWORD *)a3 + 6);
        v39 = (const unsigned __int16 *)*((_QWORD *)a3 + 12);
        v40 = (const unsigned __int16 *)*((_QWORD *)a3 + 9);
        LOWORD(v30) = *((_WORD *)a3 + 28);
        v41 = (const unsigned __int16 *)*((_QWORD *)a3 + 8);
        v42 = (const unsigned __int16 *)*((_QWORD *)a3 + 2);
        v43 = (const unsigned __int16 *)*((_QWORD *)a3 + 3);
        v27[0] = *((_WORD *)a3 + 2);
        v44 = (const unsigned __int16 *)*((_QWORD *)a3 + 1);
        v31 = *(_DWORD *)a3;
        if ( a2 )
        {
          LOWORD(v28) = *((unsigned __int8 *)a2 + 4);
          v29 = a2[1];
          v26 = *a2;
        }
        else
        {
          v29 = -1;
          LOWORD(v28) = -1;
          v26 = -1;
        }
        v35 = v26;
        LODWORD(v34) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v23,
          byte_180015E53,
          v24,
          v25,
          (__int64)&v34,
          (__int64)&v35,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v31,
          &v44,
          (__int64)v27,
          &v43,
          &v42,
          &v41,
          (__int64)&v30,
          &v40,
          &v39,
          &v38,
          &v37,
          (__int64)&v32,
          &v36,
          (__int64)&v33);
      }
    }
  }
}
