/*
 * XREFs of PfSnGetSectionObject @ 0x140953A3C
 * Callers:
 *     PfSnPopulateReadList @ 0x140953450 (PfSnPopulateReadList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PfpFileCheckAttributesForPrefetch @ 0x140469800 (PfpFileCheckAttributesForPrefetch.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 *     MiCreateSectionCommon @ 0x140954024 (MiCreateSectionCommon.c)
 *     PfpOpenHandleCreate @ 0x1409543F8 (PfpOpenHandleCreate.c)
 *     PfSnPrefetchFileMetadata @ 0x140954694 (PfSnPrefetchFileMetadata.c)
 *     PfSnIsSectionPrefetchedAfterPhase @ 0x140A0E198 (PfSnIsSectionPrefetchedAfterPhase.c)
 */

__int64 __fastcall PfSnGetSectionObject(
        volatile signed __int32 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        _QWORD *a9,
        _BYTE *a10)
{
  __int128 v11; // xmm0
  __int64 v15; // rdx
  HANDLE v16; // r14
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rbx
  NTSTATUS SectionCommon; // edi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int128 v24; // xmm1
  __int64 v25; // rdx
  unsigned int v26; // r8d
  unsigned int v27; // ecx
  bool v28; // zf
  unsigned int v29; // edx
  unsigned int v30; // eax
  __int64 v31; // rax
  int v32; // ecx
  unsigned int v33; // r9d
  unsigned int v34; // eax
  unsigned int v35; // r9d
  unsigned int v36; // eax
  __int64 v37; // rcx
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
  __int128 v71; // [rsp+128h] [rbp+28h] BYREF
  __int64 v72; // [rsp+138h] [rbp+38h]

  v62 = a9;
  v11 = 0LL;
  v72 = 0LL;
  *(_QWORD *)&v68 = 0LL;
  *a9 = 0LL;
  v15 = a8;
  DWORD2(v68) = 0;
  v16 = 0LL;
  BugCheckParameter2.m256i_i64[3] = 0x200000000LL;
  *a10 = 0;
  v17 = *(_QWORD *)a1;
  v63 = 0LL;
  memset(&BugCheckParameter2, 0, 24);
  v18 = a7 != 0 ? 285212672 : 0x4000000;
  Handle = 0LL;
  v71 = 0LL;
  *(_OWORD *)v66 = 0LL;
  v67 = 0LL;
  if ( a6 >= *(_DWORD *)(v17 + 88) )
  {
    SectionCommon = -1073741811;
    goto LABEL_31;
  }
  v19 = *((_QWORD *)a1 + 7) + 56LL * a6;
  if ( _bittest64((const signed __int64 *)(v19 + 24), 0x22u) )
  {
LABEL_10:
    if ( a7 )
    {
      if ( *(_QWORD *)(v19 + 32) )
      {
        if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, a5) )
        {
          *(_DWORD *)(v19 + 48) |= v48;
          *a10 = v48;
        }
        goto LABEL_19;
      }
    }
    else if ( *(_QWORD *)(v19 + 40) )
    {
      v26 = a5;
      v39 = (*(_DWORD *)(a4 + 20) >> 1) & 0x7F;
      v52 = 0;
      v28 = !_BitScanReverse(&v40, v39);
      if ( v28 || (_BitScanReverse(&v41, a5), v52 = v41, v40 <= v41) )
      {
LABEL_17:
        *(_DWORD *)(v19 + 48) |= 2u;
LABEL_18:
        *a10 = 1;
      }
LABEL_19:
      v31 = *(_QWORD *)(v19 + 8);
      v60 = 0;
      *v62 = v31;
      v15 = *(unsigned int *)(a4 + 20);
      v32 = *(_DWORD *)(a4 + 20) >> 8;
      v28 = !_BitScanReverse(&v33, BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F);
      v59 = v33;
      if ( v28 || (_BitScanReverse(&v34, v26), v60 = v34, v33 <= v34) )
      {
        v15 = (unsigned __int8)v15 >> 1;
        LODWORD(v62) = 0;
        v28 = !_BitScanReverse(&v35, v15);
        v61 = v35;
        if ( v28 || (_BitScanReverse(&v36, v26), LODWORD(v62) = v36, v35 <= v36) )
        {
          if ( ((unsigned __int8)v26 & (unsigned __int8)v32 & 0x7F) == 0 || a7 )
            *(_DWORD *)(v19 + 48) |= 4u;
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
    v25 = *(_QWORD *)v19;
    *(_OWORD *)v69 = v11;
    LODWORD(ullMultiplicand) = 0;
    SectionCommon = MiCreateSectionCommon(
                      (int)&Handle,
                      5,
                      (int)v66,
                      0,
                      2,
                      v18,
                      v25,
                      0LL,
                      ullMultiplicand,
                      1,
                      KeGetCurrentThread()->PreviousMode);
    if ( SectionCommon < 0 )
    {
      v16 = Handle;
LABEL_29:
      if ( v16 )
        NtClose(v16);
      goto LABEL_31;
    }
    v16 = Handle;
    Object = 0LL;
    SectionCommon = ObReferenceObjectByHandle(Handle, 5u, MmSectionObjectType, 0, &Object, 0LL);
    if ( SectionCommon < 0 )
    {
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_29;
    }
    v26 = a5;
    if ( !a7 )
    {
      *(_QWORD *)(v19 + 40) = Object;
      v27 = *(_DWORD *)(a4 + 20);
      v56 = 0;
      v28 = !_BitScanReverse(&v29, (unsigned __int8)v27 >> 1);
      v55 = v29;
      if ( !v28 )
      {
        _BitScanReverse(&v30, a5);
        v56 = v30;
        if ( v29 > v30 )
        {
          if ( *(_QWORD *)(v19 + 32) )
            goto LABEL_19;
          v45 = v27 >> 8;
          v58 = 0;
          v28 = !_BitScanReverse(&v46, v45 & 0x7F);
          v57 = v46;
          if ( v28 || (_BitScanReverse(&v47, a5), v58 = v47, v46 <= v47) )
          {
            if ( ((unsigned __int8)a5 & (unsigned __int8)v45 & 0x7F) == 0 )
              goto LABEL_19;
          }
        }
      }
      goto LABEL_17;
    }
    *(_QWORD *)(v19 + 32) = Object;
    v42 = (*(_DWORD *)(a4 + 20) >> 8) & 0x7F;
    v54 = 0;
    v28 = !_BitScanReverse(&v43, v42);
    v53 = v43;
    if ( v28 || (_BitScanReverse(&v44, a5), v54 = v44, v43 <= v44) )
    {
      *(_DWORD *)(v19 + 48) |= 1u;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(a2 + 108) & 1) == 0 )
  {
    v28 = *(_QWORD *)(a4 + 24) == 0LL;
    v72 = *(_QWORD *)(a4 + 24);
    v71 = 0x100000003uLL;
    if ( !v28 )
      PfSnPrefetchFileMetadata(a1, *(_QWORD *)(a2 + 32), &v71, 0LL, 1, a8);
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
                      (((dword_140E66FA0 & 0x10) == 0) << 14) + 4864);
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
        v21 = (unsigned int)_InterlockedExchangeAdd(a1 + 30, 1u);
        v22 = *((_QWORD *)a1 + 14);
        v23 = 3 * v21;
        *(_QWORD *)(v22 + 8 * v23 + 12) = v63;
        LODWORD(v21) = BugCheckParameter2.m256i_i32[6];
        *(_QWORD *)(v22 + 8 * v23) = *(_QWORD *)(BugCheckParameter2.m256i_i64[1] + 24);
        *(_DWORD *)(v22 + 8 * v23 + 8) = v21;
      }
      v16 = Handle;
      v24 = *(_OWORD *)&BugCheckParameter2.m256i_u64[2];
      v18 = a7 != 0 ? 285212672 : 0x4000000;
      *(_OWORD *)v19 = *(_OWORD *)BugCheckParameter2.m256i_i8;
      memset(&BugCheckParameter2, 0, 24);
      v11 = 0LL;
      BugCheckParameter2.m256i_i64[3] = 0x200000000LL;
      *(_OWORD *)(v19 + 16) = v24;
      goto LABEL_10;
    }
  }
LABEL_31:
  if ( (BugCheckParameter2.m256i_i64[3] & 0x400000000LL) != 0 )
  {
    v37 = *((_QWORD *)a1 + 1);
    if ( (BugCheckParameter2.m256i_i64[3] & 0x1000000000LL) == 0 )
    {
      *(_OWORD *)&v69[8] = *(_OWORD *)BugCheckParameter2.m256i_i8;
      v70 = BugCheckParameter2.m256i_i64[2];
      *(_QWORD *)v69 = v37 + 40;
      _InterlockedIncrement((volatile signed __int32 *)(v37 + 84));
      guard_dispatch_icall_no_overrides(v69, v15);
    }
  }
  return (unsigned int)SectionCommon;
}
