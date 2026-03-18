/*
 * XREFs of HalpEnlightenmentInitialize @ 0x1405489A0
 * Callers:
 *     HalpHvInitDiscard @ 0x140BFE41C (HalpHvInitDiscard.c)
 * Callees:
 *     Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline @ 0x14054894C (Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 HalpEnlightenmentInitialize()
{
  __int64 result; // rax
  _DWORD v1[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v2; // [rsp+28h] [rbp-D8h]
  int v3; // [rsp+38h] [rbp-C8h]
  _DWORD v4[3]; // [rsp+3Ch] [rbp-C4h]
  __int64 v5; // [rsp+48h] [rbp-B8h]
  __int64 v6; // [rsp+50h] [rbp-B0h]
  __int64 v7; // [rsp+58h] [rbp-A8h]
  __int64 v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  __int64 v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  __int64 v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  __int64 v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  __int64 v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  __int64 v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  __int64 v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  __int64 v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  __int64 v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  __int64 v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  __int64 v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  __int64 v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  __int64 v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  __int64 v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  __int64 v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  __int64 v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h]
  __int64 v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]
  __int64 v42; // [rsp+170h] [rbp+70h]
  __int64 v43; // [rsp+178h] [rbp+78h]
  __int64 v44; // [rsp+180h] [rbp+80h]
  __int64 v45; // [rsp+188h] [rbp+88h]
  __int64 v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]
  __int64 v48; // [rsp+1A0h] [rbp+A0h]
  __int64 v49; // [rsp+1A8h] [rbp+A8h]
  __int64 v50; // [rsp+1B0h] [rbp+B0h]
  __int64 v51; // [rsp+1B8h] [rbp+B8h]
  __int64 v52; // [rsp+1C0h] [rbp+C0h]
  __int64 v53; // [rsp+1C8h] [rbp+C8h]
  __int64 v54; // [rsp+1D0h] [rbp+D0h]
  __int64 v55; // [rsp+1D8h] [rbp+D8h]
  __int64 v56; // [rsp+1E0h] [rbp+E0h]
  __int64 v57; // [rsp+1E8h] [rbp+E8h]
  __int64 v58; // [rsp+1F0h] [rbp+F0h]
  __int64 v59; // [rsp+1F8h] [rbp+F8h]
  __int64 v60; // [rsp+200h] [rbp+100h]
  __int64 v61; // [rsp+208h] [rbp+108h]
  __int64 v62; // [rsp+210h] [rbp+110h]
  __int64 v63; // [rsp+218h] [rbp+118h]
  __int64 v64; // [rsp+228h] [rbp+128h]
  __int64 v65; // [rsp+230h] [rbp+130h]
  __int64 v66; // [rsp+238h] [rbp+138h]
  __int64 v67; // [rsp+248h] [rbp+148h]
  __int64 v68; // [rsp+250h] [rbp+150h]
  __int64 v69; // [rsp+258h] [rbp+158h]
  __int64 v70; // [rsp+260h] [rbp+160h]
  __int64 v71; // [rsp+268h] [rbp+168h]
  __int64 v72; // [rsp+270h] [rbp+170h]
  __int64 v73; // [rsp+278h] [rbp+178h]
  __int64 v74; // [rsp+280h] [rbp+180h]
  __int64 v75; // [rsp+288h] [rbp+188h]

  memset_0(v1, 0, 0x270uLL);
  result = qword_140E00950;
  if ( qword_140E00950 )
  {
    result = guard_dispatch_icall_no_overrides(v1);
    if ( !v3 )
    {
      if ( v4[0] )
      {
        result = (unsigned int)(v4[0] + 1);
        if ( ((unsigned int)result & v4[0]) == 0 )
        {
          HalpEnlightenment = v1[0];
          dword_140FC0704 = v1[1];
          dword_140FC071C = v4[0];
          qword_140FC0720 = *(_QWORD *)&v4[1];
          qword_140FC0728 = v5;
          qword_140FC0748 = v9;
          qword_140FC0750 = v10;
          qword_140FC0758 = v11;
          qword_140FC0730 = v6;
          qword_140FC0738 = v7;
          qword_140FC0740 = v8;
          qword_140FC0770 = v14;
          qword_140FC0798 = v19;
          qword_140FC07A0 = v20;
          qword_140FC07A8 = v21;
          qword_140FC07B0 = v22;
          qword_140FC07B8 = v23;
          qword_140FC07C0 = v24;
          qword_140FC07C8 = v25;
          qword_140FC0888 = v49;
          qword_140FC0890 = v50;
          qword_140FC07D0 = v26;
          qword_140FC07D8 = v27;
          qword_140FC07E0 = v28;
          qword_140FC0800 = v32;
          qword_140FC07E8 = v29;
          qword_140FC07F0 = v30;
          xmmword_140FC0708 = v2;
          qword_140FC0760 = v12;
          qword_140FC0768 = v13;
          qword_140FC0778 = v15;
          qword_140FC0780 = v16;
          qword_140FC0788 = v17;
          qword_140FC0790 = v18;
          qword_140FC07F8 = v31;
          qword_140FC0808 = v33;
          qword_140FC0810 = v34;
          qword_140FC0818 = v35;
          qword_140FC0820 = v36;
          qword_140FC0828 = v37;
          qword_140FC0830 = v38;
          qword_140FC0838 = v39;
          qword_140FC0840 = v40;
          qword_140FC0848 = v41;
          qword_140FC0850 = v42;
          qword_140FC0858 = v43;
          qword_140FC0860 = v44;
          qword_140FC0868 = v45;
          qword_140FC0870 = v46;
          qword_140FC0878 = v47;
          qword_140FC0880 = v48;
          qword_140FC0898 = v51;
          qword_140FC08A0 = v52;
          qword_140FC08A8 = v53;
          qword_140FC08B0 = v54;
          qword_140FC08B8 = v55;
          qword_140FC08C0 = v56;
          qword_140FC08F0 = v62;
          qword_140FC08F8 = v63;
          qword_140FC0910 = v65;
          qword_140FC0918 = v66;
          qword_140FC08C8 = v57;
          qword_140FC08D0 = v58;
          qword_140FC08D8 = v59;
          qword_140FC08E0 = v60;
          qword_140FC08E8 = v61;
          qword_140FC0928 = v67;
          qword_140FC0938 = v69;
          qword_140FC0930 = v68;
          qword_140FC0940 = v70;
          qword_140FC0948 = v71;
          qword_140FC0950 = v72;
          qword_140FC0908 = v64;
          qword_140FC0958 = v73;
          qword_140FC0960 = v74;
          result = Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline();
          if ( (_DWORD)result )
          {
            result = v75;
            qword_140FC0968 = v75;
          }
        }
      }
    }
  }
  return result;
}
