/*
 * XREFs of USBParseConvertInterfaceToDataRange @ 0x140036AD8
 * Callers:
 *     USBParseGetAudioStreamingDataranges @ 0x14003B974 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     IsAudioStreamValid @ 0x14000D268 (IsAudioStreamValid.c)
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     USBParseGetAudioSpecificInterface @ 0x14003B61C (USBParseGetAudioSpecificInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x14003B69C (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetNextAudioInterface @ 0x14003C28C (USBParseGetNextAudioInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x14003C2DC (USBParseGetEndpointDescriptor.c)
 */

__int64 __fastcall USBParseConvertInterfaceToDataRange(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned __int8 *AudioSpecificInterface; // rax
  unsigned __int8 *v8; // rbp
  __int64 DescriptorInConfiguration; // rax
  unsigned __int8 *v10; // rbx
  __int64 EndpointDescriptor; // rax
  __int64 v12; // r8
  int v13; // r13d
  unsigned __int64 NextAudioInterface; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // al
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  GUID v25; // xmm0
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  int v31; // eax
  BOOL v32; // eax
  unsigned __int8 *v33; // rbp
  unsigned __int8 v34; // al
  BOOL v35; // eax
  unsigned int v36; // ebx
  int v38; // ecx
  _DWORD *Pool2; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  unsigned __int8 *v42; // rbp
  unsigned int v43; // ecx
  _DWORD v44[4]; // [rsp+30h] [rbp-58h] BYREF

  v3 = 0;
  AudioSpecificInterface = (unsigned __int8 *)USBParseGetAudioSpecificInterface(a1, a2, a3, 7LL);
  v8 = AudioSpecificInterface;
  if ( !AudioSpecificInterface )
    return v3;
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                a1,
                                &AudioSpecificInterface[*AudioSpecificInterface],
                                36LL);
  v10 = (unsigned __int8 *)DescriptorInConfiguration;
  if ( !DescriptorInConfiguration )
    return v3;
  *(_QWORD *)(a3 + 152) = DescriptorInConfiguration;
  *(_DWORD *)(a3 + 216) = *(unsigned __int16 *)(v8 + 5);
  *(_BYTE *)(a3 + 186) = v8[4];
  *(_QWORD *)(a3 + 136) = a2;
  *(_DWORD *)(a3 + 104) = *(unsigned __int8 *)(DescriptorInConfiguration + 6);
  EndpointDescriptor = USBParseGetEndpointDescriptor(a1, a2, 0LL);
  *(_QWORD *)(a3 + 168) = EndpointDescriptor;
  if ( !EndpointDescriptor )
    return (unsigned int)-1073741668;
  *(_DWORD *)(a3 + 220) = *(unsigned __int16 *)(EndpointDescriptor + 4);
  if ( (*(_BYTE *)(EndpointDescriptor + 3) & 0xC) == 4 )
  {
    v13 = *(_BYTE *)(EndpointDescriptor + 8) & 0xF;
    NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
    v15 = USBParseFindDescriptorInConfiguration(a1, *(_QWORD *)(a3 + 168) + **(unsigned __int8 **)(a3 + 168), 5LL);
    v16 = v15;
    if ( !v15 || (*(_BYTE *)(v15 + 2) & 0xF) != v13 || NextAudioInterface && v15 > NextAudioInterface )
      v16 = 0LL;
    *(_QWORD *)(a3 + 176) = v16;
  }
  LOBYTE(v12) = 1;
  v17 = USBParseGetEndpointDescriptor(a1, a2, v12);
  *(_QWORD *)(a3 + 160) = v17;
  v18 = v17;
  if ( v17 )
  {
    if ( *(char *)(*(_QWORD *)(a3 + 168) + 2LL) < 0
      || (v19 = *(_BYTE *)(v17 + 4)) == 0
      || !*(_WORD *)(v18 + 5)
      || !*(_QWORD *)(a3 + 176) && (unsigned __int8)(v19 - 1) <= 1u )
    {
      v20 = *(unsigned __int16 *)(v8 + 5);
      if ( v20 > 0x1001 )
      {
        v26 = v20 - 4098;
        if ( v26 )
        {
          v27 = v26 - 4095;
          if ( v27 )
          {
            v28 = v27 - 2;
            if ( v28 )
            {
              if ( v28 != 252 )
                return (unsigned int)-1073741198;
              v25 = (GUID)KSDATAFORMAT_SUBTYPE_WMA_SPDIF;
            }
            else
            {
              v25 = (GUID)KSDATAFORMAT_SUBTYPE_DOLBY_MP3_SPDIF;
            }
          }
          else
          {
            v25 = (GUID)KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF;
          }
        }
        else
        {
          v25 = KSDATAFORMAT_SUBTYPE_AC3_AUDIO;
        }
      }
      else if ( v20 == 4097 )
      {
        v25 = (GUID)KSDATAFORMAT_SUBTYPE_MPEG;
      }
      else
      {
        v21 = v20 - 1;
        if ( v21 && (v22 = v21 - 1) != 0 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              if ( v24 == 1 )
              {
                v25 = (GUID)KSDATAFORMAT_SUBTYPE_MULAW;
                goto LABEL_39;
              }
              return (unsigned int)-1073741198;
            }
            v25 = (GUID)KSDATAFORMAT_SUBTYPE_ALAW;
          }
          else
          {
            v25 = KSDATAFORMAT_SUBTYPE_IEEE_FLOAT;
          }
        }
        else
        {
          v25 = KSDATAFORMAT_SUBTYPE_PCM;
        }
      }
LABEL_39:
      *(GUID *)(a3 + 32) = v25;
      *(_QWORD *)a3 = 88LL;
      v29 = 61440LL;
      *(_QWORD *)(a3 + 8) = 0LL;
      *(GUID *)(a3 + 16) = KSDATAFORMAT_TYPE_AUDIO;
      *(GUID *)(a3 + 48) = KSDATAFORMAT_SPECIFIER_WAVEFORMATEX;
      v30 = a1 + *(unsigned __int16 *)(a1 + 2);
      v31 = *(_WORD *)(v8 + 5) & 0xF000;
      if ( v31 )
      {
        if ( v31 == 4096 )
        {
          *(_QWORD *)(a3 + 64) = 6LL;
          *(_DWORD *)(a3 + 72) = 0;
          v32 = IsAudioStreamValid((__int64)v10, *v10, 9uLL, *(_WORD *)(v8 + 5) & 0xF000, v30);
          v33 = v10 + 9;
          if ( !v32 )
            v33 = 0LL;
          v34 = v10[8];
LABEL_50:
          v36 = v34;
          if ( v33 )
          {
            v38 = *v33 + ((v33[1] + (v33[2] << 8)) << 8);
            *(_DWORD *)(a3 + 76) = v38;
            *(_DWORD *)(a3 + 80) = v38;
            *(_DWORD *)(a3 + 108) = v34;
            if ( v34 )
            {
              Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4LL * v34, 1096972357LL);
              *(_QWORD *)(a3 + 120) = Pool2;
              if ( Pool2 )
              {
                *Pool2 = *(_DWORD *)(a3 + 76);
                if ( v36 > 1 )
                {
                  v40 = 4LL;
                  v41 = v36 - 1;
                  v42 = v33 + 4;
                  do
                  {
                    v43 = *(v42 - 1) + ((*v42 + (v42[1] << 8)) << 8);
                    *(_DWORD *)(v40 + *(_QWORD *)(a3 + 120)) = v43;
                    if ( v43 < *(_DWORD *)(a3 + 76) )
                      *(_DWORD *)(a3 + 76) = v43;
                    if ( v43 > *(_DWORD *)(a3 + 80) )
                      *(_DWORD *)(a3 + 80) = v43;
                    v42 += 3;
                    v40 += 4LL;
                    --v41;
                  }
                  while ( v41 );
                }
              }
              else
              {
                return (unsigned int)-1073741670;
              }
            }
            else
            {
              *(_DWORD *)(a3 + 80) = v33[3] + ((v33[4] + (v33[5] << 8)) << 8);
            }
            return v3;
          }
LABEL_51:
          v44[0] = 53956414;
          v44[1] = 1;
          v44[2] = -1073741668;
          RtlLogUnexpectedCodepath(v44, v29);
          return 3221225628LL;
        }
        if ( v31 != 0x2000 )
          goto LABEL_51;
        *(_DWORD *)(a3 + 64) = 2;
        *(_DWORD *)(a3 + 68) = 16;
        *(_DWORD *)(a3 + 72) = 16;
      }
      else
      {
        *(_DWORD *)(a3 + 64) = v10[4];
        *(_DWORD *)(a3 + 68) = 8 * v10[5];
        *(_DWORD *)(a3 + 72) = 8 * v10[5];
        *(_BYTE *)(a3 + 187) = v10[5];
      }
      v35 = IsAudioStreamValid((__int64)v10, *v10, 8uLL, *(_WORD *)(v8 + 5) & 0xF000, v30);
      v33 = v10 + 8;
      if ( !v35 )
        v33 = 0LL;
      v34 = v10[7];
      goto LABEL_50;
    }
  }
  return (unsigned int)-1073741438;
}
