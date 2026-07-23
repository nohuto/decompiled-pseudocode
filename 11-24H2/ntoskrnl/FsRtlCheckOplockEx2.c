/*
 * XREFs of FsRtlCheckOplockEx2 @ 0x1403CE7F0
 * Callers:
 *     FsRtlCheckOplockEx @ 0x1403CE7A0 (FsRtlCheckOplockEx.c)
 *     FsRtlCheckOplock @ 0x1403CF460 (FsRtlCheckOplock.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1402B8E90 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockCleanup @ 0x1403CDA80 (FsRtlpOplockCleanup.c)
 *     IoSetOplockKeyContext @ 0x1403CE0DC (IoSetOplockKeyContext.c)
 *     FsRtlpOplockKeysEqual @ 0x1403CE290 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockBreakToII @ 0x1403CE520 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403CF540 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockDequeueRH @ 0x14044E644 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1404683A4 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404DA8E8 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlGetMarkHandleInfo @ 0x14057D99C (FsRtlGetMarkHandleInfo.c)
 *     FsRtlpFreeRHOpContext @ 0x14057E1A0 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpOplockBreakToNone @ 0x14057E780 (FsRtlpOplockBreakToNone.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x140970D40 (FsRtlFindExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x140977BD0 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x140990A10 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x140A133B0 (FsRtlAcknowledgeEcp.c)
 */

__int64 __fastcall FsRtlCheckOplockEx2(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // r12
  unsigned int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _ECP_LIST *v18; // r12
  struct _ECP_LIST *v19; // rdx
  __int64 v21; // r8
  char v22; // cl
  struct _KTHREAD *CurrentThread; // r14
  struct _ECP_LIST *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // ecx
  char *v29; // r14
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  signed __int32 v32; // ett
  int v33; // r14d
  char v34; // al
  int v35; // esi
  bool v36; // cl
  unsigned __int8 v37; // al
  char v38; // al
  int v39; // eax
  bool v40; // zf
  bool v41; // al
  bool v42; // zf
  unsigned int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rdi
  __int64 v49; // rcx
  _QWORD *v50; // rax
  int Timeout; // [rsp+20h] [rbp-1D8h]
  bool v52; // [rsp+84h] [rbp-174h]
  bool v53; // [rsp+88h] [rbp-170h] BYREF
  unsigned __int8 v54; // [rsp+89h] [rbp-16Fh]
  char v55; // [rsp+8Ah] [rbp-16Eh]
  char v56; // [rsp+8Bh] [rbp-16Dh] BYREF
  int v57; // [rsp+8Ch] [rbp-16Ch]
  int v58; // [rsp+90h] [rbp-168h]
  unsigned int v59; // [rsp+94h] [rbp-164h]
  char v61; // [rsp+99h] [rbp-15Fh]
  PVOID P; // [rsp+A0h] [rbp-158h] BYREF
  int v63; // [rsp+A8h] [rbp-150h]
  PVOID EcpContext; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-140h]
  __int64 v66; // [rsp+C0h] [rbp-138h] BYREF
  int v67; // [rsp+C8h] [rbp-130h]
  unsigned int v68; // [rsp+D0h] [rbp-128h]
  unsigned int v69; // [rsp+D8h] [rbp-120h]
  unsigned int v70; // [rsp+DCh] [rbp-11Ch] BYREF
  __int64 v71; // [rsp+E0h] [rbp-118h]
  __int64 v72; // [rsp+E8h] [rbp-110h]
  __int64 v73; // [rsp+F0h] [rbp-108h]
  int v74; // [rsp+F8h] [rbp-100h] BYREF
  struct _ECP_LIST *ExtraCreateParameter[2]; // [rsp+100h] [rbp-F8h] BYREF
  struct _ECP_LIST *v76; // [rsp+110h] [rbp-E8h]
  struct _KTHREAD *v77; // [rsp+118h] [rbp-E0h]
  _QWORD v78[3]; // [rsp+120h] [rbp-D8h] BYREF
  GUID EcpType; // [rsp+138h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+150h] [rbp-A8h] BYREF
  unsigned int *v81; // [rsp+170h] [rbp-88h]
  __int64 v82; // [rsp+178h] [rbp-80h]
  int *v83; // [rsp+180h] [rbp-78h]
  __int64 v84; // [rsp+188h] [rbp-70h]
  _QWORD *v85; // [rsp+190h] [rbp-68h]
  __int64 v86; // [rsp+198h] [rbp-60h]
  __int64 *v87; // [rsp+1A0h] [rbp-58h]
  __int64 v88; // [rsp+1A8h] [rbp-50h]

  v67 = a4;
  v12 = (__int64)a1;
  v68 = a3;
  v65 = a5;
  P = a6;
  v73 = a7;
  v72 = a9;
  v71 = a10;
  v59 = 0;
  v13 = *a1;
  if ( a4 )
    return 3221225485LL;
  v14 = *(_QWORD *)(a2 + 184);
  v66 = v14;
  if ( (a3 & 4) != 0 )
  {
    P = 0LL;
    if ( !v13 )
      return 0LL;
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v13 + 152));
    if ( *(_BYTE *)v14 )
    {
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v13 + 152));
      return 3221225485LL;
    }
    else
    {
      if ( (*(_DWORD *)(v13 + 144) & 0x10000) != 0
        && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(v13, *(_QWORD *)(v14 + 48), &P) )
      {
        v48 = P;
        FsRtlpOplockDequeueRH(P, v45, v46, v47);
        v49 = v48[7];
        v50 = (_QWORD *)v48[8];
        if ( *(_QWORD **)(v49 + 8) != v48 + 7 || (_QWORD *)*v50 != v48 + 7 )
          __fastfail(3u);
        *v50 = v49;
        *(_QWORD *)(v49 + 8) = v50;
        if ( *(_QWORD *)(v13 + 120) == v13 + 120 )
          *(_DWORD *)(v13 + 144) &= 0xFFFCFFFF;
        if ( v48[5] )
          FsRtlpClearOwner(v13, (__int64)v48);
        FsRtlpFreeRHOpContext(v48);
        FsRtlpComputeShareableOplockState(v13);
        FsRtlpReleaseIrpsWaitingForRH(v13);
      }
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v13 + 152));
      return 0LL;
    }
  }
  if ( (a3 & 0x10000000) == 0 )
  {
    v15 = 0;
    if ( *(_BYTE *)v14 )
      goto LABEL_11;
    v16 = *(_QWORD *)(*(_QWORD *)(v14 + 48) + 208LL);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 56);
      if ( v17 )
      {
        if ( (*(_BYTE *)(v17 + 2) & 3) != 0 )
          goto LABEL_11;
      }
    }
    EcpContext = 0LL;
    ExtraCreateParameter[0] = 0LL;
    IoGetIrpExtraCreateParameter((PIRP)a2, ExtraCreateParameter);
    v18 = ExtraCreateParameter[0];
    if ( !ExtraCreateParameter[0] )
      goto LABEL_11;
    EcpType = GUID_ECP_DUAL_OPLOCK_KEY;
    if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter[0], &EcpType, &EcpContext, 0LL) )
    {
      EcpType = GUID_ECP_OPLOCK_KEY;
      if ( FsRtlRemoveExtraCreateParameter(v18, &EcpType, &EcpContext, 0LL) )
      {
LABEL_11:
        v14 = v66;
LABEL_12:
        v59 = v15;
        goto LABEL_13;
      }
      v44 = 1;
    }
    else
    {
      v44 = 2;
    }
    v58 = v44;
    v14 = v66;
    v15 = IoSetOplockKeyContext(*(_QWORD *)(v66 + 48), (__int128 *)EcpContext, v44);
    if ( (_WORD)v58 == 1 )
    {
      FsRtlFreeExtraCreateParameter(EcpContext);
      if ( v15 == -1073741823 )
        v15 = 0;
    }
    else
    {
      FsRtlAcknowledgeEcp(EcpContext);
      if ( v15 == -1073741823 )
        v15 = 0;
    }
    goto LABEL_12;
  }
LABEL_13:
  FsRtlpOplockStoreKeyForDeleteOperation(v12, a2, a3);
  if ( v13 != *(_QWORD *)v12 )
    v13 = *(_QWORD *)v12;
  v78[1] = v13;
  if ( (a3 & 2) == 0 && v13 && (*(_DWORD *)(a2 + 16) & 2) == 0 && !v59 )
  {
    v53 = (a3 & 0x20000000) != 0;
    LOBYTE(v12) = 1;
    v58 = v12;
    v54 = 1;
    do
    {
      v56 = 0;
      v21 = a3 & 0x10;
      v69 = a3 & 0x10;
      if ( (a3 & 0x10) == 0 && !v53 )
      {
        v63 = *(_DWORD *)(v13 + 144);
        v19 = *(struct _ECP_LIST **)(v13 + 8);
        v78[2] = v19;
        v22 = *(_BYTE *)v14;
        if ( *(_BYTE *)v14 == 3 )
        {
          LODWORD(v12) = v54;
          if ( (v63 & 0xFFFF4FFE) == 0 )
            LODWORD(v12) = 0;
          v54 = v12;
        }
        else
        {
          LODWORD(v12) = v54;
        }
        v58 = v12;
        if ( v22 == 4 )
        {
          v37 = v12;
          if ( (v63 & 0xFFFFDFFE) == 0 )
            v37 = 0;
          LODWORD(v12) = v37;
          v58 = v37;
          v54 = v37;
        }
        if ( (a3 & 8) == 0 && v22 != 18 && v19 && v19 == *(struct _ECP_LIST **)(v14 + 48) )
        {
          LOBYTE(v12) = 0;
          v58 = v12;
          v54 = 0;
          goto LABEL_131;
        }
      }
      if ( !(_BYTE)v12 )
        goto LABEL_131;
      if ( v53 )
        goto LABEL_47;
      v12 = *(_QWORD *)(v13 + 152);
      CurrentThread = KeGetCurrentThread();
      v77 = CurrentThread;
      v24 = (struct _ECP_LIST *)KeAbPreAcquire(v12, 0LL);
      v19 = v24;
      v76 = v24;
      if ( _interlockedbittestandreset((volatile signed __int32 *)v12, 0) )
        goto LABEL_44;
      ++*(_DWORD *)(v12 + 16);
      v27 = 1LL;
      v28 = 4;
      v58 = 4;
LABEL_34:
      ExtraCreateParameter[1] = v24;
      v29 = (char *)v24;
LABEL_35:
      v30 = *(_DWORD *)v12;
      while ( (v30 & 1) == 0 )
      {
        v31 = v30;
        v30 = _InterlockedCompareExchange((volatile signed __int32 *)v12, v30 + v28, v30);
        if ( v31 == v30 )
        {
          if ( v29 )
            KeAbPreWait(v29, v27, v25, v26);
          KeWaitForSingleObject((PVOID)(v12 + 24), WrFastMutex, 0, 0, 0LL);
          _m_prefetchw((const void *)v12);
          v27 = 3LL;
          v28 = 2;
          v58 = 2;
          if ( v29 )
          {
            v24 = (struct _ECP_LIST *)KeAbPreAcquire(v12, (__int64)v29);
            v28 = v58;
            v27 = 3LL;
            goto LABEL_34;
          }
          goto LABEL_35;
        }
LABEL_74:
        v28 = v58;
      }
      v32 = v30;
      v30 = _InterlockedCompareExchange((volatile signed __int32 *)v12, v27 ^ v30, v30);
      if ( v32 != v30 )
        goto LABEL_74;
      v19 = v76;
      CurrentThread = v77;
LABEL_44:
      if ( v19 )
        BYTE2(v19->EcpList.Flink) = 1;
      *(_QWORD *)(v12 + 8) = CurrentThread;
      LOBYTE(v12) = v54;
      v58 = v54;
      v21 = v69;
LABEL_47:
      v53 = 1;
      v33 = *(_DWORD *)(v13 + 144);
      if ( v33 != 1 )
      {
        v34 = 0;
        v52 = 0;
        v55 = 0;
        v35 = 0;
        v57 = 0;
        if ( (_DWORD)v21 )
        {
          v35 = 20480;
          v57 = 20480;
LABEL_70:
          v36 = v52;
          goto LABEL_53;
        }
        if ( *(_BYTE *)v14 == 3 )
        {
          v36 = (v33 & 8) == 0;
          v55 = v36;
          v35 = 0x4000;
LABEL_51:
          v57 = v35;
LABEL_52:
          v34 = 0;
          goto LABEL_53;
        }
        switch ( *(_BYTE *)v14 )
        {
          case 0:
            if ( ((v33 & 0x7000) == 0 || (*(_DWORD *)(*(_QWORD *)(v14 + 8) + 16LL) & 0xFFEDFE7F) == 0)
              && ((v33 & 0x1E) == 0 || (*(_DWORD *)(*(_QWORD *)(v14 + 8) + 16LL) & 0xFFEFFE7F) == 0)
              && (*(_DWORD *)(v14 + 16) & 0x100000) == 0
              || (v33 & 8) != 0
              && (*(_DWORD *)(*(_QWORD *)(v14 + 8) + 16LL) & 0xFFEDFE56) == 0
              && (*(_BYTE *)(v14 + 26) & 1) != 0 )
            {
              goto LABEL_78;
            }
            v38 = *(_BYTE *)(v14 + 19);
            if ( (v38 & 0xFA) == 0 && v38 != 1 || (*(_DWORD *)(v14 + 16) & 0x100000) != 0 )
              goto LABEL_84;
            v41 = 1;
            goto LABEL_96;
          case 1:
          case 3:
          case 5:
          case 7:
          case 8:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x13:
          case 0x14:
            v36 = 0;
            goto LABEL_52;
          case 2:
            if ( (*(_DWORD *)(*(_QWORD *)(v14 + 48) + 80LL) & 0x4000) != 0 )
              goto LABEL_78;
            goto LABEL_76;
          case 4:
            goto LABEL_84;
          case 6:
            v39 = *(_DWORD *)(v14 + 16);
            if ( v39 == 20 )
            {
              v40 = *(_BYTE *)(v14 + 33) == 0;
              goto LABEL_91;
            }
            switch ( v39 )
            {
              case 10:
              case 11:
              case 40:
              case 65:
                goto LABEL_113;
              case 13:
                v42 = **(_BYTE **)(a2 + 24) == 0;
                break;
              case 19:
              case 39:
                goto LABEL_84;
              case 64:
                v42 = (**(_DWORD **)(a2 + 24) & 1) == 0;
                break;
              default:
                goto LABEL_78;
            }
            v36 = 0;
            if ( v42 )
              goto LABEL_52;
            v35 = 0x2000;
            goto LABEL_51;
          case 9:
            v36 = 1;
            v55 = 1;
            v35 = 0x4000;
            v57 = 0x4000;
            v34 = 0;
            goto LABEL_53;
          case 0xD:
            v43 = *(_DWORD *)(v14 + 24);
            if ( v43 > 0x98268 )
            {
              if ( v43 != 623428 && v43 != 623592 )
              {
                v40 = v43 == 639668;
LABEL_91:
                if ( !v40 )
                  goto LABEL_78;
              }
              goto LABEL_84;
            }
            if ( v43 == 623208 )
              goto LABEL_84;
            if ( v43 != 590076 )
            {
              if ( v43 == 606820 )
              {
                v41 = (v33 & 8) == 0;
LABEL_96:
                v52 = v41;
                v55 = v41;
                v35 = 0x4000;
LABEL_97:
                v57 = v35;
                goto LABEL_78;
              }
              if ( v43 != 622792 && v43 != 623112 )
              {
LABEL_78:
                v34 = 0;
                goto LABEL_70;
              }
LABEL_84:
              v34 = 1;
              v35 = 20480;
              v57 = 20480;
              v36 = 0;
              goto LABEL_53;
            }
            if ( (FsRtlGetMarkHandleInfo(a2, v19, v21, 0x140000000uLL) & 0x4000) == 0 )
              goto LABEL_78;
LABEL_113:
            v35 = 0x2000;
            v57 = 0x2000;
            v36 = 0;
            if ( (v33 & 0xC) == 0 )
              goto LABEL_52;
            v34 = 1;
LABEL_53:
            if ( v36 )
            {
              if ( (*(_DWORD *)(v13 + 144) & 0x1F0FFDF) != 0x10
                && !FsRtlpOplockKeysEqual(*(_QWORD *)(v14 + 48), *(_QWORD *)(v13 + 8), 0) )
              {
                v59 = FsRtlpOplockBreakToII(v13, v14, a2, a3, Timeout, v65, (__int64)P, v73, a8, v72, v71, &v53, &v56);
              }
            }
            else if ( v34 )
            {
              if ( (*(_DWORD *)(v13 + 144) & 0x1F0FFDF) == 0x10
                || (v61 = FsRtlpOplockKeysEqual(*(_QWORD *)(v14 + 48), *(_QWORD *)(v13 + 8), 0)) == 0 )
              {
                v59 = FsRtlpOplockBreakToNone(
                        v13,
                        v14,
                        a2,
                        a3,
                        Timeout,
                        v65,
                        (__int64)P,
                        v73,
                        a8,
                        v72,
                        v71,
                        (__int64)&v53,
                        (__int64)&v56);
              }
            }
            if ( !v59 && (*(_DWORD *)(v13 + 144) & v35) != 0 )
            {
              Timeout = v67;
              v59 = FsRtlpOplockBreakByCacheFlags(v13, v14, a2, a3);
            }
            LOBYTE(v12) = v58;
            break;
          case 0x11:
            v40 = (v33 & 8) == 0;
            goto LABEL_91;
          case 0x12:
LABEL_76:
            FsRtlpOplockCleanup(v13, v14, 0);
            if ( *(_BYTE *)v14 == 18 && (a3 & 0x20) != 0 )
            {
              v35 = 0x2000;
              v57 = 0x2000;
              if ( (unsigned int)dword_140E06C30 > 5 )
              {
                v70 = a3;
                v81 = &v70;
                v82 = 4LL;
                v74 = 0x2000;
                v83 = &v74;
                v84 = 4LL;
                v78[0] = v13;
                v85 = v78;
                v86 = 8LL;
                LODWORD(v66) = *(_DWORD *)(v13 + 144);
                v87 = &v66;
                v88 = 4LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E06C30,
                  (unsigned __int8 *)byte_140045465,
                  0LL,
                  0LL,
                  6u,
                  &v80);
              }
            }
            goto LABEL_78;
          case 0x15:
            v35 = 0x2000;
            goto LABEL_97;
          default:
            goto LABEL_78;
        }
      }
LABEL_131:
      if ( v53 && (a3 & 0x20000000) == 0 )
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v13 + 152));
    }
    while ( v56 );
  }
  return v59;
}
