/*
 * XREFs of CcMapAndCopyFromCache @ 0x140ABF7A0
 * Callers:
 *     CcCopyReadEx @ 0x1404DC880 (CcCopyReadEx.c)
 *     CcPerformReadAhead @ 0x1404DE7C0 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1404E018C (CcCompleteAsyncRead.c)
 * Callees:
 *     CcDecrementVacbActiveCount @ 0x1402500B0 (CcDecrementVacbActiveCount.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     CcFetchDataForRead @ 0x14025BCE0 (CcFetchDataForRead.c)
 *     CcGetVirtualAddress @ 0x1402D8300 (CcGetVirtualAddress.c)
 *     CcCopyBytesToUserBuffer @ 0x140404FD0 (CcCopyBytesToUserBuffer.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140462750 (CcUpdateSharedCacheMapFlag.c)
 */

char __fastcall CcMapAndCopyFromCache(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        char *a5,
        _DWORD *a6,
        int a7,
        __int64 a8,
        LARGE_INTEGER *a9)
{
  __int64 v9; // rax
  unsigned int v11; // ebp
  __int64 v12; // rbx
  NTSTATUS v13; // r15d
  __int64 v14; // rsi
  _DWORD *v15; // r12
  char *v16; // r14
  int v17; // edi
  char *VirtualAddress; // r10
  bool v19; // zf
  unsigned int v20; // edi
  int v22; // [rsp+50h] [rbp-58h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-50h] BYREF
  char *v24; // [rsp+60h] [rbp-48h]
  int v25; // [rsp+B0h] [rbp+8h]
  __int64 v26; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+C0h] [rbp+18h] BYREF

  v26 = a2;
  v25 = a1;
  v9 = *(_QWORD *)(a1 + 40);
  v11 = a3;
  v23 = 0LL;
  v12 = a2;
  v13 = 0;
  v14 = *(_QWORD *)(v9 + 8);
  if ( !a3 )
    goto LABEL_25;
  v15 = a6;
  v16 = a5;
  while ( 1 )
  {
    v27 = 0;
    v17 = 0;
    v22 = 0;
    VirtualAddress = (char *)CcGetVirtualAddress(v14, v12, (__int64 *)&v23, &v27, 0, v16 == 0LL);
    v24 = VirtualAddress;
    if ( (*(_DWORD *)(v14 + 152) & 8) != 0 )
      break;
    if ( !CcFetchDataForRead(v25, &v26, v11, a4, &v22, v23, a7, a8, a9) )
      goto LABEL_19;
    v17 = v22;
    *v15 |= v22;
    VirtualAddress = v24;
LABEL_7:
    v12 += v27;
    if ( v16 )
    {
      v19 = v22 == 0;
      *(_QWORD *)(*(_QWORD *)(v14 + 512) + 344LL) += v27;
      if ( !v19 )
        *(_QWORD *)(*(_QWORD *)(v14 + 512) + 352LL) += v27;
    }
    else if ( v17 )
    {
      *(_QWORD *)(*(_QWORD *)(v14 + 512) + 360LL) += v27;
    }
    v20 = v27;
    if ( v27 > v11 )
      v20 = v11;
    if ( v16 )
    {
      v13 = CcCopyBytesToUserBuffer(v16, VirtualAddress, v20, (*(_DWORD *)(v14 + 152) & 0x1000) != 0);
      if ( v13 < 0 )
        goto LABEL_20;
      v16 += v20;
    }
    CcDecrementVacbActiveCount((__int64)v23);
    v26 = v12;
    v23 = 0LL;
    v11 -= v20;
    if ( !v11 )
      goto LABEL_22;
  }
  if ( a4 )
    goto LABEL_7;
LABEL_19:
  v13 = -1073741608;
LABEL_20:
  if ( v23 )
    CcDecrementVacbActiveCount((__int64)v23);
LABEL_22:
  if ( v13 == -1073741608 )
    return 0;
  if ( v13 < 0 )
  {
    CcUpdateSharedCacheMapFlag(v14, 8, 1);
    RtlRaiseStatus(v13);
  }
LABEL_25:
  if ( (*(_DWORD *)(v14 + 152) & 8) != 0 )
    CcUpdateSharedCacheMapFlag(v14, 8, 0);
  return 1;
}
