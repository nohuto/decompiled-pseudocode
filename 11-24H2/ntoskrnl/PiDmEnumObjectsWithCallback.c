/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x1408CE800
 * Callers:
 *     PiDmListInit @ 0x1407249B0 (PiDmListInit.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x1409C4C90 (PiDmGetObjectList.c)
 *     PpDevCfgInit @ 0x140C26FC4 (PpDevCfgInit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1403D9B90 (RtlEnumerateGenericTableLikeADirectory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B2B2C (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1408B2B50 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1408B2B9C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDqEnumQueryObjectsCallback @ 0x1408C9120 (PiDqEnumQueryObjectsCallback.c)
 *     PiDmGetObjectListCallback @ 0x1408CD240 (PiDmGetObjectListCallback.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CE46C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 */

__int64 __fastcall PiDmEnumObjectsWithCallback(
        int a1,
        __int64 (__fastcall *a2)(__int64 a1, __int64 a2, _BYTE *a3),
        __int64 a3)
{
  int ObjectListCallback; // edi
  struct _ERESOURCE *ObjectManagerForObjectType; // rsi
  const wchar_t *v8; // rax
  ULONG_PTR *v9; // rax
  ULONG_PTR v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v12; // rax
  _BYTE v14[4]; // [rsp+40h] [rbp-D8h] BYREF
  ULONG DeleteCount; // [rsp+44h] [rbp-D4h] BYREF
  PVOID P; // [rsp+48h] [rbp-D0h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v19[8]; // [rsp+68h] [rbp-B0h] BYREF
  const wchar_t *v20; // [rsp+70h] [rbp-A8h]
  int v21; // [rsp+78h] [rbp-A0h]
  int v22; // [rsp+7Ch] [rbp-9Ch]

  v18 = 0LL;
  ObjectListCallback = 0;
  memset_0(v19, 0, 0x68uLL);
  RestartKey[0] = 0LL;
  P = &v18;
  DeleteCount = 0;
  v14[0] = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  v22 = a1;
  v21 = 0;
  v8 = L"\\\\?\\";
  if ( a1 != 3 )
    v8 = &word_140AEDAC0;
  v20 = v8;
  PiDmObjectManagerAcquireSharedLock(ObjectManagerForObjectType);
  v9 = (ULONG_PTR *)RtlEnumerateGenericTableLikeADirectory(
                      (PRTL_AVL_TABLE)&ObjectManagerForObjectType[1],
                      0LL,
                      0LL,
                      0,
                      RestartKey,
                      &DeleteCount,
                      &P);
  if ( v9 )
  {
    v10 = *v9;
    _InterlockedIncrement((volatile signed __int32 *)(*v9 + 8));
  }
  else
  {
    v10 = 0LL;
  }
  PiDmObjectManagerReleaseLock(ObjectManagerForObjectType);
  while ( v10 )
  {
    PiDmObjectAcquireSharedLock((volatile signed __int64 *)v10);
    if ( (*(_DWORD *)(v10 + 32) & 1) != 0 )
    {
      PiDmObjectReleaseLock(v10);
      if ( a2 == PiDmGetObjectListCallback )
      {
        ObjectListCallback = PiDmGetObjectListCallback(v10, a3, v14);
      }
      else if ( a2 == PiDqEnumQueryObjectsCallback )
      {
        ObjectListCallback = PiDqEnumQueryObjectsCallback(v10, a3, v14);
      }
      else
      {
        ObjectListCallback = guard_dispatch_icall_no_overrides(v10, a3);
      }
    }
    else
    {
      PiDmObjectReleaseLock(v10);
    }
    if ( ObjectListCallback < 0 || v14[0] )
    {
      PiDmObjectRelease((unsigned int *)v10);
      return (unsigned int)ObjectListCallback;
    }
    P = (PVOID)v10;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(ObjectManagerForObjectType, 1u);
    v12 = (ULONG_PTR *)RtlEnumerateGenericTableLikeADirectory(
                         (PRTL_AVL_TABLE)&ObjectManagerForObjectType[1],
                         0LL,
                         0LL,
                         1u,
                         RestartKey,
                         &DeleteCount,
                         &P);
    if ( v12 )
    {
      v10 = *v12;
      _InterlockedIncrement((volatile signed __int32 *)(*v12 + 8));
    }
    else
    {
      v10 = 0LL;
    }
    ExReleaseResourceLite(ObjectManagerForObjectType);
    KeLeaveCriticalRegionThread();
    PiDmObjectRelease((unsigned int *)P);
  }
  return (unsigned int)ObjectListCallback;
}
