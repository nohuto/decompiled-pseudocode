/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x1408D0E10
 * Callers:
 *     PiDmListInit @ 0x140726E20 (PiDmListInit.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B4A8C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x1409D4E60 (PiDmGetObjectList.c)
 *     PpDevCfgInit @ 0x140C24F94 (PpDevCfgInit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1403EA1D0 (RtlEnumerateGenericTableLikeADirectory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B523C (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1408B5260 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1408B52AC (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDqEnumQueryObjectsCallback @ 0x1408CB6F0 (PiDqEnumQueryObjectsCallback.c)
 *     PiDmGetObjectListCallback @ 0x1408CF850 (PiDmGetObjectListCallback.c)
 *     PiDmObjectRelease @ 0x1408D0A30 (PiDmObjectRelease.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408D0A7C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408D12E4 (PiDmObjectReleaseLock.c)
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
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v13; // rax
  _BYTE v15[4]; // [rsp+40h] [rbp-D8h] BYREF
  ULONG DeleteCount; // [rsp+44h] [rbp-D4h] BYREF
  PVOID P; // [rsp+48h] [rbp-D0h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v20[8]; // [rsp+68h] [rbp-B0h] BYREF
  const wchar_t *v21; // [rsp+70h] [rbp-A8h]
  int v22; // [rsp+78h] [rbp-A0h]
  int v23; // [rsp+7Ch] [rbp-9Ch]

  v19 = 0LL;
  ObjectListCallback = 0;
  memset_0(v20, 0, 0x68uLL);
  RestartKey[0] = 0LL;
  P = &v19;
  DeleteCount = 0;
  v15[0] = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  v23 = a1;
  v22 = 0;
  v8 = L"\\\\?\\";
  if ( a1 != 3 )
    v8 = &word_140AEA890;
  v21 = v8;
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
      if ( (char *)a2 == (char *)PiDmGetObjectListCallback )
      {
        ObjectListCallback = PiDmGetObjectListCallback(v10, a3, v15, v11);
      }
      else if ( a2 == PiDqEnumQueryObjectsCallback )
      {
        ObjectListCallback = PiDqEnumQueryObjectsCallback(v10, a3, v15);
      }
      else
      {
        ObjectListCallback = guard_dispatch_icall_no_overrides(v10, a3, v15, v11);
      }
    }
    else
    {
      PiDmObjectReleaseLock(v10);
    }
    if ( ObjectListCallback < 0 || v15[0] )
    {
      PiDmObjectRelease((unsigned int *)v10);
      return (unsigned int)ObjectListCallback;
    }
    P = (PVOID)v10;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(ObjectManagerForObjectType, 1u);
    v13 = (ULONG_PTR *)RtlEnumerateGenericTableLikeADirectory(
                         (PRTL_AVL_TABLE)&ObjectManagerForObjectType[1],
                         0LL,
                         0LL,
                         1u,
                         RestartKey,
                         &DeleteCount,
                         &P);
    if ( v13 )
    {
      v10 = *v13;
      _InterlockedIncrement((volatile signed __int32 *)(*v13 + 8));
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
