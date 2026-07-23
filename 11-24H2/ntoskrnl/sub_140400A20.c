/*
 * XREFs of sub_140400A20 @ 0x140400A20
 * Callers:
 *     sub_140400310 @ 0x140400310 (sub_140400310.c)
 *     sub_140400690 @ 0x140400690 (sub_140400690.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140400A20(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v6; // r10
  _DWORD *v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // r11d
  int v10; // r9d
  int v11; // eax
  int v12; // r9d
  unsigned int v13; // edi
  unsigned int v14; // r9d
  __int64 result; // rax
  unsigned int v16; // ecx
  unsigned int v17; // r11d
  unsigned int v18; // r9d
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // r11d
  int v22; // r9d
  int v23; // eax
  unsigned int v24; // r11d
  unsigned int v25; // ecx
  unsigned int v26; // r9d
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  unsigned int v29; // r11d
  unsigned int v30; // ecx
  unsigned int v31; // r9d
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // r9d
  unsigned int v35; // ecx
  unsigned int v36; // r9d
  unsigned int v37; // ecx
  unsigned int v38; // r11d
  int v39; // r9d
  int v40; // eax
  unsigned int v41; // r9d
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // r9d
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // r9d
  unsigned int v53; // r9d
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // r9d
  unsigned int v57; // ecx
  unsigned int v58; // r9d
  unsigned int v59; // r9d
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // r9d
  unsigned int v64; // ecx
  __int64 v65; // [rsp+0h] [rbp-20h]
  __int64 v66; // [rsp+8h] [rbp-18h]

  v6 = a2;
  v7 = (_DWORD *)(a1 + 16LL * a2);
  switch ( v7[2] )
  {
    case 0:
      v35 = v7[4];
      v36 = v7[3];
      v65 = a3;
      v66 = a3;
      return (a4 >> (v35 % 0xF + 1))
           + *((unsigned __int16 *)&v66 + (v6 & 3))
           * (a4 ^ *((unsigned __int16 *)&v65 + ((v36 % 3 + (_BYTE)a2 + 1) & 3)));
    case 1:
      v16 = v7[3];
      v17 = v7[4];
      v66 = a3;
      v65 = a3;
      v18 = a4 - *((unsigned __int16 *)&v66 + ((v16 % 3 + (_BYTE)a2 + 1) & 3));
      v19 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_10;
    case 2:
      v51 = v7[4];
      v52 = v7[3];
      v66 = a3;
      v65 = a3;
      return (a4 >> (v51 % 0xF + 1)) ^ (*((unsigned __int16 *)&v65 + (v6 & 3))
                                      * (a4 ^ *((unsigned __int16 *)&v66 + ((v52 % 3 + (_BYTE)a2 + 1) & 3))));
    case 3:
      v33 = v7[4];
      v34 = v7[3];
      v66 = a3;
      v65 = a3;
      return __ROR4__(a4, v33 % 0xF + 1)
           + *((unsigned __int16 *)&v65 + (v6 & 3))
           * (a4 ^ *((unsigned __int16 *)&v66 + ((v34 % 3 + (_BYTE)a2 + 1) & 3)));
    case 4:
      v48 = v7[4];
      v49 = v7[3];
      v66 = a3;
      v65 = a3;
      return *((unsigned __int16 *)&v65 + (v6 & 3))
           * (a4 ^ *((unsigned __int16 *)&v66 + ((v49 % 3 + (_BYTE)a2 + 1) & 3)))
           - __ROR4__(a4, v48 % 0xF + 1);
    case 5:
      v55 = v7[4];
      v56 = v7[3];
      v66 = a3;
      v65 = a3;
      return __ROR4__(a4, v55 % 0xF + 1) ^ (*((unsigned __int16 *)&v65 + (v6 & 3))
                                          * (a4 ^ *((unsigned __int16 *)&v66 + ((v56 % 3 + (_BYTE)a2 + 1) & 3))));
    case 6:
      v29 = v7[5];
      v30 = v7[4];
      v31 = v7[3];
      v66 = a3;
      v65 = a3;
      return (a4 >> (v29 % 0xF + 1))
           + *((unsigned __int16 *)&v65 + (v6 & 3))
           * __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v31 % 3 + (_BYTE)a2 + 1) & 3)), v30 % 7 + 1);
    case 7:
      v47 = v7[4];
      v17 = v7[5];
      v66 = a3;
      v65 = a3;
      v18 = __ROL4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) ^ a4, v47 % 7 + 1);
      v19 = *((unsigned __int16 *)&v65 + (v6 & 3));
LABEL_10:
      v12 = v19 * v18;
      v13 = a4 >> (v17 % 0xF + 1);
      goto LABEL_4;
    case 8:
      v24 = v7[5];
      v25 = v7[4];
      v26 = v7[3];
      v66 = a3;
      v65 = a3;
      v14 = (a4 >> (v24 % 0xF + 1)) ^ (*((unsigned __int16 *)&v65 + (v6 & 3))
                                     * __ROL4__(
                                         a4 - *((unsigned __int16 *)&v66 + ((v26 % 3 + (_BYTE)a2 + 1) & 3)),
                                         v25 % 7 + 1));
      goto LABEL_5;
    case 9:
      v57 = v7[4];
      v58 = v7[3];
      v21 = v7[5];
      v66 = a3;
      v65 = a3;
      v22 = __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v58 % 3 + (_BYTE)a2 + 1) & 3)), v57 % 7 + 1);
      v23 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v21 % 0x1F + 1) + v23 * v22);
    case 0xA:
      v27 = v7[4];
      v28 = v7[3];
      v9 = v7[5];
      v66 = a3;
      v65 = a3;
      v10 = __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v28 % 3 + (_BYTE)a2 + 1) & 3)), v27 % 7 + 1);
      v11 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_3;
    case 0xB:
      v62 = v7[4];
      v63 = v7[3];
      v38 = v7[5];
      v66 = a3;
      v65 = a3;
      v39 = __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v63 % 3 + (_BYTE)a2 + 1) & 3)), v62 % 7 + 1);
      v40 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_20;
    case 0xC:
      v61 = v7[4];
      v21 = v7[5];
      v66 = a3;
      v65 = a3;
      v22 = __ROR4__(a4 + *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v61 % 0x1F + 1);
      v23 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v21 % 0x1F + 1) + v23 * v22);
    case 0xD:
      v64 = v7[4];
      v21 = v7[5];
      v66 = a3;
      v65 = a3;
      v22 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - a4, v64 % 0x1F + 1);
      v23 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v21 % 0x1F + 1) + v23 * v22);
    case 0xE:
      v20 = v7[4];
      v21 = v7[5];
      v66 = a3;
      v65 = a3;
      v22 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) ^ a4, v20 % 0x1F + 1);
      v23 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v21 % 0x1F + 1) + v23 * v22);
    case 0xF:
      v32 = v7[4];
      v9 = v7[5];
      v66 = a3;
      v65 = a3;
      v10 = __ROR4__(a4 + *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v32 % 0x1F + 1);
      v11 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_3;
    case 0x10:
      v8 = v7[4];
      v9 = v7[5];
      v66 = a3;
      v65 = a3;
      v10 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - a4, v8 % 0x1F + 1);
      v11 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_3;
    case 0x11:
      v46 = v7[4];
      v9 = v7[5];
      v66 = a3;
      v65 = a3;
      v10 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) ^ a4, v46 % 0x1F + 1);
      v11 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_3;
    case 0x12:
    case 0x17:
      v43 = v7[4];
      v38 = v7[5];
      v66 = a3;
      v65 = a3;
      v39 = __ROR4__(a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v43 % 0x1F + 1);
      v40 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_20;
    case 0x13:
      v37 = v7[4];
      v38 = v7[5];
      v66 = a3;
      v65 = a3;
      v39 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - a4, v37 % 0x1F + 1);
      v40 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_20;
    case 0x14:
      v50 = v7[4];
      v38 = v7[5];
      v66 = a3;
      v65 = a3;
      v39 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) ^ a4, v50 % 0x1F + 1);
      v40 = *((unsigned __int16 *)&v65 + (v6 & 3));
LABEL_20:
      v14 = __ROR4__(a4, v38 % 0x1F + 1) ^ (v40 * v39);
      goto LABEL_5;
    case 0x15:
      v44 = v7[4];
      v21 = v7[5];
      v66 = a3;
      v65 = a3;
      v22 = __ROR4__(a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v44 % 0x1F + 1);
      v23 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v21 % 0x1F + 1) + v23 * v22);
    case 0x16:
      v45 = v7[4];
      v9 = v7[5];
      v66 = a3;
      v65 = a3;
      v10 = __ROR4__(a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v45 % 0x1F + 1);
      v11 = *((unsigned __int16 *)&v65 + (v6 & 3));
LABEL_3:
      v12 = v11 * v10;
      v13 = __ROR4__(a4, v9 % 0x1F + 1);
LABEL_4:
      v14 = v12 - v13;
LABEL_5:
      result = v14;
      break;
    case 0x18:
      v59 = v7[4];
      v60 = v7[3];
      v66 = a3;
      v65 = a3;
      result = (*((unsigned __int16 *)&v66 + (v6 & 3)) + __ROR4__(~a4, v60 % 0xF + 1))
             * (unsigned int)*((unsigned __int16 *)&v65 + ((v59 % 3 + (_BYTE)a2 + 1) & 3));
      break;
    case 0x19:
      v41 = v7[4];
      v42 = v7[3];
      v66 = a3;
      v65 = a3;
      result = (__ROR4__(a4, v42 % 0xF + 1) - *((unsigned __int16 *)&v66 + (v6 & 3)))
             * (unsigned int)*((unsigned __int16 *)&v65 + ((v41 % 3 + (_BYTE)a2 + 1) & 3));
      break;
    case 0x1A:
      v53 = v7[4];
      v54 = v7[3];
      v66 = a3;
      v65 = a3;
      result = (*((unsigned __int16 *)&v66 + (v6 & 3)) ^ __ROR4__(a4, v54 % 0xF + 1))
             * (unsigned int)*((unsigned __int16 *)&v65 + ((v53 % 3 + (_BYTE)a2 + 1) & 3));
      break;
    case 0x1B:
      v65 = a3;
      v66 = a3;
      result = *((_DWORD *)&v65 + (((_BYTE)a2 - 1) & 1)) - (*((_DWORD *)&v66 + (v6 & 1)) ^ a4);
      break;
    case 0x1C:
      v65 = a3;
      v66 = a3;
      result = a4 ^ *((_DWORD *)&v66 + (v6 & 1)) ^ *((_DWORD *)&v65 + (((_BYTE)a2 - 1) & 1));
      break;
    case 0x1D:
      v66 = a3;
      v65 = a3;
      result = *((_DWORD *)&v65 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) ^ (a4 - *((unsigned __int16 *)&v66 + (v6 & 3)));
      break;
    case 0x1E:
      v66 = a3;
      v65 = a3;
      result = a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - *((unsigned __int16 *)&v65 + (v6 & 3));
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
