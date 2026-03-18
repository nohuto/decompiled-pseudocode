/*
 * XREFs of PiPnpRtlObjectEventWorker @ 0x140836F20
 * Callers:
 *     PiPnpRtlObjectEventCallback @ 0x140836EF0 (PiPnpRtlObjectEventCallback.c)
 *     PiDqIrpPropertySet @ 0x14095E610 (PiDqIrpPropertySet.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403EAAD0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403F7C80 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14071C6B8 (PiDqObjectManagerMakeInconsistent.c)
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     PiDmObjectProcessPropertyChange @ 0x140837338 (PiDmObjectProcessPropertyChange.c)
 *     PnpAllocatePWSTR @ 0x140839154 (PnpAllocatePWSTR.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     PiDmObjectReleaseLock @ 0x1408CE958 (PiDmObjectReleaseLock.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1408D0B10 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1408D0F84 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1408D1334 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408D1380 (PiPnpRtlObjectEventCreate.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x1408D1C9C (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140968AC8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x140A01294 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  char *v20; // rcx
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *Pool2; // rax
  _DWORD *v26; // rbx
  const wchar_t *v27; // rdx
  __int64 v28; // rdx
  int v29; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v31; // rsi
  PVOID *v32; // r8
  _QWORD *v33; // rax
  int v34; // eax
  __int64 ObjectManagerForPnpObjectType; // rax
  __int64 *v36; // rax
  __int64 v37; // rbx
  _QWORD *v38; // rbx
  _QWORD *v39; // rcx
  PVOID *v40; // rdx
  _QWORD *v41; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v43[8]; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int128 v45; // [rsp+48h] [rbp-28h]
  __int128 v46; // [rsp+58h] [rbp-18h] BYREF

  v5 = 0LL;
  Src = 0LL;
  P = 0LL;
  v7 = a3;
  v43[0] = 0;
  v8 = a2;
  v45 = 0LL;
  v46 = 0LL;
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
          (__int64)v43);
        if ( !v43[0] )
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
          *(_QWORD *)&v46 = __PAIR64__(a5, (unsigned int)P);
          v45 = v19;
          *((_QWORD *)&v46 + 1) = v17;
          while ( (unsigned int)v14 < v15[19] )
          {
            if ( v18 == v15[8 * v14 + 24] )
            {
              v23 = 8LL * (unsigned int)v14;
              v24 = v45 - *(_QWORD *)&v15[v23 + 20];
              if ( (_QWORD)v45 == *(_QWORD *)&v15[v23 + 20] )
                v24 = *((_QWORD *)&v45 + 1) - *(_QWORD *)&v15[v23 + 22];
              if ( !v24 && a5 == v15[v23 + 25] )
              {
                v27 = *(const wchar_t **)&v15[v23 + 26];
                if ( v17 == v27 )
                  goto LABEL_19;
                if ( v17 && v27 )
                {
                  if ( !wcsicmp(v17, v27) )
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
            v34 = v15[1];
            if ( (v34 & 4) == 0 )
            {
              v15[1] = v34 | 4;
              SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
              v15 = Src;
            }
          }
          if ( v15[19] == v15[18] )
          {
            Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
            v26 = Pool2;
            if ( !Pool2 )
            {
              PWSTR = -1073741670;
              goto LABEL_19;
            }
            memmove(Pool2, Src, 32LL * *((unsigned int *)Src + 19) + 80);
            v26[18] *= 2;
            *(_QWORD *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src) = v26;
            ExFreePoolWithTag(Src, 0x41706E50u);
            Src = v26;
          }
          PWSTR = PnpAllocatePWSTR(*(_QWORD *)(a4 + 8), 0x7FFFFFFFLL, 1097887312LL, (char *)&v46 + 8);
          if ( PWSTR >= 0 )
          {
            v20 = (char *)Src;
            v21 = v46;
            v22 = 32LL * *((unsigned int *)Src + 19);
            *(_OWORD *)((char *)Src + v22 + 80) = v45;
            *(_OWORD *)&v20[v22 + 96] = v21;
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
          v40 = (PVOID *)*((_QWORD *)v5 + 17);
          v41 = (char *)Src + 56;
          if ( *v40 == v5 + 128 )
          {
            *v41 = v5 + 128;
            v41[1] = v40;
            *v40 = v41;
            *((_QWORD *)v5 + 17) = v41;
            goto LABEL_59;
          }
LABEL_42:
          __fastfail(3u);
        }
      }
      else
      {
        *((_DWORD *)Src + 1) |= 2u;
        KsepCacheLock(*((unsigned __int64 **)Src + 1));
        v28 = *((_QWORD *)Src + 1);
        v29 = *(_DWORD *)(v28 + 32);
        *(_DWORD *)(v28 + 32) = v29 & 0xFFFFFFFE;
        PiDmObjectReleaseLock(*((_QWORD *)Src + 1));
        if ( (v29 & 1) != 0 )
          PiDmRemoveCacheReferenceForObject(v8, a1);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        PiPnpRtlOperationListAcquireSharedLock();
        v31 = PiPnpRtlActiveOperations;
        v5 = (char *)P;
        while ( (__int64 *)v31 != &PiPnpRtlActiveOperations )
        {
          if ( (char *)v31 != v5 )
          {
            v36 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v31 + 24), &Src);
            if ( v36 )
            {
              v37 = *v36;
              RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v31 + 24), v36);
              v38 = (_QWORD *)(v37 + 56);
              v39 = *(_QWORD **)(v31 + 136);
              if ( *v39 != v31 + 128 )
                goto LABEL_42;
              *v38 = v31 + 128;
              v38[1] = v39;
              *v39 = v38;
              *(_QWORD *)(v31 + 136) = v38;
            }
          }
          v31 = *(_QWORD *)v31;
        }
        PiPnpRtlOperationListReleaseLock();
        PiPnpRtlObjectEventDispatch(Src);
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src);
        v32 = (PVOID *)*((_QWORD *)v5 + 17);
        v33 = (char *)Src + 56;
        if ( *v32 != v5 + 128 )
          goto LABEL_42;
        *v33 = v5 + 128;
        v33[1] = v32;
        *v32 = v33;
        *((_QWORD *)v5 + 17) = v33;
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
