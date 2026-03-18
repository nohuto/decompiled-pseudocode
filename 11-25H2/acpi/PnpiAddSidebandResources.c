/*
 * XREFs of PnpiAddSidebandResources @ 0x1400BFD38
 * Callers:
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1400AD2DC (PnpBiosUpdateResourceListWithSidebandResources.c)
 * Callees:
 *     memmove @ 0x140070C40 (memmove.c)
 *     memcmp @ 0x140071460 (memcmp.c)
 *     PnpiValidateSidebandResources @ 0x1400A5590 (PnpiValidateSidebandResources.c)
 */

__int64 __fastcall PnpiAddSidebandResources(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int v6; // r15d
  unsigned int v7; // ebx
  unsigned int *v8; // rbp
  unsigned int *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r11
  unsigned int v12; // esi
  __int64 v13; // r14
  unsigned int v14; // edi
  unsigned int *v16; // r8
  __int64 v17; // r12
  unsigned int v18; // r10d
  unsigned int v19; // ecx
  unsigned int v20; // edi
  __int64 v21; // xmm0_8
  unsigned int v22; // eax
  unsigned int i; // edx
  __int64 v24; // rcx
  _DWORD *v25; // r9
  unsigned int v26; // edx
  char v27; // r11
  _WORD *v28; // rcx
  unsigned int v29; // esi
  unsigned int v30; // eax
  bool v31; // r15
  unsigned int v32; // edx
  bool v33; // zf
  unsigned int v34; // edi
  __int64 v35; // r14
  unsigned int v36; // r8d
  char *v37; // r13
  __int64 v38; // rbp
  __int64 v39; // rax
  unsigned int v40; // eax
  __int64 v41; // rcx
  unsigned int v42; // esi
  unsigned int v43; // r15d
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rax
  char v47; // [rsp+20h] [rbp-98h]
  int v48; // [rsp+24h] [rbp-94h]
  unsigned int v49; // [rsp+28h] [rbp-90h]
  unsigned int v50; // [rsp+2Ch] [rbp-8Ch]
  int v51; // [rsp+30h] [rbp-88h]
  char *v52; // [rsp+38h] [rbp-80h]
  int v53; // [rsp+40h] [rbp-78h]
  int v54; // [rsp+44h] [rbp-74h]
  unsigned int v55; // [rsp+48h] [rbp-70h]
  _DWORD *v56; // [rsp+50h] [rbp-68h]
  unsigned int v57; // [rsp+58h] [rbp-60h]
  unsigned int v58; // [rsp+5Ch] [rbp-5Ch]
  __int64 v59; // [rsp+60h] [rbp-58h]
  __int64 v60; // [rsp+68h] [rbp-50h]

  v6 = *a4;
  v7 = 0;
  v49 = *a4;
  v8 = a4;
  v51 = 0;
  v9 = a3;
  v53 = 0;
  v10 = a2;
  v11 = a1;
  v12 = 0;
  v13 = 0LL;
  v14 = 0;
  if ( a1 )
  {
    if ( !PnpiValidateSidebandResources(a1, a2) )
      return 3221225524LL;
    v11 = a1;
    v10 = a2;
  }
  v16 = a6;
  if ( a6 )
  {
    v50 = *a6;
    if ( *a6 >= 0x28 )
    {
      v50 = *a6;
      *(_OWORD *)a5 = 0LL;
      *(_OWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 32) = 0LL;
    }
  }
  else
  {
    v50 = 0;
  }
  v17 = v10 + 32;
  v18 = 8;
  v19 = 0;
  v48 = 8;
  v59 = v10 + 32;
  v55 = 0;
  if ( *(_DWORD *)(v10 + 28) )
  {
    do
    {
      if ( v19 )
      {
        v22 = *(_DWORD *)(v17 + 4);
        if ( v22 <= 1 )
          v17 += 40LL;
        else
          v17 += 32LL * (v22 - 1) + 40;
        v59 = v17;
      }
      else
      {
        v20 = v14 + 72;
        if ( v6 >= v20 )
        {
          if ( v11 )
          {
            *(_OWORD *)((char *)v9 + v13) = *(_OWORD *)v11;
            *(_OWORD *)((char *)v9 + v13 + 16) = *(_OWORD *)(v11 + 16);
            *(_OWORD *)((char *)v9 + v13 + 32) = *(_OWORD *)(v11 + 32);
            *(_OWORD *)((char *)v9 + v13 + 48) = *(_OWORD *)(v11 + 48);
            v21 = *(_QWORD *)(v11 + 64);
          }
          else
          {
            *(_OWORD *)((char *)v9 + v13) = *(_OWORD *)v10;
            *(_OWORD *)((char *)v9 + v13 + 16) = *(_OWORD *)(v10 + 16);
            *(_OWORD *)((char *)v9 + v13 + 32) = *(_OWORD *)(v10 + 32);
            *(_OWORD *)((char *)v9 + v13 + 48) = *(_OWORD *)(v10 + 48);
            v21 = *(_QWORD *)(v10 + 64);
          }
          *(_QWORD *)((char *)v9 + v13 + 64) = v21;
          v9[7] = 0;
        }
        v14 = v20 - 40;
        v13 += 32LL;
      }
      for ( i = 0; i < *(_DWORD *)(v17 + 4); ++i )
      {
        v24 = 32LL * i;
        if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
          && *(_BYTE *)(v24 + v17 + 9) != 2
          || *(_DWORD *)(v24 + v17 + 16) == *(_DWORD *)(v24 + v17 + 20) )
        {
          goto LABEL_29;
        }
      }
      if ( (unsigned int)++v53 > 1 )
        goto LABEL_73;
LABEL_29:
      if ( v11 )
      {
        v25 = (_DWORD *)(v11 + 32);
        v26 = v12 + (*(_DWORD *)(v11 + 28) != 0);
      }
      else
      {
        v26 = v12 + 1;
        v25 = 0LL;
      }
      v56 = v25;
      v27 = 1;
      v47 = 1;
      if ( v12 < v26 )
      {
        v58 = v26;
        v60 = v26 - v12;
        do
        {
          v28 = (_WORD *)((char *)v9 + v13);
          v29 = 40;
          v52 = (char *)v9 + v13;
          if ( v25 )
          {
            v30 = v25[1];
            v31 = 0;
            if ( v30 <= 1 )
              v31 = v30 == 0;
            else
              v29 = 32 * v30 + 8;
            if ( v49 >= v14 + v29 )
            {
              memmove(v28, v25, v29);
              v28 = (_WORD *)((char *)v9 + v13);
              v18 = v48;
              v25 = v56;
              v27 = v47;
              *((_DWORD *)v52 + 1) = 0;
            }
            v32 = v25[1];
            v25 = (_DWORD *)((char *)v25 + v29);
            v33 = !v31;
            v56 = v25;
            v6 = v49;
            if ( !v33 )
              v29 -= 32;
          }
          else
          {
            if ( v6 >= v14 + 40 )
            {
              *v28 = *(_WORD *)v17;
              v28[1] = *(_WORD *)(v17 + 2);
              *((_DWORD *)v28 + 1) = 0;
            }
            v32 = 0;
            v29 = 8;
          }
          v34 = v29 + v14;
          v35 = v29 + v13;
          v54 = 0;
          v36 = 0;
          if ( *(_DWORD *)(v17 + 4) )
          {
            v37 = v52;
            do
            {
              v38 = v17 + 32LL * v36;
              if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
                && *(_BYTE *)(v38 + 9) != 2
                || *(_DWORD *)(v38 + 16) == *(_DWORD *)(v38 + 20) )
              {
                v34 += 32;
                if ( v6 >= v34 )
                {
                  v39 = 32LL * v32;
                  *(_OWORD *)&v37[v39 + 8] = *(_OWORD *)(v38 + 8);
                  *(_OWORD *)&v37[v39 + 24] = *(_OWORD *)(v38 + 24);
                }
                ++v51;
                ++v32;
                v35 += 32LL;
                v57 = v32;
                if ( v27 )
                {
                  v40 = v50;
                  if ( v50 < 0x28 )
                  {
                    v18 += 32;
                    v48 = v18;
                  }
                  else
                  {
                    v41 = a5;
                    v42 = 0;
                    v43 = *(_DWORD *)(a5 + 4);
                    if ( v43 )
                    {
                      do
                      {
                        if ( !memcmp((const void *)(a5 + 32LL * v42 + 8), (const void *)(v38 + 8), 0x20uLL) )
                          break;
                        ++v42;
                      }
                      while ( v42 < v43 );
                      v17 = v59;
                      v32 = v57;
                      v36 = v54;
                      v37 = v52;
                      v40 = v50;
                      v41 = a5;
                      v27 = v47;
                    }
                    v18 = v48;
                    if ( v42 == *(_DWORD *)(v41 + 4) )
                    {
                      v18 = v48 + 32;
                      v48 = v18;
                      if ( v40 >= v18 )
                      {
                        v44 = 32LL * v42;
                        *(_OWORD *)(v44 + v41 + 8) = *(_OWORD *)(v38 + 8);
                        *(_OWORD *)(v44 + v41 + 24) = *(_OWORD *)(v38 + 24);
                        ++*(_DWORD *)(v41 + 4);
                      }
                    }
                  }
                }
              }
              v6 = v49;
              v54 = ++v36;
            }
            while ( v36 < *(_DWORD *)(v17 + 4) );
            v9 = a3;
            v28 = v52;
            v25 = v56;
          }
          v45 = v34 + 32;
          if ( v32 )
            v45 = v34;
          v14 = v45;
          v46 = v35 + 32;
          if ( v32 )
            v46 = v35;
          v13 = v46;
          if ( v6 >= v14 )
            *((_DWORD *)v28 + 1) = v32;
          v47 = 0;
          v33 = v60-- == 1;
          v27 = 0;
        }
        while ( !v33 );
        v12 = v58;
      }
LABEL_73:
      v10 = a2;
      v19 = v55 + 1;
      v11 = a1;
      v55 = v19;
    }
    while ( v19 < *(_DWORD *)(a2 + 28) );
    v16 = a6;
    v8 = a4;
  }
  if ( v16 )
  {
    if ( v18 < 0x28 )
      v18 = 40;
    *v16 = v18;
  }
  if ( v51 )
  {
    if ( v14 <= v6 )
    {
      *v9 = v14;
      v9[7] = v12;
    }
    else
    {
      *v8 = v14;
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return v7;
}
