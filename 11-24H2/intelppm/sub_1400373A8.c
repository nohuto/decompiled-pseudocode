/*
 * XREFs of sub_1400373A8 @ 0x1400373A8
 * Callers:
 *     sub_140030F50 @ 0x140030F50 (sub_140030F50.c)
 *     sub_140038B50 @ 0x140038B50 (sub_140038B50.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140004B88 @ 0x140004B88 (sub_140004B88.c)
 *     sub_1400053CC @ 0x1400053CC (sub_1400053CC.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140028658 @ 0x140028658 (sub_140028658.c)
 *     sub_1400299E0 @ 0x1400299E0 (sub_1400299E0.c)
 *     sub_140029E40 @ 0x140029E40 (sub_140029E40.c)
 *     sub_1400356E0 @ 0x1400356E0 (sub_1400356E0.c)
 *     sub_1400458DC @ 0x1400458DC (sub_1400458DC.c)
 *     sub_140045D48 @ 0x140045D48 (sub_140045D48.c)
 *     sub_140046FD0 @ 0x140046FD0 (sub_140046FD0.c)
 */

__int64 __fastcall sub_1400373A8(__int64 a1, int (__fastcall *a2)(__int64))
{
  int v3; // ecx
  __int64 v4; // rbx
  unsigned int *v5; // r15
  __int64 v6; // rax
  _QWORD *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  unsigned int v10; // edi
  char *v11; // r13
  int v12; // eax
  bool v13; // zf
  void *v14; // rax
  __int64 v15; // r13
  __int64 v16; // rcx
  _DWORD *v17; // r15
  __int64 v18; // r8
  __int64 v19; // rcx
  _DWORD *v20; // r15
  int v21; // r9d
  int v22; // edx
  unsigned int v23; // r11d
  __int64 v24; // rdx
  unsigned int v25; // r10d
  int v26; // r13d
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // ecx
  unsigned int v30; // kr00_4
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // edx
  unsigned int i; // r8d
  unsigned int v35; // r8d
  unsigned __int8 v36; // cl
  __int64 v37; // rax
  __int64 v38; // rcx
  void *v39; // rax
  __int64 v40; // r8
  _QWORD *v41; // r15
  char *v42; // r14
  int v43; // r13d
  __int64 v44; // r12
  unsigned int v45; // eax
  int v47; // [rsp+30h] [rbp-48h]
  __int64 v48; // [rsp+38h] [rbp-40h] BYREF
  PVOID P; // [rsp+40h] [rbp-38h]
  __int64 Pool2; // [rsp+48h] [rbp-30h]
  _OWORD v51[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v52; // [rsp+C0h] [rbp+48h] BYREF
  int (__fastcall *v53)(__int64); // [rsp+C8h] [rbp+50h]
  __int64 v54; // [rsp+D0h] [rbp+58h]
  int v55; // [rsp+D8h] [rbp+60h]

  v53 = a2;
  v48 = 0LL;
  LODWORD(v52) = 0;
  v3 = 0;
  P = 0LL;
  LODWORD(v54) = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 280);
  v7 = 0LL;
  v8 = 0;
  memset(v51, 0, sizeof(v51));
  if ( (v6 & 0x70000000) != 0 )
  {
    if ( (v6 & 0x40000000) != 0 )
      v5 = *(unsigned int **)(a1 + 456);
    else
      v5 = *(unsigned int **)(a1 + 448);
    v8 = *v5;
  }
  if ( (v6 & 0x3300000) != 0 )
  {
    v3 = **(_DWORD **)(a1 + 504);
    LODWORD(v54) = v3;
  }
  v9 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
  v55 = sub_140045D48(a1, v51, &v52);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(592 * v55), 1919119952LL);
  v11 = (char *)Pool2;
  if ( Pool2
    && (P = (PVOID)ExAllocatePool2(64LL, 32 * v9, 1919119952LL)) != 0LL
    && (v7 = (_QWORD *)ExAllocatePool2(64LL, 80LL, 1919119952LL)) != 0LL
    && (v4 = sub_1400299E0(a1, v55, 1)) != 0 )
  {
    v12 = v52;
    *(_DWORD *)(v4 + 24) = 100;
    *(_QWORD *)(v4 + 464) = sub_1400027E0;
    *(_WORD *)(v4 + 4) = v12;
    *(_WORD *)(v4 + 6) = 257;
    *(_BYTE *)(v4 + 52) = 0;
    v47 = v12;
    if ( dword_140019A60 == 1 || v12 == 252 || (v13 = v12 == 1, v14 = sub_14000E330, v13) )
      v14 = sub_14000E410;
    *(_QWORD *)(v4 + 472) = v14;
    *(_QWORD *)(v4 + 448) = sub_140002920;
    v7[7] = P;
    *(_QWORD *)(v4 + 56) = 0LL;
    *(_QWORD *)(v4 + 64) = 100LL;
    if ( v8 && v5 )
    {
      *(_QWORD *)(v4 + 392) = *(_QWORD *)(a1 + 352);
      *(_QWORD *)(v4 + 400) = *(_QWORD *)(a1 + 360);
      *(_DWORD *)(v4 + 20) = v5[2];
      v15 = v8;
      LODWORD(v52) = v5[12 * v8 - 9];
      *v7 = *(_QWORD *)(a1 + 296);
      v7[4] = *(_QWORD *)(a1 + 328);
      v7[3] = *(_QWORD *)(a1 + 312);
      v7[5] = a1 + 424;
      *(_QWORD *)(v4 + 64) = v5[2];
      v16 = 0LL;
      *(_QWORD *)(v4 + 56) = v5[12 * v8 - 10];
      v17 = v5 + 3;
      do
      {
        v18 = v7[7];
        *(_DWORD *)(v16 + v18 + 16) = *(v17 - 1);
        *(_BYTE *)(v16 + v18 + 24) = (unsigned int)(100 * *(v17 - 1)) / *(_DWORD *)(v4 + 20);
        *(_QWORD *)(v16 + v18) = *(_QWORD *)(v17 + 3);
        *(_DWORD *)(v16 + v18 + 20) = *v17;
        *(_QWORD *)(v16 + v18 + 8) = *(_QWORD *)(v17 + 5);
        *(_BYTE *)(v16 + v18 + 25) = 1;
        *(_WORD *)(v16 + v18 + 26) = *((_WORD *)v17 + 2);
        if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
        {
          *(_QWORD *)(v16 + v18 + 8) = 0LL;
          *(_QWORD *)(v16 + v18) = v17 - 1;
        }
        v17 += 12;
        v16 += 32LL;
        --v15;
      }
      while ( v15 );
      v19 = v7[7];
      v20 = (_DWORD *)(v4 + 20);
      v11 = (char *)Pool2;
      v21 = *(_DWORD *)(32LL * (v8 - 1) + v19 + 16);
LABEL_31:
      v23 = v54;
      v24 = v19;
      if ( (_DWORD)v54 )
      {
        v25 = 0;
        v26 = v52;
        v27 = 0LL;
        v7[1] = *(_QWORD *)(a1 + 304);
        v7[2] = *(_QWORD *)(a1 + 320);
        v7[6] = a1 + 480;
        do
        {
          v28 = *(_QWORD *)(a1 + 504);
          v54 = v7[7] + 32LL * (v8 + v25);
          v29 = *(_DWORD *)(v27 + v28 + 4) * v21;
          v52 = v28;
          v30 = v29;
          v31 = v54;
          *(_DWORD *)(v54 + 16) = v30 / 0x64;
          v32 = v52;
          *(_BYTE *)(v31 + 24) = 100 * (v30 / 0x64) / *v20;
          *(_QWORD *)v31 = *(unsigned int *)(v27 + v32 + 16);
          *(_QWORD *)(v31 + 8) = *(unsigned int *)(v27 + v32 + 20);
          *(_BYTE *)(v31 + 25) = 2;
          *(_WORD *)(v31 + 26) = *(_WORD *)(v27 + v32 + 12);
          v33 = *(_DWORD *)(v27 + v32 + 8);
          if ( !v33 )
          {
            v31 = v54;
            v33 = *(_DWORD *)(v27 + v52 + 4) * v26 / 0x64u;
          }
          ++v25;
          *(_DWORD *)(v31 + 20) = v33;
          v27 += 20LL;
        }
        while ( v25 < v23 );
        v19 = v7[7];
        v11 = (char *)Pool2;
        v24 = v19;
      }
      for ( i = 1; i < v9; ++i )
      {
        v19 = v24;
        if ( !*(_BYTE *)(32LL * i + v24 + 24) )
        {
          v9 = i;
          break;
        }
      }
      *((_DWORD *)v7 + 16) = v9;
      v35 = v9 - 1;
      if ( v9 <= v8 )
      {
        *((_DWORD *)v7 + 18) = 0;
        *((_DWORD *)v7 + 17) = v9;
        v36 = *(_BYTE *)(32LL * v35 + v19 + 24);
      }
      else
      {
        *((_DWORD *)v7 + 17) = v8;
        *((_DWORD *)v7 + 18) = v9 - v8;
        v36 = *(_BYTE *)(32LL * v8 + v24 + 24);
      }
      *(_DWORD *)(v4 + 28) = v36;
      *(_DWORD *)(v4 + 32) = *(unsigned __int8 *)(32LL * v35 + v7[7] + 24);
      v37 = *(_QWORD *)(a1 + 344);
      if ( v37 )
        *(_QWORD *)(v4 + 376) = v37;
      v38 = *(_QWORD *)(v4 + 560);
      *(_DWORD *)(v38 + 12) = 0;
      if ( *(_QWORD *)(a1 + 336) )
      {
        v39 = sub_140002410;
        v40 = 0x10000LL;
        if ( !_bittest64((const signed __int64 *)(a1 + 280), 0x27u) )
          v39 = sub_140004B10;
        LOBYTE(v24) = 1;
      }
      else
      {
        LOBYTE(v24) = 0;
        v39 = sub_14000E4E0;
        v40 = 100LL;
      }
      *(_QWORD *)v38 = v39;
      *(_BYTE *)(v38 + 16) = v24;
      *(_BYTE *)(v38 + 17) = v24;
      *(_DWORD *)(v38 + 8) = v40;
      sub_140029E40(v4, v24, v40);
      v41 = *(_QWORD **)(v4 + 576);
      v52 = *(_QWORD *)(v4 + 568);
      sub_1400053CC((__int64 *)v51);
      if ( !(unsigned int)sub_140004B88((__int64 *)v51, &v48) )
      {
        v42 = v11 + 44;
        v43 = v52;
        do
        {
          v44 = v48;
          v45 = sub_1400458DC(v7, *(unsigned int *)(v48 + 464), *(unsigned int *)(v48 + 512));
          sub_140046FD0(v44, (_DWORD)v42 - 44, v43, v45, v45 < 0x64 ? 2 : 0);
          *(_QWORD *)(a1 + 216) = v42 - 44;
          *(_QWORD *)(v42 + 12) = v7;
          *(_DWORD *)v42 = 100;
          if ( *(_QWORD *)(a1 + 336) )
          {
            *v41 = v42 + 20;
            *((_DWORD *)v42 + 21) = sub_1400356E0(v44);
            *(_QWORD *)(v42 + 68) = *(_QWORD *)(a1 + 336);
          }
          else
          {
            *v41 = v42 - 44;
          }
          ++v41;
          v42 += 592;
          v43 += 32;
        }
        while ( !(unsigned int)sub_140004B88((__int64 *)v51, &v48) );
        v11 = (char *)Pool2;
      }
      if ( (*(_DWORD *)(a1 + 280) & 0x400000) != 0 && (v47 == 254 || v55 == 1) )
      {
        *(_WORD *)(v4 + 11) = 257;
        *(_DWORD *)(v4 + 48) = 1000;
      }
      if ( v53(v4) >= 0 )
      {
        sub_1400053CC((__int64 *)v51);
        while ( !(unsigned int)sub_140004B88((__int64 *)v51, &v48) )
        {
          *(_QWORD *)(v48 + 224) = v11;
          v11 += 592;
        }
        v7 = 0LL;
        P = 0LL;
        v11 = 0LL;
      }
      v10 = 0;
      goto LABEL_69;
    }
    v20 = (_DWORD *)(v4 + 20);
    *(_DWORD *)(v4 + 20) = 0;
    sub_140028658(
      (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
      (__int64)L"~MHz",
      (_DWORD *)(v4 + 20));
    v21 = *(_DWORD *)(v4 + 20);
    if ( v21 )
    {
      v19 = v7[7];
      LODWORD(v52) = 1000 * v21;
      goto LABEL_31;
    }
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v22) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v22, 3, 28, (__int64)&unk_140014AD0);
    }
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCFFFFFFuLL;
    v10 = -1073741823;
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_69:
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  if ( v4 )
    ExFreePoolWithTag((PVOID)v4, 0x72637250u);
  if ( P )
    ExFreePoolWithTag(P, 0x72637250u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x72637250u);
  return v10;
}
