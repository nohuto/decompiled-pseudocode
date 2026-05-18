/*
 * XREFs of sub_1800590A0 @ 0x1800590A0
 * Callers:
 *     sub_180057450 @ 0x180057450 (sub_180057450.c)
 *     sub_180057518 @ 0x180057518 (sub_180057518.c)
 *     sub_18005755C @ 0x18005755C (sub_18005755C.c)
 *     sub_180057600 @ 0x180057600 (sub_180057600.c)
 * Callees:
 *     sub_180017828 @ 0x180017828 (sub_180017828.c)
 */

_OWORD *__fastcall sub_1800590A0(__int64 a1)
{
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  _OWORD *v24; // rax
  __int128 v25; // xmm2
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 v28; // r9
  _OWORD *v29; // rax
  __int128 v30; // xmm2
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int64 v33; // r9
  __int128 *v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm3
  __int128 v37; // xmm2
  __int64 v38; // r9
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  _OWORD *result; // rax
  __int128 v44; // xmm2
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int64 v47; // r9
  __int128 v48[4]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v49[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v50[4]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v51[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v52[4]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v53[4]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v54[4]; // [rsp+1A0h] [rbp+A0h] BYREF

  v1 = *(_OWORD *)(a1 + 692);
  v54[0] = *(_OWORD *)(a1 + 676);
  v2 = *(_OWORD *)(a1 + 708);
  v54[1] = v1;
  v3 = *(_OWORD *)(a1 + 724);
  v54[2] = v2;
  v4 = *(_OWORD *)(a1 + 1252);
  v54[3] = v3;
  v5 = *(_OWORD *)(a1 + 1268);
  v49[0] = v4;
  v6 = *(_OWORD *)(a1 + 1284);
  v49[1] = v5;
  v7 = *(_OWORD *)(a1 + 1300);
  v49[2] = v6;
  v8 = *(_OWORD *)(a1 + 804);
  v49[3] = v7;
  v9 = *(_OWORD *)(a1 + 820);
  v51[0] = v8;
  v10 = *(_OWORD *)(a1 + 836);
  v51[1] = v9;
  v11 = *(_OWORD *)(a1 + 852);
  v51[2] = v10;
  v12 = *(_OWORD *)(a1 + 932);
  v51[3] = v11;
  v13 = *(_OWORD *)(a1 + 948);
  v48[0] = v12;
  v14 = *(_OWORD *)(a1 + 964);
  v48[1] = v13;
  v15 = *(_OWORD *)(a1 + 980);
  v48[2] = v14;
  v16 = *(_OWORD *)(a1 + 1124);
  v48[3] = v15;
  v17 = *(_OWORD *)(a1 + 1140);
  v50[0] = v16;
  v18 = *(_OWORD *)(a1 + 1156);
  v50[1] = v17;
  v19 = *(_OWORD *)(a1 + 1172);
  v50[2] = v18;
  v20 = *(_OWORD *)(a1 + 1444);
  v50[3] = v19;
  v21 = *(_OWORD *)(a1 + 1460);
  v53[0] = v20;
  v22 = *(_OWORD *)(a1 + 1476);
  v53[1] = v21;
  v23 = *(_OWORD *)(a1 + 1492);
  v53[2] = v22;
  v53[3] = v23;
  sub_180017828((__int64)v52, v53, v50);
  v24 = sub_180017828((__int64)v53, v54, v49);
  v25 = v24[1];
  v26 = v24[2];
  v27 = v24[3];
  *(_OWORD *)(v28 + 740) = *v24;
  *(_OWORD *)(v28 + 756) = v25;
  *(_OWORD *)(v28 + 772) = v26;
  *(_OWORD *)(v28 + 788) = v27;
  v29 = sub_180017828((__int64)v54, v48, v49);
  v30 = v29[1];
  v31 = v29[2];
  v32 = v29[3];
  *(_OWORD *)(v33 + 996) = *v29;
  *(_OWORD *)(v33 + 1012) = v30;
  *(_OWORD *)(v33 + 1028) = v31;
  *(_OWORD *)(v33 + 1044) = v32;
  v34 = sub_180017828((__int64)v48, v50, v51);
  v35 = v34[3];
  v36 = *v34;
  v37 = v34[1];
  *(_OWORD *)(v38 + 1092) = v34[2];
  v39 = v52[1];
  *(_OWORD *)(v38 + 1108) = v35;
  v40 = v52[0];
  *(_OWORD *)(v38 + 1060) = v36;
  *(_OWORD *)(v38 + 1076) = v37;
  *(_OWORD *)(v38 + 1380) = v40;
  v41 = v52[2];
  *(_OWORD *)(v38 + 1396) = v39;
  v42 = v52[3];
  *(_OWORD *)(v38 + 1412) = v41;
  *(_OWORD *)(v38 + 1428) = v42;
  result = sub_180017828((__int64)v48, v52, v51);
  v44 = result[1];
  v45 = result[2];
  v46 = result[3];
  *(_OWORD *)(v47 + 1316) = *result;
  *(_OWORD *)(v47 + 1332) = v44;
  *(_OWORD *)(v47 + 1348) = v45;
  *(_OWORD *)(v47 + 1364) = v46;
  return result;
}
