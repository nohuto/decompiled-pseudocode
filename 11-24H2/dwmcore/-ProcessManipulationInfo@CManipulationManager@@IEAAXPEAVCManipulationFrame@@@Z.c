/*
 * XREFs of ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190190
 * Callers:
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18018FF90 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190634 (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801907D8 (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190A38 (-RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190ACC (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190EF4 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?Update@ManipulationThreadTelemetryData@@QEAAXAEBUtagPOINTER_INFO@@AEBUtagTELEMETRY_POINTER_FRAME_TIMES@@I@Z @ 0x180191020 (-Update@ManipulationThreadTelemetryData@@QEAAXAEBUtagPOINTER_INFO@@AEBUtagTELEMETRY_POINTER_FRAM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@444444443@Z @ 0x180191608 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U1@@-$_.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CManipulationManager::ProcessManipulationInfo(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  int v2; // eax
  unsigned int *v3; // r9
  unsigned int v6; // r9d
  __int128 *v7; // rsi
  __int128 v8; // xmm1
  int *v9; // r14
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // r8d
  int v17; // r9d
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm1
  __int128 v51; // xmm1
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  int v77; // [rsp+90h] [rbp-80h] BYREF
  int v78; // [rsp+94h] [rbp-7Ch] BYREF
  int v79; // [rsp+98h] [rbp-78h] BYREF
  int v80; // [rsp+9Ch] [rbp-74h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v82; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v84; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v86; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v87; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v89; // [rsp+E0h] [rbp-30h] BYREF
  __int128 v90; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v91; // [rsp+100h] [rbp-10h]
  __int128 v92; // [rsp+110h] [rbp+0h]
  __int128 v93; // [rsp+120h] [rbp+10h]
  __int128 v94; // [rsp+130h] [rbp+20h]
  __int128 v95; // [rsp+140h] [rbp+30h]
  __int128 v96; // [rsp+150h] [rbp+40h]
  __int128 v97; // [rsp+160h] [rbp+50h]
  __int128 v98; // [rsp+170h] [rbp+60h]

  v2 = *((_DWORD *)a2 + 94);
  v3 = (unsigned int *)((char *)this + 268);
  if ( *((_DWORD *)this + 66) != v2 )
  {
    ++*v3;
    *((_DWORD *)this + 66) = v2;
  }
  v6 = *v3;
  v7 = (__int128 *)((char *)a2 + 32);
  v8 = *((_OWORD *)a2 + 3);
  v9 = (int *)((char *)a2 + 368);
  v90 = *((_OWORD *)a2 + 2);
  v10 = *((_OWORD *)a2 + 4);
  v91 = v8;
  v11 = *((_OWORD *)a2 + 5);
  v92 = v10;
  v12 = *((_OWORD *)a2 + 6);
  v93 = v11;
  v13 = *((_OWORD *)a2 + 7);
  v94 = v12;
  v14 = *((_OWORD *)a2 + 8);
  v95 = v13;
  v15 = *((_OWORD *)a2 + 10);
  v96 = v14;
  v97 = *((_OWORD *)a2 + 9);
  v98 = v15;
  ManipulationThreadTelemetryData::Update(
    (struct CManipulationFrame *)((char *)a2 + 184),
    (struct CManipulationFrame *)((char *)a2 + 368),
    (const struct tagTELEMETRY_POINTER_FRAME_TIMES *)&v90,
    v6);
  if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
  {
    v18 = *v7;
    v19 = v7[1];
    v77 = *v9;
    v90 = v18;
    v91 = v19;
    v20 = v7[3];
    v92 = v7[2];
    v93 = v20;
    v21 = v7[5];
    v94 = v7[4];
    v95 = v21;
    v22 = v7[7];
    v96 = v7[6];
    v97 = v22;
    v23 = v7[1];
    v98 = v7[8];
    v24 = *v7;
    v81 = *((_QWORD *)&v93 + 1);
    v90 = v24;
    v91 = v23;
    v25 = v7[3];
    v92 = v7[2];
    v93 = v25;
    v26 = v7[5];
    v94 = v7[4];
    v27 = v7[6];
    v95 = v26;
    v28 = v7[7];
    v96 = v27;
    v29 = v7[8];
    v97 = v28;
    v30 = v7[1];
    v98 = v29;
    v31 = *v7;
    v82 = v93;
    v90 = v31;
    v32 = v7[2];
    v91 = v30;
    v33 = v7[3];
    v92 = v32;
    v34 = v7[4];
    v93 = v33;
    v35 = v7[5];
    v94 = v34;
    v36 = v7[6];
    v95 = v35;
    v37 = v7[7];
    v96 = v36;
    v38 = v7[8];
    v97 = v37;
    v39 = v7[1];
    v98 = v38;
    v40 = *v7;
    v83 = *((_QWORD *)&v92 + 1);
    v90 = v40;
    v41 = v7[2];
    v91 = v39;
    v42 = v7[3];
    v92 = v41;
    v43 = v7[4];
    v93 = v42;
    v44 = v7[5];
    v94 = v43;
    v45 = v7[6];
    v95 = v44;
    v46 = v7[7];
    v96 = v45;
    v97 = v46;
    v47 = v7[1];
    v98 = v7[8];
    v48 = *v7;
    v84 = v92;
    v90 = v48;
    v91 = v47;
    v49 = v7[3];
    v92 = v7[2];
    v93 = v49;
    v50 = v7[5];
    v94 = v7[4];
    v95 = v50;
    v51 = v7[7];
    v96 = v7[6];
    v97 = v51;
    v52 = v7[1];
    v98 = v7[8];
    v53 = *v7;
    v85 = *((_QWORD *)&v91 + 1);
    v90 = v53;
    v91 = v52;
    v54 = v7[3];
    v92 = v7[2];
    v55 = v7[4];
    v93 = v54;
    v56 = v7[5];
    v94 = v55;
    v57 = v7[6];
    v95 = v56;
    v58 = v7[7];
    v96 = v57;
    v59 = v7[8];
    v97 = v58;
    v60 = v7[1];
    v98 = v59;
    v61 = *v7;
    v86 = v91;
    v90 = v61;
    v62 = v7[2];
    v91 = v60;
    v63 = v7[3];
    v92 = v62;
    v64 = v7[4];
    v93 = v63;
    v65 = v7[5];
    v94 = v64;
    v66 = v7[6];
    v95 = v65;
    v67 = v7[7];
    v96 = v66;
    v68 = v7[8];
    v97 = v67;
    v69 = v7[1];
    v98 = v68;
    v70 = *v7;
    v87 = *((_QWORD *)&v90 + 1);
    v90 = v70;
    v71 = v7[2];
    v91 = v69;
    v72 = v7[3];
    v92 = v71;
    v73 = v7[4];
    v93 = v72;
    v74 = v7[5];
    v94 = v73;
    v95 = v74;
    v75 = v7[7];
    v96 = v7[6];
    v76 = v7[8];
    v97 = v75;
    v98 = v76;
    v88 = v90;
    v89 = *((_QWORD *)a2 + 56);
    v78 = *((_DWORD *)a2 + 4);
    v79 = *((_DWORD *)a2 + 48);
    v80 = *((_DWORD *)a2 + 6);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&v90,
      (unsigned int)&unk_1803CA47F,
      v16,
      v17,
      (__int64)&v80,
      (__int64)&v79,
      (__int64)&v78,
      (__int64)&v89,
      (__int64)&v88,
      (__int64)&v87,
      (__int64)&v86,
      (__int64)&v85,
      (__int64)&v84,
      (__int64)&v83,
      (__int64)&v82,
      (__int64)&v81,
      (__int64)&v77);
  }
  CManipulationManager::ProcessFrameInputPreTargeting(this, a2);
  CManipulationManager::CalculateFrameTargets(this, a2);
  CManipulationManager::TargetFrameInput(this, a2);
  CManipulationManager::RouteAllFrames(this, a2);
  CManipulationManager::ProcessFrameInputPostTargeting(this, a2);
}
