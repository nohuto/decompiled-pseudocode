/*
 * XREFs of MiLogWsAging @ 0x14020F50C
 * Callers:
 *     MiAgeWorkingSet @ 0x14020F2A0 (MiAgeWorkingSet.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiLogWsAging(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  char v7; // al
  char v8; // al
  int v9; // r10d
  __int64 v10; // r11
  __int64 v11; // r9
  int v12; // r8d
  int v13; // [rsp+20h] [rbp-E0h]
  int v14; // [rsp+28h] [rbp-D8h]
  char v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27[6]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v28[16]; // [rsp+C0h] [rbp-40h] BYREF
  int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  __int64 *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  __int64 *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  __int64 *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  __int64 *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  __int64 *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  __int64 *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  __int64 *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  int *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  int *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  __int64 v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  int *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]

  if ( *(_QWORD *)&qword_140E37658 )
  {
    v4 = *(_QWORD *)(a1 + 144);
    v5 = *(_QWORD *)(a1 + 152);
    v6 = (*(_DWORD *)(a1 + 184) & 0xF) != 0 ? 0LL : a1 - 200;
    if ( **(_DWORD **)&qword_140E37658 > 5u )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&qword_140E37658 + 16LL) & 1) == 0
        || (v7 = 1,
            (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 1LL) != *(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL)) )
      {
        v7 = 0;
      }
      if ( v7 )
      {
        v8 = *(_DWORD *)(a1 + 184) & 0xF;
        v27[5] = 1LL;
        v15 = v8;
        v27[4] = (__int64)&v15;
        tlgCreate1Sz_char(v28, v6);
        v16 = v9;
        v29 = &v16;
        v30 = 4LL;
        v31 = &v20;
        v20 = v4;
        v33 = &v21;
        v22 = *(_QWORD *)(v10 + 40);
        v35 = &v22;
        v23 = *(_QWORD *)(v10 + 16);
        v37 = &v23;
        v24 = *(_QWORD *)(v10 + 32);
        v39 = &v24;
        v25 = *(_QWORD *)(v10 + 24);
        v41 = &v25;
        v26 = *(_QWORD *)(v10 + 48);
        v43 = &v26;
        v45 = &v17;
        v18 = *(_DWORD *)(v10 + 12);
        v47 = &v18;
        v49 = v11 + 40;
        v19 = *(unsigned __int16 *)(v11 + 174);
        v51 = &v19;
        v32 = 8LL;
        v21 = v5;
        v34 = 8LL;
        v36 = 8LL;
        v38 = 8LL;
        v40 = 8LL;
        v42 = 8LL;
        v44 = 8LL;
        v17 = a3;
        v46 = 4LL;
        v48 = 4LL;
        v50 = 64LL;
        v52 = 4LL;
        tlgWriteEx_EtwWriteEx(v12, (int)&byte_14005704B, v12, 1, v13, v14, 0x10u, (__int64)v27);
      }
    }
  }
}
