/*
 * XREFs of FsRtlNotifyFilterReportChangeLiteEx @ 0x140A01520
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x14070DBA0 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     PsChargePoolQuota @ 0x1403EEFD0 (PsChargePoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1404066F0 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x140456400 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A021B0 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyInitializeSync @ 0x140A02340 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x140A73F50 (FsRtlNotifyUninitializeSync.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlNotifyFilterReportChangeLiteEx(
        volatile signed __int64 *a1,
        _QWORD *a2,
        const void **a3,
        const void **a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  _QWORD **v10; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v13; // rbx
  int v14; // r14d
  _QWORD *v15; // rdi
  unsigned int v16; // r15d
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  int v19; // eax
  unsigned int v20; // r14d
  unsigned int v21; // r13d
  unsigned int v22; // eax
  int v23; // edx
  __int16 v24; // ax
  _DWORD *Pool2; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  char *v31; // rbx
  char *v32; // rbx
  _QWORD *v33; // rdx
  _QWORD **v34; // rax
  PNOTIFY_SYNC NotifySync[2]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD *v36; // [rsp+68h] [rbp-70h]
  _QWORD *v37; // [rsp+70h] [rbp-68h]
  _QWORD *v38; // [rsp+80h] [rbp-58h]
  _QWORD *v39; // [rsp+88h] [rbp-50h]
  const void **v42; // [rsp+F8h] [rbp+20h]

  v42 = a4;
  v10 = (_QWORD **)a2;
  if ( (_QWORD *)*a2 == a2 || a10 && *(_DWORD *)a10 < 0x58u )
    return;
  if ( !*a1 )
  {
    NotifySync[0] = 0LL;
    FsRtlNotifyInitializeSync(NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync[0], 0LL) )
      FsRtlNotifyUninitializeSync(NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
  }
  ++*(_DWORD *)(*a1 + 64);
  v13 = *v10;
  v14 = 84;
  while ( 1 )
  {
    v37 = v13;
    v36 = v13;
    if ( v13 == v10 )
      break;
    v15 = v13 - 4;
    NotifySync[1] = (PNOTIFY_SYNC)(v13 - 4);
    v39 = v13 - 4;
    if ( (*((_DWORD *)v13 + 11) & a5) == 0
      || (a9 & 1) == 0
      && ((v15[9] & 1) == 0 || v15[2] && !(unsigned __int8)guard_dispatch_icall_no_overrides(v15[1], a7, v15[3], a4))
      || v15[8] && a8 && !(unsigned __int8)guard_dispatch_icall_no_overrides(v15[1], a8, a3, a4) )
    {
      goto LABEL_9;
    }
    if ( (v15[9] & 2) == 0 )
    {
      v16 = *((_DWORD *)v15 + 24);
      if ( v16 )
      {
        v17 = 0LL;
        v38 = 0LL;
        if ( *((_DWORD *)v15 + 25) )
        {
          v16 = *((_DWORD *)v15 + 25);
        }
        else
        {
          v18 = (_QWORD *)v15[6];
          if ( v18 != v15 + 6 )
          {
            v17 = v18 - 21;
            v38 = v18 - 21;
            v16 = *(_DWORD *)(v18[2] + 8LL);
          }
        }
        v19 = *((_DWORD *)v15 + 29);
        if ( v19 != 3 )
        {
          v14 = 12;
          if ( v19 == 2 )
            v14 = 84;
        }
        v20 = *(unsigned __int16 *)a3 + v14;
        if ( v42 )
          v20 += *(unsigned __int16 *)v42 + 2;
        v21 = (*((_DWORD *)v15 + 26) + 3) & 0xFFFFFFFC;
        v22 = v20 + v21;
        if ( v20 + v21 < v21 )
        {
          v22 = -1;
          v23 = -1073741675;
        }
        else
        {
          v23 = 0;
        }
        if ( v20 > v16 || v23 || v22 > v16 )
        {
          *((_WORD *)v15 + 36) |= 2u;
          v14 = 84;
        }
        else
        {
          Pool2 = 0LL;
          v26 = v15[11];
          if ( v26 )
          {
            *(_DWORD *)(v26 + *((unsigned int *)v15 + 27)) = v21 - *((_DWORD *)v15 + 27);
            *((_DWORD *)v15 + 27) = v21;
            Pool2 = (_DWORD *)(v15[11] + v21);
          }
          else
          {
            if ( !v17 )
              goto LABEL_39;
            v27 = v17[3];
            if ( v27 )
            {
              Pool2 = (_DWORD *)v17[3];
              v15[11] = v27;
            }
            else
            {
              v28 = v17[1];
              if ( !v28 )
                goto LABEL_39;
              if ( (*(_BYTE *)(v28 + 10) & 5) != 0 )
                Pool2 = *(_DWORD **)(v28 + 24);
              else
                Pool2 = MmMapLockedPagesSpecifyCache((PMDL)v28, 0, MmCached, 0LL, 0, 0x40000010u);
              v15[11] = Pool2;
            }
            *((_DWORD *)v15 + 25) = v16;
          }
LABEL_39:
          if ( !v15[11] )
          {
            PsChargePoolQuota((PEPROCESS)v15[15], PagedPool, v16);
            Pool2 = (_DWORD *)ExAllocatePool2(0x122uLL);
            v15[11] = Pool2;
            v15[10] = Pool2;
            *((_DWORD *)v15 + 25) = v16;
          }
          if ( Pool2 )
          {
            v29 = *((unsigned int *)v15 + 26);
            if ( v21 > (unsigned int)v29 )
              memset_0((void *)(v15[11] + v29), 0, v21 - (unsigned int)v29);
            *Pool2 = 0;
            Pool2[1] = a6;
            v30 = *((_DWORD *)v15 + 29);
            if ( v30 == 3 )
            {
              *((_QWORD *)Pool2 + 1) = *(_QWORD *)(a10 + 8);
              *((_QWORD *)Pool2 + 2) = *(_QWORD *)(a10 + 16);
              *((_QWORD *)Pool2 + 3) = *(_QWORD *)(a10 + 24);
              *((_QWORD *)Pool2 + 4) = *(_QWORD *)(a10 + 32);
              *((_QWORD *)Pool2 + 5) = *(_QWORD *)(a10 + 40);
              *((_QWORD *)Pool2 + 6) = *(_QWORD *)(a10 + 48);
              Pool2[14] = *(_DWORD *)(a10 + 56);
              Pool2[15] = *(_DWORD *)(a10 + 60);
              *((_QWORD *)Pool2 + 8) = *(_QWORD *)(a10 + 64);
              *((_QWORD *)Pool2 + 9) = *(_QWORD *)(a10 + 72);
              *((_WORD *)Pool2 + 40) = v20 - 84;
              *((_BYTE *)Pool2 + 82) = *(_BYTE *)(a10 + 80);
              *((_BYTE *)Pool2 + 83) = 0;
              v31 = (char *)(Pool2 + 21);
            }
            else if ( v30 == 2 )
            {
              *((_QWORD *)Pool2 + 1) = *(_QWORD *)(a10 + 8);
              *((_QWORD *)Pool2 + 2) = *(_QWORD *)(a10 + 16);
              *((_QWORD *)Pool2 + 3) = *(_QWORD *)(a10 + 24);
              *((_QWORD *)Pool2 + 4) = *(_QWORD *)(a10 + 32);
              *((_QWORD *)Pool2 + 5) = *(_QWORD *)(a10 + 40);
              *((_QWORD *)Pool2 + 6) = *(_QWORD *)(a10 + 48);
              Pool2[14] = *(_DWORD *)(a10 + 56);
              Pool2[15] = *(_DWORD *)(a10 + 60);
              *((_QWORD *)Pool2 + 8) = *(_QWORD *)(a10 + 64);
              *((_QWORD *)Pool2 + 9) = *(_QWORD *)(a10 + 72);
              Pool2[20] = v20 - 84;
              v31 = (char *)(Pool2 + 21);
            }
            else
            {
              Pool2[2] = v20 - 12;
              v31 = (char *)(Pool2 + 3);
            }
            memmove(v31, a3[1], *(unsigned __int16 *)a3);
            if ( v42 )
            {
              v32 = &v31[*(unsigned __int16 *)a3];
              *(_WORD *)v32 = 58;
              memmove(v32 + 2, v42[1], *(unsigned __int16 *)v42);
            }
            *((_DWORD *)v15 + 26) = v20 + v21;
          }
          v13 = v36;
          v14 = 84;
        }
        if ( (v15[9] & 2) != 0 && v15[11] )
        {
          if ( v15[10] )
          {
            PsReturnProcessPagedPoolQuota(v15[15], *((unsigned int *)v15 + 25));
            ExFreePoolWithTag((PVOID)v15[10], 0);
          }
          v15[11] = 0LL;
          v15[10] = 0LL;
          v15[13] = 0LL;
          *((_DWORD *)v15 + 25) = 0;
        }
      }
    }
    v24 = *((_WORD *)v39 + 36);
    if ( a6 == 4 )
    {
      *((_WORD *)v39 + 36) = v24 | 8;
    }
    else
    {
      *((_WORD *)v39 + 36) = v24 & 0xFFF7;
      a4 = (const void **)(v15 + 6);
      v33 = (_QWORD *)v15[6];
      if ( v33 != v15 + 6 )
      {
        *((_WORD *)v15 + 36) &= ~2u;
        v15[13] = 0LL;
        v34 = (_QWORD **)*v33;
        if ( (const void **)v33[1] != a4 || v34[1] != v33 )
          __fastfail(3u);
        *a4 = v34;
        v34[1] = a4;
        *v33 = 0LL;
        FsRtlNotifyCompleteIrp((PIRP)(v33 - 21), 1);
      }
    }
LABEL_9:
    v13 = (_QWORD *)*v13;
    v10 = (_QWORD **)a2;
  }
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
}
