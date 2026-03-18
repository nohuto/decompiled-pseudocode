/*
 * XREFs of PiSwValidateCreateData @ 0x1409A46F0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpValidateMultiSz @ 0x140839ADC (PnpValidateMultiSz.c)
 *     PiSwValidatePropertyArray @ 0x140954850 (PiSwValidatePropertyArray.c)
 *     SeValidSecurityDescriptor @ 0x1409EFAF0 (SeValidSecurityDescriptor.c)
 */

__int64 __fastcall PiSwValidateCreateData(__int64 a1)
{
  unsigned int v2; // esi
  _WORD *v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int16 *v6; // r8
  __int16 v7; // cx
  __int16 *v8; // rdx
  __int16 *v9; // rdx
  __int16 v10; // cx
  _WORD *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rcx
  _WORD *i; // rdx
  __int16 v18; // cx
  _WORD *v19; // r8
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rcx
  _WORD *j; // rdx
  __int16 v24; // cx
  _WORD *v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  void *v29; // rdx
  ULONG v30; // ecx
  __int64 v31; // rcx
  unsigned int v32; // edx
  unsigned __int64 v33; // rax

  v2 = -1073741811;
  if ( a1 )
  {
    v3 = *(_WORD **)(a1 + 8);
    if ( v3 )
    {
      if ( *v3 )
      {
        v4 = -1LL;
        v5 = -1LL;
        do
          ++v5;
        while ( v3[v5] );
        if ( v5 <= 0xC7 )
        {
          v6 = *(__int16 **)a1;
          if ( *(_QWORD *)a1 )
          {
            v7 = *v6;
            if ( *v6 )
            {
              v8 = *(__int16 **)a1;
              while ( v7 )
              {
                if ( (unsigned __int16)(v7 - 33) > 0x5Eu || v7 == 44 || v7 == 92 )
                  return v2;
                v7 = *++v8;
              }
              v9 = *(__int16 **)(a1 + 16);
              if ( v9 )
              {
                v10 = *v9;
                if ( *v9 )
                {
                  v12 = *(_WORD **)(a1 + 16);
                  while ( v10 )
                  {
                    if ( (unsigned __int16)(v10 - 33) > 0x5Eu || v10 == 44 || v10 == 92 )
                      return v2;
                    v10 = *++v12;
                  }
                  v13 = -1LL;
                  do
                    ++v13;
                  while ( v9[v13] );
                  v14 = -1LL;
                  do
                    ++v14;
                  while ( v6[v14] );
                  if ( (unsigned __int64)(v13 + v14 + 5) <= 0xC7 && (*(_DWORD *)(a1 + 64) & 0xFFFFFFF0) == 0 )
                  {
                    v15 = *(_DWORD *)(a1 + 24);
                    if ( v15 <= 0x3FF && (v15 || !*(_QWORD *)(a1 + 32)) )
                    {
                      v16 = *(_QWORD *)(a1 + 32);
                      if ( v16 )
                      {
                        if ( (int)PnpValidateMultiSz(v16, *(unsigned int *)(a1 + 24)) < 0 )
                          return v2;
                        for ( i = *(_WORD **)(a1 + 32); ; i += v20 + 1 )
                        {
                          v18 = *i;
                          if ( !*i )
                            break;
                          v19 = i;
                          while ( v18 )
                          {
                            if ( (unsigned __int16)(v18 - 33) > 0x5Eu || v18 == 44 )
                              return v2;
                            v18 = *++v19;
                          }
                          v20 = -1LL;
                          do
                            ++v20;
                          while ( i[v20] );
                        }
                      }
                      else if ( v15 )
                      {
                        return v2;
                      }
                      v21 = *(_DWORD *)(a1 + 40);
                      if ( v21 <= 0x3FF && (v21 || !*(_QWORD *)(a1 + 48)) )
                      {
                        v22 = *(_QWORD *)(a1 + 48);
                        if ( v22 )
                        {
                          if ( (int)PnpValidateMultiSz(v22, *(unsigned int *)(a1 + 40)) < 0 )
                            return v2;
                          for ( j = *(_WORD **)(a1 + 48); ; j += v26 + 1 )
                          {
                            v24 = *j;
                            if ( !*j )
                              break;
                            v25 = j;
                            while ( v24 )
                            {
                              if ( (unsigned __int16)(v24 - 33) > 0x5Eu || v24 == 44 )
                                return v2;
                              v24 = *++v25;
                            }
                            v26 = -1LL;
                            do
                              ++v26;
                            while ( j[v26] );
                          }
                        }
                        else if ( v21 )
                        {
                          return v2;
                        }
                        v27 = *(_QWORD *)(a1 + 72);
                        if ( !v27 )
                          goto LABEL_82;
                        v33 = -1LL;
                        do
                          ++v33;
                        while ( *(_WORD *)(v27 + 2 * v33) );
                        if ( v33 <= 0x7FFE )
                        {
LABEL_82:
                          v28 = *(_QWORD *)(a1 + 80);
                          if ( !v28 )
                            goto LABEL_60;
                          do
                            ++v4;
                          while ( *(_WORD *)(v28 + 2 * v4) );
                          if ( v4 <= 0x7FFE )
                          {
LABEL_60:
                            v29 = *(void **)(a1 + 96);
                            if ( v29 || !*(_DWORD *)(a1 + 88) )
                            {
                              v30 = *(_DWORD *)(a1 + 88);
                              if ( (v30 || !v29)
                                && (!v29 || SeValidSecurityDescriptor(v30, v29))
                                && ((*(_DWORD *)(a1 + 64) & 8) == 0 || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 48)) )
                              {
                                v31 = *(_QWORD *)(a1 + 112);
                                if ( v31 || !*(_DWORD *)(a1 + 104) )
                                {
                                  v32 = *(_DWORD *)(a1 + 104);
                                  if ( v32 || !v31 )
                                    return (unsigned int)PiSwValidatePropertyArray(v31, v32);
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
      }
    }
  }
  return v2;
}
