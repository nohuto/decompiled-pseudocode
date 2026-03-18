/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x140017BC0
 * Callers:
 *     Bulk_MapStage @ 0x1400176E0 (Bulk_MapStage.c)
 *     Bulk_EvtDmaCallback @ 0x140017B70 (Bulk_EvtDmaCallback.c)
 * Callees:
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x14000C730 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x140019000 (TR_AddTRBRangeToSecureTransferRing.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     TR_GetPacketCount @ 0x140020F50 (TR_GetPacketCount.c)
 *     TR_CalculateTDSize @ 0x140021070 (TR_CalculateTDSize.c)
 *     Bulk_InsertLinkTrb @ 0x140024EC0 (Bulk_InsertLinkTrb.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x1400358C4 (WPP_RECORDER_SF_DDDDqDD.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x140035FE8 (WPP_RECORDER_SF_DDDDq.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     memmove @ 0x140058BC0 (memmove.c)
 */

__int64 __fastcall Bulk_Stage_MapIntoRing(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int16 v8; // ax
  __int64 v9; // rbx
  unsigned __int16 v10; // si
  __int64 v11; // rbx
  unsigned __int16 v12; // ax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned int PacketCount; // eax
  __int64 v16; // r9
  __int64 v17; // r13
  unsigned int v18; // r12d
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned int v22; // r10d
  __int64 v23; // r8
  unsigned int v24; // edx
  _OWORD *v25; // rsi
  __int64 v26; // r11
  __int64 v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // esi
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned int v32; // esi
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rax
  int v37; // edx
  _DWORD *v38; // rax
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  char v41; // al
  int v42; // ecx
  unsigned int v43; // r8d
  int v44; // eax
  int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rdx
  int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rdx
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rdx
  int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rdx
  int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // rdx
  int v65; // ecx
  __int64 v66; // rax
  __int64 v67; // rdx
  int v68; // ecx
  __int64 v69; // rax
  KIRQL v70; // al
  __int64 v71; // rcx
  KIRQL v72; // dl
  __int64 result; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rdi
  __int64 v77; // r8
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rcx
  _UNKNOWN **v82; // rdx
  _UNKNOWN **v83; // rdx
  int v84; // ebx
  char v85; // r9
  signed __int32 v86[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v87; // [rsp+20h] [rbp-E0h]
  __int64 v88; // [rsp+28h] [rbp-D8h]
  unsigned int v89; // [rsp+60h] [rbp-A0h]
  unsigned int v90; // [rsp+64h] [rbp-9Ch]
  __int128 v91; // [rsp+68h] [rbp-98h] BYREF
  __int64 v92; // [rsp+78h] [rbp-88h]
  __int64 v93; // [rsp+80h] [rbp-80h] BYREF
  __int64 v94; // [rsp+88h] [rbp-78h]
  int v95; // [rsp+90h] [rbp-70h]
  unsigned int v96; // [rsp+94h] [rbp-6Ch]
  int v97; // [rsp+9Ch] [rbp-64h]
  unsigned int v98; // [rsp+A0h] [rbp-60h]
  int v99; // [rsp+A4h] [rbp-5Ch]
  __int64 v100; // [rsp+B0h] [rbp-50h]
  __int64 v101; // [rsp+B8h] [rbp-48h]
  _OWORD *v102; // [rsp+C8h] [rbp-38h]
  __int128 v103; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v104; // [rsp+E0h] [rbp-20h]
  __int64 v105; // [rsp+E8h] [rbp-18h]
  __int128 v106; // [rsp+F0h] [rbp-10h]

  v101 = *(_QWORD *)a1;
  HIDWORD(v92) = 0;
  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_QWORD *)(v101 + 56);
  v4 = *(_QWORD *)(v101 + 48);
  v5 = *(_QWORD *)(v3 + 40);
  v100 = *(_QWORD *)(v5 + 856);
  if ( _bittest64((const signed __int64 *)(v5 + 736), 0x22u)
    && (v6 = *(_QWORD *)(v3 + 48), *(_DWORD *)(v6 + 40))
    && (v7 = *(_QWORD *)(v3 + 56), *(char *)(v7 + 98) < 0)
    && *(_DWORD *)(v6 + 20) <= 1u
    && (!(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
     || *(_WORD *)(v7 + 100)
     || !*(_BYTE *)(v7 + 39)
     || ((*(_DWORD *)(v7 + 128) - 1) & 0xFFFFFFFB) != 0
      ? (v8 = *(_WORD *)(v7 + 100) & 0x7FF)
      : (v8 = *(_WORD *)(v7 + 105)),
        v2 % v8) )
  {
    v9 = *(_QWORD *)(v3 + 56);
    if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      || *(_WORD *)(v9 + 100)
      || !*(_BYTE *)(v9 + 39)
      || ((*(_DWORD *)(v9 + 128) - 1) & 0xFFFFFFFB) != 0 )
    {
      v10 = *(_WORD *)(v9 + 100) & 0x7FF;
    }
    else
    {
      v10 = *(_WORD *)(v9 + 105);
    }
    v11 = *(_QWORD *)(v3 + 56);
    if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      || *(_WORD *)(v11 + 100)
      || !*(_BYTE *)(v11 + 39)
      || ((*(_DWORD *)(v11 + 128) - 1) & 0xFFFFFFFB) != 0 )
    {
      v12 = *(_WORD *)(v11 + 100) & 0x7FF;
    }
    else
    {
      v12 = *(_WORD *)(v11 + 105);
    }
    v13 = v10 - v2 % v12;
  }
  else
  {
    v13 = 0;
  }
  v14 = *(unsigned int *)(a1 + 40);
  v95 = *(_DWORD *)(v4 + 32) & 1;
  v89 = v13;
  PacketCount = TR_GetPacketCount(v3, v14);
  v16 = *(unsigned int *)(a1 + 80);
  v96 = PacketCount;
  v17 = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  v18 = 0;
  v19 = 5;
  v94 = *(_QWORD *)(v3 + 184) + 16LL * *(unsigned int *)(v3 + 192);
  v20 = *(_QWORD *)(v3 + 40);
  v90 = 0;
  LODWORD(v92) = v16;
  if ( (*(_QWORD *)(v20 + 736) & 8) != 0 )
  {
    LOBYTE(v16) = 1;
    v21 = 5LL;
LABEL_28:
    Bulk_InsertLinkTrb(v3, a1, v21, v16);
LABEL_29:
    v16 = (unsigned int)v92;
    goto LABEL_30;
  }
  do
  {
LABEL_30:
    v22 = *(_DWORD *)(v3 + 192);
    v23 = *(_QWORD *)(v3 + 184);
    v24 = *(_DWORD *)(v3 + 196);
    v25 = (_OWORD *)(v23 + 16LL * v22);
    v102 = v25;
    v91 = 0LL;
    if ( v22 + (unsigned int)v16 > v24 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DDDDq(
            *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 143LL),
            v23,
            17,
            v87,
            *(_BYTE *)(*(_QWORD *)(v3 + 48) + 143LL),
            *(_DWORD *)(*(_QWORD *)(v3 + 56) + 152LL),
            *(_DWORD *)(v3 + 64),
            v22,
            (char)v25);
      }
      LOBYTE(v16) = v25 == (_OWORD *)v94;
      Bulk_InsertLinkTrb(v3, a1, v19, v16);
      goto LABEL_29;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 736LL) & 0x2000000000000LL) != 0 )
    {
      v26 = *(_QWORD *)(v3 + 48);
      if ( *(_DWORD *)(v26 + 20) == 3 )
      {
        v27 = *(_QWORD *)(v3 + 56);
        if ( *(_DWORD *)(v27 + 128) == 6 && v19 == 7 && v22 + 9 > v24 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_DDDDq(
              *(_QWORD *)(v27 + 80),
              *(unsigned __int8 *)(v26 + 143),
              v23,
              18,
              v87,
              *(_BYTE *)(v26 + 143),
              *(_DWORD *)(v27 + 152),
              *(_DWORD *)(v3 + 64),
              v22,
              v23 + 16 * v22);
          }
          v21 = 7LL;
          LOBYTE(v16) = v25 == (_OWORD *)v94;
          goto LABEL_28;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDDDqDD(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        v23 + 16 * v22,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 143LL),
        v16,
        v87,
        *(_BYTE *)(*(_QWORD *)(v3 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(v3 + 56) + 152LL),
        *(_DWORD *)(v3 + 64),
        v22,
        v23 + 16 * v22,
        *(_DWORD *)(a1 + 88),
        v16);
      v16 = (unsigned int)v92;
    }
    if ( v19 != 5 )
    {
      v28 = DWORD2(v91);
      if ( v19 != 7 )
      {
        v19 = 7;
        v28 = v13 & 0x1FFFF | DWORD2(v91) & 0xFFC00000;
        v29 = HIDWORD(v91) & 0xFFFF03EF | 0x410;
        *(_QWORD *)&v91 = *(_QWORD *)(v100 + 24);
        ++*(_DWORD *)(a1 + 88);
        v89 = 0;
LABEL_50:
        v13 = v89;
        v29 |= 2u;
        v16 = 1LL;
        HIDWORD(v91) = v29;
        LODWORD(v92) = 1;
        goto LABEL_81;
      }
      v30 = *(_QWORD *)(v3 + 56);
      v29 = HIDWORD(v91) & 0xFFFF03DF | 0x1C20;
      v19 = 9;
      HIDWORD(v91) = v29;
      v31 = *(unsigned __int8 *)(v30 + 99) ^ (a1 ^ *(unsigned __int8 *)(v30 + 99)) & 0xFFFFFFFFFFFFFFFCuLL;
      ++*(_DWORD *)(a1 + 88);
      *(_QWORD *)&v91 = v31;
      goto LABEL_81;
    }
    v32 = HIDWORD(v91) & 0xFFFF03FF | 0x400;
    HIDWORD(v91) = v32;
    v33 = *(_DWORD *)(v101 + 76);
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          if ( v35 == 1 )
          {
            if ( v18 )
            {
              v37 = HIDWORD(v92);
            }
            else
            {
              v36 = *(_QWORD *)(a1 + 56);
              v37 = HIDWORD(v92);
              v17 = *(_QWORD *)(v36 + 24LL * HIDWORD(v92) + 16);
              v18 = *(_DWORD *)(v36 + 24LL * HIDWORD(v92) + 24);
            }
            *(_QWORD *)&v91 = v17;
            if ( v18 > 0x10000 )
            {
              v17 += 0x10000LL;
              v39 = DWORD2(v91) & 0xFFFE0000 | 0x10000;
              v19 = 5;
              v18 -= 0x10000;
            }
            else
            {
              v38 = *(_DWORD **)(a1 + 56);
              v39 = v18 & 0x1FFFF | DWORD2(v91) & 0xFFFE0000;
              HIDWORD(v92) = v37 + 1;
              v18 = 0;
              v19 = 7;
              if ( *v38 != v37 + 1 )
                v19 = 5;
            }
          }
          else
          {
            v39 = DWORD2(v91);
          }
          goto LABEL_72;
        }
        if ( !v95 )
          memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
        v40 = *(_DWORD *)(a1 + 40);
        *(_QWORD *)&v91 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
      }
      else
      {
        v40 = *(_DWORD *)(a1 + 40);
        memmove(&v91, *(const void **)(a1 + 64), v40);
        v32 = HIDWORD(v91) | 0x40;
      }
      v39 = DWORD2(v91) & 0xFFFE0000 | v40 & 0x1FFFF;
    }
    else
    {
      v39 = DWORD2(v91) & 0xFFFE0000;
    }
    v19 = 7;
LABEL_72:
    v90 += v39 & 0x1FFFF;
    LOBYTE(v16) = v19 == 7;
    v41 = TR_CalculateTDSize(v3, v96, v90, v16);
    v29 = v32 | 0x10;
    HIDWORD(v91) = v29;
    v28 = v39 & 0xFFC1FFFF | ((v41 & 0x1F) << 17);
    v16 = (unsigned int)(v92 - 1);
    v42 = HIDWORD(v92);
    v13 = v89;
    v43 = v90;
    v44 = *(_DWORD *)(a1 + 88) + 1;
    LODWORD(v93) = v92 - 1;
    v98 = v90;
    HIDWORD(v93) = HIDWORD(v92);
    LODWORD(v92) = v92 - 1;
    v97 = HIDWORD(v92);
    v99 = v44;
    *(_DWORD *)(a1 + 88) = v44;
    HIDWORD(v92) = v42;
    v89 = v13;
    if ( v19 == 7 )
    {
      v90 = v43;
      if ( !v13 )
        goto LABEL_50;
      HIDWORD(v92) = v42;
      v90 = v43;
      v89 = v13;
      if ( !v100 )
        goto LABEL_50;
      v90 = v43;
      v19 = 8;
      v28 = v28 & 0xFFC1FFFF | ((v28 & 0xFFFE0000) + 0x20000) & 0x3E0000;
      v45 = v97;
    }
    else
    {
      v16 = (unsigned int)v93;
      v90 = v98;
      v92 = v93;
      v89 = v13;
      if ( (_DWORD)v93 )
        goto LABEL_81;
      v16 = *(unsigned int *)(a1 + 80);
      v46 = *(_DWORD *)(a1 + 84) - v99;
      LODWORD(v92) = v16;
      v90 = v98;
      if ( (unsigned int)v16 >= v46 )
      {
        v16 = v46;
        LODWORD(v92) = v46;
      }
      v45 = HIDWORD(v93);
    }
    HIDWORD(v92) = v45;
    v89 = v13;
LABEL_81:
    if ( v102 != (_OWORD *)v94 )
      HIDWORD(v91) = v29 & 0xFFFFFFFE | *(_DWORD *)(v3 + 200) & 1;
    DWORD2(v91) = v28 & 0x3FFFFF | (*(unsigned __int16 *)(v3 + 112) << 22);
    *v102 = v91;
    v47 = (unsigned int)(*(_DWORD *)(v3 + 192) + 1);
    *(_DWORD *)(v3 + 192) = v47;
  }
  while ( v19 != 9 );
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v3 + 40) + 736LL), 0x31u)
    && *(_DWORD *)(*(_QWORD *)(v3 + 48) + 20LL) == 3
    && *(_DWORD *)(*(_QWORD *)(v3 + 56) + 128LL) == 6 )
  {
    v48 = *(_DWORD *)(v3 + 200) & 1;
    v91 = 0LL;
    HIDWORD(v91) = v48 | 0x2000;
    *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16 * v47) = v91;
    v49 = (unsigned int)++*(_DWORD *)(v3 + 192);
    v50 = *(_DWORD *)(v3 + 200) & 1;
    v91 = 0LL;
    v51 = *(_QWORD *)(v3 + 184);
    HIDWORD(v91) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE | v50 | 0x2000;
    *(_OWORD *)(v51 + 16 * v49) = v91;
    v52 = (unsigned int)++*(_DWORD *)(v3 + 192);
    v53 = *(_DWORD *)(v3 + 200) & 1;
    v91 = 0LL;
    v54 = *(_QWORD *)(v3 + 184);
    HIDWORD(v91) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE | v53 | 0x2000;
    *(_OWORD *)(v54 + 16 * v52) = v91;
    v55 = (unsigned int)++*(_DWORD *)(v3 + 192);
    v56 = *(_DWORD *)(v3 + 200) & 1;
    v91 = 0LL;
    v57 = *(_QWORD *)(v3 + 184);
    HIDWORD(v91) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE | v56 | 0x2000;
    *(_OWORD *)(v57 + 16 * v55) = v91;
    v58 = (unsigned int)++*(_DWORD *)(v3 + 192);
    v59 = *(_DWORD *)(v3 + 200) & 1;
    v91 = 0LL;
    v60 = *(_QWORD *)(v3 + 184);
    HIDWORD(v91) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE | v59 | 0x2000;
    *(_OWORD *)(v60 + 16 * v58) = v91;
    v61 = (unsigned int)++*(_DWORD *)(v3 + 192);
    v62 = *(_DWORD *)(v3 + 200) & 1;
    v91 = 0LL;
    v63 = *(_QWORD *)(v3 + 184);
    HIDWORD(v91) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE | v62 | 0x2000;
    *(_OWORD *)(v63 + 16 * v61) = v91;
    v64 = (unsigned int)++*(_DWORD *)(v3 + 192);
    v65 = *(_DWORD *)(v3 + 200) & 1;
    v91 = 0LL;
    v66 = *(_QWORD *)(v3 + 184);
    HIDWORD(v91) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE | v65 | 0x2000;
    *(_OWORD *)(v66 + 16 * v64) = v91;
    v67 = (unsigned int)++*(_DWORD *)(v3 + 192);
    v68 = *(_DWORD *)(v3 + 200) & 1;
    v91 = 0LL;
    v69 = *(_QWORD *)(v3 + 184);
    HIDWORD(v91) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12)) & 0xFFFF23FE | v68 | 0x2000;
    *(_OWORD *)(v69 + 16 * v67) = v91;
    ++*(_DWORD *)(v3 + 192);
  }
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v3 + 192);
  *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16LL * *(unsigned int *)(v3 + 192)) = 0LL;
  v70 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  v71 = v101;
  *(_BYTE *)(v3 + 104) = v70;
  ++*(_DWORD *)(v71 + 120);
  *(_DWORD *)(v71 + 112) += *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1004LL) == 1 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 356));
  else
    ++*(_DWORD *)(v3 + 356);
  v72 = *(_BYTE *)(v3 + 104);
  *(_DWORD *)(v3 + 332) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v72);
  *(_BYTE *)(v94 + 12) ^= 1u;
  _InterlockedOr(v86, 0);
  TR_AddTRBRangeToSecureTransferRing(
    v3,
    a1 + 24,
    *(_QWORD *)(a1 + 112),
    *(_DWORD *)(a1 + 104),
    *(_DWORD *)(a1 + 120),
    a1 + 128);
  result = *(_QWORD *)(v3 + 56);
  v74 = *(unsigned __int8 *)(v3 + 288);
  v75 = *(unsigned int *)(v3 + 64);
  v76 = *(_QWORD *)(result + 16);
  v77 = *(unsigned int *)(result + 152);
  if ( *(_QWORD *)(v76 + 168) )
  {
    v84 = ((_DWORD)v75 << 16) | (unsigned __int8)v77;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v85 = *(_BYTE *)(v76 + 143);
      LODWORD(v88) = v75;
      LODWORD(v87) = v77;
      McTemplateK0uqq_EtwWriteTransfer(v74, v75, v77, v85, v87, v88);
    }
    result = *(_QWORD *)(v76 + 168);
    *(_DWORD *)result = v84;
    _InterlockedOr(v86, 0);
  }
  else if ( !(_BYTE)v74 )
  {
    v78 = *(_QWORD *)(v76 + 672);
    LODWORD(v93) = 0;
    LODWORD(v87) = 4;
    v79 = *(_QWORD *)(v78 + 8);
    v80 = *(_QWORD *)(v76 + 616);
    v81 = *(_QWORD *)(v79 + 112);
    v106 = 0LL;
    BYTE8(v106) = v77;
    WORD5(v106) = v75;
    v104 = 0LL;
    v105 = v80;
    v103 = 0LL;
    LODWORD(v106) = 32;
    result = SecureChannel_SendRequestSynchronously(v81, &v103, 48LL, &v93, 4);
    if ( (int)result >= 0 )
    {
      result = (unsigned int)v93;
      if ( (int)v93 < 0 )
      {
        v83 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v83) = 2;
          return WPP_RECORDER_SF_d(
                   *(_QWORD *)(v79 + 72),
                   (_DWORD)v83,
                   12,
                   13,
                   (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
                   v93);
        }
      }
    }
    else
    {
      v82 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v82) = 2;
        return WPP_RECORDER_SF_d(
                 *(_QWORD *)(v79 + 72),
                 (_DWORD)v82,
                 12,
                 12,
                 (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
                 result);
      }
    }
  }
  return result;
}
