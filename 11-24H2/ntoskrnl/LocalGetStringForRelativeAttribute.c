/*
 * XREFs of LocalGetStringForRelativeAttribute @ 0x140AA5150
 * Callers:
 *     LocalGetAceCondition @ 0x140865BE0 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 *     _i64tow_s @ 0x140500AA0 (_i64tow_s.c)
 *     _ui64tow_s @ 0x140500B00 (_ui64tow_s.c)
 *     _ultow_s @ 0x140500B20 (_ultow_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EncodeAttributeName @ 0x140796F60 (EncodeAttributeName.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     LocalGetStringForSid @ 0x140A66038 (LocalGetStringForSid.c)
 */

__int64 __fastcall LocalGetStringForRelativeAttribute(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7)
{
  void *v9; // r13
  unsigned int v10; // esi
  __int64 v11; // r12
  int v12; // r15d
  __int64 v13; // rcx
  unsigned __int16 *v14; // r11
  unsigned int v15; // eax
  unsigned int v16; // r11d
  __int64 v17; // rcx
  size_t v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // ecx
  wchar_t *v22; // r9
  __int64 v23; // rax
  unsigned int v24; // edi
  int v25; // r12d
  unsigned int m; // edx
  __int64 v27; // r8
  int v28; // ecx
  unsigned int v29; // r8d
  unsigned __int64 v30; // rax
  unsigned int j; // r15d
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // rcx
  unsigned int v35; // eax
  _BYTE *v36; // rcx
  unsigned int StringForSid; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // r11d
  unsigned int k; // r15d
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int i; // r15d
  __int64 v45; // rcx
  __int64 v46; // rax
  _WORD *v47; // rax
  unsigned int v48; // r15d
  unsigned __int64 v49; // rbx
  void *v50; // rdx
  size_t v51; // r8
  _WORD *v52; // rdi
  _WORD *v53; // rdi
  __int64 v54; // rax
  size_t v55; // rbx
  char *v56; // rdi
  __int64 v57; // r9
  char *v58; // rdi
  int v59; // r12d
  int v60; // r12d
  int v61; // r12d
  int v62; // r12d
  int v63; // r12d
  __int64 v64; // r12
  unsigned int *v65; // r8
  __int64 v66; // rcx
  unsigned int v67; // r9d
  unsigned __int8 *v68; // rdx
  __int64 v69; // r10
  unsigned int v70; // ecx
  __int64 v71; // r8
  char *v72; // rdi
  unsigned int v73; // eax
  __int64 v74; // rax
  size_t v75; // rbx
  __int64 v76; // r12
  unsigned int *v77; // r15
  __int64 v78; // rax
  char *v79; // rdi
  _WORD *v80; // rdx
  size_t v81; // rbx
  char *v82; // rdi
  __int64 v83; // r12
  unsigned int *v84; // r15
  char *v85; // rdi
  __int64 v86; // rax
  size_t v87; // rbx
  __int64 v88; // r12
  unsigned int *v89; // r15
  char *v90; // rdi
  __int64 v91; // rax
  size_t v92; // rbx
  _QWORD *v93; // rcx
  size_t v94; // rax
  int v96; // [rsp+20h] [rbp-E0h]
  unsigned int v97; // [rsp+30h] [rbp-D0h]
  void *v98; // [rsp+38h] [rbp-C8h] BYREF
  size_t pcbLength; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v100; // [rsp+48h] [rbp-B8h]
  __int64 v101; // [rsp+50h] [rbp-B0h]
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v103; // [rsp+60h] [rbp-A0h]
  size_t Size; // [rsp+68h] [rbp-98h]
  __int64 v105; // [rsp+70h] [rbp-90h]
  wchar_t v106[72]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t DstBuf[40]; // [rsp+110h] [rbp+10h] BYREF

  v103 = a3;
  v105 = a7;
  Src = 0LL;
  memset_0(DstBuf, 0, 0x46uLL);
  memset_0(v106, 0, 0x8CuLL);
  v98 = 0LL;
  v9 = 0LL;
  pcbLength = 0LL;
  if ( !a1 || !a2 || !a7 )
  {
    v10 = 87;
    goto LABEL_135;
  }
  if ( a2 < 0x14 )
    return 1336;
  v11 = a1[3];
  v12 = *((unsigned __int16 *)a1 + 2);
  v97 = v11;
  if ( !(_DWORD)v11 )
    return 1336;
  ultow_s(a1[2], DstBuf, 0x23uLL, 16);
  v13 = *a1;
  if ( a2 < (unsigned int)v13
    || a2 - (unsigned int)v13 < 4
    || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v13), a2 - (unsigned int)v13, &pcbLength) < 0
    || !(_DWORD)pcbLength )
  {
    return 1336;
  }
  v15 = EncodeAttributeName(v14, pcbLength, (__int64 *)&Src);
  v16 = 0;
  v100 = v15;
  v10 = v15;
  if ( !v15 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *((_WORD *)Src + v17) );
    v18 = (unsigned int)(2 * v17);
    v101 = v11;
    Size = v18;
    v19 = v11;
    if ( (unsigned __int64)(2 * v11) > 0xFFFFFFFF )
      goto LABEL_133;
    v20 = 2 * v11 + 24;
    if ( v20 < 0x18 )
      goto LABEL_133;
    v21 = v20 + v18;
    if ( v21 < v20 )
      goto LABEL_133;
    v22 = DstBuf;
    v23 = -1LL;
    do
      ++v23;
    while ( DstBuf[v23] );
    v24 = v21 + 2 * v23;
    if ( v24 < v21 || (unsigned __int64)(4 * v11) > 0xFFFFFFFF )
      goto LABEL_133;
    if ( a2 - 16 < 4 * (int)v11 )
    {
LABEL_28:
      v10 = 1336;
      goto LABEL_135;
    }
    v25 = v12;
    switch ( v12 )
    {
      case 1:
        for ( i = 0; i < v19; ++i )
        {
          v45 = a1[i + 4];
          if ( a2 < (unsigned int)v45 || a2 - (unsigned int)v45 < 8 )
            goto LABEL_28;
          i64tow_s(*(_QWORD *)((char *)a1 + v45), v106, 0x46uLL, 10);
          v46 = -1LL;
          do
            ++v46;
          while ( v106[v46] );
          if ( v24 + 2 * (_DWORD)v46 < v24 )
            goto LABEL_133;
          v19 = v97;
          v24 += 2 * v46;
        }
        break;
      case 2:
        goto LABEL_59;
      case 3:
        while ( v16 < v19 )
        {
          v39 = a1[v16 + 4];
          if ( a2 < (unsigned int)v39
            || a2 - (unsigned int)v39 < 2
            || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v39), a2 - (unsigned int)v39, &pcbLength) < 0 )
          {
            goto LABEL_28;
          }
          if ( v24 + (_DWORD)pcbLength + 4 < v24 )
            goto LABEL_133;
          v19 = v97;
          v24 += pcbLength + 4;
          v16 = v40 + 1;
        }
        break;
      case 5:
        for ( j = 0; j < v19; ++j )
        {
          v32 = a1[j + 4];
          if ( a2 < (unsigned int)v32 )
            goto LABEL_28;
          if ( a2 - (unsigned int)v32 < 4 )
            goto LABEL_28;
          v33 = *(unsigned int *)((char *)a1 + v32);
          v34 = (unsigned int)(v32 + 4);
          if ( !v33 )
            goto LABEL_28;
          v35 = a2 - v34;
          if ( a2 - (unsigned int)v34 < v33 )
            goto LABEL_28;
          if ( v35 < 8 )
            goto LABEL_28;
          v36 = (char *)a1 + v34;
          if ( !v36[1] || v35 - 8 < 4 * (unsigned __int64)(unsigned __int8)v36[1] )
            goto LABEL_28;
          StringForSid = LocalGetStringForSid(v36, (wchar_t **)&v98, v103, (__int64)v22, v96, a6);
          v9 = v98;
          v100 = StringForSid;
          v10 = StringForSid;
          if ( StringForSid )
            goto LABEL_135;
          v38 = -1LL;
          do
            ++v38;
          while ( *((_WORD *)v98 + v38) );
          if ( v24 + 2 * (_DWORD)v38 < v24 )
            goto LABEL_133;
          v24 += 2 * v38;
          if ( v98 )
          {
            SddlpFree(v98);
            v9 = 0LL;
            v98 = 0LL;
          }
          v19 = v97;
        }
        break;
      case 6:
LABEL_59:
        for ( k = 0; k < v19; ++k )
        {
          v42 = a1[k + 4];
          if ( a2 < (unsigned int)v42 || a2 - (unsigned int)v42 < 8 )
            goto LABEL_28;
          ui64tow_s(*(_QWORD *)((char *)a1 + v42), v106, 0x46uLL, 10);
          v43 = -1LL;
          do
            ++v43;
          while ( v106[v43] );
          if ( v24 + 2 * (_DWORD)v43 < v24 )
            goto LABEL_133;
          v19 = v97;
          v24 += 2 * v43;
        }
        break;
      case 16:
        for ( m = 0; m < v19; ++m )
        {
          v27 = a1[m + 4];
          if ( a2 < (unsigned int)v27 )
            goto LABEL_28;
          v28 = a2 - v27;
          if ( a2 - (unsigned int)v27 < 4 )
            goto LABEL_28;
          v29 = *(unsigned int *)((char *)a1 + v27);
          if ( v28 - 4 < v29 )
            goto LABEL_28;
          v30 = 4LL * v29;
          if ( v30 > 0xFFFFFFFF || (unsigned int)v30 + v24 < v24 )
            goto LABEL_133;
          v19 = v97;
          v24 += v30;
        }
        break;
      default:
        goto LABEL_28;
    }
    if ( v24 + 3 >= v24 )
    {
      v47 = SddlpAlloc((v24 + 3) & 0xFFFFFFFC);
      v48 = 0;
      pcbLength = (size_t)v47;
      if ( !v47 )
      {
        v10 = 8;
        goto LABEL_135;
      }
      v49 = (unsigned int)Size;
      v50 = Src;
      v51 = (unsigned int)Size;
      v47[1] = 34;
      v52 = v47 + 2;
      *v47 = 40;
      memmove(v47 + 2, v50, v51);
      v53 = &v52[v49 >> 1];
      *(_DWORD *)v53 = 2883618;
      switch ( v25 )
      {
        case 1:
          *((_DWORD *)v53 + 1) = 4784212;
          break;
        case 2:
          *((_DWORD *)v53 + 1) = 5570644;
          break;
        case 3:
          *((_DWORD *)v53 + 1) = 5439572;
          break;
        case 5:
          *((_DWORD *)v53 + 1) = 4456532;
          break;
        case 6:
          *((_DWORD *)v53 + 1) = 4325460;
          break;
        case 16:
          *((_DWORD *)v53 + 1) = 5767252;
          break;
        default:
          goto LABEL_84;
      }
      v53[4] = 44;
      v54 = -1LL;
      do
        ++v54;
      while ( DstBuf[v54] );
      *(_DWORD *)(v53 + 5) = 7864368;
      v55 = 2LL * (unsigned int)v54;
      v56 = (char *)(v53 + 7);
      memmove(v56, DstBuf, v55);
      v58 = &v56[v55];
      v59 = v25 - 1;
      if ( !v59 )
      {
        if ( !v97 )
          goto LABEL_132;
        v88 = v101;
        v89 = a1 + 4;
        do
        {
          *(_WORD *)v58 = 44;
          v90 = v58 + 2;
          i64tow_s(*(_QWORD *)((char *)a1 + *v89), v106, 0x46uLL, 10);
          v91 = -1LL;
          do
            ++v91;
          while ( v106[v91] );
          v92 = 2LL * (unsigned int)v91;
          memmove(v90, v106, v92);
          v58 = &v90[v92];
          ++v89;
          --v88;
        }
        while ( v88 );
        goto LABEL_131;
      }
      v60 = v59 - 1;
      if ( v60 )
      {
        v61 = v60 - 1;
        if ( !v61 )
        {
          if ( !v97 )
            goto LABEL_132;
          v76 = v101;
          v77 = a1 + 4;
          do
          {
            *(_DWORD *)v58 = 2228268;
            v78 = -1LL;
            v79 = v58 + 4;
            v80 = (_WORD *)((char *)a1 + *v77);
            do
              ++v78;
            while ( v80[v78] );
            v81 = 2LL * (unsigned int)v78;
            memmove(v79, v80, v81);
            v82 = &v79[v81];
            ++v77;
            *(_WORD *)v82 = 34;
            v58 = v82 + 2;
            --v76;
          }
          while ( v76 );
          v10 = v100;
LABEL_131:
          v9 = v98;
          goto LABEL_132;
        }
        v62 = v61 - 2;
        if ( !v62 )
        {
          while ( v48 < v97 )
          {
            v71 = v103;
            *(_WORD *)v58 = 44;
            v72 = v58 + 2;
            v73 = LocalGetStringForSid((char *)a1 + a1[v48 + 4] + 4, (wchar_t **)&v98, v71, v57, v96, a6);
            v9 = v98;
            v10 = v73;
            if ( v73 )
              goto LABEL_85;
            v74 = -1LL;
            do
              ++v74;
            while ( *((_WORD *)v98 + v74) );
            v75 = 2LL * (unsigned int)v74;
            memmove(v72, v98, v75);
            v58 = &v72[v75];
            if ( v9 )
            {
              SddlpFree(v9);
              v9 = 0LL;
              v98 = 0LL;
            }
            ++v48;
          }
          goto LABEL_132;
        }
        v63 = v62 - 1;
        if ( v63 )
        {
          if ( v63 != 10 )
          {
LABEL_84:
            v10 = 1336;
LABEL_85:
            SddlpFree((void *)pcbLength);
            goto LABEL_135;
          }
          if ( v97 )
          {
            v64 = v101;
            v65 = a1 + 4;
            do
            {
              *(_WORD *)v58 = 44;
              v58 += 2;
              v66 = *v65;
              v67 = *(unsigned int *)((char *)a1 + v66);
              v68 = (unsigned __int8 *)a1 + (unsigned int)(v66 + 4);
              if ( v67 )
              {
                v69 = v67;
                do
                {
                  v70 = *v68++;
                  *(_WORD *)v58 = a0123456789abcd_0[(unsigned __int64)v70 >> 4];
                  *((_WORD *)v58 + 1) = a0123456789abcd_0[v70 & 0xF];
                  v58 += 4;
                  --v69;
                }
                while ( v69 );
              }
              ++v65;
              --v64;
            }
            while ( v64 );
          }
LABEL_132:
          v93 = (_QWORD *)v105;
          v94 = pcbLength;
          *(_DWORD *)v58 = 41;
          *v93 = v94;
          goto LABEL_135;
        }
      }
      if ( !v97 )
        goto LABEL_132;
      v83 = v101;
      v84 = a1 + 4;
      do
      {
        *(_WORD *)v58 = 44;
        v85 = v58 + 2;
        ui64tow_s(*(_QWORD *)((char *)a1 + *v84), v106, 0x46uLL, 10);
        v86 = -1LL;
        do
          ++v86;
        while ( v106[v86] );
        v87 = 2LL * (unsigned int)v86;
        memmove(v85, v106, v87);
        v58 = &v85[v87];
        ++v84;
        --v83;
      }
      while ( v83 );
      goto LABEL_131;
    }
LABEL_133:
    v10 = 534;
  }
LABEL_135:
  if ( Src )
    SddlpFree(Src);
  if ( v9 )
    SddlpFree(v9);
  return v10;
}
