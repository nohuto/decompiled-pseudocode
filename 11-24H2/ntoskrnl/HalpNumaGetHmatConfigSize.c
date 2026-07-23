/*
 * XREFs of HalpNumaGetHmatConfigSize @ 0x140555730
 * Callers:
 *     HalpNumaParseHmat @ 0x140C142A0 (HalpNumaParseHmat.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     HalpNumaCalculateSllbiSize @ 0x1405556C0 (HalpNumaCalculateSllbiSize.c)
 *     HalpNumaQueryProximityNode @ 0x140555C90 (HalpNumaQueryProximityNode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HalpVerifyHmatEntryValidity @ 0x140C14960 (HalpVerifyHmatEntryValidity.c)
 */

__int64 __fastcall HalpNumaGetHmatConfigSize(__int64 a1, _DWORD *a2, _DWORD *a3, int *a4, _DWORD *a5)
{
  unsigned __int64 v5; // r15
  int v6; // r14d
  int v7; // r13d
  unsigned __int64 v8; // rcx
  int v9; // edx
  int v10; // edi
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // r15
  __int64 i; // rsi
  unsigned int v16; // r14d
  __int64 j; // rsi
  unsigned int v18; // ebx
  _BYTE v20[4]; // [rsp+30h] [rbp-91h] BYREF
  int v21; // [rsp+34h] [rbp-8Dh]
  int v22; // [rsp+38h] [rbp-89h] BYREF
  int v23; // [rsp+3Ch] [rbp-85h] BYREF
  __int64 v24; // [rsp+40h] [rbp-81h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-79h]
  _DWORD *v26; // [rsp+50h] [rbp-71h]
  _DWORD *v27; // [rsp+58h] [rbp-69h]
  int *v28; // [rsp+60h] [rbp-61h]
  _DWORD *v29; // [rsp+68h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+70h] [rbp-51h] BYREF
  int *v31; // [rsp+90h] [rbp-31h]
  int v32; // [rsp+98h] [rbp-29h]
  int v33; // [rsp+9Ch] [rbp-25h]
  int *v34; // [rsp+A0h] [rbp-21h]
  int v35; // [rsp+A8h] [rbp-19h]
  int v36; // [rsp+ACh] [rbp-15h]
  __int64 *v37; // [rsp+B0h] [rbp-11h]
  int v38; // [rsp+B8h] [rbp-9h]
  int v39; // [rsp+BCh] [rbp-5h]

  v22 = 0;
  v5 = a1;
  v24 = a1;
  v6 = 0;
  v7 = 0;
  v8 = a1 + *(unsigned int *)(a1 + 4);
  v26 = a2;
  v9 = 0;
  v27 = a3;
  v28 = a4;
  v29 = a5;
  v21 = 0;
  v10 = 1;
  v23 = 0;
  v25 = v8;
  if ( v8 > v5 )
  {
    v11 = v5 + 40;
    while ( 1 )
    {
      if ( v11 + 8 > v8
        || (v12 = *(unsigned int *)(v11 + 4), (unsigned int)v12 < 8)
        || (v13 = v11 + v12, v11 + v12 > v8) )
      {
        v18 = 0;
        *v26 = v7;
        *v27 = v9;
        *v28 = v6;
        *v29 = v7 + v6 + v9 + 24;
        return v18;
      }
      if ( !(unsigned __int8)HalpVerifyHmatEntryValidity(v11) )
      {
        v10 = 2;
        break;
      }
      if ( *(_BYTE *)(v5 + 8) >= 2u || *(_WORD *)v11 > 1u )
      {
        if ( *(_WORD *)v11 )
        {
          if ( *(_WORD *)v11 == 1 )
          {
            if ( (*(_BYTE *)(v11 + 8) & 0xFu) > 3 )
            {
              v10 = 6;
            }
            else if ( *(_BYTE *)(v11 + 9) > 5u )
            {
              v10 = 7;
            }
            else
            {
              v14 = *(unsigned int *)(v11 + 12);
              for ( i = 0LL; (unsigned int)i < (unsigned int)v14; i = (unsigned int)(i + 1) )
              {
                if ( (int)HalpNumaQueryProximityNode(*(unsigned int *)(v11 + 4 * i + 32), v20) < 0 )
                  goto LABEL_36;
              }
              v16 = *(_DWORD *)(v11 + 16);
              for ( j = 0LL; (unsigned int)j < v16; j = (unsigned int)(j + 1) )
              {
                if ( (int)HalpNumaQueryProximityNode(*(unsigned int *)(v11 + 4 * v14 + 4 * j + 32), v20) < 0 )
                {
                  v10 = 3;
                  goto LABEL_43;
                }
              }
              if ( v16 > 0xFFFF || (unsigned int)v14 > 0xFFFF )
              {
                v10 = 4;
              }
              else
              {
                if ( (int)HalpNumaCalculateSllbiSize(v14, v16, &v22) >= 0 )
                {
                  v9 = v22 + v21;
                  v6 = v23;
                  v5 = v24;
                  v21 += v22;
                  goto LABEL_35;
                }
                v10 = 5;
              }
            }
            break;
          }
          if ( *(_WORD *)v11 == 2 )
          {
            if ( (int)HalpNumaQueryProximityNode(*(unsigned int *)(v11 + 8), v20) < 0 )
              goto LABEL_36;
            v6 += 40;
            v23 = v6;
          }
        }
        else
        {
          if ( (int)HalpNumaQueryProximityNode(*(unsigned int *)(v11 + 16), v20) < 0
            || (*(_BYTE *)(v11 + 8) & 1) != 0 && (int)HalpNumaQueryProximityNode(*(unsigned int *)(v11 + 12), v20) < 0 )
          {
LABEL_36:
            v10 = 3;
            break;
          }
          v7 += 12;
        }
        v9 = v21;
LABEL_35:
        v11 += *(unsigned int *)(v11 + 4);
      }
      else
      {
        v9 = v21;
        v11 = v13;
      }
      v8 = v25;
    }
  }
LABEL_43:
  v18 = -1072431089;
  if ( (unsigned int)dword_140E03B08 > 5 && tlgKeywordOn((__int64)&dword_140E03B08, 0x400000000000LL) )
  {
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v31 = &v23;
    v23 = -1072431089;
    v34 = &v22;
    v32 = 4;
    v37 = &v24;
    v22 = v10;
    v35 = 4;
    v24 = 0x1000000LL;
    v38 = 8;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E03B08,
      (unsigned __int8 *)&dword_1400432BC,
      0LL,
      0LL,
      5u,
      &v30);
  }
  return v18;
}
