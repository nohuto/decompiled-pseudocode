/*
 * XREFs of PfSnGetSectionObject @ 0x14096AFAC
 * Callers:
 *     PfSnPopulateReadList @ 0x14096A9C0 (PfSnPopulateReadList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PfpFileCheckAttributesForPrefetch @ 0x14046F0F0 (PfpFileCheckAttributesForPrefetch.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     IopQueryXxxInformation @ 0x14096A530 (IopQueryXxxInformation.c)
 *     MiCreateSectionCommon @ 0x14096B594 (MiCreateSectionCommon.c)
 *     PfpOpenHandleCreate @ 0x14096B99C (PfpOpenHandleCreate.c)
 *     PfSnPrefetchFileMetadata @ 0x14096BC38 (PfSnPrefetchFileMetadata.c)
 *     PfSnIsSectionPrefetchedAfterPhase @ 0x140A15378 (PfSnIsSectionPrefetchedAfterPhase.c)
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
  __int64 v14; // r9
  __int64 v16; // rdx
  HANDLE v17; // r14
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rbx
  NTSTATUS SectionCommon; // edi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int128 v25; // xmm1
  __int64 v26; // rdx
  unsigned int v27; // ecx
  bool v28; // zf
  unsigned int v29; // edx
  unsigned int v30; // eax
  __int64 v31; // rax
  int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // edx
  unsigned int v45; // eax
  int v46; // edx
  ULONGLONG ullMultiplicand; // [rsp+40h] [rbp-C0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __m256i BugCheckParameter2; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v50; // [rsp+90h] [rbp-70h]
  unsigned int v51; // [rsp+94h] [rbp-6Ch]
  unsigned int v52; // [rsp+98h] [rbp-68h]
  unsigned int v53; // [rsp+9Ch] [rbp-64h]
  unsigned int v54; // [rsp+A0h] [rbp-60h]
  unsigned int v55; // [rsp+A4h] [rbp-5Ch]
  unsigned int v56; // [rsp+A8h] [rbp-58h]
  int v57; // [rsp+ACh] [rbp-54h]
  unsigned int v58; // [rsp+B0h] [rbp-50h]
  int v59; // [rsp+B4h] [rbp-4Ch]
  _QWORD *v60; // [rsp+B8h] [rbp-48h]
  __int64 v61; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-30h] BYREF
  int v64[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v65; // [rsp+E8h] [rbp-18h]
  __int128 v66; // [rsp+F8h] [rbp-8h]
  _BYTE v67[24]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v68; // [rsp+120h] [rbp+20h]
  __int128 v69; // [rsp+128h] [rbp+28h] BYREF
  __int64 v70; // [rsp+138h] [rbp+38h]

  v60 = a9;
  v11 = 0LL;
  v70 = 0LL;
  v14 = 0LL;
  *(_QWORD *)&v66 = 0LL;
  *a9 = 0LL;
  v16 = a8;
  DWORD2(v66) = 0;
  v17 = 0LL;
  BugCheckParameter2.m256i_i64[3] = 0x200000000LL;
  *a10 = 0;
  v18 = *(_QWORD *)a1;
  v61 = 0LL;
  memset(&BugCheckParameter2, 0, 24);
  v19 = a7 != 0 ? 285212672 : 0x4000000;
  Handle = 0LL;
  v69 = 0LL;
  *(_OWORD *)v64 = 0LL;
  v65 = 0LL;
  if ( a6 >= *(_DWORD *)(v18 + 88) )
  {
    SectionCommon = -1073741811;
    goto LABEL_31;
  }
  v20 = *((_QWORD *)a1 + 7) + 56LL * a6;
  if ( _bittest64((const signed __int64 *)(v20 + 24), 0x22u) )
  {
LABEL_10:
    if ( a7 )
    {
      if ( *(_QWORD *)(v20 + 32) )
      {
        if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, a5) )
        {
          *(_DWORD *)(v20 + 48) |= v46;
          *a10 = v46;
        }
        goto LABEL_19;
      }
    }
    else if ( *(_QWORD *)(v20 + 40) )
    {
      v19 = a5;
      v37 = (*(_DWORD *)(a4 + 20) >> 1) & 0x7F;
      v50 = 0;
      v28 = !_BitScanReverse(&v38, v37);
      if ( v28 || (_BitScanReverse(&v39, a5), v50 = v39, v38 <= v39) )
      {
LABEL_17:
        *(_DWORD *)(v20 + 48) |= 2u;
LABEL_18:
        *a10 = 1;
      }
LABEL_19:
      v31 = *(_QWORD *)(v20 + 8);
      v58 = 0;
      *v60 = v31;
      v16 = *(unsigned int *)(a4 + 20);
      v32 = *(_DWORD *)(a4 + 20) >> 8;
      v28 = !_BitScanReverse((unsigned int *)&v14, BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F);
      v57 = v14;
      if ( v28 || (_BitScanReverse(&v33, v19), v58 = v33, (unsigned int)v14 <= v33) )
      {
        v16 = (unsigned __int8)v16 >> 1;
        LODWORD(v60) = 0;
        v28 = !_BitScanReverse((unsigned int *)&v14, v16);
        v59 = v14;
        if ( v28 || (_BitScanReverse(&v34, v19), LODWORD(v60) = v34, (unsigned int)v14 <= v34) )
        {
          if ( ((unsigned __int8)v19 & (unsigned __int8)v32 & 0x7F) == 0 || a7 )
            *(_DWORD *)(v20 + 48) |= 4u;
        }
      }
      SectionCommon = 0;
      goto LABEL_29;
    }
    v64[0] = 48;
    *(_QWORD *)&v64[2] = 0LL;
    DWORD2(v65) = 576;
    *(_QWORD *)&v65 = 0LL;
    v66 = v11;
    v26 = *(_QWORD *)v20;
    *(_OWORD *)v67 = v11;
    LODWORD(ullMultiplicand) = 0;
    SectionCommon = MiCreateSectionCommon(
                      (int)&Handle,
                      5,
                      (int)v64,
                      0,
                      2,
                      v19,
                      v26,
                      0LL,
                      ullMultiplicand,
                      1,
                      KeGetCurrentThread()->PreviousMode);
    if ( SectionCommon < 0 )
    {
      v17 = Handle;
LABEL_29:
      if ( v17 )
        NtClose(v17);
      goto LABEL_31;
    }
    v17 = Handle;
    Object = 0LL;
    SectionCommon = ObReferenceObjectByHandle(Handle, 5u, MmSectionObjectType, 0, &Object, 0LL);
    if ( SectionCommon < 0 )
    {
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_29;
    }
    v19 = a5;
    if ( !a7 )
    {
      *(_QWORD *)(v20 + 40) = Object;
      v27 = *(_DWORD *)(a4 + 20);
      v54 = 0;
      v28 = !_BitScanReverse(&v29, (unsigned __int8)v27 >> 1);
      v53 = v29;
      if ( !v28 )
      {
        _BitScanReverse(&v30, a5);
        v54 = v30;
        if ( v29 > v30 )
        {
          if ( *(_QWORD *)(v20 + 32) )
            goto LABEL_19;
          v43 = v27 >> 8;
          v56 = 0;
          v28 = !_BitScanReverse(&v44, v43 & 0x7F);
          v55 = v44;
          if ( v28 || (_BitScanReverse(&v45, a5), v56 = v45, v44 <= v45) )
          {
            if ( ((unsigned __int8)a5 & (unsigned __int8)v43 & 0x7F) == 0 )
              goto LABEL_19;
          }
        }
      }
      goto LABEL_17;
    }
    *(_QWORD *)(v20 + 32) = Object;
    v40 = (*(_DWORD *)(a4 + 20) >> 8) & 0x7F;
    v52 = 0;
    v28 = !_BitScanReverse(&v41, v40);
    v51 = v41;
    if ( v28 || (_BitScanReverse(&v42, a5), v52 = v42, v41 <= v42) )
    {
      *(_DWORD *)(v20 + 48) |= 1u;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(a2 + 108) & 1) == 0 )
  {
    v28 = *(_QWORD *)(a4 + 24) == 0LL;
    v70 = *(_QWORD *)(a4 + 24);
    v69 = 0x100000003uLL;
    if ( !v28 )
      PfSnPrefetchFileMetadata(a1, *(_QWORD *)(a2 + 32), &v69, 0LL, 1, a8);
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
                      (((dword_140E66E50 & 0x10) == 0) << 14) + 4864);
    if ( SectionCommon >= 0 )
    {
      if ( *((_DWORD *)a1 + 30) < *((_DWORD *)a1 + 31)
        && (int)IopQueryXxxInformation(
                  (struct _FILE_OBJECT *)BugCheckParameter2.m256i_i64[1],
                  6,
                  8u,
                  0,
                  (__int64)&v61,
                  &v63,
                  1) >= 0 )
      {
        v22 = (unsigned int)_InterlockedExchangeAdd(a1 + 30, 1u);
        v23 = *((_QWORD *)a1 + 14);
        v24 = 3 * v22;
        *(_QWORD *)(v23 + 8 * v24 + 12) = v61;
        LODWORD(v22) = BugCheckParameter2.m256i_i32[6];
        *(_QWORD *)(v23 + 8 * v24) = *(_QWORD *)(BugCheckParameter2.m256i_i64[1] + 24);
        *(_DWORD *)(v23 + 8 * v24 + 8) = v22;
      }
      v17 = Handle;
      v25 = *(_OWORD *)&BugCheckParameter2.m256i_u64[2];
      LODWORD(v19) = a7 != 0 ? 285212672 : 0x4000000;
      *(_OWORD *)v20 = *(_OWORD *)BugCheckParameter2.m256i_i8;
      memset(&BugCheckParameter2, 0, 24);
      v11 = 0LL;
      BugCheckParameter2.m256i_i64[3] = 0x200000000LL;
      *(_OWORD *)(v20 + 16) = v25;
      goto LABEL_10;
    }
  }
LABEL_31:
  if ( (BugCheckParameter2.m256i_i64[3] & 0x400000000LL) != 0 )
  {
    v35 = *((_QWORD *)a1 + 1);
    if ( (BugCheckParameter2.m256i_i64[3] & 0x1000000000LL) == 0 )
    {
      *(_OWORD *)&v67[8] = *(_OWORD *)BugCheckParameter2.m256i_i8;
      v68 = BugCheckParameter2.m256i_i64[2];
      *(_QWORD *)v67 = v35 + 40;
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 84));
      guard_dispatch_icall_no_overrides(v67, v16, v19, v14);
    }
  }
  return (unsigned int)SectionCommon;
}
