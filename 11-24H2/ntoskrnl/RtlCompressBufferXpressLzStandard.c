/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x1404095A0
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1404094E0 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x1405EE680 (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140409D30 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  _DWORD *v9; // r15
  unsigned __int8 *v10; // r8
  unsigned __int64 v11; // r11
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r13
  unsigned int v15; // ecx
  _BYTE *v16; // rsi
  unsigned __int8 *v17; // rbx
  unsigned __int64 v18; // r12
  char v19; // al
  int v20; // r14d
  _DWORD *v21; // rbp
  char v22; // al
  unsigned int v23; // esi
  unsigned __int64 v25; // rax
  _DWORD *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int8 *v29; // r8
  __int64 v30; // rcx
  _DWORD *v31; // rdi
  __int64 v32; // r10
  unsigned __int8 *v33; // rbp
  __int64 v34; // r11
  __int64 v35; // r10
  __int64 v36; // r11
  __int64 v37; // r13
  unsigned __int64 v38; // r9
  int v39; // eax
  int v40; // ecx
  __int64 v41; // rcx
  unsigned __int8 *v42; // rdi
  __int64 v43; // rdx
  unsigned __int8 *v44; // rcx
  unsigned __int64 v45; // rdx
  __int16 v46; // ax
  unsigned __int64 v47; // rcx
  char v48; // al
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int8 *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 XpressCallback; // rax
  unsigned __int64 v55; // [rsp+20h] [rbp-88h]
  unsigned __int64 v56; // [rsp+28h] [rbp-80h]
  char *v57; // [rsp+30h] [rbp-78h]
  _DWORD *v58; // [rsp+38h] [rbp-70h]
  unsigned __int64 v59; // [rsp+40h] [rbp-68h]
  unsigned __int64 v60; // [rsp+48h] [rbp-60h]
  _QWORD v61[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v62; // [rsp+60h] [rbp-48h]
  int v63; // [rsp+64h] [rbp-44h]
  unsigned __int64 v64; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v65; // [rsp+B8h] [rbp+10h]

  v9 = a3;
  v10 = &a1[a2];
  v63 = 0;
  v11 = (unsigned __int64)v9 + a4;
  v59 = (unsigned __int64)v10;
  v60 = v11;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v13 = (unsigned __int64)(v10 - 38);
  v14 = v11 - 41;
  v55 = v11 - 41;
  v56 = (unsigned __int64)(v10 - 38);
  v57 = 0LL;
  if ( !a7 || (v15 = a9, a9 > a2) )
    v15 = a2;
  v16 = (char *)v9 + 5;
  v17 = a1 + 1;
  v18 = (unsigned __int64)&a1[v15];
  v61[1] = a8;
  v19 = *a1;
  v61[0] = a7;
  v20 = 2;
  if ( v13 < v18 )
    v18 = (unsigned __int64)(v10 - 38);
  v62 = v15;
  v64 = v18;
  v21 = v9;
  *((_BYTE *)v9 + 4) = v19;
  if ( a2 >= 0x40 )
  {
    v25 = (unsigned __int64)a1;
    v26 = a3;
    v58 = a3;
    memset64((void *)a6, v25, 0xAF6uLL);
    memset64((void *)(a6 + 22448), v25, 0x12EEuLL);
    while ( 1 )
    {
      while ( 1 )
      {
        v27 = a6 + 8LL * *v17;
        v28 = v17[2] + 4LL * v17[1];
        v29 = *(unsigned __int8 **)(v27 + 16 * v28);
        *(_QWORD *)(v27 + 16 * v28) = v17;
        v30 = *v17;
        if ( *(_WORD *)v29 == *(_WORD *)v17 && v29[2] == v17[2] && v17 - v29 < 0x2000 )
          break;
        *v16++ = v30;
        ++v17;
        v31 = v16;
        if ( v20 <= 0 )
        {
          v16 += 4;
          *v26 = 2 * v20;
          v20 = 1;
          if ( (unsigned __int64)v17 >= v18 )
          {
            v21 = v31;
            if ( (unsigned __int64)v17 >= v13 )
            {
LABEL_96:
              v10 = (unsigned __int8 *)v59;
              v11 = v60;
              LODWORD(v9) = (_DWORD)a3;
              goto LABEL_8;
            }
            XpressCallback = RtlpMakeXpressCallback(v61, v13, v17);
            v13 = v56;
            v18 = XpressCallback;
            v64 = XpressCallback;
          }
          v21 = v31;
          if ( (unsigned __int64)v16 >= v14 )
            goto LABEL_96;
          v26 = v31;
          v58 = v31;
        }
        else
        {
          v20 *= 2;
        }
      }
      v32 = v29[3];
      v33 = v17;
      v34 = v17[3];
      if ( (_BYTE)v34 != (_BYTE)v32 )
      {
        v41 = v30 + 2 * v28;
        v42 = *(unsigned __int8 **)(a6 + 8 * (v41 + v34) + 22448);
        *(_QWORD *)(a6 + 8 * (v41 + v32) + 22448) = v29;
        if ( v17 - v42 >= 0x2000 || (v49 = *(unsigned int *)v17, (_DWORD)v49 != *(_DWORD *)v42) )
        {
          v38 = v56;
          v17 += 3;
          LOWORD(v29) = (_WORD)v29 + 3;
          goto LABEL_45;
        }
        v29 = v42;
        *(_QWORD *)(a6 + 8 * (v41 + (v49 >> 24)) + 22448) = v17;
      }
      v35 = v29[4];
      v36 = v17[4];
      if ( (_BYTE)v36 != (_BYTE)v35 )
      {
        v43 = 2
            * ((unsigned __int8)__ROR1__(v17[1] ^ __ROL1__(v17[3] + *v17, 3), 1)
             + 4LL * (unsigned __int8)__ROL1__(*v17 ^ __ROR1__(v17[2] + v17[1] + 97, 1), 3));
        v44 = *(unsigned __int8 **)(a6 + 8 * (v43 + v36) + 22448);
        *(_QWORD *)(a6 + 8 * (v43 + v35) + 22448) = v29;
        if ( v17 - v44 >= 0x2000
          || *(_DWORD *)v17 != *(_DWORD *)v44
          || (v52 = v17[4], (_BYTE)v52 != v44[4])
          || v17 == v44 )
        {
          v38 = v56;
          v17 += 4;
          LOWORD(v29) = (_WORD)v29 + 4;
LABEL_44:
          v14 = v55;
          v18 = v64;
          goto LABEL_45;
        }
        v29 = v44;
        *(_QWORD *)(a6 + 8 * (v43 + v52) + 22448) = v17;
      }
      v37 = v29[5];
      v65 = v17[5];
      if ( v65 != (_BYTE)v37 )
      {
        v50 = 2
            * ((v17[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v17, v17[4]))
             + 4
             * ((unsigned __int8)__ROR1__(v17[1] ^ __ROL1__(v17[3], 3), 1)
              + (unsigned __int64)(unsigned __int8)__ROL1__(v17[4] ^ (__ROR1__(*v17, 1) + 69), 3)));
        v51 = *(unsigned __int8 **)(a6 + 8 * (v50 + v65) + 22448);
        *(_QWORD *)(a6 + 8 * (v50 + v37) + 22448) = v29;
        if ( v17 - v51 >= 0x2000
          || *(_DWORD *)v17 != *(_DWORD *)v51
          || v17[4] != v51[4]
          || (v53 = v17[5], (_BYTE)v53 != v51[5])
          || v17 == v51 )
        {
          v38 = v56;
          v17 += 5;
          LOWORD(v29) = (_WORD)v29 + 5;
          goto LABEL_44;
        }
        v29 = v51;
        *(_QWORD *)(a6 + 8 * (v50 + v53) + 22448) = v17;
      }
      v38 = v56;
      v17 += 6;
      for ( v29 += 6; ; v29 += 32 )
      {
        if ( (unsigned __int64)v17 >= v56 )
        {
          for ( ; (unsigned __int64)v17 < v59; ++v29 )
          {
            if ( *v17 != *v29 )
              break;
            ++v17;
          }
          goto LABEL_44;
        }
        v39 = *(_DWORD *)v17;
        v40 = *(_DWORD *)v29;
        if ( *(_DWORD *)v17 != *(_DWORD *)v29 )
          break;
        v40 = *((_DWORD *)v29 + 1);
        v39 = *((_DWORD *)v17 + 1);
        if ( v39 != v40 )
        {
          v17 += 4;
          v29 += 4;
          break;
        }
        v40 = *((_DWORD *)v29 + 2);
        v39 = *((_DWORD *)v17 + 2);
        if ( v39 != v40 )
        {
          v17 += 8;
          v29 += 8;
          break;
        }
        v40 = *((_DWORD *)v29 + 3);
        v39 = *((_DWORD *)v17 + 3);
        if ( v39 != v40 )
        {
          v17 += 12;
          v29 += 12;
          break;
        }
        v40 = *((_DWORD *)v29 + 4);
        v39 = *((_DWORD *)v17 + 4);
        if ( v39 != v40 )
        {
          v17 += 16;
          v29 += 16;
          break;
        }
        v40 = *((_DWORD *)v29 + 5);
        v39 = *((_DWORD *)v17 + 5);
        if ( v39 != v40 )
        {
          v17 += 20;
          v29 += 20;
          break;
        }
        v40 = *((_DWORD *)v29 + 6);
        v39 = *((_DWORD *)v17 + 6);
        if ( v39 != v40 )
        {
          v17 += 24;
          v29 += 24;
          break;
        }
        v40 = *((_DWORD *)v29 + 7);
        v39 = *((_DWORD *)v17 + 7);
        if ( v39 != v40 )
        {
          v17 += 28;
          v29 += 28;
          break;
        }
        v17 += 32;
      }
      if ( (_BYTE)v39 != (_BYTE)v40 )
        goto LABEL_44;
      if ( v17[1] != v29[1] )
      {
        ++v17;
        LOWORD(v29) = (_WORD)v29 + 1;
        goto LABEL_44;
      }
      v18 = v64;
      v14 = v55;
      if ( v17[2] == v29[2] )
      {
        v17 += 3;
        LOWORD(v29) = (_WORD)v29 + 3;
      }
      else
      {
        v17 += 2;
        LOWORD(v29) = (_WORD)v29 + 2;
      }
LABEL_45:
      v45 = v17 - v33 - 3;
      v46 = 8 * ((_WORD)v17 - (_WORD)v29) - 8;
      if ( v45 >= 7 )
      {
        *(_WORD *)v16 = v46 | 7;
        v47 = v17 - v33 - 10;
        v16 += 2;
        if ( v57 )
        {
          v48 = *v57;
          if ( v47 >= 0xF )
          {
            *v57 = v48 | 0xF0;
            v57 = 0LL;
LABEL_78:
            if ( (unsigned __int64)(v17 - v33 - 25) >= 0xFF )
            {
              *v16 = -1;
              if ( v45 >= 0x10000 )
              {
                *(_WORD *)(v16 + 1) = 0;
                *(_DWORD *)(v16 + 3) = v45;
                v16 += 7;
              }
              else
              {
                *(_WORD *)(v16 + 1) = v45;
                v16 += 3;
              }
            }
            else
            {
              *v16++ = (_BYTE)v17 - (_BYTE)v33 - 25;
            }
            goto LABEL_47;
          }
          *v57 = v48 | (16 * v47);
          v57 = 0LL;
        }
        else
        {
          v57 = v16;
          if ( v47 >= 0xF )
          {
            *v16++ = 15;
            goto LABEL_78;
          }
          *v16++ = v47;
        }
      }
      else
      {
        *(_WORD *)v16 = v45 + v46;
        v16 += 2;
      }
LABEL_47:
      v21 = v58;
      if ( v20 <= 0 )
      {
        *v58 = 2 * v20 + 1;
        v20 = 1;
        v21 = v16;
        v58 = v16;
        v16 += 4;
      }
      else
      {
        v20 = 2 * v20 + 1;
      }
      if ( (unsigned __int64)v17 >= v18 )
      {
        if ( (unsigned __int64)v17 >= v38 )
          goto LABEL_96;
        v18 = RtlpMakeXpressCallback(v61, v38, v17);
        v64 = v18;
      }
      v13 = v56;
      if ( (unsigned __int64)v16 >= v14 )
        goto LABEL_96;
      v26 = v58;
    }
  }
LABEL_8:
  if ( v17 < v10 )
  {
    while ( (unsigned __int64)v16 < v11 )
    {
      v22 = *v17++;
      *v16++ = v22;
      if ( v20 <= 0 )
      {
        *v21 = 2 * v20;
        v20 = 1;
        v21 = v16;
        v16 += 4;
      }
      else
      {
        v20 *= 2;
      }
      if ( v17 >= v10 )
        goto LABEL_13;
    }
    return 3221225507LL;
  }
LABEL_13:
  if ( (unsigned __int64)v16 >= v11 )
    return 3221225507LL;
  for ( ; v20 > 0; v20 = 2 * v20 + 1 )
    ;
  v23 = (_DWORD)v16 - (_DWORD)v9;
  *v21 = 2 * v20 + 1;
  *a5 = v23;
  if ( v23 < 8 )
    *a5 = 8;
  return 0LL;
}
