/*
 * XREFs of FsRtlpWaitOnIrp @ 0x14049F8AC
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1388 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E3964 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1405813CC (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakNotify @ 0x14070B734 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140418FA0 (IoCancelIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14049FDC0 (FsRtlpCancelWaitingIrp.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A0B5C0 (FsRtlCancellableWaitForSingleObject.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rcx
  char v22; // al
  char *v23; // rbx
  __int64 v24; // rax
  _QWORD **v25; // r12
  __int64 *v26; // rax
  unsigned int v27; // ebx
  char *v28; // rax
  __int64 v29; // rdx
  char v30; // r15
  char v31; // r13
  NTSTATUS v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *i; // rax
  char v40; // [rsp+49h] [rbp-1E7h] BYREF
  char v41; // [rsp+4Ah] [rbp-1E6h] BYREF
  char v42; // [rsp+4Bh] [rbp-1E5h] BYREF
  int v43; // [rsp+4Ch] [rbp-1E4h]
  unsigned int v44; // [rsp+50h] [rbp-1E0h] BYREF
  int v45; // [rsp+54h] [rbp-1DCh] BYREF
  unsigned int v46; // [rsp+58h] [rbp-1D8h] BYREF
  char *v47; // [rsp+60h] [rbp-1D0h]
  PVOID Object; // [rsp+68h] [rbp-1C8h]
  int v49; // [rsp+70h] [rbp-1C0h] BYREF
  __int64 v50; // [rsp+78h] [rbp-1B8h]
  _QWORD v51[2]; // [rsp+80h] [rbp-1B0h] BYREF
  __int64 v52; // [rsp+90h] [rbp-1A0h] BYREF
  __int128 v53; // [rsp+98h] [rbp-198h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-188h]
  __int64 v55; // [rsp+B0h] [rbp-180h]
  __int64 v56; // [rsp+B8h] [rbp-178h]
  __int64 v57; // [rsp+C0h] [rbp-170h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-168h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-160h]
  __int64 v60; // [rsp+D8h] [rbp-158h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+E8h] [rbp-148h] BYREF
  unsigned int *v62; // [rsp+108h] [rbp-128h]
  __int64 v63; // [rsp+110h] [rbp-120h]
  char *v64; // [rsp+118h] [rbp-118h]
  __int64 v65; // [rsp+120h] [rbp-110h]
  _QWORD *v66; // [rsp+128h] [rbp-108h]
  __int64 v67; // [rsp+130h] [rbp-100h]
  int *v68; // [rsp+138h] [rbp-F8h]
  __int64 v69; // [rsp+140h] [rbp-F0h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+148h] [rbp-E8h] BYREF
  unsigned int *v71; // [rsp+168h] [rbp-C8h]
  __int64 v72; // [rsp+170h] [rbp-C0h]
  char *v73; // [rsp+178h] [rbp-B8h]
  __int64 v74; // [rsp+180h] [rbp-B0h]
  __int64 *v75; // [rsp+188h] [rbp-A8h]
  __int64 v76; // [rsp+190h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+198h] [rbp-98h] BYREF
  __int64 *v78; // [rsp+1B8h] [rbp-78h]
  __int64 v79; // [rsp+1C0h] [rbp-70h]
  __int64 *v80; // [rsp+1C8h] [rbp-68h]
  __int64 v81; // [rsp+1D0h] [rbp-60h]
  int *v82; // [rsp+1D8h] [rbp-58h]
  __int64 v83; // [rsp+1E0h] [rbp-50h]

  v56 = a3;
  v51[1] = a1;
  Object = a6;
  v60 = a9;
  v50 = a10;
  v14 = a11;
  v43 = -1073741670;
  v42 = 0;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v57 = a2;
    v78 = &v57;
    v79 = 8LL;
    v58 = a1;
    v80 = &v58;
    v81 = 8LL;
    v49 = *(_DWORD *)(a1 + 144);
    v82 = &v49;
    v83 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)byte_140043B4D, 0LL, 0LL, 5u, &v77);
  }
  v15 = 1;
  v16 = &v42;
  if ( v14 )
    v16 = v14;
  v47 = v16;
  *v16 = 0;
  Pool2 = ExAllocatePool2(0x120uLL);
  v20 = Pool2;
  v59 = Pool2;
  if ( a2 )
  {
    v21 = *(_QWORD *)(a2 + 184);
    *(_QWORD *)(Pool2 + 16) = a2;
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a2 + 56);
    if ( *(_BYTE *)v21 != 13 || (v22 = 1, *(_DWORD *)(v21 + 24) != 589844) )
      v22 = 0;
    *(_BYTE *)(v20 + 53) = v22;
    *(_QWORD *)(v20 + 56) = *(_QWORD *)(v21 + 48);
  }
  *(_BYTE *)(v20 + 52) = a7;
  v23 = (char *)Object;
  if ( a4 )
  {
    *(_QWORD *)(v20 + 24) = a4;
    v24 = v56;
    *(_QWORD *)(v20 + 32) = v56;
  }
  else
  {
    *(_QWORD *)(v20 + 24) = FsRtlpOplockWaitCompleteRoutine;
    *(_QWORD *)(v20 + 32) = v23;
    *(_WORD *)v23 = 0;
    v23[2] = 6;
    *((_DWORD *)v23 + 1) = 0;
    *((_QWORD *)v23 + 2) = v23 + 8;
    *((_QWORD *)v23 + 1) = v23 + 8;
    v24 = v56;
  }
  if ( a5 )
    guard_dispatch_icall_no_overrides(v24, a2, v18, v19);
  v25 = (_QWORD **)(a1 + 88);
  v26 = *(__int64 **)(a1 + 96);
  if ( *v26 != a1 + 88 )
    __fastfail(3u);
  *(_QWORD *)v20 = v25;
  *(_QWORD *)(v20 + 8) = v26;
  *v26 = v20;
  *(_QWORD *)(a1 + 96) = v20;
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
        v27 = 259;
      }
      else
      {
        v27 = -1073741536;
      }
      v43 = v27;
      LOBYTE(v29) = 1;
      FsRtlpCancelWaitingIrp(a2, v29);
LABEL_21:
      v28 = v47;
      goto LABEL_55;
    }
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpWaitingIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
    v20 = v59;
    v15 = 1;
  }
  if ( a4 )
  {
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v27 = 259;
    v43 = 259;
    goto LABEL_21;
  }
  if ( !a8 || (v30 = 1, !v50) )
    v30 = 0;
  v31 = 0;
  v53 = 0LL;
  v54 = 0LL;
  LODWORD(v55) = 0;
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  while ( 1 )
  {
    v32 = FsRtlCancellableWaitForSingleObject(
            v23,
            (PLARGE_INTEGER)((unsigned __int64)&a8 & -(__int64)(v30 != 0)),
            (PIRP)a2);
    v27 = v32;
    v43 = v32;
    if ( !v30 || v32 != 258 )
      break;
    v30 = 0;
    *(_QWORD *)&v53 = 0LL;
    *((_QWORD *)&v53 + 1) = v60;
    v54 = a2;
    v55 = 258LL;
    guard_dispatch_icall_no_overrides(&v53, 0LL, v33, v34);
    v31 = 1;
    v23 = (char *)Object;
  }
  if ( v31 )
  {
    LODWORD(v53) = 1;
    LODWORD(v55) = v32;
    guard_dispatch_icall_no_overrides(&v53, 0LL, v33, v34);
  }
  if ( v27 == -1073741749 || v27 == -1073741536 )
  {
    if ( a2 )
    {
      IoCancelIrp((PIRP)a2);
    }
    else
    {
      ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(a1 + 152));
      for ( i = *v25; i != v25; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)v20 == i )
        {
          FsRtlpRemoveAndCompleteWaitingIrp(i, v35, v36, v37);
          break;
        }
      }
      KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 152));
    }
    KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    v28 = v47;
    *v47 = 0;
  }
  else
  {
    if ( a2 )
    {
      v27 = *(_DWORD *)(a2 + 48);
      v43 = v27;
    }
    v28 = v47;
    *v47 = 1;
  }
  v15 = 0;
LABEL_55:
  if ( v15 )
  {
    if ( (unsigned int)dword_140E06C30 > 5 )
    {
      v44 = v27;
      v62 = &v44;
      v63 = 4LL;
      v40 = *v28;
      v64 = &v40;
      v65 = 1LL;
      v51[0] = a1;
      v66 = v51;
      v67 = 8LL;
      v45 = *(_DWORD *)(a1 + 144);
      v68 = &v45;
      v69 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06C30,
        (unsigned __int8 *)byte_140043A41,
        0LL,
        0LL,
        6u,
        &v61);
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  }
  else if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v46 = v27;
    v71 = &v46;
    v72 = 4LL;
    v41 = *v28;
    v73 = &v41;
    v74 = 1LL;
    v52 = a1;
    v75 = &v52;
    v76 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06C30,
      (unsigned __int8 *)&qword_140043AA0,
      0LL,
      0LL,
      5u,
      &v70);
  }
  return v27;
}
