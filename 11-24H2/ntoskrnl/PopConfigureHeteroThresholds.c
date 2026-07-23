/*
 * XREFs of PopConfigureHeteroThresholds @ 0x140A20D48
 * Callers:
 *     PopConfigureHeteroPolicies @ 0x140A205E0 (PopConfigureHeteroPolicies.c)
 * Callees:
 *     Feature_UpperThresholdInheritance__private_ReportDeviceUsage @ 0x14049FF14 (Feature_UpperThresholdInheritance__private_ReportDeviceUsage.c)
 */

__int64 __fastcall PopConfigureHeteroThresholds(__int64 a1, unsigned __int8 a2)
{
  _BYTE *v3; // r15
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // r14
  __int64 *v6; // r9
  signed __int64 v7; // r10
  unsigned __int8 v9; // di
  unsigned __int8 v10; // si
  __int64 v11; // r13
  __int64 v12; // r12
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // r10
  _BYTE *v18; // r9
  unsigned int v19; // edx
  __int64 v20; // r11
  unsigned __int8 v21; // cl
  __int64 v22; // r8
  unsigned __int8 v23; // al
  unsigned __int8 v24; // cl
  unsigned __int8 v25; // al
  __int64 result; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int128 v29; // [rsp+20h] [rbp-38h]

  v3 = &unk_140E0B424;
  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  *(_QWORD *)&v29 = 0LL;
  v7 = 0LL;
  v9 = a2;
  v10 = a2;
  v11 = 7LL;
  do
  {
    v12 = *((unsigned int *)v3 - 1);
    if ( !*v3 )
    {
      v4 = 0;
      v5 = 0;
      v6 = 0LL;
      v9 = a2;
      v10 = a2;
    }
    if ( !(_DWORD)v12 )
    {
LABEL_9:
      v6 = &PpmCurrentProfile[0][61 * dword_140F0B38C + 5];
      v7 = v29 | 0xF000000000000000uLL;
      *(_QWORD *)&v29 = v29 | 0xF000000000000000uLL;
      goto LABEL_10;
    }
    if ( (_DWORD)v12 == 1 )
    {
      v28 = PpmEntryLevelPerfProfile;
      if ( !PpmEntryLevelPerfProfile )
        goto LABEL_10;
      goto LABEL_51;
    }
    if ( (_DWORD)v12 != 2 )
    {
      if ( (_DWORD)v12 != 3 )
      {
        switch ( (_DWORD)v12 )
        {
          case 4:
            goto LABEL_9;
          case 5:
            v27 = PpmEcoQosProfile;
            break;
          case 6:
            v27 = PpmUtilityQosProfile;
            break;
          default:
            goto LABEL_9;
        }
        goto LABEL_48;
      }
      v28 = PpmMultimediaQosProfile;
      if ( !PpmMultimediaQosProfile )
        goto LABEL_9;
LABEL_51:
      v6 = (__int64 *)(v28 + 488LL * dword_140F0B38C + 40);
      v7 = *v6;
      v29 = *(_OWORD *)v6;
      goto LABEL_10;
    }
    v27 = PpmBackgroundProfile;
LABEL_48:
    if ( v27 )
    {
      v6 = (__int64 *)(v27 + 488LL * dword_140F0B38C + 40);
      v29 = *(_OWORD *)v6;
      v7 = *v6;
    }
LABEL_10:
    if ( v6 )
    {
      if ( (v7 & 0x1000000000000000LL) != 0 )
        v9 = *((_BYTE *)v6 + 454);
      if ( (v7 & 0x2000000000000000LL) != 0 )
        v4 = *((_BYTE *)v6 + 452);
      if ( (v7 & 0x4000000000000000LL) != 0 )
        v10 = *((_BYTE *)v6 + 455);
      if ( v7 < 0 )
        v5 = *((_BYTE *)v6 + 453);
    }
    v13 = v5;
    v14 = v4;
    if ( v5 > a2 )
      v13 = a2;
    v15 = v10;
    if ( v4 > a2 )
      v14 = a2;
    if ( v10 > a2 )
      v15 = a2;
    v10 = v15;
    v16 = v9;
    v5 = v10;
    if ( v9 > a2 )
      v16 = a2;
    *(_BYTE *)(a1 + 2 * v12 + 77) = v10;
    v9 = v16;
    *(_BYTE *)(a1 + 2 * v12 + 76) = v16;
    v4 = v16;
    if ( v14 <= v16 )
      v4 = v14;
    if ( v13 <= v10 )
      v5 = v13;
    *(_BYTE *)(a1 + 2 * v12 + 90) = v4;
    v3 += 8;
    *(_BYTE *)(a1 + 2 * v12 + 91) = v5;
    --v11;
  }
  while ( v11 );
  Feature_UpperThresholdInheritance__private_ReportDeviceUsage();
  v17 = *(_BYTE *)(a1 + 76);
  v18 = &unk_140E0B42C;
  LOBYTE(v19) = *(_BYTE *)(a1 + 77);
  v20 = 6LL;
  do
  {
    if ( !*v18 )
    {
      v17 = *(_BYTE *)(a1 + 76);
      LOBYTE(v19) = *(_BYTE *)(a1 + 77);
    }
    v21 = *(_BYTE *)(a1 + 2LL * *((unsigned int *)v18 - 1) + 76);
    v22 = *((unsigned int *)v18 - 1);
    if ( v21 >= v17 )
      v21 = v17;
    v23 = *(_BYTE *)(a1 + 2 * v22 + 77);
    v17 = v21;
    v24 = *(_BYTE *)(a1 + 2 * v22 + 90);
    if ( v23 >= (unsigned __int8)v19 )
      v23 = v19;
    *(_BYTE *)(a1 + 2 * v22 + 76) = v17;
    v19 = v23;
    v25 = v17;
    *(_BYTE *)(a1 + 2 * v22 + 77) = v19;
    if ( v24 < v17 )
      v25 = v24;
    *(_BYTE *)(a1 + 2 * v22 + 90) = v25;
    result = *(unsigned __int8 *)(a1 + 2 * v22 + 91);
    if ( (unsigned __int8)result >= (unsigned __int8)v19 )
      result = v19;
    v18 += 8;
    *(_BYTE *)(a1 + 2 * v22 + 91) = result;
    --v20;
  }
  while ( v20 );
  return result;
}
