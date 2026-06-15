/*
 * XREFs of ?IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayElementErrorDetails@@@Z @ 0x18006B484
 * Callers:
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18006B310 (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x180146238 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 */

__int64 __fastcall IsValidMicArrayGeometry(
        const struct KSAUDIO_MIC_ARRAY_GEOMETRY *a1,
        const unsigned __int16 *a2,
        int *a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  unsigned int *v7; // r12
  const char *v8; // r8
  int usNumberOfMicrophones; // edi
  int v10; // eax
  int v11; // ecx
  SHORT wVerticalAngleBegin; // dx
  int v13; // eax
  USHORT usFrequencyBandLo; // cx
  int v15; // edx
  char v16; // r11
  char v17; // r14
  char v18; // r15
  unsigned __int16 v19; // bp
  SHORT *p_wVerticalAngle; // r10
  __int16 v21; // r8
  SHORT v22; // cx
  __int16 v23; // si
  unsigned __int16 i; // r8
  int v25; // ecx

  v5 = 0;
  if ( !a1 )
  {
    v8 = "209";
    goto LABEL_4;
  }
  v7 = a5;
  if ( !a5 )
  {
    v8 = "210";
LABEL_4:
    v5 = -2147024809;
    DumpTraceWin32((const char *)a1, "IsValidMicArrayGeometry", v8, -2147024809);
    return v5;
  }
  usNumberOfMicrophones = a1->usNumberOfMicrophones;
  v10 = 4096;
  if ( (_WORD)usNumberOfMicrophones )
    v10 = 0;
  v11 = v10;
  if ( a2 && *a2 != (_WORD)usNumberOfMicrophones )
    v11 = v10 | 1;
  if ( a3 && usNumberOfMicrophones > *a3 )
    v11 |= 2u;
  if ( a1->usVersion != 256 )
    v11 |= 8u;
  if ( a1->usMicArrayType && (unsigned int)a1->usMicArrayType - 1 >= 2 )
    v11 |= 0x10u;
  if ( (unsigned __int16)(a1->wHorizontalAngleBegin + 31416) > 0x7AB8u )
    v11 |= 0x100u;
  if ( a1->wHorizontalAngleEnd > 0x7AB8u )
    v11 |= 0x200u;
  wVerticalAngleBegin = a1->wVerticalAngleBegin;
  if ( (unsigned __int16)(wVerticalAngleBegin + 15708) > 0x7AB8u )
    v11 |= 0x20u;
  if ( (unsigned __int16)(a1->wVerticalAngleEnd + 15708) > 0x7AB8u )
    v11 |= 0x40u;
  if ( a1->wHorizontalAngleBegin > 0 || a1->wHorizontalAngleEnd < 0 )
    v11 |= 0x400u;
  v13 = v11 | 0x80;
  if ( wVerticalAngleBegin <= a1->wVerticalAngleEnd )
    v13 = v11;
  usFrequencyBandLo = a1->usFrequencyBandLo;
  v15 = v13 | 0x800;
  if ( usFrequencyBandLo < a1->usFrequencyBandHi )
    v15 = v13;
  if ( a1->usFrequencyBandHi < 0x14u || usFrequencyBandLo > 0x4E20u )
    v15 |= 0x20000u;
  v16 = 0;
  v17 = 1;
  v18 = 1;
  v19 = 0;
  if ( !(_WORD)usNumberOfMicrophones )
    goto LABEL_59;
  p_wVerticalAngle = &a1->KsMicCoord[0].wVerticalAngle;
  do
  {
    v21 = *(p_wVerticalAngle - 4);
    if ( v21
      && *(p_wVerticalAngle - 4) != 1
      && *(p_wVerticalAngle - 4) != 2
      && *(p_wVerticalAngle - 4) != 3
      && (unsigned int)(unsigned __int16)*(p_wVerticalAngle - 4) - 4 > 1 )
    {
      if ( (v21 & 0xF) == 0xF )
        v15 |= 4u;
      else
        v15 |= 0x2000u;
    }
    v22 = p_wVerticalAngle[1];
    if ( (unsigned __int16)(v22 + 31416) > 0xF570u )
      v15 |= 0x8000u;
    if ( (unsigned __int16)(*p_wVerticalAngle + 15708) > 0x7AB8u )
      v15 |= 0x4000u;
    if ( (*p_wVerticalAngle == -15708 || *p_wVerticalAngle == 15708) && v22 )
      v15 |= 0x100000u;
    if ( (unsigned __int16)(v22 + 15707) <= 0x7AB6u )
      v16 = 1;
    if ( v22 || *p_wVerticalAngle )
      v17 = 0;
    v23 = *(p_wVerticalAngle - 2);
    if ( v23 || *(p_wVerticalAngle - 1) )
      v18 = 0;
    for ( i = v19 + 1; i < (unsigned __int16)usNumberOfMicrophones; ++i )
    {
      if ( *(p_wVerticalAngle - 3) == a1->KsMicCoord[i].wXCoord
        && v23 == a1->KsMicCoord[i].wYCoord
        && *(p_wVerticalAngle - 1) == a1->KsMicCoord[i].wZCoord
        && p_wVerticalAngle[1] == a1->KsMicCoord[i].wHorizontalAngle
        && *p_wVerticalAngle == a1->KsMicCoord[i].wVerticalAngle )
      {
        v15 |= 0x10000u;
      }
    }
    p_wVerticalAngle += 6;
    ++v19;
  }
  while ( v19 < (unsigned __int16)usNumberOfMicrophones );
  v7 = a5;
  if ( v18 )
  {
    if ( v17 )
LABEL_59:
      v15 |= 0x40000u;
  }
  v25 = v15 | 0x80000;
  if ( v16 )
    v25 = v15;
  *v7 = v25;
  return v5;
}
