/*
 * XREFs of EtwpApplyPayloadFilterInternal @ 0x1403E84E0
 * Callers:
 *     EtwpApplyEventIdPayloadFilter @ 0x1403E82B0 (EtwpApplyEventIdPayloadFilter.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     EtwpApplyPredicate @ 0x1403E8DC0 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1403E8E80 (EtwpGetFieldValue.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1407B73D0 (ExSystemExceptionFilter.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpApplyPayloadFilterInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        void *a3,
        char a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  __int64 v9; // rbx
  char v10; // r10
  __int64 v11; // rax
  __int64 v12; // r11
  unsigned int v13; // r8d
  unsigned int v14; // edx
  bool v15; // zf
  __int64 v16; // rdi
  __int64 v17; // rsi
  char StackLimits; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  void *v22; // rsp
  void *v23; // rsp
  char *v24; // r9
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  void *v27; // rsp
  void *v28; // rsp
  char *v29; // r13
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // r8d
  __int64 v34; // r9
  unsigned __int64 v35; // r8
  __int64 v36; // r11
  unsigned int v37; // r8d
  unsigned int v38; // edi
  unsigned __int64 v39; // r15
  __int64 v40; // r14
  char *v41; // r10
  unsigned int v42; // eax
  __int64 v43; // rsi
  __int64 v44; // rcx
  int v45; // r9d
  unsigned int v46; // esi
  char *v47; // rax
  unsigned int v48; // edx
  char *v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // r8
  unsigned __int16 *v52; // r15
  char v53; // r11
  unsigned int v54; // r10d
  unsigned __int16 *v55; // rdi
  char v56; // si
  char v57; // r14
  unsigned int v58; // ebx
  __int16 v59; // cx
  __int64 v60; // rax
  char v61; // dl
  char v63; // al
  unsigned int v64; // edx
  _BYTE *v65; // rax
  unsigned int v66; // edx
  unsigned int v67; // r8d
  unsigned int v68; // eax
  _WORD *v69; // rdx
  unsigned int v70; // eax
  int v71; // esi
  unsigned int v72; // r8d
  __int64 v73; // rdx
  char v74; // cl
  __int64 v75; // rdx
  char v76; // cl
  char v77; // [rsp+30h] [rbp+0h] BYREF
  char v78; // [rsp+31h] [rbp+1h]
  char v79; // [rsp+32h] [rbp+2h] BYREF
  char v80; // [rsp+33h] [rbp+3h]
  int v81; // [rsp+34h] [rbp+4h]
  unsigned int v82; // [rsp+38h] [rbp+8h]
  unsigned int v83; // [rsp+3Ch] [rbp+Ch]
  char *v84; // [rsp+40h] [rbp+10h]
  __int64 v85; // [rsp+48h] [rbp+18h] BYREF
  char v86; // [rsp+50h] [rbp+20h]
  ULONG SubAuthorityCount[2]; // [rsp+58h] [rbp+28h] BYREF
  __int64 v88; // [rsp+60h] [rbp+30h]
  unsigned int v89; // [rsp+68h] [rbp+38h]
  char *v90; // [rsp+70h] [rbp+40h]
  __int64 v91; // [rsp+78h] [rbp+48h]
  unsigned __int16 v92; // [rsp+80h] [rbp+50h]
  unsigned int v93; // [rsp+84h] [rbp+54h]
  int v94; // [rsp+88h] [rbp+58h]
  _QWORD v95[3]; // [rsp+90h] [rbp+60h] BYREF

  v9 = a2;
  *(_QWORD *)SubAuthorityCount = 0LL;
  v79 = 0;
  v81 = -1073741811;
  if ( a2 > 0x80 )
    return 3221225485LL;
  v92 = *a1;
  v10 = *((_BYTE *)a1 + 2);
  v86 = v10;
  v11 = *(_QWORD *)(a6 + 8);
  if ( !_bittest64(&v11, v92 % 0x3Fu) )
    goto LABEL_65;
  v82 = 0;
  v12 = a6 + *(unsigned __int16 *)(a6 + 32);
  v13 = 0;
  v14 = *(unsigned __int16 *)(a6 + 34) / 0xCu;
  while ( 1 )
  {
    v91 = v12;
    v15 = v13 == v14;
    if ( v13 >= v14 )
      break;
    if ( *(_WORD *)v12 == v92 && *(_BYTE *)(v12 + 2) == v10 )
    {
      v15 = v13 == v14;
      break;
    }
    if ( *(unsigned __int8 *)(v12 + 3) >= (unsigned int)*(_WORD *)(v12 + 6) )
      return 3221225485LL;
    v12 += 12LL;
    ++v13;
  }
  if ( v15 )
  {
LABEL_65:
    *a7 = 1;
    return 0LL;
  }
  else
  {
    v16 = (unsigned int)(16 * v9);
    v93 = *(unsigned __int8 *)(v12 + 3) + 1;
    v17 = 4 * v93;
    v95[0] = 0LL;
    v85 = 0LL;
    StackLimits = RtlpGetStackLimits((__int64)&v85, (__int64)v95);
    v19 = v85;
    if ( !StackLimits )
      v19 = 0LL;
    if ( (unsigned __int64)v95 - v19 < (unsigned int)(v17 + v16 + 4096) )
    {
      return 3221225626LL;
    }
    else
    {
      v20 = v17 + 15;
      if ( v17 + 15 <= (unsigned __int64)(unsigned int)v17 )
        v20 = 0xFFFFFFFFFFFFFF0LL;
      v21 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
      v22 = alloca(v21);
      v23 = alloca(v21);
      v24 = &v77;
      v84 = &v77;
      if ( a4 )
      {
        v25 = v16 + 15;
        if ( v16 + 15 <= (unsigned __int64)(unsigned int)v16 )
          v25 = 0xFFFFFFFFFFFFFF0LL;
        v26 = v25 & 0xFFFFFFFFFFFFFFF0uLL;
        v27 = alloca(v26);
        v28 = alloca(v26);
        v29 = &v77;
        if ( (_DWORD)v16 && ((unsigned __int8)a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        memmove(&v77, a3, (unsigned int)v16);
        v30 = 0;
        v31 = 0;
        v89 = 0;
        v32 = 0;
        v33 = 0;
        while ( v32 < (unsigned int)v9 )
        {
          v34 = *(&v82 + 4 * v33);
          if ( (_DWORD)v34 )
          {
            v35 = *((_QWORD *)&v77 + 2 * v30);
            if ( v35 + v34 < v35 || v35 + v34 > 0x7FFFFFFF0000LL )
              v31 = v89;
          }
          v30 = ++v31;
          v32 = v31;
          v89 = v31;
          v33 = v31;
        }
        v24 = v84;
      }
      else
      {
        v29 = (char *)a3;
      }
      v36 = a6 + *(unsigned __int16 *)(a6 + 36);
      v88 = v36;
      v37 = 0;
      v81 = 0;
      v38 = 0;
      v39 = (unsigned __int64)v29;
      v40 = v36 + 4LL * *(unsigned __int16 *)(v91 + 4);
      v41 = v24;
      v90 = v24;
      v42 = 0;
      while ( 1 )
      {
        v83 = v42;
        if ( v42 >= v93 )
          break;
        if ( v37 == (_DWORD)v9 )
          return 3221225990LL;
        if ( (*(_BYTE *)v40 & 0xF) == 7 )
        {
          if ( *(_WORD *)(v40 + 2) )
            return 3221225520LL;
          v41[3] = v37;
          *(_DWORD *)v41 = (*(_DWORD *)v41 & 0xFF000FFF ^ ((v38 & 0xFFF) << 12)) & 0xFFFFF000;
          v49 = v90;
        }
        else
        {
          v43 = *(unsigned __int16 *)(v40 + 2);
          if ( (*(_BYTE *)v40 & 0xF) == 8 )
          {
            v43 = 8LL;
            if ( !a5 )
              v43 = 4LL;
          }
          if ( (*(_BYTE *)v40 & 0x10) != 0 )
          {
            if ( (unsigned int)v43 >= v83 )
              return 3221225520LL;
            v75 = 4 * v43;
            v76 = *(_BYTE *)(4 * v43 + v36);
            if ( (unsigned __int8)((v76 & 0xF) - 1) > 1u )
              return 3221225520LL;
            if ( (v76 & 0x30) != 0 )
              return 3221225520LL;
            if ( *(_WORD *)(v75 + v36 + 2) > 8u )
              return 3221225520LL;
            if ( *(_BYTE *)(v75 + v36 + 1) != 1 )
              return 3221225520LL;
            _mm_lfence();
            if ( !(unsigned __int8)EtwpGetFieldValue(
                                     *(_QWORD *)&v29[16 * ((unsigned __int64)*(unsigned int *)&v24[v75] >> 24)]
                                   + (((unsigned __int64)*(unsigned int *)&v24[v75] >> 12) & 0xFFF),
                                     *(unsigned __int16 *)(v75 + v36 + 2),
                                     SubAuthorityCount) )
              return 3221225520LL;
            LODWORD(v43) = SubAuthorityCount[0];
            if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
              return 3221225520LL;
            v24 = v84;
            v36 = v88;
          }
          v44 = *(unsigned __int8 *)(v40 + 1);
          v85 = v44;
          if ( (*(_BYTE *)v40 & 0x20) != 0 )
          {
            if ( (unsigned int)v44 >= v83 )
              return 3221225520LL;
            v73 = 4 * v44;
            v74 = *(_BYTE *)(4 * v44 + v36);
            if ( (unsigned __int8)((v74 & 0xF) - 1) > 1u )
              return 3221225520LL;
            if ( (v74 & 0x30) != 0 )
              return 3221225520LL;
            if ( *(_WORD *)(v73 + v36 + 2) > 8u )
              return 3221225520LL;
            if ( *(_BYTE *)(v73 + v36 + 1) != 1 )
              return 3221225520LL;
            _mm_lfence();
            if ( !(unsigned __int8)EtwpGetFieldValue(
                                     *(_QWORD *)&v29[16 * ((unsigned __int64)*(unsigned int *)&v24[v73] >> 24)]
                                   + (((unsigned __int64)*(unsigned int *)&v24[v73] >> 12) & 0xFFF),
                                     *(unsigned __int16 *)(v73 + v36 + 2),
                                     SubAuthorityCount) )
              return 3221225520LL;
            LODWORD(v44) = SubAuthorityCount[0];
            v85 = *(_QWORD *)SubAuthorityCount;
            if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
              return 3221225520LL;
          }
          v45 = 0;
          if ( !(_DWORD)v43 )
          {
            if ( (*(_BYTE *)v40 & 0x10) != 0 || (_DWORD)v44 != 1 )
              return 3221225520LL;
            v63 = *(_BYTE *)v40 & 0xF;
            switch ( v63 )
            {
              case 4:
                v68 = *(_DWORD *)(v39 + 8) - v38;
                if ( v68 < 2 )
                  return 3221225485LL;
                v69 = (_WORD *)(*(_QWORD *)v39 + v38);
                v70 = v68 >> 1;
                v71 = 0;
                v72 = 0;
                while ( v72 < v70 && *v69 )
                {
                  v72 = ++v71;
                  v94 = v71;
                  v95[2] = ++v69;
                }
                if ( v71 == v70 )
                {
                  v82 = 2;
                  v45 = 0;
                }
                else
                {
                  v45 = 2;
                }
                if ( v71 == v70 )
                {
                  if ( v38 + 2LL * v70 != *(_DWORD *)(v39 + 8) )
                    return 3221225485LL;
                  LODWORD(v44) = v85;
                }
                LODWORD(v43) = 2 * v71;
                break;
              case 3:
                v64 = *(_DWORD *)(v39 + 8);
                if ( v38 >= v64 )
                  return 3221225485LL;
                v65 = (_BYTE *)(*(_QWORD *)v39 + v38);
                v66 = v64 - v38;
                LODWORD(v43) = 0;
                v67 = 0;
                while ( v67 < v66 && *v65 )
                {
                  LODWORD(v43) = v43 + 1;
                  v67 = v43;
                  v94 = v43;
                  v95[1] = ++v65;
                }
                if ( (_DWORD)v43 == v66 )
                {
                  v82 = 1;
                  v45 = 0;
                }
                else
                {
                  v45 = 1;
                }
                break;
              case 6:
                if ( *(_DWORD *)(v39 + 8) - v38 < 2 )
                  return 3221225485LL;
                if ( !(unsigned __int8)EtwpGetFieldValue(*(_QWORD *)v39 + v38 + 1LL, 1LL, SubAuthorityCount) )
                  return 3221225485LL;
                LODWORD(v43) = RtlLengthRequiredSid(SubAuthorityCount[0]);
                if ( (_DWORD)v43 == -1 )
                  return 3221225485LL;
                v45 = 0;
                LODWORD(v44) = v85;
                break;
              default:
                return 3221225520LL;
            }
          }
          v46 = v44 * v43;
          if ( *(_DWORD *)(v39 + 8) - v38 < v46 )
            return 3221225990LL;
          v37 = v81;
          v47 = v90;
          v90[3] = v81;
          v48 = *(_DWORD *)v47 ^ (*(_DWORD *)v47 ^ (v38 << 12)) & 0xFFF000 ^ ((unsigned __int16)v46 ^ *(_WORD *)v47 ^ (*(_WORD *)v47 ^ (unsigned __int16)((_WORD)v38 << 12)) & 0xF000) & 0xFFF;
          v49 = v90;
          *(_DWORD *)v90 = v48;
          if ( HIBYTE(v48) != v37 || ((v48 >> 12) & 0xFFF) != v38 || (v48 & 0xFFF) != v46 )
            return 3221225990LL;
          v38 += v45 + v46;
          if ( v38 > *(_DWORD *)(v39 + 8) )
            return 3221225473LL;
          if ( v38 != *(_DWORD *)(v39 + 8) )
            goto LABEL_47;
          v81 = ++v37;
          if ( v37 >= (unsigned int)v9 )
            goto LABEL_47;
          v38 = 0;
          v39 += 16LL;
          if ( v39 >= (unsigned __int64)&v29[16 * v9] )
            return 3221225473LL;
          if ( v82 )
          {
            if ( *(_DWORD *)(v39 + 8) < v82 )
              return 3221225990LL;
            v38 = v82;
          }
          v82 = 0;
          if ( v38 == *(_DWORD *)(v39 + 8) )
          {
            v81 = ++v37;
            v24 = v84;
            v36 = v88;
            if ( v37 < (unsigned int)v9 )
            {
              v38 = 0;
              v39 += 16LL;
            }
          }
          else
          {
LABEL_47:
            v24 = v84;
            v36 = v88;
          }
        }
        v42 = v83 + 1;
        v40 += 4LL;
        v90 = v49 + 4;
        v41 = v49 + 4;
      }
      if ( v82 )
        return 3221225990LL;
      v50 = v91;
      v51 = v36 + 4LL * *(unsigned __int16 *)(v91 + 4);
      v85 = v51;
      v52 = (unsigned __int16 *)(a6 + *(unsigned __int16 *)(a6 + 40) + 4LL * *(unsigned __int16 *)(v91 + 8));
      v78 = 0;
      v53 = 0;
      v77 = 0;
      v80 = 1;
      v54 = 0;
      while ( 1 )
      {
        v81 = v54;
        if ( v54 >= *(unsigned __int16 *)(v50 + 10) )
          break;
        v55 = (unsigned __int16 *)(a6 + 56 + 24LL * v52[1]);
        v56 = 1;
        v57 = 0;
        v58 = 0;
        while ( 1 )
        {
          v59 = *v52;
          if ( v58 >= ((*v52 >> 2) & 0x3Fu) )
            break;
          v60 = *v55;
          if ( !(unsigned __int8)EtwpApplyPredicate(
                                   a6,
                                   *(_BYTE *)(v51 + 4 * v60) & 0xF,
                                   v55,
                                   *(_QWORD *)&v29[16 * ((unsigned __int64)*(unsigned int *)&v24[4 * v60] >> 24)]
                                 + (((unsigned __int64)*(unsigned int *)&v24[4 * v60] >> 12) & 0xFFF),
                                   *(_DWORD *)&v24[4 * v60] & 0xFFF,
                                   &v79) )
            return 3221225520LL;
          v56 &= v79;
          v57 |= v79;
          ++v58;
          v55 += 12;
          v51 = v85;
          v24 = v84;
        }
        v61 = v57;
        if ( (v59 & 2) == 0 )
          v61 = v56;
        v53 = v77;
        if ( (v59 & 1) != 0 )
        {
          if ( v80 )
          {
            v78 = v61;
            v80 = 0;
          }
          else
          {
            v78 &= v61;
          }
          v54 = v81 + 1;
          v52 += 2;
          v50 = v91;
        }
        else
        {
          v53 = v61 | v77;
          v77 = v53;
          if ( v53 )
            break;
          v54 = v81 + 1;
          v52 += 2;
          v50 = v91;
        }
      }
      *a7 = v78 | v53;
      return 0LL;
    }
  }
}
