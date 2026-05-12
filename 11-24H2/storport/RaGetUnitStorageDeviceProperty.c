/*
 * XREFs of RaGetUnitStorageDeviceProperty @ 0x1401B4A30
 * Callers:
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1401B48A0 (RaUnitStorageQueryDevicePropertyIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaGetUnitStorageDeviceProperty(__int64 a1, void *a2, unsigned int *a3)
{
  __int64 v3; // r14
  unsigned int v7; // ebx
  unsigned __int8 v8; // cl
  bool v9; // al
  __int64 v10; // rax
  __int128 v11; // xmm0
  bool v12; // zf
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _OWORD *v18; // rdx
  __int128 *v19; // rdx
  __int128 v20; // xmm0
  int v21; // eax
  size_t v22; // r8
  unsigned int v23; // edx
  signed int v24; // ecx
  __int64 i; // rax
  char v26; // dl
  __int64 result; // rax
  _DWORD *v28; // rax
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int64 v31; // rax
  __int128 v32; // xmm1
  __int64 v33; // r14
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm0
  _OWORD *v43; // rdx
  __int64 v44; // rax
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  _DWORD Src[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v52; // [rsp+28h] [rbp-D8h]
  int v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+34h] [rbp-CCh]
  int v55; // [rsp+38h] [rbp-C8h]
  int v56; // [rsp+3Ch] [rbp-C4h]
  _BYTE v57[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v58[49]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v59[25]; // [rsp+79h] [rbp-87h] BYREF
  _BYTE v60[261]; // [rsp+ABh] [rbp-55h] BYREF

  v3 = *(_QWORD *)(a1 + 112);
  v52 = 0LL;
  memset_0(v57, 0, 0x16CuLL);
  v7 = *a3;
  Src[0] = 40;
  Src[1] = 396;
  if ( v7 > 0x18C )
    v7 = 396;
  if ( (*(_BYTE *)(a1 + 136) & 4) != 0 )
  {
    LODWORD(v52) = 0x1000000;
  }
  else if ( v3 )
  {
    v8 = *(_BYTE *)(v3 + 1);
    LOBYTE(v52) = *(_BYTE *)v3 & 0x1F;
    BYTE1(v52) = v8 & 0x7F;
    v9 = (*(_BYTE *)(v3 + 7) & 2) != 0;
    BYTE2(v52) = v8 >> 7;
    BYTE3(v52) = v9;
  }
  v56 = *(_DWORD *)(a1 + 3432);
  v10 = *(_QWORD *)(a1 + 160);
  if ( v10 )
  {
    if ( *(_BYTE *)(v10 + 8) )
    {
      v11 = *(_OWORD *)(v10 + 8);
      HIDWORD(v52) = 40;
      *(_OWORD *)v58 = v11;
    }
    v12 = *(_WORD *)(a1 + 122) == 0;
    v13 = *(_OWORD *)(v10 + 25);
    v53 = 57;
    v14 = *(_OWORD *)(v10 + 41);
    v54 = 122;
    *(_OWORD *)&v58[17] = v13;
    v15 = *(_OWORD *)(v10 + 57);
    *(_OWORD *)&v58[33] = v14;
    v16 = *(_OWORD *)(v10 + 73);
    *(_OWORD *)v59 = v15;
    v17 = *(_OWORD *)(v10 + 90);
    *(_OWORD *)&v59[8] = v16;
    *(_OWORD *)((char *)&v59[16] + 1) = v17;
    if ( !v12 )
    {
      v55 = 139;
      memset_0(v60, 0, 0x100uLL);
      v18 = *(_OWORD **)(a1 + 128);
      if ( *(_WORD *)(a1 + 120) <= 0x100u )
      {
        memmove(v60, v18, *(unsigned __int16 *)(a1 + 120));
        goto LABEL_24;
      }
      v34 = v60;
LABEL_37:
      v35 = v34 + 128;
      v36 = v18[1];
      *((_OWORD *)v35 - 8) = *v18;
      v37 = v18[2];
      *((_OWORD *)v35 - 7) = v36;
      v38 = v18[3];
      *((_OWORD *)v35 - 6) = v37;
      v39 = v18[4];
      *((_OWORD *)v35 - 5) = v38;
      v40 = v18[5];
      *((_OWORD *)v35 - 4) = v39;
      v41 = v18[6];
      *((_OWORD *)v35 - 3) = v40;
      *((_OWORD *)v35 - 2) = v41;
      v42 = v18[7];
      v43 = v18 + 8;
      *((_OWORD *)v35 - 1) = v42;
      v44 = *((_QWORD *)v43 + 14);
      v45 = v43[1];
      *(_OWORD *)v35 = *v43;
      v46 = v43[2];
      *((_OWORD *)v35 + 1) = v45;
      v47 = v43[3];
      *((_OWORD *)v35 + 2) = v46;
      v48 = v43[4];
      *((_OWORD *)v35 + 3) = v47;
      v49 = v43[5];
      *((_OWORD *)v35 + 4) = v48;
      v50 = v43[6];
      *((_OWORD *)v35 + 5) = v49;
      *((_OWORD *)v35 + 6) = v50;
      *((_QWORD *)v35 + 14) = v44;
      *((_DWORD *)v35 + 30) = *((_DWORD *)v43 + 30);
      *((_WORD *)v35 + 62) = *((_WORD *)v43 + 62);
      v35[126] = *((_BYTE *)v43 + 126);
      v60[187] = 0;
      goto LABEL_24;
    }
    goto LABEL_14;
  }
  v19 = *(__int128 **)(a1 + 152);
  if ( !v19
    || ((v28 = *(_DWORD **)(a1 + 24), *v28 != 1094997074)
      ? (*v28 != 1314275652
       ? (v29 = 232LL)
       : (v29 = (__int64)(v28 + 100)))
      : (v29 = (__int64)(v28 + 152)),
        (*(_DWORD *)(*(_QWORD *)v29 + 184LL) & 0x40) == 0) )
  {
    v12 = *(_WORD *)(a1 + 122) == 0;
    v20 = *(_OWORD *)(v3 + 16);
    *(_QWORD *)v58 = *(_QWORD *)(v3 + 8);
    v21 = *(_DWORD *)(v3 + 32);
    *(_OWORD *)&v58[9] = v20;
    *(_DWORD *)&v58[26] = v21;
    HIDWORD(v52) = 40;
    v53 = 49;
    v54 = 66;
    if ( !v12 )
    {
      v55 = 71;
      memset_0(&v58[31], 0, 0x100uLL);
      v18 = *(_OWORD **)(a1 + 128);
      if ( *(_WORD *)(a1 + 120) <= 0x100u )
      {
        memmove(&v58[31], v18, *(unsigned __int16 *)(a1 + 120));
        goto LABEL_24;
      }
      v34 = &v58[31];
      goto LABEL_37;
    }
LABEL_14:
    v55 = 0;
    goto LABEL_24;
  }
  v12 = *(_WORD *)(a1 + 122) == 0;
  v30 = *v19;
  v31 = *(_QWORD *)((char *)v19 + 41);
  v32 = v19[1];
  v53 = 40;
  *(_OWORD *)v58 = v30;
  *(_QWORD *)&v58[41] = v31;
  *(_QWORD *)&v58[32] = *((_QWORD *)v19 + 4);
  *(_OWORD *)&v58[16] = v32;
  v54 = 81;
  if ( v12 )
    goto LABEL_14;
  v33 = *(unsigned __int16 *)(a1 + 120);
  v55 = 90;
  v22 = (unsigned int)v33;
  if ( (unsigned int)v33 >= 0x14 )
    v22 = 20LL;
  memmove((char *)v59 + 1, *(const void **)(a1 + 128), v22);
  v23 = 21;
  if ( (unsigned __int64)(v33 + 1) < 0x15 )
    v23 = v33 + 1;
  if ( v23 )
  {
    *((_BYTE *)v59 + v23) = 0;
    v24 = v23 - 2;
    for ( i = v23 - 2LL; i >= 0; --i )
    {
      v26 = *((_BYTE *)v59 + i + 1);
      if ( v26 == 32 )
      {
        *((_BYTE *)v59 + i + 1) = 0;
      }
      else if ( v26 )
      {
        break;
      }
      --v24;
    }
    *((_BYTE *)&v59[1] + v24) = 0;
  }
LABEL_24:
  memmove(a2, Src, v7);
  result = 0LL;
  *a3 = v7;
  return result;
}
