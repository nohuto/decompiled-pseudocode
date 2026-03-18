/*
 * XREFs of AdjustSrcDevGamma @ 0x14013DA50
 * Callers:
 *     pDCIAdjClr @ 0x14013CA6C (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x14013E82C (MulFD6.c)
 *     RaisePower @ 0x14013E960 (RaisePower.c)
 *     DivFD6 @ 0x14013ED98 (DivFD6.c)
 *     Log @ 0x14013F0BC (Log.c)
 */

__int64 __fastcall AdjustSrcDevGamma(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int8 a4, char a5)
{
  int v7; // r14d
  int v9; // r12d
  unsigned int v10; // eax
  unsigned int v11; // r15d
  unsigned int v12; // esi
  unsigned int v13; // r14d
  unsigned int v14; // edi
  unsigned int v15; // r13d
  int v16; // edx
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // xmm0_8
  int v23; // r13d
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // [rsp+28h] [rbp-28h]
  __int64 v33; // [rsp+38h] [rbp-18h]
  unsigned int v34; // [rsp+98h] [rbp+48h]
  unsigned int v35; // [rsp+A0h] [rbp+50h]
  unsigned int v36; // [rsp+A0h] [rbp+50h]
  unsigned int v38; // [rsp+B0h] [rbp+60h]

  v7 = a4;
  v9 = 0;
  LODWORD(v33) = DivFD6(a3[3], 10000LL);
  HIDWORD(v33) = DivFD6(a3[4], 10000LL);
  v10 = DivFD6(a3[5], 10000LL);
  *(_DWORD *)a2 &= ~0x1000u;
  v11 = 1;
  v34 = 1000000;
  v12 = 1000000;
  v35 = v10;
  if ( (a5 & 8) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
    {
      switch ( v7 )
      {
        case 1:
        case 2:
          goto LABEL_30;
        case 5:
        case 6:
        case 252:
        case 253:
          v13 = 1000000;
          v14 = 1000000;
          v32 = 4294967297000000LL;
          v15 = 1000000;
          goto LABEL_8;
        case 254:
          v13 = 1025000;
          goto LABEL_31;
        case 255:
LABEL_30:
          v13 = 1325000;
          a3[6] += 550;
          a3[7] -= 300;
LABEL_31:
          LODWORD(v32) = v13;
          v12 = v13;
          HIDWORD(v32) = v13;
          v14 = v13;
          v15 = 1000000;
          goto LABEL_8;
      }
      return 0LL;
    }
    v18 = RaisePower(1050000LL, (unsigned int)*(unsigned __int8 *)(a1 + 34) - 3, 2LL);
    v19 = MulFD6(932500LL, v18);
    v22 = *(_QWORD *)(a1 + 144);
    v23 = *(_DWORD *)a2 | 0x1000;
    v13 = *(_DWORD *)(a1 + 152);
    *(_DWORD *)a2 = v23;
    v38 = v19;
    v24 = *(unsigned __int8 *)(a1 + 161);
    v32 = v22;
    if ( (unsigned __int8)v24 <= 0xFu )
    {
      v12 = 25000 * ((v24 >> 1) + 41);
      if ( a4 == 1 )
        v12 = MulFD6(v12, 1125000LL);
    }
    v25 = *(_DWORD *)(a1 + 192);
    if ( v25 <= 1000000 )
    {
      if ( v25 >= 1000000 )
      {
LABEL_48:
        if ( a4 != 1 && a4 != 2 )
        {
          switch ( a4 )
          {
            case 5u:
            case 6u:
            case 0xFCu:
            case 0xFDu:
              if ( (*(_DWORD *)(a1 + 184) & 0x400) == 0 )
              {
                v31 = 1000000;
                *(_DWORD *)a2 = v23 & 0xFFFFEFFF;
                goto LABEL_57;
              }
              break;
            case 0xFEu:
              if ( (*(_DWORD *)(a1 + 184) & 0x300) == 0x100 )
              {
                v31 = DivFD6(v38, 932500LL);
                v34 = 1000000;
                goto LABEL_57;
              }
              break;
            case 0xFFu:
              break;
            default:
              return 0LL;
          }
        }
        v31 = v38;
LABEL_57:
        v14 = HIDWORD(v22);
        v15 = MulFD6(v12, v31);
        v12 = v22;
LABEL_8:
        LODWORD(v33) = MulFD6((unsigned int)v33, v15);
        HIDWORD(v33) = MulFD6(HIDWORD(v33), v15);
        v10 = MulFD6(v35, v15);
        v36 = v10;
        if ( v34 != 1000000 )
        {
          LODWORD(v32) = MulFD6(v12, v34);
          v12 = v32;
          HIDWORD(v32) = MulFD6(v14, v34);
          v14 = HIDWORD(v32);
          v13 = MulFD6(v13, v34);
          v10 = v36;
        }
        goto LABEL_10;
      }
      LODWORD(v20) = (unsigned __int64)(1431655766LL * v25) >> 32;
      v30 = (unsigned int)Log((unsigned int)(v25 / 3), v20, v21);
      v29 = 4294490175LL;
    }
    else
    {
      v26 = DivFD6(333333LL, (unsigned int)v25);
      v29 = (unsigned int)Log(v26, v27, v28);
      v30 = 4294490175LL;
    }
    v34 = DivFD6(v30, v29);
    goto LABEL_48;
  }
  v9 = 1;
  v13 = 1000000;
  v32 = 4294967297000000LL;
  v14 = 1000000;
LABEL_10:
  if ( (_DWORD)v33 != 1000000 || __PAIR64__(HIDWORD(v33), 1000000) != (v10 | 0xF424000000000LL) )
    v9 |= 2u;
  if ( (_DWORD)v33 == *(_DWORD *)(a2 + 4) && __PAIR64__(v10, HIDWORD(v33)) == *(_QWORD *)(a2 + 8) )
  {
    v16 = 0;
  }
  else
  {
    v16 = 1;
    *(_QWORD *)(a2 + 4) = v33;
    *(_DWORD *)(a2 + 12) = v10;
  }
  if ( v12 != 1000000 || v14 != 1000000 || v13 != 1000000 )
    v9 |= 4u;
  if ( v12 != *(_DWORD *)(a2 + 16) || v14 != *(_DWORD *)(a2 + 20) || v13 != *(_DWORD *)(a2 + 24) )
  {
    v16 = 1;
    *(_QWORD *)(a2 + 16) = v32;
    *(_DWORD *)(a2 + 24) = v13;
  }
  if ( (*(_DWORD *)a2 & 7) != v9 || (v11 = v16) != 0 )
    *(_DWORD *)a2 = v9 | *(_DWORD *)a2 & 0xFFFFFFF8;
  return v11;
}
