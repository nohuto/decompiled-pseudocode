/*
 * XREFs of FsRtlCheckOplockEx2 @ 0x1403DA5B0
 * Callers:
 *     FsRtlCheckOplockEx @ 0x1403DA350 (FsRtlCheckOplockEx.c)
 *     FsRtlCheckOplock @ 0x1403DA3A0 (FsRtlCheckOplock.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140330618 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x140330A70 (FsRtlpComputeShareableOplockState.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     FsRtlpOplockKeysEqual @ 0x1403DA0A0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403DA480 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpAttachOplockKey @ 0x14041D800 (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockDequeueRH @ 0x140459914 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1388 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E3964 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlGetMarkHandleInfo @ 0x14058052C (FsRtlGetMarkHandleInfo.c)
 *     FsRtlpOplockBreakToNone @ 0x1405813CC (FsRtlpOplockBreakToNone.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14058178C (FsRtlpSyncWithAckTimeout.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlCheckOplockEx2(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // r15d
  __int64 *v12; // rdi
  unsigned int v13; // r14d
  unsigned int v14; // r13d
  __int64 v15; // rbx
  char *v17; // rsi
  _QWORD *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rdx
  _QWORD *v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // r9
  __int64 v24; // rcx
  _QWORD *v25; // rax
  int v26; // r12d
  __int64 v27; // rdx
  char v28; // cl
  int v29; // eax
  unsigned __int8 v30; // al
  int v31; // esi
  bool v32; // r15
  char v33; // r14
  int v34; // edi
  char v35; // al
  __int64 v36; // r12
  bool v37; // zf
  unsigned int v38; // eax
  int v39; // [rsp+20h] [rbp-188h]
  char v40; // [rsp+80h] [rbp-128h] BYREF
  char v41; // [rsp+81h] [rbp-127h]
  unsigned __int8 v42; // [rsp+82h] [rbp-126h]
  char v43; // [rsp+83h] [rbp-125h]
  _BYTE v44[4]; // [rsp+84h] [rbp-124h] BYREF
  char *v45; // [rsp+88h] [rbp-120h]
  int v46; // [rsp+90h] [rbp-118h]
  __int64 v47; // [rsp+98h] [rbp-110h]
  int v48; // [rsp+A0h] [rbp-108h]
  unsigned int v49; // [rsp+A4h] [rbp-104h]
  unsigned int v50; // [rsp+A8h] [rbp-100h]
  __int64 v51; // [rsp+B0h] [rbp-F8h]
  unsigned int v52; // [rsp+B8h] [rbp-F0h] BYREF
  int v53; // [rsp+BCh] [rbp-ECh] BYREF
  int v54; // [rsp+C0h] [rbp-E8h] BYREF
  int v55; // [rsp+C4h] [rbp-E4h]
  unsigned int v56; // [rsp+C8h] [rbp-E0h]
  __int64 v57; // [rsp+D0h] [rbp-D8h]
  __int64 v58; // [rsp+D8h] [rbp-D0h]
  __int64 v59; // [rsp+E0h] [rbp-C8h]
  __int64 v60; // [rsp+E8h] [rbp-C0h]
  _QWORD v61[2]; // [rsp+F0h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+100h] [rbp-A8h] BYREF
  unsigned int *v63; // [rsp+120h] [rbp-88h]
  __int64 v64; // [rsp+128h] [rbp-80h]
  int *v65; // [rsp+130h] [rbp-78h]
  __int64 v66; // [rsp+138h] [rbp-70h]
  _QWORD *v67; // [rsp+140h] [rbp-68h]
  __int64 v68; // [rsp+148h] [rbp-60h]
  int *v69; // [rsp+150h] [rbp-58h]
  __int64 v70; // [rsp+158h] [rbp-50h]

  v55 = a4;
  v10 = a3;
  v49 = a3;
  v47 = a2;
  v12 = a1;
  v56 = a3;
  v51 = a5;
  v60 = a6;
  v59 = a7;
  v58 = a9;
  v57 = a10;
  v13 = 0;
  v14 = 0;
  v50 = 0;
  v15 = *a1;
  if ( a4 )
    return 3221225485LL;
  v17 = *(char **)(a2 + 184);
  v45 = v17;
  if ( (a3 & 4) == 0 )
  {
    if ( (a3 & 0x10000000) == 0 )
    {
      v14 = FsRtlpAttachOplockKey(a2);
      v50 = v14;
    }
    FsRtlpOplockStoreKeyForDeleteOperation(v12, a2, v10);
    if ( v15 != *v12 )
      v15 = *v12;
    v61[1] = v15;
    if ( (v10 & 2) != 0 || !v15 || (*(_DWORD *)(a2 + 16) & 2) != 0 || v14 )
      return v14;
    v40 = (v10 & 0x20000000) != 0;
    LOBYTE(v12) = 1;
    v48 = (int)v12;
    v42 = 1;
    while ( 1 )
    {
      v44[0] = 0;
      v26 = v10 & 0x10;
      if ( (v10 & 0x10) == 0 && v40 == (_BYTE)v26 )
      {
        v48 = *(_DWORD *)(v15 + 144);
        v27 = *(_QWORD *)(v15 + 8);
        v28 = *v17;
        v29 = v48;
        if ( *v17 == 3 )
        {
          LODWORD(v12) = v42;
          if ( (v48 & 0xFFFF4FFE) == 0 )
            LODWORD(v12) = 0;
          v42 = (unsigned __int8)v12;
        }
        else
        {
          LODWORD(v12) = v42;
        }
        v48 = (int)v12;
        if ( v28 == 4 )
        {
          v37 = (v29 & 0xFFFFDFFE) == 0;
          v30 = (unsigned __int8)v12;
          if ( v37 )
            v30 = 0;
          LODWORD(v12) = v30;
          v48 = v30;
          v42 = v30;
        }
        if ( (v10 & 8) == 0 && v28 != 18 && v27 && v27 == *((_QWORD *)v17 + 6) )
        {
          LOBYTE(v12) = 0;
          v48 = (int)v12;
          v42 = 0;
          v14 = v50;
          goto LABEL_129;
        }
        v14 = v50;
      }
      if ( (_BYTE)v12 )
      {
        if ( !v40 )
          ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
        v40 = 1;
        v31 = *(_DWORD *)(v15 + 144);
        if ( v31 != 1 )
        {
          v32 = 0;
          v43 = 0;
          v33 = 0;
          v41 = 0;
          v34 = 0;
          v46 = 0;
          if ( v26 )
          {
            v34 = 20480;
            v46 = 20480;
            v17 = v45;
LABEL_83:
            v36 = v47;
          }
          else
          {
            switch ( *v45 )
            {
              case 0:
                if ( ((v31 & 0x7000) == 0 || (*(_DWORD *)(*((_QWORD *)v45 + 1) + 16LL) & 0xFFEDFE7F) == 0)
                  && ((v31 & 0x1E) == 0 || (*(_DWORD *)(*((_QWORD *)v45 + 1) + 16LL) & 0xFFEFFE7F) == 0)
                  && (*((_DWORD *)v45 + 4) & 0x100000) == 0 )
                {
                  goto LABEL_82;
                }
                v37 = (v31 & 8) == 0;
                v17 = v45;
                if ( v37 || (*(_DWORD *)(*((_QWORD *)v45 + 1) + 16LL) & 0xFFEDFE56) != 0 || (v45[26] & 1) == 0 )
                {
                  v35 = v45[19];
                  if ( ((v35 & 0xFA) != 0 || v35 == 1) && (*((_DWORD *)v45 + 4) & 0x100000) == 0 )
                  {
                    v32 = 1;
                    v43 = 1;
                    v34 = 0x4000;
                    v46 = 0x4000;
                  }
                  else
                  {
LABEL_96:
                    v33 = 1;
                    v41 = 1;
                    v34 = 20480;
                    v46 = 20480;
                  }
                }
                goto LABEL_83;
              case 2:
                v17 = v45;
                if ( (*(_DWORD *)(*((_QWORD *)v45 + 6) + 80LL) & 0x4000) != 0 )
                  goto LABEL_83;
                goto LABEL_74;
              case 3:
                v32 = (v31 & 8) == 0;
                goto LABEL_79;
              case 4:
                goto LABEL_91;
              case 6:
                switch ( *((_DWORD *)v45 + 4) )
                {
                  case 0xA:
                  case 0xB:
                  case 0x28:
                  case 0x41:
                    v34 = 0x2000;
                    v46 = 0x2000;
                    v36 = v47;
                    v37 = (v31 & 0xC) == 0;
                    v17 = v45;
                    if ( !v37 )
                    {
                      v33 = 1;
                      v41 = 1;
                    }
                    break;
                  case 0xD:
                    v36 = v47;
                    v17 = v45;
                    if ( **(_BYTE **)(v47 + 24) )
                    {
                      v34 = 0x2000;
                      v46 = 0x2000;
                    }
                    break;
                  case 0x13:
                  case 0x27:
                    v17 = v45;
                    goto LABEL_96;
                  case 0x14:
                    v17 = v45;
                    if ( !v45[33] )
                    {
                      v33 = 1;
                      v41 = 1;
                      v34 = 20480;
                      v46 = 20480;
                    }
                    goto LABEL_83;
                  case 0x40:
                    v36 = v47;
                    v17 = v45;
                    if ( (**(_DWORD **)(v47 + 24) & 1) != 0 )
                    {
                      v34 = 0x2000;
                      v46 = 0x2000;
                    }
                    break;
                  default:
                    goto LABEL_82;
                }
                break;
              case 9:
                v32 = 1;
LABEL_79:
                v43 = v32;
                goto LABEL_80;
              case 13:
                v38 = *((_DWORD *)v45 + 6);
                if ( v38 > 0x98268 )
                {
                  if ( v38 != 623428 && v38 != 623592 )
                  {
                    v37 = v38 == 639668;
LABEL_90:
                    if ( !v37 )
                      goto LABEL_82;
                  }
                  goto LABEL_91;
                }
                if ( v38 == 623208 )
                  goto LABEL_91;
                if ( v38 != 590076 )
                {
                  if ( v38 == 606820 )
                  {
                    v32 = (v31 & 8) == 0;
                    v43 = v32;
LABEL_80:
                    v34 = 0x4000;
                  }
                  else
                  {
                    if ( v38 != 622792 && v38 != 623112 )
                      goto LABEL_82;
LABEL_91:
                    v33 = 1;
                    v41 = 1;
                    v34 = 20480;
                  }
LABEL_81:
                  v46 = v34;
LABEL_82:
                  v17 = v45;
                  goto LABEL_83;
                }
                v36 = v47;
                if ( (FsRtlGetMarkHandleInfo(v47, v45, 0x140000000uLL, 1LL) & 0x4000) != 0 )
                {
                  v34 = 0x2000;
                  v46 = 0x2000;
                  v37 = (v31 & 0xC) == 0;
                  v17 = v45;
                  if ( !v37 )
                  {
                    v33 = 1;
                    v41 = 1;
                  }
                }
                else
                {
                  v17 = v45;
                }
                break;
              case 17:
                v37 = (v31 & 8) == 0;
                goto LABEL_90;
              case 18:
                v17 = v45;
LABEL_74:
                FsRtlpOplockCleanup(v15, v17, 0LL, 1LL);
                if ( *v17 == 18 && (v49 & 0x20) != 0 )
                {
                  v34 = 0x2000;
                  v46 = 0x2000;
                  if ( (unsigned int)dword_140E06C30 > 5 )
                  {
                    v52 = v49;
                    v63 = &v52;
                    v64 = 4LL;
                    v53 = 0x2000;
                    v65 = &v53;
                    v66 = 4LL;
                    v61[0] = v15;
                    v67 = v61;
                    v68 = 8LL;
                    v54 = *(_DWORD *)(v15 + 144);
                    v69 = &v54;
                    v70 = 4LL;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E06C30,
                      (unsigned __int8 *)byte_140045065,
                      0LL,
                      0LL,
                      6u,
                      &v62);
                  }
                }
                goto LABEL_83;
              case 21:
                v34 = 0x2000;
                goto LABEL_81;
              default:
                goto LABEL_82;
            }
          }
          if ( v32 )
          {
            if ( (*(_DWORD *)(v15 + 144) & 0x1F0FFDF) != 0x10
              && !FsRtlpOplockKeysEqual(*((_QWORD *)v17 + 6), *(_QWORD *)(v15 + 8), 0) )
            {
              v10 = v49;
              v14 = FsRtlpOplockBreakToII(
                      v15,
                      (_DWORD)v17,
                      v36,
                      v49,
                      v39,
                      v51,
                      v60,
                      v59,
                      a8,
                      v58,
                      v57,
                      (__int64)&v40,
                      (__int64)v44);
              v50 = v14;
              goto LABEL_124;
            }
LABEL_123:
            v10 = v49;
          }
          else
          {
            if ( !v33
              || (*(_DWORD *)(v15 + 144) & 0x1F0FFDF) != 0x10
              && FsRtlpOplockKeysEqual(*((_QWORD *)v17 + 6), *(_QWORD *)(v15 + 8), 0) )
            {
              goto LABEL_123;
            }
            v10 = v49;
            v14 = FsRtlpOplockBreakToNone(
                    v15,
                    (_DWORD)v17,
                    v36,
                    v49,
                    v39,
                    v51,
                    v60,
                    v59,
                    a8,
                    v58,
                    v57,
                    (__int64)&v40,
                    (__int64)v44);
            v50 = v14;
          }
LABEL_124:
          if ( !v14 && (*(_DWORD *)(v15 + 144) & v34) != 0 )
          {
            v39 = v55;
            v14 = FsRtlpOplockBreakByCacheFlags(v15, v17, v36, v10);
            v50 = v14;
          }
          LOBYTE(v12) = v48;
          goto LABEL_129;
        }
        v17 = v45;
      }
LABEL_129:
      if ( v40 && (v10 & 0x20000000) == 0 )
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
      if ( !v44[0] )
        return v14;
    }
  }
  v18 = 0LL;
  if ( !v15 )
    return 0LL;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
  if ( *v17 )
  {
    v13 = -1073741811;
LABEL_8:
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
    return v13;
  }
  if ( (*(_DWORD *)(v15 + 144) & 0x10000) == 0 )
    goto LABEL_8;
  v20 = *((_QWORD *)v17 + 6);
  LOBYTE(v19) = 0;
  v21 = (_QWORD *)(v15 + 120);
  v22 = *(_QWORD **)(v15 + 120);
  if ( v22 != (_QWORD *)(v15 + 120) )
  {
    while ( v20 != *(v22 - 4) )
    {
      v22 = (_QWORD *)*v22;
      if ( v22 == v21 )
        goto LABEL_15;
    }
    LOBYTE(v19) = 1;
    v18 = v22 - 7;
  }
LABEL_15:
  if ( !(_BYTE)v19 )
    goto LABEL_8;
  FsRtlpOplockDequeueRH(v18, v20, v19, v21);
  v24 = v18[7];
  v25 = (_QWORD *)v18[8];
  if ( *(_QWORD **)(v24 + 8) != v18 + 7 || (_QWORD *)*v25 != v18 + 7 )
    __fastfail(3u);
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  if ( (_QWORD *)*v23 == v23 )
    *(_DWORD *)(v15 + 144) &= 0xFFFCFFFF;
  if ( v18[5] )
    FsRtlpClearOwner(v15, (__int64)v18);
  if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
    FsRtlpSyncWithAckTimeout(v18 + 11);
  ExFreePoolWithTag(v18, 0);
  FsRtlpComputeShareableOplockState(v15);
  FsRtlpReleaseIrpsWaitingForRH(v15);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
  return 0LL;
}
