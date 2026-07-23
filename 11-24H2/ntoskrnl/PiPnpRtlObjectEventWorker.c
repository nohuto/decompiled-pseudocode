/*
 * XREFs of PiPnpRtlObjectEventWorker @ 0x1408B76F0
 * Callers:
 *     PiPnpRtlObjectEventCallback @ 0x1408B76C0 (PiPnpRtlObjectEventCallback.c)
 *     PiDqIrpPropertySet @ 0x1409F2F90 (PiDqIrpPropertySet.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1407261C8 (PiDqObjectManagerMakeInconsistent.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B2184 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408B7B08 (PiDmObjectProcessPropertyChange.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408C92A0 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1408C9CA0 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1408CA11C (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1408CA5A8 (PiPnpRtlObjectEventDispatch.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 *     PnpAllocatePWSTR @ 0x1408D1794 (PnpAllocatePWSTR.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x1409F873C (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x140A28F20 (PiDqGetObjectManagerForPnpObjectType.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlObjectEventWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char *v5; // rdi
  int v7; // ebx
  unsigned int v8; // r15d
  int v10; // eax
  int PWSTR; // esi
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rbx
  _DWORD *v15; // rcx
  __int128 *v16; // rax
  const wchar_t *v17; // r14
  int v18; // r8d
  __int128 v19; // xmm0
  int v20; // eax
  char *v21; // rcx
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *Pool2; // rax
  _DWORD *v27; // rbx
  const wchar_t *v28; // rdx
  __int64 v29; // rdx
  int v30; // ebx
  void *v31; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v33; // rsi
  PVOID *v34; // r8
  _QWORD *v35; // rax
  int v36; // eax
  __int64 ObjectManagerForPnpObjectType; // rax
  __int64 *v38; // rax
  __int64 v39; // rbx
  _QWORD *v40; // rbx
  _QWORD *v41; // rcx
  PVOID *v42; // rdx
  _QWORD *v43; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v45[8]; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int128 v47; // [rsp+48h] [rbp-28h]
  __int128 v48; // [rsp+58h] [rbp-18h] BYREF

  v5 = 0LL;
  Src = 0LL;
  P = 0LL;
  v7 = a3;
  v45[0] = 0;
  v8 = a2;
  v47 = 0LL;
  v48 = 0LL;
  if ( (int)a2 < 7 )
  {
    if ( (_DWORD)a3 == 1 )
      goto LABEL_48;
    v10 = PiPnpRtlBeginOperation(&P, a2, a3);
    v5 = (char *)P;
    if ( v10 < 0 )
      goto LABEL_55;
    PiPnpRtlDisableRemoveOperationDispatch();
    PWSTR = PiPnpRtlObjectEventCreate(a1, v8, v5, &Src);
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegion();
    if ( PWSTR < 0 )
      goto LABEL_55;
    if ( !Src )
      goto LABEL_20;
    v12 = v7 - 2;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = (unsigned int)(v13 - 1);
        if ( (_DWORD)v14 )
        {
          if ( (_DWORD)v14 == 1 )
            *((_DWORD *)Src + 1) |= 8u;
          goto LABEL_20;
        }
        PiDmObjectProcessPropertyChange(
          v8,
          a1,
          *((_QWORD *)Src + 1),
          *(_QWORD *)(a4 + 8),
          *(_QWORD *)(a4 + 16),
          (__int64)v45);
        if ( !v45[0] )
        {
          PiPnpRtlDisableRemoveOperationDispatch();
          v15 = Src;
          if ( *((_QWORD *)Src + 7) )
            goto LABEL_19;
          v16 = *(__int128 **)(a4 + 16);
          v17 = *(const wchar_t **)(a4 + 8);
          v19 = *v16;
          LODWORD(P) = *((_DWORD *)v16 + 4);
          v18 = (int)P;
          *(_QWORD *)&v48 = __PAIR64__(a5, (unsigned int)P);
          v47 = v19;
          *((_QWORD *)&v48 + 1) = v17;
          while ( (unsigned int)v14 < v15[19] )
          {
            if ( v18 == v15[8 * v14 + 24] )
            {
              v24 = 8LL * (unsigned int)v14;
              v25 = v47 - *(_QWORD *)&v15[v24 + 20];
              if ( (_QWORD)v47 == *(_QWORD *)&v15[v24 + 20] )
                v25 = *((_QWORD *)&v47 + 1) - *(_QWORD *)&v15[v24 + 22];
              if ( !v25 && a5 == v15[v24 + 25] )
              {
                v28 = *(const wchar_t **)&v15[v24 + 26];
                if ( v17 == v28 )
                  goto LABEL_19;
                if ( v17 && v28 )
                {
                  if ( !wcsicmp(v17, v28) )
                    goto LABEL_19;
                  v15 = Src;
                }
              }
              v18 = (int)P;
            }
            v14 = (unsigned int)(v14 + 1);
          }
          if ( a5 == 1 )
          {
            v36 = v15[1];
            if ( (v36 & 4) == 0 )
            {
              v15[1] = v36 | 4;
              SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
              v15 = Src;
            }
          }
          v20 = v15[18];
          if ( v15[19] == v20 )
          {
            Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 32LL * (unsigned int)(2 * v20) + 80, 0x41706E50u);
            v27 = Pool2;
            if ( !Pool2 )
            {
              PWSTR = -1073741670;
              goto LABEL_19;
            }
            memmove(Pool2, Src, 32LL * *((unsigned int *)Src + 19) + 80);
            v27[18] *= 2;
            *(_QWORD *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src) = v27;
            ExFreePoolWithTag(Src, 0x41706E50u);
            Src = v27;
          }
          PWSTR = PnpAllocatePWSTR(*(_QWORD *)(a4 + 8), 0x7FFFFFFFLL, 1097887312LL, (char *)&v48 + 8);
          if ( PWSTR >= 0 )
          {
            v21 = (char *)Src;
            v22 = v48;
            v23 = 32LL * *((unsigned int *)Src + 19);
            *(_OWORD *)((char *)Src + v23 + 80) = v47;
            *(_OWORD *)&v21[v23 + 96] = v22;
            ++*((_DWORD *)Src + 19);
          }
LABEL_19:
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KeLeaveCriticalRegion();
          if ( PWSTR >= 0 )
            goto LABEL_20;
LABEL_55:
          if ( !Src )
            goto LABEL_48;
          PiPnpRtlDisableRemoveOperationDispatch();
          if ( *((_QWORD *)Src + 7) )
          {
LABEL_59:
            ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
            KeLeaveCriticalRegion();
LABEL_48:
            ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType(v8);
            if ( ObjectManagerForPnpObjectType )
              PiDqObjectManagerMakeInconsistent(ObjectManagerForPnpObjectType);
            goto LABEL_20;
          }
          RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src);
          v42 = (PVOID *)*((_QWORD *)v5 + 17);
          v43 = (char *)Src + 56;
          if ( *v42 == v5 + 128 )
          {
            *v43 = v5 + 128;
            v43[1] = v42;
            *v42 = v43;
            *((_QWORD *)v5 + 17) = v43;
            goto LABEL_59;
          }
LABEL_42:
          __fastfail(3u);
        }
      }
      else
      {
        *((_DWORD *)Src + 1) |= 2u;
        KsepCacheLock(*((_QWORD *)Src + 1));
        v29 = *((_QWORD *)Src + 1);
        v30 = *(_DWORD *)(v29 + 32);
        *(_DWORD *)(v29 + 32) = v30 & 0xFFFFFFFE;
        PiDmObjectReleaseLock(*((_QWORD *)Src + 1));
        if ( (v30 & 1) != 0 )
          PiDmRemoveCacheReferenceForObject(v8, a1, v31);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        PiPnpRtlOperationListAcquireSharedLock();
        v33 = PiPnpRtlActiveOperations;
        v5 = (char *)P;
        while ( (__int64 *)v33 != &PiPnpRtlActiveOperations )
        {
          if ( (char *)v33 != v5 )
          {
            v38 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v33 + 24), &Src);
            if ( v38 )
            {
              v39 = *v38;
              RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v33 + 24), v38);
              v40 = (_QWORD *)(v39 + 56);
              v41 = *(_QWORD **)(v33 + 136);
              if ( *v41 != v33 + 128 )
                goto LABEL_42;
              *v40 = v33 + 128;
              v40[1] = v41;
              *v41 = v40;
              *(_QWORD *)(v33 + 136) = v40;
            }
          }
          v33 = *(_QWORD *)v33;
        }
        PiPnpRtlOperationListReleaseLock();
        PiPnpRtlObjectEventDispatch(Src);
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src);
        v34 = (PVOID *)*((_QWORD *)v5 + 17);
        v35 = (char *)Src + 56;
        if ( *v34 != v5 + 128 )
          goto LABEL_42;
        *v35 = v5 + 128;
        v35[1] = v34;
        *v34 = v35;
        *((_QWORD *)v5 + 17) = v35;
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KeLeaveCriticalRegion();
        Src = 0LL;
      }
    }
    else
    {
      *((_DWORD *)Src + 1) |= 1u;
    }
LABEL_20:
    if ( v5 )
      PiPnpRtlEndOperation(v5);
  }
}
