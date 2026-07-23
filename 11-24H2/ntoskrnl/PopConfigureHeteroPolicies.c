/*
 * XREFs of PopConfigureHeteroPolicies @ 0x140A205E0
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopConfigureHeteroThresholds @ 0x140A20D48 (PopConfigureHeteroThresholds.c)
 *     KeConfigureHeteroPolicy @ 0x140A21008 (KeConfigureHeteroPolicy.c)
 *     PpmHeteroComputeBias @ 0x140A211AC (PpmHeteroComputeBias.c)
 *     PopCapturePlatformRole @ 0x140A68904 (PopCapturePlatformRole.c)
 */

char __fastcall PopConfigureHeteroPolicies(int a1, char a2, char a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r12
  int v9; // ecx
  __m128i si128; // xmm0
  _BYTE *v11; // r8
  __int64 v12; // r9
  int v13; // edi
  __int64 v14; // r11
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 *v17; // rdx
  __int128 v18; // xmm0
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int32 v24; // edx
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // edi
  int v30; // eax
  __int64 v31; // r8
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // esi
  char result; // al
  __int32 v36; // ecx
  __int128 v37; // xmm0
  char v38; // di
  __m128i *v39; // rsi
  __int64 v40; // r14
  __m128i *v41; // r10
  unsigned __int8 v42; // r11
  __int64 v43; // rdx
  __int32 v44; // eax
  char v45; // r11
  __m128i *v46; // rdi
  __int64 i; // rcx
  unsigned int v48; // eax
  int *v49; // rcx
  __int64 v50; // rdi
  int v51; // edx
  int v52; // eax
  wchar_t **v53; // rdi
  __int64 v54; // rsi
  int v55; // eax
  __m128i *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v60; // [rsp+38h] [rbp-C8h]
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING ValueName; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v67; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v68; // [rsp+B4h] [rbp-4Ch] BYREF
  __m128i v69; // [rsp+C4h] [rbp-3Ch]
  __m128i v70; // [rsp+D4h] [rbp-2Ch]
  __int64 v71; // [rsp+E4h] [rbp-1Ch]
  int v72; // [rsp+ECh] [rbp-14h]
  int v73; // [rsp+F0h] [rbp-10h]
  int v74; // [rsp+F4h] [rbp-Ch]
  int v75; // [rsp+F8h] [rbp-8h]
  __int128 KeyValueInformation; // [rsp+120h] [rbp+20h] BYREF
  __m128i v77; // [rsp+130h] [rbp+30h] BYREF
  __int64 v78; // [rsp+140h] [rbp+40h]
  int v79; // [rsp+148h] [rbp+48h]

  v3 = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  v60 = 0LL;
  memset_0(&v67, 0, 0x68uLL);
  v67 = 5;
  v8 = 7LL;
  if ( a1 == 3 )
  {
    v72 = 8;
    v55 = PopCapturePlatformRole(v7, v6);
    if ( v55 == 2 || v55 == 8 )
      v72 = 10;
    v73 = 5200;
    v74 = 51;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v68 = si128;
    v68.m128i_i32[3] = 2;
    v68.m128i_i32[1] = 2;
    v69 = si128;
    v70 = si128;
    v71 = si128.m128i_i64[0];
  }
  else
  {
    v73 = 100;
    v72 = 10;
    v9 = 3;
    if ( (unsigned int)(a1 - 5) <= 1 )
      v9 = 19;
    v74 = v9;
    if ( a1 == 1 || a1 == 2 || (unsigned int)(a1 - 5) < 2 )
    {
      v48 = 0;
      v49 = (int *)&v68;
      do
      {
        v50 = 2LL;
        do
        {
          if ( v48 == 4 || v48 <= 1 )
            v51 = 2;
          else
            v51 = 3;
          *v49++ = v51;
          --v50;
        }
        while ( v50 );
        ++v48;
      }
      while ( v48 < 7 );
    }
    else
    {
      v68 = 0LL;
      v71 = 0LL;
      v69 = 0LL;
      v70 = 0LL;
    }
  }
  v11 = &unk_140E0B424;
  v12 = 5LL;
  v13 = 5;
  v14 = 7LL;
  do
  {
    v15 = *((unsigned int *)v11 - 1);
    if ( !*v11 )
    {
      v12 = 5LL;
      v13 = 5;
    }
    switch ( (_DWORD)v15 )
    {
      case 0:
        goto LABEL_64;
      case 1:
        v16 = PpmEntryLevelPerfProfile;
        if ( PpmEntryLevelPerfProfile )
          goto LABEL_19;
        v17 = 0LL;
        *(_QWORD *)&v37 = 0LL;
        break;
      case 2:
        v16 = PpmBackgroundProfile;
        goto LABEL_18;
      case 3:
        if ( !PpmMultimediaQosProfile )
          goto LABEL_64;
        v17 = (__int64 *)(488LL * dword_140F0B38C + PpmMultimediaQosProfile + 40);
        v37 = *(_OWORD *)v17;
        break;
      case 4:
LABEL_64:
        v17 = &PpmCurrentProfile[0][61 * dword_140F0B38C + 5];
        v19 = v60 | 0x600000000000000LL;
        v60 |= 0x600000000000000uLL;
        goto LABEL_21;
      case 5:
        v16 = PpmEcoQosProfile;
LABEL_18:
        if ( v16 )
        {
LABEL_19:
          v17 = (__int64 *)(488LL * dword_140F0B38C + v16 + 40);
          v18 = *(_OWORD *)v17;
        }
        else
        {
          v17 = 0LL;
          *(_QWORD *)&v18 = 0LL;
        }
        v60 = v18;
        v19 = v18;
        goto LABEL_21;
      case 6:
        v16 = PpmUtilityQosProfile;
        goto LABEL_18;
      default:
        goto LABEL_64;
    }
    v19 = v37;
    v60 = v37;
LABEL_21:
    if ( (v19 & 0x400000000000000LL) != 0 )
      v12 = *((unsigned int *)v17 + 111);
    if ( (v19 & 0x200000000000000LL) != 0 )
      v13 = *((_DWORD *)v17 + 112);
    if ( (_DWORD)v12 != 5 )
      v68.m128i_i32[2 * v15] = v12;
    if ( v13 != 5 )
      v68.m128i_i32[2 * v15 + 1] = v13;
    v11 += 8;
    --v14;
  }
  while ( v14 );
  v20 = v73;
  if ( LODWORD(PpmCurrentProfile[0][61 * dword_140F0B38C + 60]) )
    v20 = PpmCurrentProfile[0][61 * dword_140F0B38C + 60];
  v73 = v20;
  if ( a2 )
  {
    dword_140F08644 = -1;
    xmmword_140F08604 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
    PopHeteroLegacyOverride = 5;
    xmmword_140F08614 = xmmword_140F08604;
    qword_140F0863C = 0LL;
    xmmword_140F08624 = xmmword_140F08604;
    qword_140F08634 = xmmword_140F08604;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) >= 0 )
    {
      v53 = &off_140B3F0F8;
      ObjectAttributes.RootDirectory = KeyHandle;
      v54 = 7LL;
      do
      {
        RtlInitUnicodeString(&DestinationString, *(v53 - 1));
        if ( ZwOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, *v53);
          if ( ZwQueryValueKey(
                 Handle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 &KeyValueInformation,
                 0x10u,
                 &ResultLength) >= 0
            && (_DWORD)KeyValueInformation == 4 )
          {
            *(int *)((char *)&PopHeteroLegacyOverride + *((unsigned int *)v53 + 2)) = DWORD2(KeyValueInformation);
          }
          if ( Handle )
          {
            ZwClose(Handle);
            Handle = 0LL;
          }
        }
        v53 += 3;
        --v54;
      }
      while ( v54 );
      if ( KeyHandle )
      {
        ZwClose(KeyHandle);
        KeyHandle = 0LL;
      }
    }
  }
  v21 = 0LL;
  v22 = 7LL;
  do
  {
    v23 = 2LL;
    do
    {
      v24 = *(_DWORD *)((char *)&xmmword_140F08604 + v21 * 4);
      if ( v24 != 5 )
        v68.m128i_i32[v21] = v24;
      ++v21;
      --v23;
    }
    while ( v23 );
    --v22;
  }
  while ( v22 );
  v25 = v67;
  if ( PopHeteroLegacyOverride != 5 )
    v25 = (unsigned int)PopHeteroLegacyOverride;
  v26 = v72;
  if ( (_DWORD)qword_140F0863C )
    v26 = qword_140F0863C;
  v72 = v26;
  v27 = v73;
  if ( HIDWORD(qword_140F0863C) )
    v27 = HIDWORD(qword_140F0863C);
  v67 = v25;
  v73 = v27;
  v28 = v74;
  if ( dword_140F08644 != -1 )
    v28 = dword_140F08644;
  v74 = v28;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    v56 = &v68;
    v57 = 7LL;
    do
    {
      v58 = 2LL;
      do
      {
        if ( v56->m128i_i32[0] == 3 )
          v56->m128i_i32[0] = 4;
        v56 = (__m128i *)((char *)v56 + 4);
        --v58;
      }
      while ( v58 );
      --v57;
    }
    while ( v57 );
    v25 = v67;
  }
  v29 = PpmPerfQosTransitionHysteresisOverride;
  v30 = PpmPerfQosTransitionHysteresisOverride;
  v31 = (unsigned int)PpmPerfQosTransitionHysteresis;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v30 = PpmPerfQosTransitionHysteresis;
  if ( v30 )
  {
    v52 = KeMinimumIncrement;
    if ( 10 * PpmPerfQosTransitionHysteresis > (unsigned int)KeMinimumIncrement )
      v52 = 10 * PpmPerfQosTransitionHysteresis;
    v75 = v52;
  }
  v32 = PpmPerfQosTransitionHysteresisOverride;
  v33 = 500LL;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v32 = PpmPerfQosTransitionHysteresis;
  if ( v32 > 0x1F4 )
  {
    if ( PpmPerfQosTransitionHysteresisOverride == -1 )
      v29 = PpmPerfQosTransitionHysteresis;
  }
  else
  {
    v29 = 500;
  }
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(10 * v29);
  if ( ((a1 - 1) & 0xFFFFFFFA) != 0 )
  {
    v34 = 1;
    v77 = _mm_load_si128((const __m128i *)&_xmm);
    v78 = v77.m128i_i64[0];
    v79 = _mm_cvtsi128_si32(v77);
    goto LABEL_57;
  }
  LOBYTE(v31) = 0;
  LOBYTE(v12) = 0;
  v38 = 0;
  if ( !(_DWORD)v25 )
  {
    LOBYTE(v31) = 1;
    LOBYTE(v12) = 1;
    goto LABEL_134;
  }
  v25 = (unsigned int)(v25 - 2);
  if ( (_DWORD)v25 )
  {
    v25 = (unsigned int)(v25 - 2);
    if ( (_DWORD)v25 )
    {
      if ( (_DWORD)v25 == 1 )
      {
        v39 = &v77;
        v40 = 7LL;
        v41 = &v68;
        do
        {
          LOBYTE(v33) = 0;
          v42 = 0;
          v43 = 2LL;
          do
          {
            v44 = v41->m128i_i32[0];
            if ( v41->m128i_i32[0] )
            {
              if ( v44 == 2 )
              {
                v42 = 1;
              }
              else if ( v44 == 4 )
              {
                LOBYTE(v33) = 1;
              }
            }
            else
            {
              LOBYTE(v33) = 1;
              v42 = 1;
            }
            v41 = (__m128i *)((char *)v41 + 4);
            --v43;
          }
          while ( v43 );
          v39->m128i_i32[0] = PpmHeteroComputeBias(v33, v42, v31, v12);
          LOBYTE(v31) = v33 | v31;
          v39 = (__m128i *)((char *)v39 + 4);
          LOBYTE(v12) = v45 | v12;
          --v40;
        }
        while ( v40 );
      }
      goto LABEL_83;
    }
    LOBYTE(v31) = 1;
LABEL_134:
    v38 = 1;
  }
  else
  {
    LOBYTE(v12) = 1;
    v38 = 1;
  }
LABEL_83:
  LOBYTE(v25) = v12;
  LOBYTE(v33) = v31;
  v34 = PpmHeteroComputeBias(v33, v25, v31, v12);
  if ( v38 )
  {
    v46 = &v77;
    for ( i = 7LL; i; --i )
    {
      v46->m128i_i32[0] = v34;
      v46 = (__m128i *)((char *)v46 + 4);
    }
  }
LABEL_57:
  LOBYTE(v25) = a3;
  PopConfigureHeteroThresholds(&v67, v25);
  result = KeConfigureHeteroPolicy(&v67);
  if ( PpmHeteroParkBias != v34 )
  {
    PpmHeteroParkBias = v34;
    result = 1;
  }
  do
  {
    v36 = v77.m128i_i32[v3];
    if ( PpmHeteroQosBias[v3] != v36 )
    {
      PpmHeteroQosBias[v3] = v36;
      result = 1;
    }
    ++v3;
    --v8;
  }
  while ( v8 );
  return result;
}
