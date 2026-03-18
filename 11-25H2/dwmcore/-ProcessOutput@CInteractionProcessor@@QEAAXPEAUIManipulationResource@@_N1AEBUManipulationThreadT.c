/*
 * XREFs of ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@AEAUInteractionOutput@@@Z @ 0x1801F2010
 * Callers:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@PEAW4PointerResult@@@Z @ 0x1801F1A9C (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1801F2E18 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionProcessor::ProcessOutput(
        CInteractionProcessor *this,
        struct IManipulationResource *a2,
        unsigned __int8 a3,
        __int64 a4,
        const struct ManipulationThreadTelemetryData *a5,
        struct IDCompositionInteractionStats *a6,
        struct InteractionOutput *a7)
{
  unsigned __int8 v7; // r9
  int v9; // r15d
  char v11; // cl
  char v12; // r9
  int v13; // xmm0_4
  int v14; // eax
  int v15; // eax
  int v16; // xmm1_4
  int v17; // xmm0_4
  __int64 v18; // rax
  int v19; // xmm1_4
  __int64 (__fastcall *v20)(struct IManipulationResource *, _DWORD *, const struct ManipulationThreadTelemetryData *, struct IDCompositionInteractionStats *); // rax
  int v21; // xmm0_4
  int v22; // xmm1_4
  int v23; // xmm0_4
  int v24; // xmm1_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  int v27; // eax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+64h] [rbp-9Ch] BYREF
  int v34; // [rsp+68h] [rbp-98h] BYREF
  int v35; // [rsp+6Ch] [rbp-94h] BYREF
  int v36; // [rsp+70h] [rbp-90h] BYREF
  struct IManipulationResource *v37; // [rsp+78h] [rbp-88h] BYREF
  CInteractionProcessor *v38; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v39[4]; // [rsp+88h] [rbp-78h] BYREF
  int v40; // [rsp+98h] [rbp-68h]
  _DWORD v41[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B4h] [rbp-4Ch]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  int v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C4h] [rbp-3Ch]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  int v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D4h] [rbp-2Ch]
  int v52; // [rsp+D8h] [rbp-28h]
  int v53; // [rsp+DCh] [rbp-24h]
  int v54; // [rsp+E0h] [rbp-20h]
  int v55; // [rsp+E4h] [rbp-1Ch]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  int v58; // [rsp+F0h] [rbp-10h]
  int v59; // [rsp+F4h] [rbp-Ch]
  int v60; // [rsp+F8h] [rbp-8h]
  int v61; // [rsp+FCh] [rbp-4h]

  v7 = *((_BYTE *)this + 148);
  v9 = a3;
  v11 = v7 >> 4;
  v12 = v7 >> 5;
  if ( a3 )
  {
    v13 = 0;
    if ( (*((_BYTE *)this + 808) & 1) != 0 )
      v13 = *((_DWORD *)a7 + 2);
    else
      *((_DWORD *)a7 + 2) = 0;
    if ( (*((_BYTE *)this + 808) & 2) == 0 )
      *((_DWORD *)a7 + 3) = 0;
    if ( (*((_BYTE *)this + 808) & 4) == 0 )
      *((_DWORD *)a7 + 4) = 1065353216;
    v42 = 0;
    v14 = 3;
    v41[0] = 3;
    if ( *((_DWORD *)this + 198) )
    {
      if ( *(_DWORD *)a7 )
        v14 = 2;
      v41[0] = v14;
    }
    v15 = *((_DWORD *)a7 + 5);
    v16 = *((_DWORD *)a7 + 4);
    v45 = 0;
    v52 = 0;
    v55 = 0;
    v59 = 0;
    v60 = v15;
    v61 = *((_DWORD *)this + 197);
    v41[1] = *((_DWORD *)this + 203);
    v41[2] = *((_DWORD *)this + 204);
    v41[3] = *((_DWORD *)this + 205);
    v43 = v13;
    v17 = *((_DWORD *)a7 + 3);
    v18 = *(_QWORD *)a2;
    v46 = v16;
    v47 = v16;
    v19 = *((_DWORD *)a7 + 6);
    v20 = *(__int64 (__fastcall **)(struct IManipulationResource *, _DWORD *, const struct ManipulationThreadTelemetryData *, struct IDCompositionInteractionStats *))(v18 + 24);
    v44 = v17;
    v21 = *((_DWORD *)a7 + 7);
    v50 = v19;
    v22 = *((_DWORD *)a7 + 9);
    v51 = v21;
    v23 = *((_DWORD *)a7 + 10);
    v53 = v22;
    v54 = v22;
    v24 = *((_DWORD *)a7 + 11);
    LOBYTE(v42) = v11 & 1 | v42 & 0xFC | (2 * (v12 & 1 | 2));
    v57 = v23;
    v25 = *((_DWORD *)a7 + 13);
    v58 = v24;
    v26 = *((_DWORD *)a7 + 8);
    v49 = v25;
    v56 = v26;
    v48 = 1065353216;
    v27 = v20(a2, v41, a5, a6);
  }
  else
  {
    v40 = 0;
    if ( *((_DWORD *)this + 198) && (*((_BYTE *)a7 + 4) & 2) == 0 && *(_DWORD *)a7 )
      v39[0] = 3;
    else
      v39[0] = 0;
    v39[1] = *((_DWORD *)this + 203);
    v39[2] = *((_DWORD *)this + 204);
    v39[3] = *((_DWORD *)this + 205);
    v31 = *(_QWORD *)a2;
    LOBYTE(v40) = v11 & 1 | v40 & 0xFC | (2 * (v12 & 1 | 2));
    v27 = (*(__int64 (__fastcall **)(struct IManipulationResource *, _DWORD *, const struct ManipulationThreadTelemetryData *))(v31 + 32))(
            a2,
            v39,
            a5);
  }
  if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
  {
    v33 = *((_DWORD *)a7 + 1);
    v34 = *((_DWORD *)this + 198);
    v32 = v27;
    v35 = 1;
    v36 = v9;
    v37 = a2;
    v38 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v28,
      (unsigned int)&unk_1803D6E5E,
      v29,
      v30,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32);
  }
}
