/*
 * XREFs of PiSwValidateCreateData @ 0x1409F1994
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     SeValidSecurityDescriptor @ 0x140835560 (SeValidSecurityDescriptor.c)
 *     PiSwValidatePropertyArray @ 0x1408B66DC (PiSwValidatePropertyArray.c)
 *     PnpValidateMultiSz @ 0x1409F298C (PnpValidateMultiSz.c)
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
  __int16 *i; // rdx
  __int16 v18; // cx
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rcx
  _WORD *j; // rdx
  __int16 v23; // cx
  _WORD *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // rdx
  ULONG v29; // ecx
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned __int64 v32; // rax

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
                        if ( (int)PnpValidateMultiSz(v16, *(unsigned int *)(a1 + 24), v6, v12) < 0 )
                          return v2;
                        for ( i = *(__int16 **)(a1 + 32); ; i += v19 + 1 )
                        {
                          v18 = *i;
                          if ( !*i )
                            break;
                          v6 = i;
                          while ( v18 )
                          {
                            if ( (unsigned __int16)(v18 - 33) > 0x5Eu || v18 == 44 )
                              return v2;
                            v18 = *++v6;
                          }
                          v19 = -1LL;
                          do
                            ++v19;
                          while ( i[v19] );
                        }
                      }
                      else if ( v15 )
                      {
                        return v2;
                      }
                      v20 = *(_DWORD *)(a1 + 40);
                      if ( v20 <= 0x3FF && (v20 || !*(_QWORD *)(a1 + 48)) )
                      {
                        v21 = *(_QWORD *)(a1 + 48);
                        if ( v21 )
                        {
                          if ( (int)PnpValidateMultiSz(v21, *(unsigned int *)(a1 + 40), v6, v12) < 0 )
                            return v2;
                          for ( j = *(_WORD **)(a1 + 48); ; j += v25 + 1 )
                          {
                            v23 = *j;
                            if ( !*j )
                              break;
                            v24 = j;
                            while ( v23 )
                            {
                              if ( (unsigned __int16)(v23 - 33) > 0x5Eu || v23 == 44 )
                                return v2;
                              v23 = *++v24;
                            }
                            v25 = -1LL;
                            do
                              ++v25;
                            while ( j[v25] );
                          }
                        }
                        else if ( v20 )
                        {
                          return v2;
                        }
                        v26 = *(_QWORD *)(a1 + 72);
                        if ( !v26 )
                          goto LABEL_82;
                        v32 = -1LL;
                        do
                          ++v32;
                        while ( *(_WORD *)(v26 + 2 * v32) );
                        if ( v32 <= 0x7FFE )
                        {
LABEL_82:
                          v27 = *(_QWORD *)(a1 + 80);
                          if ( !v27 )
                            goto LABEL_60;
                          do
                            ++v4;
                          while ( *(_WORD *)(v27 + 2 * v4) );
                          if ( v4 <= 0x7FFE )
                          {
LABEL_60:
                            v28 = *(void **)(a1 + 96);
                            if ( v28 || !*(_DWORD *)(a1 + 88) )
                            {
                              v29 = *(_DWORD *)(a1 + 88);
                              if ( (v29 || !v28)
                                && (!v28 || SeValidSecurityDescriptor(v29, v28))
                                && ((*(_DWORD *)(a1 + 64) & 8) == 0 || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 48)) )
                              {
                                v30 = *(_QWORD *)(a1 + 112);
                                if ( v30 || !*(_DWORD *)(a1 + 104) )
                                {
                                  v31 = *(_DWORD *)(a1 + 104);
                                  if ( v31 || !v30 )
                                    return (unsigned int)PiSwValidatePropertyArray(v30, v31);
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
