/*
 * XREFs of ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x180065358
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086EF0 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
        const struct Windows::UI::Color *a1,
        const struct LampAttributes *a2,
        struct Windows::UI::Color *a3,
        struct LampColor *a4)
{
  double v4; // xmm1_8
  double v5; // xmm8_8
  double v6; // xmm9_8
  double v7; // xmm10_8
  int v8; // eax
  double v9; // xmm4_8
  int v10; // eax
  double v11; // xmm5_8
  int v12; // eax
  double v13; // xmm6_8
  int v14; // r8d
  unsigned __int8 v15; // dl
  int v16; // r10d
  int v17; // r11d
  int v18; // esi
  double v19; // xmm12_8
  double v20; // xmm0_8
  double v21; // xmm3_8
  double v22; // xmm7_8
  double v23; // xmm1_8
  double v24; // xmm0_8
  double v25; // xmm0_8
  double v26; // xmm1_8
  double v27; // xmm14_8
  double v28; // xmm0_8
  double v29; // xmm0_8
  double v30; // xmm1_8
  double v31; // xmm13_8
  double v32; // xmm0_8
  double v33; // xmm7_8
  double v34; // xmm1_8
  double v35; // xmm12_8
  double v36; // xmm0_8
  double v37; // xmm12_8
  double v38; // [rsp+B8h] [rbp+10h]
  double v39; // [rsp+C0h] [rbp+18h]

  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  v7 = 0.0;
  v8 = *((unsigned __int8 *)a2 + 24);
  v38 = 0.0;
  if ( (_BYTE)v8 )
    v9 = 255.0 / (double)v8;
  else
    v9 = 0.0;
  v10 = *((unsigned __int8 *)a2 + 25);
  if ( (_BYTE)v10 )
    v11 = 255.0 / (double)v10;
  else
    v11 = 0.0;
  v12 = *((unsigned __int8 *)a2 + 26);
  if ( (_BYTE)v12 )
    v13 = 255.0 / (double)v12;
  else
    v13 = 0.0;
  v14 = *((unsigned __int8 *)a2 + 27);
  if ( (_BYTE)v14 )
  {
    v15 = 1;
    v39 = DOUBLE__Inf;
    v16 = *((unsigned __int8 *)a1 + 2);
    v17 = *((unsigned __int8 *)a1 + 3);
    v18 = *((unsigned __int8 *)a1 + 1);
    v19 = DOUBLE_0_5;
    v20 = (double)v14;
    do
    {
      v21 = (double)v15 / v20;
      v22 = v21 * 255.0;
      v23 = v21 * v9;
      if ( v21 * v9 <= 0.0 )
        v24 = 0.0;
      else
        v24 = (double)v18 / v23;
      v25 = (double)(int)(v24 + v19) * v23;
      v26 = v21 * v11;
      v27 = fmin(v22, v25);
      if ( v21 * v11 <= 0.0 )
        v28 = 0.0;
      else
        v28 = (double)v16 / v26;
      v29 = (double)(int)(v28 + v19) * v26;
      v30 = v21 * v13;
      v31 = fmin(v22, v29);
      if ( v21 * v13 <= 0.0 )
        v32 = 0.0;
      else
        v32 = (double)v17 / v30;
      v33 = fmin(v22, (double)(int)(v32 + v19) * v30);
      v34 = (double)(v18 - (unsigned __int8)(int)v27);
      v35 = (double)((unsigned __int8)v16 - (unsigned __int8)(int)v31);
      v36 = (double)((unsigned __int8)v17 - (unsigned __int8)(int)v33);
      v37 = v35 * v35 + v34 * v34 + v36 * v36;
      if ( v39 <= v37 )
      {
        v4 = v38;
      }
      else
      {
        v4 = (double)v15;
        v5 = v27 / v9 / v21;
        v6 = v31 / v11 / v21;
        v7 = v33 / v13 / v21;
        v38 = v4;
        if ( v37 == 0.0 )
          break;
        v39 = v37;
      }
      v19 = DOUBLE_0_5;
      ++v15;
      v20 = (double)v14;
    }
    while ( v15 <= (unsigned __int8)v14 );
  }
  if ( a4 )
  {
    *(_BYTE *)a4 = (int)v5;
    *((_BYTE *)a4 + 1) = (int)v6;
    *((_BYTE *)a4 + 2) = (int)v7;
    *((_BYTE *)a4 + 3) = (int)v4;
  }
}
