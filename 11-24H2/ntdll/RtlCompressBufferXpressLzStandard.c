/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x1800B8F20
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1800B8E60 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1800BA280 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6)
{
  __int64 v6; // r11
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  int v12; // r14d
  _BYTE *v13; // rsi
  unsigned __int8 *v14; // rbx
  _DWORD *v15; // rbp
  _DWORD *v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rdi
  unsigned __int8 *v19; // r8
  __int64 v20; // rcx
  _DWORD *v21; // rdi
  __int64 v22; // r9
  unsigned __int8 *v23; // rbp
  __int64 v24; // r10
  __int64 v25; // r10
  __int64 v26; // r13
  __int64 v27; // r13
  unsigned __int64 v28; // r9
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rdi
  unsigned __int8 *v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int8 *v35; // rcx
  unsigned __int64 v36; // rdx
  __int16 v37; // ax
  char v38; // al
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned __int8 *v42; // rcx
  char v43; // al
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 XpressCallback; // rax
  unsigned int v47; // esi
  char *v48; // [rsp+20h] [rbp-78h]
  _DWORD *v49; // [rsp+28h] [rbp-70h]
  unsigned __int64 v50; // [rsp+30h] [rbp-68h]
  unsigned __int64 v51; // [rsp+38h] [rbp-60h]
  _QWORD v52[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v53; // [rsp+50h] [rbp-48h]
  int v54; // [rsp+54h] [rbp-44h]
  unsigned __int64 v55; // [rsp+A0h] [rbp+8h]
  int v56; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v58; // [rsp+D0h] [rbp+38h]
  unsigned __int64 v60; // [rsp+D8h] [rbp+40h]

  v56 = a3;
  v6 = a3;
  v7 = a3 + a4;
  v8 = (unsigned __int64)&a1[a2];
  v54 = 0;
  v50 = v8;
  v51 = v7;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v9 = v8 - 38;
  v10 = (unsigned __int64)&a1[a2];
  v52[0] = 0LL;
  if ( v8 >= 0x26 )
    v10 = v8 - 38;
  v52[1] = 0LL;
  v53 = a2;
  v11 = v7 - 41;
  v12 = 2;
  v55 = v10;
  v13 = (_BYTE *)(v6 + 5);
  v60 = v8 - 38;
  v14 = a1 + 1;
  v58 = v7 - 41;
  v15 = (_DWORD *)v6;
  v48 = 0LL;
  *(_BYTE *)(v6 + 4) = *a1;
  if ( a2 >= 0x40 )
  {
    v49 = (_DWORD *)v6;
    memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
    v16 = (_DWORD *)v6;
    memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = a6 + 8LL * *v14;
        v18 = v14[2] + 4LL * v14[1];
        v19 = *(unsigned __int8 **)(v17 + 16 * v18);
        *(_QWORD *)(v17 + 16 * v18) = v14;
        v20 = *v14;
        if ( *(_WORD *)v19 == *(_WORD *)v14 && v19[2] == v14[2] && v14 - v19 < 0x2000 )
          break;
        *v13++ = v20;
        ++v14;
        v21 = v13;
        if ( v12 <= 0 )
        {
          v13 += 4;
          *v16 = 2 * v12;
          v12 = 1;
          if ( (unsigned __int64)v14 >= v10 )
          {
            v15 = v21;
            if ( (unsigned __int64)v14 >= v9 )
              goto LABEL_40;
            XpressCallback = RtlpMakeXpressCallback(v52, v9, v14, v9);
            v9 = v60;
            v10 = XpressCallback;
            v55 = XpressCallback;
          }
          v15 = v21;
          if ( (unsigned __int64)v13 >= v11 )
            goto LABEL_40;
          v16 = v21;
          v49 = v21;
        }
        else
        {
          v12 *= 2;
        }
      }
      v22 = v19[3];
      v23 = v14;
      v24 = v14[3];
      if ( (_BYTE)v24 != (_BYTE)v22 )
      {
        v31 = v20 + 2 * v18;
        v32 = *(unsigned __int8 **)(a6 + 8 * (v31 + v24) + 22448);
        *(_QWORD *)(a6 + 8 * (v31 + v22) + 22448) = v19;
        if ( v14 - v32 >= 0x2000 || (v33 = *(unsigned int *)v14, (_DWORD)v33 != *(_DWORD *)v32) )
        {
          v28 = v60;
          v14 += 3;
          LOWORD(v19) = (_WORD)v19 + 3;
          goto LABEL_34;
        }
        v19 = v32;
        *(_QWORD *)(a6 + 8 * (v31 + (v33 >> 24)) + 22448) = v14;
      }
      v25 = v19[4];
      v26 = v14[4];
      if ( (_BYTE)v26 != (_BYTE)v25 )
      {
        v34 = 2
            * ((unsigned __int8)__ROR1__(v14[1] ^ __ROL1__(v14[3] + *v14, 3), 1)
             + 4LL * (unsigned __int8)__ROL1__(*v14 ^ __ROR1__(v14[2] + v14[1] + 97, 1), 3));
        v35 = *(unsigned __int8 **)(a6 + 8 * (v34 + v26) + 22448);
        *(_QWORD *)(a6 + 8 * (v34 + v25) + 22448) = v19;
        if ( v14 - v35 >= 0x2000
          || *(_DWORD *)v14 != *(_DWORD *)v35
          || (v44 = v14[4], (_BYTE)v44 != v35[4])
          || v14 == v35 )
        {
          v28 = v60;
          v14 += 4;
          LOWORD(v19) = (_WORD)v19 + 4;
LABEL_33:
          v11 = v58;
          v10 = v55;
          goto LABEL_34;
        }
        v19 = v35;
        *(_QWORD *)(a6 + 8 * (v34 + v44) + 22448) = v14;
      }
      v27 = v19[5];
      if ( v14[5] != (_BYTE)v27 )
      {
        v41 = 2
            * ((v14[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v14, v14[4]))
             + 4
             * ((unsigned __int8)__ROR1__(v14[1] ^ __ROL1__(v14[3], 3), 1)
              + (unsigned __int64)(unsigned __int8)__ROL1__(v14[4] ^ (__ROR1__(*v14, 1) + 69), 3)));
        v42 = *(unsigned __int8 **)(a6 + 8 * (v41 + v14[5]) + 22448);
        *(_QWORD *)(a6 + 8 * (v41 + v27) + 22448) = v19;
        if ( v14 - v42 >= 0x2000
          || *(_DWORD *)v14 != *(_DWORD *)v42
          || v14[4] != v42[4]
          || (v45 = v14[5], (_BYTE)v45 != v42[5])
          || v14 == v42 )
        {
          v28 = v60;
          v14 += 5;
          LOWORD(v19) = (_WORD)v19 + 5;
          goto LABEL_33;
        }
        v19 = v42;
        *(_QWORD *)(a6 + 8 * (v41 + v45) + 22448) = v14;
      }
      v28 = v60;
      v14 += 6;
      for ( v19 += 6; ; v19 += 32 )
      {
        if ( (unsigned __int64)v14 >= v60 )
        {
          for ( ; (unsigned __int64)v14 < v50; ++v19 )
          {
            if ( *v14 != *v19 )
              break;
            ++v14;
          }
          goto LABEL_33;
        }
        v29 = *(_DWORD *)v14;
        v30 = *(_DWORD *)v19;
        if ( *(_DWORD *)v14 != *(_DWORD *)v19 )
          break;
        v30 = *((_DWORD *)v19 + 1);
        v29 = *((_DWORD *)v14 + 1);
        if ( v29 != v30 )
        {
          v14 += 4;
          v19 += 4;
          break;
        }
        v30 = *((_DWORD *)v19 + 2);
        v29 = *((_DWORD *)v14 + 2);
        if ( v29 != v30 )
        {
          v14 += 8;
          v19 += 8;
          break;
        }
        v30 = *((_DWORD *)v19 + 3);
        v29 = *((_DWORD *)v14 + 3);
        if ( v29 != v30 )
        {
          v14 += 12;
          v19 += 12;
          break;
        }
        v30 = *((_DWORD *)v19 + 4);
        v29 = *((_DWORD *)v14 + 4);
        if ( v29 != v30 )
        {
          v14 += 16;
          v19 += 16;
          break;
        }
        v30 = *((_DWORD *)v19 + 5);
        v29 = *((_DWORD *)v14 + 5);
        if ( v29 != v30 )
        {
          v14 += 20;
          v19 += 20;
          break;
        }
        v30 = *((_DWORD *)v19 + 6);
        v29 = *((_DWORD *)v14 + 6);
        if ( v29 != v30 )
        {
          v14 += 24;
          v19 += 24;
          break;
        }
        v30 = *((_DWORD *)v19 + 7);
        v29 = *((_DWORD *)v14 + 7);
        if ( v29 != v30 )
        {
          v14 += 28;
          v19 += 28;
          break;
        }
        v14 += 32;
      }
      if ( (_BYTE)v29 != (_BYTE)v30 )
        goto LABEL_33;
      if ( v14[1] != v19[1] )
      {
        ++v14;
        LOWORD(v19) = (_WORD)v19 + 1;
        goto LABEL_33;
      }
      v10 = v55;
      v11 = v58;
      if ( v14[2] == v19[2] )
      {
        v14 += 3;
        LOWORD(v19) = (_WORD)v19 + 3;
      }
      else
      {
        v14 += 2;
        LOWORD(v19) = (_WORD)v19 + 2;
      }
LABEL_34:
      v36 = v14 - v23 - 3;
      v37 = 8 * ((_WORD)v14 - (_WORD)v19) - 8;
      if ( v36 >= 7 )
      {
        *(_WORD *)v13 = v37 | 7;
        v40 = v14 - v23 - 10;
        v13 += 2;
        if ( v48 )
        {
          v43 = *v48;
          if ( v40 >= 0xF )
          {
            *v48 = v43 | 0xF0;
            v48 = 0LL;
LABEL_73:
            if ( (unsigned __int64)(v14 - v23 - 25) >= 0xFF )
            {
              *v13 = -1;
              if ( v36 >= 0x10000 )
              {
                *(_WORD *)(v13 + 1) = 0;
                *(_DWORD *)(v13 + 3) = v36;
                v13 += 7;
              }
              else
              {
                *(_WORD *)(v13 + 1) = v36;
                v13 += 3;
              }
            }
            else
            {
              *v13++ = (_BYTE)v14 - (_BYTE)v23 - 25;
            }
            goto LABEL_36;
          }
          *v48 = v43 | (16 * v40);
          v48 = 0LL;
        }
        else
        {
          v48 = v13;
          if ( v40 >= 0xF )
          {
            *v13++ = 15;
            goto LABEL_73;
          }
          *v13++ = v40;
        }
      }
      else
      {
        *(_WORD *)v13 = v36 + v37;
        v13 += 2;
      }
LABEL_36:
      v15 = v49;
      if ( v12 <= 0 )
      {
        *v49 = 2 * v12 + 1;
        v12 = 1;
        v15 = v13;
        v49 = v13;
        v13 += 4;
      }
      else
      {
        v12 = 2 * v12 + 1;
      }
      if ( (unsigned __int64)v14 >= v10 )
      {
        if ( (unsigned __int64)v14 >= v28 )
        {
LABEL_40:
          v8 = v50;
          v7 = v51;
          LODWORD(v6) = v56;
          break;
        }
        v10 = RtlpMakeXpressCallback(v52, v28, v14, v28);
        v55 = v10;
      }
      v9 = v60;
      if ( (unsigned __int64)v13 >= v11 )
        goto LABEL_40;
      v16 = v49;
    }
  }
  if ( (unsigned __int64)v14 < v8 )
  {
    while ( (unsigned __int64)v13 < v7 )
    {
      v38 = *v14++;
      *v13++ = v38;
      if ( v12 <= 0 )
      {
        *v15 = 2 * v12;
        v12 = 1;
        v15 = v13;
        v13 += 4;
      }
      else
      {
        v12 *= 2;
      }
      if ( (unsigned __int64)v14 >= v8 )
        goto LABEL_46;
    }
    return 3221225507LL;
  }
LABEL_46:
  if ( (unsigned __int64)v13 >= v7 )
    return 3221225507LL;
  for ( ; v12 > 0; v12 = 2 * v12 + 1 )
    ;
  v47 = (_DWORD)v13 - v6;
  *v15 = 2 * v12 + 1;
  *a5 = v47;
  if ( v47 < 8 )
    *a5 = 8;
  return 0LL;
}
