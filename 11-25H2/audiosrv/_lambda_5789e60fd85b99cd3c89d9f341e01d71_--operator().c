/*
 * XREFs of _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180044110
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180043A2C (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180045618 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180045C54 (CEndpointCharacteristics--GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180125F1C (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda__.c)
 *     _lambda_c7c9c295e9eb20a9e0b33ea00abada77_::operator() @ 0x180129E44 (_lambda_c7c9c295e9eb20a9e0b33ea00abada77_--operator().c)
 * Callees:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800437C0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800449C0 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800ABC2C (memcmp_0.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18015D768 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(
        CConnectorProcessingModeCharacteristics ***a1,
        unsigned __int16 *a2,
        bool *a3)
{
  CConnectorProcessingModeCharacteristics ***v4; // rdx
  bool *v5; // r12
  unsigned int v6; // r14d
  __int16 v7; // di
  unsigned __int16 ***v8; // r13
  unsigned __int16 ***v9; // rbx
  bool v10; // zf
  __int64 v11; // r10
  __int16 v12; // r12
  __int64 v13; // r11
  __int64 v14; // r9
  __int64 v15; // rsi
  unsigned __int16 *v16; // rcx
  int v17; // edx
  int v18; // eax
  __int128 v19; // xmm1
  __int64 v20; // xmm0_8
  int v21; // r8d
  int v22; // eax
  __int16 v23; // si
  __int128 v24; // xmm1
  __int64 v25; // xmm0_8
  int v26; // eax
  __int16 v27; // r11
  __int16 v28; // r9
  int v29; // edx
  __int16 v30; // cx
  __int64 v31; // rax
  unsigned __int16 v33; // r9
  unsigned __int16 v34; // r9
  int v35; // edx
  __int128 v36; // xmm0
  __int128 v37; // xmm0
  CConnectorProcessingModeCharacteristics **v38; // rax
  __m128i *v39; // rdi
  CConnectorProcessingModeCharacteristics **v40; // rbx
  CConnectorProcessingModeCharacteristics *v41; // r9
  CConnectorProcessingModeCharacteristics **v42; // rax
  __m128i v43; // xmm0
  CConnectorProcessingModeCharacteristics *v44; // rcx
  CConnectorProcessingModeCharacteristics *v45; // r10
  CConnectorProcessingModeCharacteristics **v46; // rax
  __int64 v47; // r8
  CConnectorProcessingModeCharacteristics **v48; // rax
  int v49; // eax
  int v50; // esi
  __int64 v51; // rdx
  __m128i v52; // xmm1
  int v53; // r9d
  __int16 v54; // r8
  __int64 v55; // rcx
  unsigned __int16 v56; // ax
  __int64 v57; // r10
  __int16 v58; // r9
  int v59; // ecx
  int v60; // r11d
  __int64 v61; // r10
  __int16 i; // cx
  __int64 v63; // r11
  __int16 j; // r10
  __int16 v65; // r8
  unsigned __int64 v66; // rax
  __int64 v67; // r9
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rcx
  unsigned int v75; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v76; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v77; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v78; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v79[2]; // [rsp+80h] [rbp-80h] BYREF
  CConnectorProcessingModeCharacteristics **v80; // [rsp+88h] [rbp-78h]
  CConnectorProcessingModeCharacteristics ***v81; // [rsp+90h] [rbp-70h]
  __m128i v82; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Buf2[40]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE Buf1[40]; // [rsp+D8h] [rbp-28h] BYREF

  *(_QWORD *)v79 = a3;
  v4 = a1;
  v81 = a1;
  v5 = a3;
  if ( a3 )
    *a3 = 0;
  v6 = 0;
  v80 = *a1;
  v7 = -2;
  v75 = 65534;
  v8 = (unsigned __int16 ***)*((_QWORD *)*v80 + 3);
  v9 = (unsigned __int16 ***)*((_QWORD *)*v80 + 2);
  v10 = v9 == v8;
  if ( v9 != v8 )
  {
    v11 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    v12 = 22;
    v13 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    v14 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    v15 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    while ( 1 )
    {
      v16 = **v9;
      if ( a2 )
      {
        if ( v16 )
        {
          v17 = *a2;
          v18 = 0;
          memset(Buf1, 0, sizeof(Buf1));
          memset(Buf2, 0, sizeof(Buf2));
          if ( (_WORD)v17 == 0xFFFE )
          {
            if ( a2[8] == 22 )
              goto LABEL_9;
            v69 = *((_QWORD *)a2 + 3) - v13;
            if ( !v69 )
              v69 = *((_QWORD *)a2 + 4) - v11;
            if ( !v69 )
              goto LABEL_9;
            v70 = *((_QWORD *)a2 + 3) - v15;
            if ( !v70 )
              v70 = *((_QWORD *)a2 + 4) - v14;
            if ( v70 )
            {
              v12 = *(_WORD *)&Buf1[16];
            }
            else
            {
LABEL_9:
              v18 = 1;
              v19 = *((_OWORD *)a2 + 1);
              *(_OWORD *)Buf1 = *(_OWORD *)a2;
              v20 = *((_QWORD *)a2 + 4);
              *(_OWORD *)&Buf1[16] = v19;
              *(_WORD *)&Buf1[16] = 22;
              *(_QWORD *)&Buf1[32] = v20;
            }
            if ( v18 )
            {
              v21 = *(_DWORD *)&Buf1[20];
              v7 = *(_WORD *)Buf1;
              goto LABEL_12;
            }
LABEL_43:
            v12 = 22;
            goto LABEL_44;
          }
          if ( a2[8] && (((_WORD)v17 - 1) & 0xFFFD) != 0 )
            goto LABEL_44;
          v33 = a2[1];
          if ( (unsigned __int16)(v33 - 1) > 1u )
            goto LABEL_44;
          v12 = 22;
          if ( ((a2[7] - 8) & 0xFFE7) != 0 )
            goto LABEL_44;
          v37 = *(_OWORD *)a2;
          *(_WORD *)&Buf1[18] = a2[7];
          v10 = v33 == 1;
          v14 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          *(_OWORD *)Buf1 = v37;
          *(_WORD *)Buf1 = -2;
          *(_WORD *)&Buf1[16] = 22;
          v21 = v10 + 3;
          *(GUID *)&Buf1[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&Buf1[24] = v17;
LABEL_12:
          v22 = 0;
          if ( *v16 == (_WORD)v75 )
          {
            if ( v16[8] == 22 )
              goto LABEL_14;
            v71 = *((_QWORD *)v16 + 3) - v13;
            if ( !v71 )
              v71 = *((_QWORD *)v16 + 4) - v11;
            if ( !v71 )
              goto LABEL_14;
            v72 = *((_QWORD *)v16 + 3) - v15;
            if ( !v72 )
              v72 = *((_QWORD *)v16 + 4) - v14;
            if ( v72 )
            {
              v23 = *(_WORD *)&Buf2[16];
            }
            else
            {
LABEL_14:
              v23 = 22;
              v22 = 1;
              v24 = *((_OWORD *)v16 + 1);
              *(_OWORD *)Buf2 = *(_OWORD *)v16;
              v25 = *((_QWORD *)v16 + 4);
              *(_OWORD *)&Buf2[16] = v24;
              *(_WORD *)&Buf2[16] = 22;
              *(_QWORD *)&Buf2[32] = v25;
            }
            if ( v22 )
            {
              v26 = *(_DWORD *)&Buf2[20];
              v27 = *(_WORD *)Buf2;
              goto LABEL_17;
            }
            goto LABEL_41;
          }
          if ( v16[8] && ((*v16 - 1) & 0xFFFD) != 0 )
          {
            v7 = -2;
            goto LABEL_43;
          }
          v34 = v16[1];
          if ( (unsigned __int16)(v34 - 1) <= 1u )
          {
            v35 = *v16;
            if ( ((v16[7] - 8) & 0xFFE7) == 0 )
            {
              v36 = *(_OWORD *)v16;
              *(_WORD *)&Buf2[18] = v16[7];
              v27 = -2;
              *(_OWORD *)Buf2 = v36;
              *(_WORD *)Buf2 = -2;
              v23 = 22;
              v26 = (v34 == 1) + 3;
              *(_WORD *)&Buf2[16] = 22;
              *(GUID *)&Buf2[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
              *(_DWORD *)&Buf2[24] = v35;
LABEL_17:
              if ( *(_WORD *)&Buf1[2] )
              {
                v28 = *(_WORD *)&Buf2[2];
              }
              else
              {
                v28 = 0;
                *(_WORD *)&Buf2[2] = 0;
                *(_DWORD *)&Buf2[8] = 0;
                *(_WORD *)&Buf2[12] = 0;
              }
              if ( *(_DWORD *)&Buf1[4] )
              {
                v29 = *(_DWORD *)&Buf2[4];
              }
              else
              {
                v29 = 0;
                *(_QWORD *)&Buf2[4] = 0LL;
              }
              if ( *(_WORD *)&Buf1[14] )
              {
                v30 = *(_WORD *)&Buf2[14];
              }
              else
              {
                v30 = 0;
                *(_DWORD *)&Buf2[12] = 0;
              }
              if ( !v21 )
                v26 = 0;
              *(_DWORD *)&Buf2[20] = v26;
              if ( !v7 )
              {
                v27 = 0;
                *(_WORD *)Buf2 = 0;
              }
              if ( !v28 )
              {
                *(_WORD *)&Buf1[2] = 0;
                *(_DWORD *)&Buf1[8] = 0;
                *(_WORD *)&Buf1[12] = 0;
              }
              if ( !v29 )
                *(_QWORD *)&Buf1[4] = 0LL;
              if ( !v30 )
                *(_DWORD *)&Buf1[12] = 0;
              if ( !v26 )
                v21 = 0;
              *(_DWORD *)&Buf1[20] = v21;
              if ( !v27 )
                *(_WORD *)Buf1 = 0;
              v31 = *(_QWORD *)&Buf1[24] - *(_QWORD *)&Buf2[24];
              if ( *(_QWORD *)&Buf1[24] == *(_QWORD *)&Buf2[24] )
                v31 = *(_QWORD *)&Buf1[32] - *(_QWORD *)&Buf2[32];
              if ( !v31 && v23 == v12 && !memcmp_0(Buf1, Buf2, 0x28uLL) )
              {
LABEL_45:
                v5 = *(bool **)v79;
                v10 = v9 == v8;
                v4 = v81;
                break;
              }
              v13 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
LABEL_41:
              v15 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
            }
          }
          v7 = -2;
          goto LABEL_43;
        }
      }
      else if ( !v16 )
      {
        goto LABEL_45;
      }
LABEL_44:
      v14 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      ++v9;
      v11 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( v9 == v8 )
        goto LABEL_45;
    }
  }
  if ( v10 )
  {
    v38 = v4[6];
    v39 = (__m128i *)v4[4];
    v40 = v4[2];
    v75 = 0;
    v41 = *v38;
    v42 = v4[5];
    v43 = *v39;
    v44 = v40[5];
    v78 = 0;
    v45 = *v42;
    v46 = v4[3];
    v77 = 0;
    v79[0] = 0;
    v76 = 0;
    v47 = *(unsigned int *)v46;
    v48 = v4[1];
    v82 = v43;
    v49 = DiscoverPeriodicityCharacteristicsForFormat(
            v44,
            *((unsigned int *)v40 + 59),
            v47,
            &v82,
            a2,
            v45,
            *(_BYTE *)v48 != 0,
            v41,
            &v75,
            v79,
            &v78,
            &v77,
            &v76);
    v50 = v49;
    if ( v49 >= 0 )
    {
      v68 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
              *v80,
              (const struct tWAVEFORMATEX *)a2,
              v75,
              v79[0],
              v78,
              v77,
              v76);
      v6 = v68;
      if ( v5 )
        *v5 = v68 >= 0;
    }
    else
    {
      switch ( v49 )
      {
        case -2005139389:
        case -2005139364:
        case -2005139363:
        case -2005139362:
        case -2005139361:
        case -2005139360:
          CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(*v80, (const struct tWAVEFORMATEX *)a2);
          *((_DWORD *)v40 + 65) = 1;
          break;
        default:
          v51 = (__int64)*v81[7];
          if ( v51 )
          {
            v52 = *v39;
            v53 = *((_DWORD *)a2 + 1);
            v54 = 0;
            v55 = *(__int16 *)(v51 + 228);
            while ( v54 < (__int16)v55 )
            {
              if ( *(_DWORD *)(v51 + 4LL * v54 + 4) == v53 )
                goto LABEL_73;
              ++v54;
            }
            if ( (int)v55 < 15 )
            {
              *(_DWORD *)(v51 + 4 * v55 + 4) = v53;
              v54 = *(_WORD *)(v51 + 228);
              *(_WORD *)(v51 + 228) = v54 + 1;
            }
            else
            {
              v54 = *(_WORD *)(v51 + 228);
            }
LABEL_73:
            if ( *a2 == 0xFFFE )
              v56 = a2[9];
            else
              v56 = a2[7];
            v57 = *(__int16 *)(v51 + 230);
            v58 = 0;
            v59 = a2[7] | (v56 << 8);
            while ( v58 < (__int16)v57 )
            {
              if ( *(_DWORD *)(v51 + 4LL * v58 + 68) == v59 )
                goto LABEL_79;
              ++v58;
            }
            if ( (int)v57 >= 7 )
            {
              v58 = *(_WORD *)(v51 + 230);
            }
            else
            {
              *(_DWORD *)(v51 + 4 * v57 + 68) = v59;
              v58 = *(_WORD *)(v51 + 230);
              *(_WORD *)(v51 + 230) = v58 + 1;
            }
LABEL_79:
            if ( *a2 == 0xFFFE )
              v60 = *((_DWORD *)a2 + 5);
            else
              v60 = 0;
            v61 = *(__int16 *)(v51 + 232);
            for ( i = 0; i < (__int16)v61; ++i )
            {
              if ( *(_DWORD *)(v51 + 4LL * i + 100) == v60 )
                goto LABEL_86;
            }
            if ( (int)v61 < 15 )
            {
              *(_DWORD *)(v51 + 4 * v61 + 100) = v60;
              i = *(_WORD *)(v51 + 232);
              *(_WORD *)(v51 + 232) = i + 1;
            }
            else
            {
              i = *(_WORD *)(v51 + 232);
            }
LABEL_86:
            v63 = *(__int16 *)(v51 + 234);
            for ( j = 0; j < (__int16)v63; ++j )
            {
              if ( *(_DWORD *)(v51 + 4LL * j + 164) == v50 )
                goto LABEL_89;
            }
            if ( (int)v63 >= 15 )
            {
              j = *(_WORD *)(v51 + 234);
            }
            else
            {
              *(_DWORD *)(v51 + 4 * v63 + 164) = v50;
              j = *(_WORD *)(v51 + 234);
              *(_WORD *)(v51 + 234) = j + 1;
            }
LABEL_89:
            v65 = j | (16 * (i | (16 * (v58 | (8 * v54)))));
            v66 = v52.m128i_i64[0] - *(_QWORD *)(v51 + 4336);
            if ( v52.m128i_i64[0] == *(_QWORD *)(v51 + 4336) )
              v66 = _mm_srli_si128(v52, 8).m128i_u64[0] - *(_QWORD *)(v51 + 4344);
            if ( v66 )
            {
              v73 = *(unsigned int *)(v51 + 4332);
              if ( (unsigned int)(v73 + 1) < 0x1000 )
                *(_WORD *)(v73 + v51 + 236) = -1;
              v74 = (unsigned int)(*(_DWORD *)(v51 + 4332) + 2);
              *(_DWORD *)(v51 + 4332) = v74;
              if ( (unsigned __int64)(v74 + 16) < 0x1000 )
                *(__m128i *)(v74 + v51 + 236) = v52;
              *(_DWORD *)(v51 + 4332) += 16;
              *(__m128i *)(v51 + 4336) = v52;
            }
            v67 = *(unsigned int *)(v51 + 4332);
            if ( (unsigned __int64)(v67 + 2) < 0x1000 )
            {
              *(_WORD *)(v67 + v51 + 236) = v65;
              *(_DWORD *)(v51 + 4332) += 2;
            }
          }
          break;
      }
    }
    return v6;
  }
  else
  {
    if ( v5 )
      *v5 = 1;
    return 0LL;
  }
}
