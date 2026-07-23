/*
 * XREFs of EtwpUpdateDisallowedGuids @ 0x140831C00
 * Callers:
 *     EtwpUpdateDisallowList @ 0x140831B84 (EtwpUpdateDisallowList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1408332EC (EtwpNotifyDisallowedGuidChange.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateDisallowedGuids(
        __int64 a1,
        unsigned __int16 a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  void *v11; // rax
  unsigned __int64 v12; // r15
  unsigned int i; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID *v16; // rdi
  char *v17; // r12
  char *v18; // r13
  char *v19; // rsi
  int v20; // eax
  PVOID **v21; // rax
  PVOID *v22; // rax
  _QWORD *v23; // rsi
  unsigned __int64 *v24; // rdi
  char *v25; // rax
  char *v26; // rsi
  void *v27; // r14
  PVOID *v28; // rax
  _QWORD *v29; // rsi
  void *v30; // rdi
  _QWORD *v31; // rcx
  void **v32; // rax
  PVOID *v33; // rax
  _QWORD *v34; // rsi
  PVOID **Pool2; // rax
  PVOID *v37; // rcx
  PVOID *v38; // rcx
  _QWORD *v39; // rdi
  __int64 v40; // rcx
  _QWORD *v41; // rax
  PVOID **v42; // r14
  PVOID *v43; // rax
  PVOID *v44; // rax
  PVOID **v45; // rcx
  PVOID **v46; // rdi
  PVOID *v47; // rax
  PVOID *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rdi
  _QWORD *v51; // rcx
  PVOID *v52; // rax
  _QWORD *v53; // rdi
  __int64 v54; // rax
  _QWORD *v55; // rcx
  _QWORD *v56; // rdx
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-18h]
  PVOID v59; // [rsp+40h] [rbp-10h] BYREF
  PVOID *v60; // [rsp+48h] [rbp-8h]
  struct _KMUTANT *Mutex; // [rsp+A8h] [rbp+58h]

  v7 = a2;
  v8 = 0;
  if ( a2 > 0x200u )
    return 3221225485LL;
  p_P = &P;
  P = &P;
  v60 = &v59;
  v59 = &v59;
  if ( !a2 )
  {
    v12 = 0LL;
LABEL_11:
    Mutex = (struct _KMUTANT *)(a1 + 632);
    KeWaitForSingleObject((PVOID)(a1 + 632), Executive, 0, 0, 0LL);
    if ( *(_WORD *)(a1 + 1328) )
    {
      v16 = *(PVOID **)(a1 + 1336);
      v17 = (char *)&v16[2 * *(unsigned __int16 *)(a1 + 1328)];
    }
    else
    {
      v16 = 0LL;
      v17 = 0LL;
    }
    if ( (_WORD)v7 )
      v18 = (char *)(v12 + 16LL * v7);
    else
      v18 = 0LL;
    v19 = (char *)(v12 & -(__int64)((_WORD)v7 != 0));
    while ( 1 )
    {
      if ( v16 >= (PVOID *)v17 )
        goto LABEL_25;
      if ( v19 >= v18 )
      {
        while ( v16 < (PVOID *)v17 )
        {
          Pool2 = (PVOID **)ExAllocatePool2(0x100uLL, 0x18uLL, 0x74777445u);
          if ( !Pool2 )
            goto LABEL_23;
          Pool2[2] = v16;
          v37 = v60;
          if ( *v60 != &v59 )
            goto LABEL_36;
          Pool2[1] = v60;
          *Pool2 = &v59;
          v16 += 2;
          *v37 = Pool2;
          v60 = (PVOID *)Pool2;
        }
LABEL_25:
        while ( v19 < v18 )
        {
          v46 = (PVOID **)ExAllocatePool2(0x100uLL, 0x18uLL, 0x74777445u);
          if ( !v46 )
            goto LABEL_23;
          v47 = (PVOID *)ExAllocatePool2(0x100uLL, 0x10uLL, 0x74777445u);
          if ( !v47 )
          {
            v45 = v46;
            goto LABEL_67;
          }
          *(_OWORD *)v47 = *(_OWORD *)v19;
          v46[2] = v47;
          v48 = p_P;
          if ( *p_P != &P )
            goto LABEL_36;
          v46[1] = p_P;
          *v46 = &P;
          v19 += 16;
          *v48 = v46;
          p_P = (PVOID *)v46;
        }
        v24 = (unsigned __int64 *)(a1 + 688);
        v25 = (char *)KeAbPreAcquire(a1 + 688, 0LL);
        v26 = v25;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
          ExfAcquirePushLockExclusiveEx(v24, v25, (__int64)v24);
        if ( v26 )
          v26[10] = 1;
        v27 = *(void **)(a1 + 1336);
        *(_WORD *)(a1 + 1328) = a2;
        *(_QWORD *)(a1 + 1336) = v12;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v24);
        KeAbPostRelease((ULONG_PTR)v24);
        KeReleaseMutex((PRKMUTEX)(a1 + 632), 0);
        v28 = (PVOID *)P;
        v29 = P;
        while ( v28 != &P )
        {
          v30 = v29;
          v29 = (_QWORD *)*v29;
          EtwpNotifyDisallowedGuidChange(*((_QWORD *)v30 + 2), a7, 0LL);
          v31 = *(_QWORD **)v30;
          if ( *(void **)(*(_QWORD *)v30 + 8LL) != v30 )
            goto LABEL_36;
          v32 = (void **)*((_QWORD *)v30 + 1);
          if ( *v32 != v30 )
            goto LABEL_36;
          *v32 = v31;
          v31[1] = v32;
          ExFreePoolWithTag(*((PVOID *)v30 + 2), 0);
          ExFreePoolWithTag(v30, 0);
          v28 = (PVOID *)P;
        }
        v33 = (PVOID *)v59;
        v34 = v59;
        while ( v33 != &v59 )
        {
          v39 = v34;
          v34 = (_QWORD *)*v34;
          EtwpNotifyDisallowedGuidChange(v39[2], a7, 1LL);
          v40 = *v39;
          if ( *(_QWORD **)(*v39 + 8LL) != v39 )
            goto LABEL_36;
          v41 = (_QWORD *)v39[1];
          if ( (_QWORD *)*v41 != v39 )
            goto LABEL_36;
          *v41 = v40;
          *(_QWORD *)(v40 + 8) = v41;
          ExFreePoolWithTag(v39, 0);
          v33 = (PVOID *)v59;
        }
        if ( v27 )
          ExFreePoolWithTag(v27, 0);
        return v8;
      }
      v20 = memcmp(v16, v19, 0x10uLL);
      if ( !v20 )
        break;
      if ( v20 >= 0 )
      {
        v42 = (PVOID **)ExAllocatePool2(0x100uLL, 0x18uLL, 0x74777445u);
        if ( !v42 )
          goto LABEL_23;
        v43 = (PVOID *)ExAllocatePool2(0x100uLL, 0x10uLL, 0x74777445u);
        if ( !v43 )
        {
          v45 = v42;
LABEL_67:
          ExFreePoolWithTag(v45, 0);
LABEL_23:
          v8 = -1073741670;
          KeReleaseMutex(Mutex, 0);
          goto LABEL_24;
        }
        *(_OWORD *)v43 = *(_OWORD *)v19;
        v42[2] = v43;
        v44 = p_P;
        if ( *p_P != &P )
          goto LABEL_36;
        v42[1] = p_P;
        *v42 = &P;
        *v44 = v42;
        p_P = (PVOID *)v42;
LABEL_20:
        v19 += 16;
      }
      else
      {
        v21 = (PVOID **)ExAllocatePool2(0x100uLL, 0x18uLL, 0x74777445u);
        if ( !v21 )
          goto LABEL_23;
        v21[2] = v16;
        v38 = v60;
        if ( *v60 != &v59 )
LABEL_36:
          __fastfail(3u);
        v21[1] = v60;
        *v21 = &v59;
        v16 += 2;
        *v38 = v21;
        v60 = (PVOID *)v21;
      }
    }
    v16 += 2;
    goto LABEL_20;
  }
  v11 = (void *)ExAllocatePool2(0x100uLL, 16LL * a2, 0x64777445u);
  v12 = (unsigned __int64)v11;
  if ( v11 )
  {
    memmove(v11, a3, 16LL * v7);
    qsort((void *)v12, v7, 0x10uLL, EtwpCompareGuid);
    for ( i = 0; ; ++i )
    {
      if ( i >= v7 - 1 )
        goto LABEL_11;
      v14 = 16LL * i;
      v15 = *(_QWORD *)(v14 + v12) - *(_QWORD *)(v14 + v12 + 16);
      if ( !v15 )
        v15 = *(_QWORD *)(v14 + v12 + 8) - *(_QWORD *)(v14 + v12 + 24);
      if ( !v15 )
        break;
    }
    ExFreePoolWithTag((PVOID)v12, 0);
    v8 = -1073741811;
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_24:
  v22 = (PVOID *)P;
  v23 = P;
  while ( v22 != &P )
  {
    v49 = (_QWORD *)*v23;
    v50 = v23;
    v23 = v49;
    if ( (_QWORD *)v49[1] != v50 )
      goto LABEL_36;
    v51 = (_QWORD *)v50[1];
    if ( (_QWORD *)*v51 != v50 )
      goto LABEL_36;
    *v51 = v49;
    v49[1] = v51;
    ExFreePoolWithTag((PVOID)v50[2], 0);
    ExFreePoolWithTag(v50, 0);
    v22 = (PVOID *)P;
  }
  v52 = (PVOID *)v59;
  v53 = v59;
  while ( v52 != &v59 )
  {
    v54 = *v53;
    v55 = v53;
    v53 = (_QWORD *)v54;
    if ( *(_QWORD **)(v54 + 8) != v55 )
      goto LABEL_36;
    v56 = (_QWORD *)v55[1];
    if ( (_QWORD *)*v56 != v55 )
      goto LABEL_36;
    *v56 = v54;
    *(_QWORD *)(v54 + 8) = v56;
    ExFreePoolWithTag(v55, 0);
    v52 = (PVOID *)v59;
  }
  return v8;
}
