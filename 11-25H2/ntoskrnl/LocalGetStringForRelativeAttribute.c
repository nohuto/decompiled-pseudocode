/*
 * XREFs of LocalGetStringForRelativeAttribute @ 0x1409E5FCC
 * Callers:
 *     LocalGetAceCondition @ 0x1409E74EC (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140479D40 (RtlStringCbLengthW.c)
 *     _i64tow_s @ 0x140500A60 (_i64tow_s.c)
 *     _ui64tow_s @ 0x140500AC0 (_ui64tow_s.c)
 *     _ultow_s @ 0x140500AE0 (_ultow_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EncodeAttributeName @ 0x140787A80 (EncodeAttributeName.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     SddlpAlloc @ 0x1409E93A4 (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x1409EA58C (LocalGetStringForSid.c)
 */

__int64 __fastcall LocalGetStringForRelativeAttribute(
        unsigned int *a1,
        unsigned int a2,
        void *a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7)
{
  unsigned int v9; // esi
  __int64 v10; // r12
  int v11; // r15d
  __int64 v12; // rcx
  unsigned __int16 *v13; // r11
  unsigned int v14; // eax
  unsigned int v15; // r11d
  __int64 v16; // rcx
  size_t v17; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // edi
  int v23; // r12d
  unsigned int m; // edx
  __int64 v25; // r8
  int v26; // ecx
  unsigned int v27; // r8d
  unsigned __int64 v28; // rax
  unsigned int j; // r15d
  __int64 v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // rcx
  unsigned int v33; // eax
  _BYTE *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // r11d
  unsigned int k; // r15d
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int i; // r15d
  __int64 v42; // rcx
  __int64 v43; // rax
  _WORD *v44; // rax
  unsigned int v45; // r15d
  unsigned __int64 v46; // rbx
  const void *v47; // rdx
  size_t v48; // r8
  _WORD *v49; // rdi
  _WORD *v50; // rdi
  __int64 v51; // rax
  size_t v52; // rbx
  char *v53; // rdi
  char *v54; // rdi
  int v55; // r12d
  int v56; // r12d
  int v57; // r12d
  int v58; // r12d
  int v59; // r12d
  __int64 v60; // r12
  unsigned int *v61; // r8
  __int64 v62; // rcx
  unsigned int v63; // r9d
  unsigned __int8 *v64; // rdx
  __int64 v65; // r10
  unsigned int v66; // ecx
  char *v67; // rdi
  __int64 v68; // rax
  size_t v69; // rbx
  __int64 v70; // r12
  unsigned int *v71; // r15
  __int64 v72; // rax
  char *v73; // rdi
  _WORD *v74; // rdx
  size_t v75; // rbx
  char *v76; // rdi
  __int64 v77; // r12
  unsigned int *v78; // r15
  char *v79; // rdi
  __int64 v80; // rax
  size_t v81; // rbx
  __int64 v82; // r12
  unsigned int *v83; // r15
  char *v84; // rdi
  __int64 v85; // rax
  size_t v86; // rbx
  _QWORD *v87; // rcx
  size_t v88; // rax
  int v90; // [rsp+20h] [rbp-E0h]
  unsigned int v91; // [rsp+30h] [rbp-D0h]
  size_t pcbLength; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int StringForSid; // [rsp+48h] [rbp-B8h]
  __int64 v94; // [rsp+50h] [rbp-B0h]
  void *Src[2]; // [rsp+58h] [rbp-A8h] BYREF
  size_t Size; // [rsp+68h] [rbp-98h]
  __int64 v97; // [rsp+70h] [rbp-90h]
  wchar_t v98[72]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t DstBuf[40]; // [rsp+110h] [rbp+10h] BYREF

  Src[1] = a3;
  v97 = a7;
  Src[0] = 0LL;
  memset_0(DstBuf, 0, 0x46uLL);
  memset_0(v98, 0, 0x8CuLL);
  pcbLength = 0LL;
  if ( a1 && a2 && a7 )
  {
    if ( a2 < 0x14 )
      return 1336;
    v10 = a1[3];
    v11 = *((unsigned __int16 *)a1 + 2);
    v91 = v10;
    if ( !(_DWORD)v10 )
      return 1336;
    ultow_s(a1[2], DstBuf, 0x23uLL, 16);
    v12 = *a1;
    if ( a2 < (unsigned int)v12
      || a2 - (unsigned int)v12 < 4
      || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v12), a2 - (unsigned int)v12, &pcbLength) < 0
      || !(_DWORD)pcbLength )
    {
      return 1336;
    }
    v14 = EncodeAttributeName(v13, pcbLength, (__int64 *)Src);
    v15 = 0;
    StringForSid = v14;
    v9 = v14;
    if ( !v14 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *((_WORD *)Src[0] + v16) );
      v17 = (unsigned int)(2 * v16);
      v94 = v10;
      Size = v17;
      v18 = v10;
      if ( (unsigned __int64)(2 * v10) > 0xFFFFFFFF )
        goto LABEL_128;
      v19 = 2 * v10 + 24;
      if ( v19 < 0x18 )
        goto LABEL_128;
      v20 = v19 + v17;
      if ( v20 < v19 )
        goto LABEL_128;
      v21 = -1LL;
      do
        ++v21;
      while ( DstBuf[v21] );
      v22 = v20 + 2 * v21;
      if ( v22 < v20 || (unsigned __int64)(4 * v10) > 0xFFFFFFFF )
      {
LABEL_128:
        v9 = 534;
        goto LABEL_130;
      }
      if ( a2 - 16 < 4 * (int)v10 )
      {
LABEL_28:
        v9 = 1336;
        goto LABEL_130;
      }
      v23 = v11;
      switch ( v11 )
      {
        case 1:
          for ( i = 0; i < v18; ++i )
          {
            v42 = a1[i + 4];
            if ( a2 < (unsigned int)v42 || a2 - (unsigned int)v42 < 8 )
              goto LABEL_28;
            i64tow_s(*(_QWORD *)((char *)a1 + v42), v98, 0x46uLL, 10);
            v43 = -1LL;
            do
              ++v43;
            while ( v98[v43] );
            if ( v22 + 2 * (_DWORD)v43 < v22 )
              goto LABEL_128;
            v18 = v91;
            v22 += 2 * v43;
          }
          break;
        case 2:
          goto LABEL_57;
        case 3:
          while ( v15 < v18 )
          {
            v36 = a1[v15 + 4];
            if ( a2 < (unsigned int)v36
              || a2 - (unsigned int)v36 < 2
              || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v36), a2 - (unsigned int)v36, &pcbLength) < 0 )
            {
              goto LABEL_28;
            }
            if ( v22 + (_DWORD)pcbLength + 4 < v22 )
              goto LABEL_128;
            v18 = v91;
            v22 += pcbLength + 4;
            v15 = v37 + 1;
          }
          break;
        case 5:
          for ( j = 0; j < v18; ++j )
          {
            v30 = a1[j + 4];
            if ( a2 < (unsigned int)v30 )
              goto LABEL_28;
            if ( a2 - (unsigned int)v30 < 4 )
              goto LABEL_28;
            v31 = *(unsigned int *)((char *)a1 + v30);
            v32 = (unsigned int)(v30 + 4);
            if ( !v31 )
              goto LABEL_28;
            v33 = a2 - v32;
            if ( a2 - (unsigned int)v32 < v31 )
              goto LABEL_28;
            if ( v33 < 8 )
              goto LABEL_28;
            v34 = (char *)a1 + v32;
            if ( !v34[1] || v33 - 8 < 4 * (unsigned __int64)(unsigned __int8)v34[1] )
              goto LABEL_28;
            StringForSid = LocalGetStringForSid(v34, v90, a6);
            v9 = StringForSid;
            if ( StringForSid )
              goto LABEL_130;
            v35 = -1LL;
            do
              ++v35;
            while ( *(_WORD *)(2 * v35) );
            if ( v22 + 2 * (_DWORD)v35 < v22 )
              goto LABEL_128;
            v22 += 2 * v35;
            v18 = v91;
          }
          break;
        case 6:
LABEL_57:
          for ( k = 0; k < v18; ++k )
          {
            v39 = a1[k + 4];
            if ( a2 < (unsigned int)v39 || a2 - (unsigned int)v39 < 8 )
              goto LABEL_28;
            ui64tow_s(*(_QWORD *)((char *)a1 + v39), v98, 0x46uLL, 10);
            v40 = -1LL;
            do
              ++v40;
            while ( v98[v40] );
            if ( v22 + 2 * (_DWORD)v40 < v22 )
              goto LABEL_128;
            v18 = v91;
            v22 += 2 * v40;
          }
          break;
        case 16:
          for ( m = 0; m < v18; ++m )
          {
            v25 = a1[m + 4];
            if ( a2 < (unsigned int)v25 )
              goto LABEL_28;
            v26 = a2 - v25;
            if ( a2 - (unsigned int)v25 < 4 )
              goto LABEL_28;
            v27 = *(unsigned int *)((char *)a1 + v25);
            if ( v26 - 4 < v27 )
              goto LABEL_28;
            v28 = 4LL * v27;
            if ( v28 > 0xFFFFFFFF || (unsigned int)v28 + v22 < v22 )
              goto LABEL_128;
            v18 = v91;
            v22 += v28;
          }
          break;
        default:
          goto LABEL_28;
      }
      if ( v22 + 3 >= v22 )
      {
        v44 = (_WORD *)SddlpAlloc((v22 + 3) & 0xFFFFFFFC);
        v45 = 0;
        pcbLength = (size_t)v44;
        if ( !v44 )
        {
          v9 = 8;
          goto LABEL_130;
        }
        v46 = (unsigned int)Size;
        v47 = Src[0];
        v48 = (unsigned int)Size;
        v44[1] = 34;
        v49 = v44 + 2;
        *v44 = 40;
        memmove(v44 + 2, v47, v48);
        v50 = &v49[v46 >> 1];
        *(_DWORD *)v50 = 2883618;
        switch ( v23 )
        {
          case 1:
            *((_DWORD *)v50 + 1) = 4784212;
            break;
          case 2:
            *((_DWORD *)v50 + 1) = 5570644;
            break;
          case 3:
            *((_DWORD *)v50 + 1) = 5439572;
            break;
          case 5:
            *((_DWORD *)v50 + 1) = 4456532;
            break;
          case 6:
            *((_DWORD *)v50 + 1) = 4325460;
            break;
          case 16:
            *((_DWORD *)v50 + 1) = 5767252;
            break;
          default:
            goto LABEL_82;
        }
        v50[4] = 44;
        v51 = -1LL;
        do
          ++v51;
        while ( DstBuf[v51] );
        *(_DWORD *)(v50 + 5) = 7864368;
        v52 = 2LL * (unsigned int)v51;
        v53 = (char *)(v50 + 7);
        memmove(v53, DstBuf, v52);
        v54 = &v53[v52];
        v55 = v23 - 1;
        if ( !v55 )
        {
          if ( v91 )
          {
            v82 = v94;
            v83 = a1 + 4;
            do
            {
              *(_WORD *)v54 = 44;
              v84 = v54 + 2;
              i64tow_s(*(_QWORD *)((char *)a1 + *v83), v98, 0x46uLL, 10);
              v85 = -1LL;
              do
                ++v85;
              while ( v98[v85] );
              v86 = 2LL * (unsigned int)v85;
              memmove(v84, v98, v86);
              v54 = &v84[v86];
              ++v83;
              --v82;
            }
            while ( v82 );
          }
          goto LABEL_127;
        }
        v56 = v55 - 1;
        if ( v56 )
        {
          v57 = v56 - 1;
          if ( !v57 )
          {
            if ( v91 )
            {
              v70 = v94;
              v71 = a1 + 4;
              do
              {
                *(_DWORD *)v54 = 2228268;
                v72 = -1LL;
                v73 = v54 + 4;
                v74 = (_WORD *)((char *)a1 + *v71);
                do
                  ++v72;
                while ( v74[v72] );
                v75 = 2LL * (unsigned int)v72;
                memmove(v73, v74, v75);
                v76 = &v73[v75];
                ++v71;
                *(_WORD *)v76 = 34;
                v54 = v76 + 2;
                --v70;
              }
              while ( v70 );
              v9 = StringForSid;
            }
            goto LABEL_127;
          }
          v58 = v57 - 2;
          if ( !v58 )
          {
            while ( v45 < v91 )
            {
              *(_WORD *)v54 = 44;
              v67 = v54 + 2;
              v9 = LocalGetStringForSid((char *)a1 + a1[v45 + 4] + 4, v90, a6);
              if ( v9 )
                goto LABEL_83;
              v68 = -1LL;
              do
                ++v68;
              while ( *(_WORD *)(2 * v68) );
              v69 = 2LL * (unsigned int)v68;
              memmove(v67, 0LL, v69);
              v54 = &v67[v69];
              ++v45;
            }
            goto LABEL_127;
          }
          v59 = v58 - 1;
          if ( v59 )
          {
            if ( v59 != 10 )
            {
LABEL_82:
              v9 = 1336;
LABEL_83:
              SddlpFree((void *)pcbLength);
              goto LABEL_130;
            }
            if ( v91 )
            {
              v60 = v94;
              v61 = a1 + 4;
              do
              {
                *(_WORD *)v54 = 44;
                v54 += 2;
                v62 = *v61;
                v63 = *(unsigned int *)((char *)a1 + v62);
                v64 = (unsigned __int8 *)a1 + (unsigned int)(v62 + 4);
                if ( v63 )
                {
                  v65 = v63;
                  do
                  {
                    v66 = *v64++;
                    *(_WORD *)v54 = a0123456789abcd_0[(unsigned __int64)v66 >> 4];
                    *((_WORD *)v54 + 1) = a0123456789abcd_0[v66 & 0xF];
                    v54 += 4;
                    --v65;
                  }
                  while ( v65 );
                }
                ++v61;
                --v60;
              }
              while ( v60 );
            }
            goto LABEL_127;
          }
        }
        if ( v91 )
        {
          v77 = v94;
          v78 = a1 + 4;
          do
          {
            *(_WORD *)v54 = 44;
            v79 = v54 + 2;
            ui64tow_s(*(_QWORD *)((char *)a1 + *v78), v98, 0x46uLL, 10);
            v80 = -1LL;
            do
              ++v80;
            while ( v98[v80] );
            v81 = 2LL * (unsigned int)v80;
            memmove(v79, v98, v81);
            v54 = &v79[v81];
            ++v78;
            --v77;
          }
          while ( v77 );
        }
LABEL_127:
        v87 = (_QWORD *)v97;
        v88 = pcbLength;
        *(_DWORD *)v54 = 41;
        *v87 = v88;
        goto LABEL_130;
      }
      goto LABEL_128;
    }
  }
  else
  {
    v9 = 87;
  }
LABEL_130:
  if ( Src[0] )
    SddlpFree(Src[0]);
  return v9;
}
