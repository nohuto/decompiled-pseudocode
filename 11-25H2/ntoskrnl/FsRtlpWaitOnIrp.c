/*
 * XREFs of FsRtlpWaitOnIrp @ 0x140427034
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E44FC (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1404E4794 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakNotify @ 0x1406FF854 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     FsRtlpCancelWaitingIrp @ 0x140429024 (FsRtlpCancelWaitingIrp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A072B0 (FsRtlCancellableWaitForSingleObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlpWaitOnIrp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char *a11)
{
  char *v14; // rbx
  char v15; // r13
  char *v16; // rax
  __int64 Pool2; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  char v20; // al
  char *v21; // rbx
  __int64 v22; // rax
  _QWORD **v23; // r12
  __int64 *v24; // rax
  unsigned int v25; // ebx
  char *v26; // rax
  __int64 v27; // rdx
  char v28; // r15
  char v29; // r13
  NTSTATUS v30; // eax
  _QWORD *i; // rax
  char v33; // [rsp+49h] [rbp-1E7h] BYREF
  char v34; // [rsp+4Ah] [rbp-1E6h] BYREF
  char v35; // [rsp+4Bh] [rbp-1E5h] BYREF
  int v36; // [rsp+4Ch] [rbp-1E4h]
  unsigned int v37; // [rsp+50h] [rbp-1E0h] BYREF
  int v38; // [rsp+54h] [rbp-1DCh] BYREF
  unsigned int v39; // [rsp+58h] [rbp-1D8h] BYREF
  char *v40; // [rsp+60h] [rbp-1D0h]
  PVOID Object; // [rsp+68h] [rbp-1C8h]
  int v42; // [rsp+70h] [rbp-1C0h] BYREF
  __int64 v43; // [rsp+78h] [rbp-1B8h]
  _QWORD v44[2]; // [rsp+80h] [rbp-1B0h] BYREF
  __int64 v45; // [rsp+90h] [rbp-1A0h] BYREF
  __int128 v46; // [rsp+98h] [rbp-198h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-188h]
  __int64 v48; // [rsp+B0h] [rbp-180h]
  __int64 v49; // [rsp+B8h] [rbp-178h]
  __int64 v50; // [rsp+C0h] [rbp-170h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-168h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-160h]
  __int64 v53; // [rsp+D8h] [rbp-158h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+E8h] [rbp-148h] BYREF
  unsigned int *v55; // [rsp+108h] [rbp-128h]
  __int64 v56; // [rsp+110h] [rbp-120h]
  char *v57; // [rsp+118h] [rbp-118h]
  __int64 v58; // [rsp+120h] [rbp-110h]
  _QWORD *v59; // [rsp+128h] [rbp-108h]
  __int64 v60; // [rsp+130h] [rbp-100h]
  int *v61; // [rsp+138h] [rbp-F8h]
  __int64 v62; // [rsp+140h] [rbp-F0h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+148h] [rbp-E8h] BYREF
  unsigned int *v64; // [rsp+168h] [rbp-C8h]
  __int64 v65; // [rsp+170h] [rbp-C0h]
  char *v66; // [rsp+178h] [rbp-B8h]
  __int64 v67; // [rsp+180h] [rbp-B0h]
  __int64 *v68; // [rsp+188h] [rbp-A8h]
  __int64 v69; // [rsp+190h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+198h] [rbp-98h] BYREF
  __int64 *v71; // [rsp+1B8h] [rbp-78h]
  __int64 v72; // [rsp+1C0h] [rbp-70h]
  __int64 *v73; // [rsp+1C8h] [rbp-68h]
  __int64 v74; // [rsp+1D0h] [rbp-60h]
  int *v75; // [rsp+1D8h] [rbp-58h]
  __int64 v76; // [rsp+1E0h] [rbp-50h]

  v49 = a3;
  v44[1] = a1;
  Object = a6;
  v53 = a9;
  v43 = a10;
  v14 = a11;
  v36 = -1073741670;
  v35 = 0;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v50 = a2;
    v71 = &v50;
    v72 = 8LL;
    v51 = a1;
    v73 = &v51;
    v74 = 8LL;
    v42 = *(_DWORD *)(a1 + 144);
    v75 = &v42;
    v76 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06C30,
      (unsigned __int8 *)&dword_140043B44,
      0LL,
      0LL,
      5u,
      &v70);
  }
  v15 = 1;
  v16 = &v35;
  if ( v14 )
    v16 = v14;
  v40 = v16;
  *v16 = 0;
  Pool2 = ExAllocatePool2(0x120uLL);
  v18 = Pool2;
  v52 = Pool2;
  if ( a2 )
  {
    v19 = *(_QWORD *)(a2 + 184);
    *(_QWORD *)(Pool2 + 16) = a2;
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a2 + 56);
    if ( *(_BYTE *)v19 != 13 || (v20 = 1, *(_DWORD *)(v19 + 24) != 589844) )
      v20 = 0;
    *(_BYTE *)(v18 + 53) = v20;
    *(_QWORD *)(v18 + 56) = *(_QWORD *)(v19 + 48);
  }
  *(_BYTE *)(v18 + 52) = a7;
  v21 = (char *)Object;
  if ( a4 )
  {
    *(_QWORD *)(v18 + 24) = a4;
    v22 = v49;
    *(_QWORD *)(v18 + 32) = v49;
  }
  else
  {
    *(_QWORD *)(v18 + 24) = FsRtlpOplockWaitCompleteRoutine;
    *(_QWORD *)(v18 + 32) = v21;
    *(_WORD *)v21 = 0;
    v21[2] = 6;
    *((_DWORD *)v21 + 1) = 0;
    *((_QWORD *)v21 + 2) = v21 + 8;
    *((_QWORD *)v21 + 1) = v21 + 8;
    v22 = v49;
  }
  if ( a5 )
    guard_dispatch_icall_no_overrides(v22, a2);
  v23 = (_QWORD **)(a1 + 88);
  v24 = *(__int64 **)(a1 + 96);
  if ( *v24 != a1 + 88 )
    __fastfail(3u);
  *(_QWORD *)v18 = v23;
  *(_QWORD *)(v18 + 8) = v24;
  *v24 = v18;
  *(_QWORD *)(a1 + 96) = v18;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 48) = 0;
    *(_BYTE *)(a2 + 69) = KeAcquireQueuedSpinLock(7uLL);
    *(_QWORD *)(a2 + 56) = a1;
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( a4 )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        v25 = 259;
      }
      else
      {
        v25 = -1073741536;
      }
      v36 = v25;
      LOBYTE(v27) = 1;
      FsRtlpCancelWaitingIrp(a2, v27);
LABEL_21:
      v26 = v40;
      goto LABEL_55;
    }
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpWaitingIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
    v18 = v52;
    v15 = 1;
  }
  if ( a4 )
  {
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v25 = 259;
    v36 = 259;
    goto LABEL_21;
  }
  if ( !a8 || (v28 = 1, !v43) )
    v28 = 0;
  v29 = 0;
  v46 = 0LL;
  v47 = 0LL;
  LODWORD(v48) = 0;
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  while ( 1 )
  {
    v30 = FsRtlCancellableWaitForSingleObject(
            v21,
            (PLARGE_INTEGER)((unsigned __int64)&a8 & -(__int64)(v28 != 0)),
            (PIRP)a2);
    v25 = v30;
    v36 = v30;
    if ( !v28 || v30 != 258 )
      break;
    v28 = 0;
    *(_QWORD *)&v46 = 0LL;
    *((_QWORD *)&v46 + 1) = v53;
    v47 = a2;
    v48 = 258LL;
    guard_dispatch_icall_no_overrides(&v46, 0LL);
    v29 = 1;
    v21 = (char *)Object;
  }
  if ( v29 )
  {
    LODWORD(v46) = 1;
    LODWORD(v48) = v30;
    guard_dispatch_icall_no_overrides(&v46, 0LL);
  }
  if ( v25 == -1073741749 || v25 == -1073741536 )
  {
    if ( a2 )
    {
      IoCancelIrp((PIRP)a2);
    }
    else
    {
      ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(a1 + 152));
      for ( i = *v23; i != v23; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)v18 == i )
        {
          FsRtlpRemoveAndCompleteWaitingIrp(i);
          break;
        }
      }
      KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 152));
    }
    KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    v26 = v40;
    *v40 = 0;
  }
  else
  {
    if ( a2 )
    {
      v25 = *(_DWORD *)(a2 + 48);
      v36 = v25;
    }
    v26 = v40;
    *v40 = 1;
  }
  v15 = 0;
LABEL_55:
  if ( v15 )
  {
    if ( (unsigned int)dword_140E06C30 > 5 )
    {
      v37 = v25;
      v55 = &v37;
      v56 = 4LL;
      v33 = *v26;
      v57 = &v33;
      v58 = 1LL;
      v44[0] = a1;
      v59 = v44;
      v60 = 8LL;
      v38 = *(_DWORD *)(a1 + 144);
      v61 = &v38;
      v62 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06C30,
        (unsigned __int8 *)&word_140043646,
        0LL,
        0LL,
        6u,
        &v54);
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  }
  else if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v39 = v25;
    v64 = &v39;
    v65 = 4LL;
    v34 = *v26;
    v66 = &v34;
    v67 = 1LL;
    v45 = a1;
    v68 = &v45;
    v69 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06C30,
      (unsigned __int8 *)&dword_1400435F4,
      0LL,
      0LL,
      5u,
      &v63);
  }
  return v25;
}
