/*
 * XREFs of ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800182C0
 * Callers:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x1800191D0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001A2F0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180028B78 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180077FC0 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800A26A8 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001AC20 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A8AFE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 */

void __fastcall CAudioIdentifier::EscapeIdentifierString(const wchar_t **a1)
{
  const wchar_t **v1; // r14
  __int64 v2; // rdi
  __int64 v3; // rsi
  const wchar_t *v4; // rbx
  int v5; // r15d
  unsigned __int64 v6; // rbp
  wchar_t *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  const wchar_t *v11; // rbx
  int v12; // r12d
  unsigned __int64 v13; // rbp
  wchar_t *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  int v17; // r13d
  __int64 v18; // rdx
  const wchar_t *v19; // r15
  const wchar_t *v20; // rbx
  unsigned __int64 v21; // rbp
  wchar_t *v22; // rax
  wchar_t *v23; // r14
  __int64 v24; // rax
  const wchar_t **v25; // r14
  __int64 v26; // r15
  int v27; // r12d
  __int64 v28; // rdx
  const wchar_t *v29; // r13
  unsigned __int64 v30; // rbp
  const wchar_t *v31; // rbx
  wchar_t *v32; // rax
  wchar_t *v33; // r14
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r14
  __int64 v37; // rcx
  int v38; // r12d
  wchar_t *v39; // rdx
  __int64 v40; // r15
  size_t v41; // r8
  int v42; // r15d
  int v44; // [rsp+68h] [rbp+10h]
  int v45; // [rsp+68h] [rbp+10h]
  const wchar_t *v46; // [rsp+70h] [rbp+18h]

  v1 = a1;
  v2 = -1LL;
  do
    ++v2;
  while ( SubStr[v2] );
  if ( (_DWORD)v2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( asc_180184CA4[v3] );
    v4 = *a1;
    v5 = 0;
    v6 = (unsigned __int64)&(*a1)[*((int *)*a1 - 4)];
    if ( (unsigned __int64)*a1 < v6 )
    {
      do
      {
        v7 = wcsstr(v4, L"%");
        if ( v7 )
        {
          v35 = (int)v2;
          do
          {
            v4 = &v7[v35];
            ++v5;
            v7 = wcsstr(&v7[v35], L"%");
          }
          while ( v7 );
        }
        if ( v4 )
        {
          v8 = -1LL;
          do
            ++v8;
          while ( v4[v8] );
        }
        else
        {
          LODWORD(v8) = 0;
        }
        v4 += (int)v8 + 1;
      }
      while ( (unsigned __int64)v4 < v6 );
      v1 = a1;
      if ( v5 > 0 )
      {
        v16 = *((int *)*a1 - 4);
        v44 = v16;
        v17 = v16 + v5 * (v3 - v2);
        v18 = (unsigned int)v17;
        if ( v17 <= (int)v16 )
          v18 = (unsigned int)v16;
        if ( (int)((*((_DWORD *)*a1 - 3) - v18) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v18);
        v19 = *a1;
        v46 = *a1;
        v20 = *a1;
        v21 = (unsigned __int64)&(*a1)[v16];
        if ( (unsigned __int64)*a1 < v21 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v22 = wcsstr(v20, L"%");
              v23 = v22;
              if ( v22 )
                break;
              if ( v20 )
              {
                v24 = -1LL;
                do
                  ++v24;
                while ( v20[v24] );
              }
              else
              {
                LODWORD(v24) = 0;
              }
              v20 += (int)v24 + 1;
              if ( (unsigned __int64)v20 >= v21 )
              {
                v1 = a1;
                goto LABEL_37;
              }
            }
            v37 = v22 - v19;
            v38 = v16 - v37 - v2;
            v39 = &v22[(int)v2];
            v40 = (int)v3;
            v20 = &v22[v40];
            v41 = 2LL * v38;
            if ( v41 )
            {
              if ( !v20 || !v39 )
              {
LABEL_62:
                *(_DWORD *)_o__errno(v37, v39, v41) = 22;
                invalid_parameter_noinfo();
                goto LABEL_63;
              }
              memmove_0(&v22[v40], v39, v41);
            }
            if ( v40 * 2 )
              memcpy_0(v23, L"%%", 2LL * (int)v3);
            v19 = v46;
            v23[v38 + (int)v3] = 0;
            LODWORD(v16) = v3 - v2 + v44;
            v44 = v16;
          }
        }
LABEL_37:
        if ( v17 < 0 || v17 > *((_DWORD *)*v1 - 3) )
          goto LABEL_63;
        *((_DWORD *)*v1 - 4) = v17;
        (*v1)[v17] = 0;
      }
    }
  }
  v9 = -1LL;
  do
    ++v9;
  while ( Control[v9] );
  if ( (_DWORD)v9 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( aB[v10] );
    v11 = *v1;
    v12 = 0;
    v13 = (unsigned __int64)&(*v1)[*((int *)*v1 - 4)];
    if ( (unsigned __int64)*v1 < v13 )
    {
      do
      {
        v14 = wcsstr(v11, L"|");
        if ( v14 )
        {
          v36 = (int)v9;
          do
          {
            v11 = &v14[v36];
            ++v12;
            v14 = wcsstr(&v14[v36], L"|");
          }
          while ( v14 );
        }
        if ( v11 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( v11[v15] );
        }
        else
        {
          LODWORD(v15) = 0;
        }
        v11 += (int)v15 + 1;
      }
      while ( (unsigned __int64)v11 < v13 );
      if ( v12 > 0 )
      {
        v25 = a1;
        v26 = *((int *)*a1 - 4);
        v27 = v26 + (v10 - v9) * v12;
        v45 = *((_DWORD *)*a1 - 4);
        v28 = (unsigned int)v27;
        if ( v27 <= (int)v26 )
          v28 = (unsigned int)v26;
        if ( (int)((*((_DWORD *)*a1 - 3) - v28) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v28);
        v29 = *a1;
        v30 = (unsigned __int64)&(*a1)[v26];
        v31 = *a1;
        if ( (unsigned __int64)*a1 < v30 )
        {
          do
          {
            while ( 1 )
            {
              v32 = wcsstr(v31, L"|");
              v33 = v32;
              if ( !v32 )
                break;
              v42 = v26 - (v32 - v29) - v9;
              v39 = &v32[(int)v9];
              v37 = (__int64)&v32[(int)v10];
              v41 = 2LL * v42;
              if ( v41 )
              {
                if ( !v37 || !v39 )
                  goto LABEL_62;
                memmove_0((void *)v37, v39, v41);
              }
              if ( 2LL * (int)v10 )
                memcpy_0(v33, L"%b", 2LL * (int)v10);
              v31 = &v33[(int)v10];
              v33[v42 + (int)v10] = 0;
              LODWORD(v26) = v10 - v9 + v45;
              v45 = v26;
            }
            if ( v31 )
            {
              v34 = -1LL;
              do
                ++v34;
              while ( v31[v34] );
            }
            else
            {
              LODWORD(v34) = 0;
            }
            v31 += (int)v34 + 1;
          }
          while ( (unsigned __int64)v31 < v30 );
          v25 = a1;
        }
        if ( v27 >= 0 && v27 <= *((_DWORD *)*v25 - 3) )
        {
          *((_DWORD *)*v25 - 4) = v27;
          (*v25)[v27] = 0;
          return;
        }
LABEL_63:
        ATL::AtlThrowImpl(-2147024809);
      }
    }
  }
}
