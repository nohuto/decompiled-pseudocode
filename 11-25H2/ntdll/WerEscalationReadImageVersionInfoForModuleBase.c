/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBase @ 0x1800E01D0
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800E014C (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

unsigned __int64 __fastcall WerEscalationReadImageVersionInfoForModuleBase(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned int *v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edi
  unsigned __int64 v11; // rdx
  unsigned int i; // r11d
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // r11d
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned int v20; // edi
  unsigned int v21; // r10d
  unsigned __int64 v22; // r11
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  _DWORD *v30; // rbp
  char *v31; // rcx
  unsigned __int64 v32; // rdx
  size_t v33; // rax
  _WORD *v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int16 v36; // r8
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rcx
  int v41; // edi
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // rdx
  unsigned int *v44; // [rsp+50h] [rbp+8h] BYREF

  v44 = 0LL;
  *(_OWORD *)a2 = 0LL;
  result = RtlImageNtHeaderEx(3, a1, 0LL, &v44);
  if ( (result & 0x80000000) == 0LL )
  {
    v5 = v44;
    *(_DWORD *)a2 = v44[2];
    result = v5[22];
    *(_DWORD *)(a2 + 4) = result;
    v6 = v5[20];
    if ( v5[33] > 2 )
    {
      result = v5[38];
      if ( (_DWORD)result )
      {
        if ( v5[39] >= 0x10 )
        {
          v7 = a1 + result;
          result += a1 + 16;
          v8 = v6 + a1;
          if ( result >= a1 && result <= v8 && result >= v7 && v8 >= a1 && v7 <= v8 && v7 >= a1 )
          {
            if ( v7 )
            {
              v9 = *(unsigned __int16 *)(v7 + 12);
              v10 = *(unsigned __int16 *)(v7 + 14);
              result = v10 + (unsigned int)v9;
              if ( (unsigned int)v9 < (unsigned int)result )
              {
                result = v7 + 8 * (v9 + 2);
                v11 = result + 8;
                if ( result + 8 >= a1 && v11 <= v8 && v11 >= result && result <= v8 && result >= a1 && result )
                {
                  for ( i = 0; i < v10; ++i )
                  {
                    if ( *(int *)result >= 0 && (unsigned __int16)*(_DWORD *)result == 16 )
                    {
                      result = *(unsigned int *)(result + 4);
                      v13 = (unsigned int)result;
                      if ( (result & 0x80000000) != 0LL )
                      {
                        LODWORD(v13) = result & 0x7FFFFFFF;
                        v14 = v6 + a1;
                        v15 = v7 + v13;
                        result = v15 + 16;
                        if ( v15 + 16 >= a1 && result <= v14 && result >= v15 && v15 <= v14 && v15 >= a1 )
                        {
                          v16 = *(unsigned __int16 *)(v15 + 12);
                          v17 = *(unsigned __int16 *)(v15 + 14);
                          result = (unsigned int)v16 + v17;
                          if ( (unsigned int)v16 < (unsigned int)result )
                          {
                            result = v15 + 16 + 8 * v16;
                            v18 = result + 8;
                            v19 = v6 + a1;
                            if ( result + 8 >= a1
                              && v18 <= v19
                              && v18 >= result
                              && result <= v19
                              && result >= a1
                              && result )
                            {
                              v20 = v17;
                              v21 = 0;
                              v22 = v6 + a1;
                              while ( v21 < v20 )
                              {
                                if ( *(int *)result >= 0 && (unsigned __int16)*(_DWORD *)result == 1 )
                                {
                                  result = *(unsigned int *)(result + 4);
                                  v23 = (unsigned int)result;
                                  if ( (result & 0x80000000) != 0LL )
                                  {
                                    LODWORD(v23) = result & 0x7FFFFFFF;
                                    v24 = v6 + a1;
                                    v25 = v7 + v23;
                                    result = v25 + 16;
                                    if ( v25 + 16 >= a1 && result <= v24 && result >= v25 && v25 <= v24 && v25 >= a1 )
                                    {
                                      result = *(unsigned __int16 *)(v25 + 12);
                                      if ( (_DWORD)result + *(unsigned __int16 *)(v25 + 14) )
                                      {
                                        v26 = v25 + 16;
                                        result = v26 + 8;
                                        if ( v26 + 8 >= a1 && result <= v6 + a1 && result >= v26 )
                                        {
                                          if ( v26 )
                                          {
                                            result = *(unsigned int *)(v26 + 4);
                                            if ( (result & 0x80000000) == 0LL )
                                            {
                                              result += v7;
                                              v27 = v6 + a1;
                                              v28 = result + 16;
                                              if ( result + 16 >= a1
                                                && v28 <= v27
                                                && v28 >= result
                                                && result <= v27
                                                && result >= a1
                                                && *(_DWORD *)(result + 4) >= 0x5Cu )
                                              {
                                                v29 = v6 + a1;
                                                v30 = (_DWORD *)(a1 + *(unsigned int *)result);
                                                result = (unsigned __int64)(v30 + 23);
                                                if ( (unsigned __int64)(v30 + 23) >= a1
                                                  && result <= v29
                                                  && result >= (unsigned __int64)v30
                                                  && (unsigned __int64)v30 <= v29
                                                  && (unsigned __int64)v30 >= a1 )
                                                {
                                                  if ( v30 )
                                                  {
                                                    result = (unsigned __int64)v30 + 6;
                                                    v31 = (char *)v30 + 38;
                                                    v32 = v6 + a1;
                                                    if ( (unsigned __int64)v30 + 38 >= a1
                                                      && (unsigned __int64)v31 <= v32
                                                      && (unsigned __int64)v31 >= result
                                                      && result <= v32
                                                      && result >= a1 )
                                                    {
                                                      v33 = wcslen(L"VS_VERSION_INFO");
                                                      v34 = (_WORD *)v30 + 3;
                                                      v35 = 2 * v33;
                                                      result = 65532LL;
                                                      if ( v35 >= 0xFFFE )
                                                        LOWORD(v35) = -4;
                                                      if ( v30 != (_DWORD *)-6LL )
                                                      {
                                                        result = 16LL;
                                                        do
                                                        {
                                                          if ( !*v34 )
                                                            break;
                                                          ++v34;
                                                          --result;
                                                        }
                                                        while ( result );
                                                        if ( result )
                                                        {
                                                          v36 = 2 * (16 - result);
                                                          v37 = (unsigned __int64)(unsigned __int16)v35 >> 1;
                                                          v38 = v37;
                                                          v39 = (unsigned __int64)v36 >> 1;
                                                          if ( v37 > v39 )
                                                            v38 = (unsigned __int64)v36 >> 1;
                                                          result = RtlCompareMemory(
                                                                     L"VS_VERSION_INFO",
                                                                     (char *)v30 + 6,
                                                                     2 * v38);
                                                          v40 = result >> 1;
                                                          if ( result >> 1 < v38 )
                                                          {
                                                            result = *((unsigned __int16 *)v30 + v40 + 3);
                                                            v41 = aVsVersionInfo[v40] - (_DWORD)result;
                                                          }
                                                          else
                                                          {
                                                            v41 = v37 - v39;
                                                          }
                                                          if ( !v41 )
                                                          {
                                                            *(_DWORD *)(a2 + 8) = v30[12];
                                                            result = (unsigned int)v30[13];
                                                            *(_DWORD *)(a2 + 12) = result;
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
                                  }
                                  return result;
                                }
                                result += 8LL;
                                v43 = result + 8;
                                if ( result + 8 < a1 || v43 > v22 || v43 < result || result > v22 || result < a1 )
                                  return result;
                                ++v21;
                              }
                            }
                          }
                        }
                      }
                      return result;
                    }
                    result += 8LL;
                    v42 = result + 8;
                    if ( result + 8 < a1 || v42 > v8 || v42 < result || result > v8 || result < a1 )
                      return result;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
