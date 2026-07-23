/*
 * XREFs of RtlSetImageMitigationPolicy @ 0x1801385F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800B2F18 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenSystemSessionKey @ 0x180115410 (RtlpOpenSystemSessionKey.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x180139750 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     ZwSetValueKey @ 0x180163E10 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x180164DF0 (ZwDeleteValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlSetImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  const WCHAR *v7; // rdx
  ULONG v8; // r14d
  char v9; // r15
  ULONG v10; // r12d
  int inited; // ebx
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  __int32 v15; // edi
  __int32 v16; // edi
  __int32 v17; // edi
  __int32 v18; // edi
  int v19; // edi
  int v20; // edi
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // r9d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  bool v57; // cf
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // r10
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r9
  unsigned __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r10
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  __int32 v77; // edi
  __int32 v78; // edi
  __int32 v79; // edi
  __int32 v80; // edi
  int v81; // edi
  int v82; // edi
  int v83; // edi
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r10
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // r8
  __int64 v91; // rcx
  __int64 v92; // rcx
  int v93; // r10d
  __int64 v94; // rcx
  __int64 v95; // rax
  unsigned __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rcx
  unsigned __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // r8
  unsigned __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rax
  unsigned __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // r8
  unsigned __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rcx
  unsigned __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rdx
  unsigned __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // r9
  __int64 v134; // r11
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // rdx
  __int64 v139; // rdx
  __int64 v140; // r9
  unsigned __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // r11
  __int64 v145; // rax
  HANDLE KeyHandle; // [rsp+38h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-61h] BYREF
  _UNICODE_STRING ValueName; // [rsp+48h] [rbp-59h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-49h] BYREF
  _UNICODE_STRING v151; // [rsp+68h] [rbp-39h] BYREF
  __int128 Data; // [rsp+78h] [rbp-29h] BYREF
  unsigned __int64 v153; // [rsp+88h] [rbp-19h]
  char KeyValueInformation[8]; // [rsp+90h] [rbp-11h] BYREF
  unsigned int Size; // [rsp+98h] [rbp-9h]
  size_t Size_4; // [rsp+9Ch] [rbp-5h] BYREF

  v153 = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v7 = L"MitigationOptions";
  v8 = Flags & 2;
  v9 = Flags & 1;
  v10 = Flags & 8;
  DestinationString = 0LL;
  if ( (Flags & 8) != 0 )
    v7 = L"MitigationAuditOptions";
  ValueName = 0LL;
  v151 = 0LL;
  Data = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, v7);
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&ValueName, L"EAFModules");
    if ( inited >= 0 )
    {
      if ( (v9 || v8) && (BufferSize || Buffer) )
        goto LABEL_310;
      inited = RtlInitUnicodeStringEx(&v151, ImagePath);
      if ( inited >= 0 )
      {
        v13 = ImagePath
            ? RtlpOpenImageFileOptionsKeyEx(&v151.Length, 0x2000Fu, v8 == 0, &KeyHandle)
            : RtlpOpenSystemSessionKey(0x2000Fu, &KeyHandle);
        inited = v13;
        if ( v13 >= 0 )
        {
          v14 = NtQueryValueKey(
                  KeyHandle,
                  &DestinationString,
                  KeyValuePartialInformation,
                  KeyValueInformation,
                  0x28u,
                  &ResultLength);
          inited = v14;
          if ( v14 >= 0 )
          {
            if ( Size > 0x18 )
            {
              inited = -1073741788;
              goto LABEL_311;
            }
            memmove(&Data, &Size_4, Size);
          }
          else if ( v14 != -1073741772 )
          {
            goto LABEL_311;
          }
          if ( Policy <= ImageFontDisablePolicy )
          {
            if ( Policy == ImageFontDisablePolicy )
            {
              if ( v9 )
              {
                v21 = 0xFFF0FFFFFFFFFFFFuLL;
                goto LABEL_32;
              }
              if ( BufferSize != 8 )
                goto LABEL_310;
              v44 = 0xFFF0FFFFFFFFFFFFuLL;
              v75 = *(_QWORD *)Buffer & 4LL;
              if ( (*(_QWORD *)Buffer & 3) != 0 )
              {
                if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                {
                  v76 = v75 != 0 ? 6LL : 2LL;
                }
                else if ( (*(_BYTE *)Buffer & 8) != 0 )
                {
                  v76 = v75 != 0 ? 7LL : 3LL;
                }
                else
                {
                  v76 = v75 != 0 ? 5LL : 1LL;
                }
                v43 = v76 << 48;
                goto LABEL_76;
              }
              v57 = v75 != 0;
              v58 = 0x4000000000000LL;
              goto LABEL_154;
            }
            if ( Policy == ImageDepPolicy )
            {
              if ( v9 )
              {
                *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFFFFF0uLL;
                goto LABEL_309;
              }
              if ( BufferSize != 8 )
                goto LABEL_310;
              v74 = *(_QWORD *)Buffer & 4LL;
              if ( (*(_QWORD *)Buffer & 3) != 0 )
              {
                if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                {
                  v43 = v74 != 0 ? 6LL : 2LL;
                }
                else if ( (*(_BYTE *)Buffer & 8) != 0 )
                {
                  v43 = v74 != 0 ? 7LL : 3LL;
                }
                else
                {
                  v43 = v74 != 0 ? 5LL : 1LL;
                }
              }
              else
              {
                v43 = v74 != 0 ? 4 : 0;
              }
              v46 = Data & 0xFFFFFFFFFFFFFFF0uLL;
              goto LABEL_148;
            }
            v15 = Policy - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  v18 = v17 - 1;
                  if ( v18 )
                  {
                    v19 = v18 - 2;
                    if ( v19 )
                    {
                      v20 = v19 - 1;
                      if ( v20 )
                      {
                        if ( v20 != 1 )
                          goto LABEL_311;
                        if ( v9 )
                        {
                          v21 = 0xFFFF0FFFFFFFFFFFuLL;
LABEL_32:
                          *(_QWORD *)&Data = v21 & Data;
LABEL_309:
                          inited = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, &Data, 0x18u);
                          goto LABEL_311;
                        }
                        if ( BufferSize == 16 )
                        {
                          v22 = *((_QWORD *)Buffer + 1);
                          v23 = v22 & 4;
                          v24 = *(_QWORD *)Buffer & 4LL;
                          if ( (*(_QWORD *)Buffer & 3) != 0 )
                          {
                            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                            {
                              v26 = v24 != 0 ? 6LL : 2LL;
                            }
                            else if ( (*(_BYTE *)Buffer & 8) != 0 )
                            {
                              v26 = v24 != 0 ? 7LL : 3LL;
                            }
                            else
                            {
                              v26 = v24 != 0 ? 5LL : 1LL;
                            }
                            v25 = v26 << 44;
                          }
                          else
                          {
                            v25 = -(__int64)(v24 != 0) & 0x400000000000LL;
                          }
                          *(_QWORD *)&Data = Data & 0xFFFF0FFFFFFFFFFFuLL | v25;
                          v27 = v22 & 3;
                          if ( v27 )
                          {
                            if ( v27 == 2LL )
                            {
                              v28 = (v23 != 0 ? 6LL : 2LL) << 44;
                              v30 = v23 != 0 ? 96LL : 32LL;
                            }
                            else
                            {
                              v28 = (v23 != 0 ? 5LL : 1LL) << 44;
                              v30 = v23 != 0 ? 80LL : 16LL;
                            }
                            v29 = v30 & 0xFFFF0FFFFFFFFFFFuLL;
                          }
                          else
                          {
                            v28 = v23 != 0 ? 0x40uLL : 0;
                            v29 = -(__int64)(v23 != 0) & 0x400000000000LL;
                          }
                          v31 = v29 | v28;
                          v32 = 0xFFFF0FFFFFFFFF0FuLL;
                          goto LABEL_49;
                        }
                        goto LABEL_310;
                      }
                      if ( v9 )
                      {
                        Data &= __PAIR128__(-3841LL, 0xFFFFF0FFFFFFFFFFuLL);
                        goto LABEL_309;
                      }
                      if ( BufferSize == 16 )
                      {
                        v34 = *((_QWORD *)Buffer + 1);
                        v35 = v34 & 4;
                        v36 = *(_QWORD *)Buffer & 4LL;
                        if ( (*(_QWORD *)Buffer & 3) != 0 )
                        {
                          if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                          {
                            v39 = Data & 0xFFFFF0FFFFFFFFFFuLL | ((v36 != 0 ? 6LL : 2LL) << 40);
                            v38 = *((_QWORD *)&Data + 1);
                            *(_QWORD *)&Data = v39;
                            v31 = v35 != 0 ? 1536LL : 512LL;
                            goto LABEL_66;
                          }
                          if ( (*(_BYTE *)Buffer & 8) != 0 )
                            v40 = v36 != 0 ? 7LL : 3LL;
                          else
                            v40 = v36 != 0 ? 5LL : 1LL;
                          v38 = *((_QWORD *)&Data + 1);
                          *(_QWORD *)&Data = Data & 0xFFFFF0FFFFFFFFFFuLL | (v40 << 40);
                          v41 = v34 & 3;
                          if ( v41 )
                          {
                            if ( v41 != 2LL )
                            {
                              v31 = v35 != 0 ? 1280LL : 256LL;
                              goto LABEL_66;
                            }
                            goto LABEL_56;
                          }
                        }
                        else
                        {
                          v37 = Data & 0xFFFFF0FFFFFFFFFFuLL | -(__int64)(v36 != 0) & 0x40000000000LL;
                          v38 = *((_QWORD *)&Data + 1);
                          *(_QWORD *)&Data = v37;
                          if ( (v34 & 3) == 2 )
                          {
LABEL_56:
                            v31 = v35 != 0 ? 1536LL : 512LL;
LABEL_66:
                            v33 = v38 & 0xFFFFFFFFFFFFF0FFuLL;
                            goto LABEL_50;
                          }
                        }
                        v31 = v35 != 0 ? 0x400 : 0;
                        goto LABEL_66;
                      }
LABEL_310:
                      inited = -1073741811;
                      goto LABEL_311;
                    }
                    if ( v9 )
                    {
                      v21 = 0xFFFFFFF0FFFFFFFFuLL;
                      goto LABEL_32;
                    }
                    if ( BufferSize != 8 )
                      goto LABEL_310;
                    v42 = *(_QWORD *)Buffer & 4LL;
                    if ( (*(_QWORD *)Buffer & 3) != 0 )
                    {
                      v44 = 0xFFFFFFF0FFFFFFFFuLL;
                      if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                        v45 = v42 != 0 ? 6LL : 2LL;
                      else
                        v45 = v42 != 0 ? 5LL : 1LL;
                      v43 = v45 << 32;
                    }
                    else
                    {
                      v43 = -(__int64)(v42 != 0) & 0x400000000LL;
                      v44 = 0xFFFFFFF0FFFFFFFFuLL;
                    }
                    goto LABEL_76;
                  }
                  if ( v9 )
                  {
                    *(_QWORD *)&Data = Data & 0xFFFFFFFF0FFFFFFFuLL;
                    v153 &= 0xFFFFFFFF0FFFFFFFuLL;
                    goto LABEL_309;
                  }
                  if ( BufferSize != 16 )
                    goto LABEL_310;
                  v47 = *(_QWORD *)Buffer & 4LL;
                  if ( (*(_QWORD *)Buffer & 3) != 0 )
                  {
                    if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                      v49 = v47 != 0 ? 6LL : 2LL;
                    else
                      v49 = v47 != 0 ? 5LL : 1LL;
                    v48 = v49 << 28;
                  }
                  else
                  {
                    v48 = -(__int64)(v47 != 0) & 0x40000000;
                  }
                  *(_QWORD *)&Data = Data & 0xFFFFFFFF0FFFFFFFuLL | v48;
                  v50 = *((_QWORD *)Buffer + 1) & 4LL;
                  if ( (*((_QWORD *)Buffer + 1) & 3) != 0 )
                  {
                    if ( (*((_QWORD *)Buffer + 1) & 3LL) == 2 )
                      v52 = v50 != 0 ? 6LL : 2LL;
                    else
                      v52 = v50 != 0 ? 5LL : 1LL;
                    v51 = v52 << 28;
                  }
                  else
                  {
                    v51 = -(__int64)(v50 != 0) & 0x40000000;
                  }
                  v53 = v153 & 0xFFFFFFFF0FFFFFFFuLL;
LABEL_93:
                  v153 = v53 | v51;
                  goto LABEL_309;
                }
                if ( v9 )
                {
                  *(_QWORD *)&Data = Data & 0xFFFFFFFFF0FFFFFFuLL;
                  goto LABEL_309;
                }
                if ( BufferSize != 8 )
                  goto LABEL_310;
                v54 = *(_QWORD *)Buffer & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                    v55 = v54 != 0 ? 6LL : 2LL;
                  else
                    v55 = v54 != 0 ? 5LL : 1LL;
                  v43 = v55 << 24;
                }
                else
                {
                  v43 = v54 != 0 ? 0x4000000 : 0;
                }
                v46 = Data & 0xFFFFFFFFF0FFFFFFuLL;
                goto LABEL_148;
              }
              if ( v9 )
              {
                v21 = 0xFFFFFF0FFFFFFFFFuLL;
                goto LABEL_32;
              }
              if ( BufferSize != 8 )
                goto LABEL_310;
              v44 = 0xFFFFFF0FFFFFFFFFuLL;
              v56 = *(_QWORD *)Buffer & 4LL;
              if ( (*(_QWORD *)Buffer & 3) != 0 )
              {
                if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                {
                  v59 = v56 != 0 ? 6LL : 2LL;
                }
                else if ( (*(_BYTE *)Buffer & 8) != 0 )
                {
                  v59 = v56 != 0 ? 7LL : 3LL;
                }
                else
                {
                  v59 = v56 != 0 ? 5LL : 1LL;
                }
                v43 = v59 << 36;
                goto LABEL_76;
              }
              v57 = v56 != 0;
              v58 = 0x4000000000LL;
LABEL_154:
              v43 = v58 & -(__int64)v57;
LABEL_76:
              v46 = v44 & Data;
              goto LABEL_148;
            }
            if ( v9 )
            {
              *(_QWORD *)&Data = Data & 0xFFFFFFFFFF00F0FFuLL;
              goto LABEL_309;
            }
            if ( BufferSize != 24 )
              goto LABEL_310;
            v60 = *((_QWORD *)Buffer + 1);
            v61 = *((_QWORD *)Buffer + 2);
            v62 = v60 & 4;
            v63 = v61 & 4;
            v64 = *(_QWORD *)Buffer & 4LL;
            if ( (*(_QWORD *)Buffer & 3) != 0 )
            {
              if ( (*(_QWORD *)Buffer & 3LL) == 2 )
              {
                v65 = (((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400) + 512;
              }
              else if ( (*(_BYTE *)Buffer & 8) != 0 )
              {
                v65 = (((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400) + 768;
              }
              else
              {
                v65 = (((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400) + 256;
              }
            }
            else
            {
              v65 = ((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400;
            }
            v66 = v60 & 3;
            v67 = Data & 0xFFFFFFFFFFF0F0FFuLL | v65 & 0xFFFFFFFFFFF0FFFFuLL;
            if ( v66 )
            {
              if ( v66 == 2 )
                v69 = v62 != 0 ? 6LL : 2LL;
              else
                v69 = v62 != 0 ? 5LL : 1LL;
              v68 = v69 << 16;
            }
            else
            {
              v68 = v62 != 0 ? 0x40000 : 0;
            }
            v70 = v61 & 3;
            v71 = (v67 | v68) & 0xFFFFFFFFFF0FFFFFuLL;
            if ( v70 )
            {
              if ( v70 == 2 )
                v73 = v63 != 0 ? 6LL : 2LL;
              else
                v73 = v63 != 0 ? 5LL : 1LL;
              v72 = v73 << 20;
            }
            else
            {
              v72 = v63 != 0 ? 0x400000 : 0;
            }
LABEL_308:
            *(_QWORD *)&Data = v71 | v72;
            goto LABEL_309;
          }
          v77 = Policy - 10;
          if ( !v77 )
          {
            if ( v9 )
            {
              *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFFFLL;
              goto LABEL_309;
            }
            if ( BufferSize != 24 )
              goto LABEL_310;
            v133 = *((_QWORD *)Buffer + 1);
            v134 = *((_QWORD *)Buffer + 2);
            v135 = *(_QWORD *)Buffer & 4LL;
            v136 = v133 & 4;
            v137 = v134 & 4;
            if ( (*(_QWORD *)Buffer & 3) != 0 )
            {
              if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                v139 = (((unsigned __int128)-(__int128)(unsigned __int64)v135 >> 64) & 4) + 2;
              else
                v139 = (((unsigned __int128)-(__int128)(unsigned __int64)v135 >> 64) & 4) + 1;
              v138 = v139 << 52;
            }
            else
            {
              v138 = -(__int64)(v135 != 0) & 0x40000000000000LL;
            }
            v140 = v133 & 3;
            v141 = Data & 0xF00FFFFFFFFFFFFFuLL | v138 & 0xF0FFFFFFFFFFFFFFuLL;
            if ( v140 )
            {
              if ( v140 == 2 )
                v143 = v136 != 0 ? 6LL : 2LL;
              else
                v143 = v136 != 0 ? 5LL : 1LL;
              v142 = v143 << 56;
            }
            else
            {
              v142 = -(__int64)(v136 != 0) & 0x400000000000000LL;
            }
            v144 = v134 & 3;
            v71 = (v141 | v142) & 0xFFFFFFFFFFFFFFFLL;
            if ( v144 )
            {
              if ( v144 == 2 )
                v145 = v137 != 0 ? 6LL : 2LL;
              else
                v145 = v137 != 0 ? 5LL : 1LL;
              v72 = v145 << 60;
            }
            else
            {
              v72 = -(__int64)(v137 != 0) & 0x4000000000000000LL;
            }
            goto LABEL_308;
          }
          v78 = v77 - 1;
          if ( v78 )
          {
            v79 = v78 - 1;
            if ( v79 )
            {
              v80 = v79 - 1;
              if ( v80 )
              {
                v81 = v80 - 1;
                if ( v81 )
                {
                  v82 = v81 - 1;
                  if ( !v82 )
                  {
                    if ( v9 )
                    {
                      *((_QWORD *)&Data + 1) &= 0xFFFFFFFFFFFFFFFuLL;
                      v153 &= 0xFFFFFFFFFFFFFF00uLL;
                      goto LABEL_309;
                    }
                    if ( BufferSize == 24 )
                    {
                      v87 = *((_QWORD *)Buffer + 1);
                      v88 = v87 & 4;
                      v89 = *(_QWORD *)Buffer & 4LL;
                      v90 = *((_QWORD *)Buffer + 2) & 4LL;
                      if ( (*(_QWORD *)Buffer & 3) != 0 )
                      {
                        if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                        {
                          v92 = v89 != 0 ? 6LL : 2LL;
                        }
                        else if ( (*(_BYTE *)Buffer & 8) != 0 )
                        {
                          v92 = v89 != 0 ? 7LL : 3LL;
                        }
                        else
                        {
                          v92 = v89 != 0 ? 5LL : 1LL;
                        }
                        v91 = v92 << 60;
                      }
                      else
                      {
                        v91 = -(__int64)(v89 != 0) & 0x4000000000000000LL;
                      }
                      *((_QWORD *)&Data + 1) = *((_QWORD *)&Data + 1) & 0xFFFFFFFFFFFFFFFLL | v91;
                      v93 = v87 & 3;
                      if ( v93 )
                      {
                        if ( v93 == 2LL )
                          v94 = v88 != 0 ? 6LL : 2LL;
                        else
                          v94 = v88 != 0 ? 5LL : 1LL;
                      }
                      else
                      {
                        v94 = v88 != 0 ? 4 : 0;
                      }
                      v95 = *((_QWORD *)Buffer + 2) & 3LL;
                      v96 = v153 & 0xFFFFFFFFFFFFFF00uLL | v94 & 0xFFFFFFFFFFFFFF0FuLL;
                      if ( v95 )
                      {
                        if ( v95 == 2 )
                        {
                          v97 = v90 != 0 ? 96LL : 32LL;
                        }
                        else if ( (*((_BYTE *)Buffer + 16) & 8) != 0 )
                        {
                          v97 = v90 != 0 ? 112LL : 48LL;
                        }
                        else
                        {
                          v97 = v90 != 0 ? 80LL : 16LL;
                        }
                      }
                      else
                      {
                        v97 = v90 != 0 ? 0x40 : 0;
                      }
                      v153 = v96 | v97;
                      goto LABEL_309;
                    }
                    goto LABEL_310;
                  }
                  v83 = v82 - 1;
                  if ( v83 )
                  {
                    if ( v83 != 1 )
                      goto LABEL_311;
                    if ( v9 )
                    {
                      v153 &= 0xFFFFFFFFFFFF0FFFuLL;
                      goto LABEL_309;
                    }
                    if ( BufferSize != 8 )
                      goto LABEL_310;
                    v84 = *(_QWORD *)Buffer & 4LL;
                    if ( (*(_QWORD *)Buffer & 3) != 0 )
                    {
                      if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                        v51 = v84 != 0 ? 24576LL : 0x2000LL;
                      else
                        v51 = v84 != 0 ? 20480LL : 4096LL;
                    }
                    else
                    {
                      v51 = v84 != 0 ? 0x4000 : 0;
                    }
                    v53 = v153 & 0xFFFFFFFFFFFF0FFFuLL;
                  }
                  else
                  {
                    if ( v9 )
                    {
                      v153 &= 0xFFFFFFFFFF0FFFFFuLL;
                      goto LABEL_309;
                    }
                    if ( BufferSize != 8 )
                      goto LABEL_310;
                    v85 = *(_QWORD *)Buffer & 4LL;
                    if ( (*(_QWORD *)Buffer & 3) != 0 )
                    {
                      if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                        v86 = v85 != 0 ? 6LL : 2LL;
                      else
                        v86 = v85 != 0 ? 5LL : 1LL;
                      v51 = v86 << 20;
                    }
                    else
                    {
                      v51 = v85 != 0 ? 0x400000 : 0;
                    }
                    v53 = v153 & 0xFFFFFFFFFF0FFFFFuLL;
                  }
                  goto LABEL_93;
                }
                if ( v9 )
                {
                  *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFF0FFFuLL;
                  goto LABEL_309;
                }
                if ( BufferSize != 8 )
                  goto LABEL_310;
                v98 = *(_QWORD *)Buffer & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                    v43 = v98 != 0 ? 24576LL : 0x2000LL;
                  else
                    v43 = v98 != 0 ? 20480LL : 4096LL;
                }
                else
                {
                  v43 = v98 != 0 ? 0x4000 : 0;
                }
                v46 = Data & 0xFFFFFFFFFFFF0FFFuLL;
              }
              else
              {
                if ( v9 )
                {
                  *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFFFF0FuLL;
                  goto LABEL_309;
                }
                if ( BufferSize != 8 )
                  goto LABEL_310;
                v99 = *(_QWORD *)Buffer & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                  {
                    v43 = v99 != 0 ? 96LL : 32LL;
                  }
                  else if ( (*(_BYTE *)Buffer & 8) != 0 )
                  {
                    v43 = v99 != 0 ? 112LL : 48LL;
                  }
                  else
                  {
                    v43 = v99 != 0 ? 80LL : 16LL;
                  }
                }
                else
                {
                  v43 = v99 != 0 ? 0x40 : 0;
                }
                v46 = Data & 0xFFFFFFFFFFFFFF0FuLL;
              }
LABEL_148:
              *(_QWORD *)&Data = v46 | v43;
              goto LABEL_309;
            }
            if ( v9 )
            {
              *((_QWORD *)&Data + 1) &= 0xFFFFFF0FFFFFFFFFuLL;
              goto LABEL_309;
            }
            if ( BufferSize != 8 )
              goto LABEL_310;
            v100 = *(_QWORD *)Buffer & 4LL;
            if ( (*(_QWORD *)Buffer & 3) != 0 )
            {
              if ( (*(_QWORD *)Buffer & 3LL) != 2 )
              {
                v32 = 0xFFFFFF0FFFFFFFFFuLL;
                if ( (*(_BYTE *)Buffer & 8) != 0 )
                  v101 = v100 != 0 ? 7LL : 3LL;
                else
                  v101 = v100 != 0 ? 5LL : 1LL;
                v31 = v101 << 36;
                goto LABEL_49;
              }
              v31 = (v100 != 0 ? 6LL : 2LL) << 36;
            }
            else
            {
              v31 = -(__int64)(v100 != 0) & 0x4000000000LL;
            }
            v32 = 0xFFFFFF0FFFFFFFFFuLL;
LABEL_49:
            v33 = v32 & *((_QWORD *)&Data + 1);
LABEL_50:
            *((_QWORD *)&Data + 1) = v33 | v31;
            goto LABEL_309;
          }
          if ( v9 )
          {
            *((_QWORD *)&Data + 1) &= 0xFFFFF0F00000FFFFuLL;
            if ( !v10 )
              ZwDeleteValueKey(KeyHandle, &ValueName);
            goto LABEL_309;
          }
          if ( BufferSize != 1072 )
            goto LABEL_310;
          if ( v10 || (inited = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)Buffer + 48, 0x400u), inited >= 0) )
          {
            v102 = *((_QWORD *)Buffer + 3) & 4LL;
            if ( (*((_QWORD *)Buffer + 3) & 3) != 0 )
            {
              if ( (*((_QWORD *)Buffer + 3) & 3LL) == 2 )
                v104 = v102 != 0 ? 6LL : 2LL;
              else
                v104 = v102 != 0 ? 5LL : 1LL;
              v103 = v104 << 16;
            }
            else
            {
              v103 = v102 != 0 ? 0x40000 : 0;
            }
            v105 = *((_QWORD *)Buffer + 4) & 4LL;
            v106 = *((_QWORD *)Buffer + 4) & 3LL;
            v107 = *((_QWORD *)&Data + 1) & 0xFFFFFFFFFF00FFFFuLL | v103 & 0xFFFFFFFFFF0FFFFFuLL;
            if ( v106 )
            {
              if ( v106 == 2 )
                v109 = v105 != 0 ? 6LL : 2LL;
              else
                v109 = v105 != 0 ? 5LL : 1LL;
              v108 = v109 << 20;
            }
            else
            {
              v108 = v105 != 0 ? 0x400000 : 0;
            }
            v110 = (v107 | v108) & 0xFFFFFFFFF0FFFFFFuLL;
            v111 = *((_QWORD *)Buffer + 5) & 4LL;
            v112 = *((_QWORD *)Buffer + 5) & 3LL;
            if ( v112 )
            {
              if ( v112 == 2 )
                v114 = v111 != 0 ? 6LL : 2LL;
              else
                v114 = v111 != 0 ? 5LL : 1LL;
              v113 = v114 << 24;
            }
            else
            {
              v113 = v111 != 0 ? 0x4000000 : 0;
            }
            v115 = v110 | v113;
            v116 = *(_QWORD *)Buffer & 4LL;
            v117 = *(_QWORD *)Buffer & 3LL;
            v118 = v115 & 0xFFFFFFFF0FFFFFFFuLL;
            if ( v117 )
            {
              if ( v117 == 2 )
                v120 = v116 != 0 ? 6LL : 2LL;
              else
                v120 = v116 != 0 ? 5LL : 1LL;
              v119 = v120 << 28;
            }
            else
            {
              v119 = -(__int64)(v116 != 0) & 0x40000000;
            }
            v121 = v118 | v119;
            v122 = *((_QWORD *)Buffer + 1) & 4LL;
            v123 = *((_QWORD *)Buffer + 1) & 3LL;
            v124 = v121 & 0xFFFFFFF0FFFFFFFFuLL;
            if ( v123 )
            {
              if ( v123 == 2 )
                v126 = v122 != 0 ? 6LL : 2LL;
              else
                v126 = v122 != 0 ? 5LL : 1LL;
              v125 = v126 << 32;
            }
            else
            {
              v125 = -(__int64)(v122 != 0) & 0x400000000LL;
            }
            v127 = v124 | v125;
            v128 = *((_QWORD *)Buffer + 2) & 4LL;
            v129 = *((_QWORD *)Buffer + 2) & 3LL;
            v130 = v127 & 0xFFFFF0FFFFFFFFFFuLL;
            if ( v129 )
            {
              if ( v129 == 2 )
                v132 = v128 != 0 ? 6LL : 2LL;
              else
                v132 = v128 != 0 ? 5LL : 1LL;
              v131 = v132 << 40;
            }
            else
            {
              v131 = -(__int64)(v128 != 0) & 0x40000000000LL;
            }
            *((_QWORD *)&Data + 1) = v130 | v131;
            goto LABEL_309;
          }
        }
      }
    }
  }
LABEL_311:
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( inited == -1073741772 && v8 )
    return 0;
  return inited;
}
