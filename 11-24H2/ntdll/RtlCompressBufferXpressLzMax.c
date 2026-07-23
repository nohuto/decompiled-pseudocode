/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x18014EFF0
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1800B8E60 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1800BA280 (RtlpMakeXpressCallback.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        void *a6)
{
  __int16 v6; // r15
  unsigned __int64 v8; // r12
  unsigned __int8 *v10; // rbp
  __int64 v11; // r13
  _QWORD *v13; // r10
  char *v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int8 v16; // al
  int v17; // esi
  unsigned __int8 *v18; // r11
  _BYTE *v19; // rbx
  _DWORD *v20; // r8
  unsigned __int64 v21; // r9
  char *v22; // rax
  __int64 v23; // r15
  char *v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r15
  unsigned __int64 XpressCallback; // rax
  int v28; // r12d
  unsigned __int64 v29; // rdx
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  _DWORD *v33; // rax
  __int16 v34; // ax
  unsigned __int64 v35; // r9
  __int64 v36; // r11
  unsigned __int64 v37; // rbp
  char *v38; // r14
  _BYTE *v39; // rdi
  _BYTE *v40; // r10
  int v41; // eax
  int v42; // ecx
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // r13
  _BYTE *v46; // r10
  unsigned __int64 v47; // rax
  char v48; // cl
  char v49; // al
  unsigned int v50; // ebx
  _BYTE *v51; // [rsp+20h] [rbp-98h]
  unsigned __int64 v52; // [rsp+28h] [rbp-90h]
  unsigned __int64 v53; // [rsp+30h] [rbp-88h]
  unsigned __int64 v54; // [rsp+38h] [rbp-80h]
  unsigned __int8 *v55; // [rsp+40h] [rbp-78h]
  __int16 v56; // [rsp+48h] [rbp-70h]
  unsigned __int64 v57; // [rsp+50h] [rbp-68h]
  __int64 v58; // [rsp+58h] [rbp-60h]
  _QWORD v59[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v60; // [rsp+78h] [rbp-40h]
  int v61; // [rsp+7Ch] [rbp-3Ch]
  __int16 v62; // [rsp+C0h] [rbp+8h]
  int v63; // [rsp+D0h] [rbp+18h]
  __int64 v65; // [rsp+F0h] [rbp+38h]
  __int64 v67; // [rsp+F8h] [rbp+40h]

  v63 = a3;
  v62 = a1;
  v6 = 0;
  v8 = a3 + a4;
  v58 = a2;
  v61 = 0;
  v10 = (unsigned __int8 *)a1;
  v65 = a1 + a2;
  v11 = 0LL;
  v57 = v8;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  memset_thunk_772440563353939046(a6, 0, 0x40000uLL);
  v13 = a6;
  v14 = (char *)(v10 + 1);
  v53 = v8 - 41;
  v15 = v65 - 5;
  v16 = *v10;
  v17 = 2;
  v60 = a2;
  v18 = v10;
  *(_BYTE *)(a3 + 4) = v16;
  v19 = (_BYTE *)(a3 + 5);
  v20 = (_DWORD *)a3;
  v51 = 0LL;
  v59[0] = 0LL;
  v59[1] = 0LL;
  v55 = v10;
  v67 = a3;
  while ( 2 )
  {
    v21 = v15;
    if ( (unsigned __int64)(v18 + 0x2000) <= v15 )
      v21 = (unsigned __int64)(v18 + 0x2000);
    v22 = &v14[v58];
    v54 = v21;
    if ( v21 < (unsigned __int64)&v14[v58] )
      v22 = (char *)v21;
    v23 = v6 & 0x3FFF;
    v52 = (unsigned __int64)v22;
    v56 = v23;
    if ( (unsigned __int64)v18 < v21 )
    {
      v24 = (char *)&v13[v23 + 0x8000];
      do
      {
        v24 += 8;
        LOWORD(v23) = v23 + 1;
        v25 = (unsigned __int16)XpressHashFunction[*v18] ^ (unsigned __int16)XpressHashFunction[v18[2] + 512] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v18[1] + 256];
        *((_QWORD *)v24 - 1) = v13[v25];
        v13[v25] = v18++;
      }
      while ( (unsigned __int64)v18 < v21 );
      v20 = (_DWORD *)v67;
      v56 = v23;
      v55 = v18;
LABEL_14:
      v22 = (char *)v52;
      LOWORD(v10) = v62;
    }
    v26 = (unsigned __int64)(v14 - 0x2000);
    while ( 1 )
    {
      if ( v14 < v22 )
        goto LABEL_19;
      if ( (unsigned __int64)v14 >= v21 )
        break;
      XpressCallback = RtlpMakeXpressCallback((__int64)v59, v21, (__int64)v14);
      v20 = (_DWORD *)v67;
      v21 = v54;
      v13 = a6;
      v52 = XpressCallback;
LABEL_19:
      v28 = *(_DWORD *)v14;
      v29 = v13[((0x2000 - (unsigned __int16)v10 + (unsigned __int16)v26) & 0x3FFF) + 0x8000];
      if ( v29 >= v26 )
      {
        v30 = *(_DWORD *)v29 ^ v28;
        if ( !v30 )
          goto LABEL_33;
        if ( (v30 & 0xFFFFFF) == 0 )
          goto LABEL_32;
        v29 = v13[(((unsigned __int16)v29 - (unsigned __int16)v10) & 0x3FFF) + 0x8000];
        if ( v29 >= v26 )
        {
          v31 = *(_DWORD *)v29 ^ v28;
          if ( !v31 )
            goto LABEL_33;
          if ( (v31 & 0xFFFFFF) == 0 )
          {
LABEL_32:
            v34 = v62;
            v26 = (unsigned __int64)(v14 - 0x2000);
            v35 = v65;
            v11 = (__int64)&v14[-v29];
            v36 = 0LL;
            v37 = 3LL;
            goto LABEL_70;
          }
          v29 = v13[(((unsigned __int16)v29 - (unsigned __int16)v10) & 0x3FFF) + 0x8000];
          if ( v29 >= v26 )
          {
            v32 = *(_DWORD *)v29 ^ v28;
            if ( !v32 )
            {
LABEL_33:
              v35 = v65;
              v36 = 0LL;
              v37 = 3LL;
LABEL_34:
              v38 = v14;
              v39 = v14 + 4;
              for ( v29 += 4LL; ; v29 += 32LL )
              {
                v40 = v39 + 32;
                if ( (unsigned __int64)(v39 + 32) >= v35 )
                  break;
                v41 = *(_DWORD *)v39;
                v42 = *(_DWORD *)v29;
                if ( *(_DWORD *)v39 != *(_DWORD *)v29 )
                  goto LABEL_53;
                v41 = *((_DWORD *)v39 + 1);
                v42 = *(_DWORD *)(v29 + 4);
                if ( v41 != v42 )
                {
                  v39 += 4;
                  v29 += 4LL;
                  goto LABEL_52;
                }
                v41 = *((_DWORD *)v39 + 2);
                v42 = *(_DWORD *)(v29 + 8);
                if ( v41 != v42 )
                {
                  v39 += 8;
                  v29 += 8LL;
                  goto LABEL_52;
                }
                v41 = *((_DWORD *)v39 + 3);
                v42 = *(_DWORD *)(v29 + 12);
                if ( v41 != v42 )
                {
                  v39 += 12;
                  v29 += 12LL;
                  goto LABEL_52;
                }
                v41 = *((_DWORD *)v39 + 4);
                v42 = *(_DWORD *)(v29 + 16);
                if ( v41 != v42 )
                {
                  v39 += 16;
                  v29 += 16LL;
                  goto LABEL_52;
                }
                v41 = *((_DWORD *)v39 + 5);
                v42 = *(_DWORD *)(v29 + 20);
                if ( v41 != v42 )
                {
                  v39 += 20;
                  v29 += 20LL;
LABEL_52:
                  v35 = v65;
LABEL_53:
                  if ( (_BYTE)v41 == (_BYTE)v42 )
                  {
                    if ( v39[1] == *(_BYTE *)(v29 + 1) )
                    {
                      if ( v39[2] == *(_BYTE *)(v29 + 2) )
                      {
                        v39 += 3;
                        v29 += 3LL;
                      }
                      else
                      {
                        v39 += 2;
                        v29 += 2LL;
                      }
                    }
                    else
                    {
                      ++v39;
                      ++v29;
                    }
                  }
                  goto LABEL_62;
                }
                v41 = *((_DWORD *)v39 + 6);
                v42 = *(_DWORD *)(v29 + 24);
                if ( v41 != v42 )
                {
                  v39 += 24;
                  v29 += 24LL;
                  goto LABEL_52;
                }
                v42 = *(_DWORD *)(v29 + 28);
                v35 = v65;
                v39 += 28;
                v41 = *(_DWORD *)v39;
                if ( *(_DWORD *)v39 != v42 )
                {
                  v29 += 28LL;
                  goto LABEL_53;
                }
                v39 = v40;
              }
              for ( ; (unsigned __int64)v39 < v35; ++v29 )
              {
                if ( *v39 != *(_BYTE *)v29 )
                  break;
                ++v39;
              }
LABEL_62:
              v43 = v39 - v38;
              if ( v39 - v38 <= v37 )
              {
                v36 += v43;
              }
              else
              {
                v37 = v39 - v38;
                v11 = (__int64)&v39[-v29];
                if ( v29 > (unsigned __int64)v38 )
                {
                  v20 = (_DWORD *)v67;
                  v14 = v38;
                  v13 = a6;
                  goto LABEL_65;
                }
              }
              v20 = (_DWORD *)v67;
              LOWORD(v29) = v29 - v43;
              v34 = v62;
              v14 = v38;
              v13 = a6;
              while ( (unsigned __int64)++v36 < 0x18 )
              {
LABEL_70:
                v29 = v13[(((unsigned __int16)v29 - v34) & 0x3FFF) + 0x8000];
                if ( v29 < v26 )
                  break;
                if ( v28 == *(_DWORD *)v29 )
                  goto LABEL_34;
              }
LABEL_65:
              v44 = v37 - 3;
              v14 += v37;
              v45 = 8 * v11 - 8;
              if ( v37 - 3 < 7 )
              {
                v11 = v44 + v45;
                *(_WORD *)v19 = v11;
                v19 += 2;
                goto LABEL_86;
              }
              v46 = v51;
              v11 = v45 | 7;
              *(_WORD *)v19 = v11;
              v47 = v37 - 10;
              v19 += 2;
              if ( v51 )
              {
                v48 = *v51;
                v51 = 0LL;
                if ( v47 < 0xF )
                {
                  *v46 = v48 | (16 * v47);
                  goto LABEL_85;
                }
                *v46 = v48 | 0xF0;
              }
              else
              {
                v20 = (_DWORD *)v67;
                v51 = v19;
                if ( v47 < 0xF )
                {
                  *v19++ = v47;
LABEL_85:
                  v13 = a6;
LABEL_86:
                  if ( v17 <= 0 )
                  {
                    *v20 = 2 * v17 + 1;
                    v17 = 1;
                    v20 = v19;
                    v67 = (__int64)v19;
                    v19 += 4;
                  }
                  else
                  {
                    v17 = 2 * v17 + 1;
                  }
                  if ( (unsigned __int64)v19 < v53 )
                  {
                    v21 = v54;
                    goto LABEL_14;
                  }
                  goto LABEL_93;
                }
                *v19++ = 15;
              }
              if ( v37 - 25 >= 0xFF )
              {
                *v19 = -1;
                if ( v44 >= 0x10000 )
                {
                  *(_WORD *)(v19 + 1) = 0;
                  *(_DWORD *)(v19 + 3) = v44;
                  v19 += 7;
                }
                else
                {
                  *(_WORD *)(v19 + 1) = v44;
                  v19 += 3;
                }
              }
              else
              {
                *v19++ = v37 - 25;
              }
              goto LABEL_85;
            }
            if ( (v32 & 0xFFFFFF) == 0 )
              goto LABEL_32;
          }
        }
      }
      *v19++ = v28;
      ++v14;
      ++v26;
      v33 = v19;
      if ( v17 <= 0 )
      {
        v19 += 4;
        *v20 = 2 * v17;
        v17 = 1;
        v20 = v33;
        if ( (unsigned __int64)v19 >= v53 )
          goto LABEL_92;
        v67 = (__int64)v33;
        v22 = (char *)v52;
      }
      else
      {
        v22 = (char *)v52;
        v17 *= 2;
      }
    }
    v15 = v65 - 5;
    v18 = v55;
    v6 = v56;
    if ( (unsigned __int64)v14 < v65 - 5 )
      continue;
    break;
  }
LABEL_92:
  v35 = v65;
LABEL_93:
  if ( (unsigned __int64)v14 >= v35 )
  {
LABEL_99:
    if ( (unsigned __int64)v19 >= v57 )
      return 3221225507LL;
    for ( ; v17 > 0; v17 = 2 * v17 + 1 )
      ;
    v50 = (_DWORD)v19 - v63;
    *v20 = 2 * v17 + 1;
    *a5 = v50;
    if ( v50 < 8 )
      *a5 = 8;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v19 < v57 )
    {
      v49 = *v14++;
      *v19++ = v49;
      if ( v17 <= 0 )
      {
        *v20 = 2 * v17;
        v17 = 1;
        v20 = v19;
        v19 += 4;
      }
      else
      {
        v17 *= 2;
      }
      if ( (unsigned __int64)v14 >= v35 )
        goto LABEL_99;
    }
    return 3221225507LL;
  }
}
