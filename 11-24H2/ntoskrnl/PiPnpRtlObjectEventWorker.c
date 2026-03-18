/*
 * XREFs of PiPnpRtlObjectEventWorker @ 0x1408B9D40
 * Callers:
 *     PiPnpRtlObjectEventCallback @ 0x1408B9D10 (PiPnpRtlObjectEventCallback.c)
 *     PiDqIrpPropertySet @ 0x1409FA620 (PiDqIrpPropertySet.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FFF00 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140728638 (PiDqObjectManagerMakeInconsistent.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B4894 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408BA158 (PiDmObjectProcessPropertyChange.c)
 *     KsepCacheLock @ 0x1408BB520 (KsepCacheLock.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408CB870 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1408CBF78 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408CC158 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1408CC270 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1408CC6EC (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1408CCBB0 (PiPnpRtlObjectEventDispatch.c)
 *     PiDmObjectReleaseLock @ 0x1408D12E4 (PiDmObjectReleaseLock.c)
 *     PnpAllocatePWSTR @ 0x1408D3DA4 (PnpAllocatePWSTR.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x1409FF7F4 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x140A34F10 (PiDqGetObjectManagerForPnpObjectType.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  void *v30; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rsi
  PVOID *v33; // r8
  _QWORD *v34; // rax
  int v35; // eax
  __int64 ObjectManagerForPnpObjectType; // rax
  __int64 *v37; // rax
  __int64 v38; // rbx
  _QWORD *v39; // rbx
  _QWORD *v40; // rcx
  PVOID *v41; // rdx
  _QWORD *v42; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v44[8]; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int128 v46; // [rsp+48h] [rbp-28h]
  __int128 v47; // [rsp+58h] [rbp-18h] BYREF

  v5 = 0LL;
  Src = 0LL;
  P = 0LL;
  v7 = a3;
  v44[0] = 0;
  v8 = a2;
  v46 = 0LL;
  v47 = 0LL;
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
          (__int64)v44);
        if ( !v44[0] )
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
          *(_QWORD *)&v47 = __PAIR64__(a5, (unsigned int)P);
          v46 = v19;
          *((_QWORD *)&v47 + 1) = v17;
          while ( (unsigned int)v14 < v15[19] )
          {
            if ( v18 == v15[8 * v14 + 24] )
            {
              v23 = 8LL * (unsigned int)v14;
              v24 = v46 - *(_QWORD *)&v15[v23 + 20];
              if ( (_QWORD)v46 == *(_QWORD *)&v15[v23 + 20] )
                v24 = *((_QWORD *)&v46 + 1) - *(_QWORD *)&v15[v23 + 22];
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
            v35 = v15[1];
            if ( (v35 & 4) == 0 )
            {
              v15[1] = v35 | 4;
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
          PWSTR = PnpAllocatePWSTR(*(_QWORD *)(a4 + 8), 0x7FFFFFFFLL, 1097887312LL, (char *)&v47 + 8);
          if ( PWSTR >= 0 )
          {
            v20 = (char *)Src;
            v21 = v47;
            v22 = 32LL * *((unsigned int *)Src + 19);
            *(_OWORD *)((char *)Src + v22 + 80) = v46;
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
          v41 = (PVOID *)*((_QWORD *)v5 + 17);
          v42 = (char *)Src + 56;
          if ( *v41 == v5 + 128 )
          {
            *v42 = v5 + 128;
            v42[1] = v41;
            *v41 = v42;
            *((_QWORD *)v5 + 17) = v42;
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
        v28 = *((_QWORD *)Src + 1);
        v29 = *(_DWORD *)(v28 + 32);
        *(_DWORD *)(v28 + 32) = v29 & 0xFFFFFFFE;
        PiDmObjectReleaseLock(*((_QWORD *)Src + 1));
        if ( (v29 & 1) != 0 )
          PiDmRemoveCacheReferenceForObject(v8, a1, v30);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        PiPnpRtlOperationListAcquireSharedLock();
        v32 = PiPnpRtlActiveOperations;
        v5 = (char *)P;
        while ( (__int64 *)v32 != &PiPnpRtlActiveOperations )
        {
          if ( (char *)v32 != v5 )
          {
            v37 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v32 + 24), &Src);
            if ( v37 )
            {
              v38 = *v37;
              RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v32 + 24), v37);
              v39 = (_QWORD *)(v38 + 56);
              v40 = *(_QWORD **)(v32 + 136);
              if ( *v40 != v32 + 128 )
                goto LABEL_42;
              *v39 = v32 + 128;
              v39[1] = v40;
              *v40 = v39;
              *(_QWORD *)(v32 + 136) = v39;
            }
          }
          v32 = *(_QWORD *)v32;
        }
        PiPnpRtlOperationListReleaseLock();
        PiPnpRtlObjectEventDispatch(Src);
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src);
        v33 = (PVOID *)*((_QWORD *)v5 + 17);
        v34 = (char *)Src + 56;
        if ( *v33 != v5 + 128 )
          goto LABEL_42;
        *v34 = v5 + 128;
        v34[1] = v33;
        *v33 = v34;
        *((_QWORD *)v5 + 17) = v34;
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
