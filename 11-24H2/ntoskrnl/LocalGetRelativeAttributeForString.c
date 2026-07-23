/*
 * XREFs of LocalGetRelativeAttributeForString @ 0x140AAA374
 * Callers:
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     iswspace @ 0x1404FC3F0 (iswspace.c)
 *     wcstoxq @ 0x1404FE264 (wcstoxq.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     GetDigitFromChar @ 0x1407970E4 (GetDigitFromChar.c)
 *     GetFlags @ 0x140797164 (GetFlags.c)
 *     GetValueType @ 0x140797274 (GetValueType.c)
 *     IsLegalAttributeChar2 @ 0x14079741C (IsLegalAttributeChar2.c)
 *     DecodeAttributeName @ 0x140863E34 (DecodeAttributeName.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     LocalGetSidForString @ 0x14086B0D4 (LocalGetSidForString.c)
 */

__int64 __fastcall LocalGetRelativeAttributeForString(
        _WORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        __int64 a5,
        char a6,
        __int16 a7,
        char a8)
{
  unsigned int v8; // r14d
  _DWORD *v9; // r15
  unsigned int v10; // esi
  unsigned int v11; // r12d
  bool v12; // zf
  unsigned int ValueType; // edi
  wint_t *v14; // rdi
  int i; // eax
  __int64 v16; // rdi
  unsigned __int16 *j; // rbx
  __int16 v18; // cx
  wint_t *v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // r15d
  wint_t *k; // rbx
  wint_t *v24; // rsi
  PWSTR v25; // rsi
  wint_t *v26; // rbx
  wint_t v27; // ax
  wint_t ii; // cx
  unsigned int v29; // r8d
  unsigned int v30; // r9d
  wint_t v31; // r10
  unsigned int v32; // eax
  wint_t jj; // cx
  unsigned __int64 v34; // rcx
  unsigned int v35; // eax
  int v36; // ebx
  unsigned int v37; // ebx
  wint_t v38; // ax
  wint_t n; // cx
  PSID v40; // r14
  wint_t *v41; // rbx
  ULONG v42; // eax
  unsigned int v43; // ecx
  wint_t v44; // ax
  _WORD *v45; // rbx
  __int16 v46; // ax
  wint_t *v47; // rbx
  unsigned __int64 v48; // rax
  unsigned int v49; // ecx
  __int16 v50; // r14
  wint_t v51; // ax
  unsigned __int64 v52; // rax
  wint_t *v53; // rbx
  wint_t v54; // ax
  unsigned __int64 v55; // rax
  PWSTR v56; // rbx
  wint_t m; // cx
  unsigned __int64 v58; // rax
  __int16 v59; // ax
  int v60; // r14d
  void *v61; // rdx
  size_t v62; // r8
  int v63; // eax
  unsigned int v64; // r14d
  unsigned __int64 *v65; // r12
  wint_t v66; // ax
  unsigned __int16 kk; // cx
  int v68; // r8d
  wint_t *v69; // r9
  unsigned int v70; // eax
  unsigned __int16 *v71; // r8
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r10
  __int64 v75; // r11
  _BYTE *v76; // r10
  wint_t v77; // ax
  wint_t mm; // cx
  PSID v79; // rbx
  ULONG v80; // eax
  __int64 v81; // rcx
  wint_t v82; // ax
  wint_t nn; // cx
  WCHAR v84; // ax
  WCHAR *v85; // r15
  unsigned int v86; // ecx
  size_t v87; // rbx
  _QWORD *v88; // rcx
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rax
  char *v91; // [rsp+48h] [rbp-41h]
  int v92; // [rsp+50h] [rbp-39h]
  int v93; // [rsp+54h] [rbp-35h] BYREF
  PWSTR EndPointer; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v95; // [rsp+60h] [rbp-29h]
  int v96; // [rsp+64h] [rbp-25h] BYREF
  PSID Sid; // [rsp+68h] [rbp-21h] BYREF
  void *Src; // [rsp+70h] [rbp-19h] BYREF
  int v99; // [rsp+78h] [rbp-11h]
  __int64 v100; // [rsp+80h] [rbp-9h]
  char v101; // [rsp+D8h] [rbp+4Fh] BYREF
  _QWORD *v102; // [rsp+E0h] [rbp+57h]
  _QWORD *v103; // [rsp+E8h] [rbp+5Fh]
  unsigned int *v104; // [rsp+F0h] [rbp+67h]

  v104 = a4;
  v103 = a3;
  v102 = a2;
  v8 = 0;
  EndPointer = 0LL;
  v9 = 0LL;
  v91 = 0LL;
  v10 = 0;
  Src = 0LL;
  v11 = 0;
  a7 = 0;
  v96 = 0;
  v92 = 0;
  v101 = 0;
  a8 = 0;
  a6 = 0;
  Sid = 0LL;
  v93 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
  {
    ValueType = 87;
    goto LABEL_25;
  }
  v12 = *a1 == 40;
  *a3 = 0LL;
  *a4 = 0;
  if ( !v12 )
    return 1336;
  v14 = a1 + 1;
  for ( i = iswspace(a1[1]); i; i = iswspace(*v14) )
    ++v14;
  if ( *v14 != 34 )
    return 1336;
  v16 = (__int64)(v14 + 1);
  for ( j = (unsigned __int16 *)v16; IsLegalAttributeChar2(*j); ++j )
  {
    if ( !v18 )
      return 1336;
    if ( v10 + 1 < v10 )
      return 534;
    ++v10;
  }
  if ( v18 != 34 || !v10 )
    return 1336;
  v19 = j + 1;
  ValueType = DecodeAttributeName(v16, 2 * v10, (__int64 *)&Src);
  if ( !ValueType )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *((_WORD *)Src + v20) );
    v100 = (unsigned int)(v20 + 1);
    v99 = 2 * v100;
    v21 = 2 * v100 + 20;
    LODWORD(a5) = v21;
    if ( (unsigned int)(2 * v100) >= 0xFFFFFFEC )
    {
      ValueType = 534;
LABEL_24:
      v9 = 0LL;
      goto LABEL_25;
    }
    while ( iswspace(*v19) )
      ++v19;
    if ( *v19 != 44 )
      goto LABEL_34;
    do
      ++v19;
    while ( iswspace(*v19) );
    ValueType = GetValueType(v19, &EndPointer, &a7);
    if ( ValueType )
      goto LABEL_24;
    for ( k = EndPointer; iswspace(*k); ++k )
      ;
    if ( *k != 44 )
      goto LABEL_34;
    do
      ++k;
    while ( iswspace(*k) );
    ValueType = GetFlags(k, &EndPointer, &v96);
    if ( ValueType )
      goto LABEL_24;
    v24 = EndPointer;
    if ( (v96 & 0xFFC0) != 0 )
      goto LABEL_34;
    while ( iswspace(*v24) )
      ++v24;
    if ( *v24 != 44 )
      goto LABEL_34;
    v25 = v24 + 1;
    v26 = v25;
    if ( a7 == 1 )
    {
      while ( 1 )
      {
        v54 = *v26;
        if ( !*v26 )
          break;
        v93 = 0;
        v55 = wcstoxq(0LL, v26, &EndPointer, 0, 0, &v93);
        if ( EndPointer == v26 && !v55 )
          goto LABEL_139;
        if ( v93 )
          goto LABEL_144;
        v56 = EndPointer;
        ++v11;
        for ( m = *EndPointer; iswspace(m); m = *v56 )
          ++v56;
        v54 = *v56;
        if ( *v56 != 44 )
          break;
        v26 = v56 + 1;
      }
      if ( v54 != 41 )
        goto LABEL_139;
      v58 = 8LL * v11;
      if ( v58 > 0xFFFFFFFF || (v49 = v58 + v21, (unsigned int)v58 + v21 < v21) )
      {
LABEL_144:
        ValueType = 534;
        goto LABEL_140;
      }
LABEL_112:
      v21 = v49;
      goto LABEL_69;
    }
    if ( a7 != 2 )
    {
      if ( a7 == 3 )
      {
        while ( 1 )
        {
          v44 = *v26;
          if ( !*v26 )
            break;
          if ( iswspace(v44) )
          {
            do
              ++v26;
            while ( iswspace(*v26) );
            v21 = a5;
          }
          if ( *v26 != 34 )
            goto LABEL_90;
          v45 = v26 + 1;
          while ( 1 )
          {
            v46 = *v45;
            if ( *v45 == 34 || !v46 )
              break;
            ++v45;
            if ( v8 + 1 < v8 )
              goto LABEL_128;
            ++v8;
          }
          if ( v8 + 1 < v8 )
            goto LABEL_128;
          ++v8;
          if ( v46 != 34 )
            goto LABEL_90;
          v47 = v45 + 1;
          ++v11;
          if ( iswspace(*v47) )
          {
            do
              ++v47;
            while ( iswspace(*v47) );
            v21 = a5;
          }
          v44 = *v47;
          if ( *v47 != 44 )
            break;
          v26 = v47 + 1;
        }
        if ( v44 == 41 )
        {
          v48 = 2LL * v8;
LABEL_110:
          if ( v48 > 0xFFFFFFFF )
            goto LABEL_128;
          v49 = v48 + v21;
          if ( (unsigned int)v48 + v21 < v21 )
            goto LABEL_128;
          goto LABEL_112;
        }
LABEL_90:
        ValueType = 1336;
LABEL_129:
        v9 = v91;
        goto LABEL_25;
      }
      if ( a7 == 5 )
      {
        while ( 1 )
        {
          v38 = *v26;
          if ( !*v26 )
            break;
          for ( n = *v26; iswspace(n); n = *v26 )
            ++v26;
          ValueType = LocalGetSidForString(v26, (__int64 *)&Sid, &EndPointer, &v101);
          if ( ValueType )
            goto LABEL_129;
          v40 = Sid;
          if ( !Sid )
          {
            v9 = 0LL;
            goto LABEL_25;
          }
          v41 = EndPointer;
          ++v11;
          v42 = RtlLengthSid(Sid);
          v43 = v42 + v21;
          if ( v42 + v21 < v21 )
            goto LABEL_128;
          v21 = v43 + 4;
          if ( v43 + 4 < v43 )
            goto LABEL_128;
          if ( v101 )
          {
            SddlpFree(v40);
            Sid = 0LL;
          }
          while ( iswspace(*v41) )
            ++v41;
          v38 = *v41;
          if ( *v41 != 44 )
            break;
          v26 = v41 + 1;
        }
        if ( v38 == 41 )
          goto LABEL_69;
        goto LABEL_90;
      }
      if ( a7 != 6 )
      {
        if ( a7 == 16 )
        {
          while ( 1 )
          {
            v27 = *v26;
            if ( !*v26 )
              break;
            for ( ii = *v26; iswspace(ii); ii = *v26 )
              ++v26;
            while ( GetDigitFromChar(*v26, &a5) )
            {
              ++v26;
              if ( v29 < v30 )
                goto LABEL_144;
            }
            ++v11;
            v32 = (v29 >> 1) + v21;
            if ( v32 < v21 )
              goto LABEL_144;
            v21 = v32 + 4;
            if ( v32 + 4 < v32 )
              goto LABEL_144;
            for ( jj = v31; iswspace(jj); jj = *v26 )
              ++v26;
            v27 = *v26;
            if ( *v26 != 44 )
              break;
            ++v26;
          }
          if ( v27 != 41 )
          {
LABEL_139:
            ValueType = 1336;
LABEL_140:
            v9 = 0LL;
            goto LABEL_25;
          }
LABEL_69:
          v34 = 4LL * (v11 - 1);
          if ( v34 <= 0xFFFFFFFF )
          {
            v35 = v34 + v21;
            if ( (unsigned int)v34 + v21 >= v21 )
            {
              v36 = v35 + 3;
              if ( v35 + 3 < v35 )
              {
                v36 = -1;
                ValueType = 534;
              }
              v37 = v36 & 0xFFFFFFFC;
              v95 = v37;
              v91 = (char *)SddlpAlloc(v37);
              v9 = v91;
              if ( !v91 )
              {
                ValueType = 8;
                goto LABEL_25;
              }
              v59 = a7;
              v60 = 4 * v11 + 16;
              v61 = Src;
              v62 = 2LL * (unsigned int)v100;
              *((_WORD *)v91 + 3) = 0;
              *((_WORD *)v91 + 2) = v59;
              v63 = v96;
              *(_DWORD *)v91 = v60;
              v64 = v99 + v60;
              *((_DWORD *)v91 + 2) = v63;
              *((_DWORD *)v91 + 3) = v11;
              memmove(&v91[4 * v11 + 16], v61, v62);
              v65 = (unsigned __int64 *)&v91[v64];
              if ( a7 == 1 )
              {
                while ( 1 )
                {
                  v66 = *v25;
                  if ( !*v25 )
                    break;
                  v93 = 0;
                  v90 = wcstoxq(0LL, v25, &EndPointer, 0, 0, &v93);
                  if ( EndPointer == v25 && !v90 )
                    goto LABEL_184;
                  if ( v93 )
                  {
LABEL_223:
                    ValueType = 534;
                    goto LABEL_25;
                  }
                  *(_DWORD *)&v91[4 * v92 + 16] = v64;
                  *v65 = v90;
                  v64 += 8;
                  v25 = EndPointer;
                  v65 = (unsigned __int64 *)&v91[v64];
                  ++v92;
                  if ( iswspace(*EndPointer) )
                  {
                    do
                      ++v25;
                    while ( iswspace(*v25) );
                    v37 = v95;
                  }
                  v66 = *v25;
                  if ( *v25 != 44 )
                    break;
                  ++v25;
                }
LABEL_221:
                if ( v66 != 41 )
                  goto LABEL_184;
LABEL_202:
                v88 = v102;
                *v103 = v9;
                *v104 = v37;
                *v88 = v25 + 1;
                goto LABEL_25;
              }
              if ( a7 == 2 )
                goto LABEL_203;
              if ( a7 != 3 )
              {
                if ( a7 != 5 )
                {
                  if ( a7 == 6 )
                  {
LABEL_203:
                    while ( 1 )
                    {
                      v66 = *v25;
                      if ( !*v25 )
                        break;
                      v93 = 0;
                      v89 = wcstoxq(0LL, v25, &EndPointer, 0, 1, &v93);
                      if ( EndPointer == v25 && !v89 )
                        goto LABEL_184;
                      if ( v93 )
                        goto LABEL_223;
                      v9[v92 + 4] = v64;
                      *v65 = v89;
                      v64 += 8;
                      v25 = EndPointer;
                      v65 = (unsigned __int64 *)((char *)v9 + v64);
                      ++v92;
                      if ( iswspace(*EndPointer) )
                      {
                        do
                          ++v25;
                        while ( iswspace(*v25) );
                        v9 = v91;
                      }
                      v66 = *v25;
                      if ( *v25 != 44 )
                        break;
                      ++v25;
                    }
                  }
                  else
                  {
                    if ( a7 != 16 )
                    {
LABEL_184:
                      ValueType = 1336;
                      goto LABEL_25;
                    }
                    while ( 1 )
                    {
                      v66 = *v25;
                      if ( !*v25 )
                        break;
                      if ( iswspace(v66) )
                      {
                        do
                          ++v25;
                        while ( iswspace(*v25) );
                        v37 = v95;
                      }
                      for ( kk = *v25; GetDigitFromChar(kk, &a5); kk = v69[1] )
                        ;
                      *(_DWORD *)&v91[4 * v92 + 16] = v64;
                      v70 = (unsigned int)(v68 + 1) >> 1;
                      v71 = v69 - 1;
                      *(_DWORD *)v65 = v70;
                      v64 += v70 + 4;
                      while ( v71 > v25 )
                      {
                        if ( !GetDigitFromChar(*v71, &a8) || !GetDigitFromChar(*(_WORD *)(v72 - 2), &a6) )
                          goto LABEL_184;
                        v71 = (unsigned __int16 *)(v73 - 4);
                        *(_BYTE *)(v75 + v74) = a8 | (16 * a6);
                      }
                      if ( v71 == v25 )
                      {
                        if ( !GetDigitFromChar(*v71, &a8) )
                          goto LABEL_184;
                        *v76 = a8;
                      }
                      v25 = v69;
                      ++v92;
                      v65 = (unsigned __int64 *)&v91[v64];
                      if ( iswspace(*v69) )
                      {
                        do
                          ++v25;
                        while ( iswspace(*v25) );
                        v37 = v95;
                      }
                      v66 = *v25;
                      if ( *v25 != 44 )
                        break;
                      ++v25;
                    }
                  }
                  goto LABEL_221;
                }
                while ( 1 )
                {
                  v77 = *v25;
                  if ( !*v25 )
                    break;
                  for ( mm = *v25; iswspace(mm); mm = *v25 )
                    ++v25;
                  ValueType = LocalGetSidForString(v25, (__int64 *)&Sid, &EndPointer, &v101);
                  if ( ValueType )
                    goto LABEL_25;
                  v79 = Sid;
                  if ( !Sid )
                    goto LABEL_25;
                  v80 = RtlLengthSid(Sid);
                  *(_DWORD *)&v91[4 * v92 + 16] = v64;
                  v81 = v64 + 4;
                  v64 = v80 + v81;
                  *(_DWORD *)v65 = v80;
                  memmove(&v91[v81], v79, v80);
                  ++v92;
                  v25 = EndPointer;
                  v65 = (unsigned __int64 *)&v91[v64];
                  if ( v101 )
                  {
                    SddlpFree(v79);
                    Sid = 0LL;
                  }
                  while ( iswspace(*v25) )
                    ++v25;
                  v77 = *v25;
                  if ( *v25 != 44 )
                    break;
                  ++v25;
                }
                if ( v77 != 41 )
                  goto LABEL_184;
LABEL_201:
                v37 = v95;
                goto LABEL_202;
              }
              while ( 1 )
              {
                v82 = *v25;
                if ( !*v25 )
                  break;
                for ( nn = *v25; iswspace(nn); nn = *v25 )
                  ++v25;
                if ( *v25 != 34 )
                  goto LABEL_90;
                v84 = v25[1];
                v85 = v25 + 1;
                v86 = 0;
                while ( v84 != 34 )
                {
                  if ( !v84 )
                    goto LABEL_90;
                  ++v85;
                  ++v86;
                  v84 = *v85;
                }
                *(_DWORD *)&v91[4 * v92 + 16] = v64;
                v64 += 2 * v86 + 2;
                v87 = 2LL * v86;
                memmove(v65, v25 + 1, v87);
                v25 = v85 + 1;
                *(_WORD *)((char *)v65 + v87) = 0;
                v65 = (unsigned __int64 *)&v91[v64];
                ++v92;
                while ( iswspace(*v25) )
                  ++v25;
                v82 = *v25;
                if ( *v25 != 44 )
                  break;
                ++v25;
              }
              if ( v82 == 41 )
              {
                v9 = v91;
                goto LABEL_201;
              }
              goto LABEL_90;
            }
          }
LABEL_128:
          ValueType = 534;
          goto LABEL_129;
        }
LABEL_34:
        ValueType = 1336;
        goto LABEL_24;
      }
    }
    v50 = a7;
    while ( 1 )
    {
      v51 = *v26;
      if ( !*v26 )
        break;
      v93 = 0;
      v52 = wcstoxq(0LL, v26, &EndPointer, 0, 1, &v93);
      if ( EndPointer == v26 && !v52 )
      {
        ValueType = 1336;
        v9 = 0LL;
        goto LABEL_25;
      }
      if ( v93 )
        goto LABEL_128;
      if ( v50 == 6 && v52 > 1 )
        goto LABEL_90;
      v53 = EndPointer;
      ++v11;
      if ( iswspace(*EndPointer) )
      {
        do
          ++v53;
        while ( iswspace(*v53) );
        v50 = a7;
      }
      v51 = *v53;
      if ( *v53 != 44 )
        break;
      v26 = v53 + 1;
    }
    if ( v51 == 41 )
    {
      v48 = 8LL * v11;
      goto LABEL_110;
    }
    goto LABEL_90;
  }
LABEL_25:
  if ( Src )
    SddlpFree(Src);
  if ( ValueType && v9 )
    SddlpFree(v9);
  return ValueType;
}
