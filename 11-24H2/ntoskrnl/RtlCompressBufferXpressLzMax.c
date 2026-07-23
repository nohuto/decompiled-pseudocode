/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x140409D80
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1404094E0 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x1405EE680 (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140409D30 (RtlpMakeXpressCallback.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int8 *v13; // r12
  __int64 v14; // r15
  _QWORD *v16; // r13
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned int v19; // edx
  _BYTE *v20; // r14
  char *v21; // rbx
  int v22; // r9d
  __int16 v23; // r10
  unsigned __int8 *v24; // rsi
  unsigned __int64 v25; // r11
  char *v26; // rax
  __int64 v27; // r10
  char *v28; // r8
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rbp
  unsigned __int64 XpressCallback; // rax
  unsigned __int64 v32; // rcx
  int v33; // r13d
  int v34; // edx
  bool v35; // zf
  _QWORD *v36; // rdx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int *v40; // rcx
  int *v41; // r10
  __int64 v42; // r12
  unsigned __int64 v43; // rdi
  __int16 v44; // ax
  char *v45; // r11
  _BYTE *v46; // rbx
  _BYTE *v47; // r10
  int v48; // eax
  int v49; // edx
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  __int64 v52; // r15
  unsigned __int64 v53; // rax
  char v54; // dl
  int v55; // eax
  int *v56; // rdx
  char v57; // al
  unsigned int v58; // r14d
  int *v59; // [rsp+20h] [rbp-98h]
  char *v60; // [rsp+28h] [rbp-90h]
  unsigned __int64 v61; // [rsp+30h] [rbp-88h]
  unsigned __int64 v62; // [rsp+38h] [rbp-80h]
  unsigned __int64 v63; // [rsp+40h] [rbp-78h]
  __int16 v64; // [rsp+48h] [rbp-70h]
  unsigned __int64 v65; // [rsp+50h] [rbp-68h]
  unsigned __int64 v66; // [rsp+58h] [rbp-60h]
  unsigned __int64 v67; // [rsp+60h] [rbp-58h]
  _QWORD v68[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v69; // [rsp+78h] [rbp-40h]
  int v70; // [rsp+7Ch] [rbp-3Ch]
  __int16 v71; // [rsp+C0h] [rbp+8h]
  int v72; // [rsp+C8h] [rbp+10h]
  int v73; // [rsp+D0h] [rbp+18h]

  v73 = a3;
  v71 = a1;
  v9 = a1 + a2;
  v10 = a3 + a4;
  v70 = 0;
  v65 = v9;
  v13 = (unsigned __int8 *)a1;
  v66 = v10;
  v14 = 0LL;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  v16 = a6;
  memset_0(a6, 0, 0x40000uLL);
  v17 = v9 - 5;
  v67 = v9 - 5;
  v18 = v10 - 41;
  v62 = v10 - 41;
  v60 = 0LL;
  if ( !a7 || (v19 = a9, a9 > a2) )
  {
    v19 = a2;
    a9 = a2;
  }
  v68[0] = a7;
  v20 = (_BYTE *)(a3 + 5);
  v21 = (char *)(v13 + 1);
  v68[1] = a8;
  v22 = 2;
  *(_BYTE *)(a3 + 4) = *v13;
  v23 = 0;
  v69 = v19;
  v24 = v13;
  v72 = 2;
  v59 = (int *)a3;
  while ( 2 )
  {
    v25 = v17;
    if ( (unsigned __int64)(v24 + 0x2000) <= v17 )
      v25 = (unsigned __int64)(v24 + 0x2000);
    v26 = &v21[v19];
    v63 = v25;
    if ( v25 < (unsigned __int64)v26 )
      v26 = (char *)v25;
    v27 = v23 & 0x3FFF;
    v61 = (unsigned __int64)v26;
    v64 = v27;
    if ( (unsigned __int64)v24 < v25 )
    {
      v28 = (char *)&v16[v27 + 0x8000];
      do
      {
        v28 += 8;
        LOWORD(v27) = v27 + 1;
        v29 = (unsigned __int16)XpressHashFunction[*v24] ^ (unsigned __int16)XpressHashFunction[v24[2] + 512] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v24[1] + 256];
        *((_QWORD *)v28 - 1) = v16[v29];
        v16[v29] = v24++;
      }
      while ( (unsigned __int64)v24 < v25 );
      v18 = v62;
      v64 = v27;
LABEL_17:
      v26 = (char *)v61;
    }
    v30 = (unsigned __int64)(v21 - 0x2000);
    while ( 1 )
    {
      if ( v21 < v26 )
        goto LABEL_22;
      if ( (unsigned __int64)v21 >= v25 )
        break;
      XpressCallback = RtlpMakeXpressCallback((__int64)v68, v25, (__int64)v21);
      v22 = v72;
      v25 = v63;
      v18 = v62;
      v61 = XpressCallback;
LABEL_22:
      v32 = v16[((0x2000 - (unsigned __int16)v13 + (unsigned __int16)v30) & 0x3FFF) + 0x8000];
      v33 = *(_DWORD *)v21;
      if ( v32 >= v30 )
      {
        v34 = *(_DWORD *)v32 ^ v33;
        if ( !v34 )
          goto LABEL_36;
        v35 = (v34 & 0xFFFFFF) == 0;
        v36 = a6;
        if ( v35 )
          goto LABEL_35;
        v32 = a6[(((unsigned __int16)v32 - (unsigned __int16)v13) & 0x3FFF) + 0x8000];
        if ( v32 >= v30 )
        {
          v37 = *(_DWORD *)v32 ^ v33;
          if ( !v37 )
            goto LABEL_36;
          if ( (v37 & 0xFFFFFF) == 0 )
          {
LABEL_35:
            v30 = (unsigned __int64)(v21 - 0x2000);
            v14 = (__int64)&v21[-v32];
            v42 = 0LL;
            v43 = 3LL;
            v44 = v71;
            goto LABEL_72;
          }
          v32 = a6[(((unsigned __int16)v32 - (unsigned __int16)v13) & 0x3FFF) + 0x8000];
          if ( v32 >= v30 )
          {
            v38 = *(_DWORD *)v32 ^ v33;
            if ( !v38 )
            {
LABEL_36:
              v42 = 0LL;
              v43 = 3LL;
LABEL_37:
              v45 = v21;
              v46 = v21 + 4;
              for ( v32 += 4LL; ; v32 += 32LL )
              {
                v47 = v46 + 32;
                if ( (unsigned __int64)(v46 + 32) >= v65 )
                  break;
                v48 = *(_DWORD *)v46;
                v49 = *(_DWORD *)v32;
                if ( *(_DWORD *)v46 != *(_DWORD *)v32 )
                  goto LABEL_55;
                v48 = *((_DWORD *)v46 + 1);
                v49 = *(_DWORD *)(v32 + 4);
                if ( v48 != v49 )
                {
                  v46 += 4;
                  v32 += 4LL;
LABEL_55:
                  if ( (_BYTE)v48 == (_BYTE)v49 )
                  {
                    if ( v46[1] == *(_BYTE *)(v32 + 1) )
                    {
                      if ( v46[2] == *(_BYTE *)(v32 + 2) )
                      {
                        v46 += 3;
                        v32 += 3LL;
                      }
                      else
                      {
                        v46 += 2;
                        v32 += 2LL;
                      }
                    }
                    else
                    {
                      ++v46;
                      ++v32;
                    }
                  }
                  goto LABEL_64;
                }
                v48 = *((_DWORD *)v46 + 2);
                v49 = *(_DWORD *)(v32 + 8);
                if ( v48 != v49 )
                {
                  v46 += 8;
                  v32 += 8LL;
                  goto LABEL_55;
                }
                v48 = *((_DWORD *)v46 + 3);
                v49 = *(_DWORD *)(v32 + 12);
                if ( v48 != v49 )
                {
                  v46 += 12;
                  v32 += 12LL;
                  goto LABEL_55;
                }
                v48 = *((_DWORD *)v46 + 4);
                v49 = *(_DWORD *)(v32 + 16);
                if ( v48 != v49 )
                {
                  v46 += 16;
                  v32 += 16LL;
                  goto LABEL_55;
                }
                v48 = *((_DWORD *)v46 + 5);
                v49 = *(_DWORD *)(v32 + 20);
                if ( v48 != v49 )
                {
                  v46 += 20;
                  v32 += 20LL;
                  goto LABEL_55;
                }
                v48 = *((_DWORD *)v46 + 6);
                v49 = *(_DWORD *)(v32 + 24);
                if ( v48 != v49 )
                {
                  v46 += 24;
                  v32 += 24LL;
                  goto LABEL_55;
                }
                v49 = *(_DWORD *)(v32 + 28);
                v46 += 28;
                v48 = *(_DWORD *)v46;
                if ( *(_DWORD *)v46 != v49 )
                {
                  v32 += 28LL;
                  goto LABEL_55;
                }
                v46 = v47;
              }
              for ( ; (unsigned __int64)v46 < v65; ++v32 )
              {
                if ( *v46 != *(_BYTE *)v32 )
                  break;
                ++v46;
              }
LABEL_64:
              v50 = v46 - v45;
              if ( v46 - v45 <= v43 )
              {
                v42 += v50;
              }
              else
              {
                v43 = v46 - v45;
                v14 = (__int64)&v46[-v32];
                if ( v32 > (unsigned __int64)v45 )
                {
                  v22 = v72;
                  v21 = v45;
                  goto LABEL_67;
                }
              }
              v22 = v72;
              LOWORD(v32) = v32 - v50;
              v44 = v71;
              v21 = v45;
              v36 = a6;
              while ( (unsigned __int64)++v42 < 0x18 )
              {
LABEL_72:
                v32 = v36[(((unsigned __int16)v32 - v44) & 0x3FFF) + 0x8000];
                if ( v32 < v30 )
                  break;
                if ( v33 == *(_DWORD *)v32 )
                  goto LABEL_37;
              }
LABEL_67:
              v51 = v43 - 3;
              v21 += v43;
              v52 = 8 * v14 - 8;
              if ( v43 - 3 < 7 )
              {
                v14 = v51 + v52;
                *(_WORD *)v20 = v14;
                v20 += 2;
                goto LABEL_87;
              }
              v14 = v52 | 7;
              *(_WORD *)v20 = v14;
              v53 = v43 - 10;
              v20 += 2;
              if ( v60 )
              {
                v54 = *v60;
                if ( v53 < 0xF )
                {
                  *v60 = v54 | (16 * v53);
                  v60 = 0LL;
LABEL_87:
                  v55 = 2 * v22 + 1;
                  if ( v22 <= 0 )
                  {
                    v56 = v59;
                    v22 = 1;
                    v59 = (int *)v20;
                    v20 += 4;
                    v72 = 1;
                    *v56 = v55;
                  }
                  else
                  {
                    v22 = 2 * v22 + 1;
                    v72 = v55;
                  }
                  v18 = v62;
                  if ( (unsigned __int64)v20 < v62 )
                  {
                    LOWORD(v13) = v71;
                    v16 = a6;
                    v25 = v63;
                    goto LABEL_17;
                  }
                  goto LABEL_93;
                }
                *v60 = v54 | 0xF0;
                v60 = 0LL;
              }
              else
              {
                v60 = v20;
                if ( v53 < 0xF )
                {
                  *v20++ = v53;
                  goto LABEL_87;
                }
                *v20++ = 15;
              }
              if ( v43 - 25 >= 0xFF )
              {
                *v20 = -1;
                if ( v51 >= 0x10000 )
                {
                  *(_WORD *)(v20 + 1) = 0;
                  *(_DWORD *)(v20 + 3) = v51;
                  v20 += 7;
                }
                else
                {
                  *(_WORD *)(v20 + 1) = v51;
                  v20 += 3;
                }
              }
              else
              {
                *v20++ = v43 - 25;
              }
              goto LABEL_87;
            }
            if ( (v38 & 0xFFFFFF) == 0 )
              goto LABEL_35;
          }
        }
      }
      *v20 = v33;
      v39 = 2 * v22;
      ++v20;
      ++v21;
      ++v30;
      v40 = (int *)v20;
      if ( v22 <= 0 )
      {
        v20 += 4;
        v22 = 1;
        v41 = v40;
        v72 = 1;
        *v59 = v39;
        if ( (unsigned __int64)v20 >= v18 )
          goto LABEL_94;
        v16 = a6;
        v26 = (char *)v61;
        v59 = v40;
      }
      else
      {
        v16 = a6;
        v22 *= 2;
        v72 = v39;
        v26 = (char *)v61;
      }
    }
    v17 = v67;
    v23 = v64;
    v19 = a9;
    if ( (unsigned __int64)v21 < v67 )
      continue;
    break;
  }
LABEL_93:
  v41 = v59;
LABEL_94:
  if ( (unsigned __int64)v21 >= v65 )
  {
LABEL_100:
    if ( (unsigned __int64)v20 >= v66 )
      return 3221225507LL;
    for ( ; v22 > 0; v22 = 2 * v22 + 1 )
      ;
    v58 = (_DWORD)v20 - v73;
    *v41 = 2 * v22 + 1;
    *a5 = v58;
    if ( v58 < 8 )
      *a5 = 8;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v20 < v66 )
    {
      v57 = *v21++;
      *v20++ = v57;
      if ( v22 <= 0 )
      {
        *v41 = 2 * v22;
        v22 = 1;
        v41 = (int *)v20;
        v20 += 4;
      }
      else
      {
        v22 *= 2;
      }
      if ( (unsigned __int64)v21 >= v65 )
        goto LABEL_100;
    }
    return 3221225507LL;
  }
}
