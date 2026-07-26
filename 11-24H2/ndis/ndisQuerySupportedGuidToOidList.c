/*
 * XREFs of ndisQuerySupportedGuidToOidList @ 0x140083350
 * Callers:
 *     ndisWmiRegister @ 0x14002F110 (ndisWmiRegister.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x140061230 (-ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_.c)
 *     ndisQueryCustomGuids @ 0x140082F30 (ndisQueryCustomGuids.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisQuerySupportedGuidToOidList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r13
  _NDIS_GUID *Pool2; // r15
  int v3; // edx
  struct _NDIS_CO_VC_PTR_BLOCK *v4; // rdx
  __int64 v5; // r9
  int v6; // edx
  unsigned int v7; // ebx
  _DWORD *v8; // rdi
  __int16 v9; // r14
  unsigned int v10; // ebx
  unsigned __int16 i; // r10
  unsigned __int16 v12; // dx
  int v13; // r8d
  unsigned __int16 j; // r10
  unsigned __int16 v15; // dx
  int v16; // r8d
  unsigned __int16 k; // r10
  unsigned __int16 v18; // dx
  int v19; // r8d
  _DWORD *v20; // rdi
  __int64 v21; // rsi
  _DWORD *v22; // rcx
  __int64 v23; // rdx
  unsigned __int16 v24; // r14
  void *v25; // rsi
  unsigned __int16 v26; // r10
  __int64 v27; // xmm1_8
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned __int16 m; // r9
  unsigned __int16 v31; // dx
  int v32; // r8d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // xmm1_8
  unsigned int v36; // eax
  unsigned __int16 n; // r9
  unsigned __int16 v38; // dx
  int v39; // r8d
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // xmm1_8
  unsigned int v43; // eax
  unsigned __int16 ii; // r9
  unsigned __int16 v45; // dx
  int v46; // r8d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // xmm1_8
  unsigned int v50; // eax
  __int64 v51; // rcx
  _GUID *v52; // rax
  _NDIS_GUID *v53; // rdx
  _GUID v54; // xmm0
  _GUID v55; // xmm1
  _GUID v56; // xmm0
  _GUID v57; // xmm1
  _GUID v58; // xmm0
  _GUID v59; // xmm1
  _GUID v60; // xmm0
  _GUID v61; // xmm1
  _GUID v62; // xmm0
  _GUID v63; // xmm1
  __int64 v64; // rax
  unsigned __int16 v65; // bx
  _NDIS_GUID *v66; // r14
  struct _GUID *v68; // [rsp+20h] [rbp-E0h]
  struct _NDIS_FILTER_BLOCK *v69; // [rsp+28h] [rbp-D8h]
  __int64 v70; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v71; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v73; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v74; // [rsp+64h] [rbp-9Ch] BYREF
  void *Src; // [rsp+68h] [rbp-98h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v76; // [rsp+70h] [rbp-90h]
  _BYTE v77[248]; // [rsp+80h] [rbp-80h] BYREF

  v76 = a1;
  v1 = a1;
  v73 = 0;
  v74 = 0;
  P = 0LL;
  v71 = 0;
  Src = 0LL;
  Pool2 = 0LL;
  memset(&v77[1], 0, 0xF7uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      18,
      18,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)v1);
  }
  memset(&v77[112], 0, 136);
  *(_QWORD *)&v77[104] = &ndisIntReqWmi;
  memset(v77, 0, 104);
  *(_DWORD *)&v77[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v77[168]);
  *(_QWORD *)v77 = 15466902LL;
  *(_DWORD *)&v77[32] = 65793;
  *(_DWORD *)&v77[8] = 0;
  *(_QWORD *)&v77[40] = 0LL;
  *(_DWORD *)&v77[48] = 0;
  v7 = ndisQuerySetMiniportEx2(
         v1,
         v4,
         (struct _NDIS_OID_REQUEST *)v77,
         v5,
         (struct _NDIS_FILTER_BLOCK *)v68,
         v69,
         0x3277444Eu,
         &P,
         &v74,
         &v73);
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        18,
        19,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)v1);
    }
    v8 = P;
  }
  else
  {
    v9 = 0;
    v10 = v73 >> 2;
    for ( i = 0; i < 0x52u; ++i )
    {
      v12 = 0;
      if ( (_WORD)v10 )
      {
        v13 = *((_DWORD *)&unk_140189030 + 7 * i);
        while ( !v13 || v13 != *((_DWORD *)P + v12) )
        {
          if ( ++v12 >= (unsigned __int16)v10 )
            goto LABEL_15;
        }
        ++v9;
      }
LABEL_15:
      ;
    }
    for ( j = 0; j < 0x10u; ++j )
    {
      v15 = 0;
      if ( (_WORD)v10 )
      {
        v16 = dword_140189930[7 * j];
        while ( !v16 || v16 != *((_DWORD *)P + v15) )
        {
          if ( ++v15 >= (unsigned __int16)v10 )
            goto LABEL_24;
        }
        ++v9;
      }
LABEL_24:
      ;
    }
    for ( k = 0; k < 0x31u; ++k )
    {
      v18 = 0;
      if ( (_WORD)v10 )
      {
        v19 = dword_140189C50[7 * k];
        while ( !v19 || v19 != *((_DWORD *)P + v18) )
        {
          if ( ++v18 >= (unsigned __int16)v10 )
            goto LABEL_33;
        }
        ++v9;
      }
LABEL_33:
      ;
    }
    if ( !(unsigned int)ndisQueryCustomGuids(v1, (struct _NDIS_OID_REQUEST *)v77, &Src, &v71) )
      v9 += v71;
    v20 = &unk_140189038;
    v21 = 82LL;
    v22 = &unk_140189038;
    v23 = 82LL;
    v24 = v9 + 38;
    do
    {
      if ( (*v22 & 0x20000000) != 0
        && ((*v22 & 0x1000000) == 0 || v1->NDKBlock)
        && ((v1->Flags & 0x20000) != 0 || (*v22 & 0x10000000) == 0) )
      {
        ++v24;
      }
      v22 += 7;
      --v23;
    }
    while ( v23 );
    Pool2 = (_NDIS_GUID *)ExAllocatePool2(64LL, 28LL * v24, 829899854LL);
    if ( Pool2 )
    {
      v26 = 0;
      do
      {
        if ( (*v20 & 0x20000000) != 0
          && ((*v20 & 0x1000000) == 0 || v1->NDKBlock)
          && ((v1->Flags & 0x20000) != 0 || (*v20 & 0x10000000) == 0) )
        {
          v27 = *((_QWORD *)v20 - 1);
          v28 = v26;
          v29 = *v20;
          Pool2[v28].Guid = *(_GUID *)(v20 - 6);
          *(_QWORD *)&Pool2[v28].Oid = v27;
          Pool2[v28].Flags = v29;
          if ( (v1->Flags & 0x20000) != 0 )
            Pool2[v28].Flags |= 0x10000000u;
          ++v26;
        }
        v20 += 7;
        --v21;
      }
      while ( v21 );
      v8 = P;
      for ( m = 0; m < 0x52u; ++m )
      {
        v31 = 0;
        if ( (_WORD)v10 )
        {
          v32 = *((_DWORD *)&unk_140189030 + 7 * m);
          while ( !v32 || v32 != v8[v31] )
          {
            if ( ++v31 >= (unsigned __int16)v10 )
              goto LABEL_64;
          }
          v33 = 28LL * m;
          v34 = v26;
          v35 = *(_QWORD *)((char *)&unk_140189030 + v33);
          v36 = *(_DWORD *)((char *)&unk_140189038 + v33);
          ++v26;
          Pool2[v34].Guid = *(_GUID *)((char *)&ndisSupportedGuids + v33);
          *(_QWORD *)&Pool2[v34].Oid = v35;
          Pool2[v34].Flags = v36;
        }
LABEL_64:
        ;
      }
      v1 = v76;
      for ( n = 0; n < 0x10u; ++n )
      {
        v38 = 0;
        if ( (_WORD)v10 )
        {
          v39 = dword_140189930[7 * n];
          while ( !v39 || v39 != v8[v38] )
          {
            if ( ++v38 >= (unsigned __int16)v10 )
              goto LABEL_73;
          }
          v40 = 7LL * n;
          v41 = v26;
          v42 = *(_QWORD *)&dword_140189930[v40];
          v43 = dword_140189930[v40 + 2];
          ++v26;
          Pool2[v41].Guid = *(_GUID *)((char *)&ndisCoSupportedGuids + v40 * 4);
          *(_QWORD *)&Pool2[v41].Oid = v42;
          Pool2[v41].Flags = v43;
        }
LABEL_73:
        ;
      }
      for ( ii = 0; ii < 0x31u; ++ii )
      {
        v45 = 0;
        if ( (_WORD)v10 )
        {
          v46 = dword_140189C50[7 * ii];
          while ( !v46 || v46 != v8[v45] )
          {
            if ( ++v45 >= (unsigned __int16)v10 )
              goto LABEL_82;
          }
          v47 = 7LL * ii;
          v48 = v26;
          v49 = *(_QWORD *)&dword_140189C50[v47];
          v50 = dword_140189C50[v47 + 2];
          ++v26;
          Pool2[v48].Guid = *(_GUID *)((char *)&ndisMediaSupportedGuids + v47 * 4);
          *(_QWORD *)&Pool2[v48].Oid = v49;
          Pool2[v48].Flags = v50;
        }
LABEL_82:
        ;
      }
      v51 = 8LL;
      v52 = (_GUID *)&ndisStatusSupportedGuids;
      v53 = &Pool2[v26];
      do
      {
        v53 = (_NDIS_GUID *)((char *)v53 + 128);
        v54 = *v52;
        v55 = v52[1];
        v52 += 8;
        *(_GUID *)&v53[-5].Guid.Data4[4] = v54;
        v56 = v52[-6];
        v53[-4].Guid = v55;
        v57 = v52[-5];
        *(_GUID *)&v53[-4].Oid = v56;
        v58 = v52[-4];
        *(_GUID *)&v53[-3].Guid.Data2 = v57;
        v59 = v52[-3];
        *(_GUID *)&v53[-3].Size = v58;
        v60 = v52[-2];
        *(_GUID *)v53[-2].Guid.Data4 = v59;
        v61 = v52[-1];
        *(_GUID *)&v53[-2].Flags = v60;
        *(_GUID *)&v53[-1].Guid.Data4[4] = v61;
        --v51;
      }
      while ( v51 );
      v62 = *v52;
      v25 = Src;
      v63 = v52[1];
      v64 = *(_QWORD *)&v52[2].Data1;
      v1->pNdisGuidMap = Pool2;
      v1->cNdisGuidMap = v24;
      v53->Guid = v62;
      *(_GUID *)&v53->Oid = v63;
      *(_QWORD *)&v53[1].Guid.Data2 = v64;
      if ( v25 )
      {
        v65 = v71;
        v66 = &Pool2[(unsigned __int16)(v26 + 38)];
        memmove(v66, v25, 28LL * v71);
        v1->cCustomGuidMap = v65;
      }
      else
      {
        v1->cCustomGuidMap = 0;
        v66 = 0LL;
      }
      v1->pCustomGuidMap = v66;
      v7 = 0;
    }
    else
    {
      v8 = P;
      v7 = -1073741670;
      v25 = Src;
    }
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v7 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v70) = v7;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x14u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)v1,
      v70);
  }
  return v7;
}
