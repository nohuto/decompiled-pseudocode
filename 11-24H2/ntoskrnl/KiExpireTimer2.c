/*
 * XREFs of KiExpireTimer2 @ 0x1403C0A90
 * Callers:
 *     KiTimer2Expiration @ 0x1403C1420 (KiTimer2Expiration.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiProcessThreadWaitList @ 0x14031EA20 (KiProcessThreadWaitList.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     EtwTraceTimedEvent @ 0x1403B1020 (EtwTraceTimedEvent.c)
 *     KiUpdateTimer2Collections @ 0x1403BF670 (KiUpdateTimer2Collections.c)
 *     ExpHpGCTimerCallback @ 0x1403BF6C0 (ExpHpGCTimerCallback.c)
 *     PsTimerResolutionActive @ 0x1403BF7D0 (PsTimerResolutionActive.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     KiFinalizeTimer2Disablement @ 0x1403C06C8 (KiFinalizeTimer2Disablement.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1403C2620 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x14043E030 (KiHvEnlightenedGuestPriorityKick.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall KiExpireTimer2(__int64 SystemArgument1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 v4; // rsi
  char *v5; // rdi
  unsigned __int64 InterruptTimePrecise; // r10
  int v9; // r15d
  char *v10; // r14
  char *v11; // rdi
  char v12; // al
  char *v13; // rcx
  char *v14; // rax
  char **v15; // rdx
  char v16; // cl
  bool v17; // zf
  unsigned __int64 v18; // r9
  unsigned int v19; // r14d
  __int64 v20; // rdi
  char v21; // r12
  unsigned __int64 v22; // rdi
  int v23; // r15d
  unsigned __int64 v24; // r8
  signed __int32 v25; // edx
  signed __int32 v26; // ecx
  unsigned __int32 v27; // eax
  char v28; // r15
  unsigned __int64 *v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 *v31; // rcx
  void *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 *v36; // rcx
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  char v39; // cl
  unsigned __int64 v40; // r11
  char v41; // r14
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  char inserted; // di
  char *v46; // rdx
  char *v47; // r8
  char *v48; // rcx
  char v49; // al
  char v50; // al
  char v51; // al
  unsigned __int64 v52; // rcx
  char *v53; // rax
  char v54; // cl
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  int result; // eax
  char v61; // cl
  char v62; // r8
  char v63; // cl
  char v64; // dl
  char v65; // cl
  signed __int32 v66; // ecx
  int v67; // r15d
  unsigned int v68; // edx
  signed __int32 v69; // eax
  signed __int32 v70; // ecx
  __int64 v71; // rdx
  char v72; // al
  char v73; // [rsp+30h] [rbp-59h]
  char v74; // [rsp+31h] [rbp-58h] BYREF
  char v75; // [rsp+32h] [rbp-57h]
  char v76[5]; // [rsp+33h] [rbp-56h] BYREF
  void *v77; // [rsp+38h] [rbp-51h]
  unsigned __int64 *v78; // [rsp+40h] [rbp-49h]
  unsigned __int64 v79; // [rsp+48h] [rbp-41h] BYREF
  __int64 v80; // [rsp+50h] [rbp-39h] BYREF
  __int64 v81; // [rsp+58h] [rbp-31h]
  __int64 v82; // [rsp+60h] [rbp-29h]
  __int64 v83; // [rsp+68h] [rbp-21h]
  unsigned __int64 v84; // [rsp+70h] [rbp-19h]
  __int64 v85; // [rsp+78h] [rbp-11h]
  __int64 v86; // [rsp+80h] [rbp-9h]
  _OWORD v87[2]; // [rsp+88h] [rbp-1h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = (char *)(SystemArgument1 + 129);
  v78 = a4;
  InterruptTimePrecise = a3;
  v80 = 0LL;
  v81 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v9 = 0;
  v85 = 0LL;
  v86 = 0LL;
  memset(v87, 0, sizeof(v87));
  v79 = 0LL;
  v76[0] = 0;
  v75 = 0;
  v82 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v80 = *(_QWORD *)(SystemArgument1 + 72);
    v81 = *(_QWORD *)(SystemArgument1 + 80);
    v82 = *(_QWORD *)(SystemArgument1 + 88);
    v75 = *v5;
    v73 = 1;
  }
  else
  {
    v73 = 0;
  }
  if ( *(_QWORD *)(SystemArgument1 + 88) && (*(_BYTE *)(SystemArgument1 + 1) & 0x20) == 0 )
  {
    if ( (*v5 & 4) != 0 )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v79);
    v39 = *v5;
    v40 = InterruptTimePrecise + *(_QWORD *)(SystemArgument1 + 88);
    if ( v40 < InterruptTimePrecise || v40 == -1LL )
    {
      v41 = 1;
      v40 = -2LL;
    }
    else
    {
      v41 = 0;
    }
    if ( (v39 & 0x2E) == 0 )
    {
      if ( KiGlobalTimerResolutionRequests )
      {
        if ( (v39 & 0x10) == 0 )
        {
          *(_BYTE *)(SystemArgument1 + 129) = v39 | 0x10;
LABEL_38:
          KiUpdateTimer2Collections((_BYTE *)SystemArgument1);
        }
      }
      else
      {
        v46 = *(char **)(SystemArgument1 + 8);
        v47 = (char *)(SystemArgument1 + 8);
        while ( v46 != v47 )
        {
          v48 = v46;
          v46 = *(char **)v46;
          v49 = v48[16];
          if ( (!v49 || v49 == 1) && PsTimerResolutionActive(*(_QWORD *)(*((_QWORD *)v48 + 3) + 544LL)) )
          {
            v50 = *(_BYTE *)(SystemArgument1 + 129);
            if ( (v50 & 0x10) != 0 )
              goto LABEL_39;
            v51 = v50 | 0x10;
            goto LABEL_58;
          }
        }
        v72 = *(_BYTE *)(SystemArgument1 + 129);
        if ( (v72 & 0x10) != 0 )
        {
          v51 = v72 & 0xEF;
LABEL_58:
          *(_BYTE *)(SystemArgument1 + 129) = v51;
          goto LABEL_38;
        }
      }
    }
LABEL_39:
    v42 = *(_QWORD *)(SystemArgument1 + 80);
    if ( v42 != -1 )
    {
      v43 = v42 - *(_QWORD *)(SystemArgument1 + 72);
      if ( v43 )
      {
        v52 = v43 + InterruptTimePrecise;
        if ( v43 + InterruptTimePrecise < InterruptTimePrecise || v52 == -1LL )
          v52 = -2LL;
        v44 = v52 + *(_QWORD *)(SystemArgument1 + 88);
        if ( v44 < v52 || v44 == -1LL )
          v44 = -2LL;
      }
      else
      {
        v44 = v40;
      }
      *(_QWORD *)(SystemArgument1 + 80) = v44;
    }
    *(_QWORD *)(SystemArgument1 + 72) = v40;
    while ( 1 )
    {
      v74 = 0;
      KxAcquireSpinLock(&KiTimer2CollectionLock);
      inserted = KiInsertTimer2WithCollectionLockHeld(SystemArgument1, 0LL, v76, &v74);
      KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
      if ( v74 )
        KiHvEnlightenedGuestPriorityKick(
          KeGetCurrentPrcb(),
          KiProcessorBlock[(unsigned int)KiClockTimerOwner],
          (unsigned int)KiVpThreadSystemWorkPriority);
      if ( inserted )
        break;
      if ( v41 )
        goto LABEL_4;
      v55 = *(_QWORD *)(SystemArgument1 + 72);
      v56 = *(_QWORD *)(SystemArgument1 + 88);
      v57 = v55 + v56;
      if ( v55 + v56 < v55 || v57 == -1 )
      {
        v41 = 1;
        v57 = -2LL;
      }
      *(_QWORD *)(SystemArgument1 + 72) = v57;
      v58 = *(_QWORD *)(SystemArgument1 + 80);
      if ( v58 != -1LL )
      {
        v59 = v58 + v56;
        if ( v58 + v56 < v58 || v59 == -1 )
          v59 = -2LL;
        *(_QWORD *)(SystemArgument1 + 80) = v59;
      }
    }
    v9 = 1;
  }
LABEL_4:
  v10 = (char *)(SystemArgument1 + 8);
  v11 = *(char **)(SystemArgument1 + 8);
  v12 = *(_BYTE *)SystemArgument1 & 0x7F;
  *(_DWORD *)(SystemArgument1 + 4) = 1;
  if ( v12 == 25 )
  {
    while ( v11 != v10 )
    {
      v13 = *(char **)v11;
      v14 = v11;
      v11 = v13;
      v15 = (char **)*((_QWORD *)v14 + 1);
      if ( *((char **)v13 + 1) != v14 || *v15 != v14 )
        __fastfail(3u);
      *v15 = v13;
      *((_QWORD *)v13 + 1) = v15;
      v16 = v14[16];
      switch ( v16 )
      {
        case 1:
          if ( (unsigned __int8)KiTryUnwaitThread(a2, v14, *((unsigned __int16 *)v14 + 9), 0LL) )
          {
            v17 = (*(_DWORD *)(SystemArgument1 + 4))-- == 1;
            if ( v17 )
              goto LABEL_12;
          }
          break;
        case 2:
          v14[17] = 5;
          KiInsertQueueInternal(*((_QWORD *)v14 + 3), (__int64 *)v14);
          v17 = (*(_DWORD *)(SystemArgument1 + 4))-- == 1;
          if ( v17 )
            goto LABEL_12;
          break;
        case 4:
          v14[17] = 5;
          *(_DWORD *)(SystemArgument1 + 4) = 0;
          KeInsertQueueDpc(*((PRKDPC *)v14 + 3), (PVOID)SystemArgument1, v14);
          break;
        default:
          KiTryUnwaitThread(a2, v14, 256LL, 0LL);
          break;
      }
    }
  }
  else
  {
    while ( v11 != v10 )
    {
      v53 = v11;
      v11 = *(char **)v11;
      v54 = v53[16];
      switch ( v54 )
      {
        case 1:
          KiTryUnwaitThread(a2, v53, *((unsigned __int16 *)v53 + 9), 0LL);
          break;
        case 2:
          v53[17] = 5;
          KiInsertQueueInternal(*((_QWORD *)v53 + 3), (__int64 *)v53);
          break;
        case 4:
          v53[17] = 5;
          *(_DWORD *)(SystemArgument1 + 4) = 0;
          KeInsertQueueDpc(*((PRKDPC *)v53 + 3), (PVOID)SystemArgument1, v53);
          break;
        default:
          KiTryUnwaitThread(a2, v53, 256LL, 0LL);
          break;
      }
    }
    *(_QWORD *)(SystemArgument1 + 16) = SystemArgument1 + 8;
    *(_QWORD *)(SystemArgument1 + 8) = SystemArgument1 + 8;
  }
LABEL_12:
  v18 = 0LL;
  v19 = *(_DWORD *)(v4 + 484);
  v20 = __ROL8__(KiWaitNever ^ *(_QWORD *)(SystemArgument1 + 96), KiWaitNever);
  v77 = 0LL;
  v21 = *(_BYTE *)(v4 + 562);
  v22 = KiWaitAlways ^ _byteswap_uint64(SystemArgument1 ^ v20);
  if ( v22 )
  {
    v23 = (v9 | 0x10) << 8;
    v24 = KiWaitAlways ^ _byteswap_uint64(SystemArgument1 ^ __ROL8__(
                                                              KiWaitNever ^ *(_QWORD *)(SystemArgument1 + 104),
                                                              KiWaitNever));
    v25 = *(_DWORD *)SystemArgument1;
    v26 = *(_DWORD *)SystemArgument1;
    v77 = (void *)v24;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v23 | v26 & 0xFFFFF07F, v25);
    if ( v25 != v27 )
    {
      do
      {
        v24 = v27;
        v27 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v23 | v27 & 0xFFFFF07F, v27);
      }
      while ( (_DWORD)v24 != v27 );
    }
    if ( *(_QWORD *)(a2 + 11528) )
      KiProcessThreadWaitList(a2, 1u, 0, 2u);
    v28 = v73;
    if ( v73 )
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v87, 0x40020000u);
    v29 = v78;
    v30 = (*(_DWORD *)v78)++ & 0xF;
    v31 = &v29[2 * v30 + 2 + (unsigned int)v30];
    v32 = v77;
    *v31 = v22;
    v78 = v31;
    v31[1] = MEMORY[0xFFFFF78000000320];
    v31[2] = 0LL;
    *(_DWORD *)(a2 + 34396) = 0;
    *(_BYTE *)(a2 + 14522) = 1;
    if ( (void (__fastcall *)(__int64, void *))v22 == ExpHpGCTimerCallback )
      ExpHpGCTimerCallback(SystemArgument1, v32);
    else
      guard_dispatch_icall_no_overrides(SystemArgument1, v32, v24, v18);
    v36 = v78;
    *(_BYTE *)(a2 + 14522) = 0;
    v36[2] = MEMORY[0xFFFFF78000000320];
    _m_prefetchw((const void *)SystemArgument1);
    v37 = *(_DWORD *)SystemArgument1;
    do
    {
      v38 = v37;
      v37 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v37 & 0xFFFFEFFF, v37);
    }
    while ( v38 != v37 );
    if ( (v37 & 0x2F00) == 0x2000 )
      KiFinalizeTimer2Disablement(SystemArgument1, v33, v34, v35);
    goto LABEL_25;
  }
  v66 = *(_DWORD *)SystemArgument1;
  v67 = v9 << 8;
  v68 = v67 | *(_DWORD *)SystemArgument1 & 0xFFFFF07F;
  v69 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v68, *(_DWORD *)SystemArgument1);
  if ( v66 != v69 )
  {
    do
    {
      v70 = v69;
      v68 = v67 | v69 & 0xFFFFF07F;
      v69 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v68, v69);
    }
    while ( v70 != v69 );
  }
  v71 = v68 & 0x3F00;
  if ( (_DWORD)v71 == 0x2000 )
  {
    KiFinalizeTimer2Disablement(SystemArgument1, v71, a3, 0LL);
    v28 = v73;
LABEL_25:
    v18 = (unsigned __int64)v77;
    goto LABEL_26;
  }
  v28 = v73;
LABEL_26:
  if ( v19 != *(_DWORD *)(v4 + 484) )
    KeBugCheckEx(0xC7u, 5uLL, v22, v19, *(unsigned int *)(v4 + 484));
  result = *(char *)(v4 + 562);
  if ( v21 != (_BYTE)result )
    KeBugCheckEx(0x1F9u, v22, *(char *)(v4 + 562), 5uLL, 0LL);
  if ( v28 )
  {
    v84 = v22;
    v83 = 0x7E35C6C7F3DD7277LL
        * (KiWaitNever ^ __ROR8__(v22 ^ _byteswap_uint64(KiWaitAlways ^ SystemArgument1), KiWaitNever));
    v85 = 0x7E35C6C7F3DD7277LL
        * (KiWaitNever ^ __ROR8__(SystemArgument1 ^ _byteswap_uint64(KiWaitAlways ^ v18), KiWaitNever));
    v61 = (2 * (v75 & 0x20)) | 4;
    if ( (v75 & 2) == 0 )
      v61 = 2 * (v75 & 0x20);
    v62 = v61;
    v63 = v61 | 8;
    if ( (v75 & 4) == 0 )
      v63 = v62;
    v64 = v63;
    v65 = v63 | 0x10;
    if ( (v75 & 8) == 0 )
      v65 = v64;
    LOBYTE(v86) = v65;
    if ( v22 )
    {
      v65 |= 1u;
      LOBYTE(v86) = v65;
    }
    if ( v82 )
      LOBYTE(v86) = v65 | 2;
    if ( !v22 )
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v87, 0x40020000u);
    return EtwTraceTimedEvent(3945, 0x40020000u, (__int64)&v80, 56, 0x500E02u, (__int64)v87);
  }
  return result;
}
