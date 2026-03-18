/*
 * XREFs of PiPnpRtlCacheObjectBaseKey @ 0x1408D0B70
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403EB080 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403EB7E0 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiPnpRtlObjectEventRelease @ 0x140838F9C (PiPnpRtlObjectEventRelease.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1408D0F84 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiDmGetObject @ 0x1408D1680 (PiDmGetObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlCacheObjectBaseKey(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  char *v8; // rdi
  __int64 *v9; // rsi
  __int64 *i; // rax
  unsigned int *v12; // r15
  int v13; // ebx
  _WORD *v14; // rax
  __int64 v15; // rcx
  unsigned __int16 v16; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v18; // r9d
  unsigned __int16 *v19; // r10
  unsigned __int16 v20; // dx
  int v21; // r11d
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v23; // rax
  char **v24; // rax
  int Object; // eax
  _QWORD *Pool2; // rax
  PVOID inserted; // rax
  _QWORD *v28; // rdi
  TABLE_SEARCH_RESULT SearchResult; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v30; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID NodeOrParent; // [rsp+60h] [rbp-A0h] BYREF
  int *Buffer; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v36[4]; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 *v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v39[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]

  v34 = a1;
  if ( a3 >= 7 )
    return 3221225659LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
  for ( i = (__int64 *)PiPnpRtlActiveOperations; i != &PiPnpRtlActiveOperations; v9 = 0LL )
  {
    v9 = i;
    if ( (struct _KTHREAD *)i[2] == CurrentThread )
      break;
    i = (__int64 *)*i;
  }
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v9 )
    return 3221226021LL;
  PiPnpRtlDisableRemoveOperationDispatch();
  v38 = 0LL;
  memset_0(v39, 0, 0x68uLL);
  v35 = 0;
  memset_0(v36, 0, 0x4CuLL);
  NodeOrParent = 0LL;
  Buffer = &v35;
  SearchResult = TableEmptyTree;
  v12 = 0LL;
  v30 = 0LL;
  v13 = 0;
  v40 = a2;
  v42 = a3;
  *(_OWORD *)P = 0LL;
  if ( !a2 )
    goto LABEL_48;
  v14 = (_WORD *)a2;
  v15 = 0x7FFFLL;
  do
  {
    if ( !*v14 )
      break;
    ++v14;
    --v15;
  }
  while ( v15 );
  v13 = -1073741811;
  if ( v15 )
  {
    v13 = 0;
    v16 = 2 * (0x7FFF - v15);
  }
  else
  {
LABEL_48:
    v16 = (unsigned __int16)P[0];
  }
  if ( v13 >= 0 )
  {
    if ( a3 == 3 && v16 <= 8u )
    {
      v13 = -1073741772;
      goto LABEL_37;
    }
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v21 = v20 >> 1;
    Flink = CurrentServerSiloGlobals[75].Flink;
    if ( v21 )
    {
      do
      {
        v23 = *v19++;
        --v21;
        if ( (unsigned int)v23 >= 0x61 )
        {
          if ( (unsigned int)v23 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v23 >= 0xC0u )
              LOWORD(v23) = *((_WORD *)&Flink->Flink
                            + (v23 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v23 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v23 >> 8))))
                          + v23;
          }
          else
          {
            LOWORD(v23) = v23 - 32;
          }
        }
        v18 = (unsigned __int16)v23 + 65599 * v18;
      }
      while ( v21 );
      v8 = 0LL;
    }
    v41 = v18;
    v13 = 0;
    v37 = &v38;
    v24 = (char **)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v9 + 3), &Buffer, &NodeOrParent, &SearchResult);
    if ( v24 )
    {
      v8 = *v24;
      if ( *v24 )
        goto LABEL_41;
    }
    Object = PiDmGetObject((unsigned int)a3, a2, &v30);
    v13 = Object;
    if ( Object == -1073741772 )
    {
      v12 = v30;
      v8 = 0LL;
      v13 = 0;
      goto LABEL_37;
    }
    if ( Object >= 0 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
      P[0] = Pool2;
      v8 = (char *)Pool2;
      if ( Pool2 )
      {
        *Pool2 = 0LL;
        Pool2[2] = 0LL;
        Pool2[3] = 0LL;
        Pool2[4] = 0LL;
        Pool2[5] = 0LL;
        Pool2[6] = 0LL;
        Pool2[7] = 0LL;
        Pool2[8] = 0LL;
        Pool2[9] = 5LL;
        *(_DWORD *)Pool2 = 1;
        Pool2[1] = v30;
        inserted = RtlInsertElementGenericTableFullAvl((PRTL_AVL_TABLE)(v9 + 3), P, 8u, 0LL, NodeOrParent, SearchResult);
        v8 = (char *)P[0];
        if ( inserted )
          goto LABEL_40;
        v13 = -1073741670;
        goto LABEL_30;
      }
      v13 = -1073741670;
    }
    v12 = v30;
LABEL_30:
    if ( v8 )
      PiPnpRtlObjectEventRelease(v8);
    v8 = 0LL;
  }
LABEL_37:
  if ( v12 )
  {
    PiDmObjectRelease(v12);
    v8 = 0LL;
  }
  if ( v13 < 0 )
    goto LABEL_43;
LABEL_40:
  if ( v8 )
  {
LABEL_41:
    v28 = v8 + 16;
    if ( *v28 || (v13 = PnpOpenObjectRegKey(v34, a2, a3, 0x2000000, 0, (__int64)v28), v13 >= 0) )
      *a4 = *v28;
    else
      *v28 = 0LL;
  }
LABEL_43:
  ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v13;
}
