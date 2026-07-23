/*
 * XREFs of MiLogPartitionState @ 0x1402F3958
 * Callers:
 *     MiProcessWorkingSets @ 0x1402F2D10 (MiProcessWorkingSets.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MiLogPartitionState(__int16 *a1)
{
  _UNKNOWN **v1; // rax
  char *v2; // r9
  __int64 v3; // rbx
  _QWORD *v4; // r10
  unsigned int **v5; // r11
  unsigned int *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r9
  int v14; // [rsp+28h] [rbp-E0h]
  int v15; // [rsp+30h] [rbp-D8h]
  unsigned __int16 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v17; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+80h] [rbp-88h] BYREF
  __int64 v25; // [rsp+88h] [rbp-80h] BYREF
  __int64 v26; // [rsp+90h] [rbp-78h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v29[31]; // [rsp+A8h] [rbp-60h] BYREF
  int v30; // [rsp+1A0h] [rbp+98h]
  int v31; // [rsp+1A4h] [rbp+9Ch]
  char v32; // [rsp+1A8h] [rbp+A0h] BYREF
  char v33; // [rsp+1B0h] [rbp+A8h] BYREF
  _UNKNOWN *retaddr; // [rsp+3D0h] [rbp+2C8h] BYREF

  v1 = &retaddr;
  if ( *(_QWORD *)&qword_140E37658 )
  {
    LODWORD(v1) = *((_DWORD *)a1 + 4630);
    v16 = (unsigned __int16)v1;
    if ( (_WORD)v1 )
    {
      v2 = &v33;
      v3 = (unsigned __int16)v1;
      v4 = a1 + 2112;
      v5 = (unsigned int **)(a1 + 9264);
      do
      {
        v6 = *v5++;
        *((_QWORD *)v2 - 1) = *v6;
        *(_QWORD *)v2 = v6[3];
        v2 += 32;
        *((_QWORD *)v2 - 3) = v6[5];
        v1 = (_UNKNOWN **)*v4;
        v4 += 11;
        *((_QWORD *)v2 - 2) = v1;
        --v3;
      }
      while ( v3 );
    }
    v7 = *((_QWORD *)a1 + 2424);
    v8 = *((_QWORD *)a1 + 376);
    v9 = *((_QWORD *)a1 + 360);
    v10 = *((_QWORD *)a1 + 496);
    v11 = *((_QWORD *)a1 + 512);
    v12 = *((_QWORD *)a1 + 2452);
    if ( **(_DWORD **)&qword_140E37658 > 5u )
    {
      if ( (*(_DWORD *)(*(_QWORD *)&qword_140E37658 + 16LL) & 0x800LL) == 0
        || (LOBYTE(v1) = 1,
            (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 0x800LL) != *(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL)) )
      {
        LOBYTE(v1) = 0;
      }
      if ( (_BYTE)v1 )
      {
        v17 = *a1;
        v29[4] = (__int64)&v17;
        v18 = *((_QWORD *)a1 + 2314);
        v29[6] = (__int64)&v18;
        v19 = *((_QWORD *)a1 + 2336);
        v29[8] = (__int64)&v19;
        v29[10] = (__int64)&v20;
        v29[12] = (__int64)&v21;
        v29[14] = (__int64)&v22;
        v29[16] = (__int64)&v23;
        v29[18] = (__int64)&v24;
        v29[20] = (__int64)&v25;
        v26 = *((_QWORD *)a1 + 2344);
        v29[22] = (__int64)&v26;
        v27 = *((_QWORD *)a1 + 2408);
        v29[24] = (__int64)&v27;
        v28 = *((_QWORD *)a1 + 2455);
        v29[26] = (__int64)&v28;
        v29[28] = (__int64)&v16;
        v29[30] = (__int64)&v32;
        v30 = 32 * v16;
        v20 = v7;
        v21 = v12;
        v29[5] = 2LL;
        v29[7] = 8LL;
        v29[9] = 8LL;
        v29[11] = 8LL;
        v29[13] = 8LL;
        v22 = v10;
        v29[15] = 8LL;
        v23 = v11;
        v29[17] = 8LL;
        v24 = v8;
        v29[19] = 8LL;
        v25 = v9;
        v29[21] = 8LL;
        v29[23] = 8LL;
        v29[25] = 8LL;
        v29[27] = 8LL;
        v29[29] = 2LL;
        v31 = 0;
        LOBYTE(v1) = tlgWriteEx_EtwWriteEx(
                       qword_140E37658,
                       (int)&dword_1400573B4,
                       (int)a1,
                       1,
                       v14,
                       v15,
                       0x10u,
                       (__int64)v29);
      }
    }
  }
  return (char)v1;
}
