/*
 * XREFs of FsRtlCheckUpperOplock @ 0x140708AB0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403CB79C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockBreakToII @ 0x1403CE520 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404DA8E8 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockBreakToNone @ 0x14057E780 (FsRtlpOplockBreakToNone.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A0E080 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlCheckUpperOplock(__int64 *a1, char a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v7; // r15d
  __int64 v8; // rdi
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
  __int64 v23; // [rsp+20h] [rbp-1A8h]
  __int64 v24; // [rsp+20h] [rbp-1A8h]
  char v25; // [rsp+80h] [rbp-148h] BYREF
  char v26; // [rsp+81h] [rbp-147h]
  unsigned __int8 v27; // [rsp+82h] [rbp-146h] BYREF
  int v28; // [rsp+84h] [rbp-144h]
  __int64 v29; // [rsp+88h] [rbp-140h] BYREF
  __int64 v30; // [rsp+90h] [rbp-138h] BYREF
  unsigned int v31; // [rsp+98h] [rbp-130h] BYREF
  int v32; // [rsp+9Ch] [rbp-12Ch] BYREF
  __int64 v33; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-120h]
  _BYTE v35[80]; // [rsp+B0h] [rbp-118h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+100h] [rbp-C8h] BYREF
  unsigned int *v37; // [rsp+120h] [rbp-A8h]
  __int64 v38; // [rsp+128h] [rbp-A0h]
  unsigned __int8 *v39; // [rsp+130h] [rbp-98h]
  __int64 v40; // [rsp+138h] [rbp-90h]
  int *v41; // [rsp+140h] [rbp-88h]
  __int64 v42; // [rsp+148h] [rbp-80h]
  __int64 *v43; // [rsp+150h] [rbp-78h]
  __int64 v44; // [rsp+158h] [rbp-70h]
  __int64 *v45; // [rsp+160h] [rbp-68h]
  __int64 v46; // [rsp+168h] [rbp-60h]
  __int64 *v47; // [rsp+170h] [rbp-58h]
  __int64 v48; // [rsp+178h] [rbp-50h]

  v30 = a4;
  v29 = a5;
  v7 = ((a2 & 1) << 12) | ((a2 & 6) << 12);
  v34 = *a1;
  v8 = v34;
  v25 = 0;
  v9 = 0;
  v26 = 0;
  v10 = 0;
  v27 = 0;
  memset_0(v35, 0, 0x48uLL);
  v11 = 0;
  if ( !v34 )
    return v11;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v34 + 152));
  v25 = 1;
  v12 = *(_DWORD *)(v34 + 144);
  if ( v12 != 1 )
  {
    if ( (a6 & 0x20000) != 0 )
    {
      if ( ((v12 - 4096) & 0xFFFFFFEF) != 0 )
      {
        v11 = -1073739511;
        v28 = -1073739511;
      }
      else
      {
        for ( i = *(__int64 **)(v34 + 40); i != (__int64 *)(v34 + 40); i = (__int64 *)*i )
        {
          if ( *(_DWORD *)(i[2] + 24) == 590400 )
          {
            i = (__int64 *)i[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0x1000u, v34);
          }
        }
        FsRtlpComputeShareableOplockState(v34);
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
              v28 = -1073741597;
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
          v15 = v26;
          goto LABEL_27;
        }
        v9 = 1;
        v16 = v14 & 0x5000;
        if ( v16 == 20480 )
        {
          v27 = 1;
          goto LABEL_21;
        }
        v15 = v26;
        if ( v16 )
          v10 = v16;
      }
      else
      {
        v15 = 1;
        v10 = 28672;
      }
LABEL_27:
      v35[0] = 3;
      v17 = v29;
      v18 = !v9;
      v19 = v30;
      if ( v18 )
      {
        if ( !v15 )
        {
LABEL_32:
          if ( !v11 && (*(_DWORD *)(v8 + 144) & v10) != 0 )
          {
            LODWORD(v23) = 0;
            v21 = FsRtlpOplockBreakByCacheFlags(
                    v8,
                    (__int64)v35,
                    0LL,
                    a6 | (unsigned int)v27,
                    v23,
                    v10,
                    0LL,
                    0LL,
                    a3,
                    v19,
                    v17,
                    0LL,
                    0LL,
                    0LL,
                    &v25,
                    0LL);
            v11 = v21;
            v28 = v21;
            if ( v27 )
            {
              if ( (unsigned int)dword_140E06C30 > 5 )
              {
                v31 = v21;
                v37 = &v31;
                v38 = 4LL;
                v27 = v25;
                v39 = &v27;
                v40 = 1LL;
                v32 = a6;
                v41 = &v32;
                v42 = 4LL;
                LODWORD(v29) = v10;
                v43 = &v29;
                v44 = 4LL;
                v33 = v8;
                v45 = &v33;
                v46 = 8LL;
                LODWORD(v30) = *(_DWORD *)(v8 + 144);
                v47 = &v30;
                v48 = 4LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E06C30,
                  (unsigned __int8 *)&byte_14004530F,
                  0LL,
                  0LL,
                  8u,
                  &v36);
              }
              LODWORD(v24) = 0;
              v11 = FsRtlpOplockBreakByCacheFlags(
                      v8,
                      (__int64)v35,
                      0LL,
                      a6,
                      v24,
                      0x2000,
                      0LL,
                      0LL,
                      a3,
                      v19,
                      v17,
                      0LL,
                      0LL,
                      0LL,
                      &v25,
                      0LL);
              v28 = v11;
            }
          }
          goto LABEL_38;
        }
        v20 = FsRtlpOplockBreakToNone(v34, (__int64)v35, 0LL, a6, v23, a3, v30, v29, 0LL, 0LL, 0LL, &v25, 0LL);
      }
      else
      {
        v20 = FsRtlpOplockBreakToII(v34, (__int64)v35, 0LL, a6, v23, a3, v30, v29, 0LL, 0LL, 0LL, &v25, 0LL);
      }
      v28 = v20;
      v11 = v20;
      goto LABEL_32;
    }
  }
LABEL_38:
  if ( v25 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v8 + 152));
  return v11;
}
