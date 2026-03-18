/*
 * XREFs of BltDIB_CY @ 0x1400EE350
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400ED40C (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400ED4BC (AlphaBlendBGRF.c)
 *     FixupGrayScan @ 0x1400EFC9C (FixupGrayScan.c)
 *     FixupColorScan @ 0x1400F0050 (FixupColorScan.c)
 *     MappingBGR @ 0x1402FA18C (MappingBGR.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BltDIB_CY(__int128 *a1)
{
  int *v1; // rdx
  __int64 v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // edi
  unsigned int v17; // edx
  __int64 v18; // r8
  char v19; // al
  char v20; // cl
  __int16 v21; // ax
  __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned __int8 *v24; // rcx
  unsigned __int8 *v26; // rax
  unsigned __int8 *v27; // rcx
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[16]; // [rsp+58h] [rbp-A8h] BYREF
  void (__fastcall *v30)(_BYTE *, __int64, __int64, _QWORD); // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  unsigned int v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  unsigned int v34; // [rsp+88h] [rbp-78h]
  unsigned int v35; // [rsp+8Ch] [rbp-74h]
  int v36; // [rsp+94h] [rbp-6Ch]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  unsigned int v38; // [rsp+E4h] [rbp-1Ch]
  int v39; // [rsp+ECh] [rbp-14h]
  void (__fastcall *v40)(int *); // [rsp+110h] [rbp+10h]
  void (__fastcall *v41)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  void (__fastcall *v43)(__int64, __int64, __int64, __int64, int); // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+180h] [rbp+80h]
  __int64 v45; // [rsp+188h] [rbp+88h]
  __int64 v46; // [rsp+1D0h] [rbp+D0h]
  __int64 v47; // [rsp+1D8h] [rbp+D8h]
  __int64 v48; // [rsp+1E8h] [rbp+E8h]
  __int64 v49; // [rsp+1F0h] [rbp+F0h]
  __int64 v50; // [rsp+1F8h] [rbp+F8h]
  int v51; // [rsp+200h] [rbp+100h]
  int v52; // [rsp+204h] [rbp+104h]
  int v53; // [rsp+208h] [rbp+108h]
  unsigned __int8 *v54; // [rsp+210h] [rbp+110h]
  unsigned __int8 *v55; // [rsp+218h] [rbp+118h]
  unsigned __int8 *v56; // [rsp+220h] [rbp+120h]
  int v57; // [rsp+228h] [rbp+128h]
  __int64 v58; // [rsp+268h] [rbp+168h]
  unsigned __int8 *v59; // [rsp+270h] [rbp+170h]
  unsigned __int64 v60; // [rsp+278h] [rbp+178h]
  __int64 v61; // [rsp+280h] [rbp+180h]
  __int64 v62; // [rsp+288h] [rbp+188h]
  __int64 v63; // [rsp+290h] [rbp+190h]
  __int64 v64; // [rsp+298h] [rbp+198h]
  int v65; // [rsp+2A0h] [rbp+1A0h]

  v1 = &v28;
  v2 = 4LL;
  do
  {
    v3 = *a1;
    v4 = a1[1];
    a1 += 8;
    *(_OWORD *)v1 = v3;
    v5 = *(a1 - 6);
    *((_OWORD *)v1 + 1) = v4;
    v6 = *(a1 - 5);
    *((_OWORD *)v1 + 2) = v5;
    v7 = *(a1 - 4);
    *((_OWORD *)v1 + 3) = v6;
    v8 = *(a1 - 3);
    *((_OWORD *)v1 + 4) = v7;
    v9 = *(a1 - 2);
    *((_OWORD *)v1 + 5) = v8;
    v10 = *(a1 - 1);
    *((_OWORD *)v1 + 6) = v9;
    v1 += 32;
    *((_OWORD *)v1 - 1) = v10;
    --v2;
  }
  while ( v2 );
  v11 = *((_QWORD *)a1 + 10);
  v12 = a1[1];
  *(_OWORD *)v1 = *a1;
  v13 = a1[2];
  *((_OWORD *)v1 + 1) = v12;
  v14 = a1[3];
  *((_OWORD *)v1 + 2) = v13;
  v15 = a1[4];
  *((_OWORD *)v1 + 3) = v14;
  *((_OWORD *)v1 + 4) = v15;
  *((_QWORD *)v1 + 10) = v11;
  v16 = *(_DWORD *)(v45 + 4);
  while ( v16 )
  {
    v20 = v28;
    --v16;
    v23 = v58;
    if ( (v28 & 0x40) != 0 )
    {
      if ( (v29[0] & 4) != 0 )
        FixupGrayScan(&v28, v58);
      else
        FixupColorScan(&v28, v58);
      goto LABEL_8;
    }
    v17 = v35;
    if ( (v28 & 0x20) != 0 )
    {
      v17 = v35 + 1;
      if ( (int)(v35 + 1) > (int)v32 )
        v17 = v32;
      v35 = v17;
      v18 = v31 + (int)(v36 * (v32 - v17));
      v19 = v29[0] | 2;
      v33 = v18;
      v20 = v28 & 0xDF;
      v29[0] |= 2u;
      v28 &= ~0x20u;
    }
    else
    {
      v18 = v33;
      v19 = v29[0];
    }
    if ( v58 )
    {
      v30(v29, v58, v18, v32);
LABEL_8:
      v20 = v28;
      goto LABEL_9;
    }
    if ( (v19 & 2) != 0 )
    {
      if ( !v17 || (v35 = v17 - 1, v17 == 1) )
      {
        if ( (v19 & 1) != 0 )
        {
          v33 = v31;
          v35 = v32;
        }
        else
        {
          v29[0] = v19 & 0xFD;
        }
      }
      else
      {
        v33 = v36 + v18;
      }
    }
LABEL_9:
    if ( (v20 & 8) != 0 && v23 )
    {
      MappingBGR(v23, v34, v47, v54);
      v27 = &v54[v57];
      if ( v27 == v55 )
        v27 = v56;
      v54 = v27;
    }
    v43(v44, v23, v63, v64, v65);
    if ( (v29[0] & 4) != 0 )
    {
      v24 = v59;
      do
      {
        *(_WORD *)v24 = GrayIdxWORD[*v24];
        v24 += 4;
      }
      while ( (unsigned __int64)v24 < v60 );
    }
    v21 = v28;
    if ( (v28 & 0x80u) != 0 )
    {
      v40(&v28);
      v21 = v28;
    }
    if ( (v21 & 0x800) != 0 )
    {
      AlphaBlendBGRF(&v28);
      LOBYTE(v21) = v28;
    }
    if ( (v21 & 0x10) != 0 )
    {
      MappingBGRF(v59, v60, v47, v54);
      v26 = &v54[v57];
      if ( v26 == v55 )
        v26 = v56;
      v54 = v26;
    }
    v41(&v28, v61, v62, v37, v46, v48, v48 + v52, v53, v42);
    v22 = v51 + v48;
    if ( v22 == v49 )
      v22 = v50;
    v37 += v39;
    v48 = v22;
  }
  return v38;
}
