/*
 * XREFs of ndisQueryStatisticsOids @ 0x140086E40
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015A1F0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x14000B730 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIsSatisfiedByOidGenStatistics@@YAKK@Z @ 0x14004A660 (-ndisIsSatisfiedByOidGenStatistics@@YAKK@Z.c)
 *     ?ndisVerifierInitialization@@YAEXZ @ 0x14008C580 (-ndisVerifierInitialization@@YAEXZ.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisQueryStatisticsOids(
        __int64 a1,
        struct _NDIS_USER_OPEN_CONTEXT *a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        size_t Size,
        _DWORD *a7,
        char a8,
        _BYTE *a9)
{
  _DWORD *v10; // r12
  unsigned int v11; // r13d
  int v12; // edx
  unsigned int v13; // r15d
  int v14; // edi
  unsigned int v15; // esi
  void *v16; // rcx
  void *Pool2; // rax
  unsigned int v19; // ebx
  __int64 v20; // rax
  unsigned int v21; // ebx
  int v22; // ecx
  struct _NDIS_USER_OPEN_CONTEXT *v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int i; // ecx
  int *v28; // rdi
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v30; // rsi
  unsigned int v31; // eax
  unsigned int BytesWritten; // ebx
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  int v38; // eax
  __int64 v39; // rbx
  int v40; // eax
  int v41; // ecx
  unsigned __int8 v42; // r8
  _QWORD *v43; // rcx
  _QWORD *v44; // rdx
  unsigned int v45; // ecx
  unsigned int v46; // edx
  _DWORD *v47; // r8
  _BYTE *v48; // rax
  int v49; // [rsp+40h] [rbp-C0h] BYREF
  char v50; // [rsp+44h] [rbp-BCh]
  unsigned int v51; // [rsp+48h] [rbp-B8h]
  int v52; // [rsp+4Ch] [rbp-B4h]
  int v53; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v54; // [rsp+58h] [rbp-A8h]
  int v55; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v56; // [rsp+64h] [rbp-9Ch]
  unsigned int v57; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h]
  struct _NDIS_USER_OPEN_CONTEXT *v61; // [rsp+88h] [rbp-78h]
  _DWORD *v62; // [rsp+90h] [rbp-70h]
  _DWORD *v63; // [rsp+98h] [rbp-68h]
  __int128 Src; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v65; // [rsp+B0h] [rbp-50h]
  __int128 v66; // [rsp+C0h] [rbp-40h]
  __int128 v67; // [rsp+D0h] [rbp-30h]
  __int128 v68; // [rsp+E0h] [rbp-20h]
  __int128 v69; // [rsp+F0h] [rbp-10h]
  __int128 v70; // [rsp+100h] [rbp+0h]
  __int128 v71; // [rsp+110h] [rbp+10h]
  __int128 v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+130h] [rbp+30h]
  struct _NDIS_OID_REQUEST v74; // [rsp+140h] [rbp+40h] BYREF

  v10 = a5;
  v11 = Size;
  v60 = a3;
  v61 = a2;
  v63 = a7;
  v54 = a9;
  v57 = a4;
  memset(&v74, 0, 0xF8uLL);
  v13 = 0;
  v14 = 0;
  v52 = 0;
  v50 = 0;
  v73 = 0LL;
  P = 0LL;
  v53 = 0;
  v59 = 0LL;
  v49 = 0;
  Src = 0LL;
  v55 = 0;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      13,
      (struct _GUID *)&WPP_a48ea93cdc4f3f22353657f4d507625f_Traceguids,
      a1);
  }
  *a7 = 0;
  if ( a8 )
  {
    v15 = 12;
    v16 = a5;
  }
  else
  {
    Pool2 = (void *)ExAllocatePool2(66LL, (unsigned int)Size, 1835091022LL);
    P = Pool2;
    if ( !Pool2 )
    {
      *a9 = 0;
      return 3221225626LL;
    }
    v15 = 8;
    v16 = Pool2;
  }
  v51 = v15;
  memset(v16, 0, (unsigned int)Size);
  v19 = 0;
  v56 = 0;
  if ( v57 )
  {
    while ( 1 )
    {
      memset(&v74, 0, 0xF8uLL);
      if ( v11 < v15 + 4 )
      {
        v48 = v54;
        v13 = -1073676268;
        *v54 = 0;
        goto LABEL_133;
      }
      v20 = v19;
      v21 = *(_DWORD *)(v60 + 4LL * v19);
      v62 = (_DWORD *)(v60 + 4 * v20);
      if ( (v21 & 0xFF000000) == 0x80000000 )
        v21 &= ~0x80000000;
      if ( v21 != 65796 && v21 != 66050 )
      {
        if ( v21 - 131603 > 5 || (v22 = 55, !_bittest(&v22, v21 - 131603)) )
        {
          if ( v21 != 0xFFFFFF && v21 != -50265850 )
            break;
        }
      }
      v13 = 0;
      if ( v21 > 0x20215 )
      {
        switch ( v21 )
        {
          case 0x20217u:
            v49 = *(_DWORD *)(a1 + 1872);
            if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
              v49 |= 0x1000000u;
            if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
              v49 |= 0x400u;
            v40 = v49;
            if ( (*(_DWORD *)(a1 + 120) & 0x4000000) != 0 )
            {
              v40 = v49 | 0x2000;
              v49 |= 0x2000u;
            }
            v41 = *(_DWORD *)(a1 + 124);
            if ( (v41 & 1) != 0 )
            {
              v40 |= 0x8000u;
              v49 = v40;
            }
            if ( (v41 & 0x1000) != 0 )
            {
              v40 |= 0x40000u;
              v49 = v40;
            }
            if ( (v41 & 0x2000) != 0 )
            {
              v40 |= 0x80000u;
              v49 = v40;
            }
            if ( (v41 & 0x200000) != 0 )
            {
              v40 |= 0x400000u;
              v49 = v40;
            }
            if ( (v41 & 0x400000) != 0 )
            {
              v40 |= 2u;
              v49 = v40;
            }
            if ( *(int *)(a1 + 3456) > 0 )
            {
              v40 |= 0x40000000u;
              v49 = v40;
            }
            v42 = *(_BYTE *)(a1 + 32);
            v43 = *(_QWORD **)(a1 + 3760);
            if ( v42 >= 6u )
            {
              if ( v43[25] )
                goto LABEL_108;
            }
            else
            {
              if ( !v43[37] )
              {
LABEL_103:
                if ( v43[24] && v43[15] )
                {
                  v44 = v43 + 27;
                  goto LABEL_106;
                }
LABEL_112:
                v44 = v43 + 27;
                goto LABEL_113;
              }
LABEL_108:
              v40 |= 0x800000u;
              v49 = v40;
            }
            if ( v42 < 6u )
              goto LABEL_103;
            if ( !v43[26] )
              goto LABEL_112;
            v44 = v43 + 27;
            if ( !v43[27] )
              goto LABEL_112;
LABEL_106:
            v40 |= 0x80u;
            v49 = v40;
LABEL_113:
            if ( v42 >= 6u && *v44 )
              v49 = v40 | 8;
            v28 = &v49;
            goto LABEL_117;
          case 0x20218u:
            BytesWritten = 4;
            ndisFlags = *(_DWORD *)((char *)v10 + v15);
            ndisVerifierInitialization();
            if ( (ndisFlags & 4) == 0 )
              ndisVerifierLevel &= ~4u;
            v74.DATA.QUERY_INFORMATION.BytesWritten = 4;
            goto LABEL_121;
          case 0xFFFFFFu:
            v39 = MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 1592);
            v28 = (int *)&v59;
            v59 = v39 * KeQueryTimeIncrement() / 10000000;
            goto LABEL_117;
          case 0xFD010106:
            v28 = (int *)(a1 + 1292);
LABEL_76:
            BytesWritten = 4;
LABEL_77:
            if ( v28 )
            {
LABEL_118:
              if ( BytesWritten > v11 - v15 )
              {
                v13 = -1073676268;
LABEL_131:
                v14 = v52;
                goto LABEL_132;
              }
              memmove((char *)v10 + v15, v28, BytesWritten);
            }
LABEL_120:
            v14 = v52;
LABEL_121:
            v45 = BytesWritten + v15;
            *v10 = *v62;
            v10[1] = BytesWritten;
            if ( a8 )
            {
              v46 = (v45 + 7) & 0xFFFFFFF8;
              v47 = v10;
              if ( v11 - v15 - 4 >= v46 )
              {
                v11 -= v46;
                v10 = (_DWORD *)((char *)v10 + v46);
                v47[2] = v46;
                v14 += v46;
              }
              else
              {
                v11 -= v45;
                v10 = (_DWORD *)((char *)v10 + v45);
                v47[2] = v45;
                v14 += v45;
              }
            }
            else
            {
              v11 -= v45;
              v10 = (_DWORD *)((char *)v10 + v45);
              v14 += v45;
            }
            v52 = v14;
            break;
        }
      }
      else
      {
        if ( v21 == 131605 )
        {
          v28 = &v53;
          v53 = *(unsigned __int16 *)(a1 + 1790) + (*(unsigned __int16 *)(a1 + 1788) << 16);
          goto LABEL_117;
        }
        v35 = v21 - 65796;
        if ( !v35 )
        {
          v28 = (int *)(a1 + 464);
          goto LABEL_76;
        }
        v36 = v35 - 254;
        if ( !v36 )
        {
          v38 = *(_DWORD *)(a1 + 1832);
          v28 = &v55;
          if ( v38 == 14 )
            v38 = 0;
          v55 = v38;
LABEL_117:
          BytesWritten = 4;
          goto LABEL_118;
        }
        v37 = v36 - 65553;
        if ( !v37 )
        {
          v28 = (int *)(a1 + 1624);
          goto LABEL_76;
        }
        if ( v37 == 1 )
        {
          v28 = &v53;
          v53 = *(unsigned __int16 *)(a1 + 1784) + *(unsigned __int16 *)(a1 + 1786);
          goto LABEL_117;
        }
      }
LABEL_127:
      v19 = v56 + 1;
      v56 = v19;
      if ( v19 >= v57 )
        goto LABEL_132;
    }
    v23 = v61;
    v24 = *((_QWORD *)v61 + 1);
    if ( (*(_BYTE *)(v24 + 32) >= 6u || (v21 & 0xFF000000) != 0xFF000000) && (*(_DWORD *)(v24 + 120) & 0x80u) == 0 )
    {
      v25 = *((_QWORD *)v61 + 2);
      if ( !v25 )
        goto LABEL_127;
      v26 = *(_DWORD *)(v25 + 4);
      for ( i = 0; i < v26; ++i )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v25 + 16) + 4LL * i) == v21 )
          break;
      }
      if ( i >= v26 )
        goto LABEL_127;
    }
    if ( v21 == 16843010 )
    {
      if ( *(_DWORD *)(a1 + 464) == 3 )
        v21 = 67174658;
    }
    else if ( v21 == 16843009 && *(_DWORD *)(a1 + 464) == 3 )
    {
      v21 = 67174657;
    }
    if ( (*(_DWORD *)(a1 + 124) & 0x800) != 0 )
    {
      v13 = -1073676282;
      goto LABEL_132;
    }
    if ( a8 )
      v28 = (_DWORD *)((char *)v10 + v15);
    else
      v28 = (int *)P;
    if ( *(_BYTE *)(a1 + 32) >= 6u )
    {
      IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(v21);
      v30 = IsSatisfiedByOidGenStatistics;
      if ( IsSatisfiedByOidGenStatistics || v21 == 131334 )
      {
        if ( !v50 )
        {
          v73 = 0LL;
          Src = 0LL;
          v65 = 0LL;
          v66 = 0LL;
          v67 = 0LL;
          v68 = 0LL;
          v69 = 0LL;
          v70 = 0LL;
          v71 = 0LL;
          v72 = 0LL;
          v13 = ndisQueryDeviceOid(v23, &v74, 0x20106u, &Src, 0x98u);
          if ( v13 )
          {
            v15 = v51;
            BytesWritten = 0;
            goto LABEL_53;
          }
          v50 = 1;
        }
        v31 = v11 - v51;
        if ( v21 == 131334 )
        {
          if ( v31 >= 0x98 )
          {
            memmove(v28, &Src, 0x98uLL);
            v15 = v51;
            BytesWritten = 152;
          }
          else
          {
            v15 = v51;
            BytesWritten = 0;
            v13 = -1073676268;
          }
        }
        else if ( v31 >= 8 )
        {
          v33 = *(_QWORD *)((char *)&Src + v30);
          BytesWritten = 8;
          v15 = v51;
          *(_QWORD *)v28 = v33;
        }
        else
        {
          v15 = v51;
          BytesWritten = 0;
          v13 = -1073676268;
        }
LABEL_53:
        if ( a8 )
          v28 = 0LL;
        if ( v13 )
          goto LABEL_131;
        if ( BytesWritten )
          goto LABEL_77;
        goto LABEL_120;
      }
      v15 = v51;
    }
    v34 = ndisQueryDeviceOid(v23, &v74, v21, v28, v11 - v15);
    BytesWritten = 0;
    v13 = v34;
    if ( !v34 )
      BytesWritten = v74.DATA.QUERY_INFORMATION.BytesWritten;
    goto LABEL_53;
  }
LABEL_132:
  v48 = v54;
LABEL_133:
  *v63 = v14;
  if ( *v48 && v13 == -1073741637 )
    v13 = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_a48ea93cdc4f3f22353657f4d507625f_Traceguids,
      a1,
      v13);
  return v13;
}
