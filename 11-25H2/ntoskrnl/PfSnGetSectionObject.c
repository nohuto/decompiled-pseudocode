/*
 * XREFs of PfSnGetSectionObject @ 0x1408C237C
 * Callers:
 *     PfSnPopulateReadList @ 0x1408C1D90 (PfSnPopulateReadList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PfpFileCheckAttributesForPrefetch @ 0x140470B00 (PfpFileCheckAttributesForPrefetch.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     IopQueryXxxInformation @ 0x1408C1900 (IopQueryXxxInformation.c)
 *     MiCreateSectionCommon @ 0x1408C2964 (MiCreateSectionCommon.c)
 *     PfpOpenHandleCreate @ 0x1408C2D6C (PfpOpenHandleCreate.c)
 *     PfSnPrefetchFileMetadata @ 0x1408C3008 (PfSnPrefetchFileMetadata.c)
 *     PfSnIsSectionPrefetchedAfterPhase @ 0x140A0BCEC (PfSnIsSectionPrefetchedAfterPhase.c)
 */

__int64 __fastcall PfSnGetSectionObject(
        volatile signed __int32 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        HANDLE EventHandle,
        _QWORD *a9,
        _BYTE *a10)
{
  __int128 v11; // xmm0
  HANDLE v15; // r14
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rbx
  NTSTATUS SectionCommon; // edi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int128 v23; // xmm1
  __int64 v24; // rdx
  unsigned int v25; // r8d
  unsigned int v26; // ecx
  bool v27; // zf
  unsigned int v28; // edx
  unsigned int v29; // eax
  __int64 v30; // rax
  int v31; // edx
  unsigned int v32; // r9d
  unsigned int v33; // eax
  unsigned int v34; // r9d
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // edx
  unsigned int v47; // eax
  int v48; // edx
  ULONGLONG ullMultiplicand; // [rsp+40h] [rbp-C0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __m256i BugCheckParameter2; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v52; // [rsp+90h] [rbp-70h]
  unsigned int v53; // [rsp+94h] [rbp-6Ch]
  unsigned int v54; // [rsp+98h] [rbp-68h]
  unsigned int v55; // [rsp+9Ch] [rbp-64h]
  unsigned int v56; // [rsp+A0h] [rbp-60h]
  unsigned int v57; // [rsp+A4h] [rbp-5Ch]
  unsigned int v58; // [rsp+A8h] [rbp-58h]
  unsigned int v59; // [rsp+ACh] [rbp-54h]
  unsigned int v60; // [rsp+B0h] [rbp-50h]
  unsigned int v61; // [rsp+B4h] [rbp-4Ch]
  _QWORD *v62; // [rsp+B8h] [rbp-48h]
  __int64 v63; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-30h] BYREF
  int v66[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v67; // [rsp+E8h] [rbp-18h]
  __int128 v68; // [rsp+F8h] [rbp-8h]
  _BYTE v69[24]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v70; // [rsp+120h] [rbp+20h]
  int v71[4]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v72; // [rsp+138h] [rbp+38h]

  v62 = a9;
  v11 = 0LL;
  v72 = 0LL;
  *(_QWORD *)&v68 = 0LL;
  *a9 = 0LL;
  DWORD2(v68) = 0;
  v15 = 0LL;
  BugCheckParameter2.m256i_i64[3] = 0x200000000LL;
  *a10 = 0;
  v16 = *(_QWORD *)a1;
  v63 = 0LL;
  memset(&BugCheckParameter2, 0, 24);
  v17 = a7 != 0 ? 285212672 : 0x4000000;
  Handle = 0LL;
  *(_OWORD *)v71 = 0LL;
  *(_OWORD *)v66 = 0LL;
  v67 = 0LL;
  if ( a6 >= *(_DWORD *)(v16 + 88) )
  {
    SectionCommon = -1073741811;
    goto LABEL_31;
  }
  v18 = *((_QWORD *)a1 + 7) + 56LL * a6;
  if ( _bittest64((const signed __int64 *)(v18 + 24), 0x22u) )
  {
LABEL_10:
    if ( a7 )
    {
      if ( *(_QWORD *)(v18 + 32) )
      {
        if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, a5) )
        {
          *(_DWORD *)(v18 + 48) |= v48;
          *a10 = v48;
        }
        goto LABEL_19;
      }
    }
    else if ( *(_QWORD *)(v18 + 40) )
    {
      v25 = a5;
      v39 = (*(_DWORD *)(a4 + 20) >> 1) & 0x7F;
      v52 = 0;
      v27 = !_BitScanReverse(&v40, v39);
      if ( v27 || (_BitScanReverse(&v41, a5), v52 = v41, v40 <= v41) )
      {
LABEL_17:
        *(_DWORD *)(v18 + 48) |= 2u;
LABEL_18:
        *a10 = 1;
      }
LABEL_19:
      v30 = *(_QWORD *)(v18 + 8);
      v60 = 0;
      *v62 = v30;
      v31 = *(_DWORD *)(a4 + 20);
      v27 = !_BitScanReverse(&v32, BYTE1(v31) & 0x7F);
      v59 = v32;
      if ( v27 || (_BitScanReverse(&v33, v25), v60 = v33, v32 <= v33) )
      {
        LODWORD(v62) = 0;
        v27 = !_BitScanReverse(&v34, (unsigned __int8)v31 >> 1);
        v61 = v34;
        if ( v27 || (_BitScanReverse(&v35, v25), LODWORD(v62) = v35, v34 <= v35) )
        {
          if ( ((unsigned __int8)v25 & BYTE1(v31) & 0x7F) == 0 || a7 )
            *(_DWORD *)(v18 + 48) |= 4u;
        }
      }
      SectionCommon = 0;
      goto LABEL_29;
    }
    v66[0] = 48;
    *(_QWORD *)&v66[2] = 0LL;
    DWORD2(v67) = 576;
    *(_QWORD *)&v67 = 0LL;
    v68 = v11;
    v24 = *(_QWORD *)v18;
    *(_OWORD *)v69 = v11;
    LODWORD(ullMultiplicand) = 0;
    SectionCommon = MiCreateSectionCommon(
                      (int)&Handle,
                      5,
                      (int)v66,
                      0,
                      2,
                      v17,
                      v24,
                      0LL,
                      ullMultiplicand,
                      1,
                      KeGetCurrentThread()->PreviousMode);
    if ( SectionCommon < 0 )
    {
      v15 = Handle;
LABEL_29:
      if ( v15 )
        NtClose(v15);
      goto LABEL_31;
    }
    v15 = Handle;
    Object = 0LL;
    SectionCommon = ObReferenceObjectByHandle(Handle, 5u, MmSectionObjectType, 0, &Object, 0LL);
    if ( SectionCommon < 0 )
    {
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_29;
    }
    v25 = a5;
    if ( !a7 )
    {
      *(_QWORD *)(v18 + 40) = Object;
      v26 = *(_DWORD *)(a4 + 20);
      v56 = 0;
      v27 = !_BitScanReverse(&v28, (unsigned __int8)v26 >> 1);
      v55 = v28;
      if ( !v27 )
      {
        _BitScanReverse(&v29, a5);
        v56 = v29;
        if ( v28 > v29 )
        {
          if ( *(_QWORD *)(v18 + 32) )
            goto LABEL_19;
          v45 = v26 >> 8;
          v58 = 0;
          v27 = !_BitScanReverse(&v46, v45 & 0x7F);
          v57 = v46;
          if ( v27 || (_BitScanReverse(&v47, a5), v58 = v47, v46 <= v47) )
          {
            if ( ((unsigned __int8)a5 & (unsigned __int8)v45 & 0x7F) == 0 )
              goto LABEL_19;
          }
        }
      }
      goto LABEL_17;
    }
    *(_QWORD *)(v18 + 32) = Object;
    v42 = (*(_DWORD *)(a4 + 20) >> 8) & 0x7F;
    v54 = 0;
    v27 = !_BitScanReverse(&v43, v42);
    v53 = v43;
    if ( v27 || (_BitScanReverse(&v44, a5), v54 = v44, v43 <= v44) )
    {
      *(_DWORD *)(v18 + 48) |= 1u;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(a2 + 108) & 1) == 0 )
  {
    v38 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)&v71[2] = 0LL;
    v72 = v38;
    v71[0] = 3;
    v71[1] = 1;
    if ( v38 )
      PfSnPrefetchFileMetadata((int)a1, *(_QWORD *)(a2 + 32), (int)v71, 0, 1, EventHandle);
  }
  SectionCommon = PfpOpenHandleCreate(
                    (unsigned int)&BugCheckParameter2,
                    *((_QWORD *)a1 + 1),
                    a3,
                    *(_QWORD *)(a2 + 64),
                    161,
                    64,
                    128,
                    a2 + 32);
  if ( SectionCommon >= 0 )
  {
    SectionCommon = PfpFileCheckAttributesForPrefetch(
                      (void *)BugCheckParameter2.m256i_i64[0],
                      (((dword_140E66B90 & 0x10) == 0) << 14) + 4864);
    if ( SectionCommon >= 0 )
    {
      if ( *((_DWORD *)a1 + 30) < *((_DWORD *)a1 + 31)
        && (int)IopQueryXxxInformation(
                  (struct _FILE_OBJECT *)BugCheckParameter2.m256i_i64[1],
                  6,
                  8u,
                  0,
                  (__int64)&v63,
                  &v65,
                  1) >= 0 )
      {
        v20 = (unsigned int)_InterlockedExchangeAdd(a1 + 30, 1u);
        v21 = *((_QWORD *)a1 + 14);
        v22 = 3 * v20;
        *(_QWORD *)(v21 + 8 * v22 + 12) = v63;
        LODWORD(v20) = BugCheckParameter2.m256i_i32[6];
        *(_QWORD *)(v21 + 8 * v22) = *(_QWORD *)(BugCheckParameter2.m256i_i64[1] + 24);
        *(_DWORD *)(v21 + 8 * v22 + 8) = v20;
      }
      v15 = Handle;
      v23 = *(_OWORD *)&BugCheckParameter2.m256i_u64[2];
      v17 = a7 != 0 ? 285212672 : 0x4000000;
      *(_OWORD *)v18 = *(_OWORD *)BugCheckParameter2.m256i_i8;
      memset(&BugCheckParameter2, 0, 24);
      v11 = 0LL;
      BugCheckParameter2.m256i_i64[3] = 0x200000000LL;
      *(_OWORD *)(v18 + 16) = v23;
      goto LABEL_10;
    }
  }
LABEL_31:
  if ( (BugCheckParameter2.m256i_i64[3] & 0x400000000LL) != 0 )
  {
    v36 = *((_QWORD *)a1 + 1);
    if ( (BugCheckParameter2.m256i_i64[3] & 0x1000000000LL) == 0 )
    {
      *(_OWORD *)&v69[8] = *(_OWORD *)BugCheckParameter2.m256i_i8;
      v70 = BugCheckParameter2.m256i_i64[2];
      *(_QWORD *)v69 = v36 + 40;
      _InterlockedIncrement((volatile signed __int32 *)(v36 + 84));
      guard_dispatch_icall_no_overrides(v69);
    }
  }
  return (unsigned int)SectionCommon;
}
