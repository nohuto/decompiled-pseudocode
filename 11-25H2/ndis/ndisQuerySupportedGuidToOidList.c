/*
 * XREFs of ndisQuerySupportedGuidToOidList @ 0x14002E140
 * Callers:
 *     ndisWmiRegister @ 0x14002C080 (ndisWmiRegister.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x14002E720 (-ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_.c)
 *     ndisQueryCustomGuids @ 0x14002E8E0 (ndisQueryCustomGuids.c)
 *     ndisWmiMapOids @ 0x14002ECF0 (ndisWmiMapOids.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisQuerySupportedGuidToOidList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_GUID *v2; // rsi
  int v3; // edx
  struct _NDIS_CO_VC_PTR_BLOCK *v4; // rdx
  unsigned __int8 v5; // r9
  unsigned int v6; // eax
  int v7; // edx
  PVOID v8; // rdi
  unsigned int v9; // ebx
  _DWORD *v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int16 v13; // r12
  unsigned __int16 i; // ax
  _DWORD *v15; // r8
  __int64 v16; // r9
  unsigned __int16 j; // cx
  _DWORD *v18; // r8
  __int64 v19; // r9
  unsigned __int16 k; // cx
  unsigned __int16 v21; // r12
  int *v22; // rcx
  __int64 v23; // r8
  int v24; // edx
  __int64 Pool2; // rax
  void *v26; // r14
  unsigned __int16 v27; // r10
  _DWORD *v28; // r8
  __int64 v29; // r9
  int v30; // eax
  int v31; // edx
  __int64 v32; // xmm1_8
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned __int16 v35; // ax
  int v36; // r9d
  unsigned __int16 v37; // ax
  int v38; // r9d
  unsigned __int16 v39; // r9
  __int64 v40; // rdx
  _GUID *v41; // rax
  _NDIS_GUID *v42; // rcx
  _GUID v43; // xmm0
  _GUID v44; // xmm1
  _GUID v45; // xmm0
  _GUID v46; // xmm1
  _GUID v47; // xmm0
  _GUID v48; // xmm1
  _GUID v49; // xmm0
  _GUID v50; // xmm1
  _GUID v51; // xmm0
  _GUID v52; // xmm1
  __int64 v53; // rax
  _NDIS_GUID *v54; // rbx
  struct _GUID *v56; // [rsp+20h] [rbp-E0h]
  struct _NDIS_FILTER_BLOCK *v57; // [rsp+28h] [rbp-D8h]
  __int64 v58; // [rsp+30h] [rbp-D0h]
  unsigned int v59; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v60; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+68h] [rbp-98h]
  _BYTE v63[248]; // [rsp+70h] [rbp-90h] BYREF

  v59 = 0;
  v60 = 0;
  P = 0LL;
  v2 = 0LL;
  Src = 0LL;
  memset(&v63[1], 0, 0xF7uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      18,
      18,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  memset(&v63[112], 0, 136);
  *(_QWORD *)&v63[104] = &ndisIntReqWmi;
  memset(v63, 0, 104);
  *(_DWORD *)&v63[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v63[168]);
  *(_QWORD *)v63 = 15466902LL;
  *(_DWORD *)&v63[32] = 65793;
  *(_DWORD *)&v63[8] = 0;
  *(_QWORD *)&v63[40] = 0LL;
  *(_DWORD *)&v63[48] = 0;
  v6 = ndisQuerySetMiniportEx2(
         a1,
         v4,
         (struct _NDIS_OID_REQUEST *)v63,
         v5,
         (struct _NDIS_FILTER_BLOCK *)v56,
         v57,
         0x3277444Eu,
         &P,
         &v60,
         &v59);
  v8 = P;
  v9 = v6;
  if ( v6 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        18,
        19,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
  }
  else
  {
    v10 = &unk_140194030;
    v11 = v59 >> 2;
    v12 = 82LL;
    v13 = 0;
    do
    {
      for ( i = 0; i < (unsigned __int16)v11; ++i )
      {
        if ( *v10 && *v10 == *((_DWORD *)P + i) )
        {
          ++v13;
          break;
        }
      }
      v10 += 7;
      --v12;
    }
    while ( v12 );
    v15 = &unk_140194930;
    v16 = 16LL;
    do
    {
      for ( j = 0; j < (unsigned __int16)v11; ++j )
      {
        if ( *v15 && *v15 == *((_DWORD *)P + j) )
        {
          ++v13;
          break;
        }
      }
      v15 += 7;
      --v16;
    }
    while ( v16 );
    v18 = &unk_140194C50;
    v19 = 49LL;
    do
    {
      for ( k = 0; k < (unsigned __int16)v11; ++k )
      {
        if ( *v18 && *v18 == *((_DWORD *)P + k) )
        {
          ++v13;
          break;
        }
      }
      v18 += 7;
      --v19;
    }
    while ( v19 );
    ndisQueryCustomGuids(a1, (struct _NDIS_OID_REQUEST *)v63);
    v21 = v13 + 38;
    v22 = (int *)&unk_140194038;
    v23 = 82LL;
    do
    {
      v24 = *v22;
      if ( (*v22 & 0x20000000) != 0
        && ((v24 & 0x1000000) == 0 || a1->NDKBlock)
        && ((a1->Flags & 0x20000) != 0 || (v24 & 0x10000000) == 0) )
      {
        ++v21;
      }
      v22 += 7;
      --v23;
    }
    while ( v23 );
    Pool2 = ExAllocatePool2(64LL, 28LL * v21, 829899854);
    v26 = Src;
    v2 = (_NDIS_GUID *)Pool2;
    if ( Pool2 )
    {
      v27 = 0;
      v28 = &ndisSupportedGuids;
      v29 = 82LL;
      do
      {
        v30 = v28[6];
        if ( (v30 & 0x20000000) != 0 && ((v30 & 0x1000000) == 0 || a1->NDKBlock) )
        {
          v31 = a1->Flags & 0x20000;
          if ( v31 || (v30 & 0x10000000) == 0 )
          {
            v32 = *((_QWORD *)v28 + 2);
            v33 = v27;
            v34 = v28[6];
            v2[v33].Guid = *(_GUID *)v28;
            *(_QWORD *)&v2[v33].Oid = v32;
            v2[v33].Flags = v34;
            if ( v31 )
              v2[v33].Flags |= 0x10000000u;
            ++v27;
          }
        }
        v28 += 7;
        --v29;
      }
      while ( v29 );
      v35 = ndisWmiMapOids((_DWORD)v2, v27, (_DWORD)v8, (unsigned __int16)v11, (__int64)&ndisSupportedGuids, 82);
      v37 = ndisWmiMapOids((_DWORD)v2, v35, (_DWORD)v8, v36, (__int64)&ndisCoSupportedGuids, 16);
      v39 = ndisWmiMapOids((_DWORD)v2, v37, (_DWORD)v8, v38, (__int64)&ndisMediaSupportedGuids, 49);
      v40 = 8LL;
      v41 = (_GUID *)&ndisStatusSupportedGuids;
      v42 = &v2[v39];
      do
      {
        v42 = (_NDIS_GUID *)((char *)v42 + 128);
        v43 = *v41;
        v44 = v41[1];
        v41 += 8;
        *(_GUID *)&v42[-5].Guid.Data4[4] = v43;
        v45 = v41[-6];
        v42[-4].Guid = v44;
        v46 = v41[-5];
        *(_GUID *)&v42[-4].Oid = v45;
        v47 = v41[-4];
        *(_GUID *)&v42[-3].Guid.Data2 = v46;
        v48 = v41[-3];
        *(_GUID *)&v42[-3].Size = v47;
        v49 = v41[-2];
        *(_GUID *)v42[-2].Guid.Data4 = v48;
        v50 = v41[-1];
        *(_GUID *)&v42[-2].Flags = v49;
        *(_GUID *)&v42[-1].Guid.Data4[4] = v50;
        --v40;
      }
      while ( v40 );
      v51 = *v41;
      v52 = v41[1];
      v53 = *(_QWORD *)&v41[2].Data1;
      a1->pNdisGuidMap = v2;
      a1->cNdisGuidMap = v21;
      v42->Guid = v51;
      *(_GUID *)&v42->Oid = v52;
      *(_QWORD *)&v42[1].Guid.Data2 = v53;
      if ( v26 )
      {
        v54 = &v2[(unsigned __int16)(v39 + 38)];
        memmove(v54, v26, 0LL);
        a1->cCustomGuidMap = 0;
      }
      else
      {
        a1->cCustomGuidMap = 0;
        v54 = 0LL;
      }
      a1->pCustomGuidMap = v54;
      v9 = 0;
    }
    else
    {
      v9 = -1073741670;
    }
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v9 && v2 )
    ExFreePoolWithTag(v2, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v58) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x14u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      v58);
  }
  return v9;
}
