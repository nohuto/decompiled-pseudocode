/*
 * XREFs of PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x1408D04C0 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PiDqQueryAppendActionEntry @ 0x1408B26E0 (PiDqQueryAppendActionEntry.c)
 *     ConstraintEval @ 0x1408B2790 (ConstraintEval.c)
 *     _PnpStringFromGuid @ 0x1408B4EBC (_PnpStringFromGuid.c)
 *     PiDqQueryEnumObject @ 0x1408C9144 (PiDqQueryEnumObject.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD070 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CE800 (PiDmEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x1408CFBA8 (PiDmObjectIsEnumerable.c)
 *     PiDqQueryLock @ 0x1408D0BAC (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x1408D0C0C (PiDqQueryUnlock.c)
 *     PiDqQueryFreeActiveData @ 0x1408D1670 (PiDqQueryFreeActiveData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqObjectManagerEnumerateAndRegisterQuery(PERESOURCE Resource, KSPIN_LOCK a2)
{
  __int64 v2; // rax
  int EnumObject; // ebx
  _BYTE *v6; // r12
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int Object; // eax
  PVOID v11; // rsi
  __int64 Pool2; // rax
  __int64 *v14; // rsi
  unsigned int j; // r15d
  __int64 *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *SpinLock; // rcx
  const wchar_t *v26; // rsi
  __int64 v27; // rax
  const wchar_t *i; // r15
  __int64 v29; // rax
  int v30; // eax
  PVOID v31; // r15
  __int64 v32; // rax
  _OWORD *v33; // [rsp+20h] [rbp-B9h]
  char v34; // [rsp+30h] [rbp-A9h]
  PVOID P; // [rsp+38h] [rbp-A1h] BYREF
  _OWORD v36[2]; // [rsp+40h] [rbp-99h] BYREF
  __int128 v37; // [rsp+60h] [rbp-79h]
  _BYTE *v38; // [rsp+70h] [rbp-69h]
  __int128 v39; // [rsp+78h] [rbp-61h] BYREF
  __int128 v40; // [rsp+88h] [rbp-51h]
  _BYTE v41[80]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  P = 0LL;
  LOBYTE(v2) = *(_BYTE *)(v2 + 40) & 1;
  v38 = 0LL;
  v34 = v2;
  EnumObject = 0;
  v6 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  memset(v36, 0, sizeof(v36));
  v37 = 0LL;
  if ( !(_BYTE)v2 )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(Resource, 1u);
  ExAcquireFastMutex((PKGUARDED_MUTEX)&Resource[1]);
  if ( (HIDWORD(Resource[2].OwnerTable) & 2) != 0 )
  {
    EnumObject = -1073741670;
  }
  else
  {
    SpinLock = (PERESOURCE *)Resource[1].SpinLock;
    if ( *SpinLock != (PERESOURCE)&Resource[1].Address )
      __fastfail(3u);
    *(_QWORD *)a2 = (char *)Resource + 192;
    *(_QWORD *)(a2 + 8) = SpinLock;
    *SpinLock = (PERESOURCE)a2;
    Resource[1].SpinLock = a2;
    ++LODWORD(Resource[2].OwnerTable);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 212));
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&Resource[1]);
  if ( EnumObject >= 0 )
  {
LABEL_2:
    PiDqQueryLock(a2);
    v7 = *(_QWORD *)(a2 + 24);
    v8 = *(_DWORD *)(v7 + 20);
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
      {
        Object = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, *(_QWORD *)(v7 + 24), &P);
        EnumObject = Object;
        if ( Object != -1073741772 )
        {
          if ( Object < 0 )
            goto LABEL_12;
          v11 = P;
          if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)P) )
            EnumObject = PiDqQueryEnumObject(a2, v11);
          PiDmObjectRelease(v11);
          goto LABEL_9;
        }
LABEL_10:
        Pool2 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x58706E50u);
        if ( Pool2 )
        {
          *(_DWORD *)(Pool2 + 32) = 0;
          *(_QWORD *)(Pool2 + 16) = 0LL;
          *(_QWORD *)(Pool2 + 24) = 0LL;
          EnumObject = 0;
          PiDqQueryAppendActionEntry(a2, Pool2);
          *(_DWORD *)(a2 + 216) |= 0x20u;
        }
        else
        {
          EnumObject = -1073741670;
        }
        goto LABEL_12;
      }
      if ( v9 != 1 )
        goto LABEL_10;
      v26 = *(const wchar_t **)(v7 + 32);
      while ( 2 )
      {
        if ( !*v26 )
          goto LABEL_9;
        v27 = -1LL;
        do
          ++v27;
        while ( v26[v27] );
        for ( i = &v26[v27 + 1]; *i; i += v29 + 1 )
        {
          if ( !wcsicmp(v26, i) )
            goto LABEL_60;
          v29 = -1LL;
          do
            ++v29;
          while ( i[v29] );
        }
        v30 = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, v26, &P);
        EnumObject = v30;
        if ( v30 == -1073741772 )
        {
          EnumObject = 0;
LABEL_60:
          v32 = -1LL;
          do
            ++v32;
          while ( v26[v32] );
          v26 += v32 + 1;
          continue;
        }
        break;
      }
      if ( v30 >= 0 )
      {
        v31 = P;
        if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)P) )
          EnumObject = PiDqQueryEnumObject(a2, v31);
        PiDmObjectRelease(v31);
        P = 0LL;
        if ( EnumObject >= 0 )
          goto LABEL_60;
      }
    }
    else
    {
      v14 = &PiDqQueryConstraintData;
      EnumObject = -1073741823;
      for ( j = 0; j < 6; ++j )
      {
        v16 = v14;
        if ( *(_DWORD *)v14 == *(_DWORD *)&Resource[2].ActiveCount )
        {
          v17 = v14[1];
          v18 = *(_QWORD *)(a2 + 24);
          v19 = *((unsigned int *)v14 + 4);
          v20 = *(_OWORD *)v17;
          v21 = *(_QWORD *)(v18 + 88);
          v22 = *(unsigned int *)(v18 + 80);
          LODWORD(v40) = *(_DWORD *)(v17 + 16);
          v33 = v36;
          v39 = v20;
          EnumObject = ConstraintEval(v22, v21, &v39, v19);
          if ( EnumObject != -1073741823 )
            break;
        }
        v14 += 4;
      }
      if ( EnumObject >= 0 )
      {
        if ( DWORD2(v37) != *((_DWORD *)v16 + 5) )
          goto LABEL_10;
        if ( DWORD2(v37) == 13 )
        {
          EnumObject = PnpStringFromGuid(v38, v41);
          if ( EnumObject < 0 )
            goto LABEL_12;
          v6 = v41;
        }
        else if ( DWORD2(v37) == 18 )
        {
          v6 = v38;
        }
        v23 = PiDmGetObject(*((unsigned int *)v16 + 6), v6, &P);
        EnumObject = v23;
        if ( v23 == -1073741772 )
          goto LABEL_10;
        if ( v23 < 0 )
          goto LABEL_12;
        EnumObject = PiDmListEnumObjectsWithCallback(
                       *((unsigned int *)v16 + 7),
                       P,
                       PiDqEnumQueryObjectsCallback,
                       a2,
                       v33);
        PiDmObjectRelease(P);
        goto LABEL_9;
      }
      if ( EnumObject == -1073741823 )
      {
        EnumObject = PiDmEnumObjectsWithCallback(
                       *(unsigned int *)&Resource[2].ActiveCount,
                       PiDqEnumQueryObjectsCallback,
                       a2);
        if ( EnumObject >= 0 )
        {
LABEL_9:
          if ( EnumObject < 0 )
            goto LABEL_12;
          goto LABEL_10;
        }
      }
    }
LABEL_12:
    PiDqQueryUnlock(a2);
    if ( EnumObject >= 0 )
      goto LABEL_13;
  }
  PiDqQueryLock(a2);
  *(_DWORD *)(a2 + 216) |= 1u;
  PiDqQueryFreeActiveData(a2);
  PiDqQueryUnlock(a2);
LABEL_13:
  if ( v34 )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)EnumObject;
}
