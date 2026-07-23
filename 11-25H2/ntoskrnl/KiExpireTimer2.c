/*
 * XREFs of KiExpireTimer2 @ 0x140370160
 * Callers:
 *     KiTimer2Expiration @ 0x140372250 (KiTimer2Expiration.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     EtwTraceTimedEvent @ 0x140257700 (EtwTraceTimedEvent.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140315960 (KiHvEnlightenedGuestPriorityKick.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     ExpHpGCTimerCallback @ 0x14036F4D0 (ExpHpGCTimerCallback.c)
 *     PsTimerResolutionActive @ 0x14036F5C0 (PsTimerResolutionActive.c)
 *     KiUpdateTimer2Collections @ 0x14036F5E8 (KiUpdateTimer2Collections.c)
 *     KiFinalizeTimer2Disablement @ 0x14036FB48 (KiFinalizeTimer2Disablement.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140371480 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall KiExpireTimer2(__int64 SystemArgument1, __int64 a2, LARGE_INTEGER a3, unsigned __int64 *a4)
{
  __int64 v4; // rsi
  char *v5; // rdi
  LARGE_INTEGER InterruptTimePrecise; // r10
  int v9; // r15d
  char *v10; // r14
  char *v11; // rdi
  char v12; // al
  char *v13; // rcx
  __int64 v14; // rax
  char **v15; // rdx
  char v16; // cl
  bool v17; // zf
  unsigned __int64 v18; // r9
  unsigned int v19; // r14d
  __int64 v20; // rdi
  char v21; // r12
  unsigned __int64 v22; // rdi
  int v23; // r15d
  signed __int32 v24; // edx
  signed __int32 v25; // ecx
  signed __int32 v26; // eax
  signed __int32 v27; // r8d
  char v28; // r15
  unsigned __int64 *v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 *v31; // rcx
  void *v32; // rdx
  unsigned __int64 *v33; // rcx
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  char v36; // cl
  unsigned __int64 v37; // r11
  char v38; // r14
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  char inserted; // di
  char *v43; // rdx
  char *v44; // r8
  char *v45; // rax
  char v46; // cl
  char v47; // al
  char v48; // al
  unsigned __int64 v49; // rcx
  signed __int32 v50; // ecx
  int v51; // r15d
  unsigned int v52; // edx
  signed __int32 v53; // eax
  signed __int32 v54; // ecx
  int result; // eax
  __int64 v56; // rax
  char v57; // cl
  char v58; // cl
  char v59; // r8
  char v60; // cl
  char v61; // dl
  char v62; // cl
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  char v68; // al
  char v69; // [rsp+30h] [rbp-59h]
  char v70; // [rsp+31h] [rbp-58h] BYREF
  char v71; // [rsp+32h] [rbp-57h]
  char v72[5]; // [rsp+33h] [rbp-56h] BYREF
  unsigned __int64 v73; // [rsp+38h] [rbp-51h]
  unsigned __int64 *v74; // [rsp+40h] [rbp-49h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-41h] BYREF
  __int64 v76; // [rsp+50h] [rbp-39h] BYREF
  __int64 v77; // [rsp+58h] [rbp-31h]
  __int64 v78; // [rsp+60h] [rbp-29h]
  __int64 v79; // [rsp+68h] [rbp-21h]
  unsigned __int64 v80; // [rsp+70h] [rbp-19h]
  __int64 v81; // [rsp+78h] [rbp-11h]
  __int64 v82; // [rsp+80h] [rbp-9h]
  _OWORD v83[2]; // [rsp+88h] [rbp-1h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = (char *)(SystemArgument1 + 129);
  v74 = a4;
  InterruptTimePrecise = a3;
  v76 = 0LL;
  v77 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v9 = 0;
  v81 = 0LL;
  v82 = 0LL;
  memset(v83, 0, sizeof(v83));
  PerformanceCounter.QuadPart = 0LL;
  v72[0] = 0;
  v71 = 0;
  v78 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v76 = *(_QWORD *)(SystemArgument1 + 72);
    v77 = *(_QWORD *)(SystemArgument1 + 80);
    v78 = *(_QWORD *)(SystemArgument1 + 88);
    v71 = *v5;
    v69 = 1;
  }
  else
  {
    v69 = 0;
  }
  if ( *(_QWORD *)(SystemArgument1 + 88) && (*(_BYTE *)(SystemArgument1 + 1) & 0x20) == 0 )
  {
    if ( (*v5 & 4) != 0 )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v36 = *v5;
    v37 = InterruptTimePrecise.QuadPart + *(_QWORD *)(SystemArgument1 + 88);
    if ( v37 < InterruptTimePrecise.QuadPart || v37 == -1LL )
    {
      v38 = 1;
      v37 = -2LL;
    }
    else
    {
      v38 = 0;
    }
    if ( (v36 & 0x2E) == 0 )
    {
      if ( KiGlobalTimerResolutionRequests )
      {
        if ( (v36 & 0x10) == 0 )
        {
          *(_BYTE *)(SystemArgument1 + 129) = v36 | 0x10;
LABEL_38:
          KiUpdateTimer2Collections((_BYTE *)SystemArgument1);
        }
      }
      else
      {
        v43 = *(char **)(SystemArgument1 + 8);
        v44 = (char *)(SystemArgument1 + 8);
        while ( v43 != v44 )
        {
          v45 = v43;
          v43 = *(char **)v43;
          v46 = v45[16];
          if ( (!v46 || v46 == 1) && PsTimerResolutionActive(*(_QWORD *)(*((_QWORD *)v45 + 3) + 544LL)) )
          {
            v47 = *(_BYTE *)(SystemArgument1 + 129);
            if ( (v47 & 0x10) != 0 )
              goto LABEL_39;
            v48 = v47 | 0x10;
            goto LABEL_58;
          }
        }
        v68 = *(_BYTE *)(SystemArgument1 + 129);
        if ( (v68 & 0x10) != 0 )
        {
          v48 = v68 & 0xEF;
LABEL_58:
          *(_BYTE *)(SystemArgument1 + 129) = v48;
          goto LABEL_38;
        }
      }
    }
LABEL_39:
    v39 = *(_QWORD *)(SystemArgument1 + 80);
    if ( v39 != -1 )
    {
      v40 = v39 - *(_QWORD *)(SystemArgument1 + 72);
      if ( v40 )
      {
        v49 = v40 + InterruptTimePrecise.QuadPart;
        if ( (unsigned __int64)(v40 + InterruptTimePrecise.QuadPart) < InterruptTimePrecise.QuadPart || v49 == -1LL )
          v49 = -2LL;
        v41 = v49 + *(_QWORD *)(SystemArgument1 + 88);
        if ( v41 < v49 || v41 == -1LL )
          v41 = -2LL;
      }
      else
      {
        v41 = v37;
      }
      *(_QWORD *)(SystemArgument1 + 80) = v41;
    }
    *(_QWORD *)(SystemArgument1 + 72) = v37;
    while ( 1 )
    {
      v70 = 0;
      KxAcquireSpinLock(&KiTimer2CollectionLock);
      inserted = KiInsertTimer2WithCollectionLockHeld(SystemArgument1, 0LL, v72, &v70);
      KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
      if ( v70 )
        KiHvEnlightenedGuestPriorityKick(
          (__int64)KeGetCurrentPrcb(),
          KiProcessorBlock[(unsigned int)KiClockTimerOwner],
          KiVpThreadSystemWorkPriority);
      if ( inserted )
        break;
      if ( v38 )
        goto LABEL_4;
      v63 = *(_QWORD *)(SystemArgument1 + 72);
      v64 = *(_QWORD *)(SystemArgument1 + 88);
      v65 = v63 + v64;
      if ( v63 + v64 < v63 || v65 == -1 )
      {
        v38 = 1;
        v65 = -2LL;
      }
      *(_QWORD *)(SystemArgument1 + 72) = v65;
      v66 = *(_QWORD *)(SystemArgument1 + 80);
      if ( v66 != -1LL )
      {
        v67 = v66 + v64;
        if ( v66 + v64 < v66 || v67 == -1 )
          v67 = -2LL;
        *(_QWORD *)(SystemArgument1 + 80) = v67;
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
      v14 = (__int64)v11;
      v11 = v13;
      v15 = *(char ***)(v14 + 8);
      if ( *((_QWORD *)v13 + 1) != v14 || *v15 != (char *)v14 )
        __fastfail(3u);
      *v15 = v13;
      *((_QWORD *)v13 + 1) = v15;
      v16 = *(_BYTE *)(v14 + 16);
      switch ( v16 )
      {
        case 1:
          if ( (unsigned __int8)KiTryUnwaitThread(a2, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
          {
            v17 = (*(_DWORD *)(SystemArgument1 + 4))-- == 1;
            if ( v17 )
              goto LABEL_12;
          }
          break;
        case 2:
          *(_BYTE *)(v14 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v14 + 24), (__int64 *)v14);
          v17 = (*(_DWORD *)(SystemArgument1 + 4))-- == 1;
          if ( v17 )
            goto LABEL_12;
          break;
        case 4:
          *(_BYTE *)(v14 + 17) = 5;
          *(_DWORD *)(SystemArgument1 + 4) = 0;
          KeInsertQueueDpc(*(PRKDPC *)(v14 + 24), (PVOID)SystemArgument1, (PVOID)v14);
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
      v56 = (__int64)v11;
      v11 = *(char **)v11;
      v57 = *(_BYTE *)(v56 + 16);
      switch ( v57 )
      {
        case 1:
          KiTryUnwaitThread(a2, v56, *(unsigned __int16 *)(v56 + 18), 0LL);
          break;
        case 2:
          *(_BYTE *)(v56 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v56 + 24), (__int64 *)v56);
          break;
        case 4:
          *(_BYTE *)(v56 + 17) = 5;
          *(_DWORD *)(SystemArgument1 + 4) = 0;
          KeInsertQueueDpc(*(PRKDPC *)(v56 + 24), (PVOID)SystemArgument1, (PVOID)v56);
          break;
        default:
          KiTryUnwaitThread(a2, v56, 256LL, 0LL);
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
  v73 = 0LL;
  v21 = *(_BYTE *)(v4 + 562);
  v22 = KiWaitAlways ^ _byteswap_uint64(SystemArgument1 ^ v20);
  if ( v22 )
  {
    v23 = (v9 | 0x10) << 8;
    v24 = *(_DWORD *)SystemArgument1;
    v25 = *(_DWORD *)SystemArgument1;
    v73 = KiWaitAlways ^ _byteswap_uint64(SystemArgument1 ^ __ROL8__(
                                                              KiWaitNever ^ *(_QWORD *)(SystemArgument1 + 104),
                                                              KiWaitNever));
    v26 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v23 | v25 & 0xFFFFF07F, v24);
    if ( v24 != v26 )
    {
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v23 | v26 & 0xFFFFF07F, v26);
      }
      while ( v27 != v26 );
    }
    if ( *(_QWORD *)(a2 + 11528) )
      KiProcessThreadWaitList((__int64 *)a2, 1u, 0, 2u);
    v28 = v69;
    if ( v69 )
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v83, 0x40020000u);
    v29 = v74;
    v30 = (*(_DWORD *)v74)++ & 0xF;
    v31 = &v29[2 * v30 + 2 + (unsigned int)v30];
    v32 = (void *)v73;
    *v31 = v22;
    v74 = v31;
    v31[1] = MEMORY[0xFFFFF78000000320];
    v31[2] = 0LL;
    *(_DWORD *)(a2 + 34396) = 0;
    *(_BYTE *)(a2 + 14522) = 1;
    if ( (void (__fastcall *)(__int64, void *))v22 == ExpHpGCTimerCallback )
      ExpHpGCTimerCallback(SystemArgument1, v32);
    else
      guard_dispatch_icall_no_overrides(SystemArgument1, v32);
    v33 = v74;
    *(_BYTE *)(a2 + 14522) = 0;
    v33[2] = MEMORY[0xFFFFF78000000320];
    _m_prefetchw((const void *)SystemArgument1);
    v34 = *(_DWORD *)SystemArgument1;
    do
    {
      v35 = v34;
      v34 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v34 & 0xFFFFEFFF, v34);
    }
    while ( v35 != v34 );
    if ( (v34 & 0x2F00) == 0x2000 )
      KiFinalizeTimer2Disablement(SystemArgument1);
    goto LABEL_25;
  }
  v50 = *(_DWORD *)SystemArgument1;
  v51 = v9 << 8;
  v52 = v51 | *(_DWORD *)SystemArgument1 & 0xFFFFF07F;
  v53 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v52, *(_DWORD *)SystemArgument1);
  if ( v50 != v53 )
  {
    do
    {
      v54 = v53;
      v52 = v51 | v53 & 0xFFFFF07F;
      v53 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1, v52, v53);
    }
    while ( v54 != v53 );
  }
  if ( (v52 & 0x3F00) == 0x2000 )
  {
    KiFinalizeTimer2Disablement(SystemArgument1);
    v28 = v69;
LABEL_25:
    v18 = v73;
    goto LABEL_26;
  }
  v28 = v69;
LABEL_26:
  if ( v19 != *(_DWORD *)(v4 + 484) )
    KeBugCheckEx(0xC7u, 5uLL, v22, v19, *(unsigned int *)(v4 + 484));
  result = *(char *)(v4 + 562);
  if ( v21 != (_BYTE)result )
    KeBugCheckEx(0x1F9u, v22, *(char *)(v4 + 562), 5uLL, 0LL);
  if ( v28 )
  {
    v80 = v22;
    v79 = 0x7E35C6C7F3DD7277LL
        * (KiWaitNever ^ __ROR8__(v22 ^ _byteswap_uint64(KiWaitAlways ^ SystemArgument1), KiWaitNever));
    v81 = 0x7E35C6C7F3DD7277LL
        * (KiWaitNever ^ __ROR8__(SystemArgument1 ^ _byteswap_uint64(KiWaitAlways ^ v18), KiWaitNever));
    v58 = (2 * (v71 & 0x20)) | 4;
    if ( (v71 & 2) == 0 )
      v58 = 2 * (v71 & 0x20);
    v59 = v58;
    v60 = v58 | 8;
    if ( (v71 & 4) == 0 )
      v60 = v59;
    v61 = v60;
    v62 = v60 | 0x10;
    if ( (v71 & 8) == 0 )
      v62 = v61;
    LOBYTE(v82) = v62;
    if ( v22 )
    {
      v62 |= 1u;
      LOBYTE(v82) = v62;
    }
    if ( v78 )
      LOBYTE(v82) = v62 | 2;
    if ( !v22 )
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v83, 0x40020000u);
    return EtwTraceTimedEvent(0xF69u, 0x40020000u, (__int64)&v76, 56, 0x500E02u, (__int64)v83);
  }
  return result;
}
