/*
 * XREFs of FsRtlCheckUpperOplock @ 0x1406FF010
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404A9C7C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404E19F4 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E44FC (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1404E4794 (FsRtlpOplockBreakToNone.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A0BC94 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlCheckUpperOplock(__int64 **a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v7; // r15d
  __int64 *v8; // rdi
  bool v9; // r14
  int v10; // esi
  unsigned int v11; // ebx
  unsigned int v12; // r10d
  __int64 *i; // rsi
  __int16 v14; // r10
  char v15; // al
  int v16; // r10d
  __int64 v17; // r15
  bool v18; // zf
  __int64 v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v23; // [rsp+20h] [rbp-1A8h]
  char v24; // [rsp+80h] [rbp-148h] BYREF
  char v25; // [rsp+81h] [rbp-147h]
  unsigned __int8 v26; // [rsp+82h] [rbp-146h] BYREF
  int v27; // [rsp+84h] [rbp-144h]
  __int64 v28; // [rsp+88h] [rbp-140h] BYREF
  __int64 v29; // [rsp+90h] [rbp-138h] BYREF
  unsigned int v30; // [rsp+98h] [rbp-130h] BYREF
  unsigned int v31; // [rsp+9Ch] [rbp-12Ch] BYREF
  __int64 *v32; // [rsp+A0h] [rbp-128h] BYREF
  __int64 *v33; // [rsp+A8h] [rbp-120h]
  _BYTE v34[80]; // [rsp+B0h] [rbp-118h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+100h] [rbp-C8h] BYREF
  unsigned int *v36; // [rsp+120h] [rbp-A8h]
  __int64 v37; // [rsp+128h] [rbp-A0h]
  unsigned __int8 *v38; // [rsp+130h] [rbp-98h]
  __int64 v39; // [rsp+138h] [rbp-90h]
  unsigned int *v40; // [rsp+140h] [rbp-88h]
  __int64 v41; // [rsp+148h] [rbp-80h]
  __int64 *v42; // [rsp+150h] [rbp-78h]
  __int64 v43; // [rsp+158h] [rbp-70h]
  __int64 **v44; // [rsp+160h] [rbp-68h]
  __int64 v45; // [rsp+168h] [rbp-60h]
  __int64 *v46; // [rsp+170h] [rbp-58h]
  __int64 v47; // [rsp+178h] [rbp-50h]

  v29 = a4;
  v28 = a5;
  v7 = ((a2 & 1) << 12) | ((a2 & 6) << 12);
  v33 = *a1;
  v8 = v33;
  v24 = 0;
  v9 = 0;
  v25 = 0;
  v10 = 0;
  v26 = 0;
  memset_0(v34, 0, 0x48uLL);
  v11 = 0;
  if ( !v33 )
    return v11;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)v33[19]);
  v24 = 1;
  v12 = *((_DWORD *)v33 + 36);
  if ( v12 != 1 )
  {
    if ( (a6 & 0x20000) != 0 )
    {
      if ( ((v12 - 4096) & 0xFFFFFFEF) != 0 )
      {
        v11 = -1073739511;
        v27 = -1073739511;
      }
      else
      {
        for ( i = (__int64 *)v33[5]; i != v33 + 5; i = (__int64 *)*i )
        {
          if ( *(_DWORD *)(i[2] + 24) == 590400 )
          {
            i = (__int64 *)i[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0x1000u, (__int64)v33);
          }
        }
        FsRtlpComputeShareableOplockState(v33);
      }
      goto LABEL_38;
    }
    if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(v12, v7) )
    {
      if ( v7 )
      {
        if ( v7 != 4096 )
        {
          if ( v7 != 12288 )
          {
            if ( v7 != 20480 )
            {
              v11 = -1073741597;
              v27 = -1073741597;
              goto LABEL_38;
            }
            v10 = 0x2000;
            v9 = (v14 & 4) != 0;
            goto LABEL_19;
          }
          v9 = 1;
LABEL_21:
          v10 = 0x4000;
LABEL_19:
          v15 = v25;
          goto LABEL_27;
        }
        v9 = 1;
        v16 = v14 & 0x5000;
        if ( v16 == 20480 )
        {
          v26 = 1;
          goto LABEL_21;
        }
        v15 = v25;
        if ( v16 )
          v10 = v16;
      }
      else
      {
        v15 = 1;
        v10 = 28672;
      }
LABEL_27:
      v34[0] = 3;
      v17 = v28;
      v18 = !v9;
      v19 = v29;
      if ( v18 )
      {
        if ( !v15 )
        {
LABEL_32:
          if ( !v11 && ((_DWORD)v8[18] & v10) != 0 )
          {
            v21 = FsRtlpOplockBreakByCacheFlags(
                    (__int64)v8,
                    (__int64)v34,
                    0LL,
                    a6 | v26,
                    0,
                    v10,
                    0LL,
                    0LL,
                    a3,
                    v19,
                    v17,
                    0LL,
                    0LL,
                    0LL,
                    &v24,
                    0LL);
            v11 = v21;
            v27 = v21;
            if ( v26 )
            {
              if ( (unsigned int)dword_140E06C30 > 5 )
              {
                v30 = v21;
                v36 = &v30;
                v37 = 4LL;
                v26 = v24;
                v38 = &v26;
                v39 = 1LL;
                v31 = a6;
                v40 = &v31;
                v41 = 4LL;
                LODWORD(v28) = v10;
                v42 = &v28;
                v43 = 4LL;
                v32 = v8;
                v44 = &v32;
                v45 = 8LL;
                LODWORD(v29) = *((_DWORD *)v8 + 36);
                v46 = &v29;
                v47 = 4LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E06C30,
                  (unsigned __int8 *)byte_140044A1D,
                  0LL,
                  0LL,
                  8u,
                  &v35);
              }
              v11 = FsRtlpOplockBreakByCacheFlags(
                      (__int64)v8,
                      (__int64)v34,
                      0LL,
                      a6,
                      0,
                      0x2000,
                      0LL,
                      0LL,
                      a3,
                      v19,
                      v17,
                      0LL,
                      0LL,
                      0LL,
                      &v24,
                      0LL);
              v27 = v11;
            }
          }
          goto LABEL_38;
        }
        v20 = FsRtlpOplockBreakToNone((__int64)v33, (__int64)v34, 0LL, a6, v23, a3, v29, v28, 0LL, 0LL, 0LL, &v24, 0LL);
      }
      else
      {
        v20 = FsRtlpOplockBreakToII((__int64)v33, (__int64)v34, 0LL, a6, v23, a3, v29, v28, 0LL, 0LL, 0LL, &v24, 0LL);
      }
      v27 = v20;
      v11 = v20;
      goto LABEL_32;
    }
  }
LABEL_38:
  if ( v24 )
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)v8[19]);
  return v11;
}
