/*
 * XREFs of FsRtlCheckOplockForFsFilterCallback @ 0x1409F2950
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     _tlgWriteAgg @ 0x1403BAC2C (_tlgWriteAgg.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     Feature_OpocksAndMappedSections__private_ReportDeviceUsage @ 0x140463FC0 (Feature_OpocksAndMappedSections__private_ReportDeviceUsage.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0 (FsRtlpOplockBreakByCacheFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall FsRtlCheckOplockForFsFilterCallback(__int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rbx
  char v7; // di
  int v8; // r15d
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r10
  char v13[4]; // [rsp+80h] [rbp-138h] BYREF
  int v14; // [rsp+84h] [rbp-134h] BYREF
  int v15; // [rsp+88h] [rbp-130h] BYREF
  _DWORD v16[3]; // [rsp+8Ch] [rbp-12Ch] BYREF
  __int64 v17; // [rsp+98h] [rbp-120h] BYREF
  _QWORD v18[2]; // [rsp+A0h] [rbp-118h] BYREF
  _BYTE v19[48]; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-D8h]
  _BYTE v21[32]; // [rsp+100h] [rbp-B8h] BYREF
  __int64 *v22; // [rsp+120h] [rbp-98h]
  __int64 v23; // [rsp+128h] [rbp-90h]
  int *v24; // [rsp+130h] [rbp-88h]
  __int64 v25; // [rsp+138h] [rbp-80h]
  int *v26; // [rsp+140h] [rbp-78h]
  __int64 v27; // [rsp+148h] [rbp-70h]
  _DWORD *v28; // [rsp+150h] [rbp-68h]
  __int64 v29; // [rsp+158h] [rbp-60h]
  _QWORD *v30; // [rsp+160h] [rbp-58h]
  __int64 v31; // [rsp+168h] [rbp-50h]

  v5 = 0;
  v6 = *a1;
  v18[1] = *a1;
  if ( (a3 & 0xFFFFFFF7) != 0 )
    return 3221225485LL;
  Feature_OpocksAndMappedSections__private_ReportDeviceUsage();
  if ( v6 )
  {
    v13[0] = 0;
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 152));
    v7 = 1;
    v13[0] = 1;
    v8 = *(_DWORD *)(v6 + 144);
    if ( (v8 & 0x7000) != 0 )
    {
      memset_0(v19, 0, 0x48uLL);
      v19[0] = 4;
      v20 = *(_QWORD *)(a2 + 16);
      if ( *(_BYTE *)(a2 + 4) == 0xFF && *(_DWORD *)(a2 + 24) == 1 && (*(_DWORD *)(a2 + 28) & 0x44) != 0 )
      {
        if ( (unsigned int)dword_140E06C30 > 5 && tlgKeywordOn((__int64)&dword_140E06C30, 0x400000000000LL) )
        {
          v17 = 1LL;
          v22 = &v17;
          v23 = 8LL;
          v14 = v9;
          v24 = &v14;
          v25 = v11;
          v15 = v10;
          v26 = &v15;
          v27 = v11;
          v16[0] = v8;
          v28 = v16;
          v29 = v11;
          v18[0] = 0x1000000LL;
          v30 = v18;
          v31 = 8LL;
          tlgWriteAgg((__int64)&dword_140E06C30, (unsigned __int8 *)&word_140044ADE, v9, 7u, (__int64)v21);
        }
        v5 = FsRtlpOplockBreakByCacheFlags(
               v6,
               (__int64)v19,
               0LL,
               a3,
               0,
               20480,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               v13,
               0LL);
        v16[1] = v5;
        v7 = v13[0];
      }
    }
    if ( v7 )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 152));
  }
  return v5;
}
