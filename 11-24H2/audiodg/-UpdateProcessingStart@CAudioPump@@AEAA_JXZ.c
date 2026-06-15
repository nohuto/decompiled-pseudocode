/*
 * XREFs of ?UpdateProcessingStart@CAudioPump@@AEAA_JXZ @ 0x14001F6A0
 * Callers:
 *     ?SetDeadlineForNextProcessingPass@CAudioPump@@AEAAXXZ @ 0x14001F380 (-SetDeadlineForNextProcessingPass@CAudioPump@@AEAAXXZ.c)
 * Callees:
 *     ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x14001E6F0 (-RebaseSums@-$LinearFitT@$0BAA@@@QEAA_NXZ.c)
 *     ?AddToSums@?$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z @ 0x14001E800 (-AddToSums@-$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400210E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140021144 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x14002289C (-InitWithPoint@-$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     floor @ 0x14005A060 (floor.c)
 */

__int64 __fastcall CAudioPump::UpdateProcessingStart(CAudioPump *this)
{
  __int64 v1; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  char *v5; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rsi
  char *v8; // r12
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r14
  __int128 v16; // rax
  bool v17; // zf
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int128 v21; // rax
  bool v22; // zf
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // ecx
  int v28; // eax
  double v29; // xmm2_8
  double v30; // xmm4_8
  double v31; // xmm3_8
  double v32; // xmm1_8
  unsigned __int64 v33; // rsi
  __int64 v34; // r14
  double v35; // xmm6_8
  double v36; // xmm0_8
  unsigned int v37; // ecx
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  char v44; // al
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-C8h] BYREF
  CAudioPump *v49; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+70h] [rbp-98h] BYREF
  __int64 v55; // [rsp+78h] [rbp-90h] BYREF
  __int64 v56; // [rsp+80h] [rbp-88h] BYREF
  char v57[16]; // [rsp+88h] [rbp-80h] BYREF
  CAudioPump **v58; // [rsp+98h] [rbp-70h]
  __int64 v59; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v60; // [rsp+A8h] [rbp-60h]
  __int64 v61; // [rsp+B0h] [rbp-58h]
  __int64 *v62; // [rsp+B8h] [rbp-50h]
  __int64 v63; // [rsp+C0h] [rbp-48h]
  __int64 *v64; // [rsp+C8h] [rbp-40h]
  __int64 v65; // [rsp+D0h] [rbp-38h]
  __int64 *v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  __int64 *v68; // [rsp+E8h] [rbp-20h]
  __int64 v69; // [rsp+F0h] [rbp-18h]
  __int64 *v70; // [rsp+F8h] [rbp-10h]
  __int64 v71; // [rsp+100h] [rbp-8h]
  __int64 *v72; // [rsp+108h] [rbp+0h]
  __int64 v73; // [rsp+110h] [rbp+8h]
  __int64 *v74; // [rsp+118h] [rbp+10h]
  __int64 v75; // [rsp+120h] [rbp+18h]
  __int64 *v76; // [rsp+128h] [rbp+20h]
  __int64 v77; // [rsp+130h] [rbp+28h]

  v1 = *((_QWORD *)this + 581);
  LODWORD(v47) = 0;
  v3 = 0LL;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 583) - v1;
    LODWORD(v47) = 1;
    ++*((_QWORD *)this + 582);
  }
  v4 = *((_QWORD *)this + 583);
  v5 = (char *)this + 448;
  v6 = *((_DWORD *)this + 114);
  v7 = *((_QWORD *)this + 582);
  v8 = (char *)this + 16 * (unsigned __int8)v6 + 448;
  if ( !v6 )
  {
    *((_QWORD *)v8 + 13) = v7;
    *((_QWORD *)v8 + 14) = v4;
    LinearFitT<256>::InitWithPoint((char *)this + 448, v8 + 104);
    goto LABEL_24;
  }
  LOBYTE(v48) = 0;
  v9 = 2LL * (unsigned __int8)(v6 - 1);
  v10 = *(_QWORD *)&v5[16 * (unsigned __int8)(v6 - 1) + 112] - v4;
  if ( v10 < 0 )
    v10 = v4 - *(_QWORD *)&v5[16 * (unsigned __int8)(v6 - 1) + 112];
  v11 = *((_QWORD *)this + 2 * (unsigned __int8)(v6 - 1) + 69) + *((_QWORD *)this + 67);
  v49 = (CAudioPump *)v10;
  if ( v7 > v11 || v10 > *((_QWORD *)this + 68) )
  {
    if ( v6 > 0x100 )
    {
      if ( (v6 & 0x1FF) == 0 )
      {
        v44 = LinearFitT<256>::RebaseSums((__int64)this + 448);
        v45 = (unsigned __int8)v48;
        if ( !v44 )
          v45 = 1;
        LODWORD(v48) = v45;
      }
      v12 = *((_QWORD *)v8 + 13) - *((_QWORD *)this + 61);
      v13 = *((_QWORD *)v8 + 14) - *((_QWORD *)this + 62);
      *((_QWORD *)this + 63) -= v12;
      *((_QWORD *)this + 64) -= v13;
      *((_QWORD *)this + 65) -= v12 * v13;
      *((_QWORD *)this + 66) -= v12 * v12;
    }
    *((_QWORD *)v8 + 13) = v7;
    *((_QWORD *)v8 + 14) = v4;
    v14 = v7 - *((_QWORD *)this + 61);
    v15 = v4 - *((_QWORD *)this + 62);
    v16 = v14 * (__int128)v14;
    v50 = 0LL;
    if ( (__int64)v16 < 0 )
      v17 = *((_QWORD *)&v16 + 1) == -1LL;
    else
      v17 = *((_QWORD *)&v16 + 1) == 0LL;
    if ( !v17 )
      goto LABEL_59;
    v18 = *((_QWORD *)this + 66);
    v19 = v18 + v16;
    v20 = v18 >> 63;
    if ( (_DWORD)v20 == (unsigned int)((unsigned __int64)(v14 * v14) >> 32) >> 31
      && (_DWORD)v20 != v19 > 0x7FFFFFFFFFFFFFFFLL )
    {
      goto LABEL_59;
    }
    v50 = 0LL;
    v21 = v14 * (__int128)v15;
    v22 = (__int64)v21 < 0 ? *((_QWORD *)&v21 + 1) == -1LL : *((_QWORD *)&v21 + 1) == 0LL;
    if ( v22
      && ((v23 = *((_QWORD *)this + 65),
           v24 = v23 + v21,
           v25 = v23 >> 63,
           (_DWORD)v25 != (unsigned int)((unsigned __int64)(v14 * v15) >> 32) >> 31)
       || (_DWORD)v25 == v24 > 0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_QWORD *)this + 63) += v14;
      *((_QWORD *)this + 64) += v15;
      ++*((_DWORD *)this + 114);
      *((_QWORD *)this + 65) = v24;
      *((_QWORD *)this + 66) = v19;
    }
    else
    {
LABEL_59:
      if ( !LinearFitT<256>::RebaseSums((__int64)this + 448) || !LinearFitT<256>::AddToSums(v46, (_QWORD *)v8 + 13) )
        goto LABEL_51;
    }
    if ( !(_BYTE)v48 && *((_QWORD *)v8 + 13) > *(_QWORD *)&v5[8 * v9 + 104] )
    {
      v26 = *((_QWORD *)this + 68);
      if ( v26 <= 0 || (__int64)v49 <= v26 )
      {
LABEL_24:
        v27 = *((_DWORD *)this + 114);
        if ( v27 )
        {
          v28 = 256;
          v29 = (double)(int)*((_QWORD *)this + 63);
          if ( v27 < 0x100 )
            v28 = *((_DWORD *)this + 114);
          v30 = (double)v28;
          v31 = (double)(int)*((_QWORD *)this + 66) - v29 * v29 / (double)v28;
          if ( COERCE_DOUBLE(*(_QWORD *)&v31 & _xmm) <= 0.01 || v27 <= 4 )
            v32 = *((double *)this + 60);
          else
            v32 = ((double)(int)*((_QWORD *)this + 65) - (double)(int)*((_QWORD *)this + 64) * v29 / v30) / v31;
          *((double *)this + 59) = v32;
          *((double *)this + 58) = ((double)(int)*((_QWORD *)this + 64) - v29 * v32) / v30;
        }
        goto LABEL_31;
      }
    }
LABEL_51:
    LinearFitT<256>::Reset((char *)this + 448);
    *(_OWORD *)((char *)this + 552) = *(_OWORD *)(v8 + 104);
    *((_QWORD *)this + 61) = *((_QWORD *)this + 69);
    *((_QWORD *)this + 62) = *((_QWORD *)this + 70);
    *((_DWORD *)this + 114) = 1;
    goto LABEL_24;
  }
LABEL_31:
  v33 = *((_QWORD *)this + 582);
  v34 = *((_QWORD *)this + 583);
  *((_QWORD *)this + 581) = v34;
  v35 = *((double *)this + 59);
  v36 = floor(
          (double)((int)v33 - *((_DWORD *)this + 122)) * v35
        + (double)(int)*((_QWORD *)this + 62)
        + *((double *)this + 58)
        + 0.5);
  v37 = *((_DWORD *)this + 114);
  v38 = (unsigned int)(int)v36;
  if ( v37 <= 1 )
  {
    v40 = 0LL;
  }
  else
  {
    v39 = (unsigned __int8)v37;
    if ( v37 <= 0x100 )
      v39 = 0LL;
    v40 = *((_QWORD *)this + 2 * (unsigned __int8)(v37 - 1) + 69) - *((_QWORD *)this + 2 * v39 + 69);
  }
  if ( (byte_1400C4541 & 8) != 0 )
  {
    v41 = *((_QWORD *)this + 13);
    v42 = v41 * v40;
    v55 = v41;
    v54 = v3;
    v53 = v38 - v34;
    v52 = (unsigned int)(int)v36;
    v50 = v42 / 10000;
    v51 = v34;
    v48 = v33;
    v49 = this;
    v59 = 8LL;
    v61 = 8LL;
    v63 = 8LL;
    v56 = (unsigned int)(int)v35;
    v58 = &v49;
    v60 = &v48;
    v62 = &v51;
    v64 = &v52;
    v66 = &v53;
    v68 = &v54;
    v70 = &v47;
    v72 = &v55;
    v74 = &v56;
    v76 = &v50;
    v65 = 8LL;
    v67 = 8LL;
    v69 = 8LL;
    v71 = 4LL;
    v73 = 8LL;
    v75 = 8LL;
    v77 = 8LL;
    McGenEventWrite_EtwEventWriteTransfer(v41, (unsigned int)&AudioCore_Pump_CorrectPosition, v42, 11, (__int64)v57);
    v33 = *((_QWORD *)this + 582);
  }
  if ( v38 - v34 > *((_QWORD *)this + 13) )
  {
    LinearFitT<256>::Reset((char *)this + 448);
    *((_QWORD *)this + 581) = 0LL;
    *((_QWORD *)this + 582) = 0LL;
    return *((_QWORD *)this + 583);
  }
  if ( v33 <= 0xA )
    return *((_QWORD *)this + 583);
  return (unsigned int)(int)v36;
}
