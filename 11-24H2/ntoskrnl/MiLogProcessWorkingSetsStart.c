/*
 * XREFs of MiLogProcessWorkingSetsStart @ 0x1402F3A90
 * Callers:
 *     MiProcessWorkingSets @ 0x1402F2D10 (MiProcessWorkingSets.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiLogProcessWorkingSetsStart(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r11
  __int64 v5; // rdi
  int v7; // eax
  int v8; // [rsp+20h] [rbp-E0h]
  int v9; // [rsp+28h] [rbp-D8h]
  char v10; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v11; // [rsp+44h] [rbp-BCh] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+4Ch] [rbp-B4h] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20[5]; // [rsp+80h] [rbp-80h] BYREF
  int v21; // [rsp+A8h] [rbp-58h]
  int v22; // [rsp+ACh] [rbp-54h]
  char *v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp-48h]
  int v25; // [rsp+BCh] [rbp-44h]
  __int16 *v26; // [rsp+C0h] [rbp-40h]
  int v27; // [rsp+C8h] [rbp-38h]
  int v28; // [rsp+CCh] [rbp-34h]
  int *v29; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  int v31; // [rsp+DCh] [rbp-24h]
  int *v32; // [rsp+E0h] [rbp-20h]
  int v33; // [rsp+E8h] [rbp-18h]
  int v34; // [rsp+ECh] [rbp-14h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]
  __int64 *v38; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+108h] [rbp+8h]
  int v40; // [rsp+10Ch] [rbp+Ch]
  __int64 *v41; // [rsp+110h] [rbp+10h]
  int v42; // [rsp+118h] [rbp+18h]
  int v43; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v44; // [rsp+120h] [rbp+20h]
  int v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v47; // [rsp+130h] [rbp+30h]
  int v48; // [rsp+138h] [rbp+38h]
  int v49; // [rsp+13Ch] [rbp+3Ch]

  if ( *(_QWORD *)&qword_140E37658 )
  {
    v3 = a1[2424];
    v4 = a1[2200];
    v5 = a1[2452];
    if ( **(_DWORD **)&qword_140E37658 > 5u
      && (*(_BYTE *)(*(_QWORD *)&qword_140E37658 + 16LL) & 1) != 0
      && (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 1LL) == *(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) )
    {
      v7 = *(unsigned __int16 *)a1;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v49 = 0;
      v12 = v7;
      v20[4] = (__int64)&v12;
      v10 = *(_BYTE *)(a2 + 2);
      v23 = &v10;
      v11 = *(_WORD *)(v4 + 274);
      v26 = &v11;
      v29 = &v13;
      v14 = *(unsigned __int8 *)(a2 + 4);
      v32 = &v14;
      v15 = *(_QWORD *)(a2 + 80);
      v35 = &v15;
      v16 = *(_QWORD *)(a2 + 72);
      v38 = &v16;
      v17 = a1[2336];
      v41 = &v17;
      v21 = 4;
      v30 = 4;
      v33 = 4;
      v44 = &v18;
      v47 = &v19;
      v36 = 8;
      v39 = 8;
      v42 = 8;
      v45 = 8;
      v48 = 8;
      v24 = 1;
      v27 = 2;
      v13 = a3;
      v18 = v3;
      v19 = v5;
      tlgWriteEx_EtwWriteEx(qword_140E37658, (int)&unk_140057200, a3, 1, v8, v9, 0xCu, (__int64)v20);
    }
  }
}
