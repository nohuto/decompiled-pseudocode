/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800B0AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800B2F18 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpQueryEafPlusModuleList @ 0x180116138 (RtlpQueryEafPlusModuleList.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlQueryImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  __int64 v6; // r13
  ULONG v8; // r15d
  unsigned __int64 v9; // rbx
  int inited; // esi
  wchar_t *v11; // rcx
  size_t v12; // rax
  NTSTATUS v13; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r15
  __int32 v17; // r14d
  __int32 v18; // r14d
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r15
  _OWORD *v22; // rdi
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int32 v32; // r14d
  __int32 v33; // r14d
  __int32 v34; // r14d
  __int32 v35; // r14d
  int v36; // r14d
  int v37; // r14d
  __int32 v38; // r14d
  __int32 v39; // r14d
  int v40; // r14d
  int v41; // r14d
  int v42; // r14d
  unsigned __int64 v43; // r12
  unsigned __int64 v44; // rdx
  __int64 v45; // r10
  __int64 v46; // r9
  unsigned __int64 v47; // r15
  bool v48; // zf
  bool v49; // zf
  unsigned __int64 v50; // rdx
  __int64 v51; // r10
  __int64 v52; // r9
  unsigned __int64 v53; // rdx
  __int64 v54; // r9
  unsigned __int64 v55; // r12
  __int64 v56; // r11
  __int64 v57; // r9
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // r15
  __int64 v62; // r9
  __int64 v63; // r8
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // r12
  unsigned __int64 v66; // rax
  bool v67; // zf
  unsigned __int64 v68; // r15
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  __int64 v72; // r9
  unsigned __int64 v73; // r8
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v79; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v80; // [rsp+A0h] [rbp-60h]
  char KeyValueInformation[8]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int Size; // [rsp+B0h] [rbp-50h]
  size_t Size_4; // [rsp+B4h] [rbp-4Ch] BYREF
  _BYTE v84[1024]; // [rsp+D0h] [rbp-30h] BYREF

  ResultLength = Flags & 4;
  v6 = 8LL;
  v80 = 0LL;
  DestinationString = 0LL;
  v8 = Flags & 8;
  v79 = 0LL;
  v9 = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, ImagePath);
  if ( inited < 0 )
    return inited;
  if ( ResultLength )
  {
    if ( DestinationString.Length )
      return -1073741811;
    if ( v8 )
      v14 = 0x2222222222222222LL;
    else
      v14 = 0x2222212222111211LL;
    v16 = *((_QWORD *)&v79 + 1) & 0xCCCCFCCCCCCCFCCCuLL | 0x2222022222220222LL;
    v15 = 572661794LL;
LABEL_14:
    if ( Policy > ImageFontDisablePolicy )
    {
      v17 = Policy - 10;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          if ( BufferSize == 1072 )
          {
            memset_thunk_772440563353939046(Buffer, 0, 0x430uLL);
            v19 = 0LL;
            if ( (v16 & 0x30000) != 0 )
            {
              if ( (BYTE2(v16) & 3) == 1 )
              {
                *((_QWORD *)Buffer + 3) = 1LL;
                v19 = 1LL;
              }
              else if ( (BYTE2(v16) & 3) == 2 )
              {
                *((_QWORD *)Buffer + 3) = 2LL;
                v19 = 2LL;
              }
            }
            if ( (v16 & 0x40000) != 0 )
              *((_QWORD *)Buffer + 3) = v19 | 4;
            v20 = 0LL;
            if ( ((v16 >> 20) & 3) != 0 )
            {
              if ( ((v16 >> 20) & 3) == 1 )
              {
                *((_QWORD *)Buffer + 4) = 1LL;
                v20 = 1LL;
              }
              else if ( ((v16 >> 20) & 3) == 2 )
              {
                v20 = *((_QWORD *)Buffer + 4) & 0xFFFFFFFFFFFFFFFCuLL | 2;
                *((_QWORD *)Buffer + 4) = v20;
              }
            }
            else
            {
              *((_QWORD *)Buffer + 4) = 0LL;
            }
            if ( ((v16 >> 20) & 4) != 0 )
              *((_QWORD *)Buffer + 4) = v20 | 4;
            if ( (v16 & 0x3000000) != 0 )
            {
              if ( (BYTE3(v16) & 3) == 1 )
              {
                v69 = *((_QWORD *)Buffer + 5) & 0xFFFFFFFFFFFFFFFCuLL | 1;
              }
              else
              {
                if ( (BYTE3(v16) & 3) != 2 )
                  goto LABEL_30;
                v69 = *((_QWORD *)Buffer + 5) & 0xFFFFFFFFFFFFFFFCuLL | 2;
              }
              *((_QWORD *)Buffer + 5) = v69;
            }
            else
            {
              *((_QWORD *)Buffer + 5) &= 0xFFFFFFFFFFFFFFFCuLL;
            }
LABEL_30:
            if ( (v16 & 0x4000000) != 0 )
              *((_QWORD *)Buffer + 5) |= 4uLL;
            if ( ((v16 >> 28) & 3) != 0 )
            {
              if ( ((v16 >> 28) & 3) == 1 )
              {
                *(_QWORD *)Buffer &= ~2uLL;
                *(_QWORD *)Buffer |= 1uLL;
              }
              else if ( ((v16 >> 28) & 3) == 2 )
              {
                *(_QWORD *)Buffer &= ~1uLL;
                *(_QWORD *)Buffer |= 2uLL;
              }
            }
            else
            {
              *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
            }
            if ( ((v16 >> 28) & 4) != 0 )
              *(_QWORD *)Buffer |= 4uLL;
            if ( (v16 & 0x300000000LL) != 0 )
            {
              if ( (BYTE4(v16) & 3) == 1 )
              {
                v70 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 1;
              }
              else
              {
                if ( (BYTE4(v16) & 3) != 2 )
                  goto LABEL_41;
                v70 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
              }
              *((_QWORD *)Buffer + 1) = v70;
            }
            else
            {
              *((_QWORD *)Buffer + 1) &= 0xFFFFFFFFFFFFFFFCuLL;
            }
LABEL_41:
            if ( (v16 & 0x400000000LL) != 0 )
              *((_QWORD *)Buffer + 1) |= 4uLL;
            v21 = v16 >> 40;
            if ( (v21 & 3) != 0 )
            {
              if ( (v21 & 3) == 1 )
              {
                v71 = *((_QWORD *)Buffer + 2) & 0xFFFFFFFFFFFFFFFCuLL | 1;
              }
              else
              {
                if ( (v21 & 3) != 2 )
                {
LABEL_46:
                  if ( (v21 & 4) != 0 )
                    *((_QWORD *)Buffer + 2) |= 4uLL;
                  v22 = (char *)Buffer + 48;
                  v23 = v84;
                  do
                  {
                    v24 = v23[1];
                    *v22 = *v23;
                    v25 = v23[2];
                    v22[1] = v24;
                    v26 = v23[3];
                    v22[2] = v25;
                    v27 = v23[4];
                    v22[3] = v26;
                    v28 = v23[5];
                    v22[4] = v27;
                    v29 = v23[6];
                    v22[5] = v28;
                    v30 = v23[7];
                    v23 += 8;
                    v22[6] = v29;
                    v22 += 8;
                    *(v22 - 1) = v30;
                    --v6;
                  }
                  while ( v6 );
                  return inited;
                }
                v71 = *((_QWORD *)Buffer + 2) & 0xFFFFFFFFFFFFFFFCuLL | 2;
              }
              *((_QWORD *)Buffer + 2) = v71;
              goto LABEL_46;
            }
            *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
            goto LABEL_46;
          }
          return -1073741811;
        }
        v38 = v18 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( v41 )
              {
                v42 = v41 - 1;
                if ( v42 )
                {
                  if ( v42 != 1 || BufferSize != 8 )
                    return -1073741811;
                  v43 = v15 >> 12;
                }
                else
                {
                  if ( BufferSize != 8 )
                    return -1073741811;
                  v43 = v15 >> 20;
                }
                *(_QWORD *)Buffer = 0LL;
                if ( (v43 & 3) != 0 )
                {
                  if ( (v43 & 3) == 1 )
                  {
                    *(_QWORD *)Buffer = 1LL;
                    v9 = 1LL;
                  }
                  else if ( (v43 & 3) == 2 )
                  {
                    *(_QWORD *)Buffer = 2LL;
                    v9 = 2LL;
                  }
                }
                v49 = (v43 & 4) == 0;
                goto LABEL_85;
              }
              if ( BufferSize != 24 )
                return -1073741811;
              v61 = v16 >> 60;
              v62 = 0LL;
              v63 = 0LL;
              *(_OWORD *)Buffer = 0LL;
              *((_QWORD *)Buffer + 2) = 0LL;
              if ( (v61 & 3) != 0 )
              {
                if ( (v61 & 3) == 1 )
                {
LABEL_189:
                  v63 = v62 | 1;
                  *(_QWORD *)Buffer = v62 | 1;
                  goto LABEL_190;
                }
                if ( (v61 & 3) != 2 )
                {
                  if ( (v61 & 3) != 3 )
                    goto LABEL_190;
                  v62 = 8LL;
                  goto LABEL_189;
                }
                *(_QWORD *)Buffer = 2LL;
                v63 = 2LL;
              }
LABEL_190:
              if ( (v61 & 4) != 0 )
                *(_QWORD *)Buffer = v63 | 4;
              v64 = 0LL;
              if ( (v15 & 3) != 0 )
              {
                if ( (v15 & 3) == 1 )
                {
                  *((_QWORD *)Buffer + 1) = 1LL;
                  v64 = 1LL;
                }
                else if ( (v15 & 3) == 2 )
                {
                  v64 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
                  *((_QWORD *)Buffer + 1) = v64;
                }
              }
              else
              {
                *((_QWORD *)Buffer + 1) = 0LL;
              }
              if ( (v15 & 4) != 0 )
                *((_QWORD *)Buffer + 1) = v64 | 4;
              v65 = v15 >> 4;
              if ( (v65 & 3) == 0 )
              {
                *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
                goto LABEL_210;
              }
              if ( (v65 & 3) != 1 )
              {
                if ( (v65 & 3) == 2 )
                {
                  v66 = 2LL;
                  goto LABEL_207;
                }
                if ( (v65 & 3) != 3 )
                {
LABEL_210:
                  v67 = (v65 & 4) == 0;
                  goto LABEL_263;
                }
                *((_QWORD *)Buffer + 2) |= 8uLL;
              }
              v66 = *((_QWORD *)Buffer + 2) & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_207:
              *((_QWORD *)Buffer + 2) = v66;
              goto LABEL_210;
            }
            if ( BufferSize != 8 )
              return -1073741811;
            v14 >>= 12;
            goto LABEL_139;
          }
          if ( BufferSize != 8 )
            return -1073741811;
          v14 >>= 4;
LABEL_83:
          *(_QWORD *)Buffer = 0LL;
          if ( (v14 & 3) != 0 )
          {
            if ( (v14 & 3) != 1 )
            {
              if ( (v14 & 3) == 2 )
              {
LABEL_142:
                *(_QWORD *)Buffer = 2LL;
                v9 = 2LL;
                goto LABEL_84;
              }
              if ( (v14 & 3) != 3 )
                goto LABEL_84;
              v9 = 8LL;
            }
            v9 |= 1uLL;
            *(_QWORD *)Buffer = v9;
          }
LABEL_84:
          v49 = (v14 & 4) == 0;
          goto LABEL_85;
        }
        if ( BufferSize != 8 )
          return -1073741811;
        v68 = v16 >> 36;
        *(_QWORD *)Buffer = 0LL;
        if ( (v68 & 3) != 0 )
        {
          switch ( v68 & 3 )
          {
            case 1uLL:
LABEL_221:
              v9 |= 1uLL;
              *(_QWORD *)Buffer = v9;
              break;
            case 2uLL:
              *(_QWORD *)Buffer = 2LL;
              v9 = 2LL;
              break;
            case 3uLL:
              v9 = 8LL;
              goto LABEL_221;
          }
        }
        v49 = (v68 & 4) == 0;
LABEL_85:
        if ( !v49 )
          *(_QWORD *)Buffer = v9 | 4;
        return inited;
      }
      if ( BufferSize != 24 )
        return -1073741811;
      v72 = 0LL;
      *(_OWORD *)Buffer = 0LL;
      *((_QWORD *)Buffer + 2) = 0LL;
      if ( ((v14 >> 52) & 3) != 0 )
      {
        if ( ((v14 >> 52) & 3) == 1 )
        {
          *(_QWORD *)Buffer = 1LL;
          v72 = 1LL;
        }
        else if ( ((v14 >> 52) & 3) == 2 )
        {
          *(_QWORD *)Buffer = 2LL;
          v72 = 2LL;
        }
      }
      if ( ((v14 >> 52) & 4) != 0 )
        *(_QWORD *)Buffer = v72 | 4;
      v73 = 0LL;
      if ( (v14 & 0x300000000000000LL) != 0 )
      {
        if ( (HIBYTE(v14) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 1) = 1LL;
          v73 = 1LL;
        }
        else if ( (HIBYTE(v14) & 3) == 2 )
        {
          v73 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
          *((_QWORD *)Buffer + 1) = v73;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 1) = 0LL;
      }
      if ( (v14 & 0x400000000000000LL) != 0 )
        *((_QWORD *)Buffer + 1) = v73 | 4;
      v59 = v14 >> 60;
      if ( (v59 & 3) != 0 )
      {
        if ( (v59 & 3) != 1 )
        {
          if ( (v59 & 3) == 2 )
          {
            v60 = 2LL;
            goto LABEL_260;
          }
          goto LABEL_262;
        }
        goto LABEL_259;
      }
      goto LABEL_261;
    }
    if ( Policy == ImageFontDisablePolicy )
    {
      if ( BufferSize != 8 )
        return -1073741811;
      LOBYTE(v14) = BYTE6(v14);
      goto LABEL_83;
    }
    if ( Policy == ImageDepPolicy )
    {
      if ( BufferSize != 8 )
        return -1073741811;
      goto LABEL_83;
    }
    v32 = Policy - 1;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( !v33 )
      {
        if ( BufferSize != 8 )
          return -1073741811;
        v14 >>= 36;
        goto LABEL_83;
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
        if ( BufferSize != 8 )
          return -1073741811;
        v14 >>= 24;
        goto LABEL_139;
      }
      v35 = v34 - 1;
      if ( v35 )
      {
        v36 = v35 - 2;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 != 1 || BufferSize != 16 )
              return -1073741811;
            v44 = v14 >> 44;
            v45 = 0LL;
            v46 = 0LL;
            *(_OWORD *)Buffer = 0LL;
            if ( (v44 & 3) == 0 )
              goto LABEL_73;
            if ( (v44 & 3) != 1 )
            {
              if ( (v44 & 3) == 2 )
              {
                *(_QWORD *)Buffer = 2LL;
                v46 = 2LL;
                goto LABEL_73;
              }
              if ( (v44 & 3) != 3 )
              {
LABEL_73:
                if ( (v44 & 4) != 0 )
                  *(_QWORD *)Buffer = v46 | 4;
                v47 = v16 >> 4;
                goto LABEL_76;
              }
              v45 = 8LL;
            }
            v46 = v45 | 1;
            *(_QWORD *)Buffer = v45 | 1;
            goto LABEL_73;
          }
          if ( BufferSize != 16 )
            return -1073741811;
          v50 = v14 >> 40;
          v51 = 0LL;
          v52 = 0LL;
          *(_OWORD *)Buffer = 0LL;
          if ( (v50 & 3) != 0 )
          {
            switch ( v50 & 3 )
            {
              case 1uLL:
LABEL_117:
                v52 = v51 | 1;
                *(_QWORD *)Buffer = v51 | 1;
                break;
              case 2uLL:
                *(_QWORD *)Buffer = 2LL;
                v52 = 2LL;
                break;
              case 3uLL:
                v51 = 8LL;
                goto LABEL_117;
            }
          }
          if ( (v50 & 4) != 0 )
            *(_QWORD *)Buffer = v52 | 4;
          v47 = v16 >> 8;
LABEL_76:
          if ( (v47 & 3) != 0 )
          {
            if ( (v47 & 3) == 1 )
            {
              *((_QWORD *)Buffer + 1) = 1LL;
              v9 = 1LL;
              goto LABEL_78;
            }
            if ( (v47 & 3) != 2 )
            {
LABEL_78:
              v48 = (v47 & 4) == 0;
              goto LABEL_79;
            }
            v9 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
          }
          *((_QWORD *)Buffer + 1) = v9;
          goto LABEL_78;
        }
        if ( BufferSize != 8 )
          return -1073741811;
        LOBYTE(v14) = BYTE4(v14);
LABEL_139:
        *(_QWORD *)Buffer = 0LL;
        if ( (v14 & 3) != 0 )
        {
          if ( (v14 & 3) == 1 )
          {
            *(_QWORD *)Buffer = 1LL;
            v9 = 1LL;
            goto LABEL_84;
          }
          if ( (v14 & 3) == 2 )
            goto LABEL_142;
        }
        goto LABEL_84;
      }
      if ( BufferSize != 16 )
        return -1073741811;
      v53 = v14 >> 28;
      v54 = 0LL;
      *(_OWORD *)Buffer = 0LL;
      if ( (v53 & 3) != 0 )
      {
        if ( (v53 & 3) == 1 )
        {
          *(_QWORD *)Buffer = 1LL;
          v54 = 1LL;
        }
        else if ( (v53 & 3) == 2 )
        {
          *(_QWORD *)Buffer = 2LL;
          v54 = 2LL;
        }
      }
      if ( (v53 & 4) != 0 )
        *(_QWORD *)Buffer = v54 | 4;
      v55 = v15 >> 28;
      if ( (v55 & 3) != 0 )
      {
        if ( (v55 & 3) == 1 )
        {
          *((_QWORD *)Buffer + 1) = 1LL;
          v9 = 1LL;
          goto LABEL_137;
        }
        if ( (v55 & 3) != 2 )
        {
LABEL_137:
          v48 = (v55 & 4) == 0;
LABEL_79:
          if ( !v48 )
            *((_QWORD *)Buffer + 1) = v9 | 4;
          return inited;
        }
        v9 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
      }
      *((_QWORD *)Buffer + 1) = v9;
      goto LABEL_137;
    }
    if ( BufferSize != 24 )
      return -1073741811;
    v56 = 0LL;
    v57 = 0LL;
    *(_OWORD *)Buffer = 0LL;
    *((_QWORD *)Buffer + 2) = 0LL;
    if ( (v14 & 0x300) != 0 )
    {
      if ( (BYTE1(v14) & 3) == 1 )
      {
LABEL_150:
        v57 = v56 | 1;
        *(_QWORD *)Buffer = v56 | 1;
        goto LABEL_151;
      }
      if ( (BYTE1(v14) & 3) != 2 )
      {
        if ( (BYTE1(v14) & 3) != 3 )
          goto LABEL_151;
        v56 = 8LL;
        goto LABEL_150;
      }
      *(_QWORD *)Buffer = 2LL;
      v57 = 2LL;
    }
LABEL_151:
    if ( (v14 & 0x400) != 0 )
      *(_QWORD *)Buffer = v57 | 4;
    v58 = 0LL;
    if ( (v14 & 0x30000) != 0 )
    {
      if ( (BYTE2(v14) & 3) == 1 )
      {
        *((_QWORD *)Buffer + 1) = 1LL;
        v58 = 1LL;
      }
      else if ( (BYTE2(v14) & 3) == 2 )
      {
        v58 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
        *((_QWORD *)Buffer + 1) = v58;
      }
    }
    else
    {
      *((_QWORD *)Buffer + 1) = 0LL;
    }
    if ( (v14 & 0x40000) != 0 )
      *((_QWORD *)Buffer + 1) = v58 | 4;
    v59 = v14 >> 20;
    if ( (v59 & 3) != 0 )
    {
      if ( (v59 & 3) != 1 )
      {
        if ( (v59 & 3) == 2 )
        {
          v60 = 2LL;
LABEL_260:
          *((_QWORD *)Buffer + 2) = v60;
        }
LABEL_262:
        v67 = (v59 & 4) == 0;
LABEL_263:
        if ( !v67 )
          *((_QWORD *)Buffer + 2) |= 4uLL;
        return inited;
      }
LABEL_259:
      v60 = 1LL;
      goto LABEL_260;
    }
LABEL_261:
    *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_262;
  }
  KeyHandle = 0LL;
  v11 = (wchar_t *)L"MitigationOptions";
  ResultLength = 0;
  *(_QWORD *)&ValueName.Length = 0LL;
  if ( v8 )
    v11 = (wchar_t *)L"MitigationAuditOptions";
  ValueName.Buffer = v11;
  v12 = wcslen(v11);
  if ( v12 <= 0x7FFE )
  {
    ValueName.Length = 2 * v12;
    ValueName.MaximumLength = 2 * v12 + 2;
  }
  if ( DestinationString.Length )
  {
    v13 = RtlpOpenImageFileOptionsKeyEx(&DestinationString, 9LL);
  }
  else
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180176050;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v13 = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  }
  inited = v13;
  if ( v13 >= 0 )
  {
    inited = NtQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x28u,
               &ResultLength);
    if ( inited >= 0 && Policy == ImagePayloadRestrictionPolicy )
      inited = RtlpQueryEafPlusModuleList(KeyHandle, v84);
    NtClose(KeyHandle);
    if ( inited >= 0 )
    {
      if ( Size > 0x18 )
        return -1073741788;
      memmove(&v79, &Size_4, Size);
      v14 = v79;
      v15 = v80;
      v16 = *((_QWORD *)&v79 + 1);
      goto LABEL_14;
    }
  }
  return inited;
}
