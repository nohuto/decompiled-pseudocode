/*
 * XREFs of HalpEnlightenmentInitialize @ 0x14054B290
 * Callers:
 *     HalpHvInitDiscard @ 0x140C0F41C (HalpHvInitDiscard.c)
 * Callees:
 *     Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline @ 0x14054B23C (Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 HalpEnlightenmentInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 result; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v5; // [rsp+28h] [rbp-D8h]
  int v6; // [rsp+38h] [rbp-C8h]
  _DWORD v7[3]; // [rsp+3Ch] [rbp-C4h]
  __int64 v8; // [rsp+48h] [rbp-B8h]
  __int64 v9; // [rsp+50h] [rbp-B0h]
  __int64 v10; // [rsp+58h] [rbp-A8h]
  __int64 v11; // [rsp+60h] [rbp-A0h]
  __int64 v12; // [rsp+68h] [rbp-98h]
  __int64 v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  __int64 v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  __int64 v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  __int64 v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  __int64 v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  __int64 v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  __int64 v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  __int64 v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  __int64 v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  __int64 v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  __int64 v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  __int64 v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  __int64 v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  __int64 v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  __int64 v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]
  __int64 v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  __int64 v49; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  __int64 v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  __int64 v53; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1B8h] [rbp+B8h]
  __int64 v55; // [rsp+1C0h] [rbp+C0h]
  __int64 v56; // [rsp+1C8h] [rbp+C8h]
  __int64 v57; // [rsp+1D0h] [rbp+D0h]
  __int64 v58; // [rsp+1D8h] [rbp+D8h]
  __int64 v59; // [rsp+1E0h] [rbp+E0h]
  __int64 v60; // [rsp+1E8h] [rbp+E8h]
  __int64 v61; // [rsp+1F0h] [rbp+F0h]
  __int64 v62; // [rsp+1F8h] [rbp+F8h]
  __int64 v63; // [rsp+200h] [rbp+100h]
  __int64 v64; // [rsp+208h] [rbp+108h]
  __int64 v65; // [rsp+210h] [rbp+110h]
  __int64 v66; // [rsp+218h] [rbp+118h]
  __int64 v67; // [rsp+228h] [rbp+128h]
  __int64 v68; // [rsp+230h] [rbp+130h]
  __int64 v69; // [rsp+238h] [rbp+138h]
  __int64 v70; // [rsp+248h] [rbp+148h]
  __int64 v71; // [rsp+250h] [rbp+150h]
  __int64 v72; // [rsp+258h] [rbp+158h]
  __int64 v73; // [rsp+260h] [rbp+160h]
  __int64 v74; // [rsp+268h] [rbp+168h]
  __int64 v75; // [rsp+270h] [rbp+170h]
  __int64 v76; // [rsp+278h] [rbp+178h]
  __int64 v77; // [rsp+280h] [rbp+180h]
  __int64 v78; // [rsp+288h] [rbp+188h]

  memset_0(v4, 0, 0x270uLL);
  result = qword_140E00950;
  if ( qword_140E00950 )
  {
    result = guard_dispatch_icall_no_overrides(v4, v0, v1, v2);
    if ( !v6 )
    {
      if ( v7[0] )
      {
        result = (unsigned int)(v7[0] + 1);
        if ( ((unsigned int)result & v7[0]) == 0 )
        {
          HalpEnlightenment = v4[0];
          dword_140FC0EA4 = v4[1];
          dword_140FC0EBC = v7[0];
          qword_140FC0EC0 = *(_QWORD *)&v7[1];
          qword_140FC0EC8 = v8;
          qword_140FC0EE8 = v12;
          qword_140FC0EF0 = v13;
          qword_140FC0EF8 = v14;
          qword_140FC0ED0 = v9;
          qword_140FC0ED8 = v10;
          qword_140FC0EE0 = v11;
          qword_140FC0F10 = v17;
          qword_140FC0F38 = v22;
          qword_140FC0F40 = v23;
          qword_140FC0F48 = v24;
          qword_140FC0F50 = v25;
          qword_140FC0F58 = v26;
          qword_140FC0F60 = v27;
          qword_140FC0F68 = v28;
          qword_140FC1028 = v52;
          qword_140FC1030 = v53;
          qword_140FC0F70 = v29;
          qword_140FC0F78 = v30;
          qword_140FC0F80 = v31;
          qword_140FC0FA0 = v35;
          qword_140FC0F88 = v32;
          qword_140FC0F90 = v33;
          xmmword_140FC0EA8 = v5;
          qword_140FC0F00 = v15;
          qword_140FC0F08 = v16;
          qword_140FC0F18 = v18;
          qword_140FC0F20 = v19;
          qword_140FC0F28 = v20;
          qword_140FC0F30 = v21;
          qword_140FC0F98 = v34;
          qword_140FC0FA8 = v36;
          qword_140FC0FB0 = v37;
          qword_140FC0FB8 = v38;
          qword_140FC0FC0 = v39;
          qword_140FC0FC8 = v40;
          qword_140FC0FD0 = v41;
          qword_140FC0FD8 = v42;
          qword_140FC0FE0 = v43;
          qword_140FC0FE8 = v44;
          qword_140FC0FF0 = v45;
          qword_140FC0FF8 = v46;
          qword_140FC1000 = v47;
          qword_140FC1008 = v48;
          qword_140FC1010 = v49;
          qword_140FC1018 = v50;
          qword_140FC1020 = v51;
          qword_140FC1038 = v54;
          qword_140FC1040 = v55;
          qword_140FC1048 = v56;
          qword_140FC1050 = v57;
          qword_140FC1058 = v58;
          qword_140FC1060 = v59;
          qword_140FC1090 = v65;
          qword_140FC1098 = v66;
          qword_140FC10B0 = v68;
          qword_140FC10B8 = v69;
          qword_140FC1068 = v60;
          qword_140FC1070 = v61;
          qword_140FC1078 = v62;
          qword_140FC1080 = v63;
          qword_140FC1088 = v64;
          qword_140FC10C8 = v70;
          qword_140FC10D8 = v72;
          qword_140FC10D0 = v71;
          qword_140FC10E0 = v73;
          qword_140FC10E8 = v74;
          qword_140FC10F0 = v75;
          qword_140FC10A8 = v67;
          qword_140FC10F8 = v76;
          qword_140FC1100 = v77;
          result = Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline();
          if ( (_DWORD)result )
          {
            result = v78;
            qword_140FC1108 = v78;
          }
        }
      }
    }
  }
  return result;
}
