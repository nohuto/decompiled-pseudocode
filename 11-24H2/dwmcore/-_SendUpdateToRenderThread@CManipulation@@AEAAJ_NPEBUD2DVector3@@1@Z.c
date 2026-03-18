/*
 * XREFs of ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1800EA8DC
 * Callers:
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x1800E8A70 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@@Z @ 0x1800EA4D0 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipula.c)
 *     ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x1800EC4A0 (-CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180094000 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x1800EB264 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800EB920 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1800EC048 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444444444444444444444@Z @ 0x1800EC0D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_1800EC0D0.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::_SendUpdateToRenderThread(
        CManipulation *this,
        char a2,
        const struct D2DVector3 *a3,
        const struct D2DVector3 *a4)
{
  const struct D2DMatrix *v4; // rbx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  CComposition *v9; // rdi
  struct IMessageCallSendHost *v10; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v12; // rdi
  unsigned int v13; // esi
  int v14; // eax
  struct CManipulationManager *v15; // rbx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  int v26; // eax
  unsigned __int8 v28; // cl
  int v29; // [rsp+40h] [rbp-1A0h]
  struct CManipulationManager *v30; // [rsp+160h] [rbp-80h] BYREF
  struct IMessageCallSendHost *v31; // [rsp+168h] [rbp-78h] BYREF
  int v32; // [rsp+170h] [rbp-70h] BYREF
  int v33; // [rsp+174h] [rbp-6Ch] BYREF
  int v34; // [rsp+178h] [rbp-68h] BYREF
  int v35; // [rsp+17Ch] [rbp-64h] BYREF
  int v36; // [rsp+180h] [rbp-60h] BYREF
  int v37; // [rsp+184h] [rbp-5Ch] BYREF
  int v38; // [rsp+188h] [rbp-58h] BYREF
  int v39; // [rsp+18Ch] [rbp-54h] BYREF
  int v40; // [rsp+190h] [rbp-50h] BYREF
  int v41; // [rsp+194h] [rbp-4Ch] BYREF
  int v42; // [rsp+198h] [rbp-48h] BYREF
  int v43; // [rsp+19Ch] [rbp-44h] BYREF
  int v44; // [rsp+1A0h] [rbp-40h] BYREF
  int v45; // [rsp+1A4h] [rbp-3Ch] BYREF
  int v46; // [rsp+1A8h] [rbp-38h] BYREF
  int v47; // [rsp+1ACh] [rbp-34h] BYREF
  int v48; // [rsp+1B0h] [rbp-30h] BYREF
  int v49; // [rsp+1B4h] [rbp-2Ch] BYREF
  int v50; // [rsp+1B8h] [rbp-28h] BYREF
  int v51; // [rsp+1BCh] [rbp-24h] BYREF
  int v52; // [rsp+1C0h] [rbp-20h] BYREF
  int v53; // [rsp+1C4h] [rbp-1Ch] BYREF
  int v54; // [rsp+1C8h] [rbp-18h] BYREF
  int v55; // [rsp+1CCh] [rbp-14h] BYREF
  int v56; // [rsp+1D0h] [rbp-10h] BYREF
  int v57; // [rsp+1D4h] [rbp-Ch] BYREF
  int v58; // [rsp+1D8h] [rbp-8h] BYREF
  int v59; // [rsp+1DCh] [rbp-4h] BYREF
  int v60; // [rsp+1E0h] [rbp+0h] BYREF
  int v61; // [rsp+1E4h] [rbp+4h] BYREF
  int v62; // [rsp+1E8h] [rbp+8h] BYREF
  int v63; // [rsp+1ECh] [rbp+Ch] BYREF
  int v64; // [rsp+1F0h] [rbp+10h] BYREF
  int v65; // [rsp+1F4h] [rbp+14h] BYREF
  int v66; // [rsp+1F8h] [rbp+18h] BYREF
  int v67; // [rsp+1FCh] [rbp+1Ch] BYREF
  _QWORD v68[2]; // [rsp+200h] [rbp+20h] BYREF
  _OWORD v69[11]; // [rsp+210h] [rbp+30h] BYREF
  __int64 v70; // [rsp+2C0h] [rbp+E0h]
  _OWORD v71[4]; // [rsp+2D0h] [rbp+F0h] BYREF
  _BYTE v72[64]; // [rsp+310h] [rbp+130h] BYREF

  v4 = (CManipulation *)((char *)this + 152);
  if ( a2 )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      a3,
      a4,
      (CManipulation *)((char *)this + 140),
      (struct D2DMatrix *)v72);
    D2DMatrixMultiply((struct D2DMatrix *)v71, v4, (const struct D2DMatrix *)v72);
    v6 = v71[1];
    v7 = v71[2];
    *(_OWORD *)v4 = v71[0];
    *((_OWORD *)v4 + 1) = v6;
    v8 = v71[3];
    *((_OWORD *)v4 + 2) = v7;
    *((_OWORD *)v4 + 3) = v8;
  }
  if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
  {
    v61 = *((_DWORD *)this + 115);
    v28 = *((_BYTE *)this + 268);
    v68[0] = this;
    v67 = (v28 >> 1) & 1;
    v33 = *((_DWORD *)this + 62);
    v34 = *((_DWORD *)this + 66);
    v35 = *((_DWORD *)this + 65);
    v36 = *((_DWORD *)this + 64);
    v37 = *((_DWORD *)this + 61);
    v38 = *((_DWORD *)this + 53);
    v39 = *((_DWORD *)this + 52);
    v40 = *((_DWORD *)this + 51);
    v41 = *((_DWORD *)this + 50);
    v42 = *((_DWORD *)this + 49);
    v43 = *((_DWORD *)this + 48);
    v44 = *((_DWORD *)this + 47);
    v45 = *((_DWORD *)this + 46);
    v46 = *((_DWORD *)this + 45);
    v47 = *((_DWORD *)this + 44);
    v48 = *((_DWORD *)this + 43);
    v49 = *((_DWORD *)this + 42);
    v50 = *((_DWORD *)this + 41);
    v51 = *((_DWORD *)this + 40);
    v52 = *((_DWORD *)this + 39);
    v53 = *(_DWORD *)v4;
    v54 = *((_DWORD *)this + 60);
    v55 = *((_DWORD *)this + 59);
    v56 = *((_DWORD *)this + 58);
    v57 = *((_DWORD *)this + 57);
    v58 = *((_DWORD *)this + 56);
    v59 = *((_DWORD *)this + 55);
    v60 = *((_DWORD *)this + 54);
    v66 = *((_DWORD *)this + 34);
    v62 = *((_DWORD *)this + 30);
    v63 = *((_DWORD *)this + 29);
    v64 = *((_DWORD *)this + 28);
    v65 = *((_DWORD *)this + 24);
    LODWORD(v30) = *((_DWORD *)this + 23);
    LODWORD(v31) = *((_DWORD *)this + 22);
    v32 = v28 & 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v32,
      (unsigned int)&unk_1803CD04A,
      (_DWORD)a3,
      (_DWORD)a4,
      (__int64)v68,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v65,
      (__int64)&v64,
      (__int64)&v63,
      (__int64)&v62,
      (__int64)&v66,
      (__int64)&v60,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v67,
      (__int64)&v61);
  }
  v9 = (CComposition *)*((_QWORD *)this + 3);
  v10 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  ManipulationManager = CComposition::GetManipulationManager(v9, &v30);
  v12 = v30;
  v13 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ManipulationManager, 0x140u, 0LL);
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
  v14 = CManipulationManager::GetManipulationThreadMessageCallSendHost(v12, &v31);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x142u, 0LL);
    goto LABEL_17;
  }
  v15 = (struct CManipulationManager *)*((_QWORD *)v12 + 7);
  if ( !v15 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x145u, 0LL);
LABEL_17:
    v10 = v31;
    goto LABEL_9;
  }
  (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
  v30 = v15;
  v16 = *(_OWORD *)((char *)this + 88);
  v10 = v31;
  v17 = *(_OWORD *)((char *)this + 104);
  v68[0] = this;
  v69[0] = v16;
  v18 = *(_OWORD *)((char *)this + 120);
  v69[1] = v17;
  v19 = *(_OWORD *)((char *)this + 136);
  v69[2] = v18;
  v20 = *(_OWORD *)((char *)this + 152);
  v69[3] = v19;
  v21 = *(_OWORD *)((char *)this + 168);
  v69[4] = v20;
  v22 = *(_OWORD *)((char *)this + 184);
  v69[5] = v21;
  v69[6] = v22;
  v69[7] = *(_OWORD *)((char *)this + 200);
  v23 = *(_OWORD *)((char *)this + 232);
  v69[8] = *(_OWORD *)((char *)this + 216);
  v24 = *(_OWORD *)((char *)this + 248);
  v25 = *((_QWORD *)this + 33);
  v69[9] = v23;
  v69[10] = v24;
  v70 = v25;
  v26 = CoreUICallSend(v31, &v30, 1LL, 9LL, 0, &unk_18032BF41, (unsigned int)v68, v69, v29);
  v13 = v26;
  if ( v26 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x14Du, 0LL);
  else
    CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 0x4000u);
LABEL_9:
  if ( v10 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v12 )
    (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v12 + 16LL))(v12);
  return v13;
}
