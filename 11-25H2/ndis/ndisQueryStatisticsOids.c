/*
 * XREFs of ndisQueryStatisticsOids @ 0x14003D180
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x140166D10 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qDq @ 0x140024890 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003DCF0 (-ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisVerifierInitialization@@YAEXZ @ 0x140097D30 (-ndisVerifierInitialization@@YAEXZ.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisQueryStatisticsOids(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        size_t Size,
        _DWORD *a7,
        char a8,
        _BYTE *a9)
{
  __int64 v9; // rdi
  _DWORD *v10; // r12
  unsigned int v11; // r13d
  int v12; // edx
  unsigned int SetMiniport; // r15d
  unsigned int v14; // r14d
  void *v15; // rcx
  unsigned int v16; // esi
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  __int64 *v21; // rsi
  unsigned int v22; // ebx
  void *Pool2; // rax
  __int64 v25; // rbx
  _BYTE *v26; // rcx
  int v27; // r8d
  unsigned int v28; // ecx
  unsigned int v29; // edx
  _DWORD *v30; // r8
  int v31; // edx
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rax
  int v36; // edx
  __int64 v37; // r8
  unsigned __int8 v38; // r9
  struct _NDIS_MINIPORT_BLOCK *v39; // r14
  __int64 v40; // rax
  unsigned int v41; // edx
  unsigned int v42; // ecx
  _DWORD *v43; // rax
  unsigned int v44; // edi
  unsigned int v45; // eax
  int v46; // r8d
  int v47; // ecx
  __int64 v48; // [rsp+30h] [rbp-D0h]
  __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-B8h]
  int v51; // [rsp+4Ch] [rbp-B4h]
  int v52; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v53; // [rsp+54h] [rbp-ACh]
  int v54; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE *v55; // [rsp+60h] [rbp-A0h]
  unsigned int v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  _DWORD *v62; // [rsp+98h] [rbp-68h]
  _DWORD *v63; // [rsp+A0h] [rbp-60h]
  _BYTE v64[248]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 Src; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v66; // [rsp+1C0h] [rbp+C0h]
  __int128 v67; // [rsp+1D0h] [rbp+D0h]
  __int128 v68; // [rsp+1E0h] [rbp+E0h]
  __int128 v69; // [rsp+1F0h] [rbp+F0h]
  __int128 v70; // [rsp+200h] [rbp+100h]
  __int128 v71; // [rsp+210h] [rbp+110h]
  __int128 v72; // [rsp+220h] [rbp+120h]
  __int128 v73; // [rsp+230h] [rbp+130h]
  __int64 v74; // [rsp+240h] [rbp+140h]

  v9 = a1;
  v10 = a5;
  v11 = Size;
  v60 = a3;
  v61 = a2;
  v57 = a1;
  v63 = a7;
  v55 = a9;
  v56 = a4;
  memset(v64, 0, sizeof(v64));
  v51 = 0;
  v74 = 0LL;
  P = 0LL;
  v52 = 0;
  v59 = 0LL;
  LODWORD(v49) = 0;
  BYTE4(v49) = 0;
  Src = 0LL;
  v54 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      13,
      (struct _GUID *)&WPP_8ea48a87d6d93b281ca763654e4bfa07_Traceguids,
      v9);
  }
  SetMiniport = 0;
  *a7 = 0;
  if ( a8 )
  {
    v14 = 12;
    v15 = a5;
  }
  else
  {
    Pool2 = (void *)ExAllocatePool2(66LL, (unsigned int)Size, 1835091022);
    P = Pool2;
    if ( !Pool2 )
    {
      *a9 = 0;
      return 3221225626LL;
    }
    v14 = 8;
    v15 = Pool2;
  }
  v50 = v14;
  memset(v15, 0, (unsigned int)Size);
  v16 = 0;
  while ( 1 )
  {
    v53 = v16;
    if ( v16 >= v56 )
      goto LABEL_38;
    memset(v64, 0, sizeof(v64));
    if ( v11 < v14 + 4 )
      break;
    v17 = *(_DWORD *)(v60 + 4LL * v16);
    v62 = (_DWORD *)(v60 + 4LL * v16);
    if ( (v17 & 0xFF000000) == 0x80000000 )
      v17 &= ~0x80000000;
    if ( v17 == 65796
      || v17 - 131603 <= 5 && (v47 = 55, _bittest(&v47, v17 - 131603))
      || v17 == 66050
      || v17 == 0xFFFFFF
      || v17 == -50265850 )
    {
      SetMiniport = 0;
      if ( v17 <= 0x20215 )
      {
        if ( v17 != 131605 )
        {
          v18 = v17 - 65796;
          if ( v18 )
          {
            v19 = v18 - 254;
            if ( !v19 )
            {
              v54 = *(_DWORD *)(v9 + 1832);
              if ( v54 == 14 )
                v54 = 0;
              v21 = (__int64 *)&v54;
              goto LABEL_28;
            }
            v20 = v19 - 65553;
            if ( v20 )
            {
              if ( v20 != 1 )
                goto LABEL_59;
              v21 = (__int64 *)&v52;
              v52 = *(unsigned __int16 *)(v9 + 1784) + *(unsigned __int16 *)(v9 + 1786);
              goto LABEL_28;
            }
            v21 = (__int64 *)(v9 + 1624);
          }
          else
          {
            v21 = (__int64 *)(v9 + 464);
          }
LABEL_24:
          v22 = 4;
          goto LABEL_25;
        }
        v21 = (__int64 *)&v52;
        v52 = *(unsigned __int16 *)(v9 + 1790) + (*(unsigned __int16 *)(v9 + 1788) << 16);
LABEL_28:
        v22 = 4;
        goto LABEL_29;
      }
      if ( v17 == 0xFFFFFF )
      {
        v25 = MEMORY[0xFFFFF78000000320] - *(_QWORD *)(v9 + 1592);
        v21 = &v59;
        v59 = v25 * KeQueryTimeIncrement() / 10000000;
        goto LABEL_28;
      }
      if ( v17 == 131607 )
      {
        v31 = *(_DWORD *)(v9 + 1872);
        v32 = v31;
        v33 = *(_DWORD *)(v9 + 120);
        LODWORD(v49) = v31;
        if ( (v33 & 0x10) != 0 )
        {
          v31 |= 0x1000000u;
          LODWORD(v49) = v31;
          v32 = v31;
        }
        if ( (v33 & 0x20000) != 0 )
        {
          v31 = v32 | 0x400;
          LODWORD(v49) = v32 | 0x400;
          v32 |= 0x400u;
        }
        if ( (v33 & 0x4000000) != 0 )
        {
          v31 = v32 | 0x2000;
          LODWORD(v49) = v32 | 0x2000;
          v32 |= 0x2000u;
        }
        v34 = *(_DWORD *)(v9 + 124);
        if ( (v34 & 1) != 0 )
        {
          v31 = v32 | 0x8000;
          LODWORD(v49) = v32 | 0x8000;
          v32 |= 0x8000u;
        }
        if ( (v34 & 0x1000) != 0 )
        {
          v31 = v32 | 0x40000;
          LODWORD(v49) = v32 | 0x40000;
        }
        if ( (v34 & 0x2000) != 0 )
        {
          v31 |= 0x80000u;
          LODWORD(v49) = v31;
        }
        if ( (v34 & 0x200000) != 0 )
        {
          v31 |= 0x400000u;
          LODWORD(v49) = v31;
        }
        if ( (v34 & 0x400000) != 0 )
        {
          v31 |= 2u;
          LODWORD(v49) = v31;
        }
        if ( *(int *)(v9 + 3456) > 0 )
        {
          v31 |= 0x40000000u;
          LODWORD(v49) = v31;
        }
        v35 = *(_QWORD *)(v9 + 3760);
        if ( *(_BYTE *)(v9 + 32) >= 6u )
        {
          if ( *(_QWORD *)(v35 + 200) )
            goto LABEL_155;
        }
        else
        {
          if ( !*(_QWORD *)(v35 + 296) )
            goto LABEL_83;
LABEL_155:
          LODWORD(v49) = v31 | 0x800000;
        }
LABEL_83:
        if ( ndisCheckForHangSupported((struct _NDIS_MINIPORT_BLOCK *)v9) )
        {
          v36 |= 0x80u;
          LODWORD(v49) = v36;
        }
        if ( v38 >= 6u && *(_QWORD *)(v37 + 216) )
          LODWORD(v49) = v36 | 8;
        v21 = &v49;
        goto LABEL_28;
      }
      if ( v17 != 131608 )
      {
        if ( v17 != -50265850 )
          goto LABEL_59;
        v21 = (__int64 *)(v9 + 1292);
        goto LABEL_24;
      }
      v22 = 4;
      ndisFlags = *(_DWORD *)((char *)v10 + v14);
      ndisVerifierInitialization();
      if ( (ndisFlags & 4) == 0 )
        ndisVerifierLevel &= ~4u;
      *(_DWORD *)&v64[52] = 4;
LABEL_57:
      v28 = v22 + v14;
      *v10 = *v62;
      v10[1] = v22;
      if ( !a8 )
      {
        v11 -= v28;
        v10 = (_DWORD *)((char *)v10 + v28);
        v51 += v28;
        goto LABEL_59;
      }
      v29 = (v28 + 7) & 0xFFFFFFF8;
      v30 = v10;
      if ( v11 - v14 - 4 >= v29 )
      {
        v11 -= v29;
        v10 = (_DWORD *)((char *)v10 + v29);
        v28 = (v28 + 7) & 0xFFFFFFF8;
        v51 += v29;
      }
      else
      {
        v11 -= v28;
        v10 = (_DWORD *)((char *)v10 + v28);
        v51 += v28;
      }
      v30[2] = v28;
      ++v16;
    }
    else
    {
      v39 = *(struct _NDIS_MINIPORT_BLOCK **)(v61 + 8);
      if ( v39->MajorNdisVersion < 6u && (v17 & 0xFF000000) == 0xFF000000 || (v39->Flags & 0x80u) != 0 )
        goto LABEL_108;
      v40 = *(_QWORD *)(v61 + 16);
      if ( v40 )
      {
        v41 = *(_DWORD *)(v40 + 4);
        v42 = 0;
        if ( v41 )
        {
          v43 = *(_DWORD **)(v40 + 16);
          do
          {
            if ( *v43 == v17 )
              break;
            ++v42;
            ++v43;
          }
          while ( v42 < v41 );
        }
        if ( v42 < v41 )
        {
LABEL_108:
          if ( v17 == 16843010 )
          {
            if ( *(_DWORD *)(v9 + 464) == 3 )
              v17 = 67174658;
          }
          else if ( v17 == 16843009 && *(_DWORD *)(v9 + 464) == 3 )
          {
            v17 = 67174657;
          }
          if ( (*(_DWORD *)(v9 + 124) & 0x800) != 0 )
          {
            SetMiniport = -1073676282;
            goto LABEL_38;
          }
          if ( a8 )
            v21 = (__int64 *)((char *)v10 + v50);
          else
            v21 = (__int64 *)P;
          if ( *(_BYTE *)(v9 + 32) >= 6u )
          {
            if ( v17 == 131332 )
            {
              v44 = 16;
              goto LABEL_127;
            }
            if ( v17 > 0x20201 )
            {
              switch ( v17 )
              {
                case 0x20202u:
                  v44 = 64;
                  goto LABEL_127;
                case 0x20203u:
                  v44 = 136;
                  goto LABEL_127;
                case 0x20204u:
                  v44 = 72;
                  goto LABEL_127;
                case 0x20205u:
                  v44 = 144;
                  goto LABEL_127;
                case 0x20206u:
                  v44 = 80;
                  goto LABEL_127;
                case 0x20207u:
                  v44 = 104;
                  goto LABEL_127;
                case 0x20208u:
                  v44 = 32;
                  goto LABEL_127;
                case 0x20209u:
                  v44 = 112;
                  goto LABEL_127;
                case 0x2020Au:
                  v44 = 40;
                  goto LABEL_127;
                case 0x2020Bu:
                  v44 = 120;
                  goto LABEL_127;
                case 0x2020Cu:
                  v44 = 48;
                  goto LABEL_127;
                case 0x20219u:
                  v44 = 24;
                  goto LABEL_127;
                case 0x2021Au:
                  v44 = 56;
                  goto LABEL_127;
                case 0x2021Bu:
                  v44 = 8;
                  goto LABEL_127;
                case 0x2021Cu:
                  v44 = 96;
                  goto LABEL_127;
                default:
                  goto LABEL_47;
              }
            }
            if ( v17 == 131585 )
            {
              v44 = 128;
              goto LABEL_127;
            }
            if ( v17 == 131331 )
            {
              v44 = 88;
LABEL_127:
              if ( BYTE4(v49) )
              {
LABEL_128:
                v14 = v50;
                v45 = v11 - v50;
                if ( v17 == 131334 )
                {
                  if ( v45 < 0x98 )
                  {
                    v22 = 0;
                    SetMiniport = -1073676268;
                  }
                  else
                  {
                    memmove(v21, &Src, 0x98uLL);
                    v22 = 152;
                  }
                }
                else if ( v45 < 8 )
                {
                  v22 = 0;
                  SetMiniport = -1073676268;
                }
                else
                {
                  v22 = 8;
                  *v21 = *(_QWORD *)((char *)&Src + v44);
                }
LABEL_52:
                v9 = v57;
                if ( a8 )
                  v21 = 0LL;
                if ( SetMiniport )
                  goto LABEL_38;
                if ( !v22 )
                {
LABEL_56:
                  v16 = v53;
                  goto LABEL_57;
                }
LABEL_25:
                if ( !v21 )
                  goto LABEL_56;
LABEL_29:
                if ( v22 > v11 - v14 )
                {
                  SetMiniport = -1073676268;
LABEL_38:
                  v26 = v55;
                  goto LABEL_39;
                }
                memmove((char *)v10 + v14, v21, v22);
                goto LABEL_56;
              }
              memset(&v64[112], 0, 136);
              v74 = 0LL;
              *(_QWORD *)&v64[104] = &ndisIntReqIoctl;
              memset(v64, 0, 104);
              Src = 0LL;
              *(_DWORD *)&v64[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
              v66 = 0LL;
              v67 = 0LL;
              v68 = 0LL;
              v69 = 0LL;
              v70 = 0LL;
              v71 = 0LL;
              v72 = 0LL;
              v73 = 0LL;
              EtwActivityIdControl(3u, (LPGUID)&v64[168]);
              *(_DWORD *)v64 = 15466902;
              *(_DWORD *)&v64[56] = 0;
              *(_QWORD *)&v64[40] = &Src;
              *(_DWORD *)&v64[32] = 131334;
              *(_QWORD *)&v64[4] = 2LL;
              *(_QWORD *)&v64[48] = 152LL;
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qDq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  v46,
                  0x17u,
                  (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                  (char)v64,
                  6,
                  v39,
                  v49);
              SetMiniport = ndisQuerySetMiniport(v39, 0LL, (struct _NDIS_OID_REQUEST *)v64, 0, 0LL);
              if ( !SetMiniport )
              {
                BYTE4(v49) = 1;
                goto LABEL_128;
              }
              v22 = 0;
LABEL_51:
              v14 = v50;
              goto LABEL_52;
            }
            v44 = 0;
            if ( v17 == 131334 )
              goto LABEL_127;
          }
LABEL_47:
          memset(&v64[112], 0, 136);
          *(_QWORD *)&v64[104] = &ndisIntReqIoctl;
          memset(v64, 0, 104);
          *(_DWORD *)&v64[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
          EtwActivityIdControl(3u, (LPGUID)&v64[168]);
          *(_DWORD *)v64 = 15466902;
          *(_DWORD *)&v64[32] = v17;
          *(_DWORD *)&v64[48] = v11 - v50;
          *(_QWORD *)&v64[4] = 2LL;
          *(_QWORD *)&v64[40] = v21;
          *(_QWORD *)&v64[52] = 0LL;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qDq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              v27,
              0x17u,
              (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
              (char)v64,
              v17,
              v39);
          v22 = 0;
          SetMiniport = ndisQuerySetMiniport(v39, 0LL, (struct _NDIS_OID_REQUEST *)v64, 0, 0LL);
          if ( !SetMiniport )
            v22 = *(_DWORD *)&v64[52];
          goto LABEL_51;
        }
      }
      v14 = v50;
LABEL_59:
      ++v16;
    }
  }
  v26 = v55;
  SetMiniport = -1073676268;
  *v55 = 0;
LABEL_39:
  *v63 = v51;
  if ( *v26 && SetMiniport == -1073741637 )
    SetMiniport = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v48) = SetMiniport;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_8ea48a87d6d93b281ca763654e4bfa07_Traceguids,
      v9,
      v48);
  }
  return SetMiniport;
}
