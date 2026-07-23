/*
 * XREFs of FsRtlCheckOplockForFsFilterCallback @ 0x1409E64C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     Feature_OpocksAndMappedSections__private_ReportDeviceUsage @ 0x140459D1C (Feature_OpocksAndMappedSections__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall FsRtlCheckOplockForFsFilterCallback(__int64 *a1, __int64 a2, int a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rbx
  char v7; // di
  int v8; // r15d
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r10
  __int64 v13; // [rsp+20h] [rbp-198h]
  char v14[4]; // [rsp+80h] [rbp-138h] BYREF
  int v15; // [rsp+84h] [rbp-134h] BYREF
  int v16; // [rsp+88h] [rbp-130h] BYREF
  _DWORD v17[3]; // [rsp+8Ch] [rbp-12Ch] BYREF
  __int64 v18; // [rsp+98h] [rbp-120h] BYREF
  _QWORD v19[2]; // [rsp+A0h] [rbp-118h] BYREF
  _BYTE v20[48]; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-D8h]
  _BYTE v22[32]; // [rsp+100h] [rbp-B8h] BYREF
  __int64 *v23; // [rsp+120h] [rbp-98h]
  __int64 v24; // [rsp+128h] [rbp-90h]
  int *v25; // [rsp+130h] [rbp-88h]
  __int64 v26; // [rsp+138h] [rbp-80h]
  int *v27; // [rsp+140h] [rbp-78h]
  __int64 v28; // [rsp+148h] [rbp-70h]
  _DWORD *v29; // [rsp+150h] [rbp-68h]
  __int64 v30; // [rsp+158h] [rbp-60h]
  _QWORD *v31; // [rsp+160h] [rbp-58h]
  __int64 v32; // [rsp+168h] [rbp-50h]

  v5 = 0;
  v6 = *a1;
  v19[1] = *a1;
  if ( (a3 & 0xFFFFFFF7) != 0 )
    return 3221225485LL;
  Feature_OpocksAndMappedSections__private_ReportDeviceUsage();
  if ( v6 )
  {
    v14[0] = 0;
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 152));
    v7 = 1;
    v14[0] = 1;
    v8 = *(_DWORD *)(v6 + 144);
    if ( (v8 & 0x7000) != 0 )
    {
      memset_0(v20, 0, 0x48uLL);
      v20[0] = 4;
      v21 = *(_QWORD *)(a2 + 16);
      if ( *(_BYTE *)(a2 + 4) == 0xFF && *(_DWORD *)(a2 + 24) == 1 && (*(_DWORD *)(a2 + 28) & 0x44) != 0 )
      {
        if ( (unsigned int)dword_140E06C30 > 5 && tlgKeywordOn((__int64)&dword_140E06C30, 0x400000000000LL) )
        {
          v18 = 1LL;
          v23 = &v18;
          v24 = 8LL;
          v15 = v9;
          v25 = &v15;
          v26 = v11;
          v16 = v10;
          v27 = &v16;
          v28 = v11;
          v17[0] = v8;
          v29 = v17;
          v30 = v11;
          v19[0] = 0x1000000LL;
          v31 = v19;
          v32 = 8LL;
          tlgWriteAgg((__int64)&dword_140E06C30, (unsigned __int8 *)&byte_1400453EF, v9, 7u, (__int64)v22);
        }
        LODWORD(v13) = 0;
        v5 = FsRtlpOplockBreakByCacheFlags(
               v6,
               (__int64)v20,
               0LL,
               a3,
               v13,
               20480,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               v14,
               0LL);
        v17[1] = v5;
        v7 = v14[0];
      }
    }
    if ( v7 )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 152));
  }
  return v5;
}
