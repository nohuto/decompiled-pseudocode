/*
 * XREFs of PfVerifyScenarioBuffer @ 0x140959760
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x140959434 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     StringCbLengthW @ 0x1404478B0 (StringCbLengthW.c)
 *     StringCchPrintfW @ 0x14046A284 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PfVerifyScenarioId @ 0x14095A220 (PfVerifyScenarioId.c)
 */

__int64 __fastcall PfVerifyScenarioBuffer(unsigned __int64 a1, unsigned int a2, int *a3)
{
  int v3; // r15d
  __int64 v4; // rbx
  unsigned __int8 v5; // r12
  unsigned int v7; // edi
  __int64 v8; // rsi
  unsigned int v9; // r9d
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned int *v12; // r11
  unsigned __int64 v13; // rdx
  char *v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // r10d
  int v24; // ebp
  unsigned int v25; // eax
  unsigned int *v26; // r9
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rbx
  int v32; // r8d
  unsigned int v33; // r10d
  __int64 v34; // rdi
  int v35; // ebp
  int v36; // r14d
  __int64 v37; // r11
  int *v38; // rdx
  int v39; // r8d
  unsigned int v40; // r9d
  unsigned int v42; // ecx
  unsigned int v43; // r14d
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // rsi
  unsigned int v46; // ebp
  unsigned int v47; // edx
  __int64 v48; // r8
  unsigned int *v49; // rdi
  unsigned __int64 v50; // rbx
  unsigned __int16 *v51; // rcx
  char *v52; // rdx
  int v53; // eax
  int v54; // ecx
  _DWORD *v55; // rcx
  __int64 v56; // rax
  char *v57; // rdx
  int v58; // edx
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  unsigned int v62; // r8d
  unsigned __int16 *v63; // rcx
  unsigned int i; // edx
  __int64 v65; // rax
  unsigned __int16 *v66; // rcx
  _DWORD *v67; // r8
  __int64 v68; // r9
  int v69; // eax
  _DWORD *v70; // rdx
  __int64 v71; // r8
  size_t v72; // rdx
  __int64 v73; // r8
  __int64 v74; // [rsp+20h] [rbp-128h]
  __int64 v75; // [rsp+28h] [rbp-120h]
  int v76; // [rsp+30h] [rbp-118h]
  unsigned int v77; // [rsp+34h] [rbp-114h]
  unsigned __int64 v78; // [rsp+38h] [rbp-110h]
  unsigned int v79; // [rsp+40h] [rbp-108h]
  unsigned int v80; // [rsp+44h] [rbp-104h]
  unsigned int v81; // [rsp+48h] [rbp-100h]
  int v82; // [rsp+4Ch] [rbp-FCh]
  unsigned __int64 v85; // [rsp+60h] [rbp-E8h]
  unsigned int *v86; // [rsp+68h] [rbp-E0h]
  char *v87; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v88; // [rsp+78h] [rbp-D0h]
  unsigned __int64 v89; // [rsp+80h] [rbp-C8h]
  wchar_t pszDest[40]; // [rsp+B0h] [rbp-98h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = 0;
  if ( a2 < 0x128 )
  {
    v3 = 10;
  }
  else if ( (a1 & 7) != 0 )
  {
    v3 = 15;
  }
  else if ( *(_DWORD *)a1 == 31 && *(_DWORD *)(a1 + 4) == 1094927187 )
  {
    if ( a2 > 0x10000000 )
    {
      v3 = 25;
    }
    else if ( a2 == *(_DWORD *)(a1 + 12) )
    {
      if ( *(_DWORD *)(a1 + 80) > 1u )
      {
        v3 = 27;
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 88);
        v81 = v7;
        if ( v7 > 0x4000
          || *(_DWORD *)(a1 + 112) > 0x4000u
          || (v8 = *(unsigned int *)(a1 + 96), (unsigned int)v8 > 0x100000)
          || (v9 = *(_DWORD *)(a1 + 104), v9 > 0x400000) )
        {
          v3 = 30;
        }
        else if ( v7 && (_DWORD)v8 && v9 )
        {
          if ( (unsigned int)(*(_DWORD *)(a1 + 204) - 1) > 7 )
          {
            v3 = 35;
          }
          else if ( (unsigned __int8)PfVerifyScenarioId(a1 + 16) )
          {
            v13 = (unsigned __int64)v12 + v12[21];
            v89 = v13;
            if ( (v13 & 3) != 0 )
            {
              v3 = 38;
            }
            else if ( v13 < (unsigned __int64)v12 || (v14 = (char *)v12 + v4, v87 = v14, v13 >= (unsigned __int64)v14) )
            {
              v3 = 40;
            }
            else
            {
              v15 = v13 + 32LL * v7 - 1;
              if ( v15 >= (unsigned __int64)v14 || v15 < (unsigned __int64)v12 )
              {
                v3 = 45;
              }
              else
              {
                v16 = (unsigned __int64)v12 + v12[23];
                v85 = v16;
                if ( (v16 & 3) != 0 )
                {
                  v3 = 47;
                }
                else if ( v16 >= (unsigned __int64)v14 || v16 < (unsigned __int64)v12 )
                {
                  v3 = 50;
                }
                else
                {
                  v17 = v16 + 8 * v8 - 1;
                  if ( v17 >= (unsigned __int64)v14 || v17 < (unsigned __int64)v12 )
                  {
                    v3 = 55;
                  }
                  else
                  {
                    v18 = (unsigned __int64)v12 + v12[25];
                    v88 = v18;
                    if ( (v18 & 1) != 0 )
                    {
                      v3 = 57;
                    }
                    else if ( v18 >= (unsigned __int64)v14 || v18 < (unsigned __int64)v12 )
                    {
                      v3 = 60;
                    }
                    else
                    {
                      v19 = v18 + v10 - 1;
                      if ( v19 >= (unsigned __int64)v14 || v19 < (unsigned __int64)v12 )
                      {
                        v3 = 70;
                      }
                      else
                      {
                        v20 = (unsigned __int64)v12 + v12[27];
                        v78 = v20;
                        if ( (v20 & 7) != 0 )
                        {
                          v3 = 72;
                        }
                        else if ( v20 >= (unsigned __int64)v14 || v20 < (unsigned __int64)v12 )
                        {
                          v3 = 73;
                        }
                        else
                        {
                          v21 = v20 + v12[29] - 1LL;
                          if ( v21 >= (unsigned __int64)v14 || v21 < (unsigned __int64)v12 )
                          {
                            v3 = 74;
                          }
                          else
                          {
                            v22 = v20 + 96 * v11 - 1;
                            if ( v22 >= (unsigned __int64)v14 || v22 < (unsigned __int64)v12 )
                            {
                              v3 = 75;
                            }
                            else
                            {
                              v79 = v12[31];
                              if ( v79 > 7 )
                              {
                                v3 = 76;
                              }
                              else
                              {
                                v23 = v8;
                                v24 = 0;
                                v25 = 0;
                                while ( 2 )
                                {
                                  v77 = v25;
                                  if ( v25 >= v7 )
                                  {
                                    if ( v23 )
                                    {
                                      v3 = 190;
                                    }
                                    else
                                    {
                                      v43 = 0;
                                      v44 = v78;
                                      v45 = (unsigned __int64)v12 + a2;
                                      v46 = 0;
LABEL_86:
                                      v47 = v12[28];
                                      if ( v46 >= v47 )
                                      {
                                        if ( v43 == v12[30] )
                                        {
                                          if ( v43 > 0x80000 )
                                          {
                                            v3 = 340;
                                          }
                                          else
                                          {
                                            v72 = v12[54];
                                            v73 = v12[53];
                                            if ( ((_DWORD)v73 == 0) == ((_DWORD)v72 == 0) )
                                            {
                                              if ( (_DWORD)v73
                                                && StringCbLengthW((STRSAFE_PCNZWCH)((char *)v12 + v73), v72, 0LL) < 0 )
                                              {
                                                v3 = 360;
                                              }
                                              else
                                              {
                                                v5 = 1;
                                              }
                                            }
                                            else
                                            {
                                              v3 = 350;
                                            }
                                          }
                                        }
                                        else
                                        {
                                          v3 = 330;
                                        }
                                      }
                                      else
                                      {
                                        v48 = v46 + 1;
                                        v49 = (unsigned int *)(v44 + 96LL * v46);
                                        while ( (unsigned int)v48 < v47 )
                                        {
                                          if ( *(_QWORD *)(96 * v48 + v78 + 8) == *((_QWORD *)v49 + 1)
                                            && *(_DWORD *)(96 * v48 + v78 + 16) == v49[4] )
                                          {
                                            v3 = 192;
                                            goto LABEL_66;
                                          }
                                          v48 = (unsigned int)(v48 + 1);
                                        }
                                        v50 = v78 + *v49;
                                        if ( (v50 & 1) != 0 )
                                        {
                                          v3 = 195;
                                        }
                                        else if ( v50 >= v45 || v50 < (unsigned __int64)v12 )
                                        {
                                          v3 = 200;
                                        }
                                        else
                                        {
                                          v51 = (unsigned __int16 *)(v50 + 2LL * v49[1]);
                                          if ( (unsigned __int64)v51 + 1 >= v45 || (char *)v51 + 1 < (char *)v12 )
                                          {
                                            v3 = 210;
                                          }
                                          else if ( *v51 )
                                          {
                                            v3 = 220;
                                          }
                                          else
                                          {
                                            LODWORD(v75) = v49[4];
                                            LODWORD(v74) = v49[2];
                                            StringCchPrintfW(
                                              pszDest,
                                              0x23uLL,
                                              L"\\VOLUME{%08lx%08lx-%08lx}",
                                              v49[3],
                                              v74,
                                              v75);
                                            v52 = (char *)pszDest - v50;
                                            do
                                            {
                                              v53 = *(unsigned __int16 *)&v52[v50];
                                              v54 = *(unsigned __int16 *)v50 - v53;
                                              if ( v54 )
                                                break;
                                              v50 += 2LL;
                                            }
                                            while ( v53 );
                                            if ( v54 )
                                            {
                                              v3 = 222;
                                            }
                                            else
                                            {
                                              v44 = v78;
                                              v55 = (_DWORD *)(v78 + v49[5]);
                                              if ( ((unsigned __int8)v55 & 7) != 0 )
                                              {
                                                v3 = 225;
                                              }
                                              else
                                              {
                                                v12 = (unsigned int *)a1;
                                                if ( (unsigned __int64)v55 >= v45 || (unsigned __int64)v55 < a1 )
                                                {
                                                  v3 = 230;
                                                }
                                                else
                                                {
                                                  v56 = v49[6];
                                                  if ( (unsigned int)v56 < 0x18 )
                                                  {
                                                    v3 = 240;
                                                  }
                                                  else
                                                  {
                                                    v57 = (char *)v55 + v56 - 1;
                                                    if ( (unsigned __int64)v57 >= v45 || (unsigned __int64)v57 < a1 )
                                                    {
                                                      v3 = 245;
                                                    }
                                                    else if ( *v55 == 3 )
                                                    {
                                                      if ( v55[1] > 0x84000u )
                                                      {
                                                        v3 = 260;
                                                      }
                                                      else
                                                      {
                                                        v58 = 0;
                                                        if ( *(_DWORD *)(a1 + 124) )
                                                        {
                                                          v67 = v49 + 9;
                                                          v68 = *(unsigned int *)(a1 + 124);
                                                          do
                                                          {
                                                            v69 = *v67 + v67[7];
                                                            ++v67;
                                                            v58 += v69;
                                                            --v68;
                                                          }
                                                          while ( v68 );
                                                          v44 = v78;
                                                        }
                                                        v59 = v55[1];
                                                        if ( v58 == v59 )
                                                        {
                                                          v60 = 24;
                                                          if ( v59 )
                                                            v60 = 8 * v59 + 16;
                                                          if ( v60 == v49[6] )
                                                          {
                                                            if ( v49[8] > 0x80000 )
                                                            {
                                                              v3 = 280;
                                                            }
                                                            else
                                                            {
                                                              v61 = 0;
                                                              if ( *(_DWORD *)(a1 + 124) )
                                                              {
                                                                v70 = v49 + 16;
                                                                v71 = *(unsigned int *)(a1 + 124);
                                                                do
                                                                {
                                                                  v61 += *v70++;
                                                                  --v71;
                                                                }
                                                                while ( v71 );
                                                              }
                                                              v62 = v49[8];
                                                              if ( v61 == v62 )
                                                              {
                                                                v43 += v61;
                                                                v63 = (unsigned __int16 *)(v44 + v49[7]);
                                                                if ( ((unsigned __int8)v63 & 1) != 0 )
                                                                {
                                                                  v3 = 283;
                                                                }
                                                                else
                                                                {
                                                                  for ( i = 0; ; ++i )
                                                                  {
                                                                    if ( i >= v62 )
                                                                    {
                                                                      ++v46;
                                                                      goto LABEL_86;
                                                                    }
                                                                    if ( (unsigned __int64)v63 >= v45
                                                                      || (unsigned __int64)v63 < a1 )
                                                                    {
                                                                      break;
                                                                    }
                                                                    if ( (unsigned __int64)v63 + 3 >= v45
                                                                      || (unsigned __int64)v63 + 3 < a1 )
                                                                    {
                                                                      v3 = 290;
                                                                      goto LABEL_66;
                                                                    }
                                                                    v65 = *v63;
                                                                    if ( (unsigned __int16)v65 >= 0x400u )
                                                                    {
                                                                      v3 = 300;
                                                                      goto LABEL_66;
                                                                    }
                                                                    v66 = &v63[v65];
                                                                    if ( (unsigned __int64)v66 + 3 >= v45
                                                                      || (unsigned __int64)v66 + 3 < a1 )
                                                                    {
                                                                      v3 = 310;
                                                                      goto LABEL_66;
                                                                    }
                                                                    if ( v66[1] )
                                                                    {
                                                                      v3 = 320;
                                                                      goto LABEL_66;
                                                                    }
                                                                    v63 = v66 + 2;
                                                                  }
                                                                  v3 = 285;
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v3 = 281;
                                                              }
                                                            }
                                                          }
                                                          else
                                                          {
                                                            v3 = 270;
                                                          }
                                                        }
                                                        else
                                                        {
                                                          v3 = 265;
                                                        }
                                                      }
                                                    }
                                                    else
                                                    {
                                                      v3 = 250;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else
                                  {
                                    v26 = (unsigned int *)(v13 + 32LL * v25);
                                    v86 = v26;
                                    v27 = v18 + v26[3];
                                    if ( (v27 & 1) != 0 )
                                    {
                                      v3 = 77;
                                    }
                                    else if ( v27 >= (unsigned __int64)v14 || v27 < (unsigned __int64)v12 )
                                    {
                                      v3 = 80;
                                    }
                                    else
                                    {
                                      v28 = v26[4];
                                      if ( (_DWORD)v28 )
                                      {
                                        if ( (unsigned int)v28 > 0x400 )
                                        {
                                          v3 = 100;
                                        }
                                        else
                                        {
                                          v29 = v27 + (unsigned int)(2 * v28 + 2) - 1LL;
                                          if ( v29 >= (unsigned __int64)v14 || v29 < (unsigned __int64)v12 )
                                          {
                                            v3 = 110;
                                          }
                                          else if ( *(_WORD *)(v27 + 2 * v28) )
                                          {
                                            v3 = 120;
                                          }
                                          else
                                          {
                                            v30 = v26[1];
                                            if ( v30 > 0x8000 )
                                            {
                                              v3 = 140;
                                            }
                                            else if ( v30 > v23 )
                                            {
                                              v3 = 150;
                                            }
                                            else
                                            {
                                              v31 = (int)*v26;
                                              v80 = v23 - v30;
                                              if ( (_DWORD)v31 == -1 && v30 )
                                              {
                                                v3 = 152;
                                              }
                                              else if ( (_DWORD)v31 == v24 || (_DWORD)v31 == -1 )
                                              {
                                                v32 = v26[5];
                                                v82 = v30 + v24;
                                                if ( (v32 & 0x7F00) != 0 || (v32 & 1) != 0 || (v32 & 0xFE) != 0 )
                                                {
                                                  if ( (v32 & 1) != 0 || v26[2] )
                                                  {
                                                    v76 = 0;
                                                    v33 = *v26;
                                                    v34 = (int)(v31 + v30);
                                                    v35 = 0;
                                                    v36 = 0;
                                                    v37 = (int)*v26;
                                                    v38 = (int *)(v85 + 4 + 8 * v31);
                                                    while ( v37 < v34 )
                                                    {
                                                      if ( v37 < 0 || v33 >= (unsigned int)v8 )
                                                      {
                                                        v3 = 160;
                                                        goto LABEL_66;
                                                      }
                                                      if ( v33 != (_DWORD)v31 && *(v38 - 1) <= (unsigned int)*(v38 - 3) )
                                                      {
                                                        v3 = 165;
                                                        goto LABEL_66;
                                                      }
                                                      v39 = *v38;
                                                      v40 = (unsigned int)*v38 >> 4;
                                                      if ( (*v38 & 1) == 0 && (((unsigned int)*v38 >> 4) & 7) > v79 )
                                                      {
                                                        v3 = 167;
                                                        goto LABEL_66;
                                                      }
                                                      if ( (v39 & 0xE) == 0 )
                                                      {
                                                        v3 = 173;
                                                        goto LABEL_66;
                                                      }
                                                      if ( (*v38 & 1) != 0 )
                                                      {
                                                        if ( (v39 & 8) != 0 )
                                                        {
                                                          v3 = 175;
                                                          goto LABEL_66;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        ++v35;
                                                        if ( (v39 & 4) != 0 )
                                                          v76 |= 1 << (v40 & 7);
                                                        if ( (v39 & 2) != 0 )
                                                          v36 |= 1 << (v40 & 7);
                                                      }
                                                      ++v33;
                                                      ++v37;
                                                      v38 += 2;
                                                    }
                                                    if ( v35 == v86[2] )
                                                    {
                                                      v42 = v86[5];
                                                      if ( (v42 & 1) != 0
                                                        || v76 == (unsigned __int8)v42 >> 1
                                                        && v36 == ((v42 >> 8) & 0x7F) )
                                                      {
                                                        v12 = (unsigned int *)a1;
                                                        v25 = v77 + 1;
                                                        v14 = v87;
                                                        v23 = v80;
                                                        v18 = v88;
                                                        v13 = v89;
                                                        v7 = v81;
                                                        v24 = v82;
                                                        continue;
                                                      }
                                                      v3 = 187;
                                                    }
                                                    else
                                                    {
                                                      v3 = 185;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v3 = 157;
                                                  }
                                                }
                                                else
                                                {
                                                  v3 = 155;
                                                }
                                              }
                                              else
                                              {
                                                v3 = 153;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else
                                      {
                                        v3 = 90;
                                      }
                                    }
                                  }
                                  break;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v3 = 37;
          }
        }
        else
        {
          v3 = 33;
        }
      }
    }
    else
    {
      v3 = 26;
    }
  }
  else
  {
    v3 = 20;
  }
LABEL_66:
  *a3 = v3;
  return v5;
}
