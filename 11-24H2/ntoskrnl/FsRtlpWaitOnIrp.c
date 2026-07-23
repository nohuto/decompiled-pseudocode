/*
 * XREFs of FsRtlpWaitOnIrp @ 0x1402B72F8
 * Callers:
 *     FsRtlpOplockBreakToII @ 0x1403CE520 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToNone @ 0x14057E780 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakNotify @ 0x1407092D0 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     FsRtlpCancelWaitingIrp @ 0x1402B6B5C (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402B9194 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A0A800 (FsRtlCancellableWaitForSingleObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
  char v27; // r15
  char v28; // r13
  NTSTATUS v29; // eax
  _QWORD *i; // rax
  char v32; // [rsp+49h] [rbp-1E7h] BYREF
  char v33; // [rsp+4Ah] [rbp-1E6h] BYREF
  char v34; // [rsp+4Bh] [rbp-1E5h] BYREF
  int v35; // [rsp+4Ch] [rbp-1E4h]
  unsigned int v36; // [rsp+50h] [rbp-1E0h] BYREF
  int v37; // [rsp+54h] [rbp-1DCh] BYREF
  unsigned int v38; // [rsp+58h] [rbp-1D8h] BYREF
  char *v39; // [rsp+60h] [rbp-1D0h]
  PVOID Object; // [rsp+68h] [rbp-1C8h]
  int v41; // [rsp+70h] [rbp-1C0h] BYREF
  __int64 v42; // [rsp+78h] [rbp-1B8h]
  _QWORD v43[2]; // [rsp+80h] [rbp-1B0h] BYREF
  __int64 v44; // [rsp+90h] [rbp-1A0h] BYREF
  __int128 v45; // [rsp+98h] [rbp-198h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-188h]
  __int64 v47; // [rsp+B0h] [rbp-180h]
  __int64 v48; // [rsp+B8h] [rbp-178h]
  __int64 v49; // [rsp+C0h] [rbp-170h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-168h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-160h]
  __int64 v52; // [rsp+D8h] [rbp-158h]
  char v53[32]; // [rsp+E8h] [rbp-148h] BYREF
  unsigned int *v54; // [rsp+108h] [rbp-128h]
  __int64 v55; // [rsp+110h] [rbp-120h]
  char *v56; // [rsp+118h] [rbp-118h]
  __int64 v57; // [rsp+120h] [rbp-110h]
  _QWORD *v58; // [rsp+128h] [rbp-108h]
  __int64 v59; // [rsp+130h] [rbp-100h]
  int *v60; // [rsp+138h] [rbp-F8h]
  __int64 v61; // [rsp+140h] [rbp-F0h]
  char v62[32]; // [rsp+148h] [rbp-E8h] BYREF
  unsigned int *v63; // [rsp+168h] [rbp-C8h]
  __int64 v64; // [rsp+170h] [rbp-C0h]
  char *v65; // [rsp+178h] [rbp-B8h]
  __int64 v66; // [rsp+180h] [rbp-B0h]
  __int64 *v67; // [rsp+188h] [rbp-A8h]
  __int64 v68; // [rsp+190h] [rbp-A0h]
  char v69[32]; // [rsp+198h] [rbp-98h] BYREF
  __int64 *v70; // [rsp+1B8h] [rbp-78h]
  __int64 v71; // [rsp+1C0h] [rbp-70h]
  __int64 *v72; // [rsp+1C8h] [rbp-68h]
  __int64 v73; // [rsp+1D0h] [rbp-60h]
  int *v74; // [rsp+1D8h] [rbp-58h]
  __int64 v75; // [rsp+1E0h] [rbp-50h]

  v48 = a3;
  v43[1] = a1;
  Object = a6;
  v52 = a9;
  v42 = a10;
  v14 = a11;
  v35 = -1073741670;
  v34 = 0;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v49 = a2;
    v70 = &v49;
    v71 = 8LL;
    v50 = a1;
    v72 = &v50;
    v73 = 8LL;
    v41 = *(_DWORD *)(a1 + 144);
    v74 = &v41;
    v75 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140E06C30, byte_14004408B, 0LL, 0LL, 5, v69);
  }
  v15 = 1;
  v16 = &v34;
  if ( v14 )
    v16 = v14;
  v39 = v16;
  *v16 = 0;
  Pool2 = ExAllocatePool2(0x120uLL, 0x40uLL, 0x6F725346u);
  v18 = Pool2;
  v51 = Pool2;
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
    v22 = v48;
    *(_QWORD *)(v18 + 32) = v48;
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
    v22 = v48;
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
      v35 = v25;
      FsRtlpCancelWaitingIrp(a2, 1);
LABEL_21:
      v26 = v39;
      goto LABEL_55;
    }
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpWaitingIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
    v18 = v51;
    v15 = 1;
  }
  if ( a4 )
  {
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v25 = 259;
    v35 = 259;
    goto LABEL_21;
  }
  if ( !a8 || (v27 = 1, !v42) )
    v27 = 0;
  v28 = 0;
  v45 = 0LL;
  v46 = 0LL;
  LODWORD(v47) = 0;
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  while ( 1 )
  {
    v29 = FsRtlCancellableWaitForSingleObject(
            v21,
            (PLARGE_INTEGER)((unsigned __int64)&a8 & -(__int64)(v27 != 0)),
            (PIRP)a2);
    v25 = v29;
    v35 = v29;
    if ( !v27 || v29 != 258 )
      break;
    v27 = 0;
    *(_QWORD *)&v45 = 0LL;
    *((_QWORD *)&v45 + 1) = v52;
    v46 = a2;
    v47 = 258LL;
    guard_dispatch_icall_no_overrides(&v45, 0LL);
    v28 = 1;
    v21 = (char *)Object;
  }
  if ( v28 )
  {
    LODWORD(v45) = 1;
    LODWORD(v47) = v29;
    guard_dispatch_icall_no_overrides(&v45, 0LL);
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
    v26 = v39;
    *v39 = 0;
  }
  else
  {
    if ( a2 )
    {
      v25 = *(_DWORD *)(a2 + 48);
      v35 = v25;
    }
    v26 = v39;
    *v39 = 1;
  }
  v15 = 0;
LABEL_55:
  if ( v15 )
  {
    if ( (unsigned int)dword_140E06C30 > 5 )
    {
      v36 = v25;
      v54 = &v36;
      v55 = 4LL;
      v32 = *v26;
      v56 = &v32;
      v57 = 1LL;
      v43[0] = a1;
      v58 = v43;
      v59 = 8LL;
      v37 = *(_DWORD *)(a1 + 144);
      v60 = &v37;
      v61 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140E06C30, &dword_14004443C, 0LL, 0LL, 6, v53);
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  }
  else if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v38 = v25;
    v63 = &v38;
    v64 = 4LL;
    v33 = *v26;
    v65 = &v33;
    v66 = 1LL;
    v44 = a1;
    v67 = &v44;
    v68 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140E06C30, word_1400443EA, 0LL, 0LL, 5, v62);
  }
  return v25;
}
