/*
 * XREFs of ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x18029582C
 * Callers:
 *     ?ProcessInjectManipulation@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_INJECTMANIPULATION@@PEBXI@Z @ 0x180295A38 (-ProcessInjectManipulation@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_IN.c)
 *     ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802A5FD0 (-CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x18020DB3C (-Update@CManipulation@@QEAAJPEAUManipulationData@@@Z.c)
 *     ??0ManipulationData@@QEAA@XZ @ 0x180214594 (--0ManipulationData@@QEAA@XZ.c)
 */

__int64 __fastcall CManipulation::InjectManipulation(CManipulation *this, const struct InjectManipulationArgs *a2)
{
  int *v2; // r9
  __int64 v3; // xmm0_8
  __int64 v4; // xmm1_8
  bool v5; // cf
  int v6; // eax
  int v7; // ecx
  __int64 v8; // xmm0_8
  int v9; // eax
  __int64 v10; // xmm0_8
  bool v11; // dl
  __int64 v12; // xmm0_8
  __int64 v13; // xmm1_8
  __int64 v14; // r8
  CManipulation *v15; // r10
  __int64 v17; // [rsp+20h] [rbp-69h] BYREF
  int v18; // [rsp+28h] [rbp-61h]
  __int64 v19; // [rsp+2Ch] [rbp-5Dh]
  int v20; // [rsp+34h] [rbp-55h]
  __int64 v21; // [rsp+38h] [rbp-51h]
  int v22; // [rsp+40h] [rbp-49h]
  __int64 v23; // [rsp+44h] [rbp-45h]
  int v24; // [rsp+4Ch] [rbp-3Dh]
  int v25; // [rsp+50h] [rbp-39h]
  __int64 v26; // [rsp+54h] [rbp-35h]
  int v27; // [rsp+5Ch] [rbp-2Dh]
  __int64 v28; // [rsp+A0h] [rbp+17h]
  int v29; // [rsp+A8h] [rbp+1Fh]
  __int64 v30; // [rsp+ACh] [rbp+23h]
  int v31; // [rsp+B4h] [rbp+2Bh]
  int v32; // [rsp+B8h] [rbp+2Fh]
  int v33; // [rsp+BCh] [rbp+33h]
  int v34; // [rsp+C0h] [rbp+37h]
  int v35; // [rsp+C4h] [rbp+3Bh]
  int v36; // [rsp+C8h] [rbp+3Fh]
  int v37; // [rsp+CCh] [rbp+43h]
  int v38; // [rsp+D0h] [rbp+47h]
  char v39; // [rsp+D4h] [rbp+4Bh]

  ManipulationData::ManipulationData((ManipulationData *)&v17);
  v3 = *((_QWORD *)v2 + 5);
  v4 = *(_QWORD *)(v2 + 7);
  v18 = v2[9];
  v20 = v2[12];
  v22 = v2[15];
  v24 = v2[18];
  v27 = v2[29];
  v29 = v2[22];
  v31 = v2[25];
  v33 = *v2;
  v34 = v2[30];
  v35 = v2[31];
  v5 = v2[1] != 0;
  v19 = v3;
  v6 = v2[2];
  v7 = v5 ? 4 : 0;
  v21 = *(_QWORD *)(v2 + 13);
  v8 = *((_QWORD *)v2 + 8);
  v5 = v6 != 0;
  v9 = v2[3];
  v36 = v7;
  v23 = v8;
  LODWORD(v8) = v2[19];
  v37 = v5 ? 4 : 0;
  v25 = v8;
  v10 = *((_QWORD *)v2 + 10);
  v11 = v2[4] != 0;
  v38 = v9 != 0 ? 4 : 0;
  v28 = v10;
  v12 = *(_QWORD *)(v2 + 23);
  v5 = v2[5] != 0;
  v17 = v4;
  v13 = *(_QWORD *)(v2 + 27);
  v30 = v12;
  v32 = v2[26];
  v39 = (v5 ? 2 : 0) | v39 & 0xFC | v11 & 0xFD;
  v26 = v13;
  return CManipulation::Update(v15, (struct ManipulationData *)&v17, v14, (int)v2);
}
