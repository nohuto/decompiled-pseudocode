/*
 * XREFs of PnpNeedToReleaseBootResources @ 0x140A8BC08
 * Callers:
 *     IopReleaseFilteredBootResources @ 0x140723328 (IopReleaseFilteredBootResources.c)
 * Callees:
 *     PnpIsRangeWithin @ 0x140A8BD60 (PnpIsRangeWithin.c)
 */

__int64 __fastcall PnpNeedToReleaseBootResources(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  bool v4; // zf
  unsigned int *v5; // rax
  unsigned int v6; // r13d
  _DWORD *v7; // rax
  unsigned int v8; // r14d
  _DWORD *v9; // rdi
  unsigned int v10; // r12d
  unsigned int v11; // eax
  unsigned __int8 v12; // si
  __int64 v13; // rax
  unsigned int v14; // ecx
  _DWORD *v15; // r15
  unsigned int v16; // eax
  unsigned __int8 v17; // bp
  __int64 v18; // rax
  int v20; // [rsp+20h] [rbp-58h]
  unsigned int v21; // [rsp+24h] [rbp-54h]
  unsigned int v22; // [rsp+2Ch] [rbp-4Ch]
  _DWORD *v23; // [rsp+88h] [rbp+10h]
  int v25; // [rsp+98h] [rbp+20h]

  v23 = a2;
  v3 = 0;
  v4 = *a2 == 1;
  *a3 = 0;
  if ( v4 )
  {
    v5 = *(unsigned int **)(a1 + 544);
    if ( v5 )
    {
      v6 = *v5;
      if ( *v5 )
      {
        v7 = v5 + 1;
        v8 = 0;
LABEL_5:
        if ( v8 < v6 )
        {
          v9 = v7 + 4;
          v10 = 0;
          v11 = v7[3];
          v22 = v11;
          while ( 1 )
          {
            if ( v10 >= v11 )
            {
              v7 = v9;
              ++v8;
              goto LABEL_5;
            }
            v12 = *(_BYTE *)v9;
            v13 = 0LL;
            if ( *(_BYTE *)v9 )
            {
              if ( v12 == 5 )
              {
                v13 = (unsigned int)v9[1];
              }
              else if ( v12 < 8u )
              {
                v14 = a2[4];
                v15 = a2 + 5;
                v21 = v14;
                v16 = 0;
                v20 = 0;
                v17 = *(_BYTE *)v9;
                v25 = 0;
                while ( v16 < v14 )
                {
                  if ( *(_BYTE *)v15 == 5 )
                  {
                    v18 = (unsigned int)v15[1];
                    v17 = v12;
                  }
                  else
                  {
                    if ( v17 == *(_BYTE *)v15 )
                    {
                      v20 = 1;
                      if ( (unsigned int)PnpIsRangeWithin(v9, v15) )
                      {
                        v13 = 0LL;
                        a2 = v23;
                        goto LABEL_22;
                      }
                      v14 = v21;
                    }
                    v18 = 0LL;
                  }
                  v15 = (_DWORD *)((char *)v15 + v18 + 20);
                  v16 = ++v25;
                }
                if ( v20 )
                  *a3 = 1;
                else
                  return 1;
                return v3;
              }
            }
LABEL_22:
            v9 = (_DWORD *)((char *)v9 + v13 + 20);
            v11 = v22;
            ++v10;
          }
        }
      }
    }
  }
  return v3;
}
