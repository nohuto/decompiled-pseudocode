/*
 * XREFs of HalpEnlightenmentInitialize @ 0x140548B50
 * Callers:
 *     HalpHvInitDiscard @ 0x140C1141C (HalpHvInitDiscard.c)
 * Callees:
 *     Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline @ 0x140548AFC (Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 HalpEnlightenmentInitialize()
{
  __int64 v0; // rdx
  __int64 result; // rax
  _DWORD v2[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v3; // [rsp+28h] [rbp-D8h]
  int v4; // [rsp+38h] [rbp-C8h]
  _DWORD v5[3]; // [rsp+3Ch] [rbp-C4h]
  __int64 v6; // [rsp+48h] [rbp-B8h]
  __int64 v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  __int64 v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  __int64 v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  __int64 v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  __int64 v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  __int64 v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  __int64 v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  __int64 v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  __int64 v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  __int64 v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  __int64 v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  __int64 v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  __int64 v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  __int64 v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  __int64 v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  __int64 v43; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  __int64 v45; // [rsp+180h] [rbp+80h]
  __int64 v46; // [rsp+188h] [rbp+88h]
  __int64 v47; // [rsp+190h] [rbp+90h]
  __int64 v48; // [rsp+198h] [rbp+98h]
  __int64 v49; // [rsp+1A0h] [rbp+A0h]
  __int64 v50; // [rsp+1A8h] [rbp+A8h]
  __int64 v51; // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  __int64 v53; // [rsp+1C0h] [rbp+C0h]
  __int64 v54; // [rsp+1C8h] [rbp+C8h]
  __int64 v55; // [rsp+1D0h] [rbp+D0h]
  __int64 v56; // [rsp+1D8h] [rbp+D8h]
  __int64 v57; // [rsp+1E0h] [rbp+E0h]
  __int64 v58; // [rsp+1E8h] [rbp+E8h]
  __int64 v59; // [rsp+1F0h] [rbp+F0h]
  __int64 v60; // [rsp+1F8h] [rbp+F8h]
  __int64 v61; // [rsp+200h] [rbp+100h]
  __int64 v62; // [rsp+208h] [rbp+108h]
  __int64 v63; // [rsp+210h] [rbp+110h]
  __int64 v64; // [rsp+218h] [rbp+118h]
  __int64 v65; // [rsp+228h] [rbp+128h]
  __int64 v66; // [rsp+230h] [rbp+130h]
  __int64 v67; // [rsp+238h] [rbp+138h]
  __int64 v68; // [rsp+248h] [rbp+148h]
  __int64 v69; // [rsp+250h] [rbp+150h]
  __int64 v70; // [rsp+258h] [rbp+158h]
  __int64 v71; // [rsp+260h] [rbp+160h]
  __int64 v72; // [rsp+268h] [rbp+168h]
  __int64 v73; // [rsp+270h] [rbp+170h]
  __int64 v74; // [rsp+278h] [rbp+178h]
  __int64 v75; // [rsp+280h] [rbp+180h]
  __int64 v76; // [rsp+288h] [rbp+188h]

  memset_0(v2, 0, 0x270uLL);
  result = qword_140E00950;
  if ( qword_140E00950 )
  {
    result = guard_dispatch_icall_no_overrides(v2, v0);
    if ( !v4 )
    {
      if ( v5[0] )
      {
        result = (unsigned int)(v5[0] + 1);
        if ( ((unsigned int)result & v5[0]) == 0 )
        {
          HalpEnlightenment = v2[0];
          dword_140FC1104 = v2[1];
          dword_140FC111C = v5[0];
          qword_140FC1120 = *(_QWORD *)&v5[1];
          qword_140FC1128 = v6;
          qword_140FC1148 = v10;
          qword_140FC1150 = v11;
          qword_140FC1158 = v12;
          qword_140FC1130 = v7;
          qword_140FC1138 = v8;
          qword_140FC1140 = v9;
          qword_140FC1170 = v15;
          qword_140FC1198 = v20;
          qword_140FC11A0 = v21;
          qword_140FC11A8 = v22;
          qword_140FC11B0 = v23;
          qword_140FC11B8 = v24;
          qword_140FC11C0 = v25;
          qword_140FC11C8 = v26;
          qword_140FC1288 = v50;
          qword_140FC1290 = v51;
          qword_140FC11D0 = v27;
          qword_140FC11D8 = v28;
          qword_140FC11E0 = v29;
          qword_140FC1200 = v33;
          qword_140FC11E8 = v30;
          qword_140FC11F0 = v31;
          xmmword_140FC1108 = v3;
          qword_140FC1160 = v13;
          qword_140FC1168 = v14;
          qword_140FC1178 = v16;
          qword_140FC1180 = v17;
          qword_140FC1188 = v18;
          qword_140FC1190 = v19;
          qword_140FC11F8 = v32;
          qword_140FC1208 = v34;
          qword_140FC1210 = v35;
          qword_140FC1218 = v36;
          qword_140FC1220 = v37;
          qword_140FC1228 = v38;
          qword_140FC1230 = v39;
          qword_140FC1238 = v40;
          qword_140FC1240 = v41;
          qword_140FC1248 = v42;
          qword_140FC1250 = v43;
          qword_140FC1258 = v44;
          qword_140FC1260 = v45;
          qword_140FC1268 = v46;
          qword_140FC1270 = v47;
          qword_140FC1278 = v48;
          qword_140FC1280 = v49;
          qword_140FC1298 = v52;
          qword_140FC12A0 = v53;
          qword_140FC12A8 = v54;
          qword_140FC12B0 = v55;
          qword_140FC12B8 = v56;
          qword_140FC12C0 = v57;
          qword_140FC12F0 = v63;
          qword_140FC12F8 = v64;
          qword_140FC1310 = v66;
          qword_140FC1318 = v67;
          qword_140FC12C8 = v58;
          qword_140FC12D0 = v59;
          qword_140FC12D8 = v60;
          qword_140FC12E0 = v61;
          qword_140FC12E8 = v62;
          qword_140FC1328 = v68;
          qword_140FC1338 = v70;
          qword_140FC1330 = v69;
          qword_140FC1340 = v71;
          qword_140FC1348 = v72;
          qword_140FC1350 = v73;
          qword_140FC1308 = v65;
          qword_140FC1358 = v74;
          qword_140FC1360 = v75;
          result = Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline();
          if ( (_DWORD)result )
          {
            result = v76;
            qword_140FC1368 = v76;
          }
        }
      }
    }
  }
  return result;
}
